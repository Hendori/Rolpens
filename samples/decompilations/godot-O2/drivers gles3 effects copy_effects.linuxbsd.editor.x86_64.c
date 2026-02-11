
/* GLES3::CopyEffects::get_singleton() */

undefined8 GLES3::CopyEffects::get_singleton(void)

{
  return singleton;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GLES3::CopyEffects::~CopyEffects() */

void __thiscall GLES3::CopyEffects::~CopyEffects(CopyEffects *this)

{
  singleton = 0;
  (*_glad_glDeleteBuffers)(1,this + 0x138);
  (*_glad_glDeleteVertexArrays)(1,this + 0x13c);
  (*_glad_glDeleteBuffers)(1,this + 0x140);
  (*_glad_glDeleteVertexArrays)(1,this + 0x144);
  ShaderGLES3::version_free(this,*(undefined8 *)(this + 0x130));
  *(undefined ***)this = &PTR__init_00109580;
  ShaderGLES3::~ShaderGLES3((ShaderGLES3 *)this);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GLES3::CopyEffects::bilinear_blur(unsigned int, int, Rect2i const&) */

void __thiscall
GLES3::CopyEffects::bilinear_blur(CopyEffects *this,uint param_1,int param_2,Rect2i *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  long in_FS_OFFSET;
  undefined4 local_48 [2];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  (*_glad_glGenFramebuffers)(2,local_48);
  (*_glad_glBindFramebuffer)(0x8ca8,local_48[0]);
  (*_glad_glFramebufferTexture2D)(0x8ca8,0x8ce0,0xde1,param_1,0);
  if (1 < param_2) {
    iVar5 = *(int *)param_3;
    iVar3 = *(int *)(param_3 + 8);
    iVar1 = *(int *)(param_3 + 0xc);
    iVar9 = *(int *)(param_3 + 4);
    uVar7 = 1;
    do {
      iVar2 = iVar1 >> 1;
      iVar6 = iVar5 >> 1;
      iVar10 = iVar9 >> 1;
      if (iVar2 < 1) {
        iVar2 = 1;
      }
      iVar4 = iVar3 >> 1;
      if (iVar4 < 1) {
        iVar4 = 1;
      }
      (*_glad_glBindFramebuffer)(0x8ca9,local_48[uVar7 & 1]);
      uVar8 = uVar7 + 1;
      (*_glad_glFramebufferTexture2D)(0x8ca9,0x8ce0,0xde1,param_1,uVar7);
      (*_glad_glBlitFramebuffer)
                (iVar5,iVar9,iVar3 + iVar5,iVar1 + iVar9,iVar6,iVar10,iVar6 + iVar4,iVar10 + iVar2,
                 0x4000,0x2601);
      (*_glad_glBindFramebuffer)(0x8ca8,local_48[uVar7 & 1]);
      iVar5 = iVar6;
      iVar3 = iVar4;
      iVar1 = iVar2;
      iVar9 = iVar10;
      uVar7 = uVar8;
    } while (param_2 != uVar8);
  }
  (*_glad_glBindFramebuffer)(0x8ca8,(undefined4)TextureStorage::system_fbo);
  (*_glad_glBindFramebuffer)(0x8ca9,(undefined4)TextureStorage::system_fbo);
  (*_glad_glDeleteFramebuffers)(2,local_48);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GLES3::CopyEffects::draw_screen_triangle() */

void __thiscall GLES3::CopyEffects::draw_screen_triangle(CopyEffects *this)

{
  (*_glad_glBindVertexArray)(*(undefined4 *)(this + 0x13c));
  (*_glad_glDrawArrays)(4,0,3);
                    /* WARNING: Could not recover jumptable at 0x0010026c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*_glad_glBindVertexArray)(0);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GLES3::CopyEffects::draw_screen_quad() */

void __thiscall GLES3::CopyEffects::draw_screen_quad(CopyEffects *this)

{
  (*_glad_glBindVertexArray)(*(undefined4 *)(this + 0x144));
  (*_glad_glDrawArrays)(4,0,6);
                    /* WARNING: Could not recover jumptable at 0x001002ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*_glad_glBindVertexArray)(0);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GLES3::CopyEffects::CopyEffects() */

void __thiscall GLES3::CopyEffects::CopyEffects(CopyEffects *this)

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
  long local_c0;
  undefined *local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined2 local_88;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  ShaderGLES3::ShaderGLES3((ShaderGLES3 *)this);
  *(undefined8 *)(this + 0x130) = 0;
  *(undefined ***)this = &PTR__init_00109580;
  local_b8 = &_LC6;
  *(undefined1 (*) [16])(this + 0x138) = (undefined1  [16])0x0;
  local_c0 = 0;
  local_b0 = 0;
  singleton = this;
  String::parse_latin1((StrRange *)&local_c0);
  ShaderGLES3::initialize((String *)this,(int)(StrRange *)&local_c0);
  lVar3 = local_c0;
  if (local_c0 != 0) {
    LOCK();
    plVar1 = (long *)(local_c0 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_c0 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  uVar6 = ShaderGLES3::version_create();
  local_c0 = 0;
  *(ulong *)(this + 0x130) = uVar6;
  if (*(int *)(this + 0x120) < 1) {
    _err_print_index_error
              ("_version_bind_shader","./drivers/gles3/shader_gles3.h",0xbb,0,
               (long)*(int *)(this + 0x120),"p_variant","variant_count","",false,false);
    goto LAB_001005c7;
  }
  if ((uVar6 != 0) && ((uint)uVar6 < *(uint *)(this + 0x54))) {
    uVar11 = ((uVar6 & 0xffffffff) % (ulong)*(uint *)(this + 0x50)) * 0x80 +
             *(long *)(*(long *)(this + 0x40) +
                      ((uVar6 & 0xffffffff) / (ulong)*(uint *)(this + 0x50)) * 8);
    if (*(int *)(uVar11 + 0x78) == (int)(uVar6 >> 0x20)) {
      if ((*(int *)(uVar11 + 0x68) == 0) &&
         (ShaderGLES3::_initialize_version((Version *)this), *(int *)(uVar11 + 0x68) == 0)) {
LAB_0010082f:
        _err_print_index_error
                  ("operator[]","./core/templates/local_vector.h",0xb2,0,0,"p_index","count","",
                   false,true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      lVar5 = local_c0;
      plVar1 = *(long **)(uVar11 + 0x70);
      uVar2 = *(uint *)(plVar1 + 3);
      uVar7 = (ulong)uVar2;
      lVar3 = plVar1[2];
      uVar6 = local_c0 * 0x3ffff - 1;
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
        while ((uVar9 != (uint)uVar10 || (local_c0 != *(long *)(plVar1[1] + uVar6 * 8)))) {
          uVar8 = uVar8 + 1;
          uVar6 = (ulong)((int)uVar6 + 1) % uVar7;
          uVar9 = *(uint *)(lVar3 + uVar6 * 4);
          if ((uVar9 == 0) || (((uVar2 + (int)uVar6) - uVar9 % uVar2) % uVar2 < uVar8))
          goto LAB_00100878;
        }
        puVar12 = (undefined4 *)(*plVar1 + uVar6 * 0x38);
        if (puVar12 != (undefined4 *)0x0) {
          if (*(char *)(puVar12 + 0xc) == '\0') goto LAB_001005ac;
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
          if (uVar9 == 0) goto LAB_001007d0;
          goto LAB_00100589;
        }
      }
LAB_00100878:
      local_88 = 0;
      local_b8 = (undefined *)0x0;
      local_b0 = 0;
      local_a8 = 0;
      local_a0 = 0;
      local_98 = 0;
      local_90 = 0;
      ShaderGLES3::_compile_specialization
                ((Specialization *)this,(uint)(Specialization *)&local_b8,(Version *)0x0,uVar11);
      if ((*(int *)(uVar11 + 0x68) == 0) ||
         (OAHashMap<unsigned_long,ShaderGLES3::Version::Specialization,HashMapHasherDefault,HashMapComparatorDefault<unsigned_long>>
          ::insert(*(OAHashMap<unsigned_long,ShaderGLES3::Version::Specialization,HashMapHasherDefault,HashMapComparatorDefault<unsigned_long>>
                     **)(uVar11 + 0x70),(ulong *)&local_c0,(Specialization *)&local_b8),
         *(int *)(uVar11 + 0x68) == 0)) goto LAB_0010082f;
      plVar1 = *(long **)(uVar11 + 0x70);
      uVar2 = *(uint *)(plVar1 + 3);
      uVar6 = uVar10 % (ulong)uVar2;
      uVar9 = *(uint *)(plVar1[2] + uVar6 * 4);
      if (uVar9 != 0) {
        uVar8 = 0;
LAB_0010095a:
        if (((uint)uVar10 != uVar9) || (lVar5 != *(long *)(plVar1[1] + uVar6 * 8)))
        goto LAB_00100920;
        puVar12 = (undefined4 *)(*plVar1 + uVar6 * 0x38);
        if (this[0xa0] != (CopyEffects)0x0) {
          ShaderGLES3::_save_to_cache((Version *)this);
        }
        ShaderGLES3::Version::Specialization::~Specialization((Specialization *)&local_b8);
LAB_001005a3:
        if (puVar12 != (undefined4 *)0x0) {
LAB_001005ac:
          if (*(char *)((long)puVar12 + 0x31) != '\0') {
            (*_glad_glUseProgram)(*puVar12);
            *(undefined4 **)(this + 0x128) = puVar12;
            goto LAB_001005c7;
          }
        }
        goto LAB_001007d0;
      }
LAB_001007b6:
      if (this[0xa0] == (CopyEffects)0x0) {
        ShaderGLES3::Version::Specialization::~Specialization((Specialization *)&local_b8);
      }
      else {
        ShaderGLES3::_save_to_cache((Version *)this);
        ShaderGLES3::Version::Specialization::~Specialization((Specialization *)&local_b8);
      }
      goto LAB_001007d0;
    }
    if (*(int *)(uVar11 + 0x78) + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("_version_bind_shader","./drivers/gles3/shader_gles3.h",0xbe,
                   "Parameter \"version\" is null.",0,0);
  goto LAB_001005c7;
LAB_00100920:
  uVar8 = uVar8 + 1;
  uVar6 = (ulong)((int)uVar6 + 1) % (ulong)uVar2;
  uVar9 = *(uint *)(plVar1[2] + uVar6 * 4);
  if ((uVar9 == 0) || (((uVar2 + (int)uVar6) - uVar9 % uVar2) % uVar2 < uVar8)) goto LAB_001007b6;
  goto LAB_0010095a;
  while( true ) {
    uVar8 = uVar8 + 1;
    uVar6 = (ulong)((int)uVar6 + 1) % uVar7;
    uVar9 = *(uint *)(lVar3 + uVar6 * 4);
    if ((uVar9 == 0) || (((uVar2 + (int)uVar6) - uVar9 % uVar2) % uVar2 < uVar8)) break;
LAB_00100589:
    if ((uVar9 == (uint)uVar11) && (*(long *)(this + 0x110) == *(long *)(plVar1[1] + uVar6 * 8))) {
      puVar12 = (undefined4 *)(*plVar1 + uVar6 * 0x38);
      goto LAB_001005a3;
    }
  }
LAB_001007d0:
  if (ShaderGLES3::_version_bind_shader(RID,int,unsigned_long)::first_print != '\0') {
    _err_print_error("_version_bind_shader","./drivers/gles3/shader_gles3.h",0xda,
                     "shader failed to compile, unable to bind shader.",0,1);
    ShaderGLES3::_version_bind_shader(RID,int,unsigned_long)::first_print = '\0';
  }
LAB_001005c7:
  (*_glad_glGenBuffers)(1,this + 0x138);
  (*_glad_glBindBuffer)(0x8892,*(undefined4 *)(this + 0x138));
  local_68 = _LC21;
  local_78 = __LC20;
  uStack_70 = _UNK_0010a8e8;
  (*_glad_glBufferData)(0x8892,0x18,&local_78,0x88e4);
  (*_glad_glBindBuffer)(0x8892,0);
  (*_glad_glGenVertexArrays)(1,this + 0x13c);
  (*_glad_glBindVertexArray)(*(undefined4 *)(this + 0x13c));
  (*_glad_glBindBuffer)(0x8892,*(undefined4 *)(this + 0x138));
  (*_glad_glVertexAttribPointer)(0,2,0x1406,0,8,0);
  (*_glad_glEnableVertexAttribArray)(0);
  (*_glad_glBindVertexArray)(0);
  (*_glad_glBindBuffer)(0x8892,0);
  (*_glad_glGenBuffers)(1,this + 0x140);
  (*_glad_glBindBuffer)(0x8892,*(undefined4 *)(this + 0x140));
  local_78 = __LC22;
  uStack_70 = __LC35;
  local_68 = __LC23;
  uStack_60 = _UNK_0010a908;
  local_58 = __LC24;
  uStack_50 = _UNK_0010a918;
  (*_glad_glBufferData)(0x8892,0x30,&local_78,0x88e4);
  (*_glad_glBindBuffer)(0x8892,0);
  (*_glad_glGenVertexArrays)(1,this + 0x144);
  (*_glad_glBindVertexArray)(*(undefined4 *)(this + 0x144));
  (*_glad_glBindBuffer)(0x8892,*(undefined4 *)(this + 0x140));
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
/* GLES3::CopyEffects::copy_to_rect(Rect2 const&) */

void __thiscall GLES3::CopyEffects::copy_to_rect(CopyEffects *this,Rect2 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  long lVar7;
  code *pcVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  int iVar12;
  long lVar13;
  undefined8 uVar14;
  uint uVar15;
  ulong uVar16;
  undefined4 uVar17;
  char *pcVar18;
  uint uVar19;
  ulong uVar20;
  undefined4 *puVar21;
  long in_FS_OFFSET;
  char *pcVar22;
  ulong local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined2 local_48;
  long local_40;
  
  uVar10 = *(ulong *)(this + 0x130);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_80 = 0;
  if (1 < *(int *)(this + 0x120)) {
    if ((uVar10 != 0) && ((uint)uVar10 < *(uint *)(this + 0x54))) {
      uVar20 = ((uVar10 & 0xffffffff) % (ulong)*(uint *)(this + 0x50)) * 0x80 +
               *(long *)(*(long *)(this + 0x40) +
                        ((uVar10 & 0xffffffff) / (ulong)*(uint *)(this + 0x50)) * 8);
      if (*(int *)(uVar20 + 0x78) == (int)(uVar10 >> 0x20)) {
        uVar5 = *(uint *)(uVar20 + 0x68);
        if (uVar5 == 0) {
          ShaderGLES3::_initialize_version((Version *)this);
          uVar5 = *(uint *)(uVar20 + 0x68);
        }
        uVar10 = local_80;
        uVar9 = (ulong)uVar5;
        if (uVar5 < 2) {
LAB_00101130:
          _err_print_index_error
                    ("operator[]","./core/templates/local_vector.h",0xb2,1,uVar9,"p_index","count",
                     "",false,true);
          _err_flush_stdout();
                    /* WARNING: Does not return */
          pcVar8 = (code *)invalidInstructionException();
          (*pcVar8)();
        }
        lVar13 = *(long *)(uVar20 + 0x70);
        uVar5 = *(uint *)(lVar13 + 0x38);
        uVar11 = (ulong)uVar5;
        lVar7 = *(long *)(lVar13 + 0x30);
        uVar9 = local_80 * 0x3ffff - 1;
        uVar9 = (uVar9 ^ uVar9 >> 0x1f) * 0x15;
        uVar9 = (uVar9 ^ uVar9 >> 0xb) * 0x41;
        uVar9 = uVar9 >> 0x16 ^ uVar9;
        uVar16 = uVar9 & 0xffffffff;
        if ((int)uVar9 == 0) {
          uVar16 = 1;
        }
        uVar9 = uVar16 % uVar11;
        uVar15 = *(uint *)(lVar7 + uVar9 * 4);
        if (uVar15 != 0) {
          uVar19 = 0;
          while (((uint)uVar16 != uVar15 ||
                 (local_80 != *(ulong *)(*(long *)(lVar13 + 0x28) + uVar9 * 8)))) {
            uVar19 = uVar19 + 1;
            uVar9 = (ulong)((int)uVar9 + 1) % uVar11;
            uVar15 = *(uint *)(lVar7 + uVar9 * 4);
            if ((uVar15 == 0) || (((uVar5 + (int)uVar9) - uVar15 % uVar5) % uVar5 < uVar19))
            goto LAB_00100ff0;
          }
          puVar21 = (undefined4 *)(*(long *)(lVar13 + 0x20) + uVar9 * 0x38);
          if (puVar21 != (undefined4 *)0x0) {
            if (*(char *)(puVar21 + 0xc) == '\0') goto LAB_00100cd4;
            uVar10 = *(long *)(this + 0x110) * 0x3ffff - 1;
            uVar10 = (uVar10 ^ uVar10 >> 0x1f) * 0x15;
            uVar10 = (uVar10 ^ uVar10 >> 0xb) * 0x41;
            uVar10 = uVar10 >> 0x16 ^ uVar10;
            uVar20 = uVar10 & 0xffffffff;
            if ((int)uVar10 == 0) {
              uVar20 = 1;
            }
            uVar19 = 0;
            uVar10 = uVar20 % uVar11;
            uVar15 = *(uint *)(lVar7 + uVar10 * 4);
            if (uVar15 == 0) goto LAB_00100f70;
            goto LAB_00100cb1;
          }
        }
LAB_00100ff0:
        local_48 = 0;
        local_78 = 0;
        local_70 = 0;
        local_68 = 0;
        local_60 = 0;
        local_58 = 0;
        local_50 = 0;
        ShaderGLES3::_compile_specialization
                  ((Specialization *)this,(uint)(Specialization *)&local_78,(Version *)0x1,uVar20);
        uVar9 = (ulong)*(uint *)(uVar20 + 0x68);
        if (*(uint *)(uVar20 + 0x68) < 2) goto LAB_00101130;
        OAHashMap<unsigned_long,ShaderGLES3::Version::Specialization,HashMapHasherDefault,HashMapComparatorDefault<unsigned_long>>
        ::insert((OAHashMap<unsigned_long,ShaderGLES3::Version::Specialization,HashMapHasherDefault,HashMapComparatorDefault<unsigned_long>>
                  *)(*(long *)(uVar20 + 0x70) + 0x20),&local_80,(Specialization *)&local_78);
        uVar9 = (ulong)*(uint *)(uVar20 + 0x68);
        if (*(uint *)(uVar20 + 0x68) < 2) goto LAB_00101130;
        lVar13 = *(long *)(uVar20 + 0x70);
        uVar5 = *(uint *)(lVar13 + 0x38);
        uVar20 = uVar16 % (ulong)uVar5;
        uVar15 = *(uint *)(*(long *)(lVar13 + 0x30) + uVar20 * 4);
        if (uVar15 != 0) {
          uVar19 = 0;
LAB_001010e9:
          if ((uVar15 != (uint)uVar16) ||
             (uVar10 != *(ulong *)(*(long *)(lVar13 + 0x28) + uVar20 * 8))) goto LAB_001010b0;
          puVar21 = (undefined4 *)(*(long *)(lVar13 + 0x20) + uVar20 * 0x38);
          if (this[0xa0] != (CopyEffects)0x0) {
            ShaderGLES3::_save_to_cache((Version *)this);
          }
          ShaderGLES3::Version::Specialization::~Specialization((Specialization *)&local_78);
LAB_00100ccb:
          if (puVar21 != (undefined4 *)0x0) {
LAB_00100cd4:
            if (*(char *)((long)puVar21 + 0x31) != '\0') {
              (*_glad_glUseProgram)(*puVar21);
              uVar1 = *(undefined4 *)(param_1 + 0xc);
              uVar2 = *(undefined4 *)param_1;
              *(undefined4 **)(this + 0x128) = puVar21;
              pcVar8 = _glad_glUniform4f;
              uVar3 = *(undefined4 *)(param_1 + 8);
              uVar4 = *(undefined4 *)(param_1 + 4);
              uVar10 = *(ulong *)(this + 0x130);
              if (*(int *)(this + 0xd0) < 1) {
                _err_print_index_error
                          ("_version_get_uniform","./drivers/gles3/shader_gles3.h",0xe4,0,
                           (long)*(int *)(this + 0xd0),"p_which","uniform_count","",false,false);
                goto LAB_00100f28;
              }
              if (uVar10 == 0) {
LAB_001012e0:
                _err_print_error("_version_get_uniform","./drivers/gles3/shader_gles3.h",0xe6,
                                 "Parameter \"version\" is null.",0,0);
              }
              else {
                if (*(uint *)(this + 0x54) <= (uint)uVar10) goto LAB_001012e0;
                lVar13 = ((uVar10 & 0xffffffff) % (ulong)*(uint *)(this + 0x50)) * 0x80 +
                         *(long *)(*(long *)(this + 0x40) +
                                  ((uVar10 & 0xffffffff) / (ulong)*(uint *)(this + 0x50)) * 8);
                iVar6 = *(int *)(lVar13 + 0x78);
                if (iVar6 != (int)(uVar10 >> 0x20)) {
                  if (iVar6 + 0x80000000U < 0x7fffffff) {
                    _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                                     "Method/function failed. Returning: nullptr",
                                     "Attempting to use an uninitialized RID",0,0);
                  }
                  goto LAB_001012e0;
                }
                if (*(int *)(lVar13 + 0x68) < 2) {
                  _err_print_index_error
                            ("_version_get_uniform","./drivers/gles3/shader_gles3.h",0xe7,1,
                             (long)*(int *)(lVar13 + 0x68),"p_variant",
                             "int(version->variants.size())","",false,false);
                  goto LAB_00100f28;
                }
                lVar13 = *(long *)(lVar13 + 0x70);
                uVar5 = *(uint *)(lVar13 + 0x38);
                uVar20 = 0x2aeaa2ab % (ulong)uVar5;
                uVar15 = *(uint *)(*(long *)(lVar13 + 0x30) + uVar20 * 4);
                if (uVar15 == 0) {
LAB_00101350:
                  _err_print_error("_version_get_uniform","./drivers/gles3/shader_gles3.h",0xe9,
                                   "Parameter \"spec\" is null.",0,0);
                }
                else {
                  uVar19 = 0;
                  while ((uVar15 != 0x2aeaa2ab ||
                         (*(long *)(*(long *)(lVar13 + 0x28) + uVar20 * 8) != 0))) {
                    uVar19 = uVar19 + 1;
                    uVar20 = (ulong)((int)uVar20 + 1) % (ulong)uVar5;
                    uVar15 = *(uint *)(*(long *)(lVar13 + 0x30) + uVar20 * 4);
                    if ((uVar15 == 0) || (((uVar5 + (int)uVar20) - uVar15 % uVar5) % uVar5 < uVar19)
                       ) goto LAB_00101350;
                  }
                  lVar13 = *(long *)(lVar13 + 0x20) + uVar20 * 0x38;
                  if (lVar13 == 0) goto LAB_00101350;
                  if (*(int *)(lVar13 + 0x10) < 1) {
                    _err_print_index_error
                              ("_version_get_uniform","./drivers/gles3/shader_gles3.h",0xea,0,
                               (long)*(int *)(lVar13 + 0x10),"p_which",
                               "int(spec->uniform_location.size())","",false,false);
                  }
                  else if (-1 < **(int **)(lVar13 + 0x18)) {
                    if (*(int *)(this + 0xd0) < 1) {
                      _err_print_index_error
                                ("_version_get_uniform","./drivers/gles3/shader_gles3.h",0xe4,0,
                                 (long)*(int *)(this + 0xd0),"p_which","uniform_count","",false,
                                 false);
LAB_00101421:
                      uVar17 = 0xffffffff;
                    }
                    else {
                      if (*(uint *)(this + 0x54) <= (uint)uVar10) {
LAB_0010149a:
                        pcVar18 = "Parameter \"version\" is null.";
                        uVar14 = 0xe6;
LAB_001014c4:
                        _err_print_error("_version_get_uniform","./drivers/gles3/shader_gles3.h",
                                         uVar14,pcVar18,0,0);
                        goto LAB_00101421;
                      }
                      lVar13 = ((uVar10 & 0xffffffff) % (ulong)*(uint *)(this + 0x50)) * 0x80 +
                               *(long *)(*(long *)(this + 0x40) +
                                        ((uVar10 & 0xffffffff) / (ulong)*(uint *)(this + 0x50)) * 8)
                      ;
                      if (iVar6 != *(int *)(lVar13 + 0x78)) {
                        if (*(int *)(lVar13 + 0x78) + 0x80000000U < 0x7fffffff) {
                          _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                                           "Method/function failed. Returning: nullptr",
                                           "Attempting to use an uninitialized RID",0,0);
                        }
                        goto LAB_0010149a;
                      }
                      iVar6 = *(int *)(lVar13 + 0x68);
                      if (iVar6 < 2) {
                        lVar13 = 1;
                        iVar12 = 0xe7;
                        pcVar18 = "p_variant";
                        pcVar22 = "int(version->variants.size())";
LAB_0010154b:
                        _err_print_index_error
                                  ("_version_get_uniform","./drivers/gles3/shader_gles3.h",iVar12,
                                   lVar13,(long)iVar6,pcVar18,pcVar22,"",false,false);
                        goto LAB_00101421;
                      }
                      lVar13 = *(long *)(lVar13 + 0x70);
                      uVar5 = *(uint *)(lVar13 + 0x38);
                      uVar10 = 0x2aeaa2ab % (ulong)uVar5;
                      uVar15 = *(uint *)(*(long *)(lVar13 + 0x30) + uVar10 * 4);
                      if (uVar15 == 0) {
LAB_00101580:
                        pcVar18 = "Parameter \"spec\" is null.";
                        uVar14 = 0xe9;
                        goto LAB_001014c4;
                      }
                      uVar19 = 0;
                      while ((uVar15 != 0x2aeaa2ab ||
                             (*(long *)(*(long *)(lVar13 + 0x28) + uVar10 * 8) != 0))) {
                        uVar19 = uVar19 + 1;
                        uVar10 = (ulong)((int)uVar10 + 1) % (ulong)uVar5;
                        uVar15 = *(uint *)(*(long *)(lVar13 + 0x30) + uVar10 * 4);
                        if ((uVar15 == 0) ||
                           (((uVar5 + (int)uVar10) - uVar15 % uVar5) % uVar5 < uVar19))
                        goto LAB_00101580;
                      }
                      lVar13 = *(long *)(lVar13 + 0x20) + uVar10 * 0x38;
                      if (lVar13 == 0) goto LAB_00101580;
                      iVar6 = *(int *)(lVar13 + 0x10);
                      if (iVar6 < 1) {
                        lVar13 = 0;
                        pcVar18 = "p_which";
                        iVar12 = 0xea;
                        pcVar22 = "int(spec->uniform_location.size())";
                        goto LAB_0010154b;
                      }
                      uVar17 = **(undefined4 **)(lVar13 + 0x18);
                    }
                    (*pcVar8)(uVar2,uVar4,uVar3,uVar1,uVar17);
                  }
                }
              }
LAB_00100f28:
              if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                draw_screen_quad(this);
                return;
              }
              goto LAB_001015ee;
            }
          }
          goto LAB_00100f70;
        }
LAB_00100f52:
        if (this[0xa0] == (CopyEffects)0x0) {
          ShaderGLES3::Version::Specialization::~Specialization((Specialization *)&local_78);
        }
        else {
          ShaderGLES3::_save_to_cache((Version *)this);
          ShaderGLES3::Version::Specialization::~Specialization((Specialization *)&local_78);
        }
        goto LAB_00100f70;
      }
      if (*(int *)(uVar20 + 0x78) + 0x80000000U < 0x7fffffff) {
        _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                         "Method/function failed. Returning: nullptr",
                         "Attempting to use an uninitialized RID",0,0);
      }
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      _err_print_error("_version_bind_shader","./drivers/gles3/shader_gles3.h",0xbe,
                       "Parameter \"version\" is null.",0,0);
      return;
    }
    goto LAB_001015ee;
  }
  _err_print_index_error
            ("_version_bind_shader","./drivers/gles3/shader_gles3.h",0xbb,1,
             (long)*(int *)(this + 0x120),"p_variant","variant_count","",false,false);
  goto LAB_00100f79;
LAB_001010b0:
  uVar19 = uVar19 + 1;
  uVar20 = (ulong)((int)uVar20 + 1) % (ulong)uVar5;
  uVar15 = *(uint *)(*(long *)(lVar13 + 0x30) + uVar20 * 4);
  if ((uVar15 == 0) || (((uVar5 + (int)uVar20) - uVar15 % uVar5) % uVar5 < uVar19))
  goto LAB_00100f52;
  goto LAB_001010e9;
  while( true ) {
    uVar19 = uVar19 + 1;
    uVar10 = (ulong)((int)uVar10 + 1) % uVar11;
    uVar15 = *(uint *)(lVar7 + uVar10 * 4);
    if ((uVar15 == 0) || (((uVar5 + (int)uVar10) - uVar15 % uVar5) % uVar5 < uVar19)) break;
LAB_00100cb1:
    if ((uVar15 == (uint)uVar20) &&
       (*(long *)(this + 0x110) == *(long *)(*(long *)(lVar13 + 0x28) + uVar10 * 8))) {
      puVar21 = (undefined4 *)(*(long *)(lVar13 + 0x20) + uVar10 * 0x38);
      goto LAB_00100ccb;
    }
  }
LAB_00100f70:
  if (ShaderGLES3::_version_bind_shader(RID,int,unsigned_long)::first_print != '\0') {
    _err_print_error("_version_bind_shader","./drivers/gles3/shader_gles3.h",0xda,
                     "shader failed to compile, unable to bind shader.",0,1);
    ShaderGLES3::_version_bind_shader(RID,int,unsigned_long)::first_print = '\0';
  }
LAB_00100f79:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_001015ee:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GLES3::CopyEffects::copy_to_and_from_rect(Rect2 const&) */

void __thiscall GLES3::CopyEffects::copy_to_and_from_rect(CopyEffects *this,Rect2 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  long lVar7;
  code *pcVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  int iVar12;
  long lVar13;
  undefined8 uVar14;
  uint uVar15;
  ulong uVar16;
  undefined4 uVar17;
  char *pcVar18;
  uint uVar19;
  ulong uVar20;
  undefined4 *puVar21;
  long in_FS_OFFSET;
  char *pcVar22;
  ulong local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined2 local_48;
  long local_40;
  
  uVar10 = *(ulong *)(this + 0x130);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_80 = 0;
  if (2 < *(int *)(this + 0x120)) {
    if ((uVar10 != 0) && ((uint)uVar10 < *(uint *)(this + 0x54))) {
      uVar20 = ((uVar10 & 0xffffffff) % (ulong)*(uint *)(this + 0x50)) * 0x80 +
               *(long *)(*(long *)(this + 0x40) +
                        ((uVar10 & 0xffffffff) / (ulong)*(uint *)(this + 0x50)) * 8);
      if (*(int *)(uVar20 + 0x78) == (int)(uVar10 >> 0x20)) {
        uVar5 = *(uint *)(uVar20 + 0x68);
        if (uVar5 == 0) {
          ShaderGLES3::_initialize_version((Version *)this);
          uVar5 = *(uint *)(uVar20 + 0x68);
        }
        uVar10 = local_80;
        uVar9 = (ulong)uVar5;
        if (uVar5 < 3) {
LAB_00101ee8:
          _err_print_index_error
                    ("operator[]","./core/templates/local_vector.h",0xb2,2,uVar9,"p_index","count",
                     "",false,true);
          _err_flush_stdout();
                    /* WARNING: Does not return */
          pcVar8 = (code *)invalidInstructionException();
          (*pcVar8)();
        }
        lVar13 = *(long *)(uVar20 + 0x70);
        uVar5 = *(uint *)(lVar13 + 0x58);
        uVar11 = (ulong)uVar5;
        lVar7 = *(long *)(lVar13 + 0x50);
        uVar9 = local_80 * 0x3ffff - 1;
        uVar9 = (uVar9 ^ uVar9 >> 0x1f) * 0x15;
        uVar9 = (uVar9 ^ uVar9 >> 0xb) * 0x41;
        uVar9 = uVar9 >> 0x16 ^ uVar9;
        uVar16 = uVar9 & 0xffffffff;
        if ((int)uVar9 == 0) {
          uVar16 = 1;
        }
        uVar9 = uVar16 % uVar11;
        uVar15 = *(uint *)(lVar7 + uVar9 * 4);
        if (uVar15 != 0) {
          uVar19 = 0;
          while ((uVar15 != (uint)uVar16 ||
                 (local_80 != *(ulong *)(*(long *)(lVar13 + 0x48) + uVar9 * 8)))) {
            uVar19 = uVar19 + 1;
            uVar9 = (ulong)((int)uVar9 + 1) % uVar11;
            uVar15 = *(uint *)(lVar7 + uVar9 * 4);
            if ((uVar15 == 0) || (((uVar5 + (int)uVar9) - uVar15 % uVar5) % uVar5 < uVar19))
            goto LAB_00101db0;
          }
          puVar21 = (undefined4 *)(*(long *)(lVar13 + 0x40) + uVar9 * 0x38);
          if (puVar21 != (undefined4 *)0x0) {
            if (*(char *)(puVar21 + 0xc) == '\0') goto LAB_0010185c;
            uVar10 = *(long *)(this + 0x110) * 0x3ffff - 1;
            uVar10 = (uVar10 ^ uVar10 >> 0x1f) * 0x15;
            uVar10 = (uVar10 ^ uVar10 >> 0xb) * 0x41;
            uVar10 = uVar10 >> 0x16 ^ uVar10;
            uVar20 = uVar10 & 0xffffffff;
            if ((int)uVar10 == 0) {
              uVar20 = 1;
            }
            uVar19 = 0;
            uVar10 = uVar20 % uVar11;
            uVar15 = *(uint *)(lVar7 + uVar10 * 4);
            if (uVar15 == 0) goto LAB_00101d30;
            goto LAB_00101839;
          }
        }
LAB_00101db0:
        local_78 = 0;
        local_70 = 0;
        local_68 = 0;
        local_60 = 0;
        local_58 = 0;
        local_50 = 0;
        local_48 = 0;
        ShaderGLES3::_compile_specialization
                  ((Specialization *)this,(uint)(Specialization *)&local_78,(Version *)0x2,uVar20);
        uVar9 = (ulong)*(uint *)(uVar20 + 0x68);
        if (*(uint *)(uVar20 + 0x68) < 3) goto LAB_00101ee8;
        OAHashMap<unsigned_long,ShaderGLES3::Version::Specialization,HashMapHasherDefault,HashMapComparatorDefault<unsigned_long>>
        ::insert((OAHashMap<unsigned_long,ShaderGLES3::Version::Specialization,HashMapHasherDefault,HashMapComparatorDefault<unsigned_long>>
                  *)(*(long *)(uVar20 + 0x70) + 0x40),&local_80,(Specialization *)&local_78);
        uVar9 = (ulong)*(uint *)(uVar20 + 0x68);
        if (*(uint *)(uVar20 + 0x68) < 3) goto LAB_00101ee8;
        lVar13 = *(long *)(uVar20 + 0x70);
        uVar5 = *(uint *)(lVar13 + 0x58);
        uVar20 = uVar16 % (ulong)uVar5;
        uVar15 = *(uint *)(*(long *)(lVar13 + 0x50) + uVar20 * 4);
        if (uVar15 != 0) {
          uVar19 = 0;
LAB_00101ea9:
          if ((uVar15 != (uint)uVar16) ||
             (uVar10 != *(ulong *)(*(long *)(lVar13 + 0x48) + uVar20 * 8))) goto LAB_00101e70;
          puVar21 = (undefined4 *)(*(long *)(lVar13 + 0x40) + uVar20 * 0x38);
          if (this[0xa0] != (CopyEffects)0x0) {
            ShaderGLES3::_save_to_cache((Version *)this);
          }
          ShaderGLES3::Version::Specialization::~Specialization((Specialization *)&local_78);
LAB_00101853:
          if (puVar21 != (undefined4 *)0x0) {
LAB_0010185c:
            if (*(char *)((long)puVar21 + 0x31) != '\0') {
              (*_glad_glUseProgram)(*puVar21);
              *(undefined4 **)(this + 0x128) = puVar21;
              pcVar8 = _glad_glUniform4f;
              uVar10 = *(ulong *)(this + 0x130);
              uVar1 = *(undefined4 *)(param_1 + 0xc);
              uVar2 = *(undefined4 *)(param_1 + 8);
              uVar3 = *(undefined4 *)(param_1 + 4);
              uVar4 = *(undefined4 *)param_1;
              if (*(int *)(this + 0xd0) < 1) {
                _err_print_index_error
                          ("_version_get_uniform","./drivers/gles3/shader_gles3.h",0xe4,0,
                           (long)*(int *)(this + 0xd0),"p_which","uniform_count","",false,false);
                goto LAB_00101aaf;
              }
              if (uVar10 == 0) {
LAB_001020d0:
                _err_print_error("_version_get_uniform","./drivers/gles3/shader_gles3.h",0xe6,
                                 "Parameter \"version\" is null.",0,0);
              }
              else {
                if (*(uint *)(this + 0x54) <= (uint)uVar10) goto LAB_001020d0;
                lVar13 = ((uVar10 & 0xffffffff) % (ulong)*(uint *)(this + 0x50)) * 0x80 +
                         *(long *)(*(long *)(this + 0x40) +
                                  ((uVar10 & 0xffffffff) / (ulong)*(uint *)(this + 0x50)) * 8);
                iVar6 = *(int *)(lVar13 + 0x78);
                if (iVar6 != (int)(uVar10 >> 0x20)) {
                  if (iVar6 + 0x80000000U < 0x7fffffff) {
                    _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                                     "Method/function failed. Returning: nullptr",
                                     "Attempting to use an uninitialized RID",0,0);
                  }
                  goto LAB_001020d0;
                }
                if (*(int *)(lVar13 + 0x68) < 3) {
                  _err_print_index_error
                            ("_version_get_uniform","./drivers/gles3/shader_gles3.h",0xe7,2,
                             (long)*(int *)(lVar13 + 0x68),"p_variant",
                             "int(version->variants.size())","",false,false);
                  goto LAB_00101aaf;
                }
                lVar13 = *(long *)(lVar13 + 0x70);
                uVar5 = *(uint *)(lVar13 + 0x58);
                uVar20 = 0x2aeaa2ab % (ulong)uVar5;
                uVar15 = *(uint *)(*(long *)(lVar13 + 0x50) + uVar20 * 4);
                if (uVar15 == 0) {
LAB_001021f0:
                  _err_print_error("_version_get_uniform","./drivers/gles3/shader_gles3.h",0xe9,
                                   "Parameter \"spec\" is null.",0,0);
                }
                else {
                  uVar19 = 0;
                  while ((uVar15 != 0x2aeaa2ab ||
                         (*(long *)(*(long *)(lVar13 + 0x48) + uVar20 * 8) != 0))) {
                    uVar19 = uVar19 + 1;
                    uVar20 = (ulong)((int)uVar20 + 1) % (ulong)uVar5;
                    uVar15 = *(uint *)(*(long *)(lVar13 + 0x50) + uVar20 * 4);
                    if ((uVar15 == 0) || (((uVar5 + (int)uVar20) - uVar15 % uVar5) % uVar5 < uVar19)
                       ) goto LAB_001021f0;
                  }
                  lVar13 = *(long *)(lVar13 + 0x40) + uVar20 * 0x38;
                  if (lVar13 == 0) goto LAB_001021f0;
                  if (*(int *)(lVar13 + 0x10) < 1) {
                    _err_print_index_error
                              ("_version_get_uniform","./drivers/gles3/shader_gles3.h",0xea,0,
                               (long)*(int *)(lVar13 + 0x10),"p_which",
                               "int(spec->uniform_location.size())","",false,false);
                  }
                  else if (-1 < **(int **)(lVar13 + 0x18)) {
                    if (*(int *)(this + 0xd0) < 1) {
                      _err_print_index_error
                                ("_version_get_uniform","./drivers/gles3/shader_gles3.h",0xe4,0,
                                 (long)*(int *)(this + 0xd0),"p_which","uniform_count","",false,
                                 false);
LAB_00102332:
                      uVar17 = 0xffffffff;
                    }
                    else {
                      if (*(uint *)(this + 0x54) <= (uint)uVar10) {
LAB_001024ec:
                        pcVar18 = "Parameter \"version\" is null.";
                        uVar14 = 0xe6;
LAB_00102516:
                        _err_print_error("_version_get_uniform","./drivers/gles3/shader_gles3.h",
                                         uVar14,pcVar18,0,0);
                        goto LAB_00102332;
                      }
                      lVar13 = ((uVar10 & 0xffffffff) % (ulong)*(uint *)(this + 0x50)) * 0x80 +
                               *(long *)(*(long *)(this + 0x40) +
                                        ((uVar10 & 0xffffffff) / (ulong)*(uint *)(this + 0x50)) * 8)
                      ;
                      if (iVar6 != *(int *)(lVar13 + 0x78)) {
                        if (*(int *)(lVar13 + 0x78) + 0x80000000U < 0x7fffffff) {
                          _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                                           "Method/function failed. Returning: nullptr",
                                           "Attempting to use an uninitialized RID",0,0);
                        }
                        goto LAB_001024ec;
                      }
                      iVar6 = *(int *)(lVar13 + 0x68);
                      if (iVar6 < 3) {
                        lVar13 = 2;
                        iVar12 = 0xe7;
                        pcVar18 = "p_variant";
                        pcVar22 = "int(version->variants.size())";
LAB_0010260c:
                        _err_print_index_error
                                  ("_version_get_uniform","./drivers/gles3/shader_gles3.h",iVar12,
                                   lVar13,(long)iVar6,pcVar18,pcVar22,"",false,false);
                        goto LAB_00102332;
                      }
                      lVar13 = *(long *)(lVar13 + 0x70);
                      uVar5 = *(uint *)(lVar13 + 0x58);
                      uVar10 = (ulong)uVar15 % (ulong)uVar5;
                      uVar15 = *(uint *)(*(long *)(lVar13 + 0x50) + uVar10 * 4);
                      if (uVar15 == 0) {
LAB_00102640:
                        pcVar18 = "Parameter \"spec\" is null.";
                        uVar14 = 0xe9;
                        goto LAB_00102516;
                      }
                      uVar19 = 0;
                      while ((uVar15 != 0x2aeaa2ab ||
                             (*(long *)(*(long *)(lVar13 + 0x48) + uVar10 * 8) != 0))) {
                        uVar19 = uVar19 + 1;
                        uVar10 = (ulong)((int)uVar10 + 1) % (ulong)uVar5;
                        uVar15 = *(uint *)(*(long *)(lVar13 + 0x50) + uVar10 * 4);
                        if ((uVar15 == 0) ||
                           (((uVar5 + (int)uVar10) - uVar15 % uVar5) % uVar5 < uVar19))
                        goto LAB_00102640;
                      }
                      lVar13 = *(long *)(lVar13 + 0x40) + uVar10 * 0x38;
                      if (lVar13 == 0) goto LAB_00102640;
                      iVar6 = *(int *)(lVar13 + 0x10);
                      if (iVar6 < 1) {
                        lVar13 = 0;
                        pcVar18 = "p_which";
                        iVar12 = 0xea;
                        pcVar22 = "int(spec->uniform_location.size())";
                        goto LAB_0010260c;
                      }
                      uVar17 = **(undefined4 **)(lVar13 + 0x18);
                    }
                    (*pcVar8)(uVar4,uVar3,uVar2,uVar1,uVar17);
                  }
                }
              }
LAB_00101aaf:
              pcVar8 = _glad_glUniform4f;
              uVar10 = *(ulong *)(this + 0x130);
              uVar1 = *(undefined4 *)(param_1 + 0xc);
              uVar2 = *(undefined4 *)(param_1 + 8);
              uVar3 = *(undefined4 *)(param_1 + 4);
              uVar4 = *(undefined4 *)param_1;
              if (*(int *)(this + 0xd0) < 2) {
                _err_print_index_error
                          ("_version_get_uniform","./drivers/gles3/shader_gles3.h",0xe4,1,
                           (long)*(int *)(this + 0xd0),"p_which","uniform_count","",false,false);
                goto LAB_00101cec;
              }
              if (uVar10 == 0) {
LAB_00102140:
                _err_print_error("_version_get_uniform","./drivers/gles3/shader_gles3.h",0xe6,
                                 "Parameter \"version\" is null.",0,0);
              }
              else {
                if (*(uint *)(this + 0x54) <= (uint)uVar10) goto LAB_00102140;
                lVar13 = ((uVar10 & 0xffffffff) % (ulong)*(uint *)(this + 0x50)) * 0x80 +
                         *(long *)(*(long *)(this + 0x40) +
                                  ((uVar10 & 0xffffffff) / (ulong)*(uint *)(this + 0x50)) * 8);
                iVar6 = *(int *)(lVar13 + 0x78);
                if (iVar6 != (int)(uVar10 >> 0x20)) {
                  if (iVar6 + 0x80000000U < 0x7fffffff) {
                    _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                                     "Method/function failed. Returning: nullptr",
                                     "Attempting to use an uninitialized RID",0,0);
                  }
                  goto LAB_00102140;
                }
                if (*(int *)(lVar13 + 0x68) < 3) {
                  _err_print_index_error
                            ("_version_get_uniform","./drivers/gles3/shader_gles3.h",0xe7,2,
                             (long)*(int *)(lVar13 + 0x68),"p_variant",
                             "int(version->variants.size())","",false,false);
                  goto LAB_00101cec;
                }
                lVar13 = *(long *)(lVar13 + 0x70);
                uVar5 = *(uint *)(lVar13 + 0x58);
                uVar20 = 0x2aeaa2ab % (ulong)uVar5;
                uVar15 = *(uint *)(*(long *)(lVar13 + 0x50) + uVar20 * 4);
                if (uVar15 == 0) {
LAB_00102220:
                  _err_print_error("_version_get_uniform","./drivers/gles3/shader_gles3.h",0xe9,
                                   "Parameter \"spec\" is null.",0,0);
                }
                else {
                  uVar19 = 0;
                  while ((uVar15 != 0x2aeaa2ab ||
                         (*(long *)(*(long *)(lVar13 + 0x48) + uVar20 * 8) != 0))) {
                    uVar19 = uVar19 + 1;
                    uVar20 = (ulong)((int)uVar20 + 1) % (ulong)uVar5;
                    uVar15 = *(uint *)(*(long *)(lVar13 + 0x50) + uVar20 * 4);
                    if ((uVar15 == 0) || (((uVar5 + (int)uVar20) - uVar15 % uVar5) % uVar5 < uVar19)
                       ) goto LAB_00102220;
                  }
                  lVar13 = *(long *)(lVar13 + 0x40) + uVar20 * 0x38;
                  if (lVar13 == 0) goto LAB_00102220;
                  if (*(int *)(lVar13 + 0x10) < 2) {
                    _err_print_index_error
                              ("_version_get_uniform","./drivers/gles3/shader_gles3.h",0xea,1,
                               (long)*(int *)(lVar13 + 0x10),"p_which",
                               "int(spec->uniform_location.size())","",false,false);
                  }
                  else if (-1 < *(int *)(*(long *)(lVar13 + 0x18) + 4)) {
                    if (*(int *)(this + 0xd0) < 2) {
                      _err_print_index_error
                                ("_version_get_uniform","./drivers/gles3/shader_gles3.h",0xe4,1,
                                 (long)*(int *)(this + 0xd0),"p_which","uniform_count","",false,
                                 false);
LAB_001023a8:
                      uVar17 = 0xffffffff;
                    }
                    else {
                      if (*(uint *)(this + 0x54) <= (uint)uVar10) {
LAB_00102421:
                        pcVar18 = "Parameter \"version\" is null.";
                        uVar14 = 0xe6;
LAB_0010244b:
                        _err_print_error("_version_get_uniform","./drivers/gles3/shader_gles3.h",
                                         uVar14,pcVar18,0,0);
                        goto LAB_001023a8;
                      }
                      lVar13 = ((uVar10 & 0xffffffff) % (ulong)*(uint *)(this + 0x50)) * 0x80 +
                               *(long *)(*(long *)(this + 0x40) +
                                        ((uVar10 & 0xffffffff) / (ulong)*(uint *)(this + 0x50)) * 8)
                      ;
                      if (iVar6 != *(int *)(lVar13 + 0x78)) {
                        if (*(int *)(lVar13 + 0x78) + 0x80000000U < 0x7fffffff) {
                          _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                                           "Method/function failed. Returning: nullptr",
                                           "Attempting to use an uninitialized RID",0,0);
                        }
                        goto LAB_00102421;
                      }
                      iVar6 = *(int *)(lVar13 + 0x68);
                      if (iVar6 < 3) {
                        lVar13 = 2;
                        iVar12 = 0xe7;
                        pcVar18 = "p_variant";
                        pcVar22 = "int(version->variants.size())";
LAB_0010259b:
                        _err_print_index_error
                                  ("_version_get_uniform","./drivers/gles3/shader_gles3.h",iVar12,
                                   lVar13,(long)iVar6,pcVar18,pcVar22,"",false,false);
                        goto LAB_001023a8;
                      }
                      lVar13 = *(long *)(lVar13 + 0x70);
                      uVar5 = *(uint *)(lVar13 + 0x58);
                      uVar10 = 0x2aeaa2ab % (ulong)uVar5;
                      uVar15 = *(uint *)(*(long *)(lVar13 + 0x50) + uVar10 * 4);
                      if (uVar15 == 0) {
LAB_00102670:
                        pcVar18 = "Parameter \"spec\" is null.";
                        uVar14 = 0xe9;
                        goto LAB_0010244b;
                      }
                      uVar19 = 0;
                      while ((uVar15 != 0x2aeaa2ab ||
                             (*(long *)(*(long *)(lVar13 + 0x48) + uVar10 * 8) != 0))) {
                        uVar19 = uVar19 + 1;
                        uVar10 = (ulong)((int)uVar10 + 1) % (ulong)uVar5;
                        uVar15 = *(uint *)(*(long *)(lVar13 + 0x50) + uVar10 * 4);
                        if ((uVar15 == 0) ||
                           (((uVar5 + (int)uVar10) - uVar15 % uVar5) % uVar5 < uVar19))
                        goto LAB_00102670;
                      }
                      lVar13 = *(long *)(lVar13 + 0x40) + uVar10 * 0x38;
                      if (lVar13 == 0) goto LAB_00102670;
                      iVar6 = *(int *)(lVar13 + 0x10);
                      if (iVar6 < 2) {
                        lVar13 = 1;
                        iVar12 = 0xea;
                        pcVar18 = "p_which";
                        pcVar22 = "int(spec->uniform_location.size())";
                        goto LAB_0010259b;
                      }
                      uVar17 = *(undefined4 *)(*(long *)(lVar13 + 0x18) + 4);
                    }
                    (*pcVar8)(uVar4,uVar3,uVar2,uVar1,uVar17);
                  }
                }
              }
LAB_00101cec:
              if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                draw_screen_quad(this);
                return;
              }
              goto LAB_00102720;
            }
          }
          goto LAB_00101d30;
        }
LAB_00101d16:
        if (this[0xa0] == (CopyEffects)0x0) {
          ShaderGLES3::Version::Specialization::~Specialization((Specialization *)&local_78);
        }
        else {
          ShaderGLES3::_save_to_cache((Version *)this);
          ShaderGLES3::Version::Specialization::~Specialization((Specialization *)&local_78);
        }
        goto LAB_00101d30;
      }
      if (*(int *)(uVar20 + 0x78) + 0x80000000U < 0x7fffffff) {
        _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                         "Method/function failed. Returning: nullptr",
                         "Attempting to use an uninitialized RID",0,0);
      }
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      _err_print_error("_version_bind_shader","./drivers/gles3/shader_gles3.h",0xbe,
                       "Parameter \"version\" is null.",0,0);
      return;
    }
    goto LAB_00102720;
  }
  _err_print_index_error
            ("_version_bind_shader","./drivers/gles3/shader_gles3.h",0xbb,2,
             (long)*(int *)(this + 0x120),"p_variant","variant_count","",false,false);
  goto LAB_00101d39;
LAB_00101e70:
  uVar19 = uVar19 + 1;
  uVar20 = (ulong)((int)uVar20 + 1) % (ulong)uVar5;
  uVar15 = *(uint *)(*(long *)(lVar13 + 0x50) + uVar20 * 4);
  if ((uVar15 == 0) || (((uVar5 + (int)uVar20) - uVar15 % uVar5) % uVar5 < uVar19))
  goto LAB_00101d16;
  goto LAB_00101ea9;
  while( true ) {
    uVar19 = uVar19 + 1;
    uVar10 = (ulong)((int)uVar10 + 1) % uVar11;
    uVar15 = *(uint *)(lVar7 + uVar10 * 4);
    if ((uVar15 == 0) || (((uVar5 + (int)uVar10) - uVar15 % uVar5) % uVar5 < uVar19)) break;
LAB_00101839:
    if ((uVar15 == (uint)uVar20) &&
       (*(long *)(this + 0x110) == *(long *)(*(long *)(lVar13 + 0x48) + uVar10 * 8))) {
      puVar21 = (undefined4 *)(*(long *)(lVar13 + 0x40) + uVar10 * 0x38);
      goto LAB_00101853;
    }
  }
LAB_00101d30:
  if (ShaderGLES3::_version_bind_shader(RID,int,unsigned_long)::first_print != '\0') {
    _err_print_error("_version_bind_shader","./drivers/gles3/shader_gles3.h",0xda,
                     "shader failed to compile, unable to bind shader.",0,1);
    ShaderGLES3::_version_bind_shader(RID,int,unsigned_long)::first_print = '\0';
  }
LAB_00101d39:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00102720:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GLES3::CopyEffects::copy_cube_to_rect(Rect2 const&) */

void __thiscall GLES3::CopyEffects::copy_cube_to_rect(CopyEffects *this,Rect2 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  long lVar7;
  code *pcVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  int iVar12;
  long lVar13;
  undefined8 uVar14;
  uint uVar15;
  ulong uVar16;
  undefined4 uVar17;
  char *pcVar18;
  uint uVar19;
  ulong uVar20;
  undefined4 *puVar21;
  long in_FS_OFFSET;
  char *pcVar22;
  ulong local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined2 local_48;
  long local_40;
  
  uVar10 = *(ulong *)(this + 0x130);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_80 = 0;
  if (9 < *(int *)(this + 0x120)) {
    if ((uVar10 != 0) && ((uint)uVar10 < *(uint *)(this + 0x54))) {
      uVar20 = ((uVar10 & 0xffffffff) % (ulong)*(uint *)(this + 0x50)) * 0x80 +
               *(long *)(*(long *)(this + 0x40) +
                        ((uVar10 & 0xffffffff) / (ulong)*(uint *)(this + 0x50)) * 8);
      if (*(int *)(uVar20 + 0x78) == (int)(uVar10 >> 0x20)) {
        uVar5 = *(uint *)(uVar20 + 0x68);
        if (uVar5 == 0) {
          ShaderGLES3::_initialize_version((Version *)this);
          uVar5 = *(uint *)(uVar20 + 0x68);
        }
        uVar10 = local_80;
        uVar9 = (ulong)uVar5;
        if (uVar5 < 10) {
LAB_00102e10:
          _err_print_index_error
                    ("operator[]","./core/templates/local_vector.h",0xb2,9,uVar9,"p_index","count",
                     "",false,true);
          _err_flush_stdout();
                    /* WARNING: Does not return */
          pcVar8 = (code *)invalidInstructionException();
          (*pcVar8)();
        }
        lVar13 = *(long *)(uVar20 + 0x70);
        uVar5 = *(uint *)(lVar13 + 0x138);
        uVar11 = (ulong)uVar5;
        lVar7 = *(long *)(lVar13 + 0x130);
        uVar9 = local_80 * 0x3ffff - 1;
        uVar9 = (uVar9 ^ uVar9 >> 0x1f) * 0x15;
        uVar9 = (uVar9 ^ uVar9 >> 0xb) * 0x41;
        uVar9 = uVar9 >> 0x16 ^ uVar9;
        uVar16 = uVar9 & 0xffffffff;
        if ((int)uVar9 == 0) {
          uVar16 = 1;
        }
        uVar9 = uVar16 % uVar11;
        uVar15 = *(uint *)(lVar7 + uVar9 * 4);
        if (uVar15 != 0) {
          uVar19 = 0;
          while (((uint)uVar16 != uVar15 ||
                 (local_80 != *(ulong *)(*(long *)(lVar13 + 0x128) + uVar9 * 8)))) {
            uVar19 = uVar19 + 1;
            uVar9 = (ulong)((int)uVar9 + 1) % uVar11;
            uVar15 = *(uint *)(lVar7 + uVar9 * 4);
            if ((uVar15 == 0) || (((uVar5 + (int)uVar9) - uVar15 % uVar5) % uVar5 < uVar19))
            goto LAB_00102cc0;
          }
          puVar21 = (undefined4 *)(*(long *)(lVar13 + 0x120) + uVar9 * 0x38);
          if (puVar21 != (undefined4 *)0x0) {
            if (*(char *)(puVar21 + 0xc) == '\0') goto LAB_00102994;
            uVar10 = *(long *)(this + 0x110) * 0x3ffff - 1;
            uVar10 = (uVar10 ^ uVar10 >> 0x1f) * 0x15;
            uVar10 = (uVar10 ^ uVar10 >> 0xb) * 0x41;
            uVar10 = uVar10 >> 0x16 ^ uVar10;
            uVar20 = uVar10 & 0xffffffff;
            if ((int)uVar10 == 0) {
              uVar20 = 1;
            }
            uVar19 = 0;
            uVar10 = uVar20 % uVar11;
            uVar15 = *(uint *)(lVar7 + uVar10 * 4);
            if (uVar15 == 0) goto LAB_00102c40;
            goto LAB_00102971;
          }
        }
LAB_00102cc0:
        local_48 = 0;
        local_78 = 0;
        local_70 = 0;
        local_68 = 0;
        local_60 = 0;
        local_58 = 0;
        local_50 = 0;
        ShaderGLES3::_compile_specialization
                  ((Specialization *)this,(uint)(Specialization *)&local_78,(Version *)0x9,uVar20);
        uVar9 = (ulong)*(uint *)(uVar20 + 0x68);
        if (*(uint *)(uVar20 + 0x68) < 10) goto LAB_00102e10;
        OAHashMap<unsigned_long,ShaderGLES3::Version::Specialization,HashMapHasherDefault,HashMapComparatorDefault<unsigned_long>>
        ::insert((OAHashMap<unsigned_long,ShaderGLES3::Version::Specialization,HashMapHasherDefault,HashMapComparatorDefault<unsigned_long>>
                  *)(*(long *)(uVar20 + 0x70) + 0x120),&local_80,(Specialization *)&local_78);
        uVar9 = (ulong)*(uint *)(uVar20 + 0x68);
        if (*(uint *)(uVar20 + 0x68) < 10) goto LAB_00102e10;
        lVar13 = *(long *)(uVar20 + 0x70);
        uVar5 = *(uint *)(lVar13 + 0x138);
        uVar20 = uVar16 % (ulong)uVar5;
        uVar15 = *(uint *)(*(long *)(lVar13 + 0x130) + uVar20 * 4);
        if (uVar15 != 0) {
          uVar19 = 0;
LAB_00102dc9:
          if ((uVar15 != (uint)uVar16) ||
             (uVar10 != *(ulong *)(*(long *)(lVar13 + 0x128) + uVar20 * 8))) goto LAB_00102d90;
          puVar21 = (undefined4 *)(*(long *)(lVar13 + 0x120) + uVar20 * 0x38);
          if (this[0xa0] != (CopyEffects)0x0) {
            ShaderGLES3::_save_to_cache((Version *)this);
          }
          ShaderGLES3::Version::Specialization::~Specialization((Specialization *)&local_78);
LAB_0010298b:
          if (puVar21 != (undefined4 *)0x0) {
LAB_00102994:
            if (*(char *)((long)puVar21 + 0x31) != '\0') {
              (*_glad_glUseProgram)(*puVar21);
              uVar1 = *(undefined4 *)(param_1 + 0xc);
              uVar2 = *(undefined4 *)param_1;
              *(undefined4 **)(this + 0x128) = puVar21;
              pcVar8 = _glad_glUniform4f;
              uVar3 = *(undefined4 *)(param_1 + 8);
              uVar4 = *(undefined4 *)(param_1 + 4);
              uVar10 = *(ulong *)(this + 0x130);
              if (*(int *)(this + 0xd0) < 1) {
                _err_print_index_error
                          ("_version_get_uniform","./drivers/gles3/shader_gles3.h",0xe4,0,
                           (long)*(int *)(this + 0xd0),"p_which","uniform_count","",false,false);
                goto LAB_00102bf6;
              }
              if (uVar10 == 0) {
LAB_00102fc0:
                _err_print_error("_version_get_uniform","./drivers/gles3/shader_gles3.h",0xe6,
                                 "Parameter \"version\" is null.",0,0);
              }
              else {
                if (*(uint *)(this + 0x54) <= (uint)uVar10) goto LAB_00102fc0;
                lVar13 = ((uVar10 & 0xffffffff) % (ulong)*(uint *)(this + 0x50)) * 0x80 +
                         *(long *)(*(long *)(this + 0x40) +
                                  ((uVar10 & 0xffffffff) / (ulong)*(uint *)(this + 0x50)) * 8);
                iVar6 = *(int *)(lVar13 + 0x78);
                if (iVar6 != (int)(uVar10 >> 0x20)) {
                  if (iVar6 + 0x80000000U < 0x7fffffff) {
                    _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                                     "Method/function failed. Returning: nullptr",
                                     "Attempting to use an uninitialized RID",0,0);
                  }
                  goto LAB_00102fc0;
                }
                if (*(int *)(lVar13 + 0x68) < 10) {
                  _err_print_index_error
                            ("_version_get_uniform","./drivers/gles3/shader_gles3.h",0xe7,9,
                             (long)*(int *)(lVar13 + 0x68),"p_variant",
                             "int(version->variants.size())","",false,false);
                  goto LAB_00102bf6;
                }
                lVar13 = *(long *)(lVar13 + 0x70);
                uVar5 = *(uint *)(lVar13 + 0x138);
                uVar20 = 0x2aeaa2ab % (ulong)uVar5;
                uVar15 = *(uint *)(*(long *)(lVar13 + 0x130) + uVar20 * 4);
                if (uVar15 == 0) {
LAB_00103030:
                  _err_print_error("_version_get_uniform","./drivers/gles3/shader_gles3.h",0xe9,
                                   "Parameter \"spec\" is null.",0,0);
                }
                else {
                  uVar19 = 0;
                  while ((uVar15 != 0x2aeaa2ab ||
                         (*(long *)(*(long *)(lVar13 + 0x128) + uVar20 * 8) != 0))) {
                    uVar19 = uVar19 + 1;
                    uVar20 = (ulong)((int)uVar20 + 1) % (ulong)uVar5;
                    uVar15 = *(uint *)(*(long *)(lVar13 + 0x130) + uVar20 * 4);
                    if ((uVar15 == 0) || (((uVar5 + (int)uVar20) - uVar15 % uVar5) % uVar5 < uVar19)
                       ) goto LAB_00103030;
                  }
                  lVar13 = *(long *)(lVar13 + 0x120) + uVar20 * 0x38;
                  if (lVar13 == 0) goto LAB_00103030;
                  if (*(int *)(lVar13 + 0x10) < 1) {
                    _err_print_index_error
                              ("_version_get_uniform","./drivers/gles3/shader_gles3.h",0xea,0,
                               (long)*(int *)(lVar13 + 0x10),"p_which",
                               "int(spec->uniform_location.size())","",false,false);
                  }
                  else if (-1 < **(int **)(lVar13 + 0x18)) {
                    if (*(int *)(this + 0xd0) < 1) {
                      _err_print_index_error
                                ("_version_get_uniform","./drivers/gles3/shader_gles3.h",0xe4,0,
                                 (long)*(int *)(this + 0xd0),"p_which","uniform_count","",false,
                                 false);
LAB_00103101:
                      uVar17 = 0xffffffff;
                    }
                    else {
                      if (*(uint *)(this + 0x54) <= (uint)uVar10) {
LAB_0010317a:
                        pcVar18 = "Parameter \"version\" is null.";
                        uVar14 = 0xe6;
LAB_001031a4:
                        _err_print_error("_version_get_uniform","./drivers/gles3/shader_gles3.h",
                                         uVar14,pcVar18,0,0);
                        goto LAB_00103101;
                      }
                      lVar13 = ((uVar10 & 0xffffffff) % (ulong)*(uint *)(this + 0x50)) * 0x80 +
                               *(long *)(*(long *)(this + 0x40) +
                                        ((uVar10 & 0xffffffff) / (ulong)*(uint *)(this + 0x50)) * 8)
                      ;
                      if (iVar6 != *(int *)(lVar13 + 0x78)) {
                        if (*(int *)(lVar13 + 0x78) + 0x80000000U < 0x7fffffff) {
                          _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                                           "Method/function failed. Returning: nullptr",
                                           "Attempting to use an uninitialized RID",0,0);
                        }
                        goto LAB_0010317a;
                      }
                      iVar6 = *(int *)(lVar13 + 0x68);
                      if (iVar6 < 10) {
                        lVar13 = 9;
                        iVar12 = 0xe7;
                        pcVar18 = "p_variant";
                        pcVar22 = "int(version->variants.size())";
LAB_0010322b:
                        _err_print_index_error
                                  ("_version_get_uniform","./drivers/gles3/shader_gles3.h",iVar12,
                                   lVar13,(long)iVar6,pcVar18,pcVar22,"",false,false);
                        goto LAB_00103101;
                      }
                      lVar13 = *(long *)(lVar13 + 0x70);
                      uVar5 = *(uint *)(lVar13 + 0x138);
                      uVar10 = 0x2aeaa2ab % (ulong)uVar5;
                      uVar15 = *(uint *)(*(long *)(lVar13 + 0x130) + uVar10 * 4);
                      if (uVar15 == 0) {
LAB_00103260:
                        pcVar18 = "Parameter \"spec\" is null.";
                        uVar14 = 0xe9;
                        goto LAB_001031a4;
                      }
                      uVar19 = 0;
                      while ((uVar15 != 0x2aeaa2ab ||
                             (*(long *)(*(long *)(lVar13 + 0x128) + uVar10 * 8) != 0))) {
                        uVar19 = uVar19 + 1;
                        uVar10 = (ulong)((int)uVar10 + 1) % (ulong)uVar5;
                        uVar15 = *(uint *)(*(long *)(lVar13 + 0x130) + uVar10 * 4);
                        if ((uVar15 == 0) ||
                           (((uVar5 + (int)uVar10) - uVar15 % uVar5) % uVar5 < uVar19))
                        goto LAB_00103260;
                      }
                      lVar13 = *(long *)(lVar13 + 0x120) + uVar10 * 0x38;
                      if (lVar13 == 0) goto LAB_00103260;
                      iVar6 = *(int *)(lVar13 + 0x10);
                      if (iVar6 < 1) {
                        lVar13 = 0;
                        pcVar18 = "p_which";
                        iVar12 = 0xea;
                        pcVar22 = "int(spec->uniform_location.size())";
                        goto LAB_0010322b;
                      }
                      uVar17 = **(undefined4 **)(lVar13 + 0x18);
                    }
                    (*pcVar8)(uVar2,uVar4,uVar3,uVar1,uVar17);
                  }
                }
              }
LAB_00102bf6:
              if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                draw_screen_quad(this);
                return;
              }
              goto LAB_001032ce;
            }
          }
          goto LAB_00102c40;
        }
LAB_00102c20:
        if (this[0xa0] == (CopyEffects)0x0) {
          ShaderGLES3::Version::Specialization::~Specialization((Specialization *)&local_78);
        }
        else {
          ShaderGLES3::_save_to_cache((Version *)this);
          ShaderGLES3::Version::Specialization::~Specialization((Specialization *)&local_78);
        }
        goto LAB_00102c40;
      }
      if (*(int *)(uVar20 + 0x78) + 0x80000000U < 0x7fffffff) {
        _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                         "Method/function failed. Returning: nullptr",
                         "Attempting to use an uninitialized RID",0,0);
      }
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      _err_print_error("_version_bind_shader","./drivers/gles3/shader_gles3.h",0xbe,
                       "Parameter \"version\" is null.",0,0);
      return;
    }
    goto LAB_001032ce;
  }
  _err_print_index_error
            ("_version_bind_shader","./drivers/gles3/shader_gles3.h",0xbb,9,
             (long)*(int *)(this + 0x120),"p_variant","variant_count","",false,false);
  goto LAB_00102c49;
LAB_00102d90:
  uVar19 = uVar19 + 1;
  uVar20 = (ulong)((int)uVar20 + 1) % (ulong)uVar5;
  uVar15 = *(uint *)(*(long *)(lVar13 + 0x130) + uVar20 * 4);
  if ((uVar15 == 0) || (((uVar5 + (int)uVar20) - uVar15 % uVar5) % uVar5 < uVar19))
  goto LAB_00102c20;
  goto LAB_00102dc9;
  while( true ) {
    uVar19 = uVar19 + 1;
    uVar10 = (ulong)((int)uVar10 + 1) % uVar11;
    uVar15 = *(uint *)(lVar7 + uVar10 * 4);
    if ((uVar15 == 0) || (((uVar5 + (int)uVar10) - uVar15 % uVar5) % uVar5 < uVar19)) break;
LAB_00102971:
    if ((uVar15 == (uint)uVar20) &&
       (*(long *)(this + 0x110) == *(long *)(*(long *)(lVar13 + 0x128) + uVar10 * 8))) {
      puVar21 = (undefined4 *)(*(long *)(lVar13 + 0x120) + uVar10 * 0x38);
      goto LAB_0010298b;
    }
  }
LAB_00102c40:
  if (ShaderGLES3::_version_bind_shader(RID,int,unsigned_long)::first_print != '\0') {
    _err_print_error("_version_bind_shader","./drivers/gles3/shader_gles3.h",0xda,
                     "shader failed to compile, unable to bind shader.",0,1);
    ShaderGLES3::_version_bind_shader(RID,int,unsigned_long)::first_print = '\0';
  }
LAB_00102c49:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_001032ce:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GLES3::CopyEffects::copy_to_rect_3d(Rect2 const&, float, int, float) */

void __thiscall
GLES3::CopyEffects::copy_to_rect_3d
          (CopyEffects *this,Rect2 *param_1,float param_2,int param_3,float param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  code *pcVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  int iVar11;
  undefined8 uVar12;
  int iVar13;
  ulong uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  uint uVar17;
  char *pcVar18;
  long lVar19;
  uint uVar20;
  char *pcVar21;
  uint uVar22;
  long *plVar23;
  ulong uVar24;
  uint uVar25;
  undefined4 *puVar26;
  long in_FS_OFFSET;
  char *pcVar27;
  ulong local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined2 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (1 < param_3 - 1U) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      pcVar21 = 
      "Condition \"p_type != Texture::TYPE_LAYERED && p_type != Texture::TYPE_3D\" is true.";
      uVar12 = 0x81;
      pcVar27 = "drivers/gles3/effects/copy_effects.cpp";
      pcVar18 = "copy_to_rect_3d";
      goto LAB_00103db7;
    }
    goto LAB_00104946;
  }
  local_80 = 0;
  uVar7 = *(ulong *)(this + 0x130);
  iVar13 = (param_3 == 1) + 3;
  uVar25 = (param_3 == 1) + 3;
  if (iVar13 < *(int *)(this + 0x120)) {
    if ((uVar7 != 0) && ((uint)uVar7 < *(uint *)(this + 0x54))) {
      uVar24 = ((uVar7 & 0xffffffff) % (ulong)*(uint *)(this + 0x50)) * 0x80 +
               *(long *)(*(long *)(this + 0x40) +
                        ((uVar7 & 0xffffffff) / (ulong)*(uint *)(this + 0x50)) * 8);
      if (*(int *)(uVar24 + 0x78) == (int)(uVar7 >> 0x20)) {
        uVar17 = *(uint *)(uVar24 + 0x68);
        if (uVar17 == 0) {
          ShaderGLES3::_initialize_version((Version *)this);
          uVar17 = *(uint *)(uVar24 + 0x68);
        }
        uVar7 = local_80;
        uVar6 = (ulong)uVar17;
        if (uVar17 <= uVar25) {
          uVar10 = (ulong)uVar25;
          goto LAB_00103f76;
        }
        uVar10 = (ulong)uVar25;
        lVar5 = uVar10 * 0x20;
        plVar23 = (long *)(*(long *)(uVar24 + 0x70) + lVar5);
        uVar17 = *(uint *)(plVar23 + 3);
        uVar9 = (ulong)uVar17;
        lVar19 = plVar23[2];
        uVar6 = local_80 * 0x3ffff - 1;
        uVar6 = (uVar6 ^ uVar6 >> 0x1f) * 0x15;
        uVar6 = (uVar6 ^ uVar6 >> 0xb) * 0x41;
        uVar6 = uVar6 >> 0x16 ^ uVar6;
        uVar14 = uVar6 & 0xffffffff;
        if ((int)uVar6 == 0) {
          uVar14 = 1;
        }
        uVar6 = uVar14 % uVar9;
        uVar22 = *(uint *)(lVar19 + uVar6 * 4);
        if (uVar22 != 0) {
          uVar20 = 0;
          while ((uVar22 != (uint)uVar14 || (local_80 != *(ulong *)(plVar23[1] + uVar6 * 8)))) {
            uVar20 = uVar20 + 1;
            uVar6 = (ulong)((int)uVar6 + 1) % uVar9;
            uVar22 = *(uint *)(lVar19 + uVar6 * 4);
            if ((uVar22 == 0) || (((uVar17 + (int)uVar6) - uVar22 % uVar17) % uVar17 < uVar20))
            goto LAB_00103dd0;
          }
          puVar26 = (undefined4 *)(*plVar23 + uVar6 * 0x38);
          if (puVar26 != (undefined4 *)0x0) {
            if (*(char *)(puVar26 + 0xc) == '\0') goto LAB_00103584;
            uVar7 = *(long *)(this + 0x110) * 0x3ffff - 1;
            uVar7 = (uVar7 ^ uVar7 >> 0x1f) * 0x15;
            uVar7 = (uVar7 ^ uVar7 >> 0xb) * 0x41;
            uVar7 = uVar7 >> 0x16 ^ uVar7;
            uVar24 = uVar7 & 0xffffffff;
            if ((int)uVar7 == 0) {
              uVar24 = 1;
            }
            uVar20 = 0;
            uVar7 = uVar24 % uVar9;
            uVar22 = *(uint *)(lVar19 + uVar7 * 4);
            if (uVar22 == 0) goto LAB_00103d00;
            goto LAB_00103561;
          }
        }
LAB_00103dd0:
        local_48 = 0;
        local_78 = 0;
        local_70 = 0;
        local_68 = 0;
        local_60 = 0;
        local_58 = 0;
        local_50 = 0;
        ShaderGLES3::_compile_specialization
                  ((Specialization *)this,(uint)(Specialization *)&local_78,(Version *)(ulong)uVar25
                   ,uVar24);
        uVar17 = *(uint *)(uVar24 + 0x68);
        if (uVar25 < uVar17) {
          OAHashMap<unsigned_long,ShaderGLES3::Version::Specialization,HashMapHasherDefault,HashMapComparatorDefault<unsigned_long>>
          ::insert((OAHashMap<unsigned_long,ShaderGLES3::Version::Specialization,HashMapHasherDefault,HashMapComparatorDefault<unsigned_long>>
                    *)(lVar5 + *(long *)(uVar24 + 0x70)),&local_80,(Specialization *)&local_78);
          uVar17 = *(uint *)(uVar24 + 0x68);
          if (uVar25 < uVar17) {
            plVar23 = (long *)(lVar5 + *(long *)(uVar24 + 0x70));
            uVar17 = *(uint *)(plVar23 + 3);
            uVar24 = uVar14 % (ulong)uVar17;
            uVar22 = *(uint *)(plVar23[2] + uVar24 * 4);
            if (uVar22 == 0) {
LAB_00103ce2:
              if (this[0xa0] == (CopyEffects)0x0) {
                ShaderGLES3::Version::Specialization::~Specialization((Specialization *)&local_78);
              }
              else {
                ShaderGLES3::_save_to_cache((Version *)this);
                ShaderGLES3::Version::Specialization::~Specialization((Specialization *)&local_78);
              }
            }
            else {
              uVar20 = 0;
LAB_00103ed1:
              if ((uVar22 != (uint)uVar14) || (uVar7 != *(ulong *)(plVar23[1] + uVar24 * 8)))
              goto LAB_00103e98;
              puVar26 = (undefined4 *)(*plVar23 + uVar24 * 0x38);
              if (this[0xa0] != (CopyEffects)0x0) {
                ShaderGLES3::_save_to_cache((Version *)this);
              }
              ShaderGLES3::Version::Specialization::~Specialization((Specialization *)&local_78);
LAB_0010357b:
              if (puVar26 == (undefined4 *)0x0) goto LAB_00103d00;
LAB_00103584:
              if (*(char *)((long)puVar26 + 0x31) != '\0') {
                (*_glad_glUseProgram)(*puVar26);
                lVar19 = (long)*(int *)(this + 0xd0);
                *(undefined4 **)(this + 0x128) = puVar26;
                pcVar4 = _glad_glUniform4f;
                uVar7 = *(ulong *)(this + 0x130);
                uVar16 = *(undefined4 *)(param_1 + 0xc);
                uVar1 = *(undefined4 *)(param_1 + 8);
                uVar2 = *(undefined4 *)(param_1 + 4);
                uVar3 = *(undefined4 *)param_1;
                if (0 < *(int *)(this + 0xd0)) {
                  if (uVar7 == 0) {
LAB_00104018:
                    _err_print_error("_version_get_uniform","./drivers/gles3/shader_gles3.h",0xe6,
                                     "Parameter \"version\" is null.",0);
                    lVar19 = (long)*(int *)(this + 0xd0);
                    goto LAB_001037fd;
                  }
                  if (*(uint *)(this + 0x54) <= (uint)uVar7) goto LAB_00104018;
                  lVar8 = ((uVar7 & 0xffffffff) % (ulong)*(uint *)(this + 0x50)) * 0x80 +
                          *(long *)(*(long *)(this + 0x40) +
                                   ((uVar7 & 0xffffffff) / (ulong)*(uint *)(this + 0x50)) * 8);
                  iVar11 = *(int *)(lVar8 + 0x78);
                  if (iVar11 != (int)(uVar7 >> 0x20)) {
                    if (iVar11 + 0x80000000U < 0x7fffffff) {
                      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                                       "Method/function failed. Returning: nullptr",
                                       "Attempting to use an uninitialized RID",0,0);
                    }
                    goto LAB_00104018;
                  }
                  uVar17 = *(uint *)(lVar8 + 0x68);
                  lVar19 = (long)(int)uVar17;
                  if ((int)uVar17 <= iVar13) {
                    iVar11 = 0xe7;
                    pcVar21 = "p_variant";
                    pcVar27 = "int(version->variants.size())";
                    uVar7 = uVar10;
                    goto LAB_001040b1;
                  }
                  if (uVar17 <= uVar25) {
LAB_00103f50:
                    uVar10 = 4;
                    uVar6 = 4;
                    goto LAB_00103f76;
                  }
                  plVar23 = (long *)(lVar5 + *(long *)(lVar8 + 0x70));
                  uVar17 = *(uint *)(plVar23 + 3);
                  uVar24 = 0x2aeaa2ab % (ulong)uVar17;
                  uVar22 = *(uint *)(plVar23[2] + uVar24 * 4);
                  if (uVar22 != 0) {
                    uVar20 = 0;
                    while ((uVar22 != 0x2aeaa2ab || (*(long *)(plVar23[1] + uVar24 * 8) != 0))) {
                      uVar20 = uVar20 + 1;
                      uVar24 = (ulong)((int)uVar24 + 1) % (ulong)uVar17;
                      uVar22 = *(uint *)(plVar23[2] + uVar24 * 4);
                      if ((uVar22 == 0) ||
                         (((uVar17 + (int)uVar24) - uVar22 % uVar17) % uVar17 < uVar20))
                      goto LAB_00104298;
                    }
                    lVar8 = *plVar23 + uVar24 * 0x38;
                    if (lVar8 != 0) {
                      lVar19 = (long)*(int *)(lVar8 + 0x10);
                      if (*(int *)(lVar8 + 0x10) < 1) {
                        iVar11 = 0xea;
                        pcVar21 = "p_which";
                        pcVar27 = "int(spec->uniform_location.size())";
                        uVar7 = 0;
                        goto LAB_001040b1;
                      }
                      lVar19 = (long)*(int *)(this + 0xd0);
                      if (**(int **)(lVar8 + 0x18) < 0) goto LAB_001037fd;
                      if (*(int *)(this + 0xd0) < 1) {
                        _err_print_index_error
                                  ("_version_get_uniform","./drivers/gles3/shader_gles3.h",0xe4,0,
                                   lVar19,"p_which","uniform_count","",false,false);
LAB_0010448c:
                        uVar15 = 0xffffffff;
                      }
                      else {
                        if (*(uint *)(this + 0x54) <= (uint)uVar7) {
LAB_00104565:
                          pcVar21 = "Parameter \"version\" is null.";
                          uVar12 = 0xe6;
LAB_0010458f:
                          _err_print_error("_version_get_uniform","./drivers/gles3/shader_gles3.h",
                                           uVar12,pcVar21,0);
                          goto LAB_0010448c;
                        }
                        lVar19 = ((uVar7 & 0xffffffff) % (ulong)*(uint *)(this + 0x50)) * 0x80 +
                                 *(long *)(*(long *)(this + 0x40) +
                                          ((uVar7 & 0xffffffff) / (ulong)*(uint *)(this + 0x50)) * 8
                                          );
                        if (iVar11 != *(int *)(lVar19 + 0x78)) {
                          if (*(int *)(lVar19 + 0x78) + 0x80000000U < 0x7fffffff) {
                            _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                                             "Method/function failed. Returning: nullptr",
                                             "Attempting to use an uninitialized RID",0,0);
                          }
                          goto LAB_00104565;
                        }
                        uVar17 = *(uint *)(lVar19 + 0x68);
                        if ((int)uVar17 <= iVar13) {
                          pcVar21 = "p_variant";
                          iVar11 = 0xe7;
                          pcVar27 = "int(version->variants.size())";
                          uVar7 = uVar10;
LAB_001045fc:
                          _err_print_index_error
                                    ("_version_get_uniform","./drivers/gles3/shader_gles3.h",iVar11,
                                     uVar7,(long)(int)uVar17,pcVar21,pcVar27,"",false,false);
                          goto LAB_0010448c;
                        }
                        if (uVar17 <= uVar25) goto LAB_00103f50;
                        plVar23 = (long *)(lVar5 + *(long *)(lVar19 + 0x70));
                        uVar17 = *(uint *)(plVar23 + 3);
                        uVar7 = 0x2aeaa2ab % (ulong)uVar17;
                        uVar22 = *(uint *)(plVar23[2] + uVar7 * 4);
                        if (uVar22 == 0) {
LAB_0010478b:
                          pcVar21 = "Parameter \"spec\" is null.";
                          uVar12 = 0xe9;
                          goto LAB_0010458f;
                        }
                        uVar20 = 0;
                        while ((uVar22 != 0x2aeaa2ab || (*(long *)(plVar23[1] + uVar7 * 8) != 0))) {
                          uVar20 = uVar20 + 1;
                          uVar7 = (ulong)((int)uVar7 + 1) % (ulong)uVar17;
                          uVar22 = *(uint *)(plVar23[2] + uVar7 * 4);
                          if ((uVar22 == 0) ||
                             (((uVar17 + (int)uVar7) - uVar22 % uVar17) % uVar17 < uVar20))
                          goto LAB_0010478b;
                        }
                        lVar19 = *plVar23 + uVar7 * 0x38;
                        if (lVar19 == 0) goto LAB_0010478b;
                        uVar17 = *(uint *)(lVar19 + 0x10);
                        if ((int)uVar17 < 1) {
                          pcVar21 = "p_which";
                          iVar11 = 0xea;
                          pcVar27 = "int(spec->uniform_location.size())";
                          uVar7 = 0;
                          goto LAB_001045fc;
                        }
                        uVar15 = **(undefined4 **)(lVar19 + 0x18);
                      }
                      (*pcVar4)(uVar3,uVar2,uVar1,uVar16,uVar15);
                      lVar19 = (long)*(int *)(this + 0xd0);
                      goto LAB_001037fd;
                    }
                  }
LAB_00104298:
                  _err_print_error("_version_get_uniform","./drivers/gles3/shader_gles3.h",0xe9,
                                   "Parameter \"spec\" is null.",0);
                  lVar19 = (long)*(int *)(this + 0xd0);
                  goto LAB_001037fd;
                }
                uVar7 = 0;
                iVar11 = 0xe4;
                pcVar21 = "p_which";
                pcVar27 = "uniform_count";
LAB_001040b1:
                _err_print_index_error
                          ("_version_get_uniform","./drivers/gles3/shader_gles3.h",iVar11,uVar7,
                           lVar19,pcVar21,pcVar27,"",false,false);
                lVar19 = (long)*(int *)(this + 0xd0);
LAB_001037fd:
                pcVar4 = _glad_glUniform1f;
                uVar7 = *(ulong *)(this + 0x130);
                if ((int)lVar19 < 3) {
                  uVar7 = 2;
                  pcVar21 = "p_which";
                  iVar11 = 0xe4;
                  pcVar27 = "uniform_count";
LAB_001040f9:
                  _err_print_index_error
                            ("_version_get_uniform","./drivers/gles3/shader_gles3.h",iVar11,uVar7,
                             lVar19,pcVar21,pcVar27,"",false,false);
                  lVar19 = (long)*(int *)(this + 0xd0);
                }
                else {
                  if (uVar7 != 0) {
                    if ((uint)uVar7 < *(uint *)(this + 0x54)) {
                      lVar8 = ((uVar7 & 0xffffffff) % (ulong)*(uint *)(this + 0x50)) * 0x80 +
                              *(long *)(*(long *)(this + 0x40) +
                                       ((uVar7 & 0xffffffff) / (ulong)*(uint *)(this + 0x50)) * 8);
                      iVar11 = *(int *)(lVar8 + 0x78);
                      if (iVar11 == (int)(uVar7 >> 0x20)) {
                        uVar17 = *(uint *)(lVar8 + 0x68);
                        lVar19 = (long)(int)uVar17;
                        if ((int)uVar17 <= iVar13) {
                          iVar11 = 0xe7;
                          pcVar21 = "p_variant";
                          pcVar27 = "int(version->variants.size())";
                          uVar7 = uVar10;
                          goto LAB_001040f9;
                        }
                        if (uVar17 <= uVar25) goto LAB_00103f50;
                        plVar23 = (long *)(lVar5 + *(long *)(lVar8 + 0x70));
                        uVar17 = *(uint *)(plVar23 + 3);
                        uVar24 = 0x2aeaa2ab % (ulong)uVar17;
                        uVar22 = *(uint *)(plVar23[2] + uVar24 * 4);
                        if (uVar22 != 0) {
                          uVar20 = 0;
                          while ((uVar22 != 0x2aeaa2ab || (*(long *)(plVar23[1] + uVar24 * 8) != 0))
                                ) {
                            uVar20 = uVar20 + 1;
                            uVar24 = (ulong)((int)uVar24 + 1) % (ulong)uVar17;
                            uVar22 = *(uint *)(plVar23[2] + uVar24 * 4);
                            if ((uVar22 == 0) ||
                               (((uVar17 + (int)uVar24) - uVar22 % uVar17) % uVar17 < uVar20))
                            goto LAB_00104330;
                          }
                          lVar8 = *plVar23 + uVar24 * 0x38;
                          if (lVar8 != 0) {
                            lVar19 = (long)*(int *)(lVar8 + 0x10);
                            if (*(int *)(lVar8 + 0x10) < 3) {
                              pcVar21 = "p_which";
                              iVar11 = 0xea;
                              pcVar27 = "int(spec->uniform_location.size())";
                              uVar7 = 2;
                              goto LAB_001040f9;
                            }
                            lVar19 = (long)*(int *)(this + 0xd0);
                            if (*(int *)(*(long *)(lVar8 + 0x18) + 8) < 0) goto LAB_00103a4d;
                            if (*(int *)(this + 0xd0) < 3) {
                              _err_print_index_error
                                        ("_version_get_uniform","./drivers/gles3/shader_gles3.h",
                                         0xe4,2,lVar19,"p_which","uniform_count","",false,false);
LAB_001044ec:
                              uVar16 = 0xffffffff;
                            }
                            else {
                              if (*(uint *)(this + 0x54) <= (uint)uVar7) {
LAB_00104671:
                                _err_print_error("_version_get_uniform",
                                                 "./drivers/gles3/shader_gles3.h",0xe6,
                                                 "Parameter \"version\" is null.",0);
                                goto LAB_001044ec;
                              }
                              lVar19 = ((uVar7 & 0xffffffff) % (ulong)*(uint *)(this + 0x50)) * 0x80
                                       + *(long *)(*(long *)(this + 0x40) +
                                                  ((uVar7 & 0xffffffff) /
                                                  (ulong)*(uint *)(this + 0x50)) * 8);
                              if (iVar11 != *(int *)(lVar19 + 0x78)) {
                                if (*(int *)(lVar19 + 0x78) + 0x80000000U < 0x7fffffff) {
                                  _err_print_error("get_or_null","./core/templates/rid_owner.h",
                                                   0x103,
                                                  "Method/function failed. Returning: nullptr",
                                                  "Attempting to use an uninitialized RID",0,0);
                                }
                                goto LAB_00104671;
                              }
                              uVar17 = *(uint *)(lVar19 + 0x68);
                              if ((int)uVar17 <= iVar13) {
                                _err_print_index_error
                                          ("_version_get_uniform","./drivers/gles3/shader_gles3.h",
                                           0xe7,uVar10,(long)(int)uVar17,"p_variant",
                                           "int(version->variants.size())","",false,false);
                                goto LAB_001044ec;
                              }
                              if (uVar17 <= uVar25) goto LAB_00103f50;
                              plVar23 = (long *)(lVar5 + *(long *)(lVar19 + 0x70));
                              uVar17 = *(uint *)(plVar23 + 3);
                              uVar7 = 0x2aeaa2ab % (ulong)uVar17;
                              uVar22 = *(uint *)(plVar23[2] + uVar7 * 4);
                              if (uVar22 == 0) {
LAB_001047fb:
                                _err_print_error("_version_get_uniform",
                                                 "./drivers/gles3/shader_gles3.h",0xe9,
                                                 "Parameter \"spec\" is null.",0);
                                goto LAB_001044ec;
                              }
                              uVar20 = 0;
                              while ((uVar22 != 0x2aeaa2ab ||
                                     (*(long *)(plVar23[1] + uVar7 * 8) != 0))) {
                                uVar20 = uVar20 + 1;
                                uVar7 = (ulong)((int)uVar7 + 1) % (ulong)uVar17;
                                uVar22 = *(uint *)(plVar23[2] + uVar7 * 4);
                                if ((uVar22 == 0) ||
                                   (((uVar17 + (int)uVar7) - uVar22 % uVar17) % uVar17 < uVar20))
                                goto LAB_001047fb;
                              }
                              lVar19 = *plVar23 + uVar7 * 0x38;
                              if (lVar19 == 0) goto LAB_001047fb;
                              if (*(int *)(lVar19 + 0x10) < 3) {
                                _err_print_index_error
                                          ("_version_get_uniform","./drivers/gles3/shader_gles3.h",
                                           0xea,2,(long)*(int *)(lVar19 + 0x10),"p_which",
                                           "int(spec->uniform_location.size())","",false,false);
                                goto LAB_001044ec;
                              }
                              uVar16 = *(undefined4 *)(*(long *)(lVar19 + 0x18) + 8);
                            }
                            (*pcVar4)(param_2,uVar16);
                            lVar19 = (long)*(int *)(this + 0xd0);
                            goto LAB_00103a4d;
                          }
                        }
LAB_00104330:
                        _err_print_error("_version_get_uniform","./drivers/gles3/shader_gles3.h",
                                         0xe9,"Parameter \"spec\" is null.",0);
                        lVar19 = (long)*(int *)(this + 0xd0);
                        goto LAB_00103a4d;
                      }
                      if (iVar11 + 0x80000000U < 0x7fffffff) {
                        _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                                         "Method/function failed. Returning: nullptr",
                                         "Attempting to use an uninitialized RID",0,0);
                      }
                    }
                  }
                  _err_print_error("_version_get_uniform","./drivers/gles3/shader_gles3.h",0xe6,
                                   "Parameter \"version\" is null.",0);
                  lVar19 = (long)*(int *)(this + 0xd0);
                }
LAB_00103a4d:
                pcVar4 = _glad_glUniform1f;
                uVar7 = *(ulong *)(this + 0x130);
                if ((int)lVar19 < 4) {
                  _err_print_index_error
                            ("_version_get_uniform","./drivers/gles3/shader_gles3.h",0xe4,3,lVar19,
                             "p_which","uniform_count","",false,false);
                  goto LAB_00103c96;
                }
                if (uVar7 == 0) {
LAB_00104240:
                  _err_print_error("_version_get_uniform","./drivers/gles3/shader_gles3.h",0xe6,
                                   "Parameter \"version\" is null.",0,0);
                }
                else {
                  if (*(uint *)(this + 0x54) <= (uint)uVar7) goto LAB_00104240;
                  lVar19 = ((uVar7 & 0xffffffff) % (ulong)*(uint *)(this + 0x50)) * 0x80 +
                           *(long *)(*(long *)(this + 0x40) +
                                    ((uVar7 & 0xffffffff) / (ulong)*(uint *)(this + 0x50)) * 8);
                  iVar11 = *(int *)(lVar19 + 0x78);
                  if (iVar11 != (int)(uVar7 >> 0x20)) {
                    if (iVar11 + 0x80000000U < 0x7fffffff) {
                      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                                       "Method/function failed. Returning: nullptr",
                                       "Attempting to use an uninitialized RID",0,0);
                    }
                    goto LAB_00104240;
                  }
                  uVar17 = *(uint *)(lVar19 + 0x68);
                  if ((int)uVar17 <= iVar13) {
                    _err_print_index_error
                              ("_version_get_uniform","./drivers/gles3/shader_gles3.h",0xe7,uVar10,
                               (long)(int)uVar17,"p_variant","int(version->variants.size())","",
                               false,false);
                    goto LAB_00103c96;
                  }
                  if (uVar17 <= uVar25) goto LAB_00103f50;
                  plVar23 = (long *)(lVar5 + *(long *)(lVar19 + 0x70));
                  uVar17 = *(uint *)(plVar23 + 3);
                  uVar24 = 0x2aeaa2ab % (ulong)uVar17;
                  uVar22 = *(uint *)(plVar23[2] + uVar24 * 4);
                  if (uVar22 == 0) {
LAB_001043b8:
                    _err_print_error("_version_get_uniform","./drivers/gles3/shader_gles3.h",0xe9,
                                     "Parameter \"spec\" is null.",0,0);
                  }
                  else {
                    uVar20 = 0;
                    while ((uVar22 != 0x2aeaa2ab || (*(long *)(plVar23[1] + uVar24 * 8) != 0))) {
                      uVar20 = uVar20 + 1;
                      uVar24 = (ulong)((int)uVar24 + 1) % (ulong)uVar17;
                      uVar22 = *(uint *)(plVar23[2] + uVar24 * 4);
                      if ((uVar22 == 0) ||
                         (((uVar17 + (int)uVar24) - uVar22 % uVar17) % uVar17 < uVar20))
                      goto LAB_001043b8;
                    }
                    lVar19 = *plVar23 + uVar24 * 0x38;
                    if (lVar19 == 0) goto LAB_001043b8;
                    if (*(int *)(lVar19 + 0x10) < 4) {
                      _err_print_index_error
                                ("_version_get_uniform","./drivers/gles3/shader_gles3.h",0xea,3,
                                 (long)*(int *)(lVar19 + 0x10),"p_which",
                                 "int(spec->uniform_location.size())","",false,false);
                    }
                    else if (-1 < *(int *)(*(long *)(lVar19 + 0x18) + 0xc)) {
                      if (*(int *)(this + 0xd0) < 4) {
                        _err_print_index_error
                                  ("_version_get_uniform","./drivers/gles3/shader_gles3.h",0xe4,3,
                                   (long)*(int *)(this + 0xd0),"p_which","uniform_count","",false,
                                   false);
LAB_001046d7:
                        uVar16 = 0xffffffff;
                      }
                      else {
                        if (*(uint *)(this + 0x54) <= (uint)uVar7) {
LAB_00104761:
                          _err_print_error("_version_get_uniform","./drivers/gles3/shader_gles3.h",
                                           0xe6,"Parameter \"version\" is null.",0,0);
                          goto LAB_001046d7;
                        }
                        lVar19 = ((uVar7 & 0xffffffff) % (ulong)*(uint *)(this + 0x50)) * 0x80 +
                                 *(long *)(*(long *)(this + 0x40) +
                                          ((uVar7 & 0xffffffff) / (ulong)*(uint *)(this + 0x50)) * 8
                                          );
                        if (iVar11 != *(int *)(lVar19 + 0x78)) {
                          if (*(int *)(lVar19 + 0x78) + 0x80000000U < 0x7fffffff) {
                            _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                                             "Method/function failed. Returning: nullptr",
                                             "Attempting to use an uninitialized RID",0,0);
                          }
                          goto LAB_00104761;
                        }
                        uVar17 = *(uint *)(lVar19 + 0x68);
                        if ((int)uVar17 <= iVar13) {
                          _err_print_index_error
                                    ("_version_get_uniform","./drivers/gles3/shader_gles3.h",0xe7,
                                     uVar10,(long)(int)uVar17,"p_variant",
                                     "int(version->variants.size())","",false,false);
                          goto LAB_001046d7;
                        }
                        if (uVar17 <= uVar25) goto LAB_00103f50;
                        plVar23 = (long *)(lVar5 + *(long *)(lVar19 + 0x70));
                        uVar25 = *(uint *)(plVar23 + 3);
                        uVar7 = 0x2aeaa2ab % (ulong)uVar25;
                        uVar17 = *(uint *)(plVar23[2] + uVar7 * 4);
                        if (uVar17 == 0) {
LAB_00104864:
                          _err_print_error("_version_get_uniform","./drivers/gles3/shader_gles3.h",
                                           0xe9,"Parameter \"spec\" is null.",0,0);
                          goto LAB_001046d7;
                        }
                        uVar22 = 0;
                        while ((uVar17 != 0x2aeaa2ab || (*(long *)(plVar23[1] + uVar7 * 8) != 0))) {
                          uVar22 = uVar22 + 1;
                          uVar7 = (ulong)((int)uVar7 + 1) % (ulong)uVar25;
                          uVar17 = *(uint *)(plVar23[2] + uVar7 * 4);
                          if ((uVar17 == 0) ||
                             (((uVar25 + (int)uVar7) - uVar17 % uVar25) % uVar25 < uVar22))
                          goto LAB_00104864;
                        }
                        lVar19 = *plVar23 + uVar7 * 0x38;
                        if (lVar19 == 0) goto LAB_00104864;
                        if (*(int *)(lVar19 + 0x10) < 4) {
                          _err_print_index_error
                                    ("_version_get_uniform","./drivers/gles3/shader_gles3.h",0xea,3,
                                     (long)*(int *)(lVar19 + 0x10),"p_which",
                                     "int(spec->uniform_location.size())","",false,false);
                          goto LAB_001046d7;
                        }
                        uVar16 = *(undefined4 *)(*(long *)(lVar19 + 0x18) + 0xc);
                      }
                      (*pcVar4)(param_4,uVar16);
                    }
                  }
                }
LAB_00103c96:
                if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                  draw_screen_quad(this);
                  return;
                }
                goto LAB_00104946;
              }
            }
            goto LAB_00103d00;
          }
        }
        uVar6 = (ulong)uVar17;
LAB_00103f76:
        _err_print_index_error
                  ("operator[]","./core/templates/local_vector.h",0xb2,uVar10,uVar6,"p_index",
                   "count","",false,true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      if (*(int *)(uVar24 + 0x78) + 0x80000000U < 0x7fffffff) {
        _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                         "Method/function failed. Returning: nullptr",
                         "Attempting to use an uninitialized RID",0,0);
      }
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      pcVar21 = "Parameter \"version\" is null.";
      uVar12 = 0xbe;
      pcVar27 = "./drivers/gles3/shader_gles3.h";
      pcVar18 = "_version_bind_shader";
LAB_00103db7:
      _err_print_error(pcVar18,pcVar27,uVar12,pcVar21,0,0);
      return;
    }
    goto LAB_00104946;
  }
  _err_print_index_error
            ("_version_bind_shader","./drivers/gles3/shader_gles3.h",0xbb,(ulong)uVar25,
             (long)*(int *)(this + 0x120),"p_variant","variant_count","",false,false);
  goto LAB_00103d09;
LAB_00103e98:
  uVar20 = uVar20 + 1;
  uVar24 = (ulong)((int)uVar24 + 1) % (ulong)uVar17;
  uVar22 = *(uint *)(plVar23[2] + uVar24 * 4);
  if ((uVar22 == 0) || (((uVar17 + (int)uVar24) - uVar22 % uVar17) % uVar17 < uVar20))
  goto LAB_00103ce2;
  goto LAB_00103ed1;
  while( true ) {
    uVar20 = uVar20 + 1;
    uVar7 = (ulong)((int)uVar7 + 1) % uVar9;
    uVar22 = *(uint *)(lVar19 + uVar7 * 4);
    if ((uVar22 == 0) || (((uVar17 + (int)uVar7) - uVar22 % uVar17) % uVar17 < uVar20)) break;
LAB_00103561:
    if ((uVar22 == (uint)uVar24) && (*(long *)(this + 0x110) == *(long *)(plVar23[1] + uVar7 * 8)))
    {
      puVar26 = (undefined4 *)(*plVar23 + uVar7 * 0x38);
      goto LAB_0010357b;
    }
  }
LAB_00103d00:
  if (ShaderGLES3::_version_bind_shader(RID,int,unsigned_long)::first_print != '\0') {
    _err_print_error("_version_bind_shader","./drivers/gles3/shader_gles3.h",0xda,
                     "shader failed to compile, unable to bind shader.",0,1);
    ShaderGLES3::_version_bind_shader(RID,int,unsigned_long)::first_print = '\0';
  }
LAB_00103d09:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00104946:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GLES3::CopyEffects::copy_screen(float) */

void __thiscall GLES3::CopyEffects::copy_screen(CopyEffects *this,float param_1)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  code *pcVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  undefined4 uVar10;
  uint uVar11;
  uint uVar12;
  ulong uVar13;
  undefined4 *puVar14;
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
  local_80 = 0;
  if (5 < *(int *)(this + 0x120)) {
    if ((uVar6 != 0) && ((uint)uVar6 < *(uint *)(this + 0x54))) {
      uVar13 = ((uVar6 & 0xffffffff) % (ulong)*(uint *)(this + 0x50)) * 0x80 +
               *(long *)(*(long *)(this + 0x40) +
                        ((uVar6 & 0xffffffff) / (ulong)*(uint *)(this + 0x50)) * 8);
      if (*(int *)(uVar13 + 0x78) == (int)(uVar6 >> 0x20)) {
        uVar1 = *(uint *)(uVar13 + 0x68);
        if (uVar1 == 0) {
          ShaderGLES3::_initialize_version((Version *)this);
          uVar1 = *(uint *)(uVar13 + 0x68);
        }
        uVar6 = local_80;
        uVar5 = (ulong)uVar1;
        if (uVar1 < 6) {
LAB_00105020:
          _err_print_index_error
                    ("operator[]","./core/templates/local_vector.h",0xb2,5,uVar5,"p_index","count",
                     "",false,true);
          _err_flush_stdout();
                    /* WARNING: Does not return */
          pcVar4 = (code *)invalidInstructionException();
          (*pcVar4)();
        }
        lVar8 = *(long *)(uVar13 + 0x70);
        uVar1 = *(uint *)(lVar8 + 0xb8);
        uVar7 = (ulong)uVar1;
        lVar3 = *(long *)(lVar8 + 0xb0);
        uVar5 = local_80 * 0x3ffff - 1;
        uVar5 = (uVar5 ^ uVar5 >> 0x1f) * 0x15;
        uVar5 = (uVar5 ^ uVar5 >> 0xb) * 0x41;
        uVar5 = uVar5 >> 0x16 ^ uVar5;
        uVar9 = uVar5 & 0xffffffff;
        if ((int)uVar5 == 0) {
          uVar9 = 1;
        }
        uVar5 = uVar9 % uVar7;
        uVar12 = *(uint *)(lVar3 + uVar5 * 4);
        if (uVar12 != 0) {
          uVar11 = 0;
          while (((uint)uVar9 != uVar12 ||
                 (local_80 != *(ulong *)(*(long *)(lVar8 + 0xa8) + uVar5 * 8)))) {
            uVar11 = uVar11 + 1;
            uVar5 = (ulong)((int)uVar5 + 1) % uVar7;
            uVar12 = *(uint *)(lVar3 + uVar5 * 4);
            if ((uVar12 == 0) || (((uVar1 + (int)uVar5) - uVar12 % uVar1) % uVar1 < uVar11))
            goto LAB_00104ed8;
          }
          puVar14 = (undefined4 *)(*(long *)(lVar8 + 0xa0) + uVar5 * 0x38);
          if (puVar14 != (undefined4 *)0x0) {
            if (*(char *)(puVar14 + 0xc) == '\0') goto LAB_00104bb4;
            uVar6 = *(long *)(this + 0x110) * 0x3ffff - 1;
            uVar6 = (uVar6 ^ uVar6 >> 0x1f) * 0x15;
            uVar6 = (uVar6 ^ uVar6 >> 0xb) * 0x41;
            uVar6 = uVar6 >> 0x16 ^ uVar6;
            uVar13 = uVar6 & 0xffffffff;
            if ((int)uVar6 == 0) {
              uVar13 = 1;
            }
            uVar11 = 0;
            uVar6 = uVar13 % uVar7;
            uVar12 = *(uint *)(lVar3 + uVar6 * 4);
            if (uVar12 == 0) goto LAB_00104e58;
            goto LAB_00104b91;
          }
        }
LAB_00104ed8:
        local_48 = 0;
        local_78 = 0;
        local_70 = 0;
        local_68 = 0;
        local_60 = 0;
        local_58 = 0;
        local_50 = 0;
        ShaderGLES3::_compile_specialization
                  ((Specialization *)this,(uint)(Specialization *)&local_78,(Version *)0x5,uVar13);
        uVar5 = (ulong)*(uint *)(uVar13 + 0x68);
        if (*(uint *)(uVar13 + 0x68) < 6) goto LAB_00105020;
        OAHashMap<unsigned_long,ShaderGLES3::Version::Specialization,HashMapHasherDefault,HashMapComparatorDefault<unsigned_long>>
        ::insert((OAHashMap<unsigned_long,ShaderGLES3::Version::Specialization,HashMapHasherDefault,HashMapComparatorDefault<unsigned_long>>
                  *)(*(long *)(uVar13 + 0x70) + 0xa0),&local_80,(Specialization *)&local_78);
        uVar5 = (ulong)*(uint *)(uVar13 + 0x68);
        if (*(uint *)(uVar13 + 0x68) < 6) goto LAB_00105020;
        lVar8 = *(long *)(uVar13 + 0x70);
        uVar1 = *(uint *)(lVar8 + 0xb8);
        uVar13 = uVar9 % (ulong)uVar1;
        uVar12 = *(uint *)(*(long *)(lVar8 + 0xb0) + uVar13 * 4);
        if (uVar12 != 0) {
          uVar11 = 0;
LAB_00104fd9:
          if ((uVar12 != (uint)uVar9) || (uVar6 != *(ulong *)(*(long *)(lVar8 + 0xa8) + uVar13 * 8))
             ) goto LAB_00104fa0;
          puVar14 = (undefined4 *)(*(long *)(lVar8 + 0xa0) + uVar13 * 0x38);
          if (this[0xa0] != (CopyEffects)0x0) {
            ShaderGLES3::_save_to_cache((Version *)this);
          }
          ShaderGLES3::Version::Specialization::~Specialization((Specialization *)&local_78);
LAB_00104bab:
          if (puVar14 != (undefined4 *)0x0) {
LAB_00104bb4:
            if (*(char *)((long)puVar14 + 0x31) != '\0') {
              (*_glad_glUseProgram)(*puVar14);
              *(undefined4 **)(this + 0x128) = puVar14;
              pcVar4 = _glad_glUniform1f;
              uVar6 = *(ulong *)(this + 0x130);
              if (*(int *)(this + 0xd0) < 6) {
                _err_print_index_error
                          ("_version_get_uniform","./drivers/gles3/shader_gles3.h",0xe4,5,
                           (long)*(int *)(this + 0xd0),"p_which","uniform_count","",false,false);
                goto LAB_00104e16;
              }
              if (uVar6 == 0) {
LAB_001051d0:
                _err_print_error("_version_get_uniform","./drivers/gles3/shader_gles3.h",0xe6,
                                 "Parameter \"version\" is null.",0,0);
              }
              else {
                if (*(uint *)(this + 0x54) <= (uint)uVar6) goto LAB_001051d0;
                lVar8 = ((uVar6 & 0xffffffff) % (ulong)*(uint *)(this + 0x50)) * 0x80 +
                        *(long *)(*(long *)(this + 0x40) +
                                 ((uVar6 & 0xffffffff) / (ulong)*(uint *)(this + 0x50)) * 8);
                iVar2 = *(int *)(lVar8 + 0x78);
                if (iVar2 != (int)(uVar6 >> 0x20)) {
                  if (iVar2 + 0x80000000U < 0x7fffffff) {
                    _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                                     "Method/function failed. Returning: nullptr",
                                     "Attempting to use an uninitialized RID",0,0);
                  }
                  goto LAB_001051d0;
                }
                if (*(int *)(lVar8 + 0x68) < 6) {
                  _err_print_index_error
                            ("_version_get_uniform","./drivers/gles3/shader_gles3.h",0xe7,5,
                             (long)*(int *)(lVar8 + 0x68),"p_variant",
                             "int(version->variants.size())","",false,false);
                  goto LAB_00104e16;
                }
                lVar8 = *(long *)(lVar8 + 0x70);
                uVar1 = *(uint *)(lVar8 + 0xb8);
                uVar13 = 0x2aeaa2ab % (ulong)uVar1;
                uVar12 = *(uint *)(*(long *)(lVar8 + 0xb0) + uVar13 * 4);
                if (uVar12 == 0) {
LAB_00105240:
                  _err_print_error("_version_get_uniform","./drivers/gles3/shader_gles3.h",0xe9,
                                   "Parameter \"spec\" is null.",0,0);
                }
                else {
                  uVar11 = 0;
                  while ((uVar12 != 0x2aeaa2ab ||
                         (*(long *)(*(long *)(lVar8 + 0xa8) + uVar13 * 8) != 0))) {
                    uVar11 = uVar11 + 1;
                    uVar13 = (ulong)((int)uVar13 + 1) % (ulong)uVar1;
                    uVar12 = *(uint *)(*(long *)(lVar8 + 0xb0) + uVar13 * 4);
                    if ((uVar12 == 0) || (((uVar1 + (int)uVar13) - uVar12 % uVar1) % uVar1 < uVar11)
                       ) goto LAB_00105240;
                  }
                  lVar8 = *(long *)(lVar8 + 0xa0) + uVar13 * 0x38;
                  if (lVar8 == 0) goto LAB_00105240;
                  if (*(int *)(lVar8 + 0x10) < 6) {
                    _err_print_index_error
                              ("_version_get_uniform","./drivers/gles3/shader_gles3.h",0xea,5,
                               (long)*(int *)(lVar8 + 0x10),"p_which",
                               "int(spec->uniform_location.size())","",false,false);
                  }
                  else if (-1 < *(int *)(*(long *)(lVar8 + 0x18) + 0x14)) {
                    if (*(int *)(this + 0xd0) < 6) {
                      _err_print_index_error
                                ("_version_get_uniform","./drivers/gles3/shader_gles3.h",0xe4,5,
                                 (long)*(int *)(this + 0xd0),"p_which","uniform_count","",false,
                                 false);
LAB_001052e7:
                      uVar10 = 0xffffffff;
                    }
                    else {
                      if (*(uint *)(this + 0x54) <= (uint)uVar6) {
LAB_00105330:
                        _err_print_error("_version_get_uniform","./drivers/gles3/shader_gles3.h",
                                         0xe6,"Parameter \"version\" is null.",0,0);
                        goto LAB_001052e7;
                      }
                      lVar8 = ((uVar6 & 0xffffffff) % (ulong)*(uint *)(this + 0x50)) * 0x80 +
                              *(long *)(*(long *)(this + 0x40) +
                                       ((uVar6 & 0xffffffff) / (ulong)*(uint *)(this + 0x50)) * 8);
                      if (iVar2 != *(int *)(lVar8 + 0x78)) {
                        if (*(int *)(lVar8 + 0x78) + 0x80000000U < 0x7fffffff) {
                          _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                                           "Method/function failed. Returning: nullptr",
                                           "Attempting to use an uninitialized RID",0,0);
                        }
                        goto LAB_00105330;
                      }
                      if (*(int *)(lVar8 + 0x68) < 6) {
                        _err_print_index_error
                                  ("_version_get_uniform","./drivers/gles3/shader_gles3.h",0xe7,5,
                                   (long)*(int *)(lVar8 + 0x68),"p_variant",
                                   "int(version->variants.size())","",false,false);
                        goto LAB_001052e7;
                      }
                      lVar8 = *(long *)(lVar8 + 0x70);
                      uVar1 = *(uint *)(lVar8 + 0xb8);
                      uVar6 = (ulong)uVar12 % (ulong)uVar1;
                      uVar12 = *(uint *)(*(long *)(lVar8 + 0xb0) + uVar6 * 4);
                      if (uVar12 == 0) {
LAB_001053b0:
                        _err_print_error("_version_get_uniform","./drivers/gles3/shader_gles3.h",
                                         0xe9,"Parameter \"spec\" is null.",0,0);
                        goto LAB_001052e7;
                      }
                      uVar11 = 0;
                      while ((uVar12 != 0x2aeaa2ab ||
                             (*(long *)(*(long *)(lVar8 + 0xa8) + uVar6 * 8) != 0))) {
                        uVar11 = uVar11 + 1;
                        uVar6 = (ulong)((int)uVar6 + 1) % (ulong)uVar1;
                        uVar12 = *(uint *)(*(long *)(lVar8 + 0xb0) + uVar6 * 4);
                        if ((uVar12 == 0) ||
                           (((uVar1 + (int)uVar6) - uVar12 % uVar1) % uVar1 < uVar11))
                        goto LAB_001053b0;
                      }
                      lVar8 = *(long *)(lVar8 + 0xa0) + uVar6 * 0x38;
                      if (lVar8 == 0) goto LAB_001053b0;
                      if (*(int *)(lVar8 + 0x10) < 6) {
                        _err_print_index_error
                                  ("_version_get_uniform","./drivers/gles3/shader_gles3.h",0xea,5,
                                   (long)*(int *)(lVar8 + 0x10),"p_which",
                                   "int(spec->uniform_location.size())","",false,false);
                        goto LAB_001052e7;
                      }
                      uVar10 = *(undefined4 *)(*(long *)(lVar8 + 0x18) + 0x14);
                    }
                    (*pcVar4)(param_1,uVar10);
                  }
                }
              }
LAB_00104e16:
              if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                draw_screen_triangle(this);
                return;
              }
              goto LAB_0010541b;
            }
          }
          goto LAB_00104e58;
        }
LAB_00104e40:
        if (this[0xa0] == (CopyEffects)0x0) {
          ShaderGLES3::Version::Specialization::~Specialization((Specialization *)&local_78);
        }
        else {
          ShaderGLES3::_save_to_cache((Version *)this);
          ShaderGLES3::Version::Specialization::~Specialization((Specialization *)&local_78);
        }
        goto LAB_00104e58;
      }
      if (*(int *)(uVar13 + 0x78) + 0x80000000U < 0x7fffffff) {
        _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                         "Method/function failed. Returning: nullptr",
                         "Attempting to use an uninitialized RID",0,0);
      }
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      _err_print_error("_version_bind_shader","./drivers/gles3/shader_gles3.h",0xbe,
                       "Parameter \"version\" is null.",0,0);
      return;
    }
    goto LAB_0010541b;
  }
  _err_print_index_error
            ("_version_bind_shader","./drivers/gles3/shader_gles3.h",0xbb,5,
             (long)*(int *)(this + 0x120),"p_variant","variant_count","",false,false);
  goto LAB_00104e61;
LAB_00104fa0:
  uVar11 = uVar11 + 1;
  uVar13 = (ulong)((int)uVar13 + 1) % (ulong)uVar1;
  uVar12 = *(uint *)(*(long *)(lVar8 + 0xb0) + uVar13 * 4);
  if ((uVar12 == 0) || (((uVar1 + (int)uVar13) - uVar12 % uVar1) % uVar1 < uVar11))
  goto LAB_00104e40;
  goto LAB_00104fd9;
  while( true ) {
    uVar11 = uVar11 + 1;
    uVar6 = (ulong)((int)uVar6 + 1) % uVar7;
    uVar12 = *(uint *)(lVar3 + uVar6 * 4);
    if ((uVar12 == 0) || (((uVar1 + (int)uVar6) - uVar12 % uVar1) % uVar1 < uVar11)) break;
LAB_00104b91:
    if ((uVar12 == (uint)uVar13) &&
       (*(long *)(this + 0x110) == *(long *)(*(long *)(lVar8 + 0xa8) + uVar6 * 8))) {
      puVar14 = (undefined4 *)(*(long *)(lVar8 + 0xa0) + uVar6 * 0x38);
      goto LAB_00104bab;
    }
  }
LAB_00104e58:
  if (ShaderGLES3::_version_bind_shader(RID,int,unsigned_long)::first_print != '\0') {
    _err_print_error("_version_bind_shader","./drivers/gles3/shader_gles3.h",0xda,
                     "shader failed to compile, unable to bind shader.",0,1);
    ShaderGLES3::_version_bind_shader(RID,int,unsigned_long)::first_print = '\0';
  }
LAB_00104e61:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_0010541b:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GLES3::CopyEffects::copy_cube_to_panorama(float) */

void __thiscall GLES3::CopyEffects::copy_cube_to_panorama(CopyEffects *this,float param_1)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  code *pcVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  undefined4 uVar10;
  uint uVar11;
  uint uVar12;
  ulong uVar13;
  undefined4 *puVar14;
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
  local_80 = 0;
  if (10 < *(int *)(this + 0x120)) {
    if ((uVar6 != 0) && ((uint)uVar6 < *(uint *)(this + 0x54))) {
      uVar13 = ((uVar6 & 0xffffffff) % (ulong)*(uint *)(this + 0x50)) * 0x80 +
               *(long *)(*(long *)(this + 0x40) +
                        ((uVar6 & 0xffffffff) / (ulong)*(uint *)(this + 0x50)) * 8);
      if (*(int *)(uVar13 + 0x78) == (int)(uVar6 >> 0x20)) {
        uVar1 = *(uint *)(uVar13 + 0x68);
        if (uVar1 == 0) {
          ShaderGLES3::_initialize_version((Version *)this);
          uVar1 = *(uint *)(uVar13 + 0x68);
        }
        uVar6 = local_80;
        uVar5 = (ulong)uVar1;
        if (uVar1 < 0xb) {
LAB_00105af0:
          _err_print_index_error
                    ("operator[]","./core/templates/local_vector.h",0xb2,10,uVar5,"p_index","count",
                     "",false,true);
          _err_flush_stdout();
                    /* WARNING: Does not return */
          pcVar4 = (code *)invalidInstructionException();
          (*pcVar4)();
        }
        lVar8 = *(long *)(uVar13 + 0x70);
        uVar1 = *(uint *)(lVar8 + 0x158);
        uVar7 = (ulong)uVar1;
        lVar3 = *(long *)(lVar8 + 0x150);
        uVar5 = local_80 * 0x3ffff - 1;
        uVar5 = (uVar5 ^ uVar5 >> 0x1f) * 0x15;
        uVar5 = (uVar5 ^ uVar5 >> 0xb) * 0x41;
        uVar5 = uVar5 >> 0x16 ^ uVar5;
        uVar9 = uVar5 & 0xffffffff;
        if ((int)uVar5 == 0) {
          uVar9 = 1;
        }
        uVar5 = uVar9 % uVar7;
        uVar12 = *(uint *)(lVar3 + uVar5 * 4);
        if (uVar12 != 0) {
          uVar11 = 0;
          while (((uint)uVar9 != uVar12 ||
                 (local_80 != *(ulong *)(*(long *)(lVar8 + 0x148) + uVar5 * 8)))) {
            uVar11 = uVar11 + 1;
            uVar5 = (ulong)((int)uVar5 + 1) % uVar7;
            uVar12 = *(uint *)(lVar3 + uVar5 * 4);
            if ((uVar12 == 0) || (((uVar1 + (int)uVar5) - uVar12 % uVar1) % uVar1 < uVar11))
            goto LAB_001059a8;
          }
          puVar14 = (undefined4 *)(*(long *)(lVar8 + 0x140) + uVar5 * 0x38);
          if (puVar14 != (undefined4 *)0x0) {
            if (*(char *)(puVar14 + 0xc) == '\0') goto LAB_00105684;
            uVar6 = *(long *)(this + 0x110) * 0x3ffff - 1;
            uVar6 = (uVar6 ^ uVar6 >> 0x1f) * 0x15;
            uVar6 = (uVar6 ^ uVar6 >> 0xb) * 0x41;
            uVar6 = uVar6 >> 0x16 ^ uVar6;
            uVar13 = uVar6 & 0xffffffff;
            if ((int)uVar6 == 0) {
              uVar13 = 1;
            }
            uVar11 = 0;
            uVar6 = uVar13 % uVar7;
            uVar12 = *(uint *)(lVar3 + uVar6 * 4);
            if (uVar12 == 0) goto LAB_00105928;
            goto LAB_00105661;
          }
        }
LAB_001059a8:
        local_48 = 0;
        local_78 = 0;
        local_70 = 0;
        local_68 = 0;
        local_60 = 0;
        local_58 = 0;
        local_50 = 0;
        ShaderGLES3::_compile_specialization
                  ((Specialization *)this,(uint)(Specialization *)&local_78,(Version *)0xa,uVar13);
        uVar5 = (ulong)*(uint *)(uVar13 + 0x68);
        if (*(uint *)(uVar13 + 0x68) < 0xb) goto LAB_00105af0;
        OAHashMap<unsigned_long,ShaderGLES3::Version::Specialization,HashMapHasherDefault,HashMapComparatorDefault<unsigned_long>>
        ::insert((OAHashMap<unsigned_long,ShaderGLES3::Version::Specialization,HashMapHasherDefault,HashMapComparatorDefault<unsigned_long>>
                  *)(*(long *)(uVar13 + 0x70) + 0x140),&local_80,(Specialization *)&local_78);
        uVar5 = (ulong)*(uint *)(uVar13 + 0x68);
        if (*(uint *)(uVar13 + 0x68) < 0xb) goto LAB_00105af0;
        lVar8 = *(long *)(uVar13 + 0x70);
        uVar1 = *(uint *)(lVar8 + 0x158);
        uVar13 = uVar9 % (ulong)uVar1;
        uVar12 = *(uint *)(*(long *)(lVar8 + 0x150) + uVar13 * 4);
        if (uVar12 != 0) {
          uVar11 = 0;
LAB_00105aa9:
          if ((uVar12 != (uint)uVar9) ||
             (uVar6 != *(ulong *)(*(long *)(lVar8 + 0x148) + uVar13 * 8))) goto LAB_00105a70;
          puVar14 = (undefined4 *)(*(long *)(lVar8 + 0x140) + uVar13 * 0x38);
          if (this[0xa0] != (CopyEffects)0x0) {
            ShaderGLES3::_save_to_cache((Version *)this);
          }
          ShaderGLES3::Version::Specialization::~Specialization((Specialization *)&local_78);
LAB_0010567b:
          if (puVar14 != (undefined4 *)0x0) {
LAB_00105684:
            if (*(char *)((long)puVar14 + 0x31) != '\0') {
              (*_glad_glUseProgram)(*puVar14);
              *(undefined4 **)(this + 0x128) = puVar14;
              pcVar4 = _glad_glUniform1f;
              uVar6 = *(ulong *)(this + 0x130);
              if (*(int *)(this + 0xd0) < 8) {
                _err_print_index_error
                          ("_version_get_uniform","./drivers/gles3/shader_gles3.h",0xe4,7,
                           (long)*(int *)(this + 0xd0),"p_which","uniform_count","",false,false);
                goto LAB_001058e6;
              }
              if (uVar6 == 0) {
LAB_00105ca0:
                _err_print_error("_version_get_uniform","./drivers/gles3/shader_gles3.h",0xe6,
                                 "Parameter \"version\" is null.",0,0);
              }
              else {
                if (*(uint *)(this + 0x54) <= (uint)uVar6) goto LAB_00105ca0;
                lVar8 = ((uVar6 & 0xffffffff) % (ulong)*(uint *)(this + 0x50)) * 0x80 +
                        *(long *)(*(long *)(this + 0x40) +
                                 ((uVar6 & 0xffffffff) / (ulong)*(uint *)(this + 0x50)) * 8);
                iVar2 = *(int *)(lVar8 + 0x78);
                if (iVar2 != (int)(uVar6 >> 0x20)) {
                  if (iVar2 + 0x80000000U < 0x7fffffff) {
                    _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                                     "Method/function failed. Returning: nullptr",
                                     "Attempting to use an uninitialized RID",0,0);
                  }
                  goto LAB_00105ca0;
                }
                if (*(int *)(lVar8 + 0x68) < 0xb) {
                  _err_print_index_error
                            ("_version_get_uniform","./drivers/gles3/shader_gles3.h",0xe7,10,
                             (long)*(int *)(lVar8 + 0x68),"p_variant",
                             "int(version->variants.size())","",false,false);
                  goto LAB_001058e6;
                }
                lVar8 = *(long *)(lVar8 + 0x70);
                uVar1 = *(uint *)(lVar8 + 0x158);
                uVar13 = 0x2aeaa2ab % (ulong)uVar1;
                uVar12 = *(uint *)(*(long *)(lVar8 + 0x150) + uVar13 * 4);
                if (uVar12 == 0) {
LAB_00105d10:
                  _err_print_error("_version_get_uniform","./drivers/gles3/shader_gles3.h",0xe9,
                                   "Parameter \"spec\" is null.",0,0);
                }
                else {
                  uVar11 = 0;
                  while ((uVar12 != 0x2aeaa2ab ||
                         (*(long *)(*(long *)(lVar8 + 0x148) + uVar13 * 8) != 0))) {
                    uVar11 = uVar11 + 1;
                    uVar13 = (ulong)((int)uVar13 + 1) % (ulong)uVar1;
                    uVar12 = *(uint *)(*(long *)(lVar8 + 0x150) + uVar13 * 4);
                    if ((uVar12 == 0) || (((uVar1 + (int)uVar13) - uVar12 % uVar1) % uVar1 < uVar11)
                       ) goto LAB_00105d10;
                  }
                  lVar8 = *(long *)(lVar8 + 0x140) + uVar13 * 0x38;
                  if (lVar8 == 0) goto LAB_00105d10;
                  if (*(int *)(lVar8 + 0x10) < 8) {
                    _err_print_index_error
                              ("_version_get_uniform","./drivers/gles3/shader_gles3.h",0xea,7,
                               (long)*(int *)(lVar8 + 0x10),"p_which",
                               "int(spec->uniform_location.size())","",false,false);
                  }
                  else if (-1 < *(int *)(*(long *)(lVar8 + 0x18) + 0x1c)) {
                    if (*(int *)(this + 0xd0) < 8) {
                      _err_print_index_error
                                ("_version_get_uniform","./drivers/gles3/shader_gles3.h",0xe4,7,
                                 (long)*(int *)(this + 0xd0),"p_which","uniform_count","",false,
                                 false);
LAB_00105db7:
                      uVar10 = 0xffffffff;
                    }
                    else {
                      if (*(uint *)(this + 0x54) <= (uint)uVar6) {
LAB_00105e00:
                        _err_print_error("_version_get_uniform","./drivers/gles3/shader_gles3.h",
                                         0xe6,"Parameter \"version\" is null.",0,0);
                        goto LAB_00105db7;
                      }
                      lVar8 = ((uVar6 & 0xffffffff) % (ulong)*(uint *)(this + 0x50)) * 0x80 +
                              *(long *)(*(long *)(this + 0x40) +
                                       ((uVar6 & 0xffffffff) / (ulong)*(uint *)(this + 0x50)) * 8);
                      if (iVar2 != *(int *)(lVar8 + 0x78)) {
                        if (*(int *)(lVar8 + 0x78) + 0x80000000U < 0x7fffffff) {
                          _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                                           "Method/function failed. Returning: nullptr",
                                           "Attempting to use an uninitialized RID",0,0);
                        }
                        goto LAB_00105e00;
                      }
                      if (*(int *)(lVar8 + 0x68) < 0xb) {
                        _err_print_index_error
                                  ("_version_get_uniform","./drivers/gles3/shader_gles3.h",0xe7,10,
                                   (long)*(int *)(lVar8 + 0x68),"p_variant",
                                   "int(version->variants.size())","",false,false);
                        goto LAB_00105db7;
                      }
                      lVar8 = *(long *)(lVar8 + 0x70);
                      uVar1 = *(uint *)(lVar8 + 0x158);
                      uVar6 = (ulong)uVar12 % (ulong)uVar1;
                      uVar12 = *(uint *)(*(long *)(lVar8 + 0x150) + uVar6 * 4);
                      if (uVar12 == 0) {
LAB_00105e80:
                        _err_print_error("_version_get_uniform","./drivers/gles3/shader_gles3.h",
                                         0xe9,"Parameter \"spec\" is null.",0,0);
                        goto LAB_00105db7;
                      }
                      uVar11 = 0;
                      while ((uVar12 != 0x2aeaa2ab ||
                             (*(long *)(*(long *)(lVar8 + 0x148) + uVar6 * 8) != 0))) {
                        uVar11 = uVar11 + 1;
                        uVar6 = (ulong)((int)uVar6 + 1) % (ulong)uVar1;
                        uVar12 = *(uint *)(*(long *)(lVar8 + 0x150) + uVar6 * 4);
                        if ((uVar12 == 0) ||
                           (((uVar1 + (int)uVar6) - uVar12 % uVar1) % uVar1 < uVar11))
                        goto LAB_00105e80;
                      }
                      lVar8 = *(long *)(lVar8 + 0x140) + uVar6 * 0x38;
                      if (lVar8 == 0) goto LAB_00105e80;
                      if (*(int *)(lVar8 + 0x10) < 8) {
                        _err_print_index_error
                                  ("_version_get_uniform","./drivers/gles3/shader_gles3.h",0xea,7,
                                   (long)*(int *)(lVar8 + 0x10),"p_which",
                                   "int(spec->uniform_location.size())","",false,false);
                        goto LAB_00105db7;
                      }
                      uVar10 = *(undefined4 *)(*(long *)(lVar8 + 0x18) + 0x1c);
                    }
                    (*pcVar4)(param_1,uVar10);
                  }
                }
              }
LAB_001058e6:
              if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                draw_screen_quad(this);
                return;
              }
              goto LAB_00105eeb;
            }
          }
          goto LAB_00105928;
        }
LAB_00105910:
        if (this[0xa0] == (CopyEffects)0x0) {
          ShaderGLES3::Version::Specialization::~Specialization((Specialization *)&local_78);
        }
        else {
          ShaderGLES3::_save_to_cache((Version *)this);
          ShaderGLES3::Version::Specialization::~Specialization((Specialization *)&local_78);
        }
        goto LAB_00105928;
      }
      if (*(int *)(uVar13 + 0x78) + 0x80000000U < 0x7fffffff) {
        _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                         "Method/function failed. Returning: nullptr",
                         "Attempting to use an uninitialized RID",0,0);
      }
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      _err_print_error("_version_bind_shader","./drivers/gles3/shader_gles3.h",0xbe,
                       "Parameter \"version\" is null.",0,0);
      return;
    }
    goto LAB_00105eeb;
  }
  _err_print_index_error
            ("_version_bind_shader","./drivers/gles3/shader_gles3.h",0xbb,10,
             (long)*(int *)(this + 0x120),"p_variant","variant_count","",false,false);
  goto LAB_00105931;
LAB_00105a70:
  uVar11 = uVar11 + 1;
  uVar13 = (ulong)((int)uVar13 + 1) % (ulong)uVar1;
  uVar12 = *(uint *)(*(long *)(lVar8 + 0x150) + uVar13 * 4);
  if ((uVar12 == 0) || (((uVar1 + (int)uVar13) - uVar12 % uVar1) % uVar1 < uVar11))
  goto LAB_00105910;
  goto LAB_00105aa9;
  while( true ) {
    uVar11 = uVar11 + 1;
    uVar6 = (ulong)((int)uVar6 + 1) % uVar7;
    uVar12 = *(uint *)(lVar3 + uVar6 * 4);
    if ((uVar12 == 0) || (((uVar1 + (int)uVar6) - uVar12 % uVar1) % uVar1 < uVar11)) break;
LAB_00105661:
    if ((uVar12 == (uint)uVar13) &&
       (*(long *)(this + 0x110) == *(long *)(*(long *)(lVar8 + 0x148) + uVar6 * 8))) {
      puVar14 = (undefined4 *)(*(long *)(lVar8 + 0x140) + uVar6 * 0x38);
      goto LAB_0010567b;
    }
  }
LAB_00105928:
  if (ShaderGLES3::_version_bind_shader(RID,int,unsigned_long)::first_print != '\0') {
    _err_print_error("_version_bind_shader","./drivers/gles3/shader_gles3.h",0xda,
                     "shader failed to compile, unable to bind shader.",0,1);
    ShaderGLES3::_version_bind_shader(RID,int,unsigned_long)::first_print = '\0';
  }
LAB_00105931:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00105eeb:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GLES3::CopyEffects::gaussian_blur(unsigned int, int, Rect2i const&, Vector2i const&) */

void __thiscall
GLES3::CopyEffects::gaussian_blur
          (CopyEffects *this,uint param_1,int param_2,Rect2i *param_3,Vector2i *param_4)

{
  uint uVar1;
  long lVar2;
  code *pcVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  undefined4 uVar10;
  uint uVar11;
  uint uVar12;
  ulong uVar13;
  int iVar14;
  undefined4 *puVar15;
  long in_FS_OFFSET;
  undefined8 uVar16;
  undefined4 local_a4;
  ulong local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined2 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  (*_glad_glGenFramebuffers)(1,&local_a4);
  (*_glad_glBindFramebuffer)(0x8d40,local_a4);
  (*_glad_glActiveTexture)(0x84c0);
  (*_glad_glBindTexture)(0xde1,param_1);
  (*_glad_glTexParameteri)(0xde1,0x2800,0x2601);
  (*_glad_glTexParameteri)(0xde1,0x2801,0x2601);
  (*_glad_glTexParameteri)(0xde1,0x2802,0x812f);
  (*_glad_glTexParameteri)(0xde1,0x2803,0x812f);
  local_58 = *(undefined8 *)param_3;
  uStack_50 = *(undefined8 *)(param_3 + 8);
  local_60 = *(ulong *)param_4;
  Vector2i::operator_cast_to_Vector2(param_4);
  Rect2i::operator_cast_to_Rect2(param_3);
  Rect2i::operator_cast_to_Rect2(param_3);
  if (param_2 < 2) {
LAB_00107414:
    (*_glad_glBindFramebuffer)(0x8d40,(undefined4)TextureStorage::system_fbo);
    (*_glad_glDeleteFramebuffers)(1,&local_a4);
    (*_glad_glTexParameteri)(0xde1,0x2800,0x2601);
    (*_glad_glTexParameteri)(0xde1,0x2801,0x2703);
    (*_glad_glTexParameteri)(0xde1,0x813c,0);
    (*_glad_glTexParameteri)(0xde1,0x813d,param_2 + -1);
    (*_glad_glBindTexture)(0xde1,0);
    (*_glad_glViewport)(0,0,*(undefined4 *)param_4,*(undefined4 *)(param_4 + 4));
LAB_00106bb5:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  iVar14 = 1;
LAB_00106074:
  local_58 = CONCAT44(local_58._4_4_ >> 1,(int)local_58 >> 1);
  iVar4 = (int)uStack_50 >> 1;
  if (iVar4 < 1) {
    iVar4 = 1;
  }
  uStack_50._4_4_ = uStack_50._4_4_ >> 1;
  if (uStack_50._4_4_ < 1) {
    uStack_50._4_4_ = 1;
  }
  uStack_50 = CONCAT44(uStack_50._4_4_,iVar4);
  local_60 = CONCAT44((int)((long)local_60 >> 0x21),(int)local_60 >> 1);
  (*_glad_glBindTexture)(0xde1,param_1);
  (*_glad_glTexParameteri)(0xde1,0x813c,iVar14 + -1);
  (*_glad_glTexParameteri)(0xde1,0x813d,iVar14);
  (*_glad_glFramebufferTexture2D)(0x8d40,0x8ce0,0xde1,param_1,iVar14);
  (*_glad_glViewport)(0,0,local_60 & 0xffffffff,local_60._4_4_);
  local_a0 = 0;
  uVar6 = *(ulong *)(this + 0x130);
  if (*(int *)(this + 0x120) < 7) {
    _err_print_index_error
              ("_version_bind_shader","./drivers/gles3/shader_gles3.h",0xbb,6,
               (long)*(int *)(this + 0x120),"p_variant","variant_count","",false,false);
  }
  else {
    if ((uVar6 != 0) && ((uint)uVar6 < *(uint *)(this + 0x54))) {
      uVar13 = ((uVar6 & 0xffffffff) % (ulong)*(uint *)(this + 0x50)) * 0x80 +
               *(long *)(*(long *)(this + 0x40) +
                        ((uVar6 & 0xffffffff) / (ulong)*(uint *)(this + 0x50)) * 8);
      if (*(int *)(uVar13 + 0x78) != (int)(uVar6 >> 0x20)) {
        if (*(int *)(uVar13 + 0x78) + 0x80000000U < 0x7fffffff) {
          _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                           "Method/function failed. Returning: nullptr",
                           "Attempting to use an uninitialized RID",0,0);
        }
        goto LAB_00106e90;
      }
      uVar1 = *(uint *)(uVar13 + 0x68);
      uVar6 = local_a0;
      if (uVar1 == 0) {
        ShaderGLES3::_initialize_version((Version *)this);
        uVar1 = *(uint *)(uVar13 + 0x68);
        uVar6 = local_a0;
      }
      uVar5 = (ulong)uVar1;
      local_a0 = uVar6;
      if (uVar1 < 7) {
LAB_00106bfa:
        _err_print_index_error
                  ("operator[]","./core/templates/local_vector.h",0xb2,6,uVar5,"p_index","count","",
                   false,true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      lVar8 = *(long *)(uVar13 + 0x70);
      uVar1 = *(uint *)(lVar8 + 0xd8);
      uVar7 = (ulong)uVar1;
      lVar2 = *(long *)(lVar8 + 0xd0);
      uVar5 = uVar6 * 0x3ffff - 1;
      uVar5 = (uVar5 ^ uVar5 >> 0x1f) * 0x15;
      uVar5 = (uVar5 ^ uVar5 >> 0xb) * 0x41;
      uVar5 = uVar5 >> 0x16 ^ uVar5;
      uVar9 = uVar5 & 0xffffffff;
      if ((int)uVar5 == 0) {
        uVar9 = 1;
      }
      uVar5 = uVar9 % uVar7;
      uVar11 = *(uint *)(lVar2 + uVar5 * 4);
      if (uVar11 != 0) {
        uVar12 = 0;
        while ((uVar11 != (uint)uVar9 || (uVar6 != *(ulong *)(*(long *)(lVar8 + 200) + uVar5 * 8))))
        {
          uVar12 = uVar12 + 1;
          uVar5 = (ulong)((int)uVar5 + 1) % uVar7;
          uVar11 = *(uint *)(lVar2 + uVar5 * 4);
          if ((uVar11 == 0) || (((uVar1 + (int)uVar5) - uVar11 % uVar1) % uVar1 < uVar12))
          goto LAB_00106c40;
        }
        puVar15 = (undefined4 *)(*(long *)(lVar8 + 0xc0) + uVar5 * 0x38);
        if (puVar15 != (undefined4 *)0x0) {
          if (*(char *)(puVar15 + 0xc) == '\0') goto LAB_0010638c;
          uVar6 = *(long *)(this + 0x110) * 0x3ffff - 1;
          uVar6 = (uVar6 ^ uVar6 >> 0x1f) * 0x15;
          uVar6 = (uVar6 ^ uVar6 >> 0xb) * 0x41;
          uVar6 = uVar6 >> 0x16 ^ uVar6;
          uVar13 = uVar6 & 0xffffffff;
          if ((int)uVar6 == 0) {
            uVar13 = 1;
          }
          uVar6 = uVar13 % uVar7;
          uVar11 = *(uint *)(lVar2 + uVar6 * 4);
          if (uVar11 == 0) goto LAB_00106ba8;
          uVar12 = 0;
          goto LAB_00106369;
        }
      }
LAB_00106c40:
      local_68 = 0;
      local_98 = 0;
      local_90 = 0;
      local_88 = 0;
      local_80 = 0;
      local_78 = 0;
      local_70 = 0;
      ShaderGLES3::_compile_specialization
                ((Specialization *)this,(uint)(Specialization *)&local_98,(Version *)0x6,uVar13);
      uVar5 = (ulong)*(uint *)(uVar13 + 0x68);
      if (*(uint *)(uVar13 + 0x68) < 7) goto LAB_00106bfa;
      OAHashMap<unsigned_long,ShaderGLES3::Version::Specialization,HashMapHasherDefault,HashMapComparatorDefault<unsigned_long>>
      ::insert((OAHashMap<unsigned_long,ShaderGLES3::Version::Specialization,HashMapHasherDefault,HashMapComparatorDefault<unsigned_long>>
                *)(*(long *)(uVar13 + 0x70) + 0xc0),&local_a0,(Specialization *)&local_98);
      uVar5 = (ulong)*(uint *)(uVar13 + 0x68);
      if (*(uint *)(uVar13 + 0x68) < 7) goto LAB_00106bfa;
      lVar8 = *(long *)(uVar13 + 0x70);
      uVar1 = *(uint *)(lVar8 + 0xd8);
      uVar13 = uVar9 % (ulong)uVar1;
      uVar11 = *(uint *)(*(long *)(lVar8 + 0xd0) + uVar13 * 4);
      if (uVar11 != 0) {
        uVar12 = 0;
        while ((uVar11 != (uint)uVar9 || (uVar6 != *(ulong *)(*(long *)(lVar8 + 200) + uVar13 * 8)))
              ) {
          uVar12 = uVar12 + 1;
          uVar13 = (ulong)((int)uVar13 + 1) % (ulong)uVar1;
          uVar11 = *(uint *)(*(long *)(lVar8 + 0xd0) + uVar13 * 4);
          if ((uVar11 == 0) || (((uVar1 + (int)uVar13) - uVar11 % uVar1) % uVar1 < uVar12))
          goto LAB_00106b8a;
        }
        puVar15 = (undefined4 *)(*(long *)(lVar8 + 0xc0) + uVar13 * 0x38);
        if (this[0xa0] != (CopyEffects)0x0) {
          ShaderGLES3::_save_to_cache((Version *)this);
        }
        ShaderGLES3::Version::Specialization::~Specialization((Specialization *)&local_98);
        goto LAB_00106383;
      }
LAB_00106b8a:
      if (this[0xa0] == (CopyEffects)0x0) {
        ShaderGLES3::Version::Specialization::~Specialization((Specialization *)&local_98);
      }
      else {
        ShaderGLES3::_save_to_cache((Version *)this);
        ShaderGLES3::Version::Specialization::~Specialization((Specialization *)&local_98);
      }
      goto LAB_00106ba8;
    }
LAB_00106e90:
    _err_print_error("_version_bind_shader","./drivers/gles3/shader_gles3.h",0xbe,
                     "Parameter \"version\" is null.",0,0);
  }
  goto LAB_00106bb5;
LAB_00106369:
  if ((uVar11 == (uint)uVar13) &&
     (*(long *)(this + 0x110) == *(long *)(*(long *)(lVar8 + 200) + uVar6 * 8)))
  goto code_r0x00106374;
  uVar12 = uVar12 + 1;
  uVar6 = (ulong)((int)uVar6 + 1) % uVar7;
  uVar11 = *(uint *)(lVar2 + uVar6 * 4);
  if ((uVar11 == 0) || (((uVar1 + (int)uVar6) - uVar11 % uVar1) % uVar1 < uVar12))
  goto LAB_00106ba8;
  goto LAB_00106369;
code_r0x00106374:
  puVar15 = (undefined4 *)(*(long *)(lVar8 + 0xc0) + uVar6 * 0x38);
LAB_00106383:
  if (puVar15 == (undefined4 *)0x0) {
LAB_00106ba8:
    if (ShaderGLES3::_version_bind_shader(RID,int,unsigned_long)::first_print != '\0') {
      _err_print_error("_version_bind_shader","./drivers/gles3/shader_gles3.h",0xda,
                       "shader failed to compile, unable to bind shader.",0,1);
      ShaderGLES3::_version_bind_shader(RID,int,unsigned_long)::first_print = '\0';
    }
    goto LAB_00106bb5;
  }
LAB_0010638c:
  if (*(char *)((long)puVar15 + 0x31) == '\0') goto LAB_00106ba8;
  (*_glad_glUseProgram)(*puVar15);
  *(undefined4 **)(this + 0x128) = puVar15;
  uVar16 = Vector2i::operator_cast_to_Vector2((Vector2i *)&local_60);
  Vector2i::operator_cast_to_Vector2((Vector2i *)&local_58);
  Vector2i::operator_cast_to_Vector2((Vector2i *)&uStack_50);
  pcVar3 = _glad_glUniform4f;
  uVar6 = *(ulong *)(this + 0x130);
  if (*(int *)(this + 0xd0) < 1) {
    _err_print_index_error
              ("_version_get_uniform","./drivers/gles3/shader_gles3.h",0xe4,0,
               (long)*(int *)(this + 0xd0),"p_which","uniform_count","",false,false);
  }
  else {
    if (uVar6 != 0) {
      if ((uint)uVar6 < *(uint *)(this + 0x54)) {
        lVar8 = ((uVar6 & 0xffffffff) % (ulong)*(uint *)(this + 0x50)) * 0x80 +
                *(long *)(*(long *)(this + 0x40) +
                         ((uVar6 & 0xffffffff) / (ulong)*(uint *)(this + 0x50)) * 8);
        iVar4 = *(int *)(lVar8 + 0x78);
        if (iVar4 == (int)(uVar6 >> 0x20)) {
          if (*(int *)(lVar8 + 0x68) < 7) {
            _err_print_index_error
                      ("_version_get_uniform","./drivers/gles3/shader_gles3.h",0xe7,6,
                       (long)*(int *)(lVar8 + 0x68),"p_variant","int(version->variants.size())","",
                       false,false);
          }
          else {
            lVar8 = *(long *)(lVar8 + 0x70);
            uVar1 = *(uint *)(lVar8 + 0xd8);
            uVar13 = 0x2aeaa2ab % (ulong)uVar1;
            uVar11 = *(uint *)(*(long *)(lVar8 + 0xd0) + uVar13 * 4);
            if (uVar11 != 0) {
              uVar12 = 0;
              while ((uVar11 != 0x2aeaa2ab || (*(long *)(*(long *)(lVar8 + 200) + uVar13 * 8) != 0))
                    ) {
                uVar12 = uVar12 + 1;
                uVar13 = (ulong)((int)uVar13 + 1) % (ulong)uVar1;
                uVar11 = *(uint *)(*(long *)(lVar8 + 0xd0) + uVar13 * 4);
                if ((uVar11 == 0) || (((uVar1 + (int)uVar13) - uVar11 % uVar1) % uVar1 < uVar12))
                goto LAB_00107320;
              }
              lVar8 = *(long *)(lVar8 + 0xc0) + uVar13 * 0x38;
              if (lVar8 != 0) {
                if (*(int *)(lVar8 + 0x10) < 1) {
                  _err_print_index_error
                            ("_version_get_uniform","./drivers/gles3/shader_gles3.h",0xea,0,
                             (long)*(int *)(lVar8 + 0x10),"p_which",
                             "int(spec->uniform_location.size())","",false,false);
                  goto LAB_0010668d;
                }
                if (**(int **)(lVar8 + 0x18) < 0) goto LAB_0010668d;
                if (*(int *)(this + 0xd0) < 1) {
                  _err_print_index_error
                            ("_version_get_uniform","./drivers/gles3/shader_gles3.h",0xe4,0,
                             (long)*(int *)(this + 0xd0),"p_which","uniform_count","",false,false);
                  goto LAB_001072b1;
                }
                if ((uint)uVar6 < *(uint *)(this + 0x54)) {
                  lVar8 = ((uVar6 & 0xffffffff) % (ulong)*(uint *)(this + 0x50)) * 0x80 +
                          *(long *)(*(long *)(this + 0x40) +
                                   ((uVar6 & 0xffffffff) / (ulong)*(uint *)(this + 0x50)) * 8);
                  if (iVar4 == *(int *)(lVar8 + 0x78)) {
                    if (*(int *)(lVar8 + 0x68) < 7) {
                      _err_print_index_error
                                ("_version_get_uniform","./drivers/gles3/shader_gles3.h",0xe7,6,
                                 (long)*(int *)(lVar8 + 0x68),"p_variant",
                                 "int(version->variants.size())","",false,false);
                      goto LAB_001072b1;
                    }
                    lVar8 = *(long *)(lVar8 + 0x70);
                    uVar1 = *(uint *)(lVar8 + 0xd8);
                    uVar6 = (ulong)uVar11 % (ulong)uVar1;
                    uVar11 = *(uint *)(*(long *)(lVar8 + 0xd0) + uVar6 * 4);
                    if (uVar11 == 0) goto LAB_00107670;
                    uVar12 = 0;
                    goto LAB_00106629;
                  }
                  if (*(int *)(lVar8 + 0x78) + 0x80000000U < 0x7fffffff) {
                    _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                                     "Method/function failed. Returning: nullptr",
                                     "Attempting to use an uninitialized RID",0,0);
                  }
                }
                _err_print_error("_version_get_uniform","./drivers/gles3/shader_gles3.h",0xe6,
                                 "Parameter \"version\" is null.",0);
                goto LAB_001072b1;
              }
            }
LAB_00107320:
            _err_print_error("_version_get_uniform","./drivers/gles3/shader_gles3.h",0xe9,
                             "Parameter \"spec\" is null.",0);
          }
          goto LAB_0010668d;
        }
        if (iVar4 + 0x80000000U < 0x7fffffff) {
          _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                           "Method/function failed. Returning: nullptr",
                           "Attempting to use an uninitialized RID",0,0);
        }
      }
    }
    _err_print_error("_version_get_uniform","./drivers/gles3/shader_gles3.h",0xe6,
                     "Parameter \"version\" is null.",0);
  }
LAB_0010668d:
  pcVar3 = _glad_glUniform4f;
  uVar6 = *(ulong *)(this + 0x130);
  if (*(int *)(this + 0xd0) < 2) {
    _err_print_index_error
              ("_version_get_uniform","./drivers/gles3/shader_gles3.h",0xe4,1,
               (long)*(int *)(this + 0xd0),"p_which","uniform_count","",false,false);
  }
  else {
    if (uVar6 != 0) {
      if ((uint)uVar6 < *(uint *)(this + 0x54)) {
        lVar8 = ((uVar6 & 0xffffffff) % (ulong)*(uint *)(this + 0x50)) * 0x80 +
                *(long *)(*(long *)(this + 0x40) +
                         ((uVar6 & 0xffffffff) / (ulong)*(uint *)(this + 0x50)) * 8);
        iVar4 = *(int *)(lVar8 + 0x78);
        if (iVar4 == (int)(uVar6 >> 0x20)) {
          if (*(int *)(lVar8 + 0x68) < 7) {
            _err_print_index_error
                      ("_version_get_uniform","./drivers/gles3/shader_gles3.h",0xe7,6,
                       (long)*(int *)(lVar8 + 0x68),"p_variant","int(version->variants.size())","",
                       false,false);
          }
          else {
            lVar8 = *(long *)(lVar8 + 0x70);
            uVar1 = *(uint *)(lVar8 + 0xd8);
            uVar13 = 0x2aeaa2ab % (ulong)uVar1;
            uVar11 = *(uint *)(*(long *)(lVar8 + 0xd0) + uVar13 * 4);
            if (uVar11 != 0) {
              uVar12 = 0;
              while ((uVar11 != 0x2aeaa2ab || (*(long *)(*(long *)(lVar8 + 200) + uVar13 * 8) != 0))
                    ) {
                uVar12 = uVar12 + 1;
                uVar13 = (ulong)((int)uVar13 + 1) % (ulong)uVar1;
                uVar11 = *(uint *)(*(long *)(lVar8 + 0xd0) + uVar13 * 4);
                if ((uVar11 == 0) || (((uVar1 + (int)uVar13) - uVar11 % uVar1) % uVar1 < uVar12))
                goto LAB_001072f0;
              }
              lVar8 = *(long *)(lVar8 + 0xc0) + uVar13 * 0x38;
              if (lVar8 != 0) {
                if (*(int *)(lVar8 + 0x10) < 2) {
                  _err_print_index_error
                            ("_version_get_uniform","./drivers/gles3/shader_gles3.h",0xea,1,
                             (long)*(int *)(lVar8 + 0x10),"p_which",
                             "int(spec->uniform_location.size())","",false,false);
                  goto LAB_001068e7;
                }
                if (*(int *)(*(long *)(lVar8 + 0x18) + 4) < 0) goto LAB_001068e7;
                if (*(int *)(this + 0xd0) < 2) {
                  _err_print_index_error
                            ("_version_get_uniform","./drivers/gles3/shader_gles3.h",0xe4,1,
                             (long)*(int *)(this + 0xd0),"p_which","uniform_count","",false,false);
                  goto LAB_001071d3;
                }
                if ((uint)uVar6 < *(uint *)(this + 0x54)) {
                  lVar8 = ((uVar6 & 0xffffffff) % (ulong)*(uint *)(this + 0x50)) * 0x80 +
                          *(long *)(*(long *)(this + 0x40) +
                                   ((uVar6 & 0xffffffff) / (ulong)*(uint *)(this + 0x50)) * 8);
                  if (iVar4 == *(int *)(lVar8 + 0x78)) {
                    if (*(int *)(lVar8 + 0x68) < 7) {
                      _err_print_index_error
                                ("_version_get_uniform","./drivers/gles3/shader_gles3.h",0xe7,6,
                                 (long)*(int *)(lVar8 + 0x68),"p_variant",
                                 "int(version->variants.size())","",false,false);
                      goto LAB_001071d3;
                    }
                    lVar8 = *(long *)(lVar8 + 0x70);
                    uVar1 = *(uint *)(lVar8 + 0xd8);
                    uVar6 = (ulong)uVar11 % (ulong)uVar1;
                    uVar11 = *(uint *)(*(long *)(lVar8 + 0xd0) + uVar6 * 4);
                    if (uVar11 == 0) goto LAB_001076a0;
                    uVar12 = 0;
                    goto LAB_00106881;
                  }
                  if (*(int *)(lVar8 + 0x78) + 0x80000000U < 0x7fffffff) {
                    _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                                     "Method/function failed. Returning: nullptr",
                                     "Attempting to use an uninitialized RID",0,0);
                  }
                }
                _err_print_error("_version_get_uniform","./drivers/gles3/shader_gles3.h",0xe6,
                                 "Parameter \"version\" is null.",0);
                goto LAB_001071d3;
              }
            }
LAB_001072f0:
            _err_print_error("_version_get_uniform","./drivers/gles3/shader_gles3.h",0xe9,
                             "Parameter \"spec\" is null.",0);
          }
          goto LAB_001068e7;
        }
        if (iVar4 + 0x80000000U < 0x7fffffff) {
          _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                           "Method/function failed. Returning: nullptr",
                           "Attempting to use an uninitialized RID",0,0);
        }
      }
    }
    _err_print_error("_version_get_uniform","./drivers/gles3/shader_gles3.h",0xe6,
                     "Parameter \"version\" is null.",0);
  }
LAB_001068e7:
  pcVar3 = _glad_glUniform2f;
  uVar6 = *(ulong *)(this + 0x130);
  if (*(int *)(this + 0xd0) < 7) {
    _err_print_index_error
              ("_version_get_uniform","./drivers/gles3/shader_gles3.h",0xe4,6,
               (long)*(int *)(this + 0xd0),"p_which","uniform_count","",false,false);
  }
  else {
    if (uVar6 != 0) {
      if ((uint)uVar6 < *(uint *)(this + 0x54)) {
        lVar8 = ((uVar6 & 0xffffffff) % (ulong)*(uint *)(this + 0x50)) * 0x80 +
                *(long *)(*(long *)(this + 0x40) +
                         ((uVar6 & 0xffffffff) / (ulong)*(uint *)(this + 0x50)) * 8);
        iVar4 = *(int *)(lVar8 + 0x78);
        if (iVar4 == (int)(uVar6 >> 0x20)) {
          if (*(int *)(lVar8 + 0x68) < 7) {
            _err_print_index_error
                      ("_version_get_uniform","./drivers/gles3/shader_gles3.h",0xe7,6,
                       (long)*(int *)(lVar8 + 0x68),"p_variant","int(version->variants.size())","",
                       false,false);
          }
          else {
            lVar8 = *(long *)(lVar8 + 0x70);
            uVar1 = *(uint *)(lVar8 + 0xd8);
            uVar13 = 0x2aeaa2ab % (ulong)uVar1;
            uVar11 = *(uint *)(*(long *)(lVar8 + 0xd0) + uVar13 * 4);
            if (uVar11 != 0) {
              uVar12 = 0;
              while ((uVar11 != 0x2aeaa2ab || (*(long *)(*(long *)(lVar8 + 200) + uVar13 * 8) != 0))
                    ) {
                uVar12 = uVar12 + 1;
                uVar13 = (ulong)((int)uVar13 + 1) % (ulong)uVar1;
                uVar11 = *(uint *)(*(long *)(lVar8 + 0xd0) + uVar13 * 4);
                if ((uVar11 == 0) || (((uVar1 + (int)uVar13) - uVar11 % uVar1) % uVar1 < uVar12))
                goto LAB_001072c0;
              }
              lVar8 = *(long *)(lVar8 + 0xc0) + uVar13 * 0x38;
              if (lVar8 != 0) {
                if (*(int *)(lVar8 + 0x10) < 7) {
                  _err_print_index_error
                            ("_version_get_uniform","./drivers/gles3/shader_gles3.h",0xea,6,
                             (long)*(int *)(lVar8 + 0x10),"p_which",
                             "int(spec->uniform_location.size())","",false,false);
                  goto LAB_00106b3e;
                }
                if (*(int *)(*(long *)(lVar8 + 0x18) + 0x18) < 0) goto LAB_00106b3e;
                if (*(int *)(this + 0xd0) < 7) {
                  _err_print_index_error
                            ("_version_get_uniform","./drivers/gles3/shader_gles3.h",0xe4,6,
                             (long)*(int *)(this + 0xd0),"p_which","uniform_count","",false,false);
                  goto LAB_00107241;
                }
                if ((uint)uVar6 < *(uint *)(this + 0x54)) {
                  lVar8 = ((uVar6 & 0xffffffff) % (ulong)*(uint *)(this + 0x50)) * 0x80 +
                          *(long *)(*(long *)(this + 0x40) +
                                   ((uVar6 & 0xffffffff) / (ulong)*(uint *)(this + 0x50)) * 8);
                  if (iVar4 == *(int *)(lVar8 + 0x78)) {
                    if (*(int *)(lVar8 + 0x68) < 7) {
                      _err_print_index_error
                                ("_version_get_uniform","./drivers/gles3/shader_gles3.h",0xe7,6,
                                 (long)*(int *)(lVar8 + 0x68),"p_variant",
                                 "int(version->variants.size())","",false,false);
                      goto LAB_00107241;
                    }
                    lVar8 = *(long *)(lVar8 + 0x70);
                    uVar1 = *(uint *)(lVar8 + 0xd8);
                    uVar6 = (ulong)uVar11 % (ulong)uVar1;
                    uVar11 = *(uint *)(*(long *)(lVar8 + 0xd0) + uVar6 * 4);
                    if (uVar11 == 0) goto LAB_00107640;
                    uVar12 = 0;
                    goto LAB_00106ad9;
                  }
                  if (*(int *)(lVar8 + 0x78) + 0x80000000U < 0x7fffffff) {
                    _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                                     "Method/function failed. Returning: nullptr",
                                     "Attempting to use an uninitialized RID",0,0);
                  }
                }
                _err_print_error("_version_get_uniform","./drivers/gles3/shader_gles3.h",0xe6,
                                 "Parameter \"version\" is null.",0);
                goto LAB_00107241;
              }
            }
LAB_001072c0:
            _err_print_error("_version_get_uniform","./drivers/gles3/shader_gles3.h",0xe9,
                             "Parameter \"spec\" is null.",0);
          }
          goto LAB_00106b3e;
        }
        if (iVar4 + 0x80000000U < 0x7fffffff) {
          _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                           "Method/function failed. Returning: nullptr",
                           "Attempting to use an uninitialized RID",0,0);
        }
      }
    }
    _err_print_error("_version_get_uniform","./drivers/gles3/shader_gles3.h",0xe6,
                     "Parameter \"version\" is null.",0);
  }
LAB_00106b3e:
  iVar14 = iVar14 + 1;
  draw_screen_quad(this);
  if (param_2 == iVar14) goto LAB_00107414;
  goto LAB_00106074;
LAB_00106629:
  if ((uVar11 != 0x2aeaa2ab) || (*(long *)(*(long *)(lVar8 + 200) + uVar6 * 8) != 0)) {
    uVar12 = uVar12 + 1;
    uVar6 = (ulong)((int)uVar6 + 1) % (ulong)uVar1;
    uVar11 = *(uint *)(*(long *)(lVar8 + 0xd0) + uVar6 * 4);
    if ((uVar11 == 0) || (((uVar1 + (int)uVar6) - uVar11 % uVar1) % uVar1 < uVar12))
    goto LAB_00107670;
    goto LAB_00106629;
  }
  lVar8 = *(long *)(lVar8 + 0xc0) + uVar6 * 0x38;
  if (lVar8 != 0) {
    if (0 < *(int *)(lVar8 + 0x10)) {
      uVar10 = **(undefined4 **)(lVar8 + 0x18);
      goto LAB_00106672;
    }
    _err_print_index_error
              ("_version_get_uniform","./drivers/gles3/shader_gles3.h",0xea,0,
               (long)*(int *)(lVar8 + 0x10),"p_which","int(spec->uniform_location.size())","",false,
               false);
    goto LAB_001072b1;
  }
LAB_00107670:
  _err_print_error("_version_get_uniform","./drivers/gles3/shader_gles3.h",0xe9,
                   "Parameter \"spec\" is null.",0);
LAB_001072b1:
  uVar10 = 0xffffffff;
LAB_00106672:
  (*pcVar3)(uVar10);
  goto LAB_0010668d;
LAB_00106881:
  if ((uVar11 != 0x2aeaa2ab) || (*(long *)(*(long *)(lVar8 + 200) + uVar6 * 8) != 0)) {
    uVar12 = uVar12 + 1;
    uVar6 = (ulong)((int)uVar6 + 1) % (ulong)uVar1;
    uVar11 = *(uint *)(*(long *)(lVar8 + 0xd0) + uVar6 * 4);
    if ((uVar11 == 0) || (((uVar1 + (int)uVar6) - uVar11 % uVar1) % uVar1 < uVar12))
    goto LAB_001076a0;
    goto LAB_00106881;
  }
  lVar8 = *(long *)(lVar8 + 0xc0) + uVar6 * 0x38;
  if (lVar8 != 0) {
    if (1 < *(int *)(lVar8 + 0x10)) {
      uVar10 = *(undefined4 *)(*(long *)(lVar8 + 0x18) + 4);
      goto LAB_001068cc;
    }
    _err_print_index_error
              ("_version_get_uniform","./drivers/gles3/shader_gles3.h",0xea,1,
               (long)*(int *)(lVar8 + 0x10),"p_which","int(spec->uniform_location.size())","",false,
               false);
    goto LAB_001071d3;
  }
LAB_001076a0:
  _err_print_error("_version_get_uniform","./drivers/gles3/shader_gles3.h",0xe9,
                   "Parameter \"spec\" is null.",0);
LAB_001071d3:
  uVar10 = 0xffffffff;
LAB_001068cc:
  (*pcVar3)(uVar10);
  goto LAB_001068e7;
LAB_00106ad9:
  if ((uVar11 != 0x2aeaa2ab) || (*(long *)(*(long *)(lVar8 + 200) + uVar6 * 8) != 0)) {
    uVar12 = uVar12 + 1;
    uVar6 = (ulong)((int)uVar6 + 1) % (ulong)uVar1;
    uVar11 = *(uint *)(*(long *)(lVar8 + 0xd0) + uVar6 * 4);
    if ((uVar11 == 0) || (((uVar1 + (int)uVar6) - uVar11 % uVar1) % uVar1 < uVar12))
    goto LAB_00107640;
    goto LAB_00106ad9;
  }
  lVar8 = *(long *)(lVar8 + 0xc0) + uVar6 * 0x38;
  if (lVar8 != 0) {
    if (6 < *(int *)(lVar8 + 0x10)) {
      uVar10 = *(undefined4 *)(*(long *)(lVar8 + 0x18) + 0x18);
      goto LAB_00106b24;
    }
    _err_print_index_error
              ("_version_get_uniform","./drivers/gles3/shader_gles3.h",0xea,6,
               (long)*(int *)(lVar8 + 0x10),"p_which","int(spec->uniform_location.size())","",false,
               false);
    goto LAB_00107241;
  }
LAB_00107640:
  _err_print_error("_version_get_uniform","./drivers/gles3/shader_gles3.h",0xe9,
                   "Parameter \"spec\" is null.",0);
LAB_00107241:
  uVar10 = 0xffffffff;
LAB_00106b24:
  (*pcVar3)(_LC35 / (float)uVar16,_LC35 / (float)((ulong)uVar16 >> 0x20),uVar10);
  goto LAB_00106b3e;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GLES3::CopyEffects::set_color(Color const&, Rect2i const&) */

void __thiscall GLES3::CopyEffects::set_color(CopyEffects *this,Color *param_1,Rect2i *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  code *pcVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  undefined4 uVar14;
  uint uVar15;
  uint uVar16;
  ulong uVar17;
  undefined4 *puVar18;
  long in_FS_OFFSET;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  ulong local_a0;
  undefined8 local_98;
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
  long local_40;
  
  uVar10 = *(ulong *)(this + 0x130);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_a0 = 0;
  if (8 < *(int *)(this + 0x120)) {
    if ((uVar10 != 0) && ((uint)uVar10 < *(uint *)(this + 0x54))) {
      uVar17 = ((uVar10 & 0xffffffff) % (ulong)*(uint *)(this + 0x50)) * 0x80 +
               *(long *)(*(long *)(this + 0x40) +
                        ((uVar10 & 0xffffffff) / (ulong)*(uint *)(this + 0x50)) * 8);
      if (*(int *)(uVar17 + 0x78) == (int)(uVar10 >> 0x20)) {
        uVar1 = *(uint *)(uVar17 + 0x68);
        if (uVar1 == 0) {
          ShaderGLES3::_initialize_version((Version *)this);
          uVar1 = *(uint *)(uVar17 + 0x68);
        }
        uVar10 = local_a0;
        uVar9 = (ulong)uVar1;
        if (uVar1 < 9) {
LAB_00108118:
          _err_print_index_error
                    ("operator[]","./core/templates/local_vector.h",0xb2,8,uVar9,"p_index","count",
                     "",false,true);
          _err_flush_stdout();
                    /* WARNING: Does not return */
          pcVar8 = (code *)invalidInstructionException();
          (*pcVar8)();
        }
        lVar12 = *(long *)(uVar17 + 0x70);
        uVar1 = *(uint *)(lVar12 + 0x118);
        uVar11 = (ulong)uVar1;
        lVar7 = *(long *)(lVar12 + 0x110);
        uVar9 = local_a0 * 0x3ffff - 1;
        uVar9 = (uVar9 ^ uVar9 >> 0x1f) * 0x15;
        uVar9 = (uVar9 ^ uVar9 >> 0xb) * 0x41;
        uVar9 = uVar9 >> 0x16 ^ uVar9;
        uVar13 = uVar9 & 0xffffffff;
        if ((int)uVar9 == 0) {
          uVar13 = 1;
        }
        uVar9 = uVar13 % uVar11;
        uVar15 = *(uint *)(lVar7 + uVar9 * 4);
        if (uVar15 != 0) {
          uVar16 = 0;
          while ((uVar15 != (uint)uVar13 ||
                 (local_a0 != *(ulong *)(*(long *)(lVar12 + 0x108) + uVar9 * 8)))) {
            uVar16 = uVar16 + 1;
            uVar9 = (ulong)((int)uVar9 + 1) % uVar11;
            uVar15 = *(uint *)(lVar7 + uVar9 * 4);
            if ((uVar15 == 0) || (((uVar1 + (int)uVar9) - uVar15 % uVar1) % uVar1 < uVar16))
            goto LAB_00107fc8;
          }
          puVar18 = (undefined4 *)(*(long *)(lVar12 + 0x100) + uVar9 * 0x38);
          if (puVar18 != (undefined4 *)0x0) {
            if (*(char *)(puVar18 + 0xc) == '\0') goto LAB_001079fc;
            uVar10 = *(long *)(this + 0x110) * 0x3ffff - 1;
            uVar10 = (uVar10 ^ uVar10 >> 0x1f) * 0x15;
            uVar10 = (uVar10 ^ uVar10 >> 0xb) * 0x41;
            uVar10 = uVar10 >> 0x16 ^ uVar10;
            uVar17 = uVar10 & 0xffffffff;
            if ((int)uVar10 == 0) {
              uVar17 = 1;
            }
            uVar16 = 0;
            uVar10 = uVar17 % uVar11;
            uVar15 = *(uint *)(lVar7 + uVar10 * 4);
            if (uVar15 == 0) goto LAB_00107f40;
            goto LAB_001079d9;
          }
        }
LAB_00107fc8:
        local_98 = 0;
        local_90 = 0;
        local_88 = 0;
        local_80 = 0;
        local_78 = 0;
        local_70 = 0;
        local_68 = 0;
        ShaderGLES3::_compile_specialization
                  ((Specialization *)this,(uint)(Specialization *)&local_98,(Version *)0x8,uVar17);
        uVar9 = (ulong)*(uint *)(uVar17 + 0x68);
        if (*(uint *)(uVar17 + 0x68) < 9) goto LAB_00108118;
        OAHashMap<unsigned_long,ShaderGLES3::Version::Specialization,HashMapHasherDefault,HashMapComparatorDefault<unsigned_long>>
        ::insert((OAHashMap<unsigned_long,ShaderGLES3::Version::Specialization,HashMapHasherDefault,HashMapComparatorDefault<unsigned_long>>
                  *)(*(long *)(uVar17 + 0x70) + 0x100),&local_a0,(Specialization *)&local_98);
        uVar9 = (ulong)*(uint *)(uVar17 + 0x68);
        if (*(uint *)(uVar17 + 0x68) < 9) goto LAB_00108118;
        lVar12 = *(long *)(uVar17 + 0x70);
        uVar1 = *(uint *)(lVar12 + 0x118);
        uVar17 = uVar13 % (ulong)uVar1;
        uVar15 = *(uint *)(*(long *)(lVar12 + 0x110) + uVar17 * 4);
        if (uVar15 != 0) {
          uVar16 = 0;
LAB_001080d1:
          if ((uVar15 != (uint)uVar13) ||
             (uVar10 != *(ulong *)(*(long *)(lVar12 + 0x108) + uVar17 * 8))) goto LAB_00108098;
          puVar18 = (undefined4 *)(*(long *)(lVar12 + 0x100) + uVar17 * 0x38);
          if (this[0xa0] != (CopyEffects)0x0) {
            ShaderGLES3::_save_to_cache((Version *)this);
          }
          ShaderGLES3::Version::Specialization::~Specialization((Specialization *)&local_98);
LAB_001079f3:
          if (puVar18 != (undefined4 *)0x0) {
LAB_001079fc:
            if (*(char *)((long)puVar18 + 0x31) != '\0') {
              (*_glad_glUseProgram)(*puVar18);
              iVar2 = *(int *)(param_2 + 4);
              *(undefined4 **)(this + 0x128) = puVar18;
              pcVar8 = _glad_glUniform4f;
              iVar3 = *(int *)(param_2 + 0xc);
              iVar4 = *(int *)(param_2 + 8);
              iVar5 = *(int *)param_2;
              uVar10 = *(ulong *)(this + 0x130);
              if (*(int *)(this + 0xd0) < 1) {
                _err_print_index_error
                          ("_version_get_uniform","./drivers/gles3/shader_gles3.h",0xe4,0,
                           (long)*(int *)(this + 0xd0),"p_which","uniform_count","",false,false);
                goto LAB_00107c9a;
              }
              if ((uVar10 == 0) || (*(uint *)(this + 0x54) <= (uint)uVar10)) {
LAB_00108308:
                _err_print_error("_version_get_uniform","./drivers/gles3/shader_gles3.h",0xe6,
                                 "Parameter \"version\" is null.",0,0);
              }
              else {
                lVar12 = ((uVar10 & 0xffffffff) % (ulong)*(uint *)(this + 0x50)) * 0x80 +
                         *(long *)(*(long *)(this + 0x40) +
                                  ((uVar10 & 0xffffffff) / (ulong)*(uint *)(this + 0x50)) * 8);
                iVar6 = *(int *)(lVar12 + 0x78);
                if (iVar6 != (int)(uVar10 >> 0x20)) {
                  if (iVar6 + 0x80000000U < 0x7fffffff) {
                    _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                                     "Method/function failed. Returning: nullptr",
                                     "Attempting to use an uninitialized RID",0,0);
                  }
                  goto LAB_00108308;
                }
                if (*(int *)(lVar12 + 0x68) < 9) {
                  _err_print_index_error
                            ("_version_get_uniform","./drivers/gles3/shader_gles3.h",0xe7,8,
                             (long)*(int *)(lVar12 + 0x68),"p_variant",
                             "int(version->variants.size())","",false,false);
                  goto LAB_00107c9a;
                }
                lVar12 = *(long *)(lVar12 + 0x70);
                uVar1 = *(uint *)(lVar12 + 0x118);
                uVar17 = 0x2aeaa2ab % (ulong)uVar1;
                uVar15 = *(uint *)(*(long *)(lVar12 + 0x110) + uVar17 * 4);
                if (uVar15 == 0) {
LAB_00108428:
                  _err_print_error("_version_get_uniform","./drivers/gles3/shader_gles3.h",0xe9,
                                   "Parameter \"spec\" is null.",0,0);
                }
                else {
                  uVar16 = 0;
                  while ((uVar15 != 0x2aeaa2ab ||
                         (*(long *)(*(long *)(lVar12 + 0x108) + uVar17 * 8) != 0))) {
                    uVar16 = uVar16 + 1;
                    uVar17 = (ulong)((int)uVar17 + 1) % (ulong)uVar1;
                    uVar15 = *(uint *)(*(long *)(lVar12 + 0x110) + uVar17 * 4);
                    if ((uVar15 == 0) || (((uVar1 + (int)uVar17) - uVar15 % uVar1) % uVar1 < uVar16)
                       ) goto LAB_00108428;
                  }
                  lVar12 = *(long *)(lVar12 + 0x100) + uVar17 * 0x38;
                  if (lVar12 == 0) goto LAB_00108428;
                  if (*(int *)(lVar12 + 0x10) < 1) {
                    _err_print_index_error
                              ("_version_get_uniform","./drivers/gles3/shader_gles3.h",0xea,0,
                               (long)*(int *)(lVar12 + 0x10),"p_which",
                               "int(spec->uniform_location.size())","",false,false);
                  }
                  else if (-1 < **(int **)(lVar12 + 0x18)) {
                    if (*(int *)(this + 0xd0) < 1) {
                      _err_print_index_error
                                ("_version_get_uniform","./drivers/gles3/shader_gles3.h",0xe4,0,
                                 (long)*(int *)(this + 0xd0),"p_which","uniform_count","",false,
                                 false);
LAB_0010853a:
                      uVar14 = 0xffffffff;
                    }
                    else {
                      if (*(uint *)(this + 0x54) <= (uint)uVar10) {
LAB_00108631:
                        _err_print_error("_version_get_uniform","./drivers/gles3/shader_gles3.h",
                                         0xe6,"Parameter \"version\" is null.",0,0);
                        goto LAB_0010853a;
                      }
                      lVar12 = ((uVar10 & 0xffffffff) % (ulong)*(uint *)(this + 0x50)) * 0x80 +
                               *(long *)(*(long *)(this + 0x40) +
                                        ((uVar10 & 0xffffffff) / (ulong)*(uint *)(this + 0x50)) * 8)
                      ;
                      if (iVar6 != *(int *)(lVar12 + 0x78)) {
                        if (*(int *)(lVar12 + 0x78) + 0x80000000U < 0x7fffffff) {
                          _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                                           "Method/function failed. Returning: nullptr",
                                           "Attempting to use an uninitialized RID",0,0);
                        }
                        goto LAB_00108631;
                      }
                      if (*(int *)(lVar12 + 0x68) < 9) {
                        _err_print_index_error
                                  ("_version_get_uniform","./drivers/gles3/shader_gles3.h",0xe7,8,
                                   (long)*(int *)(lVar12 + 0x68),"p_variant",
                                   "int(version->variants.size())","",false,false);
                        goto LAB_0010853a;
                      }
                      lVar12 = *(long *)(lVar12 + 0x70);
                      uVar1 = *(uint *)(lVar12 + 0x118);
                      uVar10 = (ulong)uVar15 % (ulong)uVar1;
                      uVar15 = *(uint *)(*(long *)(lVar12 + 0x110) + uVar10 * 4);
                      if (uVar15 == 0) {
LAB_00108700:
                        _err_print_error("_version_get_uniform","./drivers/gles3/shader_gles3.h",
                                         0xe9,"Parameter \"spec\" is null.",0,0);
                        goto LAB_0010853a;
                      }
                      uVar16 = 0;
                      while ((uVar15 != 0x2aeaa2ab ||
                             (*(long *)(*(long *)(lVar12 + 0x108) + uVar10 * 8) != 0))) {
                        uVar16 = uVar16 + 1;
                        uVar10 = (ulong)((int)uVar10 + 1) % (ulong)uVar1;
                        uVar15 = *(uint *)(*(long *)(lVar12 + 0x110) + uVar10 * 4);
                        if ((uVar15 == 0) ||
                           (((uVar1 + (int)uVar10) - uVar15 % uVar1) % uVar1 < uVar16))
                        goto LAB_00108700;
                      }
                      lVar12 = *(long *)(lVar12 + 0x100) + uVar10 * 0x38;
                      if (lVar12 == 0) goto LAB_00108700;
                      if (*(int *)(lVar12 + 0x10) < 1) {
                        _err_print_index_error
                                  ("_version_get_uniform","./drivers/gles3/shader_gles3.h",0xea,0,
                                   (long)*(int *)(lVar12 + 0x10),"p_which",
                                   "int(spec->uniform_location.size())","",false,false);
                        goto LAB_0010853a;
                      }
                      uVar14 = **(undefined4 **)(lVar12 + 0x18);
                    }
                    auVar19._4_12_ = SUB1612((undefined1  [16])0x0,4);
                    auVar19._0_4_ = (float)iVar5;
                    auVar22._4_12_ = SUB1612((undefined1  [16])0x0,4);
                    auVar22._0_4_ = (float)iVar3;
                    auVar21._4_12_ = SUB1612((undefined1  [16])0x0,4);
                    auVar21._0_4_ = (float)iVar4;
                    auVar20._4_12_ = SUB1612((undefined1  [16])0x0,4);
                    auVar20._0_4_ = (float)iVar2;
                    (*pcVar8)(auVar19._0_8_,auVar20._0_8_,auVar21._0_8_,auVar22._0_8_,uVar14);
                  }
                }
              }
LAB_00107c9a:
              pcVar8 = _glad_glUniform4fv;
              uVar10 = *(ulong *)(this + 0x130);
              if (*(int *)(this + 0xd0) < 5) {
                _err_print_index_error
                          ("_version_get_uniform","./drivers/gles3/shader_gles3.h",0xe4,4,
                           (long)*(int *)(this + 0xd0),"p_which","uniform_count","",false,false);
                goto LAB_00107ef2;
              }
              if (uVar10 == 0) {
LAB_00108378:
                _err_print_error("_version_get_uniform","./drivers/gles3/shader_gles3.h",0xe6,
                                 "Parameter \"version\" is null.",0,0);
              }
              else {
                if (*(uint *)(this + 0x54) <= (uint)uVar10) goto LAB_00108378;
                lVar12 = ((uVar10 & 0xffffffff) % (ulong)*(uint *)(this + 0x50)) * 0x80 +
                         *(long *)(*(long *)(this + 0x40) +
                                  ((uVar10 & 0xffffffff) / (ulong)*(uint *)(this + 0x50)) * 8);
                iVar2 = *(int *)(lVar12 + 0x78);
                if (iVar2 != (int)(uVar10 >> 0x20)) {
                  if (iVar2 + 0x80000000U < 0x7fffffff) {
                    _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                                     "Method/function failed. Returning: nullptr",
                                     "Attempting to use an uninitialized RID",0,0);
                  }
                  goto LAB_00108378;
                }
                if (*(int *)(lVar12 + 0x68) < 9) {
                  _err_print_index_error
                            ("_version_get_uniform","./drivers/gles3/shader_gles3.h",0xe7,8,
                             (long)*(int *)(lVar12 + 0x68),"p_variant",
                             "int(version->variants.size())","",false,false);
                  goto LAB_00107ef2;
                }
                lVar12 = *(long *)(lVar12 + 0x70);
                uVar1 = *(uint *)(lVar12 + 0x118);
                uVar17 = 0x2aeaa2ab % (ulong)uVar1;
                uVar15 = *(uint *)(*(long *)(lVar12 + 0x110) + uVar17 * 4);
                if (uVar15 == 0) {
LAB_00108458:
                  _err_print_error("_version_get_uniform","./drivers/gles3/shader_gles3.h",0xe9,
                                   "Parameter \"spec\" is null.",0,0);
                }
                else {
                  uVar16 = 0;
                  while ((uVar15 != 0x2aeaa2ab ||
                         (*(long *)(*(long *)(lVar12 + 0x108) + uVar17 * 8) != 0))) {
                    uVar16 = uVar16 + 1;
                    uVar17 = (ulong)((int)uVar17 + 1) % (ulong)uVar1;
                    uVar15 = *(uint *)(*(long *)(lVar12 + 0x110) + uVar17 * 4);
                    if ((uVar15 == 0) || (((uVar1 + (int)uVar17) - uVar15 % uVar1) % uVar1 < uVar16)
                       ) goto LAB_00108458;
                  }
                  lVar12 = *(long *)(lVar12 + 0x100) + uVar17 * 0x38;
                  if (lVar12 == 0) goto LAB_00108458;
                  if (*(int *)(lVar12 + 0x10) < 5) {
                    _err_print_index_error
                              ("_version_get_uniform","./drivers/gles3/shader_gles3.h",0xea,4,
                               (long)*(int *)(lVar12 + 0x10),"p_which",
                               "int(spec->uniform_location.size())","",false,false);
                  }
                  else if (-1 < *(int *)(*(long *)(lVar12 + 0x18) + 0x10)) {
                    local_58 = *(undefined4 *)param_1;
                    uStack_54 = *(undefined4 *)(param_1 + 4);
                    uStack_50 = *(undefined4 *)(param_1 + 8);
                    uStack_4c = *(undefined4 *)(param_1 + 0xc);
                    if (*(int *)(this + 0xd0) < 5) {
                      _err_print_index_error
                                ("_version_get_uniform","./drivers/gles3/shader_gles3.h",0xe4,4,
                                 (long)*(int *)(this + 0xd0),"p_which","uniform_count","",false,
                                 false);
LAB_00108580:
                      uVar14 = 0xffffffff;
                    }
                    else {
                      if (*(uint *)(this + 0x54) <= (uint)uVar10) {
LAB_001085c9:
                        _err_print_error("_version_get_uniform","./drivers/gles3/shader_gles3.h",
                                         0xe6,"Parameter \"version\" is null.",0,0);
                        goto LAB_00108580;
                      }
                      lVar12 = ((uVar10 & 0xffffffff) % (ulong)*(uint *)(this + 0x50)) * 0x80 +
                               *(long *)(*(long *)(this + 0x40) +
                                        ((uVar10 & 0xffffffff) / (ulong)*(uint *)(this + 0x50)) * 8)
                      ;
                      if (iVar2 != *(int *)(lVar12 + 0x78)) {
                        if (*(int *)(lVar12 + 0x78) + 0x80000000U < 0x7fffffff) {
                          _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                                           "Method/function failed. Returning: nullptr",
                                           "Attempting to use an uninitialized RID",0,0);
                        }
                        goto LAB_001085c9;
                      }
                      if (*(int *)(lVar12 + 0x68) < 9) {
                        _err_print_index_error
                                  ("_version_get_uniform","./drivers/gles3/shader_gles3.h",0xe7,8,
                                   (long)*(int *)(lVar12 + 0x68),"p_variant",
                                   "int(version->variants.size())","",false,false);
                        goto LAB_00108580;
                      }
                      lVar12 = *(long *)(lVar12 + 0x70);
                      uVar1 = *(uint *)(lVar12 + 0x118);
                      uVar10 = (ulong)uVar15 % (ulong)uVar1;
                      uVar15 = *(uint *)(*(long *)(lVar12 + 0x110) + uVar10 * 4);
                      if (uVar15 == 0) {
LAB_00108730:
                        _err_print_error("_version_get_uniform","./drivers/gles3/shader_gles3.h",
                                         0xe9,"Parameter \"spec\" is null.",0,0);
                        goto LAB_00108580;
                      }
                      uVar16 = 0;
                      while ((uVar15 != 0x2aeaa2ab ||
                             (*(long *)(*(long *)(lVar12 + 0x108) + uVar10 * 8) != 0))) {
                        uVar16 = uVar16 + 1;
                        uVar10 = (ulong)((int)uVar10 + 1) % (ulong)uVar1;
                        uVar15 = *(uint *)(*(long *)(lVar12 + 0x110) + uVar10 * 4);
                        if ((uVar15 == 0) ||
                           (((uVar1 + (int)uVar10) - uVar15 % uVar1) % uVar1 < uVar16))
                        goto LAB_00108730;
                      }
                      lVar12 = *(long *)(lVar12 + 0x100) + uVar10 * 0x38;
                      if (lVar12 == 0) goto LAB_00108730;
                      if (*(int *)(lVar12 + 0x10) < 5) {
                        _err_print_index_error
                                  ("_version_get_uniform","./drivers/gles3/shader_gles3.h",0xea,4,
                                   (long)*(int *)(lVar12 + 0x10),"p_which",
                                   "int(spec->uniform_location.size())","",false,false);
                        goto LAB_00108580;
                      }
                      uVar14 = *(undefined4 *)(*(long *)(lVar12 + 0x18) + 0x10);
                    }
                    (*pcVar8)(uVar14,1,&local_58);
                  }
                }
              }
LAB_00107ef2:
              if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                draw_screen_quad(this);
                return;
              }
              goto LAB_001087d9;
            }
          }
          goto LAB_00107f40;
        }
LAB_00107f22:
        if (this[0xa0] == (CopyEffects)0x0) {
          ShaderGLES3::Version::Specialization::~Specialization((Specialization *)&local_98);
        }
        else {
          ShaderGLES3::_save_to_cache((Version *)this);
          ShaderGLES3::Version::Specialization::~Specialization((Specialization *)&local_98);
        }
        goto LAB_00107f40;
      }
      if (*(int *)(uVar17 + 0x78) + 0x80000000U < 0x7fffffff) {
        _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                         "Method/function failed. Returning: nullptr",
                         "Attempting to use an uninitialized RID",0,0);
      }
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      _err_print_error("_version_bind_shader","./drivers/gles3/shader_gles3.h",0xbe,
                       "Parameter \"version\" is null.",0,0);
      return;
    }
    goto LAB_001087d9;
  }
  _err_print_index_error
            ("_version_bind_shader","./drivers/gles3/shader_gles3.h",0xbb,8,
             (long)*(int *)(this + 0x120),"p_variant","variant_count","",false,false);
  goto LAB_00107f49;
LAB_00108098:
  uVar16 = uVar16 + 1;
  uVar17 = (ulong)((int)uVar17 + 1) % (ulong)uVar1;
  uVar15 = *(uint *)(*(long *)(lVar12 + 0x110) + uVar17 * 4);
  if ((uVar15 == 0) || (((uVar1 + (int)uVar17) - uVar15 % uVar1) % uVar1 < uVar16))
  goto LAB_00107f22;
  goto LAB_001080d1;
  while( true ) {
    uVar16 = uVar16 + 1;
    uVar10 = (ulong)((int)uVar10 + 1) % uVar11;
    uVar15 = *(uint *)(lVar7 + uVar10 * 4);
    if ((uVar15 == 0) || (((uVar1 + (int)uVar10) - uVar15 % uVar1) % uVar1 < uVar16)) break;
LAB_001079d9:
    if ((uVar15 == (uint)uVar17) &&
       (*(long *)(this + 0x110) == *(long *)(*(long *)(lVar12 + 0x108) + uVar10 * 8))) {
      puVar18 = (undefined4 *)(*(long *)(lVar12 + 0x100) + uVar10 * 0x38);
      goto LAB_001079f3;
    }
  }
LAB_00107f40:
  if (ShaderGLES3::_version_bind_shader(RID,int,unsigned_long)::first_print != '\0') {
    _err_print_error("_version_bind_shader","./drivers/gles3/shader_gles3.h",0xda,
                     "shader failed to compile, unable to bind shader.",0,1);
    ShaderGLES3::_version_bind_shader(RID,int,unsigned_long)::first_print = '\0';
  }
LAB_00107f49:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_001087d9:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CopyShaderGLES3::~CopyShaderGLES3() */

void __thiscall CopyShaderGLES3::~CopyShaderGLES3(CopyShaderGLES3 *this)

{
  *(undefined ***)this = &PTR__init_00109580;
  ShaderGLES3::~ShaderGLES3((ShaderGLES3 *)this);
  return;
}



/* CopyShaderGLES3::~CopyShaderGLES3() */

void __thiscall CopyShaderGLES3::~CopyShaderGLES3(CopyShaderGLES3 *this)

{
  *(undefined ***)this = &PTR__init_00109580;
  ShaderGLES3::~ShaderGLES3((ShaderGLES3 *)this);
  operator_delete(this,0x130);
  return;
}



/* CopyShaderGLES3::_init() */

void __thiscall CopyShaderGLES3::_init(CopyShaderGLES3 *this)

{
  ShaderGLES3::_setup((char *)this,
                      "\nlayout(location = 0) in vec2 vertex_attrib;\n\nout vec2 uv_interp;\n/* clang-format on */\n\n#if defined(USE_COPY_SECTION) || defined(MODE_GAUSSIAN_BLUR)\n// Defined in 0-1 coords.\nuniform highp vec4 copy_section;\n#endif\n#if defined(MODE_GAUSSIAN_BLUR) || defined(MODE_COPY_FROM)\nuniform highp vec4 source_section;\n#endif\n\nvoid main() {\n\tuv_interp = vertex_attrib * 0.5 + 0.5;\n\tgl_Position = vec4(vertex_attrib, 1.0, 1.0);\n\n#if defined(USE_COPY_SECTION) || defined(MODE_GAUSSIAN_BLUR)\n\tgl_Position.xy = (copy_section.xy + uv_interp.xy * copy_section.zw) * 2.0 - 1.0;\n#endif\n#if defined(MODE_GAUSSIAN_BLUR) || defined(MODE_COPY_FROM)\n\tuv_interp = source_section.xy + uv_interp * source_section.zw;\n#endif\n}\n\n/* clang-format off */\n"
                      ,
                      "\nin vec2 uv_interp;\n/* clang-format on */\n#if defined(USE_TEXTURE_3D) || defined(USE_TEXTURE_2D_ARRAY)\nuniform float layer;\nuniform float lod;\n#endif\n\n#ifdef MODE_SIMPLE_COLOR\nuniform vec4 color_in;\n#endif\n\n#ifdef MODE_MULTIPLY\nuniform float multiply;\n#endif\n\n#ifdef MODE_GAUSSIAN_BLUR\n// Defined in 0-1 coords.\nuniform highp vec2 pixel_size;\n#endif\n\n#ifdef CUBE_TO_OCTAHEDRAL\nvec3 oct_to_vec3(vec2 e) {\n\tvec3 v = vec3(e.xy, 1.0 - abs(e.x) - abs(e.y));\n\tfloat t = max(-v.z, 0.0);\n\tv.xy += t * -sign(v.xy);\n\treturn normalize(v);\n}\n#endif\n\n#ifdef CUBE_TO_PANORAMA\nuniform lowp float mip_level;\n#endif\n\n#if defined(CUBE_TO_OCTAHEDRAL) || defined(CUBE_TO_PANORAMA)\nuniform samplerCube source_cube; // texunit:0\n\n#else // ~(defined(CUBE_TO_OCTAHEDRAL) || defined(CUBE_TO_PANORAMA))\n\n#if defined(USE_TEXTURE_3D)\nuniform sampler3D source_3d; // texunit:0\n#elif defined(USE_TEXTURE_2D_ARRAY)\nuniform sampler2DArray source_2d_array; // texunit:0\n#else\nuniform sampler2D source; // texunit:0\n#endif\n\n#endif // !(defined(CUBE_TO_OCTAHEDRAL) || defined(CUBE_TO_PANORAMA))\n\nlayout(location = 0) out vec4 frag_color;\n\n// This expects 0-1 range input, outside that range it behaves poorly.\nvec3 srgb_to_linear(vec3 color) {\n\t// Approximation from http://chilliant.blogspot.com/2012/08/srgb-approximations-for-hlsl.html\n\treturn color * (color * (color * 0.305306011 + 0.682171111) + 0.012522878);\n}\n\nvoid main() {\n#ifdef MODE_SIMPLE_COPY\n\n#ifdef USE_TEXTURE_3D\n\tvec4 color = textureLod(source_3d, vec3(uv_interp, layer), lod);\n#elif defined(USE_TEXTURE_2D_ARRAY)\n\tvec4 color = textureLod(source_2d_array, vec3(uv_interp, layer), lod);\n#else\n\tvec4 color = texture(source, uv_interp);\n#endif // USE_TEXTURE_3D\n\n#ifdef MODE_MULTIPLY\n\tcolor *= multiply;\n#endif // MODE_MULTIPLY\n\n\tfrag_color = color;\n#endif // MODE_SIMPLE_COPY\n\n#ifdef MODE_SIMPLE_COLOR\n\tfrag_color = color_in;\n#endif\n\n// Efficient box filter from Jimenez: http://www.iryoku.com/next-generation-post-processing-in-call-of-duty-advanced-warfare\n// Approximates a Gaussian in a single pass.\n#ifdef MODE_G..." /* TRUNCATED STRING LITERAL */
                      ,0x108835,(char **)0x8,0x10a880,(UBOPair *)0x0,(int)_init()::_ubo_pairs,
                      (Feedback *)0x0,(int)_init()::_feedbacks,(TexUnitPair *)0x4,0x10a7e0,
                      (Specialization *)0x0,(int)_init()::_spec_pairs,(char **)0xb);
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
  undefined8 uVar5;
  code *pcVar6;
  uint uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  uint uVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  uint uVar14;
  uint *puVar15;
  ulong *puVar16;
  long lVar17;
  undefined4 uVar18;
  long in_FS_OFFSET;
  uint uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined8 local_a8;
  long local_a0;
  ulong local_98;
  long local_90;
  undefined2 local_88;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined2 local_48;
  long local_40;
  
  uVar20 = *(undefined8 *)param_3;
  uVar18 = *(undefined4 *)(param_3 + 8);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar3 = *(int *)(param_3 + 0x10);
  local_a8 = 0;
  local_a0 = 0;
  uVar13 = (ulong)param_1 % (ulong)*(uint *)(this + 0x18);
  local_b8 = uVar20;
  local_b0 = uVar18;
  if (iVar3 != 0) {
    uVar7 = iVar3 - 1U | iVar3 - 1U >> 1;
    uVar7 = uVar7 | uVar7 >> 2;
    uVar7 = uVar7 | uVar7 >> 4;
    uVar7 = uVar7 | uVar7 >> 8;
    uVar7 = (uVar7 | uVar7 >> 0x10) + 1;
    local_a8 = (ulong)uVar7 << 0x20;
    local_a0 = Memory::realloc_static((void *)0x0,(ulong)uVar7 * 4,false);
    if (local_a0 == 0) goto LAB_00108e3e;
    local_a8 = CONCAT44(local_a8._4_4_,iVar3);
    if (*(int *)(param_3 + 0x10) != 0) {
      lVar17 = *(long *)(param_3 + 0x18);
      lVar11 = 0;
      do {
        *(undefined4 *)(local_a0 + lVar11 * 4) = *(undefined4 *)(lVar17 + lVar11 * 4);
        lVar11 = lVar11 + 1;
      } while ((uint)lVar11 < *(uint *)(param_3 + 0x10));
    }
  }
  local_98 = 0;
  iVar3 = *(int *)(param_3 + 0x20);
  local_90 = 0;
  if (iVar3 != 0) {
    uVar7 = iVar3 - 1U | iVar3 - 1U >> 1;
    uVar7 = uVar7 | uVar7 >> 2;
    uVar7 = uVar7 >> 4 | uVar7;
    uVar7 = uVar7 >> 8 | uVar7;
    uVar7 = (uVar7 | uVar7 >> 0x10) + 1;
    local_98 = (ulong)uVar7 << 0x20;
    local_90 = Memory::realloc_static((void *)0x0,(ulong)uVar7 * 4,false);
    if (local_90 == 0) goto LAB_00108e3e;
    local_98 = CONCAT44(local_98._4_4_,iVar3);
    if (*(int *)(param_3 + 0x20) != 0) {
      lVar17 = *(long *)(param_3 + 0x28);
      lVar11 = 0;
      do {
        *(undefined4 *)(local_90 + lVar11 * 4) = *(undefined4 *)(lVar17 + lVar11 * 4);
        lVar11 = lVar11 + 1;
      } while ((uint)lVar11 < *(uint *)(param_3 + 0x20));
    }
  }
  lVar11 = *(long *)(this + 0x10);
  local_88 = *(undefined2 *)(param_3 + 0x30);
  lVar17 = uVar13 * 4;
  puVar15 = (uint *)(lVar11 + lVar17);
  uVar7 = *puVar15;
  uVar19 = (uint)local_a8;
  if (uVar7 != 0) {
    uVar8 = (ulong)*(uint *)(this + 0x18);
    uVar14 = 0;
    puVar16 = param_2;
    do {
      uVar10 = (uint)((ulong)(uint)(((int)uVar8 + (int)uVar13) - (int)((ulong)uVar7 % uVar8)) %
                     uVar8);
      param_2 = puVar16;
      if (uVar10 < uVar14) {
        lVar17 = *(long *)(this + 8);
        lVar11 = *(long *)this;
        *puVar15 = param_1;
        puVar9 = (undefined8 *)(lVar17 + uVar13 * 8);
        puVar1 = (undefined8 *)(lVar11 + uVar13 * 0x38);
        param_2 = (ulong *)*puVar9;
        *puVar9 = puVar16;
        lVar17 = puVar1[3];
        uVar5 = *puVar1;
        uVar21 = CONCAT44(local_a8._4_4_,uVar19);
        uVar4 = *(undefined4 *)(puVar1 + 1);
        local_a8 = puVar1[2];
        uVar19 = *(uint *)(puVar1 + 2);
        local_48 = local_88;
        lVar11 = puVar1[5];
        uVar8 = puVar1[4];
        *puVar1 = uVar20;
        uVar2 = *(undefined2 *)(puVar1 + 6);
        *(undefined4 *)(puVar1 + 1) = uVar18;
        puVar1[5] = local_90;
        puVar1[4] = local_98;
        *(undefined2 *)(puVar1 + 6) = local_88;
        puVar1[3] = local_a0;
        puVar1[2] = uVar21;
        local_60 = 0;
        local_68 = 0;
        local_50 = 0;
        local_58 = 0;
        local_b8 = uVar5;
        local_b0 = uVar4;
        local_a0 = lVar17;
        local_98 = uVar8;
        local_90 = lVar11;
        local_88 = uVar2;
        local_78 = uVar20;
        local_70 = uVar18;
        ShaderGLES3::Version::Specialization::~Specialization((Specialization *)&local_78);
        uVar8 = (ulong)*(uint *)(this + 0x18);
        lVar11 = *(long *)(this + 0x10);
        param_1 = uVar7;
        uVar18 = uVar4;
        uVar14 = uVar10;
        uVar20 = uVar5;
      }
      uVar14 = uVar14 + 1;
      uVar13 = (ulong)((int)uVar13 + 1) % uVar8;
      lVar17 = uVar13 * 4;
      puVar15 = (uint *)(lVar11 + lVar17);
      uVar7 = *puVar15;
      puVar16 = param_2;
    } while (uVar7 != 0);
  }
  lVar11 = *(long *)this;
  *(ulong **)(*(long *)(this + 8) + uVar13 * 8) = param_2;
  puVar1 = (undefined8 *)(lVar11 + uVar13 * 0x38);
  *(undefined4 *)(puVar1 + 1) = uVar18;
  puVar1[2] = 0;
  puVar1[3] = 0;
  *puVar1 = uVar20;
  if (uVar19 != 0) {
    uVar7 = uVar19 - 1 | uVar19 - 1 >> 1;
    uVar7 = uVar7 >> 2 | uVar7;
    uVar7 = uVar7 >> 4 | uVar7;
    uVar7 = uVar7 >> 8 | uVar7;
    uVar7 = (uVar7 >> 0x10 | uVar7) + 1;
    *(uint *)((long)puVar1 + 0x14) = uVar7;
    lVar11 = Memory::realloc_static((void *)0x0,(ulong)uVar7 * 4,false);
    puVar1[3] = lVar11;
    if (lVar11 == 0) goto LAB_00108e3e;
    lVar12 = 0;
    *(uint *)(puVar1 + 2) = uVar19;
    do {
      *(undefined4 *)(lVar11 + lVar12) = *(undefined4 *)(local_a0 + lVar12);
      lVar12 = lVar12 + 4;
    } while (lVar12 != (ulong)uVar19 << 2);
  }
  uVar13 = local_98;
  iVar3 = (int)local_98;
  puVar1[4] = 0;
  puVar1[5] = 0;
  if ((int)local_98 != 0) {
    uVar7 = (int)local_98 - 1U >> 1 | (int)local_98 - 1U;
    uVar7 = uVar7 >> 2 | uVar7;
    uVar7 = uVar7 | uVar7 >> 4;
    uVar7 = uVar7 >> 8 | uVar7;
    uVar7 = (uVar7 >> 0x10 | uVar7) + 1;
    *(uint *)((long)puVar1 + 0x24) = uVar7;
    lVar11 = Memory::realloc_static((void *)0x0,(ulong)uVar7 * 4,false);
    puVar1[5] = lVar11;
    if (lVar11 == 0) {
LAB_00108e3e:
      _err_print_error("resize","./core/templates/local_vector.h",0xa3,
                       "FATAL: Condition \"!data\" is true.","Out of memory",0,0);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar6 = (code *)invalidInstructionException();
      (*pcVar6)();
    }
    *(int *)(puVar1 + 4) = iVar3;
    lVar12 = 0;
    do {
      *(undefined4 *)(lVar11 + lVar12) = *(undefined4 *)(local_90 + lVar12);
      lVar12 = lVar12 + 4;
    } while (lVar12 != (uVar13 & 0xffffffff) << 2);
  }
  *(undefined2 *)(puVar1 + 6) = local_88;
  *(uint *)(*(long *)(this + 0x10) + lVar17) = param_1;
  *(int *)(this + 0x1c) = *(int *)(this + 0x1c) + 1;
  ShaderGLES3::Version::Specialization::~Specialization((Specialization *)&local_b8);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
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
  undefined8 *puVar10;
  Specialization *this_00;
  
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
      puVar10 = puVar1;
      this_00 = pSVar2;
      do {
        if (*puVar8 != 0) {
          _insert_with_hash(this,*puVar8,(ulong *)*puVar10,this_00);
          ShaderGLES3::Version::Specialization::~Specialization(this_00);
        }
        puVar10 = puVar10 + 1;
        puVar8 = puVar8 + 1;
        this_00 = this_00 + 0x38;
      } while (puVar10 != puVar1 + uVar9);
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
/* CopyShaderGLES3::~CopyShaderGLES3() */

void __thiscall CopyShaderGLES3::~CopyShaderGLES3(CopyShaderGLES3 *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



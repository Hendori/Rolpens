
/* GLES3::PostEffects::get_singleton() */

undefined8 GLES3::PostEffects::get_singleton(void)

{
  return singleton;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GLES3::PostEffects::~PostEffects() */

void __thiscall GLES3::PostEffects::~PostEffects(PostEffects *this)

{
  singleton = 0;
  (*_glad_glDeleteBuffers)(1,this + 0x138);
  (*_glad_glDeleteVertexArrays)(1,this + 0x13c);
  ShaderGLES3::version_free(this,*(undefined8 *)(this + 0x130));
  *(undefined ***)this = &PTR__init_00102f30;
  ShaderGLES3::~ShaderGLES3((ShaderGLES3 *)this);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GLES3::PostEffects::_draw_screen_triangle() */

void __thiscall GLES3::PostEffects::_draw_screen_triangle(PostEffects *this)

{
  (*_glad_glBindVertexArray)(*(undefined4 *)(this + 0x13c));
  (*_glad_glDrawArrays)(4,0,3);
                    /* WARNING: Could not recover jumptable at 0x0010009c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*_glad_glBindVertexArray)(0);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GLES3::PostEffects::PostEffects() */

void __thiscall GLES3::PostEffects::PostEffects(PostEffects *this)

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
  *(undefined ***)this = &PTR__init_00102f30;
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
    goto LAB_001003af;
  }
  if ((uVar6 != 0) && ((uint)uVar6 < *(uint *)(this + 0x54))) {
    uVar11 = ((uVar6 & 0xffffffff) % (ulong)*(uint *)(this + 0x50)) * 0x80 +
             *(long *)(*(long *)(this + 0x40) +
                      ((uVar6 & 0xffffffff) / (ulong)*(uint *)(this + 0x50)) * 8);
    if (*(int *)(uVar11 + 0x78) == (int)(uVar6 >> 0x20)) {
      if ((*(int *)(uVar11 + 0x68) == 0) &&
         (ShaderGLES3::_initialize_version((Version *)this), *(int *)(uVar11 + 0x68) == 0)) {
LAB_00100537:
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
          goto LAB_00100580;
        }
        puVar12 = (undefined4 *)(*plVar1 + uVar6 * 0x38);
        if (puVar12 != (undefined4 *)0x0) {
          if (*(char *)(puVar12 + 0xc) == '\0') goto LAB_00100394;
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
          if (uVar9 == 0) goto LAB_001004d8;
          goto LAB_00100371;
        }
      }
LAB_00100580:
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
         *(int *)(uVar11 + 0x68) == 0)) goto LAB_00100537;
      plVar1 = *(long **)(uVar11 + 0x70);
      uVar2 = *(uint *)(plVar1 + 3);
      uVar6 = uVar10 % (ulong)uVar2;
      uVar9 = *(uint *)(plVar1[2] + uVar6 * 4);
      if (uVar9 != 0) {
        uVar8 = 0;
LAB_00100669:
        if (((uint)uVar10 != uVar9) || (lVar5 != *(long *)(plVar1[1] + uVar6 * 8)))
        goto LAB_00100630;
        puVar12 = (undefined4 *)(*plVar1 + uVar6 * 0x38);
        if (this[0xa0] != (PostEffects)0x0) {
          ShaderGLES3::_save_to_cache((Version *)this);
        }
        ShaderGLES3::Version::Specialization::~Specialization((Specialization *)&local_98);
LAB_0010038b:
        if (puVar12 != (undefined4 *)0x0) {
LAB_00100394:
          if (*(char *)((long)puVar12 + 0x31) != '\0') {
            (*_glad_glUseProgram)(*puVar12);
            *(undefined4 **)(this + 0x128) = puVar12;
            goto LAB_001003af;
          }
        }
        goto LAB_001004d8;
      }
LAB_001004be:
      if (this[0xa0] == (PostEffects)0x0) {
        ShaderGLES3::Version::Specialization::~Specialization((Specialization *)&local_98);
      }
      else {
        ShaderGLES3::_save_to_cache((Version *)this);
        ShaderGLES3::Version::Specialization::~Specialization((Specialization *)&local_98);
      }
      goto LAB_001004d8;
    }
    if (*(int *)(uVar11 + 0x78) + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("_version_bind_shader","./drivers/gles3/shader_gles3.h",0xbe,
                   "Parameter \"version\" is null.",0,0);
  goto LAB_001003af;
LAB_00100630:
  uVar8 = uVar8 + 1;
  uVar6 = (ulong)((int)uVar6 + 1) % (ulong)uVar2;
  uVar9 = *(uint *)(plVar1[2] + uVar6 * 4);
  if ((uVar9 == 0) || (((uVar2 + (int)uVar6) - uVar9 % uVar2) % uVar2 < uVar8)) goto LAB_001004be;
  goto LAB_00100669;
  while( true ) {
    uVar8 = uVar8 + 1;
    uVar6 = (ulong)((int)uVar6 + 1) % uVar7;
    uVar9 = *(uint *)(lVar3 + uVar6 * 4);
    if ((uVar9 == 0) || (((uVar2 + (int)uVar6) - uVar9 % uVar2) % uVar2 < uVar8)) break;
LAB_00100371:
    if ((uVar9 == (uint)uVar11) && (*(long *)(this + 0x110) == *(long *)(plVar1[1] + uVar6 * 8))) {
      puVar12 = (undefined4 *)(*plVar1 + uVar6 * 0x38);
      goto LAB_0010038b;
    }
  }
LAB_001004d8:
  if (ShaderGLES3::_version_bind_shader(RID,int,unsigned_long)::first_print != '\0') {
    _err_print_error("_version_bind_shader","./drivers/gles3/shader_gles3.h",0xda,
                     "shader failed to compile, unable to bind shader.",0,1);
    ShaderGLES3::_version_bind_shader(RID,int,unsigned_long)::first_print = '\0';
  }
LAB_001003af:
  (*_glad_glGenBuffers)(1,this + 0x138);
  (*_glad_glBindBuffer)(0x8892,*(undefined4 *)(this + 0x138));
  local_48 = _LC21;
  local_58 = __LC20;
  uStack_54 = _UNK_00105b84;
  uStack_50 = _UNK_00105b88;
  uStack_4c = _UNK_00105b8c;
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
/* GLES3::PostEffects::post_copy(unsigned int, Vector2i, unsigned int, Vector2i, float,
   GLES3::Glow::GLOWLEVEL const*, float, unsigned int, bool, unsigned long) */

void GLES3::PostEffects::post_copy
               (float param_1,PostEffects *param_2,undefined4 param_3,ulong param_4,
               undefined4 param_5,undefined8 param_6,long param_7,uint param_8,byte param_9,
               ulong param_10)

{
  uint uVar1;
  long *plVar2;
  code *pcVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  undefined4 uVar11;
  uint uVar12;
  char *pcVar13;
  uint uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  undefined4 *puVar18;
  long in_FS_OFFSET;
  undefined1 auVar19 [16];
  double dVar20;
  char *pcVar21;
  int local_a8;
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
  (*_glad_glDisable)(0xb71);
  (*_glad_glDepthMask)(0);
  (*_glad_glDisable)(0xbe2);
  (*_glad_glBindFramebuffer)(0x8d40,param_3);
  (*_glad_glViewport)(0,0,param_4 & 0xffffffff,param_4 >> 0x20);
  uVar10 = param_9 | param_10;
  if (param_7 != 0) {
    uVar10 = param_9 | param_10 | 2;
  }
  if (param_1 != __LC22) {
    uVar10 = uVar10 | 4;
  }
  uVar5 = *(ulong *)(param_2 + 0x130);
  local_80 = uVar10;
  if (0 < *(int *)(param_2 + 0x120)) {
    if ((uVar5 != 0) && ((uint)uVar5 < *(uint *)(param_2 + 0x54))) {
      uVar17 = ((uVar5 & 0xffffffff) % (ulong)*(uint *)(param_2 + 0x50)) * 0x80 +
               *(long *)(*(long *)(param_2 + 0x40) +
                        ((uVar5 & 0xffffffff) / (ulong)*(uint *)(param_2 + 0x50)) * 8);
      if (*(int *)(uVar17 + 0x78) == (int)(uVar5 >> 0x20)) {
        if ((*(int *)(uVar17 + 0x68) == 0) &&
           (ShaderGLES3::_initialize_version((Version *)param_2), *(int *)(uVar17 + 0x68) == 0)) {
LAB_0010166f:
          _err_print_index_error
                    ("operator[]","./core/templates/local_vector.h",0xb2,0,0,"p_index","count","",
                     false,true);
          _err_flush_stdout();
                    /* WARNING: Does not return */
          pcVar3 = (code *)invalidInstructionException();
          (*pcVar3)();
        }
        uVar15 = local_80;
        plVar2 = *(long **)(uVar17 + 0x70);
        uVar1 = *(uint *)(plVar2 + 3);
        uVar6 = (ulong)uVar1;
        lVar8 = plVar2[2];
        uVar5 = local_80 * 0x3ffff - 1;
        uVar5 = (uVar5 ^ uVar5 >> 0x1f) * 0x15;
        uVar5 = (uVar5 ^ uVar5 >> 0xb) * 0x41;
        uVar5 = uVar5 >> 0x16 ^ uVar5;
        uVar16 = uVar5 & 0xffffffff;
        if ((int)uVar5 == 0) {
          uVar16 = 1;
        }
        uVar5 = uVar16 % uVar6;
        uVar14 = *(uint *)(lVar8 + uVar5 * 4);
        if (uVar14 != 0) {
          uVar12 = 0;
          while ((uVar14 != (uint)uVar16 || (local_80 != *(ulong *)(plVar2[1] + uVar5 * 8)))) {
            uVar12 = uVar12 + 1;
            uVar5 = (ulong)((int)uVar5 + 1) % uVar6;
            uVar14 = *(uint *)(lVar8 + uVar5 * 4);
            if ((uVar14 == 0) || (((uVar1 + (int)uVar5) - uVar14 % uVar1) % uVar1 < uVar12))
            goto LAB_001016f0;
          }
          puVar18 = (undefined4 *)(*plVar2 + uVar5 * 0x38);
          if (puVar18 != (undefined4 *)0x0) {
            if (*(char *)(puVar18 + 0xc) == '\0') goto LAB_00100a86;
            uVar5 = *(long *)(param_2 + 0x110) * 0x3ffff - 1;
            uVar5 = (uVar5 ^ uVar5 >> 0x1f) * 0x15;
            uVar5 = (uVar5 ^ uVar5 >> 0xb) * 0x41;
            uVar5 = uVar5 >> 0x16 ^ uVar5;
            uVar17 = uVar5 & 0xffffffff;
            if ((int)uVar5 == 0) {
              uVar17 = 1;
            }
            uVar12 = 0;
            uVar5 = uVar17 % uVar6;
            uVar14 = *(uint *)(lVar8 + uVar5 * 4);
            if (uVar14 == 0) goto LAB_00101620;
            goto LAB_00100a63;
          }
        }
LAB_001016f0:
        local_48 = 0;
        local_78 = 0;
        local_70 = 0;
        local_68 = 0;
        local_60 = 0;
        local_58 = 0;
        local_50 = 0;
        ShaderGLES3::_compile_specialization
                  ((Specialization *)param_2,(uint)(Specialization *)&local_78,(Version *)0x0,uVar17
                  );
        if ((*(int *)(uVar17 + 0x68) == 0) ||
           (OAHashMap<unsigned_long,ShaderGLES3::Version::Specialization,HashMapHasherDefault,HashMapComparatorDefault<unsigned_long>>
            ::insert(*(OAHashMap<unsigned_long,ShaderGLES3::Version::Specialization,HashMapHasherDefault,HashMapComparatorDefault<unsigned_long>>
                       **)(uVar17 + 0x70),&local_80,(Specialization *)&local_78),
           *(int *)(uVar17 + 0x68) == 0)) goto LAB_0010166f;
        plVar2 = *(long **)(uVar17 + 0x70);
        uVar1 = *(uint *)(plVar2 + 3);
        uVar5 = uVar16 % (ulong)uVar1;
        uVar14 = *(uint *)(plVar2[2] + uVar5 * 4);
        if (uVar14 == 0) {
LAB_00101609:
          if (param_2[0xa0] == (PostEffects)0x0) {
            ShaderGLES3::Version::Specialization::~Specialization((Specialization *)&local_78);
          }
          else {
            ShaderGLES3::_save_to_cache((Version *)param_2);
            ShaderGLES3::Version::Specialization::~Specialization((Specialization *)&local_78);
          }
        }
        else {
          uVar12 = 0;
LAB_001017e1:
          if ((uVar14 != (uint)uVar16) || (uVar15 != *(ulong *)(plVar2[1] + uVar5 * 8)))
          goto LAB_001017a8;
          puVar18 = (undefined4 *)(*plVar2 + uVar5 * 0x38);
          if (param_2[0xa0] != (PostEffects)0x0) {
            ShaderGLES3::_save_to_cache((Version *)param_2);
          }
          ShaderGLES3::Version::Specialization::~Specialization((Specialization *)&local_78);
LAB_00100a7d:
          if (puVar18 != (undefined4 *)0x0) {
LAB_00100a86:
            if (*(char *)((long)puVar18 + 0x31) == '\0') goto LAB_00101620;
            (*_glad_glUseProgram)(*puVar18);
            *(undefined4 **)(param_2 + 0x128) = puVar18;
            iVar4 = (-(uint)(param_9 == 0) & 0xffff81c7) + 0x8c1a;
            (*_glad_glActiveTexture)(0x84c0);
            (*_glad_glBindTexture)(iVar4,param_5);
            (*_glad_glTexParameteri)(iVar4,0x2800,0x2601);
            (*_glad_glTexParameteri)(iVar4,0x2801,0x2601);
            if (param_7 == 0) {
LAB_00101042:
              lVar8 = (long)*(int *)(param_2 + 0xd0);
            }
            else {
              (*_glad_glActiveTexture)(0x84c1);
              (*_glad_glBindTexture)(0xde1,*(undefined4 *)(param_7 + 8));
              pcVar3 = _glad_glUniform2f;
              uVar5 = *(ulong *)(param_2 + 0x130);
              if (*(int *)(param_2 + 0xd0) < 3) {
                _err_print_index_error
                          ("_version_get_uniform","./drivers/gles3/shader_gles3.h",0xe4,2,
                           (long)*(int *)(param_2 + 0xd0),"p_which","uniform_count","",false,false);
                goto LAB_00100dcd;
              }
              if ((uVar5 == 0) || (*(uint *)(param_2 + 0x54) <= (uint)uVar5)) {
LAB_00101900:
                _err_print_error("_version_get_uniform","./drivers/gles3/shader_gles3.h",0xe6,
                                 "Parameter \"version\" is null.",0);
              }
              else {
                lVar8 = ((uVar5 & 0xffffffff) % (ulong)*(uint *)(param_2 + 0x50)) * 0x80 +
                        *(long *)(*(long *)(param_2 + 0x40) +
                                 ((uVar5 & 0xffffffff) / (ulong)*(uint *)(param_2 + 0x50)) * 8);
                iVar7 = *(int *)(lVar8 + 0x78);
                if (iVar7 != (int)(uVar5 >> 0x20)) {
                  if (iVar7 + 0x80000000U < 0x7fffffff) {
                    _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                                     "Method/function failed. Returning: nullptr",
                                     "Attempting to use an uninitialized RID",0,0);
                  }
                  goto LAB_00101900;
                }
                if (*(int *)(lVar8 + 0x68) < 1) {
                  _err_print_index_error
                            ("_version_get_uniform","./drivers/gles3/shader_gles3.h",0xe7,0,
                             (long)*(int *)(lVar8 + 0x68),"p_variant",
                             "int(version->variants.size())","",false,false);
                  goto LAB_00100dcd;
                }
                plVar2 = *(long **)(lVar8 + 0x70);
                uVar1 = *(uint *)(plVar2 + 3);
                uVar17 = uVar10 * 0x3ffff - 1;
                uVar17 = (uVar17 ^ uVar17 >> 0x1f) * 0x15;
                uVar17 = (uVar17 ^ uVar17 >> 0xb) * 0x41;
                uVar17 = uVar17 >> 0x16 ^ uVar17;
                uVar15 = uVar17 & 0xffffffff;
                if ((int)uVar17 == 0) {
                  uVar15 = 1;
                }
                uVar17 = uVar15 % (ulong)uVar1;
                uVar14 = *(uint *)(plVar2[2] + uVar17 * 4);
                if (uVar14 == 0) {
LAB_00101d90:
                  _err_print_error("_version_get_uniform","./drivers/gles3/shader_gles3.h",0xe9,
                                   "Parameter \"spec\" is null.",0);
                }
                else {
                  uVar12 = 0;
                  while ((uVar14 != (uint)uVar15 || (uVar10 != *(ulong *)(plVar2[1] + uVar17 * 8))))
                  {
                    uVar12 = uVar12 + 1;
                    uVar17 = (ulong)((int)uVar17 + 1) % (ulong)uVar1;
                    uVar14 = *(uint *)(plVar2[2] + uVar17 * 4);
                    if ((uVar14 == 0) || (((uVar1 + (int)uVar17) - uVar14 % uVar1) % uVar1 < uVar12)
                       ) goto LAB_00101d90;
                  }
                  lVar8 = *plVar2 + uVar17 * 0x38;
                  if (lVar8 == 0) goto LAB_00101d90;
                  if (*(int *)(lVar8 + 0x10) < 3) {
                    _err_print_index_error
                              ("_version_get_uniform","./drivers/gles3/shader_gles3.h",0xea,2,
                               (long)*(int *)(lVar8 + 0x10),"p_which",
                               "int(spec->uniform_location.size())","",false,false);
                  }
                  else if (-1 < *(int *)(*(long *)(lVar8 + 0x18) + 8)) {
                    if (*(int *)(param_2 + 0xd0) < 3) {
                      _err_print_index_error
                                ("_version_get_uniform","./drivers/gles3/shader_gles3.h",0xe4,2,
                                 (long)*(int *)(param_2 + 0xd0),"p_which","uniform_count","",false,
                                 false);
LAB_001020e6:
                      uVar11 = 0xffffffff;
                    }
                    else {
                      if (*(uint *)(param_2 + 0x54) <= (uint)uVar5) {
LAB_0010225c:
                        _err_print_error("_version_get_uniform","./drivers/gles3/shader_gles3.h",
                                         0xe6,"Parameter \"version\" is null.",0);
                        goto LAB_001020e6;
                      }
                      lVar8 = ((uVar5 & 0xffffffff) % (ulong)*(uint *)(param_2 + 0x50)) * 0x80 +
                              *(long *)(*(long *)(param_2 + 0x40) +
                                       ((uVar5 & 0xffffffff) / (ulong)*(uint *)(param_2 + 0x50)) * 8
                                       );
                      if (iVar7 != *(int *)(lVar8 + 0x78)) {
                        if (*(int *)(lVar8 + 0x78) + 0x80000000U < 0x7fffffff) {
                          _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                                           "Method/function failed. Returning: nullptr",
                                           "Attempting to use an uninitialized RID",0,0);
                        }
                        goto LAB_0010225c;
                      }
                      if (*(int *)(lVar8 + 0x68) < 1) {
                        _err_print_index_error
                                  ("_version_get_uniform","./drivers/gles3/shader_gles3.h",0xe7,0,
                                   (long)*(int *)(lVar8 + 0x68),"p_variant",
                                   "int(version->variants.size())","",false,false);
                        goto LAB_001020e6;
                      }
                      plVar2 = *(long **)(lVar8 + 0x70);
                      uVar1 = *(uint *)(plVar2 + 3);
                      uVar5 = uVar15 % (ulong)uVar1;
                      uVar14 = *(uint *)(plVar2[2] + uVar5 * 4);
                      if (uVar14 == 0) {
LAB_0010232c:
                        _err_print_error("_version_get_uniform","./drivers/gles3/shader_gles3.h",
                                         0xe9,"Parameter \"spec\" is null.",0);
                        goto LAB_001020e6;
                      }
                      uVar12 = 0;
                      while ((uVar14 != (uint)uVar15 ||
                             (uVar10 != *(ulong *)(plVar2[1] + uVar5 * 8)))) {
                        uVar12 = uVar12 + 1;
                        uVar5 = (ulong)((int)uVar5 + 1) % (ulong)uVar1;
                        uVar14 = *(uint *)(plVar2[2] + uVar5 * 4);
                        if ((uVar14 == 0) ||
                           (((uVar1 + (int)uVar5) - uVar14 % uVar1) % uVar1 < uVar12))
                        goto LAB_0010232c;
                      }
                      lVar8 = *plVar2 + uVar5 * 0x38;
                      if (lVar8 == 0) goto LAB_0010232c;
                      if (*(int *)(lVar8 + 0x10) < 3) {
                        _err_print_index_error
                                  ("_version_get_uniform","./drivers/gles3/shader_gles3.h",0xea,2,
                                   (long)*(int *)(lVar8 + 0x10),"p_which",
                                   "int(spec->uniform_location.size())","",false,false);
                        goto LAB_001020e6;
                      }
                      uVar11 = *(undefined4 *)(*(long *)(lVar8 + 0x18) + 8);
                    }
                    dVar20 = _LC29 / (double)(int)((ulong)param_6 >> 0x20);
                    local_a8 = (int)param_6;
                    (*pcVar3)(CONCAT44((int)((ulong)(_LC29 / (double)local_a8) >> 0x20),
                                       (float)(_LC29 / (double)local_a8)),
                              CONCAT44((int)((ulong)dVar20 >> 0x20),(float)dVar20),uVar11);
                  }
                }
              }
LAB_00100dcd:
              pcVar3 = _glad_glUniform1f;
              lVar8 = (long)*(int *)(param_2 + 0xd0);
              uVar5 = *(ulong *)(param_2 + 0x130);
              if (*(int *)(param_2 + 0xd0) < 4) {
                lVar9 = 3;
                pcVar13 = "p_which";
                iVar7 = 0xe4;
                pcVar21 = "uniform_count";
LAB_00101c10:
                _err_print_index_error
                          ("_version_get_uniform","./drivers/gles3/shader_gles3.h",iVar7,lVar9,lVar8
                           ,pcVar13,pcVar21,"",false,false);
                lVar8 = (long)*(int *)(param_2 + 0xd0);
              }
              else {
                if ((uVar5 != 0) && ((uint)uVar5 < *(uint *)(param_2 + 0x54))) {
                  lVar9 = ((uVar5 & 0xffffffff) % (ulong)*(uint *)(param_2 + 0x50)) * 0x80 +
                          *(long *)(*(long *)(param_2 + 0x40) +
                                   ((uVar5 & 0xffffffff) / (ulong)*(uint *)(param_2 + 0x50)) * 8);
                  iVar7 = *(int *)(lVar9 + 0x78);
                  if (iVar7 == (int)(uVar5 >> 0x20)) {
                    lVar8 = (long)*(int *)(lVar9 + 0x68);
                    if (*(int *)(lVar9 + 0x68) < 1) {
                      lVar9 = 0;
                      iVar7 = 0xe7;
                      pcVar13 = "p_variant";
                      pcVar21 = "int(version->variants.size())";
                      goto LAB_00101c10;
                    }
                    plVar2 = *(long **)(lVar9 + 0x70);
                    uVar1 = *(uint *)(plVar2 + 3);
                    uVar17 = uVar10 * 0x3ffff - 1;
                    uVar17 = (uVar17 ^ uVar17 >> 0x1f) * 0x15;
                    uVar17 = (uVar17 ^ uVar17 >> 0xb) * 0x41;
                    uVar17 = uVar17 >> 0x16 ^ uVar17;
                    uVar15 = uVar17 & 0xffffffff;
                    if ((int)uVar17 == 0) {
                      uVar15 = 1;
                    }
                    uVar17 = uVar15 % (ulong)uVar1;
                    uVar14 = *(uint *)(plVar2[2] + uVar17 * 4);
                    if (uVar14 != 0) {
                      uVar12 = 0;
                      while ((uVar14 != (uint)uVar15 ||
                             (uVar10 != *(ulong *)(plVar2[1] + uVar17 * 8)))) {
                        uVar12 = uVar12 + 1;
                        uVar17 = (ulong)((int)uVar17 + 1) % (ulong)uVar1;
                        uVar14 = *(uint *)(plVar2[2] + uVar17 * 4);
                        if ((uVar14 == 0) ||
                           (((uVar1 + (int)uVar17) - uVar14 % uVar1) % uVar1 < uVar12))
                        goto LAB_00101dc0;
                      }
                      lVar9 = *plVar2 + uVar17 * 0x38;
                      if (lVar9 != 0) {
                        lVar8 = (long)*(int *)(lVar9 + 0x10);
                        if (*(int *)(lVar9 + 0x10) < 4) {
                          lVar9 = 3;
                          pcVar13 = "p_which";
                          iVar7 = 0xea;
                          pcVar21 = "int(spec->uniform_location.size())";
                          goto LAB_00101c10;
                        }
                        lVar8 = (long)*(int *)(param_2 + 0xd0);
                        if (*(int *)(*(long *)(lVar9 + 0x18) + 0xc) < 0) goto LAB_00101049;
                        if (*(int *)(param_2 + 0xd0) < 4) {
                          _err_print_index_error
                                    ("_version_get_uniform","./drivers/gles3/shader_gles3.h",0xe4,3,
                                     lVar8,"p_which","uniform_count","",false,false);
LAB_0010212c:
                          uVar11 = 0xffffffff;
                        }
                        else {
                          if (*(uint *)(param_2 + 0x54) <= (uint)uVar5) {
LAB_00102177:
                            _err_print_error("_version_get_uniform","./drivers/gles3/shader_gles3.h"
                                             ,0xe6,"Parameter \"version\" is null.",0);
                            goto LAB_0010212c;
                          }
                          lVar8 = ((uVar5 & 0xffffffff) % (ulong)*(uint *)(param_2 + 0x50)) * 0x80 +
                                  *(long *)(*(long *)(param_2 + 0x40) +
                                           ((uVar5 & 0xffffffff) / (ulong)*(uint *)(param_2 + 0x50))
                                           * 8);
                          if (iVar7 != *(int *)(lVar8 + 0x78)) {
                            if (*(int *)(lVar8 + 0x78) + 0x80000000U < 0x7fffffff) {
                              _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                                               "Method/function failed. Returning: nullptr",
                                               "Attempting to use an uninitialized RID",0,0);
                            }
                            goto LAB_00102177;
                          }
                          if (*(int *)(lVar8 + 0x68) < 1) {
                            _err_print_index_error
                                      ("_version_get_uniform","./drivers/gles3/shader_gles3.h",0xe7,
                                       0,(long)*(int *)(lVar8 + 0x68),"p_variant",
                                       "int(version->variants.size())","",false,false);
                            goto LAB_0010212c;
                          }
                          plVar2 = *(long **)(lVar8 + 0x70);
                          uVar1 = *(uint *)(plVar2 + 3);
                          uVar5 = uVar15 % (ulong)uVar1;
                          uVar14 = *(uint *)(plVar2[2] + uVar5 * 4);
                          if (uVar14 == 0) {
LAB_00102302:
                            _err_print_error("_version_get_uniform","./drivers/gles3/shader_gles3.h"
                                             ,0xe9,"Parameter \"spec\" is null.",0);
                            goto LAB_0010212c;
                          }
                          uVar12 = 0;
                          while ((uVar14 != (uint)uVar15 ||
                                 (uVar10 != *(ulong *)(plVar2[1] + uVar5 * 8)))) {
                            uVar12 = uVar12 + 1;
                            uVar5 = (ulong)((int)uVar5 + 1) % (ulong)uVar1;
                            uVar14 = *(uint *)(plVar2[2] + uVar5 * 4);
                            if ((uVar14 == 0) ||
                               (((uVar1 + (int)uVar5) - uVar14 % uVar1) % uVar1 < uVar12))
                            goto LAB_00102302;
                          }
                          lVar8 = *plVar2 + uVar5 * 0x38;
                          if (lVar8 == 0) goto LAB_00102302;
                          if (*(int *)(lVar8 + 0x10) < 4) {
                            _err_print_index_error
                                      ("_version_get_uniform","./drivers/gles3/shader_gles3.h",0xea,
                                       3,(long)*(int *)(lVar8 + 0x10),"p_which",
                                       "int(spec->uniform_location.size())","",false,false);
                            goto LAB_0010212c;
                          }
                          uVar11 = *(undefined4 *)(*(long *)(lVar8 + 0x18) + 0xc);
                        }
                        (*pcVar3)(uVar11);
                        goto LAB_00101042;
                      }
                    }
LAB_00101dc0:
                    _err_print_error("_version_get_uniform","./drivers/gles3/shader_gles3.h",0xe9,
                                     "Parameter \"spec\" is null.",0);
                    lVar8 = (long)*(int *)(param_2 + 0xd0);
                    goto LAB_00101049;
                  }
                  if (iVar7 + 0x80000000U < 0x7fffffff) {
                    _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                                     "Method/function failed. Returning: nullptr",
                                     "Attempting to use an uninitialized RID",0,0);
                  }
                }
                _err_print_error("_version_get_uniform","./drivers/gles3/shader_gles3.h",0xe6,
                                 "Parameter \"version\" is null.",0);
                lVar8 = (long)*(int *)(param_2 + 0xd0);
              }
            }
LAB_00101049:
            pcVar3 = _glad_glUniform1f;
            uVar5 = *(ulong *)(param_2 + 0x130);
            if ((int)lVar8 < 1) {
              _err_print_index_error
                        ("_version_get_uniform","./drivers/gles3/shader_gles3.h",0xe4,0,lVar8,
                         "p_which","uniform_count","",false,false);
              goto LAB_001012b7;
            }
            if ((uVar5 == 0) || (*(uint *)(param_2 + 0x54) <= (uint)uVar5)) {
LAB_00101a30:
              _err_print_error("_version_get_uniform","./drivers/gles3/shader_gles3.h",0xe6,
                               "Parameter \"version\" is null.",0);
            }
            else {
              lVar8 = ((uVar5 & 0xffffffff) % (ulong)*(uint *)(param_2 + 0x50)) * 0x80 +
                      *(long *)(*(long *)(param_2 + 0x40) +
                               ((uVar5 & 0xffffffff) / (ulong)*(uint *)(param_2 + 0x50)) * 8);
              iVar7 = *(int *)(lVar8 + 0x78);
              if (iVar7 != (int)(uVar5 >> 0x20)) {
                if (iVar7 + 0x80000000U < 0x7fffffff) {
                  _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                                   "Method/function failed. Returning: nullptr",
                                   "Attempting to use an uninitialized RID",0,0);
                }
                goto LAB_00101a30;
              }
              if (*(int *)(lVar8 + 0x68) < 1) {
                _err_print_index_error
                          ("_version_get_uniform","./drivers/gles3/shader_gles3.h",0xe7,0,
                           (long)*(int *)(lVar8 + 0x68),"p_variant","int(version->variants.size())",
                           "",false,false);
                goto LAB_001012b7;
              }
              plVar2 = *(long **)(lVar8 + 0x70);
              uVar1 = *(uint *)(plVar2 + 3);
              uVar17 = uVar10 * 0x3ffff - 1;
              uVar17 = (uVar17 ^ uVar17 >> 0x1f) * 0x15;
              uVar17 = (uVar17 ^ uVar17 >> 0xb) * 0x41;
              uVar17 = uVar17 >> 0x16 ^ uVar17;
              uVar15 = uVar17 & 0xffffffff;
              if ((int)uVar17 == 0) {
                uVar15 = 1;
              }
              uVar17 = uVar15 % (ulong)uVar1;
              uVar14 = *(uint *)(plVar2[2] + uVar17 * 4);
              if (uVar14 == 0) {
LAB_00101b80:
                _err_print_error("_version_get_uniform","./drivers/gles3/shader_gles3.h",0xe9,
                                 "Parameter \"spec\" is null.",0);
              }
              else {
                uVar12 = 0;
                while ((uVar14 != (uint)uVar15 || (uVar10 != *(ulong *)(plVar2[1] + uVar17 * 8)))) {
                  uVar12 = uVar12 + 1;
                  uVar17 = (ulong)((int)uVar17 + 1) % (ulong)uVar1;
                  uVar14 = *(uint *)(plVar2[2] + uVar17 * 4);
                  if ((uVar14 == 0) || (((uVar1 + (int)uVar17) - uVar14 % uVar1) % uVar1 < uVar12))
                  goto LAB_00101b80;
                }
                lVar8 = *plVar2 + uVar17 * 0x38;
                if (lVar8 == 0) goto LAB_00101b80;
                if (*(int *)(lVar8 + 0x10) < 1) {
                  _err_print_index_error
                            ("_version_get_uniform","./drivers/gles3/shader_gles3.h",0xea,0,
                             (long)*(int *)(lVar8 + 0x10),"p_which",
                             "int(spec->uniform_location.size())","",false,false);
                }
                else if (-1 < **(int **)(lVar8 + 0x18)) {
                  if (*(int *)(param_2 + 0xd0) < 1) {
                    _err_print_index_error
                              ("_version_get_uniform","./drivers/gles3/shader_gles3.h",0xe4,0,
                               (long)*(int *)(param_2 + 0xd0),"p_which","uniform_count","",false,
                               false);
LAB_00101edb:
                    uVar11 = 0xffffffff;
                  }
                  else {
                    if (*(uint *)(param_2 + 0x54) <= (uint)uVar5) {
LAB_00101f26:
                      _err_print_error("_version_get_uniform","./drivers/gles3/shader_gles3.h",0xe6,
                                       "Parameter \"version\" is null.",0);
                      goto LAB_00101edb;
                    }
                    lVar8 = ((uVar5 & 0xffffffff) % (ulong)*(uint *)(param_2 + 0x50)) * 0x80 +
                            *(long *)(*(long *)(param_2 + 0x40) +
                                     ((uVar5 & 0xffffffff) / (ulong)*(uint *)(param_2 + 0x50)) * 8);
                    if (iVar7 != *(int *)(lVar8 + 0x78)) {
                      if (*(int *)(lVar8 + 0x78) + 0x80000000U < 0x7fffffff) {
                        _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                                         "Method/function failed. Returning: nullptr",
                                         "Attempting to use an uninitialized RID",0,0);
                      }
                      goto LAB_00101f26;
                    }
                    if (*(int *)(lVar8 + 0x68) < 1) {
                      _err_print_index_error
                                ("_version_get_uniform","./drivers/gles3/shader_gles3.h",0xe7,0,
                                 (long)*(int *)(lVar8 + 0x68),"p_variant",
                                 "int(version->variants.size())","",false,false);
                      goto LAB_00101edb;
                    }
                    plVar2 = *(long **)(lVar8 + 0x70);
                    uVar1 = *(uint *)(plVar2 + 3);
                    uVar5 = uVar15 % (ulong)uVar1;
                    uVar14 = *(uint *)(plVar2[2] + uVar5 * 4);
                    if (uVar14 == 0) {
LAB_00102080:
                      _err_print_error("_version_get_uniform","./drivers/gles3/shader_gles3.h",0xe9,
                                       "Parameter \"spec\" is null.",0);
                      goto LAB_00101edb;
                    }
                    uVar12 = 0;
                    while ((uVar14 != (uint)uVar15 || (uVar10 != *(ulong *)(plVar2[1] + uVar5 * 8)))
                          ) {
                      uVar12 = uVar12 + 1;
                      uVar5 = (ulong)((int)uVar5 + 1) % (ulong)uVar1;
                      uVar14 = *(uint *)(plVar2[2] + uVar5 * 4);
                      if ((uVar14 == 0) ||
                         (((uVar1 + (int)uVar5) - uVar14 % uVar1) % uVar1 < uVar12))
                      goto LAB_00102080;
                    }
                    lVar8 = *plVar2 + uVar5 * 0x38;
                    if (lVar8 == 0) goto LAB_00102080;
                    if (*(int *)(lVar8 + 0x10) < 1) {
                      _err_print_index_error
                                ("_version_get_uniform","./drivers/gles3/shader_gles3.h",0xea,0,
                                 (long)*(int *)(lVar8 + 0x10),"p_which",
                                 "int(spec->uniform_location.size())","",false,false);
                      goto LAB_00101edb;
                    }
                    uVar11 = **(undefined4 **)(lVar8 + 0x18);
                  }
                  auVar19._4_12_ = SUB1612((undefined1  [16])0x0,4);
                  auVar19._0_4_ = (float)param_8;
                  (*pcVar3)(auVar19._0_8_,uVar11);
                }
              }
            }
LAB_001012b7:
            pcVar3 = _glad_glUniform1f;
            uVar5 = *(ulong *)(param_2 + 0x130);
            if (*(int *)(param_2 + 0xd0) < 2) {
              _err_print_index_error
                        ("_version_get_uniform","./drivers/gles3/shader_gles3.h",0xe4,1,
                         (long)*(int *)(param_2 + 0xd0),"p_which","uniform_count","",false,false);
              goto LAB_00101532;
            }
            if ((uVar5 == 0) || (*(uint *)(param_2 + 0x54) <= (uint)uVar5)) {
LAB_00101aa0:
              _err_print_error("_version_get_uniform","./drivers/gles3/shader_gles3.h",0xe6,
                               "Parameter \"version\" is null.",0,0);
            }
            else {
              lVar8 = ((uVar5 & 0xffffffff) % (ulong)*(uint *)(param_2 + 0x50)) * 0x80 +
                      *(long *)(*(long *)(param_2 + 0x40) +
                               ((uVar5 & 0xffffffff) / (ulong)*(uint *)(param_2 + 0x50)) * 8);
              iVar7 = *(int *)(lVar8 + 0x78);
              if (iVar7 != (int)(uVar5 >> 0x20)) {
                if (iVar7 + 0x80000000U < 0x7fffffff) {
                  _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                                   "Method/function failed. Returning: nullptr",
                                   "Attempting to use an uninitialized RID",0,0);
                }
                goto LAB_00101aa0;
              }
              if (*(int *)(lVar8 + 0x68) < 1) {
                _err_print_index_error
                          ("_version_get_uniform","./drivers/gles3/shader_gles3.h",0xe7,0,
                           (long)*(int *)(lVar8 + 0x68),"p_variant","int(version->variants.size())",
                           "",false,false);
                goto LAB_00101532;
              }
              plVar2 = *(long **)(lVar8 + 0x70);
              uVar1 = *(uint *)(plVar2 + 3);
              uVar17 = uVar10 * 0x3ffff - 1;
              uVar17 = (uVar17 ^ uVar17 >> 0x1f) * 0x15;
              uVar17 = (uVar17 ^ uVar17 >> 0xb) * 0x41;
              uVar17 = uVar17 >> 0x16 ^ uVar17;
              uVar15 = uVar17 & 0xffffffff;
              if ((int)uVar17 == 0) {
                uVar15 = 1;
              }
              uVar17 = uVar15 % (ulong)uVar1;
              uVar14 = *(uint *)(plVar2[2] + uVar17 * 4);
              if (uVar14 == 0) {
LAB_00101b50:
                _err_print_error("_version_get_uniform","./drivers/gles3/shader_gles3.h",0xe9,
                                 "Parameter \"spec\" is null.",0,0);
              }
              else {
                uVar12 = 0;
                while (((uint)uVar15 != uVar14 || (uVar10 != *(ulong *)(plVar2[1] + uVar17 * 8)))) {
                  uVar12 = uVar12 + 1;
                  uVar17 = (ulong)((int)uVar17 + 1) % (ulong)uVar1;
                  uVar14 = *(uint *)(plVar2[2] + uVar17 * 4);
                  if ((uVar14 == 0) || (((uVar1 + (int)uVar17) - uVar14 % uVar1) % uVar1 < uVar12))
                  goto LAB_00101b50;
                }
                lVar8 = *plVar2 + uVar17 * 0x38;
                if (lVar8 == 0) goto LAB_00101b50;
                if (*(int *)(lVar8 + 0x10) < 2) {
                  _err_print_index_error
                            ("_version_get_uniform","./drivers/gles3/shader_gles3.h",0xea,1,
                             (long)*(int *)(lVar8 + 0x10),"p_which",
                             "int(spec->uniform_location.size())","",false,false);
                }
                else if (-1 < *(int *)(*(long *)(lVar8 + 0x18) + 4)) {
                  if (*(int *)(param_2 + 0xd0) < 2) {
                    _err_print_index_error
                              ("_version_get_uniform","./drivers/gles3/shader_gles3.h",0xe4,1,
                               (long)*(int *)(param_2 + 0xd0),"p_which","uniform_count","",false,
                               false);
LAB_00101e98:
                    uVar11 = 0xffffffff;
                  }
                  else {
                    if (*(uint *)(param_2 + 0x54) <= (uint)uVar5) {
LAB_00101f8c:
                      _err_print_error("_version_get_uniform","./drivers/gles3/shader_gles3.h",0xe6,
                                       "Parameter \"version\" is null.",0,0);
                      goto LAB_00101e98;
                    }
                    lVar8 = ((uVar5 & 0xffffffff) % (ulong)*(uint *)(param_2 + 0x50)) * 0x80 +
                            *(long *)(*(long *)(param_2 + 0x40) +
                                     ((uVar5 & 0xffffffff) / (ulong)*(uint *)(param_2 + 0x50)) * 8);
                    if (iVar7 != *(int *)(lVar8 + 0x78)) {
                      if (*(int *)(lVar8 + 0x78) + 0x80000000U < 0x7fffffff) {
                        _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                                         "Method/function failed. Returning: nullptr",
                                         "Attempting to use an uninitialized RID",0,0);
                      }
                      goto LAB_00101f8c;
                    }
                    if (*(int *)(lVar8 + 0x68) < 1) {
                      _err_print_index_error
                                ("_version_get_uniform","./drivers/gles3/shader_gles3.h",0xe7,0,
                                 (long)*(int *)(lVar8 + 0x68),"p_variant",
                                 "int(version->variants.size())","",false,false);
                      goto LAB_00101e98;
                    }
                    plVar2 = *(long **)(lVar8 + 0x70);
                    uVar1 = *(uint *)(plVar2 + 3);
                    uVar5 = uVar15 % (ulong)uVar1;
                    uVar14 = *(uint *)(plVar2[2] + uVar5 * 4);
                    if (uVar14 == 0) {
LAB_00102050:
                      _err_print_error("_version_get_uniform","./drivers/gles3/shader_gles3.h",0xe9,
                                       "Parameter \"spec\" is null.",0,0);
                      goto LAB_00101e98;
                    }
                    uVar12 = 0;
                    while (((uint)uVar15 != uVar14 || (uVar10 != *(ulong *)(plVar2[1] + uVar5 * 8)))
                          ) {
                      uVar12 = uVar12 + 1;
                      uVar5 = (ulong)((int)uVar5 + 1) % (ulong)uVar1;
                      uVar14 = *(uint *)(plVar2[2] + uVar5 * 4);
                      if ((uVar14 == 0) ||
                         (((uVar1 + (int)uVar5) - uVar14 % uVar1) % uVar1 < uVar12))
                      goto LAB_00102050;
                    }
                    lVar8 = *plVar2 + uVar5 * 0x38;
                    if (lVar8 == 0) goto LAB_00102050;
                    if (*(int *)(lVar8 + 0x10) < 2) {
                      _err_print_index_error
                                ("_version_get_uniform","./drivers/gles3/shader_gles3.h",0xea,1,
                                 (long)*(int *)(lVar8 + 0x10),"p_which",
                                 "int(spec->uniform_location.size())","",false,false);
                      goto LAB_00101e98;
                    }
                    uVar11 = *(undefined4 *)(*(long *)(lVar8 + 0x18) + 4);
                  }
                  (*pcVar3)(uVar11);
                }
              }
            }
LAB_00101532:
            _draw_screen_triangle(param_2);
            if (param_7 != 0) {
              (*_glad_glActiveTexture)(0x84c1);
              (*_glad_glBindTexture)(0xde1,0);
            }
            (*_glad_glActiveTexture)(0x84c0);
            (*_glad_glTexParameteri)(iVar4,0x2800,0x2600);
            (*_glad_glTexParameteri)(iVar4,0x2801,0x2600);
            (*_glad_glBindTexture)(iVar4,0);
            (*_glad_glDisable)(0xbe2);
            (*_glad_glEnable)(0xb71);
            (*_glad_glDepthMask)(1);
            (*_glad_glUseProgram)(0);
            if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x001015f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*_glad_glBindFramebuffer)(0x8d40,(undefined4)TextureStorage::system_fbo);
              return;
            }
            goto LAB_001023d8;
          }
        }
        goto LAB_00101620;
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
    goto LAB_001023d8;
  }
  _err_print_index_error
            ("_version_bind_shader","./drivers/gles3/shader_gles3.h",0xbb,0,
             (long)*(int *)(param_2 + 0x120),"p_variant","variant_count","",false,false);
  goto LAB_0010162d;
LAB_001017a8:
  uVar12 = uVar12 + 1;
  uVar5 = (ulong)((int)uVar5 + 1) % (ulong)uVar1;
  uVar14 = *(uint *)(plVar2[2] + uVar5 * 4);
  if ((uVar14 == 0) || (((uVar1 + (int)uVar5) - uVar14 % uVar1) % uVar1 < uVar12))
  goto LAB_00101609;
  goto LAB_001017e1;
  while( true ) {
    uVar12 = uVar12 + 1;
    uVar5 = (ulong)((int)uVar5 + 1) % uVar6;
    uVar14 = *(uint *)(lVar8 + uVar5 * 4);
    if ((uVar14 == 0) || (((uVar1 + (int)uVar5) - uVar14 % uVar1) % uVar1 < uVar12)) break;
LAB_00100a63:
    if ((uVar14 == (uint)uVar17) && (*(long *)(param_2 + 0x110) == *(long *)(plVar2[1] + uVar5 * 8))
       ) {
      puVar18 = (undefined4 *)(*plVar2 + uVar5 * 0x38);
      goto LAB_00100a7d;
    }
  }
LAB_00101620:
  if (ShaderGLES3::_version_bind_shader(RID,int,unsigned_long)::first_print != '\0') {
    _err_print_error("_version_bind_shader","./drivers/gles3/shader_gles3.h",0xda,
                     "shader failed to compile, unable to bind shader.",0,1);
    ShaderGLES3::_version_bind_shader(RID,int,unsigned_long)::first_print = '\0';
  }
LAB_0010162d:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_001023d8:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* PostShaderGLES3::~PostShaderGLES3() */

void __thiscall PostShaderGLES3::~PostShaderGLES3(PostShaderGLES3 *this)

{
  *(undefined ***)this = &PTR__init_00102f30;
  ShaderGLES3::~ShaderGLES3((ShaderGLES3 *)this);
  return;
}



/* PostShaderGLES3::~PostShaderGLES3() */

void __thiscall PostShaderGLES3::~PostShaderGLES3(PostShaderGLES3 *this)

{
  *(undefined ***)this = &PTR__init_00102f30;
  ShaderGLES3::~ShaderGLES3((ShaderGLES3 *)this);
  operator_delete(this,0x130);
  return;
}



/* PostShaderGLES3::_init() */

void __thiscall PostShaderGLES3::_init(PostShaderGLES3 *this)

{
  ShaderGLES3::_setup((char *)this,
                      "layout(location = 0) in vec2 vertex_attrib;\n\n/* clang-format on */\n\nout vec2 uv_interp;\n\nvoid main() {\n\tuv_interp = vertex_attrib * 0.5 + 0.5;\n\tgl_Position = vec4(vertex_attrib, 1.0, 1.0);\n}\n\n/* clang-format off */\n"
                      ,
                      "/* clang-format on */\n\n// If we reach this code, we always tonemap.\n#define APPLY_TONEMAPPING\n\nlayout(std140) uniform TonemapData { //ubo:0\n\tfloat exposure;\n\tfloat white;\n\tint tonemapper;\n\tint pad;\n\n\tint pad2;\n\tfloat brightness;\n\tfloat contrast;\n\tfloat saturation;\n};\n\n// This expects 0-1 range input.\nvec3 linear_to_srgb(vec3 color) {\n\t//color = clamp(color, vec3(0.0), vec3(1.0));\n\t//const vec3 a = vec3(0.055f);\n\t//return mix((vec3(1.0f) + a) * pow(color.rgb, vec3(1.0f / 2.4f)) - a, 12.92f * color.rgb, lessThan(color.rgb, vec3(0.0031308f)));\n\t// Approximation from http://chilliant.blogspot.com/2012/08/srgb-approximations-for-hlsl.html\n\treturn max(vec3(1.055) * pow(color, vec3(0.416666667)) - vec3(0.055), vec3(0.0));\n}\n\n// This expects 0-1 range input, outside that range it behaves poorly.\nvec3 srgb_to_linear(vec3 color) {\n\t// Approximation from http://chilliant.blogspot.com/2012/08/srgb-approximations-for-hlsl.html\n\treturn color * (color * (color * 0.305306011 + 0.682171111) + 0.012522878);\n}\n\n#ifdef APPLY_TONEMAPPING\n\n// Based on Reinhard\'s extended formula, see equation 4 in https://doi.org/cjbgrt\nvec3 tonemap_reinhard(vec3 color, float p_white) {\n\tfloat white_squared = p_white * p_white;\n\tvec3 white_squared_color = white_squared * color;\n\t// Equivalent to color * (1 + color / white_squared) / (1 + color)\n\treturn (white_squared_color + color * color) / (white_squared_color + white_squared);\n}\n\nvec3 tonemap_filmic(vec3 color, float p_white) {\n\t// exposure bias: input scale (color *= bias, white *= bias) to make the brightness consistent with other tonemappers\n\t// also useful to scale the input to the range that the tonemapper is designed for (some require very high input values)\n\t// has no effect on the curve\'s general shape or visual properties\n\tconst float exposure_bias = 2.0f;\n\tconst float A = 0.22f * exposure_bias * exposure_bias; // bias baked into constants for performance\n\tconst float B = 0.30f * exposure_bias;\n\tconst float C = 0.10f;\n\tconst float D = 0.20f;\n\tconst float E = 0.01f;\n\tconst float F = 0.30f;\n..." /* TRUNCATED STRING LITERAL */
                      ,0x102435,(char **)0x4,0x105b40,(UBOPair *)0x1,0x105ae0,(Feedback *)0x0,
                      (int)_init()::_feedbacks,(TexUnitPair *)0x3,0x105b00,(Specialization *)0x6,
                      0x105a80,(char **)0x1);
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
    if (local_60 == 0) goto LAB_00102a25;
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
    if (local_50 == 0) goto LAB_00102a25;
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
    if (lVar12 == 0) goto LAB_00102a25;
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
LAB_00102a25:
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
/* PostShaderGLES3::~PostShaderGLES3() */

void __thiscall PostShaderGLES3::~PostShaderGLES3(PostShaderGLES3 *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}




/* GLES3::Glow::get_singleton() */

undefined8 GLES3::Glow::get_singleton(void)

{
  return singleton;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GLES3::Glow::Glow() */

void __thiscall GLES3::Glow::Glow(Glow *this)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  long local_50;
  undefined *local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  ShaderGLES3::ShaderGLES3((ShaderGLES3 *)this);
  *(undefined ***)this = &PTR__init_00104e00;
  uVar2 = _UNK_00105d08;
  uVar4 = __LC5;
  singleton = this;
  *(undefined8 *)(this + 0x148) = _LC6;
  *(undefined8 *)(this + 0x130) = 0;
  *(undefined8 *)(this + 0x150) = 0;
  *(undefined8 *)(this + 0x138) = uVar4;
  *(undefined8 *)(this + 0x140) = uVar2;
  local_48 = &_LC7;
  local_50 = 0;
  local_40 = 0;
  String::parse_latin1((StrRange *)&local_50);
  ShaderGLES3::initialize((String *)this,(int)(StrRange *)&local_50);
  lVar3 = local_50;
  if (local_50 != 0) {
    LOCK();
    plVar1 = (long *)(local_50 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_50 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  uVar4 = ShaderGLES3::version_create();
  *(undefined8 *)(this + 0x130) = uVar4;
  (*_glad_glGenBuffers)(1,this + 0x150);
  (*_glad_glBindBuffer)(0x8892,*(undefined4 *)(this + 0x150));
  local_28 = _LC9;
  local_38 = __LC8;
  uStack_34 = _UNK_00105d14;
  uStack_30 = _UNK_00105d18;
  uStack_2c = _UNK_00105d1c;
  (*_glad_glBufferData)(0x8892,0x18,&local_38,0x88e4);
  (*_glad_glBindBuffer)(0x8892,0);
  (*_glad_glGenVertexArrays)(1,this + 0x154);
  (*_glad_glBindVertexArray)(*(undefined4 *)(this + 0x154));
  (*_glad_glBindBuffer)(0x8892,*(undefined4 *)(this + 0x150));
  (*_glad_glVertexAttribPointer)(0,2,0x1406,0,8,0);
  (*_glad_glEnableVertexAttribArray)(0);
  (*_glad_glBindVertexArray)(0);
  (*_glad_glBindBuffer)(0x8892,0);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GLES3::Glow::~Glow() */

void __thiscall GLES3::Glow::~Glow(Glow *this)

{
  (*_glad_glDeleteBuffers)(1,this + 0x150);
  (*_glad_glDeleteVertexArrays)(1,this + 0x154);
  ShaderGLES3::version_free(this,*(undefined8 *)(this + 0x130));
  singleton = 0;
  *(undefined ***)this = &PTR__init_00104e00;
  ShaderGLES3::~ShaderGLES3((ShaderGLES3 *)this);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GLES3::Glow::_draw_screen_triangle() */

void __thiscall GLES3::Glow::_draw_screen_triangle(Glow *this)

{
  (*_glad_glBindVertexArray)(*(undefined4 *)(this + 0x154));
  (*_glad_glDrawArrays)(4,0,3);
                    /* WARNING: Could not recover jumptable at 0x0010027c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*_glad_glBindVertexArray)(0);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GLES3::Glow::process_glow(unsigned int, Vector2i, GLES3::Glow::GLOWLEVEL const*, unsigned int,
   bool) */

void __thiscall
GLES3::Glow::process_glow
          (Glow *this,int param_1,undefined8 param_3,int *param_4,uint param_5,char param_6)

{
  Glow *pGVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  long *plVar5;
  code *pcVar6;
  int iVar7;
  ulong uVar8;
  char *pcVar9;
  long lVar10;
  undefined8 uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  char *pcVar15;
  undefined4 uVar16;
  char *pcVar17;
  long lVar18;
  uint uVar19;
  uint uVar20;
  ulong uVar21;
  ulong uVar22;
  int *piVar23;
  undefined4 *puVar24;
  long in_FS_OFFSET;
  bool bVar25;
  undefined1 auVar26 [16];
  Specialization *local_98;
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
  if (param_1 == 0) {
    if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) goto LAB_00104233;
    uVar11 = 0x5c;
    pcVar9 = "Condition \"p_source_color == 0\" is true.";
  }
  else {
    if (param_4[0xe] != 0) {
      (*_glad_glDisable)(0xbe2);
      (*_glad_glDisable)(0xb71);
      (*_glad_glDepthMask)(0);
      (*_glad_glBindFramebuffer)(0x8d40,param_4[3]);
      (*_glad_glViewport)(0,0,*param_4,param_4[1]);
      (*_glad_glActiveTexture)(0x84c0);
      if (param_6 != '\0') {
        (*_glad_glBindTexture)(0x8c1a,param_1);
      }
      else {
        (*_glad_glBindTexture)(0xde1);
      }
      uVar14 = (ulong)(param_6 != '\0');
      lVar18 = (long)*(int *)(this + 0x120);
      uVar8 = *(ulong *)(this + 0x130);
      local_80 = uVar14;
      if (*(int *)(this + 0x120) < 1) {
        lVar10 = 0;
        goto LAB_00102435;
      }
      if (uVar8 != 0) {
        pGVar1 = this + 0x54;
        if ((uint)uVar8 < *(uint *)(this + 0x54)) {
          uVar22 = ((uVar8 & 0xffffffff) % (ulong)*(uint *)(this + 0x50)) * 0x80 +
                   *(long *)(*(long *)(this + 0x40) +
                            ((uVar8 & 0xffffffff) / (ulong)*(uint *)(this + 0x50)) * 8);
          iVar7 = *(int *)(uVar22 + 0x78);
          if (iVar7 != (int)(uVar8 >> 0x20)) goto joined_r0x00102f97;
          if ((*(int *)(uVar22 + 0x68) != 0) ||
             (ShaderGLES3::_initialize_version((Version *)this), *(int *)(uVar22 + 0x68) != 0)) {
            uVar21 = local_80;
            plVar5 = *(long **)(uVar22 + 0x70);
            uVar2 = *(uint *)(plVar5 + 3);
            uVar12 = (ulong)uVar2;
            lVar18 = plVar5[2];
            uVar8 = local_80 * 0x3ffff - 1;
            uVar8 = (uVar8 ^ uVar8 >> 0x1f) * 0x15;
            uVar8 = (uVar8 ^ uVar8 >> 0xb) * 0x41;
            uVar8 = uVar8 >> 0x16 ^ uVar8;
            uVar13 = uVar8 & 0xffffffff;
            if ((int)uVar8 == 0) {
              uVar13 = 1;
            }
            uVar8 = uVar13 % uVar12;
            uVar20 = *(uint *)(lVar18 + uVar8 * 4);
            if (uVar20 != 0) {
              uVar19 = 0;
              while ((uVar20 != (uint)uVar13 || (local_80 != *(ulong *)(plVar5[1] + uVar8 * 8)))) {
                uVar19 = uVar19 + 1;
                uVar8 = (ulong)((int)uVar8 + 1) % uVar12;
                uVar20 = *(uint *)(lVar18 + uVar8 * 4);
                if ((uVar20 == 0) || (((uVar2 + (int)uVar8) - uVar20 % uVar2) % uVar2 < uVar19))
                goto LAB_00102260;
              }
              puVar24 = (undefined4 *)(*plVar5 + uVar8 * 0x38);
              if (puVar24 != (undefined4 *)0x0) {
                if (*(char *)(puVar24 + 0xc) == '\0') goto LAB_00100574;
                uVar8 = *(long *)(this + 0x110) * 0x3ffff - 1;
                uVar8 = (uVar8 ^ uVar8 >> 0x1f) * 0x15;
                uVar8 = (uVar8 ^ uVar8 >> 0xb) * 0x41;
                uVar8 = uVar8 >> 0x16 ^ uVar8;
                uVar22 = uVar8 & 0xffffffff;
                if ((int)uVar8 == 0) {
                  uVar22 = 1;
                }
                uVar19 = 0;
                uVar8 = uVar22 % uVar12;
                uVar20 = *(uint *)(lVar18 + uVar8 * 4);
                if (uVar20 == 0) goto LAB_00102100;
                goto LAB_00100551;
              }
            }
LAB_00102260:
            local_48 = 0;
            local_78 = 0;
            local_70 = 0;
            local_68 = 0;
            local_60 = 0;
            local_58 = 0;
            local_50 = 0;
            ShaderGLES3::_compile_specialization
                      ((Specialization *)this,(uint)(Specialization *)&local_78,(Version *)0x0,
                       uVar22);
            if ((*(int *)(uVar22 + 0x68) != 0) &&
               (OAHashMap<unsigned_long,ShaderGLES3::Version::Specialization,HashMapHasherDefault,HashMapComparatorDefault<unsigned_long>>
                ::insert(*(OAHashMap<unsigned_long,ShaderGLES3::Version::Specialization,HashMapHasherDefault,HashMapComparatorDefault<unsigned_long>>
                           **)(uVar22 + 0x70),&local_80,(Specialization *)&local_78),
               *(int *)(uVar22 + 0x68) != 0)) {
              plVar5 = *(long **)(uVar22 + 0x70);
              uVar2 = *(uint *)(plVar5 + 3);
              uVar8 = uVar13 % (ulong)uVar2;
              uVar20 = *(uint *)(plVar5[2] + uVar8 * 4);
              if (uVar20 != 0) {
                uVar19 = 0;
LAB_00102351:
                if ((uVar20 != (uint)uVar13) || (uVar21 != *(ulong *)(plVar5[1] + uVar8 * 8)))
                goto LAB_00102318;
                puVar24 = (undefined4 *)(*plVar5 + uVar8 * 0x38);
                if (this[0xa0] != (Glow)0x0) {
                  ShaderGLES3::_save_to_cache((Version *)this);
                }
                ShaderGLES3::Version::Specialization::~Specialization((Specialization *)&local_78);
LAB_0010056b:
                if (puVar24 == (undefined4 *)0x0) goto LAB_00102100;
LAB_00100574:
                if (*(char *)((long)puVar24 + 0x31) == '\0') goto LAB_00102100;
                (*_glad_glUseProgram)(*puVar24);
                *(undefined4 **)(this + 0x128) = puVar24;
                pcVar6 = _glad_glUniform2f;
                uVar8 = *(ulong *)(this + 0x130);
                iVar7 = param_4[1];
                iVar3 = *param_4;
                if (*(int *)(this + 0xd0) < 2) {
                  _err_print_index_error
                            ("_version_get_uniform","./drivers/gles3/shader_gles3.h",0xe4,1,
                             (long)*(int *)(this + 0xd0),"p_which","uniform_count","",false,false);
                  goto LAB_0010084c;
                }
                if ((uVar8 == 0) || (*(uint *)(this + 0x54) <= (uint)uVar8)) {
LAB_001025e0:
                  _err_print_error("_version_get_uniform","./drivers/gles3/shader_gles3.h",0xe6,
                                   "Parameter \"version\" is null.",0);
                }
                else {
                  lVar18 = ((uVar8 & 0xffffffff) % (ulong)*(uint *)(this + 0x50)) * 0x80 +
                           *(long *)(*(long *)(this + 0x40) +
                                    ((uVar8 & 0xffffffff) / (ulong)*(uint *)(this + 0x50)) * 8);
                  iVar4 = *(int *)(lVar18 + 0x78);
                  if (iVar4 != (int)(uVar8 >> 0x20)) {
                    if (iVar4 + 0x80000000U < 0x7fffffff) {
                      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                                       "Method/function failed. Returning: nullptr",
                                       "Attempting to use an uninitialized RID",0,0);
                    }
                    goto LAB_001025e0;
                  }
                  if (*(int *)(lVar18 + 0x68) < 1) {
                    _err_print_index_error
                              ("_version_get_uniform","./drivers/gles3/shader_gles3.h",0xe7,0,
                               (long)*(int *)(lVar18 + 0x68),"p_variant",
                               "int(version->variants.size())","",false,false);
                    goto LAB_0010084c;
                  }
                  plVar5 = *(long **)(lVar18 + 0x70);
                  uVar2 = *(uint *)(plVar5 + 3);
                  uVar22 = uVar14 * 0x3ffff - 1;
                  uVar22 = (uVar22 ^ uVar22 >> 0x1f) * 0x15;
                  uVar22 = (uVar22 ^ uVar22 >> 0xb) * 0x41;
                  uVar22 = uVar22 >> 0x16 ^ uVar22;
                  uVar21 = uVar22 & 0xffffffff;
                  if ((int)uVar22 == 0) {
                    uVar21 = 1;
                  }
                  uVar22 = uVar21 % (ulong)uVar2;
                  uVar20 = *(uint *)(plVar5[2] + uVar22 * 4);
                  if (uVar20 == 0) {
LAB_00103008:
                    _err_print_error("_version_get_uniform","./drivers/gles3/shader_gles3.h",0xe9,
                                     "Parameter \"spec\" is null.",0);
                  }
                  else {
                    uVar19 = 0;
                    while ((uVar20 != (uint)uVar21 || (uVar14 != *(ulong *)(plVar5[1] + uVar22 * 8))
                           )) {
                      uVar19 = uVar19 + 1;
                      uVar22 = (ulong)((int)uVar22 + 1) % (ulong)uVar2;
                      uVar20 = *(uint *)(plVar5[2] + uVar22 * 4);
                      if ((uVar20 == 0) ||
                         (((uVar2 + (int)uVar22) - uVar20 % uVar2) % uVar2 < uVar19))
                      goto LAB_00103008;
                    }
                    lVar18 = *plVar5 + uVar22 * 0x38;
                    if (lVar18 == 0) goto LAB_00103008;
                    if (*(int *)(lVar18 + 0x10) < 2) {
                      _err_print_index_error
                                ("_version_get_uniform","./drivers/gles3/shader_gles3.h",0xea,1,
                                 (long)*(int *)(lVar18 + 0x10),"p_which",
                                 "int(spec->uniform_location.size())","",false,false);
                    }
                    else if (-1 < *(int *)(*(long *)(lVar18 + 0x18) + 4)) {
                      if (*(int *)(this + 0xd0) < 2) {
                        _err_print_index_error
                                  ("_version_get_uniform","./drivers/gles3/shader_gles3.h",0xe4,1,
                                   (long)*(int *)(this + 0xd0),"p_which","uniform_count","",false,
                                   false);
LAB_00103637:
                        uVar16 = 0xffffffff;
                      }
                      else {
                        if (*(uint *)(this + 0x54) <= (uint)uVar8) {
LAB_0010396f:
                          _err_print_error("_version_get_uniform","./drivers/gles3/shader_gles3.h",
                                           0xe6,"Parameter \"version\" is null.",0);
                          goto LAB_00103637;
                        }
                        lVar18 = ((uVar8 & 0xffffffff) % (ulong)*(uint *)(this + 0x50)) * 0x80 +
                                 *(long *)(*(long *)(this + 0x40) +
                                          ((uVar8 & 0xffffffff) / (ulong)*(uint *)(this + 0x50)) * 8
                                          );
                        if (iVar4 != *(int *)(lVar18 + 0x78)) {
                          if (*(int *)(lVar18 + 0x78) + 0x80000000U < 0x7fffffff) {
                            _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                                             "Method/function failed. Returning: nullptr",
                                             "Attempting to use an uninitialized RID",0,0);
                          }
                          goto LAB_0010396f;
                        }
                        if (*(int *)(lVar18 + 0x68) < 1) {
                          _err_print_index_error
                                    ("_version_get_uniform","./drivers/gles3/shader_gles3.h",0xe7,0,
                                     (long)*(int *)(lVar18 + 0x68),"p_variant",
                                     "int(version->variants.size())","",false,false);
                          goto LAB_00103637;
                        }
                        plVar5 = *(long **)(lVar18 + 0x70);
                        uVar2 = *(uint *)(plVar5 + 3);
                        uVar8 = uVar21 % (ulong)uVar2;
                        uVar20 = *(uint *)(plVar5[2] + uVar8 * 4);
                        if (uVar20 == 0) {
LAB_00103ed0:
                          _err_print_error("_version_get_uniform","./drivers/gles3/shader_gles3.h",
                                           0xe9,"Parameter \"spec\" is null.",0);
                          goto LAB_00103637;
                        }
                        uVar19 = 0;
                        while ((uVar20 != (uint)uVar21 ||
                               (uVar14 != *(ulong *)(plVar5[1] + uVar8 * 8)))) {
                          uVar19 = uVar19 + 1;
                          uVar8 = (ulong)((int)uVar8 + 1) % (ulong)uVar2;
                          uVar20 = *(uint *)(plVar5[2] + uVar8 * 4);
                          if ((uVar20 == 0) ||
                             (((uVar2 + (int)uVar8) - uVar20 % uVar2) % uVar2 < uVar19))
                          goto LAB_00103ed0;
                        }
                        lVar18 = *plVar5 + uVar8 * 0x38;
                        if (lVar18 == 0) goto LAB_00103ed0;
                        if (*(int *)(lVar18 + 0x10) < 2) {
                          _err_print_index_error
                                    ("_version_get_uniform","./drivers/gles3/shader_gles3.h",0xea,1,
                                     (long)*(int *)(lVar18 + 0x10),"p_which",
                                     "int(spec->uniform_location.size())","",false,false);
                          goto LAB_00103637;
                        }
                        uVar16 = *(undefined4 *)(*(long *)(lVar18 + 0x18) + 4);
                      }
                      (*pcVar6)(CONCAT44((int)((ulong)(_LC34 / (double)iVar3) >> 0x20),
                                         (float)(_LC34 / (double)iVar3)),
                                CONCAT44((int)((ulong)(_LC34 / (double)iVar7) >> 0x20),
                                         (float)(_LC34 / (double)iVar7)),uVar16);
                    }
                  }
                }
LAB_0010084c:
                pcVar6 = _glad_glUniform1f;
                uVar8 = *(ulong *)(this + 0x130);
                if (*(int *)(this + 0xd0) < 1) {
                  _err_print_index_error
                            ("_version_get_uniform","./drivers/gles3/shader_gles3.h",0xe4,0,
                             (long)*(int *)(this + 0xd0),"p_which","uniform_count","",false,false);
                  goto LAB_00100ac8;
                }
                if ((uVar8 == 0) || (*(uint *)(this + 0x54) <= (uint)uVar8)) {
LAB_00102d40:
                  _err_print_error("_version_get_uniform","./drivers/gles3/shader_gles3.h",0xe6,
                                   "Parameter \"version\" is null.",0);
                }
                else {
                  lVar18 = ((uVar8 & 0xffffffff) % (ulong)*(uint *)(this + 0x50)) * 0x80 +
                           *(long *)(*(long *)(this + 0x40) +
                                    ((uVar8 & 0xffffffff) / (ulong)*(uint *)(this + 0x50)) * 8);
                  iVar7 = *(int *)(lVar18 + 0x78);
                  if (iVar7 != (int)(uVar8 >> 0x20)) {
                    if (iVar7 + 0x80000000U < 0x7fffffff) {
                      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                                       "Method/function failed. Returning: nullptr",
                                       "Attempting to use an uninitialized RID",0,0);
                    }
                    goto LAB_00102d40;
                  }
                  if (*(int *)(lVar18 + 0x68) < 1) {
                    _err_print_index_error
                              ("_version_get_uniform","./drivers/gles3/shader_gles3.h",0xe7,0,
                               (long)*(int *)(lVar18 + 0x68),"p_variant",
                               "int(version->variants.size())","",false,false);
                    goto LAB_00100ac8;
                  }
                  plVar5 = *(long **)(lVar18 + 0x70);
                  uVar2 = *(uint *)(plVar5 + 3);
                  uVar22 = uVar14 * 0x3ffff - 1;
                  uVar22 = (uVar22 ^ uVar22 >> 0x1f) * 0x15;
                  uVar22 = (uVar22 ^ uVar22 >> 0xb) * 0x41;
                  uVar22 = uVar22 >> 0x16 ^ uVar22;
                  uVar21 = uVar22 & 0xffffffff;
                  if ((int)uVar22 == 0) {
                    uVar21 = 1;
                  }
                  uVar22 = uVar21 % (ulong)uVar2;
                  uVar20 = *(uint *)(plVar5[2] + uVar22 * 4);
                  if (uVar20 == 0) {
LAB_00102fa8:
                    _err_print_error("_version_get_uniform","./drivers/gles3/shader_gles3.h",0xe9,
                                     "Parameter \"spec\" is null.",0);
                  }
                  else {
                    uVar19 = 0;
                    while ((uVar20 != (uint)uVar21 || (uVar14 != *(ulong *)(plVar5[1] + uVar22 * 8))
                           )) {
                      uVar19 = uVar19 + 1;
                      uVar22 = (ulong)((int)uVar22 + 1) % (ulong)uVar2;
                      uVar20 = *(uint *)(plVar5[2] + uVar22 * 4);
                      if ((uVar20 == 0) ||
                         (((uVar2 + (int)uVar22) - uVar20 % uVar2) % uVar2 < uVar19))
                      goto LAB_00102fa8;
                    }
                    lVar18 = *plVar5 + uVar22 * 0x38;
                    if (lVar18 == 0) goto LAB_00102fa8;
                    if (*(int *)(lVar18 + 0x10) < 1) {
                      _err_print_index_error
                                ("_version_get_uniform","./drivers/gles3/shader_gles3.h",0xea,0,
                                 (long)*(int *)(lVar18 + 0x10),"p_which",
                                 "int(spec->uniform_location.size())","",false,false);
                    }
                    else if (-1 < **(int **)(lVar18 + 0x18)) {
                      if (*(int *)(this + 0xd0) < 1) {
                        _err_print_index_error
                                  ("_version_get_uniform","./drivers/gles3/shader_gles3.h",0xe4,0,
                                   (long)*(int *)(this + 0xd0),"p_which","uniform_count","",false,
                                   false);
LAB_0010354d:
                        uVar16 = 0xffffffff;
                      }
                      else {
                        if (*(uint *)(this + 0x54) <= (uint)uVar8) {
LAB_001039d8:
                          _err_print_error("_version_get_uniform","./drivers/gles3/shader_gles3.h",
                                           0xe6,"Parameter \"version\" is null.",0);
                          goto LAB_0010354d;
                        }
                        lVar18 = ((uVar8 & 0xffffffff) % (ulong)*(uint *)(this + 0x50)) * 0x80 +
                                 *(long *)(*(long *)(this + 0x40) +
                                          ((uVar8 & 0xffffffff) / (ulong)*(uint *)(this + 0x50)) * 8
                                          );
                        if (iVar7 != *(int *)(lVar18 + 0x78)) {
                          if (*(int *)(lVar18 + 0x78) + 0x80000000U < 0x7fffffff) {
                            _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                                             "Method/function failed. Returning: nullptr",
                                             "Attempting to use an uninitialized RID",0,0);
                          }
                          goto LAB_001039d8;
                        }
                        if (*(int *)(lVar18 + 0x68) < 1) {
                          _err_print_index_error
                                    ("_version_get_uniform","./drivers/gles3/shader_gles3.h",0xe7,0,
                                     (long)*(int *)(lVar18 + 0x68),"p_variant",
                                     "int(version->variants.size())","",false,false);
                          goto LAB_0010354d;
                        }
                        plVar5 = *(long **)(lVar18 + 0x70);
                        uVar2 = *(uint *)(plVar5 + 3);
                        uVar8 = uVar21 % (ulong)uVar2;
                        uVar20 = *(uint *)(plVar5[2] + uVar8 * 4);
                        if (uVar20 == 0) {
LAB_00103e20:
                          _err_print_error("_version_get_uniform","./drivers/gles3/shader_gles3.h",
                                           0xe9,"Parameter \"spec\" is null.",0);
                          goto LAB_0010354d;
                        }
                        uVar19 = 0;
                        while ((uVar20 != (uint)uVar21 ||
                               (uVar14 != *(ulong *)(plVar5[1] + uVar8 * 8)))) {
                          uVar19 = uVar19 + 1;
                          uVar8 = (ulong)((int)uVar8 + 1) % (ulong)uVar2;
                          uVar20 = *(uint *)(plVar5[2] + uVar8 * 4);
                          if ((uVar20 == 0) ||
                             (((uVar2 + (int)uVar8) - uVar20 % uVar2) % uVar2 < uVar19))
                          goto LAB_00103e20;
                        }
                        lVar18 = *plVar5 + uVar8 * 0x38;
                        if (lVar18 == 0) goto LAB_00103e20;
                        if (*(int *)(lVar18 + 0x10) < 1) {
                          _err_print_index_error
                                    ("_version_get_uniform","./drivers/gles3/shader_gles3.h",0xea,0,
                                     (long)*(int *)(lVar18 + 0x10),"p_which",
                                     "int(spec->uniform_location.size())","",false,false);
                          goto LAB_0010354d;
                        }
                        uVar16 = **(undefined4 **)(lVar18 + 0x18);
                      }
                      auVar26._4_12_ = SUB1612((undefined1  [16])0x0,4);
                      auVar26._0_4_ = (float)param_5;
                      (*pcVar6)(auVar26._0_8_,uVar16);
                    }
                  }
                }
LAB_00100ac8:
                pcVar6 = _glad_glUniform1f;
                uVar8 = *(ulong *)(this + 0x130);
                if (*(int *)(this + 0xd0) < 3) {
                  _err_print_index_error
                            ("_version_get_uniform","./drivers/gles3/shader_gles3.h",0xe4,2,
                             (long)*(int *)(this + 0xd0),"p_which","uniform_count","",false,false);
                  goto LAB_00100d4d;
                }
                if (uVar8 == 0) {
LAB_00102c60:
                  _err_print_error("_version_get_uniform","./drivers/gles3/shader_gles3.h",0xe6,
                                   "Parameter \"version\" is null.",0);
                }
                else {
                  if (*(uint *)(this + 0x54) <= (uint)uVar8) goto LAB_00102c60;
                  lVar18 = ((uVar8 & 0xffffffff) % (ulong)*(uint *)(this + 0x50)) * 0x80 +
                           *(long *)(*(long *)(this + 0x40) +
                                    ((uVar8 & 0xffffffff) / (ulong)*(uint *)(this + 0x50)) * 8);
                  iVar7 = *(int *)(lVar18 + 0x78);
                  if (iVar7 != (int)(uVar8 >> 0x20)) {
                    if (iVar7 + 0x80000000U < 0x7fffffff) {
                      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                                       "Method/function failed. Returning: nullptr",
                                       "Attempting to use an uninitialized RID",0,0);
                    }
                    goto LAB_00102c60;
                  }
                  if (*(int *)(lVar18 + 0x68) < 1) {
                    _err_print_index_error
                              ("_version_get_uniform","./drivers/gles3/shader_gles3.h",0xe7,0,
                               (long)*(int *)(lVar18 + 0x68),"p_variant",
                               "int(version->variants.size())","",false,false);
                    goto LAB_00100d4d;
                  }
                  plVar5 = *(long **)(lVar18 + 0x70);
                  uVar2 = *(uint *)(plVar5 + 3);
                  uVar22 = uVar14 * 0x3ffff - 1;
                  uVar22 = (uVar22 ^ uVar22 >> 0x1f) * 0x15;
                  uVar22 = (uVar22 ^ uVar22 >> 0xb) * 0x41;
                  uVar22 = uVar22 >> 0x16 ^ uVar22;
                  uVar21 = uVar22 & 0xffffffff;
                  if ((int)uVar22 == 0) {
                    uVar21 = 1;
                  }
                  uVar22 = uVar21 % (ulong)uVar2;
                  uVar20 = *(uint *)(plVar5[2] + uVar22 * 4);
                  if (uVar20 == 0) {
LAB_00103098:
                    _err_print_error("_version_get_uniform","./drivers/gles3/shader_gles3.h",0xe9,
                                     "Parameter \"spec\" is null.",0);
                  }
                  else {
                    uVar19 = 0;
                    while ((uVar20 != (uint)uVar21 || (uVar14 != *(ulong *)(plVar5[1] + uVar22 * 8))
                           )) {
                      uVar19 = uVar19 + 1;
                      uVar22 = (ulong)((int)uVar22 + 1) % (ulong)uVar2;
                      uVar20 = *(uint *)(plVar5[2] + uVar22 * 4);
                      if ((uVar20 == 0) ||
                         (((uVar2 + (int)uVar22) - uVar20 % uVar2) % uVar2 < uVar19))
                      goto LAB_00103098;
                    }
                    lVar18 = *plVar5 + uVar22 * 0x38;
                    if (lVar18 == 0) goto LAB_00103098;
                    if (*(int *)(lVar18 + 0x10) < 3) {
                      _err_print_index_error
                                ("_version_get_uniform","./drivers/gles3/shader_gles3.h",0xea,2,
                                 (long)*(int *)(lVar18 + 0x10),"p_which",
                                 "int(spec->uniform_location.size())","",false,false);
                    }
                    else if (-1 < *(int *)(*(long *)(lVar18 + 0x18) + 8)) {
                      lVar18 = (long)*(int *)(this + 0xd0);
                      if (*(int *)(this + 0xd0) < 3) {
                        lVar10 = 2;
                        iVar7 = 0xe4;
                        pcVar9 = "p_which";
                        pcVar15 = "uniform_count";
LAB_00103582:
                        _err_print_index_error
                                  ("_version_get_uniform","./drivers/gles3/shader_gles3.h",iVar7,
                                   lVar10,lVar18,pcVar9,pcVar15,"",false,false);
LAB_0010359f:
                        uVar16 = 0xffffffff;
                      }
                      else {
                        if (*(uint *)(this + 0x54) <= (uint)uVar8) {
LAB_00103a4f:
                          _err_print_error("_version_get_uniform","./drivers/gles3/shader_gles3.h",
                                           0xe6,"Parameter \"version\" is null.",0);
                          goto LAB_0010359f;
                        }
                        lVar10 = ((uVar8 & 0xffffffff) % (ulong)*(uint *)(this + 0x50)) * 0x80 +
                                 *(long *)(*(long *)(this + 0x40) +
                                          ((uVar8 & 0xffffffff) / (ulong)*(uint *)(this + 0x50)) * 8
                                          );
                        if (iVar7 != *(int *)(lVar10 + 0x78)) {
                          if (*(int *)(lVar10 + 0x78) + 0x80000000U < 0x7fffffff) {
                            _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                                             "Method/function failed. Returning: nullptr",
                                             "Attempting to use an uninitialized RID",0,0);
                          }
                          goto LAB_00103a4f;
                        }
                        lVar18 = (long)*(int *)(lVar10 + 0x68);
                        if (*(int *)(lVar10 + 0x68) < 1) {
                          lVar10 = 0;
                          iVar7 = 0xe7;
                          pcVar9 = "p_variant";
                          pcVar15 = "int(version->variants.size())";
                          goto LAB_00103582;
                        }
                        plVar5 = *(long **)(lVar10 + 0x70);
                        uVar2 = *(uint *)(plVar5 + 3);
                        uVar8 = uVar21 % (ulong)uVar2;
                        uVar20 = *(uint *)(plVar5[2] + uVar8 * 4);
                        if (uVar20 == 0) {
LAB_00103e50:
                          _err_print_error("_version_get_uniform","./drivers/gles3/shader_gles3.h",
                                           0xe9,"Parameter \"spec\" is null.",0);
                          goto LAB_0010359f;
                        }
                        uVar19 = 0;
                        while ((uVar20 != (uint)uVar21 ||
                               (uVar14 != *(ulong *)(plVar5[1] + uVar8 * 8)))) {
                          uVar19 = uVar19 + 1;
                          uVar8 = (ulong)((int)uVar8 + 1) % (ulong)uVar2;
                          uVar20 = *(uint *)(plVar5[2] + uVar8 * 4);
                          if ((uVar20 == 0) ||
                             (((uVar2 + (int)uVar8) - uVar20 % uVar2) % uVar2 < uVar19))
                          goto LAB_00103e50;
                        }
                        lVar10 = *plVar5 + uVar8 * 0x38;
                        if (lVar10 == 0) goto LAB_00103e50;
                        lVar18 = (long)*(int *)(lVar10 + 0x10);
                        if (*(int *)(lVar10 + 0x10) < 3) {
                          lVar10 = 2;
                          iVar7 = 0xea;
                          pcVar9 = "p_which";
                          pcVar15 = "int(spec->uniform_location.size())";
                          goto LAB_00103582;
                        }
                        uVar16 = *(undefined4 *)(*(long *)(lVar10 + 0x18) + 8);
                      }
                      (*pcVar6)(uVar16);
                    }
                  }
                }
LAB_00100d4d:
                pcVar6 = _glad_glUniform1f;
                uVar8 = *(ulong *)(this + 0x130);
                if (*(int *)(this + 0xd0) < 4) {
                  _err_print_index_error
                            ("_version_get_uniform","./drivers/gles3/shader_gles3.h",0xe4,3,
                             (long)*(int *)(this + 0xd0),"p_which","uniform_count","",false,false);
                  goto LAB_00100fcd;
                }
                if (uVar8 == 0) {
LAB_00102cd0:
                  _err_print_error("_version_get_uniform","./drivers/gles3/shader_gles3.h",0xe6,
                                   "Parameter \"version\" is null.",0);
                }
                else {
                  if (*(uint *)(this + 0x54) <= (uint)uVar8) goto LAB_00102cd0;
                  lVar18 = ((uVar8 & 0xffffffff) % (ulong)*(uint *)(this + 0x50)) * 0x80 +
                           *(long *)(*(long *)(this + 0x40) +
                                    ((uVar8 & 0xffffffff) / (ulong)*(uint *)(this + 0x50)) * 8);
                  iVar7 = *(int *)(lVar18 + 0x78);
                  if (iVar7 != (int)(uVar8 >> 0x20)) {
                    if (iVar7 + 0x80000000U < 0x7fffffff) {
                      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                                       "Method/function failed. Returning: nullptr",
                                       "Attempting to use an uninitialized RID",0,0);
                    }
                    goto LAB_00102cd0;
                  }
                  if (*(int *)(lVar18 + 0x68) < 1) {
                    _err_print_index_error
                              ("_version_get_uniform","./drivers/gles3/shader_gles3.h",0xe7,0,
                               (long)*(int *)(lVar18 + 0x68),"p_variant",
                               "int(version->variants.size())","",false,false);
                    goto LAB_00100fcd;
                  }
                  plVar5 = *(long **)(lVar18 + 0x70);
                  uVar2 = *(uint *)(plVar5 + 3);
                  uVar22 = uVar14 * 0x3ffff - 1;
                  uVar22 = (uVar22 ^ uVar22 >> 0x1f) * 0x15;
                  uVar22 = (uVar22 ^ uVar22 >> 0xb) * 0x41;
                  uVar22 = uVar22 >> 0x16 ^ uVar22;
                  uVar21 = uVar22 & 0xffffffff;
                  if ((int)uVar22 == 0) {
                    uVar21 = 1;
                  }
                  uVar22 = uVar21 % (ulong)uVar2;
                  uVar20 = *(uint *)(plVar5[2] + uVar22 * 4);
                  if (uVar20 == 0) {
LAB_00103068:
                    _err_print_error("_version_get_uniform","./drivers/gles3/shader_gles3.h",0xe9,
                                     "Parameter \"spec\" is null.",0);
                  }
                  else {
                    uVar19 = 0;
                    while ((uVar20 != (uint)uVar21 || (uVar14 != *(ulong *)(plVar5[1] + uVar22 * 8))
                           )) {
                      uVar19 = uVar19 + 1;
                      uVar22 = (ulong)((int)uVar22 + 1) % (ulong)uVar2;
                      uVar20 = *(uint *)(plVar5[2] + uVar22 * 4);
                      if ((uVar20 == 0) ||
                         (((uVar2 + (int)uVar22) - uVar20 % uVar2) % uVar2 < uVar19))
                      goto LAB_00103068;
                    }
                    lVar18 = *plVar5 + uVar22 * 0x38;
                    if (lVar18 == 0) goto LAB_00103068;
                    if (*(int *)(lVar18 + 0x10) < 4) {
                      _err_print_index_error
                                ("_version_get_uniform","./drivers/gles3/shader_gles3.h",0xea,3,
                                 (long)*(int *)(lVar18 + 0x10),"p_which",
                                 "int(spec->uniform_location.size())","",false,false);
                    }
                    else if (-1 < *(int *)(*(long *)(lVar18 + 0x18) + 0xc)) {
                      lVar18 = (long)*(int *)(this + 0xd0);
                      if (*(int *)(this + 0xd0) < 4) {
                        lVar10 = 3;
                        iVar7 = 0xe4;
                        pcVar9 = "p_which";
                        pcVar15 = "uniform_count";
LAB_0010366c:
                        _err_print_index_error
                                  ("_version_get_uniform","./drivers/gles3/shader_gles3.h",iVar7,
                                   lVar10,lVar18,pcVar9,pcVar15,"",false,false);
LAB_00103689:
                        uVar16 = 0xffffffff;
                      }
                      else {
                        if (*(uint *)(this + 0x54) <= (uint)uVar8) {
LAB_00103ad2:
                          _err_print_error("_version_get_uniform","./drivers/gles3/shader_gles3.h",
                                           0xe6,"Parameter \"version\" is null.",0);
                          goto LAB_00103689;
                        }
                        lVar10 = ((uVar8 & 0xffffffff) % (ulong)*(uint *)(this + 0x50)) * 0x80 +
                                 *(long *)(*(long *)(this + 0x40) +
                                          ((uVar8 & 0xffffffff) / (ulong)*(uint *)(this + 0x50)) * 8
                                          );
                        if (iVar7 != *(int *)(lVar10 + 0x78)) {
                          if (*(int *)(lVar10 + 0x78) + 0x80000000U < 0x7fffffff) {
                            _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                                             "Method/function failed. Returning: nullptr",
                                             "Attempting to use an uninitialized RID",0,0);
                          }
                          goto LAB_00103ad2;
                        }
                        lVar18 = (long)*(int *)(lVar10 + 0x68);
                        if (*(int *)(lVar10 + 0x68) < 1) {
                          lVar10 = 0;
                          iVar7 = 0xe7;
                          pcVar9 = "p_variant";
                          pcVar15 = "int(version->variants.size())";
                          goto LAB_0010366c;
                        }
                        plVar5 = *(long **)(lVar10 + 0x70);
                        uVar2 = *(uint *)(plVar5 + 3);
                        uVar8 = uVar21 % (ulong)uVar2;
                        uVar20 = *(uint *)(plVar5[2] + uVar8 * 4);
                        if (uVar20 == 0) {
LAB_00103de0:
                          _err_print_error("_version_get_uniform","./drivers/gles3/shader_gles3.h",
                                           0xe9,"Parameter \"spec\" is null.",0);
                          goto LAB_00103689;
                        }
                        uVar19 = 0;
                        while ((uVar20 != (uint)uVar21 ||
                               (uVar14 != *(ulong *)(plVar5[1] + uVar8 * 8)))) {
                          uVar19 = uVar19 + 1;
                          uVar8 = (ulong)((int)uVar8 + 1) % (ulong)uVar2;
                          uVar20 = *(uint *)(plVar5[2] + uVar8 * 4);
                          if ((uVar20 == 0) ||
                             (((uVar2 + (int)uVar8) - uVar20 % uVar2) % uVar2 < uVar19))
                          goto LAB_00103de0;
                        }
                        lVar10 = *plVar5 + uVar8 * 0x38;
                        if (lVar10 == 0) goto LAB_00103de0;
                        lVar18 = (long)*(int *)(lVar10 + 0x10);
                        if (*(int *)(lVar10 + 0x10) < 4) {
                          lVar10 = 3;
                          iVar7 = 0xea;
                          pcVar9 = "p_which";
                          pcVar15 = "int(spec->uniform_location.size())";
                          goto LAB_0010366c;
                        }
                        uVar16 = *(undefined4 *)(*(long *)(lVar10 + 0x18) + 0xc);
                      }
                      (*pcVar6)(uVar16);
                    }
                  }
                }
LAB_00100fcd:
                pcVar6 = _glad_glUniform1f;
                uVar8 = *(ulong *)(this + 0x130);
                if (*(int *)(this + 0xd0) < 5) {
                  _err_print_index_error
                            ("_version_get_uniform","./drivers/gles3/shader_gles3.h",0xe4,4,
                             (long)*(int *)(this + 0xd0),"p_which","uniform_count","",false,false);
                  goto LAB_0010124d;
                }
                if ((uVar8 == 0) || (*(uint *)(this + 0x54) <= (uint)uVar8)) {
LAB_00102b80:
                  _err_print_error("_version_get_uniform","./drivers/gles3/shader_gles3.h",0xe6,
                                   "Parameter \"version\" is null.",0);
                }
                else {
                  lVar18 = ((uVar8 & 0xffffffff) % (ulong)*(uint *)(this + 0x50)) * 0x80 +
                           *(long *)(*(long *)(this + 0x40) +
                                    ((uVar8 & 0xffffffff) / (ulong)*(uint *)(this + 0x50)) * 8);
                  iVar7 = *(int *)(lVar18 + 0x78);
                  if (iVar7 != (int)(uVar8 >> 0x20)) {
                    if (iVar7 + 0x80000000U < 0x7fffffff) {
                      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                                       "Method/function failed. Returning: nullptr",
                                       "Attempting to use an uninitialized RID",0,0);
                    }
                    goto LAB_00102b80;
                  }
                  if (*(int *)(lVar18 + 0x68) < 1) {
                    _err_print_index_error
                              ("_version_get_uniform","./drivers/gles3/shader_gles3.h",0xe7,0,
                               (long)*(int *)(lVar18 + 0x68),"p_variant",
                               "int(version->variants.size())","",false,false);
                    goto LAB_0010124d;
                  }
                  plVar5 = *(long **)(lVar18 + 0x70);
                  uVar2 = *(uint *)(plVar5 + 3);
                  uVar22 = uVar14 * 0x3ffff - 1;
                  uVar22 = (uVar22 ^ uVar22 >> 0x1f) * 0x15;
                  uVar22 = (uVar22 ^ uVar22 >> 0xb) * 0x41;
                  uVar22 = uVar22 >> 0x16 ^ uVar22;
                  uVar21 = uVar22 & 0xffffffff;
                  if ((int)uVar22 == 0) {
                    uVar21 = 1;
                  }
                  uVar22 = uVar21 % (ulong)uVar2;
                  uVar20 = *(uint *)(plVar5[2] + uVar22 * 4);
                  if (uVar20 == 0) {
LAB_00103038:
                    _err_print_error("_version_get_uniform","./drivers/gles3/shader_gles3.h",0xe9,
                                     "Parameter \"spec\" is null.",0);
                  }
                  else {
                    uVar19 = 0;
                    while ((uVar20 != (uint)uVar21 || (uVar14 != *(ulong *)(plVar5[1] + uVar22 * 8))
                           )) {
                      uVar19 = uVar19 + 1;
                      uVar22 = (ulong)((int)uVar22 + 1) % (ulong)uVar2;
                      uVar20 = *(uint *)(plVar5[2] + uVar22 * 4);
                      if ((uVar20 == 0) ||
                         (((uVar2 + (int)uVar22) - uVar20 % uVar2) % uVar2 < uVar19))
                      goto LAB_00103038;
                    }
                    lVar18 = *plVar5 + uVar22 * 0x38;
                    if (lVar18 == 0) goto LAB_00103038;
                    if (*(int *)(lVar18 + 0x10) < 5) {
                      _err_print_index_error
                                ("_version_get_uniform","./drivers/gles3/shader_gles3.h",0xea,4,
                                 (long)*(int *)(lVar18 + 0x10),"p_which",
                                 "int(spec->uniform_location.size())","",false,false);
                    }
                    else if (-1 < *(int *)(*(long *)(lVar18 + 0x18) + 0x10)) {
                      lVar18 = (long)*(int *)(this + 0xd0);
                      if (*(int *)(this + 0xd0) < 5) {
                        lVar10 = 4;
                        iVar7 = 0xe4;
                        pcVar9 = "p_which";
                        pcVar15 = "uniform_count";
LAB_00103710:
                        _err_print_index_error
                                  ("_version_get_uniform","./drivers/gles3/shader_gles3.h",iVar7,
                                   lVar10,lVar18,pcVar9,pcVar15,"",false,false);
LAB_0010372d:
                        uVar16 = 0xffffffff;
                      }
                      else {
                        if (*(uint *)(this + 0x54) <= (uint)uVar8) {
LAB_00103875:
                          _err_print_error("_version_get_uniform","./drivers/gles3/shader_gles3.h",
                                           0xe6,"Parameter \"version\" is null.",0);
                          goto LAB_0010372d;
                        }
                        lVar10 = ((uVar8 & 0xffffffff) % (ulong)*(uint *)(this + 0x50)) * 0x80 +
                                 *(long *)(*(long *)(this + 0x40) +
                                          ((uVar8 & 0xffffffff) / (ulong)*(uint *)(this + 0x50)) * 8
                                          );
                        if (iVar7 != *(int *)(lVar10 + 0x78)) {
                          if (*(int *)(lVar10 + 0x78) + 0x80000000U < 0x7fffffff) {
                            _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                                             "Method/function failed. Returning: nullptr",
                                             "Attempting to use an uninitialized RID",0,0);
                          }
                          goto LAB_00103875;
                        }
                        lVar18 = (long)*(int *)(lVar10 + 0x68);
                        if (*(int *)(lVar10 + 0x68) < 1) {
                          lVar10 = 0;
                          iVar7 = 0xe7;
                          pcVar9 = "p_variant";
                          pcVar15 = "int(version->variants.size())";
                          goto LAB_00103710;
                        }
                        plVar5 = *(long **)(lVar10 + 0x70);
                        uVar2 = *(uint *)(plVar5 + 3);
                        uVar8 = uVar21 % (ulong)uVar2;
                        uVar20 = *(uint *)(plVar5[2] + uVar8 * 4);
                        if (uVar20 == 0) {
LAB_00103f00:
                          _err_print_error("_version_get_uniform","./drivers/gles3/shader_gles3.h",
                                           0xe9,"Parameter \"spec\" is null.",0);
                          goto LAB_0010372d;
                        }
                        uVar19 = 0;
                        while ((uVar20 != (uint)uVar21 ||
                               (uVar14 != *(ulong *)(plVar5[1] + uVar8 * 8)))) {
                          uVar19 = uVar19 + 1;
                          uVar8 = (ulong)((int)uVar8 + 1) % (ulong)uVar2;
                          uVar20 = *(uint *)(plVar5[2] + uVar8 * 4);
                          if ((uVar20 == 0) ||
                             (((uVar2 + (int)uVar8) - uVar20 % uVar2) % uVar2 < uVar19))
                          goto LAB_00103f00;
                        }
                        lVar10 = *plVar5 + uVar8 * 0x38;
                        if (lVar10 == 0) goto LAB_00103f00;
                        lVar18 = (long)*(int *)(lVar10 + 0x10);
                        if (*(int *)(lVar10 + 0x10) < 5) {
                          lVar10 = 4;
                          iVar7 = 0xea;
                          pcVar9 = "p_which";
                          pcVar15 = "int(spec->uniform_location.size())";
                          goto LAB_00103710;
                        }
                        uVar16 = *(undefined4 *)(*(long *)(lVar10 + 0x18) + 0x10);
                      }
                      (*pcVar6)(uVar16);
                    }
                  }
                }
LAB_0010124d:
                pcVar6 = _glad_glUniform1f;
                uVar8 = *(ulong *)(this + 0x130);
                if (*(int *)(this + 0xd0) < 6) {
                  _err_print_index_error
                            ("_version_get_uniform","./drivers/gles3/shader_gles3.h",0xe4,5,
                             (long)*(int *)(this + 0xd0),"p_which","uniform_count","",false,false);
                  goto LAB_001014cd;
                }
                if ((uVar8 == 0) || (*(uint *)(this + 0x54) <= (uint)uVar8)) {
LAB_00102bf0:
                  _err_print_error("_version_get_uniform","./drivers/gles3/shader_gles3.h",0xe6,
                                   "Parameter \"version\" is null.",0);
                }
                else {
                  lVar18 = ((uVar8 & 0xffffffff) % (ulong)*(uint *)(this + 0x50)) * 0x80 +
                           *(long *)(*(long *)(this + 0x40) +
                                    ((uVar8 & 0xffffffff) / (ulong)*(uint *)(this + 0x50)) * 8);
                  iVar7 = *(int *)(lVar18 + 0x78);
                  if (iVar7 != (int)(uVar8 >> 0x20)) {
                    if (iVar7 + 0x80000000U < 0x7fffffff) {
                      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                                       "Method/function failed. Returning: nullptr",
                                       "Attempting to use an uninitialized RID",0,0);
                    }
                    goto LAB_00102bf0;
                  }
                  if (*(int *)(lVar18 + 0x68) < 1) {
                    _err_print_index_error
                              ("_version_get_uniform","./drivers/gles3/shader_gles3.h",0xe7,0,
                               (long)*(int *)(lVar18 + 0x68),"p_variant",
                               "int(version->variants.size())","",false,false);
                    goto LAB_001014cd;
                  }
                  plVar5 = *(long **)(lVar18 + 0x70);
                  uVar2 = *(uint *)(plVar5 + 3);
                  uVar22 = uVar14 * 0x3ffff - 1;
                  uVar22 = (uVar22 ^ uVar22 >> 0x1f) * 0x15;
                  uVar22 = (uVar22 ^ uVar22 >> 0xb) * 0x41;
                  uVar22 = uVar22 >> 0x16 ^ uVar22;
                  uVar21 = uVar22 & 0xffffffff;
                  if ((int)uVar22 == 0) {
                    uVar21 = 1;
                  }
                  uVar22 = uVar21 % (ulong)uVar2;
                  uVar20 = *(uint *)(plVar5[2] + uVar22 * 4);
                  if (uVar20 == 0) {
LAB_001030c8:
                    _err_print_error("_version_get_uniform","./drivers/gles3/shader_gles3.h",0xe9,
                                     "Parameter \"spec\" is null.",0);
                  }
                  else {
                    uVar19 = 0;
                    while ((uVar20 != (uint)uVar21 || (uVar14 != *(ulong *)(plVar5[1] + uVar22 * 8))
                           )) {
                      uVar19 = uVar19 + 1;
                      uVar22 = (ulong)((int)uVar22 + 1) % (ulong)uVar2;
                      uVar20 = *(uint *)(plVar5[2] + uVar22 * 4);
                      if ((uVar20 == 0) ||
                         (((uVar2 + (int)uVar22) - uVar20 % uVar2) % uVar2 < uVar19))
                      goto LAB_001030c8;
                    }
                    lVar18 = *plVar5 + uVar22 * 0x38;
                    if (lVar18 == 0) goto LAB_001030c8;
                    if (*(int *)(lVar18 + 0x10) < 6) {
                      _err_print_index_error
                                ("_version_get_uniform","./drivers/gles3/shader_gles3.h",0xea,5,
                                 (long)*(int *)(lVar18 + 0x10),"p_which",
                                 "int(spec->uniform_location.size())","",false,false);
                    }
                    else if (-1 < *(int *)(*(long *)(lVar18 + 0x18) + 0x14)) {
                      lVar18 = (long)*(int *)(this + 0xd0);
                      if (*(int *)(this + 0xd0) < 6) {
                        lVar10 = 5;
                        iVar7 = 0xe4;
                        pcVar9 = "p_which";
                        pcVar15 = "uniform_count";
LAB_001035d4:
                        _err_print_index_error
                                  ("_version_get_uniform","./drivers/gles3/shader_gles3.h",iVar7,
                                   lVar10,lVar18,pcVar9,pcVar15,"",false,false);
LAB_001035f1:
                        uVar16 = 0xffffffff;
                      }
                      else {
                        if (*(uint *)(this + 0x54) <= (uint)uVar8) {
LAB_001038f8:
                          _err_print_error("_version_get_uniform","./drivers/gles3/shader_gles3.h",
                                           0xe6,"Parameter \"version\" is null.",0);
                          goto LAB_001035f1;
                        }
                        lVar10 = ((uVar8 & 0xffffffff) % (ulong)*(uint *)(this + 0x50)) * 0x80 +
                                 *(long *)(*(long *)(this + 0x40) +
                                          ((uVar8 & 0xffffffff) / (ulong)*(uint *)(this + 0x50)) * 8
                                          );
                        if (iVar7 != *(int *)(lVar10 + 0x78)) {
                          if (*(int *)(lVar10 + 0x78) + 0x80000000U < 0x7fffffff) {
                            _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                                             "Method/function failed. Returning: nullptr",
                                             "Attempting to use an uninitialized RID",0,0);
                          }
                          goto LAB_001038f8;
                        }
                        lVar18 = (long)*(int *)(lVar10 + 0x68);
                        if (*(int *)(lVar10 + 0x68) < 1) {
                          lVar10 = 0;
                          iVar7 = 0xe7;
                          pcVar9 = "p_variant";
                          pcVar15 = "int(version->variants.size())";
                          goto LAB_001035d4;
                        }
                        plVar5 = *(long **)(lVar10 + 0x70);
                        uVar2 = *(uint *)(plVar5 + 3);
                        uVar8 = uVar21 % (ulong)uVar2;
                        uVar20 = *(uint *)(plVar5[2] + uVar8 * 4);
                        if (uVar20 == 0) {
LAB_00103f40:
                          _err_print_error("_version_get_uniform","./drivers/gles3/shader_gles3.h",
                                           0xe9,"Parameter \"spec\" is null.",0);
                          goto LAB_001035f1;
                        }
                        uVar19 = 0;
                        while ((uVar20 != (uint)uVar21 ||
                               (uVar14 != *(ulong *)(plVar5[1] + uVar8 * 8)))) {
                          uVar19 = uVar19 + 1;
                          uVar8 = (ulong)((int)uVar8 + 1) % (ulong)uVar2;
                          uVar20 = *(uint *)(plVar5[2] + uVar8 * 4);
                          if ((uVar20 == 0) ||
                             (((uVar2 + (int)uVar8) - uVar20 % uVar2) % uVar2 < uVar19))
                          goto LAB_00103f40;
                        }
                        lVar10 = *plVar5 + uVar8 * 0x38;
                        if (lVar10 == 0) goto LAB_00103f40;
                        lVar18 = (long)*(int *)(lVar10 + 0x10);
                        if (*(int *)(lVar10 + 0x10) < 6) {
                          lVar10 = 5;
                          iVar7 = 0xea;
                          pcVar9 = "p_which";
                          pcVar15 = "int(spec->uniform_location.size())";
                          goto LAB_001035d4;
                        }
                        uVar16 = *(undefined4 *)(*(long *)(lVar10 + 0x18) + 0x14);
                      }
                      (*pcVar6)(uVar16);
                    }
                  }
                }
LAB_001014cd:
                pcVar6 = _glad_glUniform1f;
                uVar8 = *(ulong *)(this + 0x130);
                if (*(int *)(this + 0xd0) < 7) {
                  _err_print_index_error
                            ("_version_get_uniform","./drivers/gles3/shader_gles3.h",0xe4,6,
                             (long)*(int *)(this + 0xd0),"p_which","uniform_count","",false,false);
                  goto LAB_0010174d;
                }
                if ((uVar8 == 0) || (*(uint *)(this + 0x54) <= (uint)uVar8)) {
LAB_00102b10:
                  _err_print_error("_version_get_uniform","./drivers/gles3/shader_gles3.h",0xe6,
                                   "Parameter \"version\" is null.",0);
                }
                else {
                  lVar18 = ((uVar8 & 0xffffffff) % (ulong)*(uint *)(this + 0x50)) * 0x80 +
                           *(long *)(*(long *)(this + 0x40) +
                                    ((uVar8 & 0xffffffff) / (ulong)*(uint *)(this + 0x50)) * 8);
                  iVar7 = *(int *)(lVar18 + 0x78);
                  if (iVar7 != (int)(uVar8 >> 0x20)) {
                    if (iVar7 + 0x80000000U < 0x7fffffff) {
                      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                                       "Method/function failed. Returning: nullptr",
                                       "Attempting to use an uninitialized RID",0,0);
                    }
                    goto LAB_00102b10;
                  }
                  if (*(int *)(lVar18 + 0x68) < 1) {
                    _err_print_index_error
                              ("_version_get_uniform","./drivers/gles3/shader_gles3.h",0xe7,0,
                               (long)*(int *)(lVar18 + 0x68),"p_variant",
                               "int(version->variants.size())","",false,false);
                    goto LAB_0010174d;
                  }
                  plVar5 = *(long **)(lVar18 + 0x70);
                  uVar2 = *(uint *)(plVar5 + 3);
                  uVar22 = uVar14 * 0x3ffff - 1;
                  uVar22 = (uVar22 ^ uVar22 >> 0x1f) * 0x15;
                  uVar22 = (uVar22 ^ uVar22 >> 0xb) * 0x41;
                  uVar22 = uVar22 >> 0x16 ^ uVar22;
                  uVar21 = uVar22 & 0xffffffff;
                  if ((int)uVar22 == 0) {
                    uVar21 = 1;
                  }
                  uVar22 = uVar21 % (ulong)uVar2;
                  uVar20 = *(uint *)(plVar5[2] + uVar22 * 4);
                  if (uVar20 == 0) {
LAB_00102fd8:
                    _err_print_error("_version_get_uniform","./drivers/gles3/shader_gles3.h",0xe9,
                                     "Parameter \"spec\" is null.",0);
                  }
                  else {
                    uVar19 = 0;
                    while (((uint)uVar21 != uVar20 || (uVar14 != *(ulong *)(plVar5[1] + uVar22 * 8))
                           )) {
                      uVar19 = uVar19 + 1;
                      uVar22 = (ulong)((int)uVar22 + 1) % (ulong)uVar2;
                      uVar20 = *(uint *)(plVar5[2] + uVar22 * 4);
                      if ((uVar20 == 0) ||
                         (((uVar2 + (int)uVar22) - uVar20 % uVar2) % uVar2 < uVar19))
                      goto LAB_00102fd8;
                    }
                    lVar18 = *plVar5 + uVar22 * 0x38;
                    if (lVar18 == 0) goto LAB_00102fd8;
                    if (*(int *)(lVar18 + 0x10) < 7) {
                      _err_print_index_error
                                ("_version_get_uniform","./drivers/gles3/shader_gles3.h",0xea,6,
                                 (long)*(int *)(lVar18 + 0x10),"p_which",
                                 "int(spec->uniform_location.size())","",false,false);
                    }
                    else if (-1 < *(int *)(*(long *)(lVar18 + 0x18) + 0x18)) {
                      lVar18 = (long)*(int *)(this + 0xd0);
                      if (*(int *)(this + 0xd0) < 7) {
                        lVar10 = 6;
                        iVar7 = 0xe4;
                        pcVar9 = "p_which";
                        pcVar15 = "uniform_count";
LAB_001036be:
                        _err_print_index_error
                                  ("_version_get_uniform","./drivers/gles3/shader_gles3.h",iVar7,
                                   lVar10,lVar18,pcVar9,pcVar15,"",false,false);
LAB_001036db:
                        uVar16 = 0xffffffff;
                      }
                      else {
                        if (*(uint *)(this + 0x54) <= (uint)uVar8) {
LAB_00103b53:
                          _err_print_error("_version_get_uniform","./drivers/gles3/shader_gles3.h",
                                           0xe6,"Parameter \"version\" is null.",0);
                          goto LAB_001036db;
                        }
                        lVar10 = ((uVar8 & 0xffffffff) % (ulong)*(uint *)(this + 0x50)) * 0x80 +
                                 *(long *)(*(long *)(this + 0x40) +
                                          ((uVar8 & 0xffffffff) / (ulong)*(uint *)(this + 0x50)) * 8
                                          );
                        if (iVar7 != *(int *)(lVar10 + 0x78)) {
                          if (*(int *)(lVar10 + 0x78) + 0x80000000U < 0x7fffffff) {
                            _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                                             "Method/function failed. Returning: nullptr",
                                             "Attempting to use an uninitialized RID",0,0);
                          }
                          goto LAB_00103b53;
                        }
                        lVar18 = (long)*(int *)(lVar10 + 0x68);
                        if (*(int *)(lVar10 + 0x68) < 1) {
                          lVar10 = 0;
                          iVar7 = 0xe7;
                          pcVar9 = "p_variant";
                          pcVar15 = "int(version->variants.size())";
                          goto LAB_001036be;
                        }
                        plVar5 = *(long **)(lVar10 + 0x70);
                        uVar2 = *(uint *)(plVar5 + 3);
                        uVar8 = uVar21 % (ulong)uVar2;
                        uVar20 = *(uint *)(plVar5[2] + uVar8 * 4);
                        if (uVar20 == 0) {
LAB_00103e90:
                          _err_print_error("_version_get_uniform","./drivers/gles3/shader_gles3.h",
                                           0xe9,"Parameter \"spec\" is null.",0);
                          goto LAB_001036db;
                        }
                        uVar19 = 0;
                        while ((uVar20 != (uint)uVar21 ||
                               (uVar14 != *(ulong *)(plVar5[1] + uVar8 * 8)))) {
                          uVar19 = uVar19 + 1;
                          uVar8 = (ulong)((int)uVar8 + 1) % (ulong)uVar2;
                          uVar20 = *(uint *)(plVar5[2] + uVar8 * 4);
                          if ((uVar20 == 0) ||
                             (((uVar2 + (int)uVar8) - uVar20 % uVar2) % uVar2 < uVar19))
                          goto LAB_00103e90;
                        }
                        lVar10 = *plVar5 + uVar8 * 0x38;
                        if (lVar10 == 0) goto LAB_00103e90;
                        lVar18 = (long)*(int *)(lVar10 + 0x10);
                        if (*(int *)(lVar10 + 0x10) < 7) {
                          lVar10 = 6;
                          iVar7 = 0xea;
                          pcVar9 = "p_which";
                          pcVar15 = "int(spec->uniform_location.size())";
                          goto LAB_001036be;
                        }
                        uVar16 = *(undefined4 *)(*(long *)(lVar10 + 0x18) + 0x18);
                      }
                      (*pcVar6)(uVar16);
                    }
                  }
                }
LAB_0010174d:
                _draw_screen_triangle(this);
                lVar18 = (long)*(int *)(this + 0x120);
                local_80 = 0;
                uVar8 = *(ulong *)(this + 0x130);
                if (*(int *)(this + 0x120) < 2) {
                  lVar10 = 1;
                  goto LAB_00102435;
                }
                if ((uVar8 == 0) || (*(uint *)(this + 0x54) <= (uint)uVar8)) goto LAB_00102210;
                uVar14 = ((uVar8 & 0xffffffff) % (ulong)*(uint *)(this + 0x50)) * 0x80 +
                         *(long *)(*(long *)(this + 0x40) +
                                  ((uVar8 & 0xffffffff) / (ulong)*(uint *)(this + 0x50)) * 8);
                iVar7 = *(int *)(uVar14 + 0x78);
                if (iVar7 != (int)(uVar8 >> 0x20)) goto LAB_00102f8d;
                uVar2 = *(uint *)(uVar14 + 0x68);
                if (uVar2 == 0) {
                  ShaderGLES3::_initialize_version((Version *)this);
                  uVar2 = *(uint *)(uVar14 + 0x68);
                }
                uVar8 = local_80;
                uVar22 = (ulong)uVar2;
                if (uVar2 < 2) goto LAB_0010287e;
                lVar18 = *(long *)(uVar14 + 0x70);
                uVar2 = *(uint *)(lVar18 + 0x38);
                uVar21 = (ulong)uVar2;
                lVar10 = *(long *)(lVar18 + 0x30);
                uVar22 = local_80 * 0x3ffff - 1;
                uVar22 = (uVar22 ^ uVar22 >> 0x1f) * 0x15;
                uVar22 = (uVar22 ^ uVar22 >> 0xb) * 0x41;
                uVar22 = uVar22 >> 0x16 ^ uVar22;
                uVar12 = uVar22 & 0xffffffff;
                if ((int)uVar22 == 0) {
                  uVar12 = 1;
                }
                uVar22 = uVar12 % uVar21;
                uVar20 = *(uint *)(lVar10 + uVar22 * 4);
                if (uVar20 == 0) {
LAB_00102680:
                  local_48 = 0;
                  local_78 = 0;
                  local_70 = 0;
                  local_68 = 0;
                  local_60 = 0;
                  local_58 = 0;
                  local_50 = 0;
                  ShaderGLES3::_compile_specialization
                            ((Specialization *)this,(uint)(Specialization *)&local_78,(Version *)0x1
                             ,uVar14);
                  uVar22 = (ulong)*(uint *)(uVar14 + 0x68);
                  if (*(uint *)(uVar14 + 0x68) < 2) {
LAB_0010287e:
                    lVar18 = 1;
                    goto LAB_00102170;
                  }
                  OAHashMap<unsigned_long,ShaderGLES3::Version::Specialization,HashMapHasherDefault,HashMapComparatorDefault<unsigned_long>>
                  ::insert((OAHashMap<unsigned_long,ShaderGLES3::Version::Specialization,HashMapHasherDefault,HashMapComparatorDefault<unsigned_long>>
                            *)(*(long *)(uVar14 + 0x70) + 0x20),&local_80,
                           (Specialization *)&local_78);
                  uVar22 = (ulong)*(uint *)(uVar14 + 0x68);
                  if (*(uint *)(uVar14 + 0x68) < 2) goto LAB_0010287e;
                  lVar18 = *(long *)(uVar14 + 0x70);
                  uVar2 = *(uint *)(lVar18 + 0x38);
                  uVar14 = uVar12 % (ulong)uVar2;
                  uVar20 = *(uint *)(*(long *)(lVar18 + 0x30) + uVar14 * 4);
                  if (uVar20 != 0) {
                    uVar19 = 0;
                    do {
                      if ((uVar20 == (uint)uVar12) &&
                         (uVar8 == *(ulong *)(*(long *)(lVar18 + 0x28) + uVar14 * 8))) {
                        puVar24 = (undefined4 *)(*(long *)(lVar18 + 0x20) + uVar14 * 0x38);
                        if (this[0xa0] != (Glow)0x0) {
                          ShaderGLES3::_save_to_cache((Version *)this);
                        }
                        ShaderGLES3::Version::Specialization::~Specialization
                                  ((Specialization *)&local_78);
                        goto LAB_00101973;
                      }
                      uVar19 = uVar19 + 1;
                      uVar14 = (ulong)((int)uVar14 + 1) % (ulong)uVar2;
                      uVar20 = *(uint *)(*(long *)(lVar18 + 0x30) + uVar14 * 4);
                    } while ((uVar20 != 0) &&
                            (uVar19 <= ((uVar2 + (int)uVar14) - uVar20 % uVar2) % uVar2));
                  }
                  goto LAB_001032b6;
                }
                uVar19 = 0;
                while (((uint)uVar12 != uVar20 ||
                       (local_80 != *(ulong *)(*(long *)(lVar18 + 0x28) + uVar22 * 8)))) {
                  uVar19 = uVar19 + 1;
                  uVar22 = (ulong)((int)uVar22 + 1) % uVar21;
                  uVar20 = *(uint *)(lVar10 + uVar22 * 4);
                  if ((uVar20 == 0) || (((uVar2 + (int)uVar22) - uVar20 % uVar2) % uVar2 < uVar19))
                  goto LAB_00102680;
                }
                puVar24 = (undefined4 *)(*(long *)(lVar18 + 0x20) + uVar22 * 0x38);
                if (puVar24 == (undefined4 *)0x0) goto LAB_00102680;
                if (*(char *)(puVar24 + 0xc) != '\0') {
                  uVar8 = *(long *)(this + 0x110) * 0x3ffff - 1;
                  uVar8 = (uVar8 ^ uVar8 >> 0x1f) * 0x15;
                  uVar8 = (uVar8 ^ uVar8 >> 0xb) * 0x41;
                  uVar8 = uVar8 >> 0x16 ^ uVar8;
                  uVar14 = uVar8 & 0xffffffff;
                  if ((int)uVar8 == 0) {
                    uVar14 = 1;
                  }
                  uVar19 = 0;
                  uVar8 = uVar14 % uVar21;
                  uVar20 = *(uint *)(lVar10 + uVar8 * 4);
                  if (uVar20 == 0) goto LAB_00102100;
                  while (((uint)uVar14 != uVar20 ||
                         (*(long *)(this + 0x110) != *(long *)(*(long *)(lVar18 + 0x28) + uVar8 * 8)
                         ))) {
                    uVar19 = uVar19 + 1;
                    uVar8 = (ulong)((int)uVar8 + 1) % uVar21;
                    uVar20 = *(uint *)(lVar10 + uVar8 * 4);
                    if ((uVar20 == 0) || (((uVar2 + (int)uVar8) - uVar20 % uVar2) % uVar2 < uVar19))
                    goto LAB_00102100;
                  }
                  puVar24 = (undefined4 *)(*(long *)(lVar18 + 0x20) + uVar8 * 0x38);
LAB_00101973:
                  if (puVar24 == (undefined4 *)0x0) goto LAB_00102100;
                }
                if (*(char *)((long)puVar24 + 0x31) == '\0') goto LAB_00102100;
                (*_glad_glUseProgram)(*puVar24);
                *(undefined4 **)(this + 0x128) = puVar24;
                piVar23 = param_4 + 2;
LAB_001019aa:
                (*_glad_glBindFramebuffer)(0x8d40,piVar23[5]);
                (*_glad_glViewport)(0,0,piVar23[2],piVar23[3]);
                (*_glad_glActiveTexture)(0x84c0);
                (*_glad_glBindTexture)(0xde1,*piVar23);
                pcVar6 = _glad_glUniform2f;
                iVar7 = piVar23[3];
                iVar3 = piVar23[2];
                uVar8 = *(ulong *)(this + 0x130);
                if (*(int *)(this + 0xd0) < 2) {
                  _err_print_index_error
                            ("_version_get_uniform","./drivers/gles3/shader_gles3.h",0xe4,1,
                             (long)*(int *)(this + 0xd0),"p_which","uniform_count","",false,false);
                }
                else {
                  if ((uVar8 != 0) && ((uint)uVar8 < *(uint *)pGVar1)) {
                    lVar18 = ((uVar8 & 0xffffffff) % (ulong)*(uint *)(this + 0x50)) * 0x80 +
                             *(long *)(*(long *)(this + 0x40) +
                                      ((uVar8 & 0xffffffff) / (ulong)*(uint *)(this + 0x50)) * 8);
                    iVar4 = *(int *)(lVar18 + 0x78);
                    if (iVar4 == (int)(uVar8 >> 0x20)) {
                      if (*(int *)(lVar18 + 0x68) < 2) {
                        _err_print_index_error
                                  ("_version_get_uniform","./drivers/gles3/shader_gles3.h",0xe7,1,
                                   (long)*(int *)(lVar18 + 0x68),"p_variant",
                                   "int(version->variants.size())","",false,false);
                      }
                      else {
                        lVar18 = *(long *)(lVar18 + 0x70);
                        uVar2 = *(uint *)(lVar18 + 0x38);
                        uVar14 = 0x2aeaa2ab % (ulong)uVar2;
                        uVar20 = *(uint *)(*(long *)(lVar18 + 0x30) + uVar14 * 4);
                        if (uVar20 != 0) {
                          uVar19 = 0;
                          while ((uVar20 != 0x2aeaa2ab ||
                                 (*(long *)(*(long *)(lVar18 + 0x28) + uVar14 * 8) != 0))) {
                            uVar19 = uVar19 + 1;
                            uVar14 = (ulong)((int)uVar14 + 1) % (ulong)uVar2;
                            uVar20 = *(uint *)(*(long *)(lVar18 + 0x30) + uVar14 * 4);
                            if ((uVar20 == 0) ||
                               (((uVar2 + (int)uVar14) - uVar20 % uVar2) % uVar2 < uVar19))
                            goto LAB_00102d70;
                          }
                          lVar18 = *(long *)(lVar18 + 0x20) + uVar14 * 0x38;
                          if (lVar18 != 0) {
                            if (*(int *)(lVar18 + 0x10) < 2) {
                              _err_print_index_error
                                        ("_version_get_uniform","./drivers/gles3/shader_gles3.h",
                                         0xea,1,(long)*(int *)(lVar18 + 0x10),"p_which",
                                         "int(spec->uniform_location.size())","",false,false);
                              goto LAB_00101c63;
                            }
                            if (*(int *)(*(long *)(lVar18 + 0x18) + 4) < 0) goto LAB_00101c63;
                            if (*(int *)(this + 0xd0) < 2) {
                              _err_print_index_error
                                        ("_version_get_uniform","./drivers/gles3/shader_gles3.h",
                                         0xe4,1,(long)*(int *)(this + 0xd0),"p_which",
                                         "uniform_count","",false,false);
                              goto LAB_00103310;
                            }
                            if ((uint)uVar8 < *(uint *)pGVar1) {
                              lVar18 = ((uVar8 & 0xffffffff) % (ulong)*(uint *)(this + 0x50)) * 0x80
                                       + *(long *)(*(long *)(this + 0x40) +
                                                  ((uVar8 & 0xffffffff) /
                                                  (ulong)*(uint *)(this + 0x50)) * 8);
                              if (iVar4 == *(int *)(lVar18 + 0x78)) {
                                if (*(int *)(lVar18 + 0x68) < 2) {
                                  _err_print_index_error
                                            ("_version_get_uniform","./drivers/gles3/shader_gles3.h"
                                             ,0xe7,1,(long)*(int *)(lVar18 + 0x68),"p_variant",
                                             "int(version->variants.size())","",false,false);
                                  goto LAB_00103310;
                                }
                                lVar18 = *(long *)(lVar18 + 0x70);
                                uVar2 = *(uint *)(lVar18 + 0x38);
                                uVar8 = (ulong)uVar20 % (ulong)uVar2;
                                uVar20 = *(uint *)(*(long *)(lVar18 + 0x30) + uVar8 * 4);
                                if (uVar20 == 0) goto LAB_00103bd0;
                                uVar19 = 0;
                                goto LAB_00101bea;
                              }
                              if (*(int *)(lVar18 + 0x78) + 0x80000000U < 0x7fffffff) {
                                _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                                                 "Method/function failed. Returning: nullptr",
                                                 "Attempting to use an uninitialized RID",0,0);
                              }
                            }
                            _err_print_error("_version_get_uniform","./drivers/gles3/shader_gles3.h"
                                             ,0xe6,"Parameter \"version\" is null.",0);
                            goto LAB_00103310;
                          }
                        }
LAB_00102d70:
                        _err_print_error("_version_get_uniform","./drivers/gles3/shader_gles3.h",
                                         0xe9,"Parameter \"spec\" is null.",0);
                      }
                      goto LAB_00101c63;
                    }
                    if (iVar4 + 0x80000000U < 0x7fffffff) {
                      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                                       "Method/function failed. Returning: nullptr",
                                       "Attempting to use an uninitialized RID",0,0);
                    }
                  }
                  _err_print_error("_version_get_uniform","./drivers/gles3/shader_gles3.h",0xe6,
                                   "Parameter \"version\" is null.",0);
                }
                goto LAB_00101c63;
              }
LAB_001020e1:
              if (this[0xa0] == (Glow)0x0) goto LAB_001020ef;
              ShaderGLES3::_save_to_cache((Version *)this);
              ShaderGLES3::Version::Specialization::~Specialization((Specialization *)&local_78);
              goto LAB_00102100;
            }
          }
          uVar22 = 0;
          lVar18 = 0;
          goto LAB_00102170;
        }
      }
      goto LAB_00102210;
    }
    if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) goto LAB_00104233;
    uVar11 = 0x5d;
    pcVar9 = "Condition \"p_glow_buffers[3].color == 0\" is true.";
  }
  pcVar15 = "drivers/gles3/effects/glow.cpp";
  pcVar17 = "process_glow";
LAB_00102244:
  _err_print_error(pcVar17,pcVar15,uVar11,pcVar9,0,0);
  return;
  while( true ) {
    uVar19 = uVar19 + 1;
    uVar8 = (ulong)((int)uVar8 + 1) % uVar12;
    uVar20 = *(uint *)(lVar18 + uVar8 * 4);
    if ((uVar20 == 0) || (((uVar2 + (int)uVar8) - uVar20 % uVar2) % uVar2 < uVar19)) break;
LAB_00100551:
    if ((uVar20 == (uint)uVar22) && (*(long *)(this + 0x110) == *(long *)(plVar5[1] + uVar8 * 8))) {
      puVar24 = (undefined4 *)(*plVar5 + uVar8 * 0x38);
      goto LAB_0010056b;
    }
  }
  goto LAB_00102100;
LAB_00102318:
  uVar19 = uVar19 + 1;
  uVar8 = (ulong)((int)uVar8 + 1) % (ulong)uVar2;
  uVar20 = *(uint *)(plVar5[2] + uVar8 * 4);
  if ((uVar20 == 0) || (((uVar2 + (int)uVar8) - uVar20 % uVar2) % uVar2 < uVar19))
  goto LAB_001020e1;
  goto LAB_00102351;
LAB_00101bea:
  if ((uVar20 != 0x2aeaa2ab) || (*(long *)(*(long *)(lVar18 + 0x28) + uVar8 * 8) != 0)) {
    uVar19 = uVar19 + 1;
    uVar8 = (ulong)((int)uVar8 + 1) % (ulong)uVar2;
    uVar20 = *(uint *)(*(long *)(lVar18 + 0x30) + uVar8 * 4);
    if ((uVar20 == 0) || (((uVar2 + (int)uVar8) - uVar20 % uVar2) % uVar2 < uVar19))
    goto LAB_00103bd0;
    goto LAB_00101bea;
  }
  lVar18 = *(long *)(lVar18 + 0x20) + uVar8 * 0x38;
  if (lVar18 != 0) {
    if (*(int *)(lVar18 + 0x10) < 2) {
      _err_print_index_error
                ("_version_get_uniform","./drivers/gles3/shader_gles3.h",0xea,1,
                 (long)*(int *)(lVar18 + 0x10),"p_which","int(spec->uniform_location.size())","",
                 false,false);
      goto LAB_00103310;
    }
    uVar16 = *(undefined4 *)(*(long *)(lVar18 + 0x18) + 4);
    goto LAB_00101c2f;
  }
LAB_00103bd0:
  _err_print_error("_version_get_uniform","./drivers/gles3/shader_gles3.h",0xe9,
                   "Parameter \"spec\" is null.",0);
LAB_00103310:
  uVar16 = 0xffffffff;
LAB_00101c2f:
  (*pcVar6)(CONCAT44((int)((ulong)(_LC34 / (double)iVar3) >> 0x20),(float)(_LC34 / (double)iVar3)),
            CONCAT44((int)((ulong)(_LC34 / (double)iVar7) >> 0x20),(float)(_LC34 / (double)iVar7)),
            uVar16);
LAB_00101c63:
  piVar23 = piVar23 + 4;
  _draw_screen_triangle(this);
  if (param_4 + 0xe == piVar23) goto code_r0x00101c7a;
  goto LAB_001019aa;
code_r0x00101c7a:
  lVar18 = (long)*(int *)(this + 0x120);
  uVar8 = *(ulong *)(this + 0x130);
  local_80 = 0;
  if (2 < *(int *)(this + 0x120)) {
    if ((uVar8 != 0) && ((uint)uVar8 < *(uint *)(this + 0x54))) {
      uVar14 = ((uVar8 & 0xffffffff) % (ulong)*(uint *)(this + 0x50)) * 0x80 +
               *(long *)(*(long *)(this + 0x40) +
                        ((uVar8 & 0xffffffff) / (ulong)*(uint *)(this + 0x50)) * 8);
      iVar7 = *(int *)(uVar14 + 0x78);
      if (iVar7 == (int)(uVar8 >> 0x20)) {
        uVar2 = *(uint *)(uVar14 + 0x68);
        if (uVar2 == 0) {
          ShaderGLES3::_initialize_version((Version *)this);
          uVar2 = *(uint *)(uVar14 + 0x68);
        }
        uVar8 = local_80;
        uVar22 = (ulong)uVar2;
        if (2 < uVar2) {
          lVar18 = *(long *)(uVar14 + 0x70);
          uVar2 = *(uint *)(lVar18 + 0x58);
          uVar21 = (ulong)uVar2;
          lVar10 = *(long *)(lVar18 + 0x50);
          uVar22 = local_80 * 0x3ffff - 1;
          uVar22 = (uVar22 ^ uVar22 >> 0x1f) * 0x15;
          uVar22 = (uVar22 ^ uVar22 >> 0xb) * 0x41;
          uVar22 = uVar22 >> 0x16 ^ uVar22;
          uVar12 = uVar22 & 0xffffffff;
          if ((int)uVar22 == 0) {
            uVar12 = 1;
          }
          uVar22 = uVar12 % uVar21;
          uVar20 = *(uint *)(lVar10 + uVar22 * 4);
          if (uVar20 != 0) {
            uVar19 = 0;
            while ((uVar20 != (uint)uVar12 ||
                   (local_80 != *(ulong *)(*(long *)(lVar18 + 0x48) + uVar22 * 8)))) {
              uVar19 = uVar19 + 1;
              uVar22 = (ulong)((int)uVar22 + 1) % uVar21;
              uVar20 = *(uint *)(lVar10 + uVar22 * 4);
              if ((uVar20 == 0) || (((uVar2 + (int)uVar22) - uVar20 % uVar2) % uVar2 < uVar19))
              goto LAB_00103320;
            }
            puVar24 = (undefined4 *)(*(long *)(lVar18 + 0x40) + uVar22 * 0x38);
            if (puVar24 != (undefined4 *)0x0) {
              if (*(char *)(puVar24 + 0xc) == '\0') goto LAB_00101dd7;
              uVar8 = *(long *)(this + 0x110) * 0x3ffff - 1;
              uVar8 = (uVar8 ^ uVar8 >> 0x1f) * 0x15;
              uVar8 = (uVar8 ^ uVar8 >> 0xb) * 0x41;
              uVar8 = uVar8 >> 0x16 ^ uVar8;
              uVar14 = uVar8 & 0xffffffff;
              if ((int)uVar8 == 0) {
                uVar14 = 1;
              }
              uVar19 = 0;
              uVar8 = uVar14 % uVar21;
              uVar20 = *(uint *)(lVar10 + uVar8 * 4);
              if (uVar20 == 0) goto LAB_00102100;
              goto LAB_00102569;
            }
          }
LAB_00103320:
          local_48 = 0;
          local_78 = 0;
          local_70 = 0;
          local_68 = 0;
          local_60 = 0;
          local_58 = 0;
          local_50 = 0;
          ShaderGLES3::_compile_specialization
                    ((Specialization *)this,(uint)(Specialization *)&local_78,(Version *)0x2,uVar14)
          ;
          uVar22 = (ulong)*(uint *)(uVar14 + 0x68);
          if (2 < *(uint *)(uVar14 + 0x68)) {
            OAHashMap<unsigned_long,ShaderGLES3::Version::Specialization,HashMapHasherDefault,HashMapComparatorDefault<unsigned_long>>
            ::insert((OAHashMap<unsigned_long,ShaderGLES3::Version::Specialization,HashMapHasherDefault,HashMapComparatorDefault<unsigned_long>>
                      *)(*(long *)(uVar14 + 0x70) + 0x40),&local_80,(Specialization *)&local_78);
            uVar22 = (ulong)*(uint *)(uVar14 + 0x68);
            if (2 < *(uint *)(uVar14 + 0x68)) {
              lVar18 = *(long *)(uVar14 + 0x70);
              uVar2 = *(uint *)(lVar18 + 0x58);
              uVar14 = uVar12 % (ulong)uVar2;
              uVar20 = *(uint *)(*(long *)(lVar18 + 0x50) + uVar14 * 4);
              if (uVar20 != 0) {
                uVar19 = 0;
LAB_0010341a:
                if (((uint)uVar12 != uVar20) ||
                   (uVar8 != *(ulong *)(*(long *)(lVar18 + 0x48) + uVar14 * 8))) goto LAB_001033e0;
                puVar24 = (undefined4 *)(*(long *)(lVar18 + 0x40) + uVar14 * 0x38);
                if (this[0xa0] != (Glow)0x0) {
                  ShaderGLES3::_save_to_cache((Version *)this);
                }
                ShaderGLES3::Version::Specialization::~Specialization((Specialization *)&local_78);
LAB_00102583:
                if (puVar24 == (undefined4 *)0x0) goto LAB_00102100;
LAB_00101dd7:
                if (*(char *)((long)puVar24 + 0x31) == '\0') goto LAB_00102100;
                (*_glad_glUseProgram)(*puVar24);
                *(undefined4 **)(this + 0x128) = puVar24;
                piVar23 = param_4 + 8;
LAB_00101dfc:
                (*_glad_glBindFramebuffer)(0x8d40,piVar23[3]);
                (*_glad_glViewport)(0,0,*piVar23,piVar23[1]);
                (*_glad_glActiveTexture)(0x84c0);
                (*_glad_glBindTexture)(0xde1,piVar23[6]);
                pcVar6 = _glad_glUniform2f;
                iVar7 = piVar23[1];
                iVar3 = *piVar23;
                uVar8 = *(ulong *)(this + 0x130);
                if (*(int *)(this + 0xd0) < 2) {
                  _err_print_index_error
                            ("_version_get_uniform","./drivers/gles3/shader_gles3.h",0xe4,1,
                             (long)*(int *)(this + 0xd0),"p_which","uniform_count","",false,false);
                }
                else {
                  if ((uVar8 != 0) && ((uint)uVar8 < *(uint *)pGVar1)) {
                    lVar18 = ((uVar8 & 0xffffffff) % (ulong)*(uint *)(this + 0x50)) * 0x80 +
                             *(long *)(*(long *)(this + 0x40) +
                                      ((uVar8 & 0xffffffff) / (ulong)*(uint *)(this + 0x50)) * 8);
                    iVar4 = *(int *)(lVar18 + 0x78);
                    if (iVar4 == (int)(uVar8 >> 0x20)) {
                      if (*(int *)(lVar18 + 0x68) < 3) {
                        _err_print_index_error
                                  ("_version_get_uniform","./drivers/gles3/shader_gles3.h",0xe7,2,
                                   (long)*(int *)(lVar18 + 0x68),"p_variant",
                                   "int(version->variants.size())","",false,false);
                      }
                      else {
                        lVar18 = *(long *)(lVar18 + 0x70);
                        uVar2 = *(uint *)(lVar18 + 0x58);
                        uVar14 = 0x2aeaa2ab % (ulong)uVar2;
                        uVar20 = *(uint *)(*(long *)(lVar18 + 0x50) + uVar14 * 4);
                        if (uVar20 != 0) {
                          uVar19 = 0;
                          while ((uVar20 != 0x2aeaa2ab ||
                                 (*(long *)(*(long *)(lVar18 + 0x48) + uVar14 * 8) != 0))) {
                            uVar19 = uVar19 + 1;
                            uVar14 = (ulong)((int)uVar14 + 1) % (ulong)uVar2;
                            uVar20 = *(uint *)(*(long *)(lVar18 + 0x50) + uVar14 * 4);
                            if ((uVar20 == 0) ||
                               (((uVar2 + (int)uVar14) - uVar20 % uVar2) % uVar2 < uVar19))
                            goto LAB_00103c70;
                          }
                          lVar18 = *(long *)(lVar18 + 0x40) + uVar14 * 0x38;
                          if (lVar18 != 0) {
                            if (*(int *)(lVar18 + 0x10) < 2) {
                              _err_print_index_error
                                        ("_version_get_uniform","./drivers/gles3/shader_gles3.h",
                                         0xea,1,(long)*(int *)(lVar18 + 0x10),"p_which",
                                         "int(spec->uniform_location.size())","",false,false);
                              goto LAB_001020ab;
                            }
                            if (*(int *)(*(long *)(lVar18 + 0x18) + 4) < 0) goto LAB_001020ab;
                            if (*(int *)(this + 0xd0) < 2) {
                              _err_print_index_error
                                        ("_version_get_uniform","./drivers/gles3/shader_gles3.h",
                                         0xe4,1,(long)*(int *)(this + 0xd0),"p_which",
                                         "uniform_count","",false,false);
                              goto LAB_0010266e;
                            }
                            if ((uint)uVar8 < *(uint *)pGVar1) {
                              lVar18 = ((uVar8 & 0xffffffff) % (ulong)*(uint *)(this + 0x50)) * 0x80
                                       + *(long *)(*(long *)(this + 0x40) +
                                                  ((uVar8 & 0xffffffff) /
                                                  (ulong)*(uint *)(this + 0x50)) * 8);
                              if (iVar4 == *(int *)(lVar18 + 0x78)) {
                                if (*(int *)(lVar18 + 0x68) < 3) {
                                  _err_print_index_error
                                            ("_version_get_uniform","./drivers/gles3/shader_gles3.h"
                                             ,0xe7,2,(long)*(int *)(lVar18 + 0x68),"p_variant",
                                             "int(version->variants.size())","",false,false);
                                  goto LAB_0010266e;
                                }
                                lVar18 = *(long *)(lVar18 + 0x70);
                                uVar2 = *(uint *)(lVar18 + 0x58);
                                uVar8 = (ulong)uVar20 % (ulong)uVar2;
                                uVar20 = *(uint *)(*(long *)(lVar18 + 0x50) + uVar8 * 4);
                                if (uVar20 == 0) goto LAB_001041b8;
                                uVar19 = 0;
                                goto LAB_00102032;
                              }
                              if (*(int *)(lVar18 + 0x78) + 0x80000000U < 0x7fffffff) {
                                _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                                                 "Method/function failed. Returning: nullptr",
                                                 "Attempting to use an uninitialized RID",0,0);
                              }
                            }
                            _err_print_error("_version_get_uniform","./drivers/gles3/shader_gles3.h"
                                             ,0xe6,"Parameter \"version\" is null.",0);
                            goto LAB_0010266e;
                          }
                        }
LAB_00103c70:
                        _err_print_error("_version_get_uniform","./drivers/gles3/shader_gles3.h",
                                         0xe9,"Parameter \"spec\" is null.",0);
                      }
                      goto LAB_001020ab;
                    }
                    if (iVar4 + 0x80000000U < 0x7fffffff) {
                      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                                       "Method/function failed. Returning: nullptr",
                                       "Attempting to use an uninitialized RID",0,0);
                    }
                  }
                  _err_print_error("_version_get_uniform","./drivers/gles3/shader_gles3.h",0xe6,
                                   "Parameter \"version\" is null.",0);
                }
                goto LAB_001020ab;
              }
LAB_001032b6:
              if (this[0xa0] != (Glow)0x0) {
                ShaderGLES3::_save_to_cache((Version *)this);
              }
LAB_001020ef:
              local_98 = (Specialization *)&local_78;
              ShaderGLES3::Version::Specialization::~Specialization(local_98);
              goto LAB_00102100;
            }
          }
        }
        lVar18 = 2;
LAB_00102170:
        _err_print_index_error
                  ("operator[]","./core/templates/local_vector.h",0xb2,lVar18,uVar22,"p_index",
                   "count","",false,true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar6 = (code *)invalidInstructionException();
        (*pcVar6)();
      }
LAB_00102f8d:
      local_80 = 0;
joined_r0x00102f97:
      if (iVar7 + 0x80000000U < 0x7fffffff) {
        _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                         "Method/function failed. Returning: nullptr",
                         "Attempting to use an uninitialized RID",0,0);
      }
    }
LAB_00102210:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      pcVar9 = "Parameter \"version\" is null.";
      uVar11 = 0xbe;
      pcVar15 = "./drivers/gles3/shader_gles3.h";
      pcVar17 = "_version_bind_shader";
      goto LAB_00102244;
    }
    goto LAB_00104233;
  }
  lVar10 = 2;
LAB_00102435:
  _err_print_index_error
            ("_version_bind_shader","./drivers/gles3/shader_gles3.h",0xbb,lVar10,lVar18,"p_variant",
             "variant_count","",false,false);
  goto LAB_0010210d;
LAB_001033e0:
  uVar19 = uVar19 + 1;
  uVar14 = (ulong)((int)uVar14 + 1) % (ulong)uVar2;
  uVar20 = *(uint *)(*(long *)(lVar18 + 0x50) + uVar14 * 4);
  if ((uVar20 == 0) || (((uVar2 + (int)uVar14) - uVar20 % uVar2) % uVar2 < uVar19))
  goto LAB_001032b6;
  goto LAB_0010341a;
LAB_00102032:
  if ((uVar20 != 0x2aeaa2ab) || (*(long *)(*(long *)(lVar18 + 0x48) + uVar8 * 8) != 0)) {
    uVar19 = uVar19 + 1;
    uVar8 = (ulong)((int)uVar8 + 1) % (ulong)uVar2;
    uVar20 = *(uint *)(*(long *)(lVar18 + 0x50) + uVar8 * 4);
    if ((uVar20 == 0) || (((uVar2 + (int)uVar8) - uVar20 % uVar2) % uVar2 < uVar19))
    goto LAB_001041b8;
    goto LAB_00102032;
  }
  lVar18 = *(long *)(lVar18 + 0x40) + uVar8 * 0x38;
  if (lVar18 != 0) {
    if (*(int *)(lVar18 + 0x10) < 2) {
      _err_print_index_error
                ("_version_get_uniform","./drivers/gles3/shader_gles3.h",0xea,1,
                 (long)*(int *)(lVar18 + 0x10),"p_which","int(spec->uniform_location.size())","",
                 false,false);
      goto LAB_0010266e;
    }
    uVar16 = *(undefined4 *)(*(long *)(lVar18 + 0x18) + 4);
    goto LAB_00102077;
  }
LAB_001041b8:
  _err_print_error("_version_get_uniform","./drivers/gles3/shader_gles3.h",0xe9,
                   "Parameter \"spec\" is null.",0);
LAB_0010266e:
  uVar16 = 0xffffffff;
LAB_00102077:
  (*pcVar6)(CONCAT44((int)((ulong)(_LC34 / (double)iVar3) >> 0x20),(float)(_LC34 / (double)iVar3)),
            CONCAT44((int)((ulong)(_LC34 / (double)iVar7) >> 0x20),(float)(_LC34 / (double)iVar7)),
            uVar16);
LAB_001020ab:
  _draw_screen_triangle(this);
  bVar25 = param_4 == piVar23;
  piVar23 = piVar23 + -4;
  if (bVar25) goto LAB_00102456;
  goto LAB_00101dfc;
LAB_00102456:
  (*_glad_glDisable)(0xbe2);
  (*_glad_glEnable)(0xb71);
  (*_glad_glDepthMask)(1);
  (*_glad_glUseProgram)(0);
  (*_glad_glBindTexture)(0xde1,0);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x001024bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*_glad_glBindFramebuffer)(0x8d40,(undefined4)TextureStorage::system_fbo);
    return;
  }
  goto LAB_00104233;
  while( true ) {
    uVar19 = uVar19 + 1;
    uVar8 = (ulong)((int)uVar8 + 1) % uVar21;
    uVar20 = *(uint *)(lVar10 + uVar8 * 4);
    if ((uVar20 == 0) || (((uVar2 + (int)uVar8) - uVar20 % uVar2) % uVar2 < uVar19)) break;
LAB_00102569:
    if ((uVar20 == (uint)uVar14) &&
       (*(long *)(this + 0x110) == *(long *)(*(long *)(lVar18 + 0x48) + uVar8 * 8))) {
      puVar24 = (undefined4 *)(*(long *)(lVar18 + 0x40) + uVar8 * 0x38);
      goto LAB_00102583;
    }
  }
LAB_00102100:
  if (ShaderGLES3::_version_bind_shader(RID,int,unsigned_long)::first_print != '\0') {
    _err_print_error("_version_bind_shader","./drivers/gles3/shader_gles3.h",0xda,
                     "shader failed to compile, unable to bind shader.",0,1);
    ShaderGLES3::_version_bind_shader(RID,int,unsigned_long)::first_print = '\0';
  }
LAB_0010210d:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00104233:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GlowShaderGLES3::~GlowShaderGLES3() */

void __thiscall GlowShaderGLES3::~GlowShaderGLES3(GlowShaderGLES3 *this)

{
  *(undefined ***)this = &PTR__init_00104e00;
  ShaderGLES3::~ShaderGLES3((ShaderGLES3 *)this);
  return;
}



/* GlowShaderGLES3::~GlowShaderGLES3() */

void __thiscall GlowShaderGLES3::~GlowShaderGLES3(GlowShaderGLES3 *this)

{
  *(undefined ***)this = &PTR__init_00104e00;
  ShaderGLES3::~ShaderGLES3((ShaderGLES3 *)this);
  operator_delete(this,0x130);
  return;
}



/* GlowShaderGLES3::_init() */

void __thiscall GlowShaderGLES3::_init(GlowShaderGLES3 *this)

{
  ShaderGLES3::_setup((char *)this,
                      "layout(location = 0) in vec2 vertex_attrib;\n\n/* clang-format on */\n\nout vec2 uv_interp;\n\nvoid main() {\n\tuv_interp = vertex_attrib * 0.5 + 0.5;\n\tgl_Position = vec4(vertex_attrib, 1.0, 1.0);\n}\n\n/* clang-format off */\n"
                      ,
                      "/* clang-format on */\n\n#ifdef MODE_FILTER\n#ifdef USE_MULTIVIEW\nuniform sampler2DArray source_color; // texunit:0\n#else\nuniform sampler2D source_color; // texunit:0\n#endif // USE_MULTIVIEW\nuniform float view;\nuniform vec2 pixel_size;\nuniform float luminance_multiplier;\nuniform float glow_bloom;\nuniform float glow_hdr_threshold;\nuniform float glow_hdr_scale;\nuniform float glow_luminance_cap;\n#endif // MODE_FILTER\n\n#ifdef MODE_DOWNSAMPLE\nuniform sampler2D source_color; // texunit:0\nuniform vec2 pixel_size;\n#endif // MODE_DOWNSAMPLE\n\n#ifdef MODE_UPSAMPLE\nuniform sampler2D source_color; // texunit:0\nuniform vec2 pixel_size;\n#endif // MODE_UPSAMPLE\n\nin vec2 uv_interp;\n\nlayout(location = 0) out vec4 frag_color;\n\nvoid main() {\n#ifdef MODE_FILTER\n\t// Note, we read from an image with double resolution, so we average those out\n#ifdef USE_MULTIVIEW\n\tvec2 half_pixel = pixel_size * 0.5;\n\tvec3 uv = vec3(uv_interp, view);\n\tvec3 color = textureLod(source_color, uv, 0.0).rgb * 4.0;\n\tcolor += textureLod(source_color, uv - vec3(half_pixel, 0.0), 0.0).rgb;\n\tcolor += textureLod(source_color, uv + vec3(half_pixel, 0.0), 0.0).rgb;\n\tcolor += textureLod(source_color, uv - vec3(half_pixel.x, -half_pixel.y, 0.0), 0.0).rgb;\n\tcolor += textureLod(source_color, uv + vec3(half_pixel.x, -half_pixel.y, 0.0), 0.0).rgb;\n#else\n\tvec2 half_pixel = pixel_size * 0.5;\n\tvec2 uv = uv_interp;\n\tvec3 color = textureLod(source_color, uv, 0.0).rgb * 4.0;\n\tcolor += textureLod(source_color, uv - half_pixel, 0.0).rgb;\n\tcolor += textureLod(source_color, uv + half_pixel, 0.0).rgb;\n\tcolor += textureLod(source_color, uv - vec2(half_pixel.x, -half_pixel.y), 0.0).rgb;\n\tcolor += textureLod(source_color, uv + vec2(half_pixel.x, -half_pixel.y), 0.0).rgb;\n#endif // USE_MULTIVIEW\n\tcolor /= luminance_multiplier * 8.0;\n\n\tfloat feedback_factor = max(color.r, max(color.g, color.b));\n\tfloat feedback = max(smoothstep(glow_hdr_threshold, glow_hdr_threshold + glow_hdr_scale, feedback_factor), glow_bloom);\n\n\tcolor = min(color * feedback, vec3(glow_luminance_cap));\n\n\tfrag_color = vec4(..." /* TRUNCATED STRING LITERAL */
                      ,0x104285,(char **)0x7,0x105cc0,(UBOPair *)0x0,(int)_init()::_ubo_pairs,
                      (Feedback *)0x0,(int)_init()::_feedbacks,(TexUnitPair *)0x1,0x105c80,
                      (Specialization *)0x1,0x105c60,(char **)0x3);
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
    if (local_a0 == 0) goto LAB_0010489e;
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
    if (local_90 == 0) goto LAB_0010489e;
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
    if (lVar11 == 0) goto LAB_0010489e;
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
LAB_0010489e:
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
  if ((double)uVar9 * __LC10 < (double)(*(int *)(this + 0x1c) + 1)) {
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
/* GlowShaderGLES3::~GlowShaderGLES3() */

void __thiscall GlowShaderGLES3::~GlowShaderGLES3(GlowShaderGLES3 *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



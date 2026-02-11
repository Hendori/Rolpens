
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



/* RenderData::_bind_methods() */

void RenderData::_bind_methods(void)

{
  long lVar1;
  code *pcVar2;
  long *plVar3;
  MethodBind *pMVar4;
  long *plVar5;
  long lVar6;
  long in_FS_OFFSET;
  long local_78 [2];
  long *local_68;
  undefined8 local_58;
  undefined1 local_50 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  D_METHODP((char *)local_78,(char ***)"get_render_scene_buffers",0);
  local_50 = (undefined1  [16])0x0;
  local_58 = 0;
  pMVar4 = create_method_bind<RenderData,Ref<RenderSceneBuffers>>((_func_Ref *)0x151);
  ClassDB::bind_methodfi(1,pMVar4,false,(MethodDefinition *)local_78,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  plVar3 = local_68;
  if (local_68 != (long *)0x0) {
    LOCK();
    plVar5 = local_68 + -2;
    *plVar5 = *plVar5 + -1;
    UNLOCK();
    if (*plVar5 == 0) {
      if (local_68 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar1 = local_68[-1];
      local_68 = (long *)0x0;
      if (lVar1 != 0) {
        lVar6 = 0;
        plVar5 = plVar3;
        do {
          if ((StringName::configured != '\0') && (*plVar5 != 0)) {
            StringName::unref();
          }
          lVar6 = lVar6 + 1;
          plVar5 = plVar5 + 1;
        } while (lVar1 != lVar6);
      }
      Memory::free_static(plVar3 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_78[0] != 0)) {
    StringName::unref();
  }
  D_METHODP((char *)local_78,(char ***)"get_render_scene_data",0);
  local_50 = (undefined1  [16])0x0;
  local_58 = 0;
  pMVar4 = create_method_bind<RenderData,RenderSceneData*>((_func_RenderSceneData_ptr *)0x159);
  ClassDB::bind_methodfi(1,pMVar4,false,(MethodDefinition *)local_78,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  plVar3 = local_68;
  if (local_68 != (long *)0x0) {
    LOCK();
    plVar5 = local_68 + -2;
    *plVar5 = *plVar5 + -1;
    UNLOCK();
    if (*plVar5 == 0) {
      if (local_68 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar1 = local_68[-1];
      local_68 = (long *)0x0;
      if (lVar1 != 0) {
        lVar6 = 0;
        plVar5 = plVar3;
        do {
          if ((StringName::configured != '\0') && (*plVar5 != 0)) {
            StringName::unref();
          }
          lVar6 = lVar6 + 1;
          plVar5 = plVar5 + 1;
        } while (lVar1 != lVar6);
      }
      Memory::free_static(plVar3 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_78[0] != 0)) {
    StringName::unref();
  }
  D_METHODP((char *)local_78,(char ***)"get_environment",0);
  local_50 = (undefined1  [16])0x0;
  local_58 = 0;
  pMVar4 = create_method_bind<RenderData,RID>((_func_RID *)0x161);
  ClassDB::bind_methodfi(1,pMVar4,false,(MethodDefinition *)local_78,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  plVar3 = local_68;
  if (local_68 != (long *)0x0) {
    LOCK();
    plVar5 = local_68 + -2;
    *plVar5 = *plVar5 + -1;
    UNLOCK();
    if (*plVar5 == 0) {
      if (local_68 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar1 = local_68[-1];
      local_68 = (long *)0x0;
      if (lVar1 != 0) {
        lVar6 = 0;
        plVar5 = plVar3;
        do {
          if ((StringName::configured != '\0') && (*plVar5 != 0)) {
            StringName::unref();
          }
          lVar6 = lVar6 + 1;
          plVar5 = plVar5 + 1;
        } while (lVar1 != lVar6);
      }
      Memory::free_static(plVar3 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_78[0] != 0)) {
    StringName::unref();
  }
  D_METHODP((char *)local_78,(char ***)"get_camera_attributes",0);
  local_50 = (undefined1  [16])0x0;
  local_58 = 0;
  pMVar4 = create_method_bind<RenderData,RID>((_func_RID *)0x169);
  ClassDB::bind_methodfi(1,pMVar4,false,(MethodDefinition *)local_78,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  plVar3 = local_68;
  if (local_68 != (long *)0x0) {
    LOCK();
    plVar5 = local_68 + -2;
    *plVar5 = *plVar5 + -1;
    UNLOCK();
    if (*plVar5 == 0) {
      if (local_68 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar1 = local_68[-1];
      local_68 = (long *)0x0;
      if (lVar1 != 0) {
        lVar6 = 0;
        plVar5 = plVar3;
        do {
          if ((StringName::configured != '\0') && (*plVar5 != 0)) {
            StringName::unref();
          }
          lVar6 = lVar6 + 1;
          plVar5 = plVar5 + 1;
        } while (lVar1 != lVar6);
      }
      Memory::free_static(plVar3 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_78[0] != 0)) {
    StringName::unref();
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RenderDataExtension::_bind_methods() */

void RenderDataExtension::_bind_methods(void)

{
  long *plVar1;
  StringName *this;
  long lVar2;
  code *pcVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined8 uVar6;
  int *piVar7;
  long lVar8;
  int *piVar9;
  long in_FS_OFFSET;
  CowData<char32_t> *local_148;
  long local_110;
  long local_108;
  long local_100;
  Vector local_f8 [8];
  undefined8 local_f0;
  char *local_e8;
  undefined1 local_e0 [16];
  int local_d0;
  long local_c8;
  undefined4 local_c0;
  long local_b8;
  undefined8 local_b0;
  long local_a8;
  long lStack_a0;
  undefined8 local_98;
  long local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78 [2];
  int *local_68;
  ulong local_60;
  long local_50;
  long local_40;
  
  local_e0._8_8_ = local_e0._0_8_;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_a8 = 0;
  lStack_a0 = 0;
  local_e8 = "_get_render_scene_buffers";
  local_f0 = 0;
  local_b8 = 0;
  local_b0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 6;
  local_80 = 1;
  local_78[0] = 0;
  local_68 = (int *)0x0;
  local_60 = 0;
  local_50 = 0;
  local_e0._0_8_ = 0x19;
  String::parse_latin1((StrRange *)&local_b8);
  local_80 = CONCAT44(local_80._4_4_,0xc);
  local_110 = 0;
  local_108 = 0;
  local_e8 = "RenderSceneBuffers";
  local_e0._0_8_ = 0x12;
  String::parse_latin1((StrRange *)&local_108);
  local_e8 = (char *)CONCAT44(local_e8._4_4_,0x18);
  local_d0 = 0x11;
  local_c8 = 0;
  local_e0._0_8_ = 0;
  local_e0._8_8_ = 0;
  if (local_108 == 0) {
LAB_00101d18:
    local_148 = (CowData<char32_t> *)&local_c8;
    local_c0 = 6;
    StringName::StringName((StringName *)&local_100,(String *)local_148,false);
    if (local_e0._8_8_ == local_100) {
      if ((StringName::configured != '\0') && (local_100 != 0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_e0._8_8_ = local_100;
    }
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_c8,(CowData *)&local_108);
    local_c0 = 6;
    if (local_d0 == 0x11) goto LAB_00101d18;
    StringName::operator=((StringName *)(local_e0 + 8),(StringName *)&local_110);
  }
  lVar2 = local_108;
  local_148 = (CowData<char32_t> *)&local_c8;
  if (local_108 != 0) {
    LOCK();
    plVar1 = (long *)(local_108 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_108 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_110 != 0)) {
    StringName::unref();
  }
  lVar2 = local_a8;
  local_b0 = CONCAT44(local_b0._4_4_,local_e8._0_4_);
  if (local_a8 != local_e0._0_8_) {
    if (local_a8 != 0) {
      LOCK();
      plVar1 = (long *)(local_a8 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_a8 = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
    local_a8 = local_e0._0_8_;
    local_e0._0_8_ = 0;
  }
  if (lStack_a0 != local_e0._8_8_) {
    StringName::unref();
    lStack_a0 = local_e0._8_8_;
    local_e0._8_8_ = 0;
  }
  lVar8 = local_90;
  lVar2 = local_c8;
  local_98 = CONCAT44(local_98._4_4_,local_d0);
  if (local_90 == local_c8) {
    local_88 = CONCAT44(local_88._4_4_,local_c0);
    if (local_90 != 0) {
      LOCK();
      plVar1 = (long *)(local_90 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_c8 = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
  }
  else {
    if (local_90 != 0) {
      LOCK();
      plVar1 = (long *)(local_90 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_90 = 0;
        Memory::free_static((void *)(lVar8 + -0x10),false);
      }
    }
    local_90 = local_c8;
    local_88 = CONCAT44(local_88._4_4_,local_c0);
  }
  if ((StringName::configured != '\0') && (local_e0._8_8_ != 0)) {
    StringName::unref();
  }
  uVar6 = local_e0._0_8_;
  if (local_e0._0_8_ != 0) {
    LOCK();
    plVar1 = (long *)(local_e0._0_8_ + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_e0._0_8_ = 0;
      Memory::free_static((void *)(uVar6 + -0x10),false);
    }
  }
  local_60 = local_60 & 0xffffffff00000000;
  local_100 = 0;
  local_e8 = "RenderDataExtension";
  local_e0._0_8_ = 0x13;
  String::parse_latin1((StrRange *)&local_100);
  StringName::StringName((StringName *)&local_e8,(String *)&local_100,false);
  ClassDB::add_virtual_method((StringName *)&local_e8,(MethodInfo *)&local_b8,true,local_f8,false);
  if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
    StringName::unref();
  }
  lVar2 = local_100;
  if (local_100 != 0) {
    LOCK();
    plVar1 = (long *)(local_100 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_100 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  lVar2 = local_50;
  if (local_50 != 0) {
    LOCK();
    plVar1 = (long *)(local_50 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_50 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  piVar7 = local_68;
  if (local_68 != (int *)0x0) {
    LOCK();
    plVar1 = (long *)(local_68 + -4);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      if (local_68 == (int *)0x0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      lVar2 = *(long *)(local_68 + -2);
      lVar8 = 0;
      local_68 = (int *)0x0;
      piVar9 = piVar7;
      if (lVar2 != 0) {
        do {
          if (Variant::needs_deinit[*piVar9] != '\0') {
            Variant::_clear_internal();
          }
          lVar8 = lVar8 + 1;
          piVar9 = piVar9 + 6;
        } while (lVar2 != lVar8);
      }
      Memory::free_static(piVar7 + -4,false);
    }
  }
  List<PropertyInfo,DefaultAllocator>::~List((List<PropertyInfo,DefaultAllocator> *)local_78);
  lVar2 = local_90;
  if (local_90 != 0) {
    LOCK();
    plVar1 = (long *)(local_90 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_90 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (lStack_a0 != 0)) {
    StringName::unref();
  }
  lVar2 = local_a8;
  if (local_a8 != 0) {
    LOCK();
    plVar1 = (long *)(local_a8 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_a8 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  lVar2 = local_b8;
  if (local_b8 != 0) {
    LOCK();
    plVar1 = (long *)(local_b8 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_b8 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  this = (StringName *)(local_e0 + 8);
  CowData<String>::_unref((CowData<String> *)&local_f0);
  local_a8 = 0;
  lStack_a0 = 0;
  local_e8 = "_get_render_scene_data";
  local_f0 = 0;
  local_b8 = 0;
  local_b0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 6;
  local_80 = 1;
  local_78[0] = 0;
  local_68 = (int *)0x0;
  local_60 = 0;
  local_50 = 0;
  local_e0._0_8_ = 0x16;
  String::parse_latin1((StrRange *)&local_b8);
  local_e8 = "RenderSceneData";
  local_80 = CONCAT44(local_80._4_4_,0xc);
  local_108 = 0;
  local_e0._0_8_ = 0xf;
  String::parse_latin1((StrRange *)&local_108);
  StringName::StringName((StringName *)&local_100,(String *)&local_108,false);
  local_e8 = (char *)CONCAT44(local_e8._4_4_,0x18);
  local_e0._0_8_ = 0;
  StringName::StringName(this,(StringName *)&local_100);
  local_d0 = 0;
  local_c8 = 0;
  local_c0 = 6;
  if ((StringName::configured != '\0') && (local_100 != 0)) {
    StringName::unref();
  }
  lVar2 = local_108;
  if (local_108 != 0) {
    LOCK();
    plVar1 = (long *)(local_108 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_108 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  lVar2 = local_a8;
  local_b0 = CONCAT44(local_b0._4_4_,local_e8._0_4_);
  if (local_a8 != local_e0._0_8_) {
    if (local_a8 != 0) {
      LOCK();
      plVar1 = (long *)(local_a8 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_a8 = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
    local_a8 = local_e0._0_8_;
    local_e0._0_8_ = 0;
  }
  if (lStack_a0 != local_e0._8_8_) {
    StringName::unref();
    lStack_a0 = local_e0._8_8_;
    local_e0._8_8_ = 0;
  }
  lVar8 = local_90;
  lVar2 = local_c8;
  local_98 = CONCAT44(local_98._4_4_,local_d0);
  if (local_90 == local_c8) {
    local_88 = CONCAT44(local_88._4_4_,local_c0);
    if (local_90 != 0) {
      LOCK();
      plVar1 = (long *)(local_90 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_c8 = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
  }
  else {
    if (local_90 != 0) {
      LOCK();
      plVar1 = (long *)(local_90 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_90 = 0;
        Memory::free_static((void *)(lVar8 + -0x10),false);
      }
    }
    local_90 = local_c8;
    local_88 = CONCAT44(local_88._4_4_,local_c0);
  }
  if ((StringName::configured != '\0') && (local_e0._8_8_ != 0)) {
    StringName::unref();
  }
  uVar6 = local_e0._0_8_;
  if (local_e0._0_8_ != 0) {
    LOCK();
    plVar1 = (long *)(local_e0._0_8_ + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_e0._0_8_ = 0;
      Memory::free_static((void *)(uVar6 + -0x10),false);
    }
  }
  local_60 = local_60 & 0xffffffff00000000;
  local_100 = 0;
  local_e8 = "RenderDataExtension";
  local_e0._0_8_ = 0x13;
  String::parse_latin1((StrRange *)&local_100);
  StringName::StringName((StringName *)&local_e8,(String *)&local_100,false);
  ClassDB::add_virtual_method((StringName *)&local_e8,(MethodInfo *)&local_b8,true,local_f8,false);
  if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
    StringName::unref();
  }
  lVar2 = local_100;
  if (local_100 != 0) {
    LOCK();
    plVar1 = (long *)(local_100 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_100 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  lVar2 = local_50;
  if (local_50 != 0) {
    LOCK();
    plVar1 = (long *)(local_50 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_50 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  piVar7 = local_68;
  if (local_68 != (int *)0x0) {
    LOCK();
    plVar1 = (long *)(local_68 + -4);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      if (local_68 == (int *)0x0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      lVar2 = *(long *)(local_68 + -2);
      lVar8 = 0;
      local_68 = (int *)0x0;
      piVar9 = piVar7;
      if (lVar2 != 0) {
        do {
          if (Variant::needs_deinit[*piVar9] != '\0') {
            Variant::_clear_internal();
          }
          lVar8 = lVar8 + 1;
          piVar9 = piVar9 + 6;
        } while (lVar2 != lVar8);
      }
      Memory::free_static(piVar7 + -4,false);
    }
  }
  List<PropertyInfo,DefaultAllocator>::~List((List<PropertyInfo,DefaultAllocator> *)local_78);
  lVar2 = local_90;
  if (local_90 != 0) {
    LOCK();
    plVar1 = (long *)(local_90 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_90 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (lStack_a0 != 0)) {
    StringName::unref();
  }
  lVar2 = local_a8;
  if (local_a8 != 0) {
    LOCK();
    plVar1 = (long *)(local_a8 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_a8 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  lVar2 = local_b8;
  if (local_b8 != 0) {
    LOCK();
    plVar1 = (long *)(local_b8 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_b8 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  CowData<String>::_unref((CowData<String> *)&local_f0);
  local_a8 = 0;
  lStack_a0 = 0;
  local_e8 = "_get_environment";
  local_f0 = 0;
  local_b8 = 0;
  local_b0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 6;
  local_80 = 1;
  local_78[0] = 0;
  local_68 = (int *)0x0;
  local_60 = 0;
  local_50 = 0;
  local_e0._0_8_ = 0x10;
  String::parse_latin1((StrRange *)&local_b8);
  local_80 = CONCAT44(local_80._4_4_,0xc);
  local_110 = 0;
  local_108 = 0;
  local_e8 = "";
  auVar4._8_8_ = 0;
  auVar4._0_8_ = local_e0._8_8_;
  local_e0 = auVar4 << 0x40;
  String::parse_latin1((StrRange *)&local_108);
  local_e8 = (char *)CONCAT44(local_e8._4_4_,0x17);
  local_d0 = 0;
  local_c8 = 0;
  local_e0._0_8_ = 0;
  local_e0._8_8_ = 0;
  if (local_108 == 0) {
LAB_0010182b:
    local_c0 = 6;
    StringName::operator=(this,(StringName *)&local_110);
    lVar2 = local_108;
  }
  else {
    CowData<char32_t>::_ref(local_148,(CowData *)&local_108);
    local_c0 = 6;
    if (local_d0 != 0x11) goto LAB_0010182b;
    StringName::StringName((StringName *)&local_100,(String *)local_148,false);
    if (local_e0._8_8_ == local_100) {
      lVar2 = local_108;
      if ((StringName::configured != '\0') && (local_100 != 0)) {
        StringName::unref();
        lVar2 = local_108;
      }
    }
    else {
      StringName::unref();
      lVar2 = local_108;
      local_e0._8_8_ = local_100;
    }
  }
  local_108 = lVar2;
  if (lVar2 != 0) {
    LOCK();
    plVar1 = (long *)(lVar2 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_108 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_110 != 0)) {
    StringName::unref();
  }
  lVar2 = local_a8;
  local_b0 = CONCAT44(local_b0._4_4_,local_e8._0_4_);
  if (local_a8 != local_e0._0_8_) {
    if (local_a8 != 0) {
      LOCK();
      plVar1 = (long *)(local_a8 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_a8 = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
    local_a8 = local_e0._0_8_;
    local_e0._0_8_ = 0;
  }
  if (lStack_a0 != local_e0._8_8_) {
    StringName::unref();
    lStack_a0 = local_e0._8_8_;
    local_e0._8_8_ = 0;
  }
  lVar8 = local_90;
  lVar2 = local_c8;
  local_98 = CONCAT44(local_98._4_4_,local_d0);
  if (local_90 == local_c8) {
    local_88 = CONCAT44(local_88._4_4_,local_c0);
    if (local_90 != 0) {
      LOCK();
      plVar1 = (long *)(local_90 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_c8 = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
  }
  else {
    if (local_90 != 0) {
      LOCK();
      plVar1 = (long *)(local_90 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_90 = 0;
        Memory::free_static((void *)(lVar8 + -0x10),false);
      }
    }
    local_90 = local_c8;
    local_88 = CONCAT44(local_88._4_4_,local_c0);
  }
  if ((StringName::configured != '\0') && (local_e0._8_8_ != 0)) {
    StringName::unref();
  }
  uVar6 = local_e0._0_8_;
  if (local_e0._0_8_ != 0) {
    LOCK();
    plVar1 = (long *)(local_e0._0_8_ + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_e0._0_8_ = 0;
      Memory::free_static((void *)(uVar6 + -0x10),false);
    }
  }
  local_60 = local_60 & 0xffffffff00000000;
  local_100 = 0;
  local_e8 = "RenderDataExtension";
  local_e0._0_8_ = 0x13;
  String::parse_latin1((StrRange *)&local_100);
  StringName::StringName((StringName *)&local_e8,(String *)&local_100,false);
  ClassDB::add_virtual_method((StringName *)&local_e8,(MethodInfo *)&local_b8,true,local_f8,false);
  if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
    StringName::unref();
  }
  lVar2 = local_100;
  if (local_100 != 0) {
    LOCK();
    plVar1 = (long *)(local_100 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_100 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  lVar2 = local_50;
  if (local_50 != 0) {
    LOCK();
    plVar1 = (long *)(local_50 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_50 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  piVar7 = local_68;
  if (local_68 != (int *)0x0) {
    LOCK();
    plVar1 = (long *)(local_68 + -4);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      if (local_68 == (int *)0x0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      lVar2 = *(long *)(local_68 + -2);
      lVar8 = 0;
      local_68 = (int *)0x0;
      piVar9 = piVar7;
      if (lVar2 != 0) {
        do {
          if (Variant::needs_deinit[*piVar9] != '\0') {
            Variant::_clear_internal();
          }
          lVar8 = lVar8 + 1;
          piVar9 = piVar9 + 6;
        } while (lVar2 != lVar8);
      }
      Memory::free_static(piVar7 + -4,false);
    }
  }
  List<PropertyInfo,DefaultAllocator>::~List((List<PropertyInfo,DefaultAllocator> *)local_78);
  lVar2 = local_90;
  if (local_90 != 0) {
    LOCK();
    plVar1 = (long *)(local_90 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_90 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (lStack_a0 != 0)) {
    StringName::unref();
  }
  lVar2 = local_a8;
  if (local_a8 != 0) {
    LOCK();
    plVar1 = (long *)(local_a8 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_a8 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  lVar2 = local_b8;
  if (local_b8 != 0) {
    LOCK();
    plVar1 = (long *)(local_b8 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_b8 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  CowData<String>::_unref((CowData<String> *)&local_f0);
  local_a8 = 0;
  lStack_a0 = 0;
  local_e8 = "_get_camera_attributes";
  local_f0 = 0;
  local_b8 = 0;
  local_b0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 6;
  local_80 = 1;
  local_78[0] = 0;
  local_68 = (int *)0x0;
  local_60 = 0;
  local_50 = 0;
  local_e0._0_8_ = 0x16;
  String::parse_latin1((StrRange *)&local_b8);
  local_80 = CONCAT44(local_80._4_4_,0xc);
  local_110 = 0;
  local_108 = 0;
  local_e8 = "";
  auVar5._8_8_ = 0;
  auVar5._0_8_ = local_e0._8_8_;
  local_e0 = auVar5 << 0x40;
  String::parse_latin1((StrRange *)&local_108);
  local_e8 = (char *)CONCAT44(local_e8._4_4_,0x17);
  local_d0 = 0;
  local_c8 = 0;
  local_e0._0_8_ = 0;
  local_e0._8_8_ = 0;
  if (local_108 != 0) {
    CowData<char32_t>::_ref(local_148,(CowData *)&local_108);
    local_c0 = 6;
    if (local_d0 == 0x11) {
      StringName::StringName((StringName *)&local_100,(String *)local_148,false);
      if (local_e0._8_8_ == local_100) {
        lVar2 = local_108;
        if ((StringName::configured != '\0') && (local_100 != 0)) {
          StringName::unref();
          lVar2 = local_108;
        }
      }
      else {
        StringName::unref();
        lVar2 = local_108;
        local_e0._8_8_ = local_100;
      }
      goto joined_r0x00101890;
    }
  }
  local_c0 = 6;
  StringName::operator=(this,(StringName *)&local_110);
  lVar2 = local_108;
joined_r0x00101890:
  local_108 = lVar2;
  if (lVar2 != 0) {
    LOCK();
    plVar1 = (long *)(lVar2 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_108 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_110 != 0)) {
    StringName::unref();
  }
  lVar2 = local_a8;
  local_b0 = CONCAT44(local_b0._4_4_,local_e8._0_4_);
  if (local_a8 != local_e0._0_8_) {
    if (local_a8 != 0) {
      LOCK();
      plVar1 = (long *)(local_a8 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_a8 = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
    local_a8 = local_e0._0_8_;
    local_e0._0_8_ = 0;
  }
  if (lStack_a0 != local_e0._8_8_) {
    StringName::unref();
    lStack_a0 = local_e0._8_8_;
    local_e0._8_8_ = 0;
  }
  lVar8 = local_90;
  lVar2 = local_c8;
  local_98 = CONCAT44(local_98._4_4_,local_d0);
  if (local_90 == local_c8) {
    local_88 = CONCAT44(local_88._4_4_,local_c0);
    if (local_90 != 0) {
      LOCK();
      plVar1 = (long *)(local_90 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_c8 = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
  }
  else {
    if (local_90 != 0) {
      LOCK();
      plVar1 = (long *)(local_90 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_90 = 0;
        Memory::free_static((void *)(lVar8 + -0x10),false);
      }
    }
    local_90 = local_c8;
    local_88 = CONCAT44(local_88._4_4_,local_c0);
  }
  if ((StringName::configured != '\0') && (local_e0._8_8_ != 0)) {
    StringName::unref();
  }
  uVar6 = local_e0._0_8_;
  if (local_e0._0_8_ != 0) {
    LOCK();
    plVar1 = (long *)(local_e0._0_8_ + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_e0._0_8_ = 0;
      Memory::free_static((void *)(uVar6 + -0x10),false);
    }
  }
  local_60 = local_60 & 0xffffffff00000000;
  local_100 = 0;
  local_e8 = "RenderDataExtension";
  local_e0._0_8_ = 0x13;
  String::parse_latin1((StrRange *)&local_100);
  StringName::StringName((StringName *)&local_e8,(String *)&local_100,false);
  ClassDB::add_virtual_method((StringName *)&local_e8,(MethodInfo *)&local_b8,true,local_f8,false);
  if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
    StringName::unref();
  }
  lVar2 = local_100;
  if (local_100 != 0) {
    LOCK();
    plVar1 = (long *)(local_100 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_100 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  lVar2 = local_50;
  if (local_50 != 0) {
    LOCK();
    plVar1 = (long *)(local_50 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_50 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  piVar7 = local_68;
  if (local_68 != (int *)0x0) {
    LOCK();
    plVar1 = (long *)(local_68 + -4);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      if (local_68 == (int *)0x0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      lVar2 = *(long *)(local_68 + -2);
      lVar8 = 0;
      local_68 = (int *)0x0;
      piVar9 = piVar7;
      if (lVar2 != 0) {
        do {
          if (Variant::needs_deinit[*piVar9] != '\0') {
            Variant::_clear_internal();
          }
          lVar8 = lVar8 + 1;
          piVar9 = piVar9 + 6;
        } while (lVar2 != lVar8);
      }
      Memory::free_static(piVar7 + -4,false);
    }
  }
  List<PropertyInfo,DefaultAllocator>::~List((List<PropertyInfo,DefaultAllocator> *)local_78);
  lVar2 = local_90;
  if (local_90 != 0) {
    LOCK();
    plVar1 = (long *)(local_90 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_90 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (lStack_a0 != 0)) {
    StringName::unref();
  }
  lVar2 = local_a8;
  if (local_a8 != 0) {
    LOCK();
    plVar1 = (long *)(local_a8 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_a8 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  lVar2 = local_b8;
  if (local_b8 != 0) {
    LOCK();
    plVar1 = (long *)(local_b8 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_b8 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  CowData<String>::_unref((CowData<String> *)&local_f0);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RenderDataExtension::get_render_scene_buffers() const */

void RenderDataExtension::get_render_scene_buffers(void)

{
  code *pcVar1;
  undefined1 auVar2 [16];
  long lVar3;
  char cVar4;
  undefined4 uVar5;
  long lVar6;
  Object *pOVar7;
  undefined8 uVar8;
  long *plVar9;
  code *pcVar10;
  Object *pOVar11;
  long in_RSI;
  long *in_RDI;
  Object *this;
  long in_FS_OFFSET;
  bool bVar12;
  undefined8 local_108;
  long local_100;
  char *local_f8;
  long local_f0;
  long local_e8;
  undefined4 local_e0;
  long local_d8;
  undefined4 local_d0;
  int local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined1 local_b8 [16];
  undefined8 local_a8;
  long local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_78;
  ulong local_70;
  undefined8 local_60;
  int local_58 [6];
  long local_40;
  
  plVar9 = *(long **)(in_RSI + 0x98);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *in_RDI = 0;
  if (plVar9 != (long *)0x0) {
    local_c8 = 0;
    uStack_c4 = 0;
    uStack_c0 = 0;
    (**(code **)(*plVar9 + 0x60))(local_58,plVar9,in_RSI + 0x178,0,0,&local_c8);
    if (local_c8 == 0) {
      lVar6 = Variant::get_validated_object();
      if (lVar6 == 0) {
        pOVar11 = (Object *)*in_RDI;
        if (pOVar11 != (Object *)0x0) {
          *in_RDI = 0;
          cVar4 = RefCounted::unreference();
          if (cVar4 != '\0') {
            cVar4 = predelete_handler(pOVar11);
joined_r0x001029b8:
            pOVar7 = (Object *)0x0;
            if (cVar4 != '\0') goto LAB_001024cd;
          }
        }
      }
      else {
        pOVar7 = (Object *)__dynamic_cast(lVar6,&Object::typeinfo,&RenderSceneBuffers::typeinfo,0);
        if ((pOVar7 == (Object *)0x0) || (cVar4 = RefCounted::reference(), cVar4 == '\0')) {
          pOVar11 = (Object *)*in_RDI;
          if (pOVar11 != (Object *)0x0) {
            *in_RDI = 0;
            cVar4 = RefCounted::unreference();
            if (cVar4 != '\0') {
              cVar4 = predelete_handler(pOVar11);
              goto joined_r0x001029b8;
            }
          }
        }
        else {
          pOVar11 = (Object *)*in_RDI;
          this = pOVar11;
          if (pOVar7 != pOVar11) {
            *in_RDI = (long)pOVar7;
            cVar4 = RefCounted::reference();
            if (cVar4 == '\0') {
              *in_RDI = 0;
            }
            this = pOVar7;
            if (((pOVar11 != (Object *)0x0) && (cVar4 = RefCounted::unreference(), cVar4 != '\0'))
               && (cVar4 = predelete_handler(pOVar11), cVar4 != '\0')) {
LAB_001024cd:
              if (*(code **)(*(long *)pOVar11 + 0x140) ==
                  RenderSceneBuffersExtension::~RenderSceneBuffersExtension) {
                bVar12 = StringName::configured != '\0';
                *(undefined **)pOVar11 = &__dso_handle;
                if ((((bVar12) &&
                     ((*(long *)(pOVar11 + 0x1e0) == 0 ||
                      (StringName::unref(), StringName::configured != '\0')))) &&
                    ((*(long *)(pOVar11 + 0x1c8) == 0 ||
                     (StringName::unref(), StringName::configured != '\0')))) &&
                   ((((*(long *)(pOVar11 + 0x1b0) == 0 ||
                      (StringName::unref(), StringName::configured != '\0')) &&
                     ((*(long *)(pOVar11 + 0x198) == 0 ||
                      (StringName::unref(), StringName::configured != '\0')))) &&
                    (*(long *)(pOVar11 + 0x180) != 0)))) {
                  StringName::unref();
                }
                *(undefined ***)pOVar11 = &PTR__initialize_classv_00109340;
                Object::~Object(pOVar11);
              }
              else {
                (**(code **)(*(long *)pOVar11 + 0x140))(pOVar11);
              }
              Memory::free_static(pOVar11,false);
              this = pOVar7;
              if (pOVar7 == (Object *)0x0) goto LAB_00102470;
            }
          }
          cVar4 = RefCounted::unreference();
          if ((cVar4 != '\0') && (cVar4 = predelete_handler(this), cVar4 != '\0')) {
            if (*(code **)(*(long *)this + 0x140) ==
                RenderSceneBuffersExtension::~RenderSceneBuffersExtension) {
              bVar12 = StringName::configured != '\0';
              *(undefined **)this = &__dso_handle;
              if (((bVar12) &&
                  ((*(long *)(this + 0x1e0) == 0 ||
                   (StringName::unref(), StringName::configured != '\0')))) &&
                 ((((*(long *)(this + 0x1c8) == 0 ||
                    (StringName::unref(), StringName::configured != '\0')) &&
                   (((*(long *)(this + 0x1b0) == 0 ||
                     (StringName::unref(), StringName::configured != '\0')) &&
                    ((*(long *)(this + 0x198) == 0 ||
                     (StringName::unref(), StringName::configured != '\0')))))) &&
                  (*(long *)(this + 0x180) != 0)))) {
                StringName::unref();
              }
              *(undefined ***)this = &PTR__initialize_classv_00109340;
              Object::~Object(this);
            }
            else {
              (**(code **)(*(long *)this + 0x140))(this);
            }
            Memory::free_static(this,false);
          }
        }
      }
LAB_00102470:
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      goto LAB_00102180;
    }
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
  }
  if ((*(long *)(in_RSI + 8) != 0) && (*(char *)(in_RSI + 0x180) == '\0')) {
    local_c8 = 0;
    uStack_c4 = 0;
    local_b8 = (undefined1  [16])0x0;
    local_f8 = "_get_render_scene_buffers";
    uStack_c0 = 0;
    uStack_bc = 0;
    local_a8 = 0;
    local_a0 = 0;
    local_98 = 6;
    local_90 = 1;
    local_88 = 0;
    local_78 = 0;
    local_70 = 0;
    local_60 = 0;
    local_f0 = 0x19;
    String::parse_latin1((StrRange *)&local_c8);
    local_90 = CONCAT44(local_90._4_4_,0xc);
    GetTypeInfo<Ref<RenderSceneBuffers>,void>::get_class_info
              ((GetTypeInfo<Ref<RenderSceneBuffers>,void> *)&local_f8);
    uStack_c0 = local_f8._0_4_;
    uVar8 = local_b8._0_8_;
    if (local_b8._0_8_ != local_f0) {
      if (local_b8._0_8_ != 0) {
        LOCK();
        plVar9 = (long *)(local_b8._0_8_ + -0x10);
        *plVar9 = *plVar9 + -1;
        UNLOCK();
        if (*plVar9 == 0) {
          auVar2._8_8_ = 0;
          auVar2._0_8_ = local_b8._8_8_;
          local_b8 = auVar2 << 0x40;
          Memory::free_static((void *)(uVar8 + -0x10),false);
        }
      }
      local_b8._0_8_ = local_f0;
      local_f0 = 0;
    }
    if (local_b8._8_8_ != local_e8) {
      StringName::unref();
      lVar6 = local_e8;
      local_e8 = 0;
      local_b8._8_8_ = lVar6;
    }
    lVar3 = local_a0;
    lVar6 = local_d8;
    local_a8 = CONCAT44(local_a8._4_4_,local_e0);
    if (local_a0 == local_d8) {
      local_98 = CONCAT44(local_98._4_4_,local_d0);
      if (local_a0 != 0) {
        LOCK();
        plVar9 = (long *)(local_a0 + -0x10);
        *plVar9 = *plVar9 + -1;
        UNLOCK();
        if (*plVar9 == 0) {
          local_d8 = 0;
          Memory::free_static((void *)(lVar6 + -0x10),false);
        }
      }
    }
    else {
      if (local_a0 != 0) {
        LOCK();
        plVar9 = (long *)(local_a0 + -0x10);
        *plVar9 = *plVar9 + -1;
        UNLOCK();
        if (*plVar9 == 0) {
          local_a0 = 0;
          Memory::free_static((void *)(lVar3 + -0x10),false);
        }
      }
      local_a0 = local_d8;
      local_98 = CONCAT44(local_98._4_4_,local_d0);
    }
    if ((StringName::configured != '\0') && (local_e8 != 0)) {
      StringName::unref();
    }
    lVar6 = local_f0;
    if (local_f0 != 0) {
      LOCK();
      plVar9 = (long *)(local_f0 + -0x10);
      *plVar9 = *plVar9 + -1;
      UNLOCK();
      if (*plVar9 == 0) {
        local_f0 = 0;
        Memory::free_static((void *)(lVar6 + -0x10),false);
      }
    }
    local_70 = local_70 & 0xffffffff00000000;
    uVar5 = MethodInfo::get_compatibility_hash();
    lVar6 = *(long *)(in_RSI + 8);
    *(undefined8 *)(in_RSI + 0x188) = 0;
    pcVar10 = *(code **)(lVar6 + 0xd8);
    if (((pcVar10 == (code *)0x0) || (*(long *)(lVar6 + 0xe0) == 0)) &&
       (pcVar10 = *(code **)(lVar6 + 0xd0), pcVar10 == (code *)0x0)) {
      local_108 = 0;
      String::parse_latin1((String *)&local_108,"RenderDataExtension");
      StringName::StringName((StringName *)&local_100,(String *)&local_108,false);
      ClassDB::get_virtual_method_compatibility_hashes
                ((StringName *)&local_f8,(StringName *)&local_100);
      if (local_f0 == 0) {
        CowData<unsigned_int>::_unref((CowData<unsigned_int> *)&local_f0);
        if ((StringName::configured != '\0') && (lVar6 = 0, local_100 != 0)) goto LAB_00102a71;
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
LAB_00102a86:
        lVar6 = *(long *)(in_RSI + 8);
        pcVar10 = *(code **)(lVar6 + 200);
        if (((pcVar10 == (code *)0x0) || (*(long *)(lVar6 + 0xe0) == 0)) &&
           (pcVar10 = *(code **)(lVar6 + 0xc0), pcVar10 == (code *)0x0)) goto LAB_00102822;
        uVar8 = (*pcVar10)(*(undefined8 *)(lVar6 + 0xa0));
        *(undefined8 *)(in_RSI + 0x188) = uVar8;
      }
      else {
        lVar6 = *(long *)(local_f0 + -8);
        CowData<unsigned_int>::_unref((CowData<unsigned_int> *)&local_f0);
        if ((StringName::configured != '\0') && (local_100 != 0)) {
LAB_00102a71:
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
        if (lVar6 == 0) goto LAB_00102a86;
      }
      lVar6 = *(long *)(in_RSI + 8);
    }
    else {
      uVar8 = (*pcVar10)(*(undefined8 *)(lVar6 + 0xa0),in_RSI + 0x178,uVar5);
      *(undefined8 *)(in_RSI + 0x188) = uVar8;
      lVar6 = *(long *)(in_RSI + 8);
    }
LAB_00102822:
    if (*(char *)(lVar6 + 0x29) != '\0') {
      plVar9 = (long *)operator_new(0x18,"");
      *plVar9 = in_RSI + 0x188;
      plVar9[1] = in_RSI + 0x180;
      plVar9[2] = *(long *)(in_RSI + 0x168);
      *(long **)(in_RSI + 0x168) = plVar9;
    }
    *(undefined1 *)(in_RSI + 0x180) = 1;
    MethodInfo::~MethodInfo((MethodInfo *)&local_c8);
  }
  pcVar10 = *(code **)(in_RSI + 0x188);
  if (pcVar10 == (code *)0x0) goto LAB_00102180;
  local_c8 = 0;
  uStack_c4 = 0;
  pcVar1 = *(code **)(*(long *)(in_RSI + 8) + 0xe0);
  if (pcVar1 == (code *)0x0) {
    (*pcVar10)(*(undefined8 *)(in_RSI + 0x10),0,&local_c8);
    pOVar11 = (Object *)CONCAT44(uStack_c4,local_c8);
    if (pOVar11 == (Object *)0x0) goto LAB_001025d7;
LAB_00102017:
    cVar4 = RefCounted::reference();
    pOVar7 = (Object *)*in_RDI;
    if (cVar4 == '\0') {
      if (pOVar7 != (Object *)0x0) goto LAB_001021b9;
    }
    else {
      if (pOVar7 != pOVar11) {
        *in_RDI = (long)pOVar11;
        cVar4 = RefCounted::reference();
        if (cVar4 == '\0') {
          *in_RDI = 0;
        }
        if (((pOVar7 != (Object *)0x0) && (cVar4 = RefCounted::unreference(), cVar4 != '\0')) &&
           (cVar4 = predelete_handler(pOVar7), cVar4 != '\0')) goto LAB_001021e2;
      }
LAB_0010205a:
      cVar4 = RefCounted::unreference();
      if ((cVar4 != '\0') && (cVar4 = predelete_handler(pOVar11), cVar4 != '\0')) {
        if (*(code **)(*(long *)pOVar11 + 0x140) ==
            RenderSceneBuffersExtension::~RenderSceneBuffersExtension) {
          bVar12 = StringName::configured != '\0';
          *(undefined **)pOVar11 = &__dso_handle;
          if (((bVar12) &&
              ((*(long *)(pOVar11 + 0x1e0) == 0 ||
               (StringName::unref(), StringName::configured != '\0')))) &&
             (((*(long *)(pOVar11 + 0x1c8) == 0 ||
               (StringName::unref(), StringName::configured != '\0')) &&
              ((((*(long *)(pOVar11 + 0x1b0) == 0 ||
                 (StringName::unref(), StringName::configured != '\0')) &&
                ((*(long *)(pOVar11 + 0x198) == 0 ||
                 (StringName::unref(), StringName::configured != '\0')))) &&
               (*(long *)(pOVar11 + 0x180) != 0)))))) {
            StringName::unref();
          }
          *(undefined ***)pOVar11 = &PTR__initialize_classv_00109340;
          Object::~Object(pOVar11);
        }
        else {
          (**(code **)(*(long *)pOVar11 + 0x140))(pOVar11);
        }
        Memory::free_static(pOVar11,false);
      }
    }
  }
  else {
    (*pcVar1)(*(undefined8 *)(in_RSI + 0x10),in_RSI + 0x178,pcVar10,0,&local_c8);
    pOVar11 = (Object *)CONCAT44(uStack_c4,local_c8);
    if (pOVar11 != (Object *)0x0) goto LAB_00102017;
LAB_001025d7:
    pOVar7 = (Object *)*in_RDI;
    if (pOVar7 == (Object *)0x0) goto LAB_00102180;
LAB_001021b9:
    *in_RDI = 0;
    cVar4 = RefCounted::unreference();
    if (cVar4 != '\0') {
      pOVar11 = (Object *)0x0;
      cVar4 = predelete_handler(pOVar7);
      if (cVar4 != '\0') {
LAB_001021e2:
        if (*(code **)(*(long *)pOVar7 + 0x140) ==
            RenderSceneBuffersExtension::~RenderSceneBuffersExtension) {
          bVar12 = StringName::configured != '\0';
          *(undefined **)pOVar7 = &__dso_handle;
          if ((((bVar12) &&
               ((*(long *)(pOVar7 + 0x1e0) == 0 ||
                (StringName::unref(), StringName::configured != '\0')))) &&
              ((*(long *)(pOVar7 + 0x1c8) == 0 ||
               (StringName::unref(), StringName::configured != '\0')))) &&
             (((*(long *)(pOVar7 + 0x1b0) == 0 ||
               (StringName::unref(), StringName::configured != '\0')) &&
              (((*(long *)(pOVar7 + 0x198) == 0 ||
                (StringName::unref(), StringName::configured != '\0')) &&
               (*(long *)(pOVar7 + 0x180) != 0)))))) {
            StringName::unref();
          }
          *(undefined ***)pOVar7 = &PTR__initialize_classv_00109340;
          Object::~Object(pOVar7);
        }
        else {
          (**(code **)(*(long *)pOVar7 + 0x140))(pOVar7);
        }
        Memory::free_static(pOVar7,false);
        if (pOVar11 != (Object *)0x0) goto LAB_0010205a;
      }
    }
  }
  if ((CONCAT44(uStack_c4,local_c8) != 0) && (cVar4 = RefCounted::unreference(), cVar4 != '\0')) {
    pOVar11 = (Object *)CONCAT44(uStack_c4,local_c8);
    cVar4 = predelete_handler(pOVar11);
    if (cVar4 != '\0') {
      if (*(code **)(*(long *)pOVar11 + 0x140) ==
          RenderSceneBuffersExtension::~RenderSceneBuffersExtension) {
        bVar12 = StringName::configured != '\0';
        *(undefined **)pOVar11 = &__dso_handle;
        if ((((bVar12) &&
             ((*(long *)(pOVar11 + 0x1e0) == 0 ||
              (StringName::unref(), StringName::configured != '\0')))) &&
            ((*(long *)(pOVar11 + 0x1c8) == 0 ||
             (StringName::unref(), StringName::configured != '\0')))) &&
           ((((*(long *)(pOVar11 + 0x1b0) == 0 ||
              (StringName::unref(), StringName::configured != '\0')) &&
             ((*(long *)(pOVar11 + 0x198) == 0 ||
              (StringName::unref(), StringName::configured != '\0')))) &&
            (*(long *)(pOVar11 + 0x180) != 0)))) {
          StringName::unref();
        }
        *(undefined ***)pOVar11 = &PTR__initialize_classv_00109340;
        Object::~Object(pOVar11);
      }
      else {
        (**(code **)(*(long *)pOVar11 + 0x140))(pOVar11);
      }
      Memory::free_static(pOVar11,false);
    }
  }
LAB_00102180:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RenderDataExtension::get_render_scene_data() const */

Object * __thiscall RenderDataExtension::get_render_scene_data(RenderDataExtension *this)

{
  undefined1 auVar1 [16];
  long lVar2;
  undefined4 uVar3;
  Object *pOVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  code *pcVar8;
  long in_FS_OFFSET;
  long local_108;
  long local_100;
  char *local_f8;
  long local_f0;
  long local_e8;
  undefined4 local_e0;
  long local_d8;
  undefined4 local_d0;
  int local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined1 local_b8 [16];
  undefined8 local_a8;
  long local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_78;
  ulong local_70;
  undefined8 local_60;
  int local_58 [6];
  long local_40;
  
  plVar7 = *(long **)(this + 0x98);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (plVar7 != (long *)0x0) {
    local_c8 = 0;
    uStack_c4 = 0;
    uStack_c0 = 0;
    (**(code **)(*plVar7 + 0x60))((Variant *)local_58,plVar7,this + 400,0,0,&local_c8);
    if (local_c8 == 0) {
      pOVar4 = Variant::operator_cast_to_Object_((Variant *)local_58);
      if (pOVar4 != (Object *)0x0) {
        pOVar4 = (Object *)__dynamic_cast(pOVar4,&Object::typeinfo,&RenderSceneData::typeinfo,0);
      }
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      goto LAB_00102c77;
    }
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
  }
  if ((*(long *)(this + 8) != 0) && (this[0x198] == (RenderDataExtension)0x0)) {
    local_c8 = 0;
    uStack_c4 = 0;
    local_b8 = (undefined1  [16])0x0;
    uStack_c0 = 0;
    uStack_bc = 0;
    local_f8 = "_get_render_scene_data";
    local_a8 = 0;
    local_a0 = 0;
    local_98 = 6;
    local_90 = 1;
    local_88 = 0;
    local_78 = 0;
    local_70 = 0;
    local_60 = 0;
    local_f0 = 0x16;
    String::parse_latin1((StrRange *)&local_c8);
    local_f8 = "RenderSceneData";
    local_90 = CONCAT44(local_90._4_4_,0xc);
    local_108 = 0;
    local_f0 = 0xf;
    String::parse_latin1((StrRange *)&local_108);
    StringName::StringName((StringName *)&local_100,(String *)&local_108,false);
    local_f8 = (char *)CONCAT44(local_f8._4_4_,0x18);
    local_f0 = 0;
    StringName::StringName((StringName *)&local_e8,(StringName *)&local_100);
    local_e0 = 0;
    local_d8 = 0;
    local_d0 = 6;
    if ((StringName::configured != '\0') && (local_100 != 0)) {
      StringName::unref();
    }
    lVar6 = local_108;
    if (local_108 != 0) {
      LOCK();
      plVar7 = (long *)(local_108 + -0x10);
      *plVar7 = *plVar7 + -1;
      UNLOCK();
      if (*plVar7 == 0) {
        local_108 = 0;
        Memory::free_static((void *)(lVar6 + -0x10),false);
      }
    }
    uStack_c0 = local_f8._0_4_;
    uVar5 = local_b8._0_8_;
    if (local_b8._0_8_ != local_f0) {
      if (local_b8._0_8_ != 0) {
        LOCK();
        plVar7 = (long *)(local_b8._0_8_ + -0x10);
        *plVar7 = *plVar7 + -1;
        UNLOCK();
        if (*plVar7 == 0) {
          auVar1._8_8_ = 0;
          auVar1._0_8_ = local_b8._8_8_;
          local_b8 = auVar1 << 0x40;
          Memory::free_static((void *)(uVar5 + -0x10),false);
        }
      }
      local_b8._0_8_ = local_f0;
      local_f0 = 0;
    }
    if (local_b8._8_8_ != local_e8) {
      StringName::unref();
      lVar6 = local_e8;
      local_e8 = 0;
      local_b8._8_8_ = lVar6;
    }
    lVar2 = local_a0;
    lVar6 = local_d8;
    local_a8 = CONCAT44(local_a8._4_4_,local_e0);
    if (local_a0 == local_d8) {
      local_98 = CONCAT44(local_98._4_4_,local_d0);
      if (local_a0 != 0) {
        LOCK();
        plVar7 = (long *)(local_a0 + -0x10);
        *plVar7 = *plVar7 + -1;
        UNLOCK();
        if (*plVar7 == 0) {
          local_d8 = 0;
          Memory::free_static((void *)(lVar6 + -0x10),false);
        }
      }
    }
    else {
      if (local_a0 != 0) {
        LOCK();
        plVar7 = (long *)(local_a0 + -0x10);
        *plVar7 = *plVar7 + -1;
        UNLOCK();
        if (*plVar7 == 0) {
          local_a0 = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      local_a0 = local_d8;
      local_98 = CONCAT44(local_98._4_4_,local_d0);
    }
    if ((StringName::configured != '\0') && (local_e8 != 0)) {
      StringName::unref();
    }
    lVar6 = local_f0;
    if (local_f0 != 0) {
      LOCK();
      plVar7 = (long *)(local_f0 + -0x10);
      *plVar7 = *plVar7 + -1;
      UNLOCK();
      if (*plVar7 == 0) {
        local_f0 = 0;
        Memory::free_static((void *)(lVar6 + -0x10),false);
      }
    }
    local_70 = local_70 & 0xffffffff00000000;
    uVar3 = MethodInfo::get_compatibility_hash();
    lVar6 = *(long *)(this + 8);
    *(undefined8 *)(this + 0x1a0) = 0;
    pcVar8 = *(code **)(lVar6 + 0xd8);
    if (((pcVar8 == (code *)0x0) || (*(long *)(lVar6 + 0xe0) == 0)) &&
       (pcVar8 = *(code **)(lVar6 + 0xd0), pcVar8 == (code *)0x0)) {
      local_108 = 0;
      String::parse_latin1((String *)&local_108,"RenderDataExtension");
      StringName::StringName((StringName *)&local_100,(String *)&local_108,false);
      ClassDB::get_virtual_method_compatibility_hashes
                ((StringName *)&local_f8,(StringName *)&local_100);
      if (local_f0 == 0) {
        CowData<unsigned_int>::_unref((CowData<unsigned_int> *)&local_f0);
        if ((StringName::configured != '\0') && (lVar6 = 0, local_100 != 0)) goto LAB_00103086;
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
LAB_0010309b:
        lVar6 = *(long *)(this + 8);
        pcVar8 = *(code **)(lVar6 + 200);
        if (((pcVar8 == (code *)0x0) || (*(long *)(lVar6 + 0xe0) == 0)) &&
           (pcVar8 = *(code **)(lVar6 + 0xc0), pcVar8 == (code *)0x0)) goto LAB_00102fe5;
        uVar5 = (*pcVar8)(*(undefined8 *)(lVar6 + 0xa0),this + 400);
        *(undefined8 *)(this + 0x1a0) = uVar5;
      }
      else {
        lVar6 = *(long *)(local_f0 + -8);
        CowData<unsigned_int>::_unref((CowData<unsigned_int> *)&local_f0);
        if ((StringName::configured != '\0') && (local_100 != 0)) {
LAB_00103086:
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
        if (lVar6 == 0) goto LAB_0010309b;
      }
      lVar6 = *(long *)(this + 8);
    }
    else {
      uVar5 = (*pcVar8)(*(undefined8 *)(lVar6 + 0xa0),this + 400,uVar3);
      *(undefined8 *)(this + 0x1a0) = uVar5;
      lVar6 = *(long *)(this + 8);
    }
LAB_00102fe5:
    if (*(char *)(lVar6 + 0x29) != '\0') {
      plVar7 = (long *)operator_new(0x18,"");
      *plVar7 = (long)(this + 0x1a0);
      plVar7[1] = (long)(this + 0x198);
      plVar7[2] = *(long *)(this + 0x168);
      *(long **)(this + 0x168) = plVar7;
    }
    this[0x198] = (RenderDataExtension)0x1;
    MethodInfo::~MethodInfo((MethodInfo *)&local_c8);
  }
  pOVar4 = *(Object **)(this + 0x1a0);
  if (pOVar4 != (Object *)0x0) {
    if (*(code **)(*(long *)(this + 8) + 0xe0) == (code *)0x0) {
      (*(code *)pOVar4)(*(undefined8 *)(this + 0x10),0,&local_c8);
      pOVar4 = (Object *)CONCAT44(uStack_c4,local_c8);
    }
    else {
      (**(code **)(*(long *)(this + 8) + 0xe0))
                (*(undefined8 *)(this + 0x10),this + 400,pOVar4,0,&local_c8);
      pOVar4 = (Object *)CONCAT44(uStack_c4,local_c8);
    }
  }
LAB_00102c77:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return pOVar4;
}



/* RenderDataExtension::get_environment() const */

undefined8 __thiscall RenderDataExtension::get_environment(RenderDataExtension *this)

{
  undefined1 auVar1 [16];
  long lVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  code *pcVar7;
  long in_FS_OFFSET;
  undefined8 local_108;
  long local_100;
  char *local_f8;
  long local_f0;
  long local_e8;
  undefined4 local_e0;
  long local_d8;
  undefined4 local_d0;
  int local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined1 local_b8 [16];
  undefined8 local_a8;
  long local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_78;
  ulong local_70;
  undefined8 local_60;
  int local_58 [6];
  long local_40;
  
  plVar6 = *(long **)(this + 0x98);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (plVar6 != (long *)0x0) {
    local_c8 = 0;
    uStack_c4 = 0;
    uStack_c0 = 0;
    (**(code **)(*plVar6 + 0x60))((Variant *)local_58,plVar6,this + 0x1a8,0,0,&local_c8);
    if (local_c8 == 0) {
      uVar4 = Variant::operator_cast_to_RID((Variant *)local_58);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      goto LAB_00103281;
    }
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
  }
  if ((*(long *)(this + 8) != 0) && (this[0x1b0] == (RenderDataExtension)0x0)) {
    local_c8 = 0;
    uStack_c4 = 0;
    local_b8 = (undefined1  [16])0x0;
    local_f8 = "_get_environment";
    uStack_c0 = 0;
    uStack_bc = 0;
    local_a8 = 0;
    local_a0 = 0;
    local_98 = 6;
    local_90 = 1;
    local_88 = 0;
    local_78 = 0;
    local_70 = 0;
    local_60 = 0;
    local_f0 = 0x10;
    String::parse_latin1((StrRange *)&local_c8);
    local_90 = CONCAT44(local_90._4_4_,0xc);
    GetTypeInfo<RID,void>::get_class_info((GetTypeInfo<RID,void> *)&local_f8);
    uStack_c0 = local_f8._0_4_;
    uVar4 = local_b8._0_8_;
    if (local_b8._0_8_ != local_f0) {
      if (local_b8._0_8_ != 0) {
        LOCK();
        plVar6 = (long *)(local_b8._0_8_ + -0x10);
        *plVar6 = *plVar6 + -1;
        UNLOCK();
        if (*plVar6 == 0) {
          auVar1._8_8_ = 0;
          auVar1._0_8_ = local_b8._8_8_;
          local_b8 = auVar1 << 0x40;
          Memory::free_static((void *)(uVar4 + -0x10),false);
        }
      }
      local_b8._0_8_ = local_f0;
      local_f0 = 0;
    }
    if (local_b8._8_8_ != local_e8) {
      StringName::unref();
      lVar5 = local_e8;
      local_e8 = 0;
      local_b8._8_8_ = lVar5;
    }
    lVar2 = local_a0;
    lVar5 = local_d8;
    local_a8 = CONCAT44(local_a8._4_4_,local_e0);
    if (local_a0 == local_d8) {
      local_98 = CONCAT44(local_98._4_4_,local_d0);
      if (local_a0 != 0) {
        LOCK();
        plVar6 = (long *)(local_a0 + -0x10);
        *plVar6 = *plVar6 + -1;
        UNLOCK();
        if (*plVar6 == 0) {
          local_d8 = 0;
          Memory::free_static((void *)(lVar5 + -0x10),false);
        }
      }
    }
    else {
      if (local_a0 != 0) {
        LOCK();
        plVar6 = (long *)(local_a0 + -0x10);
        *plVar6 = *plVar6 + -1;
        UNLOCK();
        if (*plVar6 == 0) {
          local_a0 = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      local_a0 = local_d8;
      local_98 = CONCAT44(local_98._4_4_,local_d0);
    }
    if ((StringName::configured != '\0') && (local_e8 != 0)) {
      StringName::unref();
    }
    lVar5 = local_f0;
    if (local_f0 != 0) {
      LOCK();
      plVar6 = (long *)(local_f0 + -0x10);
      *plVar6 = *plVar6 + -1;
      UNLOCK();
      if (*plVar6 == 0) {
        local_f0 = 0;
        Memory::free_static((void *)(lVar5 + -0x10),false);
      }
    }
    local_70 = local_70 & 0xffffffff00000000;
    uVar3 = MethodInfo::get_compatibility_hash();
    lVar5 = *(long *)(this + 8);
    *(undefined8 *)(this + 0x1b8) = 0;
    pcVar7 = *(code **)(lVar5 + 0xd8);
    if (((pcVar7 == (code *)0x0) || (*(long *)(lVar5 + 0xe0) == 0)) &&
       (pcVar7 = *(code **)(lVar5 + 0xd0), pcVar7 == (code *)0x0)) {
      local_108 = 0;
      String::parse_latin1((String *)&local_108,"RenderDataExtension");
      StringName::StringName((StringName *)&local_100,(String *)&local_108,false);
      ClassDB::get_virtual_method_compatibility_hashes
                ((StringName *)&local_f8,(StringName *)&local_100);
      if (local_f0 == 0) {
        CowData<unsigned_int>::_unref((CowData<unsigned_int> *)&local_f0);
        if ((StringName::configured != '\0') && (lVar5 = 0, local_100 != 0)) goto LAB_001035d8;
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
LAB_001035ed:
        lVar5 = *(long *)(this + 8);
        pcVar7 = *(code **)(lVar5 + 200);
        if (((pcVar7 == (code *)0x0) || (*(long *)(lVar5 + 0xe0) == 0)) &&
           (pcVar7 = *(code **)(lVar5 + 0xc0), pcVar7 == (code *)0x0)) goto LAB_00103529;
        uVar4 = (*pcVar7)(*(undefined8 *)(lVar5 + 0xa0),this + 0x1a8);
        *(undefined8 *)(this + 0x1b8) = uVar4;
      }
      else {
        lVar5 = *(long *)(local_f0 + -8);
        CowData<unsigned_int>::_unref((CowData<unsigned_int> *)&local_f0);
        if ((StringName::configured != '\0') && (local_100 != 0)) {
LAB_001035d8:
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
        if (lVar5 == 0) goto LAB_001035ed;
      }
      lVar5 = *(long *)(this + 8);
    }
    else {
      uVar4 = (*pcVar7)(*(undefined8 *)(lVar5 + 0xa0),this + 0x1a8,uVar3);
      *(undefined8 *)(this + 0x1b8) = uVar4;
      lVar5 = *(long *)(this + 8);
    }
LAB_00103529:
    if (*(char *)(lVar5 + 0x29) != '\0') {
      plVar6 = (long *)operator_new(0x18,"");
      *plVar6 = (long)(this + 0x1b8);
      plVar6[1] = (long)(this + 0x1b0);
      plVar6[2] = *(long *)(this + 0x168);
      *(long **)(this + 0x168) = plVar6;
    }
    this[0x1b0] = (RenderDataExtension)0x1;
    MethodInfo::~MethodInfo((MethodInfo *)&local_c8);
  }
  pcVar7 = *(code **)(this + 0x1b8);
  uVar4 = 0;
  if (pcVar7 != (code *)0x0) {
    local_c8 = 0;
    uStack_c4 = 0;
    if (*(code **)(*(long *)(this + 8) + 0xe0) == (code *)0x0) {
      (*pcVar7)(*(undefined8 *)(this + 0x10),0,&local_c8);
      uVar4 = CONCAT44(uStack_c4,local_c8);
    }
    else {
      (**(code **)(*(long *)(this + 8) + 0xe0))
                (*(undefined8 *)(this + 0x10),this + 0x1a8,pcVar7,0,&local_c8);
      uVar4 = CONCAT44(uStack_c4,local_c8);
    }
  }
LAB_00103281:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar4;
}



/* RenderDataExtension::get_camera_attributes() const */

undefined8 __thiscall RenderDataExtension::get_camera_attributes(RenderDataExtension *this)

{
  undefined1 auVar1 [16];
  long lVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  code *pcVar7;
  long in_FS_OFFSET;
  undefined8 local_108;
  long local_100;
  char *local_f8;
  long local_f0;
  long local_e8;
  undefined4 local_e0;
  long local_d8;
  undefined4 local_d0;
  int local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined1 local_b8 [16];
  undefined8 local_a8;
  long local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_78;
  ulong local_70;
  undefined8 local_60;
  int local_58 [6];
  long local_40;
  
  plVar6 = *(long **)(this + 0x98);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (plVar6 != (long *)0x0) {
    local_c8 = 0;
    uStack_c4 = 0;
    uStack_c0 = 0;
    (**(code **)(*plVar6 + 0x60))((Variant *)local_58,plVar6,this + 0x1c0,0,0,&local_c8);
    if (local_c8 == 0) {
      uVar4 = Variant::operator_cast_to_RID((Variant *)local_58);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      goto LAB_001037d1;
    }
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
  }
  if ((*(long *)(this + 8) != 0) && (this[0x1c8] == (RenderDataExtension)0x0)) {
    local_c8 = 0;
    uStack_c4 = 0;
    local_b8 = (undefined1  [16])0x0;
    local_f8 = "_get_camera_attributes";
    uStack_c0 = 0;
    uStack_bc = 0;
    local_a8 = 0;
    local_a0 = 0;
    local_98 = 6;
    local_90 = 1;
    local_88 = 0;
    local_78 = 0;
    local_70 = 0;
    local_60 = 0;
    local_f0 = 0x16;
    String::parse_latin1((StrRange *)&local_c8);
    local_90 = CONCAT44(local_90._4_4_,0xc);
    GetTypeInfo<RID,void>::get_class_info((GetTypeInfo<RID,void> *)&local_f8);
    uStack_c0 = local_f8._0_4_;
    uVar4 = local_b8._0_8_;
    if (local_b8._0_8_ != local_f0) {
      if (local_b8._0_8_ != 0) {
        LOCK();
        plVar6 = (long *)(local_b8._0_8_ + -0x10);
        *plVar6 = *plVar6 + -1;
        UNLOCK();
        if (*plVar6 == 0) {
          auVar1._8_8_ = 0;
          auVar1._0_8_ = local_b8._8_8_;
          local_b8 = auVar1 << 0x40;
          Memory::free_static((void *)(uVar4 + -0x10),false);
        }
      }
      local_b8._0_8_ = local_f0;
      local_f0 = 0;
    }
    if (local_b8._8_8_ != local_e8) {
      StringName::unref();
      lVar5 = local_e8;
      local_e8 = 0;
      local_b8._8_8_ = lVar5;
    }
    lVar2 = local_a0;
    lVar5 = local_d8;
    local_a8 = CONCAT44(local_a8._4_4_,local_e0);
    if (local_a0 == local_d8) {
      local_98 = CONCAT44(local_98._4_4_,local_d0);
      if (local_a0 != 0) {
        LOCK();
        plVar6 = (long *)(local_a0 + -0x10);
        *plVar6 = *plVar6 + -1;
        UNLOCK();
        if (*plVar6 == 0) {
          local_d8 = 0;
          Memory::free_static((void *)(lVar5 + -0x10),false);
        }
      }
    }
    else {
      if (local_a0 != 0) {
        LOCK();
        plVar6 = (long *)(local_a0 + -0x10);
        *plVar6 = *plVar6 + -1;
        UNLOCK();
        if (*plVar6 == 0) {
          local_a0 = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      local_a0 = local_d8;
      local_98 = CONCAT44(local_98._4_4_,local_d0);
    }
    if ((StringName::configured != '\0') && (local_e8 != 0)) {
      StringName::unref();
    }
    lVar5 = local_f0;
    if (local_f0 != 0) {
      LOCK();
      plVar6 = (long *)(local_f0 + -0x10);
      *plVar6 = *plVar6 + -1;
      UNLOCK();
      if (*plVar6 == 0) {
        local_f0 = 0;
        Memory::free_static((void *)(lVar5 + -0x10),false);
      }
    }
    local_70 = local_70 & 0xffffffff00000000;
    uVar3 = MethodInfo::get_compatibility_hash();
    lVar5 = *(long *)(this + 8);
    *(undefined8 *)(this + 0x1d0) = 0;
    pcVar7 = *(code **)(lVar5 + 0xd8);
    if (((pcVar7 == (code *)0x0) || (*(long *)(lVar5 + 0xe0) == 0)) &&
       (pcVar7 = *(code **)(lVar5 + 0xd0), pcVar7 == (code *)0x0)) {
      local_108 = 0;
      String::parse_latin1((String *)&local_108,"RenderDataExtension");
      StringName::StringName((StringName *)&local_100,(String *)&local_108,false);
      ClassDB::get_virtual_method_compatibility_hashes
                ((StringName *)&local_f8,(StringName *)&local_100);
      if (local_f0 == 0) {
        CowData<unsigned_int>::_unref((CowData<unsigned_int> *)&local_f0);
        if ((StringName::configured != '\0') && (lVar5 = 0, local_100 != 0)) goto LAB_00103b28;
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
LAB_00103b3d:
        lVar5 = *(long *)(this + 8);
        pcVar7 = *(code **)(lVar5 + 200);
        if (((pcVar7 == (code *)0x0) || (*(long *)(lVar5 + 0xe0) == 0)) &&
           (pcVar7 = *(code **)(lVar5 + 0xc0), pcVar7 == (code *)0x0)) goto LAB_00103a79;
        uVar4 = (*pcVar7)(*(undefined8 *)(lVar5 + 0xa0),this + 0x1c0);
        *(undefined8 *)(this + 0x1d0) = uVar4;
      }
      else {
        lVar5 = *(long *)(local_f0 + -8);
        CowData<unsigned_int>::_unref((CowData<unsigned_int> *)&local_f0);
        if ((StringName::configured != '\0') && (local_100 != 0)) {
LAB_00103b28:
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
        if (lVar5 == 0) goto LAB_00103b3d;
      }
      lVar5 = *(long *)(this + 8);
    }
    else {
      uVar4 = (*pcVar7)(*(undefined8 *)(lVar5 + 0xa0),this + 0x1c0,uVar3);
      *(undefined8 *)(this + 0x1d0) = uVar4;
      lVar5 = *(long *)(this + 8);
    }
LAB_00103a79:
    if (*(char *)(lVar5 + 0x29) != '\0') {
      plVar6 = (long *)operator_new(0x18,"");
      *plVar6 = (long)(this + 0x1d0);
      plVar6[1] = (long)(this + 0x1c8);
      plVar6[2] = *(long *)(this + 0x168);
      *(long **)(this + 0x168) = plVar6;
    }
    this[0x1c8] = (RenderDataExtension)0x1;
    MethodInfo::~MethodInfo((MethodInfo *)&local_c8);
  }
  pcVar7 = *(code **)(this + 0x1d0);
  uVar4 = 0;
  if (pcVar7 != (code *)0x0) {
    local_c8 = 0;
    uStack_c4 = 0;
    if (*(code **)(*(long *)(this + 8) + 0xe0) == (code *)0x0) {
      (*pcVar7)(*(undefined8 *)(this + 0x10),0,&local_c8);
      uVar4 = CONCAT44(uStack_c4,local_c8);
    }
    else {
      (**(code **)(*(long *)(this + 8) + 0xe0))
                (*(undefined8 *)(this + 0x10),this + 0x1c0,pcVar7,0,&local_c8);
      uVar4 = CONCAT44(uStack_c4,local_c8);
    }
  }
LAB_001037d1:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar4;
}



/* DefaultAllocator::alloc(unsigned long) */

void DefaultAllocator::alloc(ulong param_1)

{
  Memory::alloc_static(param_1,false);
  return;
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



/* Object::get_save_class() const */

void Object::get_save_class(void)

{
  long lVar1;
  long *in_RSI;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  (**(code **)(*in_RSI + 0x48))();
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBind::is_valid() const */

undefined8 MethodBind::is_valid(void)

{
  return 1;
}



/* MethodBind::is_vararg() const */

undefined8 MethodBind::is_vararg(void)

{
  return 0;
}



/* RefCounted::is_class_ptr(void*) const */

uint __thiscall RefCounted::is_class_ptr(RefCounted *this,void *param_1)

{
  return (uint)CONCAT71(0x1098,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1098,(undefined4 *)param_1 == &get_class_ptr_static()::ptr);
}



/* RefCounted::_getv(StringName const&, Variant&) const */

undefined8 RefCounted::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* RefCounted::_setv(StringName const&, Variant const&) */

undefined8 RefCounted::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* RefCounted::_validate_propertyv(PropertyInfo&) const */

void RefCounted::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* RefCounted::_property_can_revertv(StringName const&) const */

undefined8 RefCounted::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* RefCounted::_property_get_revertv(StringName const&, Variant&) const */

undefined8 RefCounted::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* RefCounted::_notificationv(int, bool) */

void RefCounted::_notificationv(int param_1,bool param_2)

{
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* RenderData::is_class_ptr(void*) const */

uint RenderData::is_class_ptr(void *param_1)

{
  undefined4 *in_RSI;
  
  return (uint)CONCAT71(0x1098,in_RSI == &Object::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1098,in_RSI == &get_class_ptr_static()::ptr);
}



/* RenderData::_getv(StringName const&, Variant&) const */

undefined8 RenderData::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* RenderData::_setv(StringName const&, Variant const&) */

undefined8 RenderData::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* RenderData::_validate_propertyv(PropertyInfo&) const */

void RenderData::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* RenderData::_property_can_revertv(StringName const&) const */

undefined8 RenderData::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* RenderData::_property_get_revertv(StringName const&, Variant&) const */

undefined8 RenderData::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* RenderData::_notificationv(int, bool) */

void RenderData::_notificationv(int param_1,bool param_2)

{
  return;
}



/* RenderDataExtension::is_class_ptr(void*) const */

uint __thiscall RenderDataExtension::is_class_ptr(RenderDataExtension *this,void *param_1)

{
  return (uint)CONCAT71(0x1098,(undefined4 *)param_1 == &RenderData::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1098,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1098,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* RenderDataExtension::_getv(StringName const&, Variant&) const */

undefined8 RenderDataExtension::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* RenderDataExtension::_setv(StringName const&, Variant const&) */

undefined8 RenderDataExtension::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* RenderDataExtension::_validate_propertyv(PropertyInfo&) const */

void RenderDataExtension::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* RenderDataExtension::_property_can_revertv(StringName const&) const */

undefined8 RenderDataExtension::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* RenderDataExtension::_property_get_revertv(StringName const&, Variant&) const */

undefined8 RenderDataExtension::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* RenderDataExtension::_notificationv(int, bool) */

void RenderDataExtension::_notificationv(int param_1,bool param_2)

{
  return;
}



/* MethodBindTRC<RID>::_gen_argument_type(int) const */

undefined8 MethodBindTRC<RID>::_gen_argument_type(int param_1)

{
  return 0x17;
}



/* MethodBindTRC<RID>::get_argument_meta(int) const */

undefined8 MethodBindTRC<RID>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindTRC<RenderSceneData*>::_gen_argument_type(int) const */

undefined8 MethodBindTRC<RenderSceneData*>::_gen_argument_type(int param_1)

{
  return 0x18;
}



/* MethodBindTRC<RenderSceneData*>::get_argument_meta(int) const */

undefined8 MethodBindTRC<RenderSceneData*>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindTRC<Ref<RenderSceneBuffers>>::_gen_argument_type(int) const */

undefined8 MethodBindTRC<Ref<RenderSceneBuffers>>::_gen_argument_type(int param_1)

{
  return 0x18;
}



/* MethodBindTRC<Ref<RenderSceneBuffers>>::get_argument_meta(int) const */

undefined8 MethodBindTRC<Ref<RenderSceneBuffers>>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindTRC<Ref<RenderSceneBuffers>>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<Ref<RenderSceneBuffers>>::~MethodBindTRC(MethodBindTRC<Ref<RenderSceneBuffers>> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001097a0;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<Ref<RenderSceneBuffers>>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<Ref<RenderSceneBuffers>>::~MethodBindTRC(MethodBindTRC<Ref<RenderSceneBuffers>> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001097a0;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<RenderSceneData*>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<RenderSceneData*>::~MethodBindTRC(MethodBindTRC<RenderSceneData*> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00109800;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<RenderSceneData*>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<RenderSceneData*>::~MethodBindTRC(MethodBindTRC<RenderSceneData*> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00109800;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<RID>::~MethodBindTRC() */

void __thiscall MethodBindTRC<RID>::~MethodBindTRC(MethodBindTRC<RID> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00109860;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<RID>::~MethodBindTRC() */

void __thiscall MethodBindTRC<RID>::~MethodBindTRC(MethodBindTRC<RID> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00109860;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* RefCounted::~RefCounted() */

void __thiscall RefCounted::~RefCounted(RefCounted *this)

{
  *(undefined ***)this = &PTR__initialize_classv_00109340;
  Object::~Object((Object *)this);
  return;
}



/* RefCounted::~RefCounted() */

void __thiscall RefCounted::~RefCounted(RefCounted *this)

{
  *(undefined ***)this = &PTR__initialize_classv_00109340;
  Object::~Object((Object *)this);
  operator_delete(this,0x180);
  return;
}



/* RenderSceneBuffersExtension::~RenderSceneBuffersExtension() */

void __thiscall
RenderSceneBuffersExtension::~RenderSceneBuffersExtension(RenderSceneBuffersExtension *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(undefined **)this = &__dso_handle;
  if (bVar1) {
    if (*(long *)(this + 0x1e0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001040e1;
    }
    if (*(long *)(this + 0x1c8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001040e1;
    }
    if (*(long *)(this + 0x1b0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001040e1;
    }
    if (*(long *)(this + 0x198) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001040e1;
    }
    if (*(long *)(this + 0x180) != 0) {
      StringName::unref();
    }
  }
LAB_001040e1:
  *(undefined ***)this = &PTR__initialize_classv_00109340;
  Object::~Object((Object *)this);
  return;
}



/* RenderDataExtension::~RenderDataExtension() */

void __thiscall RenderDataExtension::~RenderDataExtension(RenderDataExtension *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(undefined ***)this = &PTR__initialize_classv_00109620;
  if (bVar1) {
    if (*(long *)(this + 0x1c0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010418e;
    }
    if (*(long *)(this + 0x1a8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010418e;
    }
    if (*(long *)(this + 400) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010418e;
    }
    if (*(long *)(this + 0x178) != 0) {
      StringName::unref();
    }
  }
LAB_0010418e:
  *(undefined ***)this = &PTR__initialize_classv_001094a0;
  Object::~Object((Object *)this);
  return;
}



/* RenderDataExtension::~RenderDataExtension() */

void __thiscall RenderDataExtension::~RenderDataExtension(RenderDataExtension *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(undefined ***)this = &PTR__initialize_classv_00109620;
  if (bVar1) {
    if (*(long *)(this + 0x1c0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010423e;
    }
    if (*(long *)(this + 0x1a8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010423e;
    }
    if (*(long *)(this + 400) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010423e;
    }
    if (*(long *)(this + 0x178) != 0) {
      StringName::unref();
    }
  }
LAB_0010423e:
  *(undefined ***)this = &PTR__initialize_classv_001094a0;
  Object::~Object((Object *)this);
  operator_delete(this,0x1d8);
  return;
}



/* RefCounted::_get_class_namev() const */

undefined8 * RefCounted::_get_class_namev(void)

{
  int iVar1;
  
  if ((_get_class_namev()::_class_name_static == '\0') &&
     (iVar1 = __cxa_guard_acquire(&_get_class_namev()::_class_name_static), iVar1 != 0)) {
    _get_class_namev()::_class_name_static = 0;
    __cxa_atexit(StringName::~StringName,&_get_class_namev()::_class_name_static,&__dso_handle);
    __cxa_guard_release(&_get_class_namev()::_class_name_static);
  }
  if (_get_class_namev()::_class_name_static != 0) {
    if (*(long *)(_get_class_namev()::_class_name_static + 8) != 0) {
LAB_001042a3:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_001042a3;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"RefCounted");
      goto LAB_0010430e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"RefCounted");
LAB_0010430e:
  return &_get_class_namev()::_class_name_static;
}



/* RenderDataExtension::_get_class_namev() const */

undefined8 * RenderDataExtension::_get_class_namev(void)

{
  int iVar1;
  
  if ((_get_class_namev()::_class_name_static == '\0') &&
     (iVar1 = __cxa_guard_acquire(&_get_class_namev()::_class_name_static), iVar1 != 0)) {
    _get_class_namev()::_class_name_static = 0;
    __cxa_atexit(StringName::~StringName,&_get_class_namev()::_class_name_static,&__dso_handle);
    __cxa_guard_release(&_get_class_namev()::_class_name_static);
  }
  if (_get_class_namev()::_class_name_static != 0) {
    if (*(long *)(_get_class_namev()::_class_name_static + 8) != 0) {
LAB_00104393:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00104393;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"RenderDataExtension");
      goto LAB_001043fe;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"RenderDataExtension");
LAB_001043fe:
  return &_get_class_namev()::_class_name_static;
}



/* RenderData::_get_class_namev() const */

undefined8 * RenderData::_get_class_namev(void)

{
  int iVar1;
  
  if ((_get_class_namev()::_class_name_static == '\0') &&
     (iVar1 = __cxa_guard_acquire(&_get_class_namev()::_class_name_static), iVar1 != 0)) {
    _get_class_namev()::_class_name_static = 0;
    __cxa_atexit(StringName::~StringName,&_get_class_namev()::_class_name_static,&__dso_handle);
    __cxa_guard_release(&_get_class_namev()::_class_name_static);
  }
  if (_get_class_namev()::_class_name_static != 0) {
    if (*(long *)(_get_class_namev()::_class_name_static + 8) != 0) {
LAB_00104473:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00104473;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"RenderData");
      goto LAB_001044de;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"RenderData");
LAB_001044de:
  return &_get_class_namev()::_class_name_static;
}



/* RefCounted::get_class() const */

void RefCounted::get_class(void)

{
  long lVar1;
  long lVar2;
  char *__s;
  long in_RSI;
  StrRange *in_RDI;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(in_RSI + 8) == 0) {
    *(undefined8 *)in_RDI = 0;
    String::parse_latin1(in_RDI);
  }
  else {
    lVar2 = *(long *)(*(long *)(in_RSI + 8) + 0x20);
    if (lVar2 == 0) {
      *(undefined8 *)in_RDI = 0;
    }
    else {
      __s = *(char **)(lVar2 + 8);
      *(undefined8 *)in_RDI = 0;
      if (__s == (char *)0x0) {
        if (*(long *)(lVar2 + 0x10) != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)in_RDI,(CowData *)(lVar2 + 0x10));
        }
      }
      else {
        strlen(__s);
        String::parse_latin1(in_RDI);
      }
    }
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RenderDataExtension::get_class() const */

void RenderDataExtension::get_class(void)

{
  long lVar1;
  long lVar2;
  char *__s;
  long in_RSI;
  StrRange *in_RDI;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(in_RSI + 8) == 0) {
    *(undefined8 *)in_RDI = 0;
    String::parse_latin1(in_RDI);
  }
  else {
    lVar2 = *(long *)(*(long *)(in_RSI + 8) + 0x20);
    if (lVar2 == 0) {
      *(undefined8 *)in_RDI = 0;
    }
    else {
      __s = *(char **)(lVar2 + 8);
      *(undefined8 *)in_RDI = 0;
      if (__s == (char *)0x0) {
        if (*(long *)(lVar2 + 0x10) != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)in_RDI,(CowData *)(lVar2 + 0x10));
        }
      }
      else {
        strlen(__s);
        String::parse_latin1(in_RDI);
      }
    }
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RenderData::get_class() const */

void RenderData::get_class(void)

{
  long lVar1;
  long lVar2;
  char *__s;
  long in_RSI;
  StrRange *in_RDI;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(in_RSI + 8) == 0) {
    *(undefined8 *)in_RDI = 0;
    String::parse_latin1(in_RDI);
  }
  else {
    lVar2 = *(long *)(*(long *)(in_RSI + 8) + 0x20);
    if (lVar2 == 0) {
      *(undefined8 *)in_RDI = 0;
    }
    else {
      __s = *(char **)(lVar2 + 8);
      *(undefined8 *)in_RDI = 0;
      if (__s == (char *)0x0) {
        if (*(long *)(lVar2 + 0x10) != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)in_RDI,(CowData *)(lVar2 + 0x10));
        }
      }
      else {
        strlen(__s);
        String::parse_latin1(in_RDI);
      }
    }
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<RenderSceneData*>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<RenderSceneData*>::_gen_argument_type_info(int param_1)

{
  long *plVar1;
  long lVar2;
  undefined4 in_register_0000003c;
  undefined4 *puVar3;
  long in_FS_OFFSET;
  bool bVar4;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  puVar3 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_40 = 0;
  local_30 = 0xf;
  local_38 = "RenderSceneData";
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
  *puVar3 = 0x18;
  *(undefined8 *)(puVar3 + 2) = 0;
  StringName::StringName((StringName *)(puVar3 + 4),(StringName *)&local_38);
  bVar4 = StringName::configured != '\0';
  puVar3[6] = 0;
  *(undefined8 *)(puVar3 + 8) = 0;
  puVar3[10] = 6;
  if ((bVar4) && (local_38 != (char *)0x0)) {
    StringName::unref();
  }
  lVar2 = local_40;
  if (local_40 != 0) {
    LOCK();
    plVar1 = (long *)(local_40 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_40 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RenderData::is_class(String const&) const */

undefined8 __thiscall RenderData::is_class(RenderData *this,String *param_1)

{
  long *plVar1;
  long lVar2;
  char *pcVar3;
  long lVar4;
  long lVar5;
  char cVar6;
  undefined8 uVar7;
  long lVar8;
  long in_FS_OFFSET;
  bool bVar9;
  long local_60;
  char *local_58;
  size_t local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
    lVar4 = *(long *)(lVar2 + 0x20);
    if (lVar4 == 0) {
      local_60 = 0;
    }
    else {
      pcVar3 = *(char **)(lVar4 + 8);
      local_60 = 0;
      if (pcVar3 == (char *)0x0) {
        plVar1 = (long *)(*(long *)(lVar4 + 0x10) + -0x10);
        if (*(long *)(lVar4 + 0x10) != 0) {
          do {
            lVar5 = *plVar1;
            if (lVar5 == 0) goto LAB_0010491f;
            LOCK();
            lVar8 = *plVar1;
            bVar9 = lVar5 == lVar8;
            if (bVar9) {
              *plVar1 = lVar5 + 1;
              lVar8 = lVar5;
            }
            UNLOCK();
          } while (!bVar9);
          if (lVar8 != -1) {
            local_60 = *(long *)(lVar4 + 0x10);
          }
        }
      }
      else {
        local_50 = strlen(pcVar3);
        local_58 = pcVar3;
        String::parse_latin1((StrRange *)&local_60);
      }
    }
LAB_0010491f:
    cVar6 = String::operator==(param_1,(String *)&local_60);
    lVar4 = local_60;
    if (local_60 != 0) {
      LOCK();
      plVar1 = (long *)(local_60 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_60 = 0;
        Memory::free_static((void *)(lVar4 + -0x10),false);
      }
    }
    if (cVar6 != '\0') goto LAB_001049d3;
  }
  cVar6 = String::operator==(param_1,"RenderData");
  if (cVar6 == '\0') {
    for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
      lVar4 = *(long *)(lVar2 + 0x20);
      if (lVar4 == 0) {
        local_60 = 0;
      }
      else {
        pcVar3 = *(char **)(lVar4 + 8);
        local_60 = 0;
        if (pcVar3 == (char *)0x0) {
          plVar1 = (long *)(*(long *)(lVar4 + 0x10) + -0x10);
          if (*(long *)(lVar4 + 0x10) != 0) {
            do {
              lVar5 = *plVar1;
              if (lVar5 == 0) goto LAB_00104a83;
              LOCK();
              lVar8 = *plVar1;
              bVar9 = lVar5 == lVar8;
              if (bVar9) {
                *plVar1 = lVar5 + 1;
                lVar8 = lVar5;
              }
              UNLOCK();
            } while (!bVar9);
            if (lVar8 != -1) {
              local_60 = *(long *)(lVar4 + 0x10);
            }
          }
        }
        else {
          local_50 = strlen(pcVar3);
          local_58 = pcVar3;
          String::parse_latin1((StrRange *)&local_60);
        }
      }
LAB_00104a83:
      cVar6 = String::operator==(param_1,(String *)&local_60);
      lVar4 = local_60;
      if (local_60 != 0) {
        LOCK();
        plVar1 = (long *)(local_60 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_60 = 0;
          Memory::free_static((void *)(lVar4 + -0x10),false);
        }
      }
      if (cVar6 != '\0') goto LAB_001049d3;
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = String::operator==(param_1,"Object");
      return uVar7;
    }
  }
  else {
LAB_001049d3:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RenderDataExtension::is_class(String const&) const */

undefined8 __thiscall RenderDataExtension::is_class(RenderDataExtension *this,String *param_1)

{
  long *plVar1;
  long lVar2;
  char *__s;
  long lVar3;
  long lVar4;
  char cVar5;
  long lVar6;
  undefined8 uVar7;
  long in_FS_OFFSET;
  bool bVar8;
  long local_60;
  char *local_58;
  size_t local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
    lVar3 = *(long *)(lVar2 + 0x20);
    if (lVar3 == 0) {
      local_60 = 0;
    }
    else {
      __s = *(char **)(lVar3 + 8);
      local_60 = 0;
      if (__s == (char *)0x0) {
        plVar1 = (long *)(*(long *)(lVar3 + 0x10) + -0x10);
        if (*(long *)(lVar3 + 0x10) != 0) {
          do {
            lVar4 = *plVar1;
            if (lVar4 == 0) goto LAB_00104baf;
            LOCK();
            lVar6 = *plVar1;
            bVar8 = lVar4 == lVar6;
            if (bVar8) {
              *plVar1 = lVar4 + 1;
              lVar6 = lVar4;
            }
            UNLOCK();
          } while (!bVar8);
          if (lVar6 != -1) {
            local_60 = *(long *)(lVar3 + 0x10);
          }
        }
      }
      else {
        local_50 = strlen(__s);
        local_58 = __s;
        String::parse_latin1((StrRange *)&local_60);
      }
    }
LAB_00104baf:
    cVar5 = String::operator==(param_1,(String *)&local_60);
    lVar3 = local_60;
    if (local_60 != 0) {
      LOCK();
      plVar1 = (long *)(local_60 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_60 = 0;
        Memory::free_static((void *)(lVar3 + -0x10),false);
      }
    }
    if (cVar5 != '\0') goto LAB_00104c63;
  }
  cVar5 = String::operator==(param_1,"RenderDataExtension");
  if (cVar5 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = RenderData::is_class((RenderData *)this,param_1);
      return uVar7;
    }
  }
  else {
LAB_00104c63:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RefCounted::is_class(String const&) const */

undefined8 __thiscall RefCounted::is_class(RefCounted *this,String *param_1)

{
  long *plVar1;
  long lVar2;
  char *pcVar3;
  long lVar4;
  long lVar5;
  char cVar6;
  undefined8 uVar7;
  long lVar8;
  long in_FS_OFFSET;
  bool bVar9;
  long local_60;
  char *local_58;
  size_t local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
    lVar4 = *(long *)(lVar2 + 0x20);
    if (lVar4 == 0) {
      local_60 = 0;
    }
    else {
      pcVar3 = *(char **)(lVar4 + 8);
      local_60 = 0;
      if (pcVar3 == (char *)0x0) {
        plVar1 = (long *)(*(long *)(lVar4 + 0x10) + -0x10);
        if (*(long *)(lVar4 + 0x10) != 0) {
          do {
            lVar5 = *plVar1;
            if (lVar5 == 0) goto LAB_00104d2f;
            LOCK();
            lVar8 = *plVar1;
            bVar9 = lVar5 == lVar8;
            if (bVar9) {
              *plVar1 = lVar5 + 1;
              lVar8 = lVar5;
            }
            UNLOCK();
          } while (!bVar9);
          if (lVar8 != -1) {
            local_60 = *(long *)(lVar4 + 0x10);
          }
        }
      }
      else {
        local_50 = strlen(pcVar3);
        local_58 = pcVar3;
        String::parse_latin1((StrRange *)&local_60);
      }
    }
LAB_00104d2f:
    cVar6 = String::operator==(param_1,(String *)&local_60);
    lVar4 = local_60;
    if (local_60 != 0) {
      LOCK();
      plVar1 = (long *)(local_60 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_60 = 0;
        Memory::free_static((void *)(lVar4 + -0x10),false);
      }
    }
    if (cVar6 != '\0') goto LAB_00104de3;
  }
  cVar6 = String::operator==(param_1,"RefCounted");
  if (cVar6 == '\0') {
    for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
      lVar4 = *(long *)(lVar2 + 0x20);
      if (lVar4 == 0) {
        local_60 = 0;
      }
      else {
        pcVar3 = *(char **)(lVar4 + 8);
        local_60 = 0;
        if (pcVar3 == (char *)0x0) {
          plVar1 = (long *)(*(long *)(lVar4 + 0x10) + -0x10);
          if (*(long *)(lVar4 + 0x10) != 0) {
            do {
              lVar5 = *plVar1;
              if (lVar5 == 0) goto LAB_00104e93;
              LOCK();
              lVar8 = *plVar1;
              bVar9 = lVar5 == lVar8;
              if (bVar9) {
                *plVar1 = lVar5 + 1;
                lVar8 = lVar5;
              }
              UNLOCK();
            } while (!bVar9);
            if (lVar8 != -1) {
              local_60 = *(long *)(lVar4 + 0x10);
            }
          }
        }
        else {
          local_50 = strlen(pcVar3);
          local_58 = pcVar3;
          String::parse_latin1((StrRange *)&local_60);
        }
      }
LAB_00104e93:
      cVar6 = String::operator==(param_1,(String *)&local_60);
      lVar4 = local_60;
      if (local_60 != 0) {
        LOCK();
        plVar1 = (long *)(local_60 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_60 = 0;
          Memory::free_static((void *)(lVar4 + -0x10),false);
        }
      }
      if (cVar6 != '\0') goto LAB_00104de3;
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = String::operator==(param_1,"Object");
      return uVar7;
    }
  }
  else {
LAB_00104de3:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<RID>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<RID>::_gen_argument_type_info(int param_1)

{
  long *plVar1;
  long lVar2;
  undefined4 in_register_0000003c;
  undefined4 *puVar3;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  undefined *local_48;
  undefined8 local_40;
  long local_30;
  
  puVar3 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = 0;
  local_58 = 0;
  local_48 = &_LC5;
  local_40 = 0;
  String::parse_latin1((StrRange *)&local_58);
  *puVar3 = 0x17;
  puVar3[6] = 0;
  *(undefined8 *)(puVar3 + 8) = 0;
  *(undefined1 (*) [16])(puVar3 + 2) = (undefined1  [16])0x0;
  if (local_58 == 0) {
    puVar3[10] = 6;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar3 + 8),(CowData *)&local_58);
    puVar3[10] = 6;
    if (puVar3[6] == 0x11) {
      StringName::StringName((StringName *)&local_48,(String *)(puVar3 + 8),false);
      if (*(undefined **)(puVar3 + 4) == local_48) {
        lVar2 = local_58;
        if ((StringName::configured != '\0') && (local_48 != (undefined *)0x0)) {
          StringName::unref();
          lVar2 = local_58;
        }
      }
      else {
        StringName::unref();
        *(undefined **)(puVar3 + 4) = local_48;
        lVar2 = local_58;
      }
      goto joined_r0x0010508c;
    }
  }
  StringName::operator=((StringName *)(puVar3 + 4),(StringName *)&local_50);
  lVar2 = local_58;
joined_r0x0010508c:
  local_58 = lVar2;
  if (lVar2 != 0) {
    LOCK();
    plVar1 = (long *)(lVar2 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_58 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_50 != 0)) {
    StringName::unref();
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Ref<RenderSceneBuffers>>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<Ref<RenderSceneBuffers>>::_gen_argument_type_info(int param_1)

{
  long *plVar1;
  long lVar2;
  undefined4 in_register_0000003c;
  undefined4 *puVar3;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  puVar3 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = 0;
  local_58 = 0;
  local_48 = "RenderSceneBuffers";
  local_40 = 0x12;
  String::parse_latin1((StrRange *)&local_58);
  *puVar3 = 0x18;
  puVar3[6] = 0x11;
  *(undefined8 *)(puVar3 + 8) = 0;
  *(undefined1 (*) [16])(puVar3 + 2) = (undefined1  [16])0x0;
  if (local_58 == 0) {
    puVar3[10] = 6;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar3 + 8),(CowData *)&local_58);
    puVar3[10] = 6;
    if (puVar3[6] != 0x11) {
      StringName::operator=((StringName *)(puVar3 + 4),(StringName *)&local_50);
      goto LAB_00105190;
    }
  }
  StringName::StringName((StringName *)&local_48,(String *)(puVar3 + 8),false);
  if (*(char **)(puVar3 + 4) == local_48) {
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  else {
    StringName::unref();
    *(char **)(puVar3 + 4) = local_48;
  }
LAB_00105190:
  lVar2 = local_58;
  if (local_58 != 0) {
    LOCK();
    plVar1 = (long *)(local_58 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_58 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_50 != 0)) {
    StringName::unref();
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RefCounted::_initialize_classv() */

void RefCounted::_initialize_classv(void)

{
  long *plVar1;
  long lVar2;
  long in_FS_OFFSET;
  long local_50;
  long local_48;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (initialize_class()::initialized == '\0') {
    Object::initialize_class();
    local_48 = 0;
    local_38 = "Object";
    local_30 = 6;
    String::parse_latin1((StrRange *)&local_48);
    StringName::StringName((StringName *)&local_40,(String *)&local_48,false);
    local_38 = "RefCounted";
    local_50 = 0;
    local_30 = 10;
    String::parse_latin1((StrRange *)&local_50);
    StringName::StringName((StringName *)&local_38,(String *)&local_50,false);
    ClassDB::_add_class2((StringName *)&local_38,(StringName *)&local_40);
    if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
      StringName::unref();
    }
    lVar2 = local_50;
    if (local_50 != 0) {
      LOCK();
      plVar1 = (long *)(local_50 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_50 = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
    if ((StringName::configured != '\0') && (local_40 != 0)) {
      StringName::unref();
    }
    lVar2 = local_48;
    if (local_48 != 0) {
      LOCK();
      plVar1 = (long *)(local_48 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_48 = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
    if ((code *)_GLOBAL_OFFSET_TABLE_ != Object::_bind_methods) {
      RefCounted::_bind_methods();
    }
    initialize_class()::initialized = '\x01';
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RefCounted::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void RefCounted::_get_property_listv(List *param_1,bool param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined1 (*pauVar4) [16];
  undefined4 *puVar5;
  undefined7 in_register_00000031;
  List *pLVar6;
  long in_FS_OFFSET;
  long local_98;
  long local_90;
  long local_88;
  long local_80;
  char *local_78;
  long local_70;
  long local_68;
  int local_60;
  long local_58;
  undefined4 local_50;
  long local_40;
  
  pLVar6 = (List *)CONCAT71(in_register_00000031,param_2);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_88 = 0;
  local_90 = 0;
  local_78 = "RefCounted";
  local_70 = 10;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "RefCounted";
  local_98 = 0;
  local_70 = 10;
  String::parse_latin1((StrRange *)&local_98);
  local_78 = (char *)((ulong)local_78 & 0xffffffff00000000);
  local_70 = 0;
  if (local_98 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)&local_98);
  }
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  if (local_90 == 0) {
LAB_00105578:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00105578;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)pLVar6;
      local_68 = local_80;
      goto joined_r0x00105596;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)pLVar6;
joined_r0x00105596:
  if (lVar2 == 0) {
    pauVar4 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])pLVar6 = pauVar4;
    *(undefined4 *)pauVar4[1] = 0;
    *pauVar4 = (undefined1  [16])0x0;
  }
  puVar5 = (undefined4 *)operator_new(0x48,DefaultAllocator::alloc);
  *(undefined8 *)(puVar5 + 8) = 0;
  *(undefined1 (*) [16])(puVar5 + 2) = (undefined1  [16])0x0;
  *puVar5 = 0;
  puVar5[6] = 0;
  puVar5[10] = 6;
  *(undefined8 *)(puVar5 + 0x10) = 0;
  *(undefined1 (*) [16])(puVar5 + 0xc) = (undefined1  [16])0x0;
  *puVar5 = local_78._0_4_;
  if (local_70 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar5 + 2),(CowData *)&local_70);
  }
  StringName::operator=((StringName *)(puVar5 + 4),(StringName *)&local_68);
  puVar5[6] = local_60;
  if (*(long *)(puVar5 + 8) != local_58) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar5 + 8),(CowData *)&local_58);
  }
  lVar3 = local_58;
  puVar5[10] = local_50;
  plVar1 = *(long **)pLVar6;
  lVar2 = plVar1[1];
  *(undefined8 *)(puVar5 + 0xc) = 0;
  *(long **)(puVar5 + 0x10) = plVar1;
  *(long *)(puVar5 + 0xe) = lVar2;
  if (lVar2 != 0) {
    *(undefined4 **)(lVar2 + 0x30) = puVar5;
  }
  plVar1[1] = (long)puVar5;
  if (*plVar1 == 0) {
    *plVar1 = (long)puVar5;
  }
  *(int *)(plVar1 + 2) = (int)plVar1[2] + 1;
  if (local_58 != 0) {
    LOCK();
    plVar1 = (long *)(local_58 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_58 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  lVar2 = local_70;
  if (local_70 != 0) {
    LOCK();
    plVar1 = (long *)(local_70 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_70 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  lVar2 = local_98;
  if (local_98 != 0) {
    LOCK();
    plVar1 = (long *)(local_98 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_98 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  lVar2 = local_90;
  if (local_90 != 0) {
    LOCK();
    plVar1 = (long *)(local_90 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_90 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"RefCounted",false);
  ClassDB::get_property_list((StringName *)&local_78,pLVar6,true,(Object *)param_1);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RenderData::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void RenderData::_get_property_listv(List *param_1,bool param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined1 (*pauVar4) [16];
  undefined4 *puVar5;
  undefined7 in_register_00000031;
  List *pLVar6;
  long in_FS_OFFSET;
  long local_98;
  long local_90;
  long local_88;
  long local_80;
  char *local_78;
  long local_70;
  long local_68;
  int local_60;
  long local_58;
  undefined4 local_50;
  long local_40;
  
  pLVar6 = (List *)CONCAT71(in_register_00000031,param_2);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_88 = 0;
  local_90 = 0;
  local_78 = "RenderData";
  local_70 = 10;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "RenderData";
  local_98 = 0;
  local_70 = 10;
  String::parse_latin1((StrRange *)&local_98);
  local_78 = (char *)((ulong)local_78 & 0xffffffff00000000);
  local_70 = 0;
  if (local_98 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)&local_98);
  }
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  if (local_90 == 0) {
LAB_00105968:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00105968;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)pLVar6;
      local_68 = local_80;
      goto joined_r0x00105986;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)pLVar6;
joined_r0x00105986:
  if (lVar2 == 0) {
    pauVar4 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])pLVar6 = pauVar4;
    *(undefined4 *)pauVar4[1] = 0;
    *pauVar4 = (undefined1  [16])0x0;
  }
  puVar5 = (undefined4 *)operator_new(0x48,DefaultAllocator::alloc);
  *(undefined8 *)(puVar5 + 8) = 0;
  *(undefined1 (*) [16])(puVar5 + 2) = (undefined1  [16])0x0;
  *puVar5 = 0;
  puVar5[6] = 0;
  puVar5[10] = 6;
  *(undefined8 *)(puVar5 + 0x10) = 0;
  *(undefined1 (*) [16])(puVar5 + 0xc) = (undefined1  [16])0x0;
  *puVar5 = local_78._0_4_;
  if (local_70 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar5 + 2),(CowData *)&local_70);
  }
  StringName::operator=((StringName *)(puVar5 + 4),(StringName *)&local_68);
  puVar5[6] = local_60;
  if (*(long *)(puVar5 + 8) != local_58) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar5 + 8),(CowData *)&local_58);
  }
  lVar3 = local_58;
  puVar5[10] = local_50;
  plVar1 = *(long **)pLVar6;
  lVar2 = plVar1[1];
  *(undefined8 *)(puVar5 + 0xc) = 0;
  *(long **)(puVar5 + 0x10) = plVar1;
  *(long *)(puVar5 + 0xe) = lVar2;
  if (lVar2 != 0) {
    *(undefined4 **)(lVar2 + 0x30) = puVar5;
  }
  plVar1[1] = (long)puVar5;
  if (*plVar1 == 0) {
    *plVar1 = (long)puVar5;
  }
  *(int *)(plVar1 + 2) = (int)plVar1[2] + 1;
  if (local_58 != 0) {
    LOCK();
    plVar1 = (long *)(local_58 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_58 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  lVar2 = local_70;
  if (local_70 != 0) {
    LOCK();
    plVar1 = (long *)(local_70 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_70 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  lVar2 = local_98;
  if (local_98 != 0) {
    LOCK();
    plVar1 = (long *)(local_98 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_98 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  lVar2 = local_90;
  if (local_90 != 0) {
    LOCK();
    plVar1 = (long *)(local_90 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_90 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"RenderData",false);
  ClassDB::get_property_list((StringName *)&local_78,pLVar6,true,(Object *)param_1);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RenderDataExtension::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall
RenderDataExtension::_get_property_listv(RenderDataExtension *this,List *param_1,bool param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined1 (*pauVar4) [16];
  undefined4 *puVar5;
  long in_FS_OFFSET;
  long local_98;
  long local_90;
  long local_88;
  long local_80;
  char *local_78;
  long local_70;
  long local_68;
  int local_60;
  long local_58;
  undefined4 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (!param_2) {
    RenderData::_get_property_listv((List *)this,SUB81(param_1,0));
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "RenderDataExtension";
  local_70 = 0x13;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "RenderDataExtension";
  local_98 = 0;
  local_70 = 0x13;
  String::parse_latin1((StrRange *)&local_98);
  local_78 = (char *)((ulong)local_78 & 0xffffffff00000000);
  local_70 = 0;
  if (local_98 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)&local_98);
  }
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  if (local_90 == 0) {
LAB_00105d68:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00105d68;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x00105d85;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x00105d85:
  if (lVar2 == 0) {
    pauVar4 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])param_1 = pauVar4;
    *(undefined4 *)pauVar4[1] = 0;
    *pauVar4 = (undefined1  [16])0x0;
  }
  puVar5 = (undefined4 *)operator_new(0x48,DefaultAllocator::alloc);
  *(undefined8 *)(puVar5 + 8) = 0;
  *(undefined1 (*) [16])(puVar5 + 2) = (undefined1  [16])0x0;
  *puVar5 = 0;
  puVar5[6] = 0;
  puVar5[10] = 6;
  *(undefined8 *)(puVar5 + 0x10) = 0;
  *(undefined1 (*) [16])(puVar5 + 0xc) = (undefined1  [16])0x0;
  *puVar5 = local_78._0_4_;
  if (local_70 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar5 + 2),(CowData *)&local_70);
  }
  StringName::operator=((StringName *)(puVar5 + 4),(StringName *)&local_68);
  puVar5[6] = local_60;
  if (*(long *)(puVar5 + 8) != local_58) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar5 + 8),(CowData *)&local_58);
  }
  lVar3 = local_58;
  puVar5[10] = local_50;
  plVar1 = *(long **)param_1;
  lVar2 = plVar1[1];
  *(undefined8 *)(puVar5 + 0xc) = 0;
  *(long **)(puVar5 + 0x10) = plVar1;
  *(long *)(puVar5 + 0xe) = lVar2;
  if (lVar2 != 0) {
    *(undefined4 **)(lVar2 + 0x30) = puVar5;
  }
  plVar1[1] = (long)puVar5;
  if (*plVar1 == 0) {
    *plVar1 = (long)puVar5;
  }
  *(int *)(plVar1 + 2) = (int)plVar1[2] + 1;
  if (local_58 != 0) {
    LOCK();
    plVar1 = (long *)(local_58 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_58 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  lVar2 = local_70;
  if (local_70 != 0) {
    LOCK();
    plVar1 = (long *)(local_70 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_70 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  lVar2 = local_98;
  if (local_98 != 0) {
    LOCK();
    plVar1 = (long *)(local_98 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_98 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  lVar2 = local_90;
  if (local_90 != 0) {
    LOCK();
    plVar1 = (long *)(local_90 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_90 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"RenderDataExtension",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      RenderData::_get_property_listv((List *)this,SUB81(param_1,0));
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* String::parse_latin1(char const*) */

void __thiscall String::parse_latin1(String *this,char *param_1)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 != (char *)0x0) {
    strlen(param_1);
  }
  String::parse_latin1((StrRange *)this);
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GetTypeInfo<RID, void>::get_class_info() */

GetTypeInfo<RID,void> * __thiscall
GetTypeInfo<RID,void>::get_class_info(GetTypeInfo<RID,void> *this)

{
  long *plVar1;
  long lVar2;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  undefined *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = 0;
  local_58 = 0;
  local_48 = &_LC5;
  local_40 = 0;
  String::parse_latin1((StrRange *)&local_58);
  *(undefined4 *)this = 0x17;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined1 (*) [16])(this + 8) = (undefined1  [16])0x0;
  if (local_58 == 0) {
    *(undefined4 *)(this + 0x28) = 6;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(this + 0x20),(CowData *)&local_58);
    *(undefined4 *)(this + 0x28) = 6;
    if (*(int *)(this + 0x18) == 0x11) {
      StringName::StringName((StringName *)&local_48,(String *)(this + 0x20),false);
      if (*(undefined **)(this + 0x10) == local_48) {
        lVar2 = local_58;
        if ((StringName::configured != '\0') && (local_48 != (undefined *)0x0)) {
          StringName::unref();
          lVar2 = local_58;
        }
      }
      else {
        StringName::unref();
        *(undefined **)(this + 0x10) = local_48;
        lVar2 = local_58;
      }
      goto joined_r0x001061dc;
    }
  }
  StringName::operator=((StringName *)(this + 0x10),(StringName *)&local_50);
  lVar2 = local_58;
joined_r0x001061dc:
  local_58 = lVar2;
  if (lVar2 != 0) {
    LOCK();
    plVar1 = (long *)(lVar2 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_58 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_50 != 0)) {
    StringName::unref();
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RenderSceneBuffersExtension::~RenderSceneBuffersExtension() */

void __thiscall
RenderSceneBuffersExtension::~RenderSceneBuffersExtension(RenderSceneBuffersExtension *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(undefined **)this = &__dso_handle;
  if (bVar1) {
    if (*(long *)(this + 0x1e0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001062d1;
    }
    if (*(long *)(this + 0x1c8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001062d1;
    }
    if (*(long *)(this + 0x1b0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001062d1;
    }
    if (*(long *)(this + 0x198) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001062d1;
    }
    if (*(long *)(this + 0x180) != 0) {
      StringName::unref();
    }
  }
LAB_001062d1:
  *(undefined ***)this = &PTR__initialize_classv_00109340;
  Object::~Object((Object *)this);
  operator_delete(this,0x1f8);
  return;
}



/* List<PropertyInfo, DefaultAllocator>::~List() */

void __thiscall
List<PropertyInfo,DefaultAllocator>::~List(List<PropertyInfo,DefaultAllocator> *this)

{
  long *plVar1;
  void *pvVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)this;
  if (plVar5 == (long *)0x0) {
    return;
  }
  do {
    pvVar2 = (void *)*plVar5;
    if (pvVar2 == (void *)0x0) {
      if ((int)plVar5[2] != 0) {
        _err_print_error("~List","./core/templates/list.h",0x316,
                         "Condition \"_data->size_cache\" is true.",0,0);
        return;
      }
      break;
    }
    if (*(long **)((long)pvVar2 + 0x40) == plVar5) {
      lVar4 = *(long *)((long)pvVar2 + 0x30);
      lVar3 = *(long *)((long)pvVar2 + 0x38);
      *plVar5 = lVar4;
      if (pvVar2 == (void *)plVar5[1]) {
        plVar5[1] = lVar3;
      }
      if (lVar3 != 0) {
        *(long *)(lVar3 + 0x30) = lVar4;
        lVar4 = *(long *)((long)pvVar2 + 0x30);
      }
      if (lVar4 != 0) {
        *(long *)(lVar4 + 0x38) = lVar3;
      }
      if (*(long *)((long)pvVar2 + 0x20) != 0) {
        LOCK();
        plVar1 = (long *)(*(long *)((long)pvVar2 + 0x20) + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          lVar4 = *(long *)((long)pvVar2 + 0x20);
          *(undefined8 *)((long)pvVar2 + 0x20) = 0;
          Memory::free_static((void *)(lVar4 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (*(long *)((long)pvVar2 + 0x10) != 0)) {
        StringName::unref();
      }
      if (*(long *)((long)pvVar2 + 8) != 0) {
        LOCK();
        plVar1 = (long *)(*(long *)((long)pvVar2 + 8) + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          lVar4 = *(long *)((long)pvVar2 + 8);
          *(undefined8 *)((long)pvVar2 + 8) = 0;
          Memory::free_static((void *)(lVar4 + -0x10),false);
        }
      }
      Memory::free_static(pvVar2,false);
      *(int *)(plVar5 + 2) = (int)plVar5[2] + -1;
    }
    else {
      _err_print_error("erase","./core/templates/list.h",0xe7,
                       "Condition \"p_I->data != this\" is true. Returning: false",0,0);
    }
    plVar5 = *(long **)this;
  } while ((int)plVar5[2] != 0);
  Memory::free_static(plVar5,false);
  return;
}



/* MethodInfo::~MethodInfo() */

void __thiscall MethodInfo::~MethodInfo(MethodInfo *this)

{
  long *plVar1;
  int *piVar2;
  long lVar3;
  code *pcVar4;
  int *piVar5;
  long lVar6;
  
  if (*(long *)(this + 0x68) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x68) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar3 = *(long *)(this + 0x68);
      *(undefined8 *)(this + 0x68) = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  if (*(long *)(this + 0x50) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x50) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      piVar2 = *(int **)(this + 0x50);
      if (piVar2 == (int *)0x0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      lVar3 = *(long *)(piVar2 + -2);
      *(undefined8 *)(this + 0x50) = 0;
      if (lVar3 != 0) {
        lVar6 = 0;
        piVar5 = piVar2;
        do {
          if (Variant::needs_deinit[*piVar5] != '\0') {
            Variant::_clear_internal();
          }
          lVar6 = lVar6 + 1;
          piVar5 = piVar5 + 6;
        } while (lVar3 != lVar6);
      }
      Memory::free_static(piVar2 + -4,false);
    }
  }
  List<PropertyInfo,DefaultAllocator>::~List((List<PropertyInfo,DefaultAllocator> *)(this + 0x40));
  if (*(long *)(this + 0x28) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x28) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar3 = *(long *)(this + 0x28);
      *(undefined8 *)(this + 0x28) = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (*(long *)(this + 0x18) != 0)) {
    StringName::unref();
  }
  if (*(long *)(this + 0x10) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x10) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar3 = *(long *)(this + 0x10);
      *(undefined8 *)(this + 0x10) = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  if (*(long *)this != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)this + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar3 = *(long *)this;
      *(undefined8 *)this = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
      return;
    }
  }
  return;
}



/* GetTypeInfo<Ref<RenderSceneBuffers>, void>::get_class_info() */

GetTypeInfo<Ref<RenderSceneBuffers>,void> * __thiscall
GetTypeInfo<Ref<RenderSceneBuffers>,void>::get_class_info
          (GetTypeInfo<Ref<RenderSceneBuffers>,void> *this)

{
  long *plVar1;
  long lVar2;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = 0;
  local_58 = 0;
  local_48 = "RenderSceneBuffers";
  local_40 = 0x12;
  String::parse_latin1((StrRange *)&local_58);
  *(undefined4 *)this = 0x18;
  *(undefined4 *)(this + 0x18) = 0x11;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined1 (*) [16])(this + 8) = (undefined1  [16])0x0;
  if (local_58 == 0) {
    *(undefined4 *)(this + 0x28) = 6;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(this + 0x20),(CowData *)&local_58);
    *(undefined4 *)(this + 0x28) = 6;
    if (*(int *)(this + 0x18) != 0x11) {
      StringName::operator=((StringName *)(this + 0x10),(StringName *)&local_50);
      goto LAB_00106750;
    }
  }
  StringName::StringName((StringName *)&local_48,(String *)(this + 0x20),false);
  if (*(char **)(this + 0x10) == local_48) {
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  else {
    StringName::unref();
    *(char **)(this + 0x10) = local_48;
  }
LAB_00106750:
  lVar2 = local_58;
  if (local_58 != 0) {
    LOCK();
    plVar1 = (long *)(local_58 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_58 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_50 != 0)) {
    StringName::unref();
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CowData<char32_t>::_unref() */

void __thiscall CowData<char32_t>::_unref(CowData<char32_t> *this)

{
  long *plVar1;
  long lVar2;
  
  if (*(long *)this == 0) {
    return;
  }
  LOCK();
  plVar1 = (long *)(*(long *)this + -0x10);
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 != 0) {
    *(undefined8 *)this = 0;
    return;
  }
  lVar2 = *(long *)this;
  *(undefined8 *)this = 0;
  Memory::free_static((void *)(lVar2 + -0x10),false);
  return;
}



/* MethodBind* create_method_bind<RenderData, Ref<RenderSceneBuffers>>(Ref<RenderSceneBuffers>
   (RenderData::*)() const) */

MethodBind * create_method_bind<RenderData,Ref<RenderSceneBuffers>>(_func_Ref *param_1)

{
  long *plVar1;
  long lVar2;
  MethodBind *this;
  undefined8 in_RSI;
  long in_FS_OFFSET;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(this);
  *(_func_Ref **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_001097a0;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "RenderData";
  local_30 = 10;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
  StringName::operator=((StringName *)(this + 0x18),(StringName *)&local_38);
  if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
    StringName::unref();
  }
  lVar2 = local_40;
  if (local_40 != 0) {
    LOCK();
    plVar1 = (long *)(local_40 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_40 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBind* create_method_bind<RenderData, RenderSceneData*>(RenderSceneData* (RenderData::*)()
   const) */

MethodBind * create_method_bind<RenderData,RenderSceneData*>(_func_RenderSceneData_ptr *param_1)

{
  long *plVar1;
  long lVar2;
  MethodBind *this;
  undefined8 in_RSI;
  long in_FS_OFFSET;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(this);
  *(_func_RenderSceneData_ptr **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00109800;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "RenderData";
  local_30 = 10;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
  StringName::operator=((StringName *)(this + 0x18),(StringName *)&local_38);
  if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
    StringName::unref();
  }
  lVar2 = local_40;
  if (local_40 != 0) {
    LOCK();
    plVar1 = (long *)(local_40 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_40 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBind* create_method_bind<RenderData, RID>(RID (RenderData::*)() const) */

MethodBind * create_method_bind<RenderData,RID>(_func_RID *param_1)

{
  long *plVar1;
  long lVar2;
  MethodBind *this;
  undefined8 in_RSI;
  long in_FS_OFFSET;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(this);
  *(_func_RID **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00109860;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "RenderData";
  local_30 = 10;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
  StringName::operator=((StringName *)(this + 0x18),(StringName *)&local_38);
  if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
    StringName::unref();
  }
  lVar2 = local_40;
  if (local_40 != 0) {
    LOCK();
    plVar1 = (long *)(local_40 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_40 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RenderData::_bind_methods() [clone .cold] */

void RenderData::_bind_methods(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* RenderDataExtension::_bind_methods() [clone .cold] */

void RenderDataExtension::_bind_methods(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* RenderData::_initialize_classv() */

void RenderData::_initialize_classv(void)

{
  long *plVar1;
  long lVar2;
  long in_FS_OFFSET;
  long local_50;
  long local_48;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (initialize_class()::initialized == '\0') {
    Object::initialize_class();
    local_48 = 0;
    local_38 = "Object";
    local_30 = 6;
    String::parse_latin1((StrRange *)&local_48);
    StringName::StringName((StringName *)&local_40,(String *)&local_48,false);
    local_38 = "RenderData";
    local_50 = 0;
    local_30 = 10;
    String::parse_latin1((StrRange *)&local_50);
    StringName::StringName((StringName *)&local_38,(String *)&local_50,false);
    ClassDB::_add_class2((StringName *)&local_38,(StringName *)&local_40);
    if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
      StringName::unref();
    }
    lVar2 = local_50;
    if (local_50 != 0) {
      LOCK();
      plVar1 = (long *)(local_50 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_50 = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
    if ((StringName::configured != '\0') && (local_40 != 0)) {
      StringName::unref();
    }
    lVar2 = local_48;
    if (local_48 != 0) {
      LOCK();
      plVar1 = (long *)(local_48 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_48 = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
        _bind_methods();
        initialize_class()::initialized = '\x01';
        goto LAB_00106d25;
      }
    }
    _bind_methods();
    initialize_class()::initialized = '\x01';
  }
LAB_00106d25:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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



/* RenderDataExtension::_initialize_classv() */

void RenderDataExtension::_initialize_classv(void)

{
  long *plVar1;
  long lVar2;
  long in_FS_OFFSET;
  long local_60;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (initialize_class()::initialized != '\0') goto LAB_001070a9;
  if (RenderData::initialize_class()::initialized == '\0') {
    Object::initialize_class();
    local_58 = 0;
    local_40 = 6;
    local_48 = "Object";
    String::parse_latin1((StrRange *)&local_58);
    StringName::StringName((StringName *)&local_50,(String *)&local_58,false);
    local_48 = "RenderData";
    local_60 = 0;
    local_40 = 10;
    String::parse_latin1((StrRange *)&local_60);
    StringName::StringName((StringName *)&local_48,(String *)&local_60,false);
    ClassDB::_add_class2((StringName *)&local_48,(StringName *)&local_50);
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
    lVar2 = local_60;
    if (local_60 != 0) {
      LOCK();
      plVar1 = (long *)(local_60 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_60 = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
    if ((StringName::configured != '\0') && (local_50 != 0)) {
      StringName::unref();
    }
    lVar2 = local_58;
    if (local_58 != 0) {
      LOCK();
      plVar1 = (long *)(local_58 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_58 = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
        RenderData::_bind_methods();
        RenderData::initialize_class()::initialized = '\x01';
        goto LAB_00106fa5;
      }
    }
    RenderData::_bind_methods();
    RenderData::initialize_class()::initialized = '\x01';
  }
LAB_00106fa5:
  local_48 = "RenderData";
  local_58 = 0;
  local_40 = 10;
  String::parse_latin1((StrRange *)&local_58);
  StringName::StringName((StringName *)&local_50,(String *)&local_58,false);
  local_48 = "RenderDataExtension";
  local_60 = 0;
  local_40 = 0x13;
  String::parse_latin1((StrRange *)&local_60);
  StringName::StringName((StringName *)&local_48,(String *)&local_60,false);
  ClassDB::_add_class2((StringName *)&local_48,(StringName *)&local_50);
  if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
    StringName::unref();
  }
  lVar2 = local_60;
  if (local_60 != 0) {
    LOCK();
    plVar1 = (long *)(local_60 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_60 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_50 != 0)) {
    StringName::unref();
  }
  lVar2 = local_58;
  if (local_58 != 0) {
    LOCK();
    plVar1 = (long *)(local_58 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_58 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  _bind_methods();
  initialize_class()::initialized = '\x01';
LAB_001070a9:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* CowData<unsigned int>::_unref() */

void __thiscall CowData<unsigned_int>::_unref(CowData<unsigned_int> *this)

{
  long *plVar1;
  long lVar2;
  
  if (*(long *)this == 0) {
    return;
  }
  LOCK();
  plVar1 = (long *)(*(long *)this + -0x10);
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 != 0) {
    *(undefined8 *)this = 0;
    return;
  }
  lVar2 = *(long *)this;
  *(undefined8 *)this = 0;
  Memory::free_static((void *)(lVar2 + -0x10),false);
  return;
}



/* WARNING: Removing unreachable block (ram,0x001073f8) */
/* WARNING: Removing unreachable block (ram,0x00107528) */
/* WARNING: Removing unreachable block (ram,0x001076f0) */
/* WARNING: Removing unreachable block (ram,0x00107534) */
/* WARNING: Removing unreachable block (ram,0x0010753e) */
/* WARNING: Removing unreachable block (ram,0x001076d0) */
/* WARNING: Removing unreachable block (ram,0x0010754a) */
/* WARNING: Removing unreachable block (ram,0x00107554) */
/* WARNING: Removing unreachable block (ram,0x001076b0) */
/* WARNING: Removing unreachable block (ram,0x00107560) */
/* WARNING: Removing unreachable block (ram,0x0010756a) */
/* WARNING: Removing unreachable block (ram,0x00107690) */
/* WARNING: Removing unreachable block (ram,0x00107576) */
/* WARNING: Removing unreachable block (ram,0x00107580) */
/* WARNING: Removing unreachable block (ram,0x00107670) */
/* WARNING: Removing unreachable block (ram,0x0010758c) */
/* WARNING: Removing unreachable block (ram,0x00107596) */
/* WARNING: Removing unreachable block (ram,0x00107650) */
/* WARNING: Removing unreachable block (ram,0x001075a2) */
/* WARNING: Removing unreachable block (ram,0x001075ac) */
/* WARNING: Removing unreachable block (ram,0x00107630) */
/* WARNING: Removing unreachable block (ram,0x001075b4) */
/* WARNING: Removing unreachable block (ram,0x001075ca) */
/* WARNING: Removing unreachable block (ram,0x001075d6) */
/* String vformat<StringName>(String const&, StringName const) */

undefined8 * vformat<StringName>(undefined8 *param_1,bool *param_2,StringName *param_3)

{
  char cVar1;
  Variant *this;
  int iVar2;
  long in_FS_OFFSET;
  Array local_c8 [8];
  undefined8 local_c0 [9];
  int local_78 [6];
  undefined8 local_60;
  undefined1 local_58 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Variant::Variant((Variant *)local_78,param_3);
  local_60 = 0;
  local_58 = (undefined1  [16])0x0;
  Array::Array(local_c8);
  iVar2 = (int)local_c8;
  Array::resize(iVar2);
  this = (Variant *)Array::operator[](iVar2);
  Variant::operator=(this,(Variant *)local_78);
  String::sprintf((Array *)local_c0,param_2);
  *param_1 = local_c0[0];
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



/* MethodBindTRC<RID>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTRC<RID>::call(Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  long lVar2;
  char *pcVar3;
  Variant *pVVar4;
  long *plVar5;
  undefined4 in_register_00000014;
  long *plVar6;
  int in_R8D;
  undefined4 *in_R9;
  long in_FS_OFFSET;
  long local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  
  plVar6 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar6 != (long *)0x0) && (plVar6[1] != 0)) && (*(char *)(plVar6[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(param_2 + 3));
    if (plVar6[1] == 0) {
      plVar5 = (long *)plVar6[0x23];
      if (plVar5 == (long *)0x0) {
        plVar5 = (long *)(**(code **)(*plVar6 + 0x40))(plVar6);
      }
    }
    else {
      plVar5 = (long *)(plVar6[1] + 0x20);
    }
    if (local_58 == (char *)*plVar5) {
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error(&_LC31,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      pcVar3 = local_58;
      if (local_58 != (char *)0x0) {
        LOCK();
        plVar6 = (long *)(local_58 + -0x10);
        *plVar6 = *plVar6 + -1;
        UNLOCK();
        if (*plVar6 == 0) {
          local_58 = (char *)0x0;
          Memory::free_static(pcVar3 + -0x10,false);
        }
      }
      lVar2 = local_60;
      if (local_60 != 0) {
        LOCK();
        plVar6 = (long *)(local_60 + -0x10);
        *plVar6 = *plVar6 + -1;
        UNLOCK();
        if (*plVar6 == 0) {
          local_60 = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_001078d0;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar4 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D == 0) {
    if ((param_2[5] == (Variant *)0x0) || (-1 < *(int *)(param_2[5] + -8))) {
      *in_R9 = 0;
      if (((ulong)pVVar4 & 1) != 0) {
        pVVar4 = *(Variant **)(pVVar4 + *(long *)((long)plVar6 + (long)pVVar1) + -1);
      }
      local_58 = (char *)(*(code *)pVVar4)();
      Variant::Variant((Variant *)local_48,(RID *)&local_58);
      if (Variant::needs_deinit[*(int *)param_1] != '\0') {
        Variant::_clear_internal();
      }
      *(undefined4 *)param_1 = local_48[0];
      *(undefined8 *)(param_1 + 8) = local_40;
      *(undefined8 *)(param_1 + 0x10) = uStack_38;
    }
    else {
      *in_R9 = 4;
      in_R9[2] = 0;
    }
  }
  else {
    *in_R9 = 3;
    in_R9[2] = 0;
  }
LAB_001078d0:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<RID>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTRC<RID>::validated_call
          (MethodBindTRC<RID> *this,Object *param_1,Variant **param_2,Variant *param_3)

{
  long lVar1;
  char *pcVar2;
  undefined8 uVar3;
  long *plVar5;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  code *pcVar4;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar5 = *(long **)(param_1 + 0x118);
      if (plVar5 == (long *)0x0) {
        plVar5 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar5 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar5) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x273,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      pcVar2 = local_48;
      if (local_48 != (char *)0x0) {
        LOCK();
        plVar5 = (long *)(local_48 + -0x10);
        *plVar5 = *plVar5 + -1;
        UNLOCK();
        if (*plVar5 == 0) {
          local_48 = (char *)0x0;
          Memory::free_static(pcVar2 + -0x10,false);
        }
      }
      lVar1 = local_50;
      if (local_50 != 0) {
        LOCK();
        plVar5 = (long *)(local_50 + -0x10);
        *plVar5 = *plVar5 + -1;
        UNLOCK();
        if (*plVar5 == 0) {
          local_50 = 0;
          Memory::free_static((void *)(lVar1 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00107bc2;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar4 = *(code **)(this + 0x58);
  if (((ulong)pcVar4 & 1) != 0) {
    pcVar4 = *(code **)(pcVar4 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  uVar3 = (*pcVar4)(param_1 + *(long *)(this + 0x60));
  *(undefined8 *)(param_3 + 8) = uVar3;
LAB_00107bc2:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<RID>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<RID>::ptrcall(MethodBindTRC<RID> *this,Object *param_1,void **param_2,void *param_3)

{
  long lVar1;
  char *pcVar2;
  undefined8 uVar3;
  long *plVar5;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  code *pcVar4;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar5 = *(long **)(param_1 + 0x118);
      if (plVar5 == (long *)0x0) {
        plVar5 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar5 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar5) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x27e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      pcVar2 = local_48;
      if (local_48 != (char *)0x0) {
        LOCK();
        plVar5 = (long *)(local_48 + -0x10);
        *plVar5 = *plVar5 + -1;
        UNLOCK();
        if (*plVar5 == 0) {
          local_48 = (char *)0x0;
          Memory::free_static(pcVar2 + -0x10,false);
        }
      }
      lVar1 = local_50;
      if (local_50 != 0) {
        LOCK();
        plVar5 = (long *)(local_50 + -0x10);
        *plVar5 = *plVar5 + -1;
        UNLOCK();
        if (*plVar5 == 0) {
          local_50 = 0;
          Memory::free_static((void *)(lVar1 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00107dc1;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar4 = *(code **)(this + 0x58);
  if (((ulong)pcVar4 & 1) != 0) {
    pcVar4 = *(code **)(pcVar4 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  uVar3 = (*pcVar4)(param_1 + *(long *)(this + 0x60));
  *(undefined8 *)param_3 = uVar3;
LAB_00107dc1:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<RenderSceneData*>::call(Object*, Variant const**, int, Callable::CallError&) const
    */

Object * MethodBindTRC<RenderSceneData*>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  long lVar2;
  char *pcVar3;
  Object *pOVar4;
  long *plVar6;
  undefined4 in_register_00000014;
  long *plVar7;
  int in_R8D;
  undefined4 *in_R9;
  long in_FS_OFFSET;
  long local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  Variant *pVVar5;
  
  plVar7 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar7 != (long *)0x0) && (plVar7[1] != 0)) && (*(char *)(plVar7[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(param_2 + 3));
    if (plVar7[1] == 0) {
      plVar6 = (long *)plVar7[0x23];
      if (plVar6 == (long *)0x0) {
        plVar6 = (long *)(**(code **)(*plVar7 + 0x40))(plVar7);
      }
    }
    else {
      plVar6 = (long *)(plVar7[1] + 0x20);
    }
    if (local_58 == (char *)*plVar6) {
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error(&_LC31,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      pcVar3 = local_58;
      if (local_58 != (char *)0x0) {
        LOCK();
        plVar7 = (long *)(local_58 + -0x10);
        *plVar7 = *plVar7 + -1;
        UNLOCK();
        if (*plVar7 == 0) {
          local_58 = (char *)0x0;
          Memory::free_static(pcVar3 + -0x10,false);
        }
      }
      lVar2 = local_60;
      if (local_60 != 0) {
        LOCK();
        plVar7 = (long *)(local_60 + -0x10);
        *plVar7 = *plVar7 + -1;
        UNLOCK();
        if (*plVar7 == 0) {
          local_60 = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_00108030;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar5 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D == 0) {
    if ((param_2[5] == (Variant *)0x0) || (-1 < *(int *)(param_2[5] + -8))) {
      *in_R9 = 0;
      if (((ulong)pVVar5 & 1) != 0) {
        pVVar5 = *(Variant **)(pVVar5 + *(long *)((long)plVar7 + (long)pVVar1) + -1);
      }
      pOVar4 = (Object *)(*(code *)pVVar5)();
      Variant::Variant((Variant *)local_48,pOVar4);
      if (Variant::needs_deinit[*(int *)param_1] != '\0') {
        Variant::_clear_internal();
      }
      *(undefined4 *)param_1 = local_48[0];
      *(undefined8 *)(param_1 + 8) = local_40;
      *(undefined8 *)(param_1 + 0x10) = uStack_38;
    }
    else {
      *in_R9 = 4;
      in_R9[2] = 0;
    }
  }
  else {
    *in_R9 = 3;
    in_R9[2] = 0;
  }
LAB_00108030:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<RenderSceneData*>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTRC<RenderSceneData*>::validated_call
          (MethodBindTRC<RenderSceneData*> *this,Object *param_1,Variant **param_2,Variant *param_3)

{
  long lVar1;
  char *pcVar2;
  code *pcVar3;
  long *plVar4;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar4 = *(long **)(param_1 + 0x118);
      if (plVar4 == (long *)0x0) {
        plVar4 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar4 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar4) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x273,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      pcVar2 = local_48;
      if (local_48 != (char *)0x0) {
        LOCK();
        plVar4 = (long *)(local_48 + -0x10);
        *plVar4 = *plVar4 + -1;
        UNLOCK();
        if (*plVar4 == 0) {
          local_48 = (char *)0x0;
          Memory::free_static(pcVar2 + -0x10,false);
        }
      }
      lVar1 = local_50;
      if (local_50 != 0) {
        LOCK();
        plVar4 = (long *)(local_50 + -0x10);
        *plVar4 = *plVar4 + -1;
        UNLOCK();
        if (*plVar4 == 0) {
          local_50 = 0;
          Memory::free_static((void *)(lVar1 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_00108455;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar3 = *(code **)(this + 0x58);
  if (((ulong)pcVar3 & 1) != 0) {
    pcVar3 = *(code **)(pcVar3 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  (*pcVar3)(param_1 + *(long *)(this + 0x60));
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    Variant::ObjData::ref_pointer((Object *)(param_3 + 8));
    return;
  }
LAB_00108455:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<RenderSceneData*>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<RenderSceneData*>::ptrcall
          (MethodBindTRC<RenderSceneData*> *this,Object *param_1,void **param_2,void *param_3)

{
  long lVar1;
  char *pcVar2;
  undefined8 uVar3;
  long *plVar5;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  code *pcVar4;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar5 = *(long **)(param_1 + 0x118);
      if (plVar5 == (long *)0x0) {
        plVar5 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar5 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar5) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x27e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      pcVar2 = local_48;
      if (local_48 != (char *)0x0) {
        LOCK();
        plVar5 = (long *)(local_48 + -0x10);
        *plVar5 = *plVar5 + -1;
        UNLOCK();
        if (*plVar5 == 0) {
          local_48 = (char *)0x0;
          Memory::free_static(pcVar2 + -0x10,false);
        }
      }
      lVar1 = local_50;
      if (local_50 != 0) {
        LOCK();
        plVar5 = (long *)(local_50 + -0x10);
        *plVar5 = *plVar5 + -1;
        UNLOCK();
        if (*plVar5 == 0) {
          local_50 = 0;
          Memory::free_static((void *)(lVar1 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_001084a1;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar4 = *(code **)(this + 0x58);
  if (((ulong)pcVar4 & 1) != 0) {
    pcVar4 = *(code **)(pcVar4 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  uVar3 = (*pcVar4)(param_1 + *(long *)(this + 0x60));
  *(undefined8 *)param_3 = uVar3;
LAB_001084a1:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Ref<RenderSceneBuffers>>::call(Object*, Variant const**, int, Callable::CallError&)
   const */

Object * MethodBindTRC<Ref<RenderSceneBuffers>>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Object *pOVar1;
  Variant *pVVar2;
  long lVar3;
  Object *pOVar4;
  char cVar5;
  Variant *pVVar6;
  long *plVar7;
  undefined4 in_register_00000014;
  long *plVar8;
  int in_R8D;
  undefined4 *in_R9;
  long in_FS_OFFSET;
  bool bVar9;
  long local_68;
  long local_60;
  Object *local_58;
  undefined8 local_50;
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  
  plVar8 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar8 != (long *)0x0) && (plVar8[1] != 0)) && (*(char *)(plVar8[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(param_2 + 3));
    if (plVar8[1] == 0) {
      plVar7 = (long *)plVar8[0x23];
      if (plVar7 == (long *)0x0) {
        plVar7 = (long *)(**(code **)(*plVar8 + 0x40))(plVar8);
      }
    }
    else {
      plVar7 = (long *)(plVar8[1] + 0x20);
    }
    if (local_58 == (Object *)*plVar7) {
      if ((StringName::configured != '\0') && (local_58 != (Object *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = (Object *)0x107718;
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error(&_LC31,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      pOVar4 = local_58;
      if (local_58 != (Object *)0x0) {
        LOCK();
        pOVar1 = local_58 + -0x10;
        *(long *)pOVar1 = *(long *)pOVar1 + -1;
        UNLOCK();
        if (*(long *)pOVar1 == 0) {
          local_58 = (Object *)0x0;
          Memory::free_static(pOVar4 + -0x10,false);
        }
      }
      lVar3 = local_60;
      if (local_60 != 0) {
        LOCK();
        plVar8 = (long *)(local_60 + -0x10);
        *plVar8 = *plVar8 + -1;
        UNLOCK();
        if (*plVar8 == 0) {
          local_60 = 0;
          Memory::free_static((void *)(lVar3 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_00108830;
    }
    if ((StringName::configured != '\0') && (local_58 != (Object *)0x0)) {
      StringName::unref();
    }
  }
  pVVar6 = param_2[0xb];
  pVVar2 = param_2[0xc];
  if (in_R8D != 0) {
    *in_R9 = 3;
    in_R9[2] = 0;
    goto LAB_00108830;
  }
  if ((param_2[5] != (Variant *)0x0) && (*(int *)(param_2[5] + -8) < 0)) {
    *in_R9 = 4;
    in_R9[2] = 0;
    goto LAB_00108830;
  }
  *in_R9 = 0;
  if (((ulong)pVVar6 & 1) != 0) {
    pVVar6 = *(Variant **)(pVVar6 + *(long *)((long)plVar8 + (long)pVVar2) + -1);
  }
  (*(code *)pVVar6)(&local_58);
  Variant::Variant((Variant *)local_48,local_58);
  if (Variant::needs_deinit[*(int *)param_1] != '\0') {
    Variant::_clear_internal();
  }
  *(undefined4 *)param_1 = local_48[0];
  *(undefined8 *)(param_1 + 8) = local_40;
  *(undefined8 *)(param_1 + 0x10) = uStack_38;
  if (local_58 == (Object *)0x0) goto LAB_00108830;
  cVar5 = RefCounted::unreference();
  pOVar4 = local_58;
  if (cVar5 == '\0') goto LAB_00108830;
  cVar5 = predelete_handler(local_58);
  if (cVar5 == '\0') goto LAB_00108830;
  if (*(code **)(*(long *)pOVar4 + 0x140) ==
      RenderSceneBuffersExtension::~RenderSceneBuffersExtension) {
    bVar9 = StringName::configured != '\0';
    *(undefined **)pOVar4 = &__dso_handle;
    if (bVar9) {
      if (*(long *)(pOVar4 + 0x1e0) != 0) {
        StringName::unref();
        if (StringName::configured == '\0') goto LAB_001087f9;
      }
      if (*(long *)(pOVar4 + 0x1c8) != 0) {
        StringName::unref();
        if (StringName::configured == '\0') goto LAB_001087f9;
      }
      if (*(long *)(pOVar4 + 0x1b0) != 0) {
        StringName::unref();
        if (StringName::configured == '\0') goto LAB_001087f9;
      }
      if (*(long *)(pOVar4 + 0x198) != 0) {
        StringName::unref();
        if (StringName::configured == '\0') goto LAB_001087f9;
      }
      if (*(long *)(pOVar4 + 0x180) != 0) {
        StringName::unref();
      }
    }
LAB_001087f9:
    *(undefined ***)pOVar4 = &PTR__initialize_classv_00109340;
    Object::~Object(pOVar4);
  }
  else {
    (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
  }
  Memory::free_static(pOVar4,false);
LAB_00108830:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Ref<RenderSceneBuffers>>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<Ref<RenderSceneBuffers>>::ptrcall
          (MethodBindTRC<Ref<RenderSceneBuffers>> *this,Object *param_1,void **param_2,void *param_3
          )

{
  long lVar1;
  char cVar2;
  code *pcVar3;
  Object *pOVar4;
  long *plVar5;
  Object *extraout_RDX;
  Object *pOVar6;
  long in_FS_OFFSET;
  bool bVar7;
  long local_58;
  long local_50;
  Object *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar5 = *(long **)(param_1 + 0x118);
      if (plVar5 == (long *)0x0) {
        plVar5 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar5 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (Object *)*plVar5) {
      if ((StringName::configured != '\0') && (local_48 != (Object *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = (Object *)0x107718;
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x27e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      pOVar6 = local_48;
      if (local_48 != (Object *)0x0) {
        LOCK();
        pOVar4 = local_48 + -0x10;
        *(void **)pOVar4 = (void *)((long)*(void **)pOVar4 + -1);
        UNLOCK();
        if (*(void **)pOVar4 == (void *)0x0) {
          local_48 = (Object *)0x0;
          Memory::free_static(pOVar6 + -0x10,false);
        }
      }
      lVar1 = local_50;
      if (local_50 != 0) {
        LOCK();
        plVar5 = (long *)(local_50 + -0x10);
        *plVar5 = *plVar5 + -1;
        UNLOCK();
        if (*plVar5 == 0) {
          local_50 = 0;
          Memory::free_static((void *)(lVar1 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00108b16;
    }
    param_2 = (void **)local_48;
    if ((StringName::configured != '\0') && (local_48 != (Object *)0x0)) {
      StringName::unref();
      param_2 = (void **)extraout_RDX;
    }
  }
  pcVar3 = *(code **)(this + 0x58);
  if (((ulong)pcVar3 & 1) != 0) {
    param_2 = *(void ***)(param_1 + *(long *)(this + 0x60));
    pcVar3 = *(code **)((Object *)((long)param_2 + -1) + (long)pcVar3);
  }
  (*pcVar3)((StringName *)&local_48,param_1 + *(long *)(this + 0x60),param_2);
  if (local_48 == (Object *)0x0) {
                    /* WARNING: Load size is inaccurate */
    pOVar6 = *param_3;
    if (pOVar6 == (Object *)0x0) goto LAB_00108b16;
    *(undefined8 *)param_3 = 0;
    goto LAB_00108b59;
  }
  pOVar4 = (Object *)__dynamic_cast(local_48,&Object::typeinfo,&RefCounted::typeinfo,0);
                    /* WARNING: Load size is inaccurate */
  pOVar6 = *param_3;
  if (pOVar6 != pOVar4) {
    *(Object **)param_3 = pOVar4;
    if (pOVar4 == (Object *)0x0) {
      if (pOVar6 != (Object *)0x0) goto LAB_00108b59;
    }
    else {
      cVar2 = RefCounted::reference();
      if (cVar2 == '\0') {
        *(undefined8 *)param_3 = 0;
      }
      if (pOVar6 != (Object *)0x0) {
LAB_00108b59:
        cVar2 = RefCounted::unreference();
        if (cVar2 != '\0') {
          cVar2 = predelete_handler(pOVar6);
          if (cVar2 != '\0') {
            (**(code **)(*(long *)pOVar6 + 0x140))(pOVar6);
            Memory::free_static(pOVar6,false);
          }
        }
      }
      if (local_48 == (Object *)0x0) goto LAB_00108b16;
    }
  }
  cVar2 = RefCounted::unreference();
  pOVar6 = local_48;
  if (cVar2 == '\0') goto LAB_00108b16;
  cVar2 = predelete_handler(local_48);
  if (cVar2 == '\0') goto LAB_00108b16;
  if (*(code **)(*(long *)pOVar6 + 0x140) ==
      RenderSceneBuffersExtension::~RenderSceneBuffersExtension) {
    bVar7 = StringName::configured != '\0';
    *(undefined **)pOVar6 = &__dso_handle;
    if (bVar7) {
      if (*(long *)(pOVar6 + 0x1e0) != 0) {
        StringName::unref();
        if (StringName::configured == '\0') goto LAB_00108c7d;
      }
      if (*(long *)(pOVar6 + 0x1c8) != 0) {
        StringName::unref();
        if (StringName::configured == '\0') goto LAB_00108c7d;
      }
      if (*(long *)(pOVar6 + 0x1b0) != 0) {
        StringName::unref();
        if (StringName::configured == '\0') goto LAB_00108c7d;
      }
      if (*(long *)(pOVar6 + 0x198) != 0) {
        StringName::unref();
        if (StringName::configured == '\0') goto LAB_00108c7d;
      }
      if (*(long *)(pOVar6 + 0x180) != 0) {
        StringName::unref();
      }
    }
LAB_00108c7d:
    *(undefined ***)pOVar6 = &PTR__initialize_classv_00109340;
    Object::~Object(pOVar6);
  }
  else {
    (**(code **)(*(long *)pOVar6 + 0x140))(pOVar6);
  }
  Memory::free_static(pOVar6,false);
LAB_00108b16:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Ref<RenderSceneBuffers>>::validated_call(Object*, Variant const**, Variant*) const
    */

void __thiscall
MethodBindTRC<Ref<RenderSceneBuffers>>::validated_call
          (MethodBindTRC<Ref<RenderSceneBuffers>> *this,Object *param_1,Variant **param_2,
          Variant *param_3)

{
  Variant **ppVVar1;
  Object *pOVar2;
  Object *pOVar3;
  Variant **ppVVar4;
  char cVar5;
  code *pcVar6;
  long *plVar7;
  Variant **extraout_RDX;
  long in_FS_OFFSET;
  bool bVar8;
  long local_58;
  Object *local_50;
  Variant **local_48;
  Object *local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar7 = *(long **)(param_1 + 0x118);
      if (plVar7 == (long *)0x0) {
        plVar7 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar7 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (Variant **)*plVar7) {
      if ((StringName::configured != '\0') && (local_48 != (Variant **)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = (Variant **)0x107718;
      local_50 = (Object *)0x0;
      local_40 = (Object *)0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x273,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      ppVVar4 = local_48;
      if (local_48 != (Variant **)0x0) {
        LOCK();
        ppVVar1 = local_48 + -2;
        *ppVVar1 = *ppVVar1 + -1;
        UNLOCK();
        if (*ppVVar1 == (Variant *)0x0) {
          local_48 = (Variant **)0x0;
          Memory::free_static(ppVVar4 + -2,false);
        }
      }
      pOVar3 = local_50;
      if (local_50 != (Object *)0x0) {
        LOCK();
        pOVar2 = local_50 + -0x10;
        *(long *)pOVar2 = *(long *)pOVar2 + -1;
        UNLOCK();
        if (*(long *)pOVar2 == 0) {
          local_50 = (Object *)0x0;
          Memory::free_static(pOVar3 + -0x10,false);
        }
      }
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00108ea6;
    }
    param_2 = local_48;
    if ((StringName::configured != '\0') && (local_48 != (Variant **)0x0)) {
      StringName::unref();
      param_2 = extraout_RDX;
    }
  }
  pcVar6 = *(code **)(this + 0x58);
  if (((ulong)pcVar6 & 1) != 0) {
    param_2 = *(Variant ***)(param_1 + *(long *)(this + 0x60));
    pcVar6 = *(code **)(pcVar6 + (long)param_2 + -1);
  }
  (*pcVar6)(&local_50,param_1 + *(long *)(this + 0x60),param_2);
  if (local_50 == (Object *)0x0) {
    Variant::ObjData::unref();
  }
  else {
    local_48 = *(Variant ***)(local_50 + 0x60);
    local_40 = local_50;
    Variant::ObjData::ref((ObjData *)(param_3 + 8));
  }
  if (local_50 == (Object *)0x0) goto LAB_00108ea6;
  cVar5 = RefCounted::unreference();
  pOVar3 = local_50;
  if (cVar5 == '\0') goto LAB_00108ea6;
  cVar5 = predelete_handler(local_50);
  if (cVar5 == '\0') goto LAB_00108ea6;
  if (*(code **)(*(long *)pOVar3 + 0x140) ==
      RenderSceneBuffersExtension::~RenderSceneBuffersExtension) {
    bVar8 = StringName::configured != '\0';
    *(undefined **)pOVar3 = &__dso_handle;
    if (bVar8) {
      if (*(long *)(pOVar3 + 0x1e0) != 0) {
        StringName::unref();
        if (StringName::configured == '\0') goto LAB_00108fbc;
      }
      if (*(long *)(pOVar3 + 0x1c8) != 0) {
        StringName::unref();
        if (StringName::configured == '\0') goto LAB_00108fbc;
      }
      if (*(long *)(pOVar3 + 0x1b0) != 0) {
        StringName::unref();
        if (StringName::configured == '\0') goto LAB_00108fbc;
      }
      if (*(long *)(pOVar3 + 0x198) != 0) {
        StringName::unref();
        if (StringName::configured == '\0') goto LAB_00108fbc;
      }
      if (*(long *)(pOVar3 + 0x180) != 0) {
        StringName::unref();
      }
    }
LAB_00108fbc:
    *(undefined ***)pOVar3 = &PTR__initialize_classv_00109340;
    Object::~Object(pOVar3);
  }
  else {
    (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
  }
  Memory::free_static(pOVar3,false);
LAB_00108ea6:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Control flow encountered bad instruction data */
/* StringName::~StringName() */

void __thiscall StringName::~StringName(StringName *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodInfo::~MethodInfo() */

void __thiscall MethodInfo::~MethodInfo(MethodInfo *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* List<PropertyInfo, DefaultAllocator>::~List() */

void __thiscall
List<PropertyInfo,DefaultAllocator>::~List(List<PropertyInfo,DefaultAllocator> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* RenderDataExtension::~RenderDataExtension() */

void __thiscall RenderDataExtension::~RenderDataExtension(RenderDataExtension *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* RenderSceneBuffersExtension::~RenderSceneBuffersExtension() */

void __thiscall
RenderSceneBuffersExtension::~RenderSceneBuffersExtension(RenderSceneBuffersExtension *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* RefCounted::~RefCounted() */

void __thiscall RefCounted::~RefCounted(RefCounted *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<RID>::~MethodBindTRC() */

void __thiscall MethodBindTRC<RID>::~MethodBindTRC(MethodBindTRC<RID> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<RenderSceneData*>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<RenderSceneData*>::~MethodBindTRC(MethodBindTRC<RenderSceneData*> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<Ref<RenderSceneBuffers>>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<Ref<RenderSceneBuffers>>::~MethodBindTRC(MethodBindTRC<Ref<RenderSceneBuffers>> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



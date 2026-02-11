
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



/* UPNPDevice::_bind_methods() */

void UPNPDevice::_bind_methods(void)

{
  Variant *pVVar1;
  long *plVar2;
  long lVar3;
  code *pcVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  MethodBind *pMVar11;
  uint uVar12;
  long *plVar13;
  Variant *pVVar14;
  long lVar15;
  long in_FS_OFFSET;
  undefined8 local_1a8;
  long local_1a0;
  long local_198;
  long local_190;
  long local_188;
  long local_180;
  long *local_178;
  undefined8 local_170;
  char *local_168;
  long local_160;
  long *local_158;
  int local_150;
  long local_148;
  undefined4 local_140;
  undefined *local_138;
  char *pcStack_130;
  undefined8 local_128;
  undefined *local_118;
  char *pcStack_110;
  undefined *local_108;
  char *pcStack_100;
  char *local_f8;
  undefined8 local_f0;
  Variant *local_e8;
  undefined1 auStack_e0 [16];
  Variant *pVStack_d0;
  char **local_c8;
  Variant **local_b8;
  undefined1 auStack_b0 [16];
  int local_a0 [2];
  undefined1 local_98 [16];
  Variant local_88 [24];
  Variant local_70 [24];
  undefined8 local_58;
  undefined1 local_50 [16];
  long local_40 [2];
  
  local_40[0] = *(long *)(in_FS_OFFSET + 0x28);
  D_METHODP((char *)&local_168,(char ***)"is_valid_gateway",0);
  auStack_e0 = (undefined1  [16])0x0;
  local_e8 = (Variant *)0x0;
  pMVar11 = create_method_bind<UPNPDevice,bool>((_func_bool *)0x1b1);
  ClassDB::bind_methodfi(1,pMVar11,false,(MethodDefinition *)&local_168,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_e8] != '\0') {
    Variant::_clear_internal();
  }
  plVar2 = local_158;
  if (local_158 != (long *)0x0) {
    LOCK();
    plVar13 = local_158 + -2;
    *plVar13 = *plVar13 + -1;
    UNLOCK();
    if (*plVar13 == 0) {
      if (local_158 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      lVar3 = local_158[-1];
      lVar15 = 0;
      local_158 = (long *)0x0;
      plVar13 = plVar2;
      if (lVar3 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar13 != 0)) {
            StringName::unref();
          }
          lVar15 = lVar15 + 1;
          plVar13 = plVar13 + 1;
        } while (lVar3 != lVar15);
      }
      Memory::free_static(plVar2 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_168 != (char *)0x0)) {
    StringName::unref();
  }
  D_METHODP((char *)&local_168,(char ***)"query_external_address",0);
  auStack_e0 = (undefined1  [16])0x0;
  local_e8 = (Variant *)0x0;
  pMVar11 = create_method_bind<UPNPDevice,String>((_func_String *)0x1b9);
  ClassDB::bind_methodfi(1,pMVar11,false,(MethodDefinition *)&local_168,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_e8] != '\0') {
    Variant::_clear_internal();
  }
  plVar2 = local_158;
  if (local_158 != (long *)0x0) {
    LOCK();
    plVar13 = local_158 + -2;
    *plVar13 = *plVar13 + -1;
    UNLOCK();
    if (*plVar13 == 0) {
      if (local_158 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      lVar3 = local_158[-1];
      lVar15 = 0;
      local_158 = (long *)0x0;
      plVar13 = plVar2;
      if (lVar3 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar13 != 0)) {
            StringName::unref();
          }
          lVar15 = lVar15 + 1;
          plVar13 = plVar13 + 1;
        } while (lVar3 != lVar15);
      }
      Memory::free_static(plVar2 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_168 != (char *)0x0)) {
    StringName::unref();
  }
  local_f8 = "duration";
  local_c8 = &local_f8;
  local_108 = &_LC12;
  pcStack_100 = "proto";
  pVVar14 = (Variant *)local_40;
  local_118 = &_LC10;
  pcStack_110 = "port_internal";
  local_f0 = 0;
  local_e8 = (Variant *)&local_118;
  pVStack_d0 = (Variant *)&pcStack_100;
  auStack_e0._0_8_ = &pcStack_110;
  auStack_e0._8_8_ = &local_108;
  D_METHODP((char *)&local_168,(char ***)"add_port_mapping",(uint)&local_e8);
  Variant::Variant((Variant *)&local_b8,0);
  Variant::Variant((Variant *)local_a0,"");
  Variant::Variant(local_88,"UDP");
  Variant::Variant(local_70,0);
  local_50 = (undefined1  [16])0x0;
  local_58 = 0;
  auStack_e0._8_8_ = local_88;
  auStack_e0._0_8_ = (Variant *)local_a0;
  local_e8 = (Variant *)&local_b8;
  pVStack_d0 = local_70;
  pMVar11 = create_method_bind<UPNPDevice,int,int,int,String,String,int>
                      ((_func_int_int_int_String_String_int *)0x1c1);
  ClassDB::bind_methodfi(1,pMVar11,false,(MethodDefinition *)&local_168,&local_e8,4);
  do {
    pVVar1 = pVVar14 + -0x18;
    pVVar14 = pVVar14 + -0x18;
    if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
      Variant::_clear_internal();
    }
    plVar2 = local_158;
  } while (pVVar14 != (Variant *)&local_b8);
  if (local_158 != (long *)0x0) {
    LOCK();
    plVar13 = local_158 + -2;
    *plVar13 = *plVar13 + -1;
    UNLOCK();
    if (*plVar13 == 0) {
      if (local_158 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      lVar3 = local_158[-1];
      lVar15 = 0;
      local_158 = (long *)0x0;
      plVar13 = plVar2;
      if (lVar3 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar13 != 0)) {
            StringName::unref();
          }
          lVar15 = lVar15 + 1;
          plVar13 = plVar13 + 1;
        } while (lVar3 != lVar15);
      }
      Memory::free_static(plVar2 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_168 != (char *)0x0)) {
    StringName::unref();
  }
  local_128 = 0;
  local_138 = &_LC10;
  pcStack_130 = "proto";
  auStack_b0._0_8_ = &pcStack_130;
  uVar12 = (uint)(Variant *)&local_b8;
  local_b8 = (Variant **)&local_138;
  D_METHODP((char *)&local_168,(char ***)"delete_port_mapping",uVar12);
  Variant::Variant((Variant *)&local_b8,"UDP");
  local_98 = (undefined1  [16])0x0;
  local_a0[0] = 0;
  local_a0[1] = 0;
  local_e8 = (Variant *)&local_b8;
  pMVar11 = create_method_bind<UPNPDevice,int,int,String>((_func_int_int_String *)0x1c9);
  ClassDB::bind_methodfi(1,pMVar11,false,(MethodDefinition *)&local_168,&local_e8,1);
  if (Variant::needs_deinit[local_a0[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (Variant::needs_deinit[(int)local_b8] != '\0') {
    Variant::_clear_internal();
  }
  plVar2 = local_158;
  if (local_158 != (long *)0x0) {
    LOCK();
    plVar13 = local_158 + -2;
    *plVar13 = *plVar13 + -1;
    UNLOCK();
    if (*plVar13 == 0) {
      if (local_158 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      lVar3 = local_158[-1];
      lVar15 = 0;
      local_158 = (long *)0x0;
      plVar13 = plVar2;
      if (lVar3 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar13 != 0)) {
            StringName::unref();
          }
          lVar15 = lVar15 + 1;
          plVar13 = plVar13 + 1;
        } while (lVar3 != lVar15);
      }
      Memory::free_static(plVar2 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_168 != (char *)0x0)) {
    StringName::unref();
  }
  local_e8 = (Variant *)&_LC19;
  auVar5._8_8_ = 0;
  auVar5._0_8_ = auStack_e0._8_8_;
  auStack_e0 = auVar5 << 0x40;
  local_b8 = &local_e8;
  D_METHODP((char *)&local_168,(char ***)"set_description_url",uVar12);
  auStack_b0 = (undefined1  [16])0x0;
  local_b8 = (Variant **)0x0;
  pMVar11 = create_method_bind<UPNPDevice,String_const&>((_func_void_String_ptr *)0x151);
  ClassDB::bind_methodfi(1,pMVar11,false,(MethodDefinition *)&local_168,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_b8] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_168);
  D_METHODP((char *)&local_168,(char ***)"get_description_url",0);
  auStack_b0 = (undefined1  [16])0x0;
  local_b8 = (Variant **)0x0;
  pMVar11 = create_method_bind<UPNPDevice,String>((_func_String *)0x159);
  ClassDB::bind_methodfi(1,pMVar11,false,(MethodDefinition *)&local_168,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_b8] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_168);
  _scs_create((char *)&local_180,true);
  _scs_create((char *)&local_188,true);
  local_190 = 0;
  local_168 = "";
  local_198 = 0;
  local_160 = 0;
  String::parse_latin1((StrRange *)&local_198);
  local_1a0 = 0;
  local_168 = "description_url";
  local_160 = 0xf;
  String::parse_latin1((StrRange *)&local_1a0);
  local_168 = (char *)CONCAT44(local_168._4_4_,4);
  local_160 = 0;
  if (local_1a0 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_160,(CowData *)&local_1a0);
  }
  local_158 = (long *)0x0;
  local_150 = 0;
  local_148 = 0;
  if (local_198 == 0) {
LAB_00100ba3:
    local_140 = 6;
    StringName::operator=((StringName *)&local_158,(StringName *)&local_190);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_148,(CowData *)&local_198);
    local_140 = 6;
    if (local_150 != 0x11) goto LAB_00100ba3;
    StringName::StringName((StringName *)&local_178,(String *)&local_148,false);
    if (local_158 == local_178) {
      if ((StringName::configured != '\0') && (local_178 != (long *)0x0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_158 = local_178;
    }
  }
  local_1a8 = 0;
  local_178 = (long *)0x1045cd;
  local_170 = 10;
  String::parse_latin1((StrRange *)&local_1a8);
  StringName::StringName((StringName *)&local_178,(String *)&local_1a8,false);
  ClassDB::add_property
            ((StringName *)&local_178,(PropertyInfo *)&local_168,(StringName *)&local_188,
             (StringName *)&local_180,-1);
  if ((StringName::configured != '\0') && (local_178 != (long *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1a8);
  lVar3 = local_148;
  if (local_148 != 0) {
    LOCK();
    plVar2 = (long *)(local_148 + -0x10);
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      local_148 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_158 != (long *)0x0)) {
    StringName::unref();
  }
  lVar3 = local_160;
  if (local_160 != 0) {
    LOCK();
    plVar2 = (long *)(local_160 + -0x10);
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      local_160 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1a0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_198);
  if (StringName::configured != '\0') {
    if (local_190 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00100d08;
    }
    if (local_188 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00100d08;
    }
    if (local_180 != 0) {
      StringName::unref();
    }
  }
LAB_00100d08:
  local_e8 = (Variant *)&_LC23;
  auVar6._8_8_ = 0;
  auVar6._0_8_ = auStack_e0._8_8_;
  auStack_e0 = auVar6 << 0x40;
  local_b8 = &local_e8;
  D_METHODP((char *)&local_168,(char ***)"set_service_type",uVar12);
  auStack_b0 = (undefined1  [16])0x0;
  local_b8 = (Variant **)0x0;
  pMVar11 = create_method_bind<UPNPDevice,String_const&>((_func_void_String_ptr *)0x161);
  ClassDB::bind_methodfi(1,pMVar11,false,(MethodDefinition *)&local_168,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_b8] != '\0') {
    Variant::_clear_internal();
  }
  plVar2 = local_158;
  if (local_158 != (long *)0x0) {
    LOCK();
    plVar13 = local_158 + -2;
    *plVar13 = *plVar13 + -1;
    UNLOCK();
    if (*plVar13 == 0) {
      if (local_158 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      lVar3 = local_158[-1];
      lVar15 = 0;
      local_158 = (long *)0x0;
      plVar13 = plVar2;
      if (lVar3 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar13 != 0)) {
            StringName::unref();
          }
          lVar15 = lVar15 + 1;
          plVar13 = plVar13 + 1;
        } while (lVar3 != lVar15);
      }
      Memory::free_static(plVar2 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_168 != (char *)0x0)) {
    StringName::unref();
  }
  D_METHODP((char *)&local_168,(char ***)"get_service_type",0);
  auStack_b0 = (undefined1  [16])0x0;
  local_b8 = (Variant **)0x0;
  pMVar11 = create_method_bind<UPNPDevice,String>((_func_String *)0x169);
  ClassDB::bind_methodfi(1,pMVar11,false,(MethodDefinition *)&local_168,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_b8] != '\0') {
    Variant::_clear_internal();
  }
  plVar2 = local_158;
  if (local_158 != (long *)0x0) {
    LOCK();
    plVar13 = local_158 + -2;
    *plVar13 = *plVar13 + -1;
    UNLOCK();
    if (*plVar13 == 0) {
      if (local_158 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      lVar3 = local_158[-1];
      lVar15 = 0;
      local_158 = (long *)0x0;
      plVar13 = plVar2;
      if (lVar3 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar13 != 0)) {
            StringName::unref();
          }
          lVar15 = lVar15 + 1;
          plVar13 = plVar13 + 1;
        } while (lVar3 != lVar15);
      }
      Memory::free_static(plVar2 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_168 != (char *)0x0)) {
    StringName::unref();
  }
  _scs_create((char *)&local_180,true);
  _scs_create((char *)&local_188,true);
  local_168 = "";
  local_190 = 0;
  local_198 = 0;
  local_160 = 0;
  String::parse_latin1((StrRange *)&local_198);
  local_1a0 = 0;
  local_168 = "service_type";
  local_160 = 0xc;
  String::parse_latin1((StrRange *)&local_1a0);
  local_168 = (char *)CONCAT44(local_168._4_4_,4);
  local_160 = 0;
  if (local_1a0 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_160,(CowData *)&local_1a0);
  }
  local_158 = (long *)0x0;
  local_150 = 0;
  local_148 = 0;
  if (local_198 == 0) {
LAB_001010eb:
    local_140 = 6;
    StringName::operator=((StringName *)&local_158,(StringName *)&local_190);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_148,(CowData *)&local_198);
    local_140 = 6;
    if (local_150 != 0x11) goto LAB_001010eb;
    StringName::StringName((StringName *)&local_178,(String *)&local_148,false);
    if (local_158 == local_178) {
      if ((StringName::configured != '\0') && (local_178 != (long *)0x0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_158 = local_178;
    }
  }
  local_1a8 = 0;
  local_178 = (long *)0x1045cd;
  local_170 = 10;
  String::parse_latin1((StrRange *)&local_1a8);
  StringName::StringName((StringName *)&local_178,(String *)&local_1a8,false);
  ClassDB::add_property
            ((StringName *)&local_178,(PropertyInfo *)&local_168,(StringName *)&local_188,
             (StringName *)&local_180,-1);
  if ((StringName::configured != '\0') && (local_178 != (long *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1a8);
  lVar3 = local_148;
  if (local_148 != 0) {
    LOCK();
    plVar2 = (long *)(local_148 + -0x10);
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      local_148 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_158 != (long *)0x0)) {
    StringName::unref();
  }
  lVar3 = local_160;
  if (local_160 != 0) {
    LOCK();
    plVar2 = (long *)(local_160 + -0x10);
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      local_160 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1a0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_198);
  if (StringName::configured != '\0') {
    if (local_190 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00101240;
    }
    if (local_188 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00101240;
    }
    if (local_180 != 0) {
      StringName::unref();
    }
  }
LAB_00101240:
  local_e8 = (Variant *)&_LC19;
  auVar7._8_8_ = 0;
  auVar7._0_8_ = auStack_e0._8_8_;
  auStack_e0 = auVar7 << 0x40;
  local_b8 = &local_e8;
  D_METHODP((char *)&local_168,(char ***)"set_igd_control_url",uVar12);
  auStack_b0 = (undefined1  [16])0x0;
  local_b8 = (Variant **)0x0;
  pMVar11 = create_method_bind<UPNPDevice,String_const&>((_func_void_String_ptr *)0x171);
  ClassDB::bind_methodfi(1,pMVar11,false,(MethodDefinition *)&local_168,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_b8] != '\0') {
    Variant::_clear_internal();
  }
  plVar2 = local_158;
  if (local_158 != (long *)0x0) {
    LOCK();
    plVar13 = local_158 + -2;
    *plVar13 = *plVar13 + -1;
    UNLOCK();
    if (*plVar13 == 0) {
      if (local_158 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      lVar3 = local_158[-1];
      lVar15 = 0;
      local_158 = (long *)0x0;
      plVar13 = plVar2;
      if (lVar3 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar13 != 0)) {
            StringName::unref();
          }
          lVar15 = lVar15 + 1;
          plVar13 = plVar13 + 1;
        } while (lVar3 != lVar15);
      }
      Memory::free_static(plVar2 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_168 != (char *)0x0)) {
    StringName::unref();
  }
  D_METHODP((char *)&local_168,(char ***)"get_igd_control_url",0);
  auStack_b0 = (undefined1  [16])0x0;
  local_b8 = (Variant **)0x0;
  pMVar11 = create_method_bind<UPNPDevice,String>((_func_String *)0x179);
  ClassDB::bind_methodfi(1,pMVar11,false,(MethodDefinition *)&local_168,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_b8] != '\0') {
    Variant::_clear_internal();
  }
  plVar2 = local_158;
  if (local_158 != (long *)0x0) {
    LOCK();
    plVar13 = local_158 + -2;
    *plVar13 = *plVar13 + -1;
    UNLOCK();
    if (*plVar13 == 0) {
      if (local_158 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      lVar3 = local_158[-1];
      lVar15 = 0;
      local_158 = (long *)0x0;
      plVar13 = plVar2;
      if (lVar3 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar13 != 0)) {
            StringName::unref();
          }
          lVar15 = lVar15 + 1;
          plVar13 = plVar13 + 1;
        } while (lVar3 != lVar15);
      }
      Memory::free_static(plVar2 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_168 != (char *)0x0)) {
    StringName::unref();
  }
  _scs_create((char *)&local_180,true);
  _scs_create((char *)&local_188,true);
  local_168 = "";
  local_190 = 0;
  local_198 = 0;
  local_160 = 0;
  String::parse_latin1((StrRange *)&local_198);
  local_1a0 = 0;
  local_168 = "igd_control_url";
  local_160 = 0xf;
  String::parse_latin1((StrRange *)&local_1a0);
  local_168 = (char *)CONCAT44(local_168._4_4_,4);
  local_160 = 0;
  if (local_1a0 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_160,(CowData *)&local_1a0);
  }
  local_158 = (long *)0x0;
  local_150 = 0;
  local_148 = 0;
  if (local_198 == 0) {
LAB_0010162b:
    local_140 = 6;
    StringName::operator=((StringName *)&local_158,(StringName *)&local_190);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_148,(CowData *)&local_198);
    local_140 = 6;
    if (local_150 != 0x11) goto LAB_0010162b;
    StringName::StringName((StringName *)&local_178,(String *)&local_148,false);
    if (local_158 == local_178) {
      if ((StringName::configured != '\0') && (local_178 != (long *)0x0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_158 = local_178;
    }
  }
  local_1a8 = 0;
  local_178 = (long *)0x1045cd;
  local_170 = 10;
  String::parse_latin1((StrRange *)&local_1a8);
  StringName::StringName((StringName *)&local_178,(String *)&local_1a8,false);
  ClassDB::add_property
            ((StringName *)&local_178,(PropertyInfo *)&local_168,(StringName *)&local_188,
             (StringName *)&local_180,-1);
  if ((StringName::configured != '\0') && (local_178 != (long *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1a8);
  lVar3 = local_148;
  if (local_148 != 0) {
    LOCK();
    plVar2 = (long *)(local_148 + -0x10);
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      local_148 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_158 != (long *)0x0)) {
    StringName::unref();
  }
  lVar3 = local_160;
  if (local_160 != 0) {
    LOCK();
    plVar2 = (long *)(local_160 + -0x10);
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      local_160 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  lVar3 = local_1a0;
  if (local_1a0 != 0) {
    LOCK();
    plVar2 = (long *)(local_1a0 + -0x10);
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      local_1a0 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_198);
  if (StringName::configured != '\0') {
    if (local_190 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010178f;
    }
    if (local_188 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010178f;
    }
    if (local_180 != 0) {
      StringName::unref();
    }
  }
LAB_0010178f:
  local_e8 = (Variant *)&_LC23;
  auVar8._8_8_ = 0;
  auVar8._0_8_ = auStack_e0._8_8_;
  auStack_e0 = auVar8 << 0x40;
  local_b8 = &local_e8;
  D_METHODP((char *)&local_168,(char ***)"set_igd_service_type",uVar12);
  auStack_b0 = (undefined1  [16])0x0;
  local_b8 = (Variant **)0x0;
  pMVar11 = create_method_bind<UPNPDevice,String_const&>((_func_void_String_ptr *)0x181);
  ClassDB::bind_methodfi(1,pMVar11,false,(MethodDefinition *)&local_168,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_b8] != '\0') {
    Variant::_clear_internal();
  }
  plVar2 = local_158;
  if (local_158 != (long *)0x0) {
    LOCK();
    plVar13 = local_158 + -2;
    *plVar13 = *plVar13 + -1;
    UNLOCK();
    if (*plVar13 == 0) {
      if (local_158 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      lVar3 = local_158[-1];
      lVar15 = 0;
      local_158 = (long *)0x0;
      plVar13 = plVar2;
      if (lVar3 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar13 != 0)) {
            StringName::unref();
          }
          lVar15 = lVar15 + 1;
          plVar13 = plVar13 + 1;
        } while (lVar3 != lVar15);
      }
      Memory::free_static(plVar2 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_168 != (char *)0x0)) {
    StringName::unref();
  }
  D_METHODP((char *)&local_168,(char ***)"get_igd_service_type",0);
  auStack_b0 = (undefined1  [16])0x0;
  local_b8 = (Variant **)0x0;
  pMVar11 = create_method_bind<UPNPDevice,String>((_func_String *)0x189);
  ClassDB::bind_methodfi(1,pMVar11,false,(MethodDefinition *)&local_168,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_b8] != '\0') {
    Variant::_clear_internal();
  }
  plVar2 = local_158;
  if (local_158 != (long *)0x0) {
    LOCK();
    plVar13 = local_158 + -2;
    *plVar13 = *plVar13 + -1;
    UNLOCK();
    if (*plVar13 == 0) {
      if (local_158 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      lVar3 = local_158[-1];
      lVar15 = 0;
      local_158 = (long *)0x0;
      plVar13 = plVar2;
      if (lVar3 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar13 != 0)) {
            StringName::unref();
          }
          lVar15 = lVar15 + 1;
          plVar13 = plVar13 + 1;
        } while (lVar3 != lVar15);
      }
      Memory::free_static(plVar2 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_168 != (char *)0x0)) {
    StringName::unref();
  }
  _scs_create((char *)&local_180,true);
  _scs_create((char *)&local_188,true);
  local_168 = "";
  local_190 = 0;
  local_198 = 0;
  local_160 = 0;
  String::parse_latin1((StrRange *)&local_198);
  local_1a0 = 0;
  local_168 = "igd_service_type";
  local_160 = 0x10;
  String::parse_latin1((StrRange *)&local_1a0);
  local_168 = (char *)CONCAT44(local_168._4_4_,4);
  local_160 = 0;
  if (local_1a0 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_160,(CowData *)&local_1a0);
  }
  local_158 = (long *)0x0;
  local_150 = 0;
  local_148 = 0;
  if (local_198 == 0) {
LAB_00101b7b:
    local_140 = 6;
    StringName::operator=((StringName *)&local_158,(StringName *)&local_190);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_148,(CowData *)&local_198);
    local_140 = 6;
    if (local_150 != 0x11) goto LAB_00101b7b;
    StringName::StringName((StringName *)&local_178,(String *)&local_148,false);
    if (local_158 == local_178) {
      if ((StringName::configured != '\0') && (local_178 != (long *)0x0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_158 = local_178;
    }
  }
  local_1a8 = 0;
  local_178 = (long *)0x1045cd;
  local_170 = 10;
  String::parse_latin1((StrRange *)&local_1a8);
  StringName::StringName((StringName *)&local_178,(String *)&local_1a8,false);
  ClassDB::add_property
            ((StringName *)&local_178,(PropertyInfo *)&local_168,(StringName *)&local_188,
             (StringName *)&local_180,-1);
  if ((StringName::configured != '\0') && (local_178 != (long *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1a8);
  lVar3 = local_148;
  if (local_148 != 0) {
    LOCK();
    plVar2 = (long *)(local_148 + -0x10);
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      local_148 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_158 != (long *)0x0)) {
    StringName::unref();
  }
  lVar3 = local_160;
  if (local_160 != 0) {
    LOCK();
    plVar2 = (long *)(local_160 + -0x10);
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      local_160 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1a0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_198);
  if (StringName::configured != '\0') {
    if (local_190 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00101cd0;
    }
    if (local_188 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00101cd0;
    }
    if (local_180 != 0) {
      StringName::unref();
    }
  }
LAB_00101cd0:
  local_e8 = (Variant *)&_LC33;
  auVar9._8_8_ = 0;
  auVar9._0_8_ = auStack_e0._8_8_;
  auStack_e0 = auVar9 << 0x40;
  local_b8 = &local_e8;
  D_METHODP((char *)&local_168,(char ***)"set_igd_our_addr",uVar12);
  auStack_b0 = (undefined1  [16])0x0;
  local_b8 = (Variant **)0x0;
  pMVar11 = create_method_bind<UPNPDevice,String_const&>((_func_void_String_ptr *)0x191);
  ClassDB::bind_methodfi(1,pMVar11,false,(MethodDefinition *)&local_168,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_b8] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_168);
  D_METHODP((char *)&local_168,(char ***)"get_igd_our_addr",0);
  auStack_b0 = (undefined1  [16])0x0;
  local_b8 = (Variant **)0x0;
  pMVar11 = create_method_bind<UPNPDevice,String>((_func_String *)0x199);
  ClassDB::bind_methodfi(1,pMVar11,false,(MethodDefinition *)&local_168,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_b8] != '\0') {
    Variant::_clear_internal();
  }
  plVar2 = local_158;
  if (local_158 != (long *)0x0) {
    LOCK();
    plVar13 = local_158 + -2;
    *plVar13 = *plVar13 + -1;
    UNLOCK();
    if (*plVar13 == 0) {
      if (local_158 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      lVar3 = local_158[-1];
      lVar15 = 0;
      local_158 = (long *)0x0;
      plVar13 = plVar2;
      if (lVar3 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar13 != 0)) {
            StringName::unref();
          }
          lVar15 = lVar15 + 1;
          plVar13 = plVar13 + 1;
        } while (lVar3 != lVar15);
      }
      Memory::free_static(plVar2 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_168 != (char *)0x0)) {
    StringName::unref();
  }
  _scs_create((char *)&local_180,true);
  _scs_create((char *)&local_188,true);
  local_168 = "";
  local_190 = 0;
  local_198 = 0;
  local_160 = 0;
  String::parse_latin1((StrRange *)&local_198);
  local_1a0 = 0;
  local_168 = "igd_our_addr";
  local_160 = 0xc;
  String::parse_latin1((StrRange *)&local_1a0);
  local_168 = (char *)CONCAT44(local_168._4_4_,4);
  local_160 = 0;
  if (local_1a0 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_160,(CowData *)&local_1a0);
  }
  local_158 = (long *)0x0;
  local_150 = 0;
  local_148 = 0;
  if (local_198 == 0) {
LAB_00101ffb:
    local_140 = 6;
    StringName::operator=((StringName *)&local_158,(StringName *)&local_190);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_148,(CowData *)&local_198);
    local_140 = 6;
    if (local_150 != 0x11) goto LAB_00101ffb;
    StringName::StringName((StringName *)&local_178,(String *)&local_148,false);
    if (local_158 == local_178) {
      if ((StringName::configured != '\0') && (local_178 != (long *)0x0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_158 = local_178;
    }
  }
  local_1a8 = 0;
  local_178 = (long *)0x1045cd;
  local_170 = 10;
  String::parse_latin1((StrRange *)&local_1a8);
  StringName::StringName((StringName *)&local_178,(String *)&local_1a8,false);
  ClassDB::add_property
            ((StringName *)&local_178,(PropertyInfo *)&local_168,(StringName *)&local_188,
             (StringName *)&local_180,-1);
  if ((StringName::configured != '\0') && (local_178 != (long *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1a8);
  lVar3 = local_148;
  if (local_148 != 0) {
    LOCK();
    plVar2 = (long *)(local_148 + -0x10);
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      local_148 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_158 != (long *)0x0)) {
    StringName::unref();
  }
  lVar3 = local_160;
  if (local_160 != 0) {
    LOCK();
    plVar2 = (long *)(local_160 + -0x10);
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      local_160 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1a0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_198);
  if (StringName::configured != '\0') {
    if (local_190 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00102150;
    }
    if (local_188 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00102150;
    }
    if (local_180 != 0) {
      StringName::unref();
    }
  }
LAB_00102150:
  local_e8 = (Variant *)0x104fbf;
  auVar10._8_8_ = 0;
  auVar10._0_8_ = auStack_e0._8_8_;
  auStack_e0 = auVar10 << 0x40;
  local_b8 = &local_e8;
  D_METHODP((char *)&local_168,(char ***)"set_igd_status",uVar12);
  auStack_b0 = (undefined1  [16])0x0;
  local_b8 = (Variant **)0x0;
  pMVar11 = create_method_bind<UPNPDevice,UPNPDevice::IGDStatus>((_func_void_IGDStatus *)0x1a1);
  ClassDB::bind_methodfi(1,pMVar11,false,(MethodDefinition *)&local_168,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_b8] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_168);
  D_METHODP((char *)&local_168,(char ***)"get_igd_status",0);
  auStack_b0 = (undefined1  [16])0x0;
  local_b8 = (Variant **)0x0;
  pMVar11 = create_method_bind<UPNPDevice,UPNPDevice::IGDStatus>((_func_IGDStatus *)0x1a9);
  ClassDB::bind_methodfi(1,pMVar11,false,(MethodDefinition *)&local_168,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_b8] != '\0') {
    Variant::_clear_internal();
  }
  plVar2 = local_158;
  if (local_158 != (long *)0x0) {
    LOCK();
    plVar13 = local_158 + -2;
    *plVar13 = *plVar13 + -1;
    UNLOCK();
    if (*plVar13 == 0) {
      if (local_158 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      lVar3 = local_158[-1];
      lVar15 = 0;
      local_158 = (long *)0x0;
      plVar13 = plVar2;
      if (lVar3 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar13 != 0)) {
            StringName::unref();
          }
          lVar15 = lVar15 + 1;
          plVar13 = plVar13 + 1;
        } while (lVar3 != lVar15);
      }
      Memory::free_static(plVar2 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_168 != (char *)0x0)) {
    StringName::unref();
  }
  _scs_create((char *)&local_180,true);
  _scs_create((char *)&local_188,true);
  local_168 = "";
  local_190 = 0;
  local_198 = 0;
  local_160 = 0;
  String::parse_latin1((StrRange *)&local_198);
  local_1a0 = 0;
  local_168 = "igd_status";
  local_160 = 10;
  String::parse_latin1((StrRange *)&local_1a0);
  local_168 = (char *)CONCAT44(local_168._4_4_,2);
  local_160 = 0;
  if (local_1a0 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_160,(CowData *)&local_1a0);
  }
  local_158 = (long *)0x0;
  local_150 = 2;
  local_148 = 0;
  if (local_198 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_148,(CowData *)&local_198);
    local_140 = 6;
    if (local_150 == 0x11) {
      StringName::StringName((StringName *)&local_178,(String *)&local_148,false);
      if (local_158 == local_178) {
        if ((StringName::configured != '\0') && (local_178 != (long *)0x0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        local_158 = local_178;
      }
      goto LAB_001024a3;
    }
  }
  local_140 = 6;
  StringName::operator=((StringName *)&local_158,(StringName *)&local_190);
LAB_001024a3:
  local_1a8 = 0;
  local_178 = (long *)0x1045cd;
  local_170 = 10;
  String::parse_latin1((StrRange *)&local_1a8);
  StringName::StringName((StringName *)&local_178,(String *)&local_1a8,false);
  ClassDB::add_property
            ((StringName *)&local_178,(PropertyInfo *)&local_168,(StringName *)&local_188,
             (StringName *)&local_180,-1);
  if ((StringName::configured != '\0') && (local_178 != (long *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1a8);
  lVar3 = local_148;
  if (local_148 != 0) {
    LOCK();
    plVar2 = (long *)(local_148 + -0x10);
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      local_148 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_158 != (long *)0x0)) {
    StringName::unref();
  }
  lVar3 = local_160;
  if (local_160 != 0) {
    LOCK();
    plVar2 = (long *)(local_160 + -0x10);
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      local_160 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1a0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_198);
  if ((((StringName::configured != '\0') &&
       ((local_190 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
      ((local_188 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_180 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_178,"IGD_STATUS_OK",false);
  local_188 = 0;
  local_168 = "IGD_STATUS_OK";
  local_160 = 0xd;
  String::parse_latin1((StrRange *)&local_188);
  __constant_get_enum_name<UPNPDevice::IGDStatus>((StringName *)&local_180);
  local_168 = "UPNPDevice";
  local_190 = 0;
  local_160 = 10;
  String::parse_latin1((StrRange *)&local_190);
  StringName::StringName((StringName *)&local_168,(String *)&local_190,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_168,(StringName *)&local_180,(StringName *)&local_178,0,false);
  if ((StringName::configured != '\0') && (local_168 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_190);
  if ((StringName::configured != '\0') && (local_180 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_188);
  if ((StringName::configured != '\0') && (local_178 != (long *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_178,"IGD_STATUS_HTTP_ERROR",false);
  local_188 = 0;
  local_168 = "IGD_STATUS_HTTP_ERROR";
  local_160 = 0x15;
  String::parse_latin1((StrRange *)&local_188);
  __constant_get_enum_name<UPNPDevice::IGDStatus>((StringName *)&local_180);
  local_168 = "UPNPDevice";
  local_190 = 0;
  local_160 = 10;
  String::parse_latin1((StrRange *)&local_190);
  StringName::StringName((StringName *)&local_168,(String *)&local_190,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_168,(StringName *)&local_180,(StringName *)&local_178,1,false);
  if ((StringName::configured != '\0') && (local_168 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_190);
  if ((StringName::configured != '\0') && (local_180 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_188);
  if ((StringName::configured != '\0') && (local_178 != (long *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_178,"IGD_STATUS_HTTP_EMPTY",false);
  local_188 = 0;
  local_168 = "IGD_STATUS_HTTP_EMPTY";
  local_160 = 0x15;
  String::parse_latin1((StrRange *)&local_188);
  __constant_get_enum_name<UPNPDevice::IGDStatus>((StringName *)&local_180);
  local_168 = "UPNPDevice";
  local_190 = 0;
  local_160 = 10;
  String::parse_latin1((StrRange *)&local_190);
  StringName::StringName((StringName *)&local_168,(String *)&local_190,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_168,(StringName *)&local_180,(StringName *)&local_178,2,false);
  if ((StringName::configured != '\0') && (local_168 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_190);
  if ((StringName::configured != '\0') && (local_180 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_188);
  if ((StringName::configured != '\0') && (local_178 != (long *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_178,"IGD_STATUS_NO_URLS",false);
  local_188 = 0;
  local_168 = "IGD_STATUS_NO_URLS";
  local_160 = 0x12;
  String::parse_latin1((StrRange *)&local_188);
  __constant_get_enum_name<UPNPDevice::IGDStatus>((StringName *)&local_180);
  local_168 = "UPNPDevice";
  local_190 = 0;
  local_160 = 10;
  String::parse_latin1((StrRange *)&local_190);
  StringName::StringName((StringName *)&local_168,(String *)&local_190,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_168,(StringName *)&local_180,(StringName *)&local_178,3,false);
  if ((StringName::configured != '\0') && (local_168 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_190);
  if ((StringName::configured != '\0') && (local_180 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_188);
  if ((StringName::configured != '\0') && (local_178 != (long *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_178,"IGD_STATUS_NO_IGD",false);
  local_188 = 0;
  local_168 = "IGD_STATUS_NO_IGD";
  local_160 = 0x11;
  String::parse_latin1((StrRange *)&local_188);
  __constant_get_enum_name<UPNPDevice::IGDStatus>((StringName *)&local_180);
  local_168 = "UPNPDevice";
  local_190 = 0;
  local_160 = 10;
  String::parse_latin1((StrRange *)&local_190);
  StringName::StringName((StringName *)&local_168,(String *)&local_190,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_168,(StringName *)&local_180,(StringName *)&local_178,4,false);
  if ((StringName::configured != '\0') && (local_168 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_190);
  if ((StringName::configured != '\0') && (local_180 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_188);
  if ((StringName::configured != '\0') && (local_178 != (long *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_178,"IGD_STATUS_DISCONNECTED",false);
  local_188 = 0;
  local_168 = "IGD_STATUS_DISCONNECTED";
  local_160 = 0x17;
  String::parse_latin1((StrRange *)&local_188);
  __constant_get_enum_name<UPNPDevice::IGDStatus>((StringName *)&local_180);
  local_168 = "UPNPDevice";
  local_190 = 0;
  local_160 = 10;
  String::parse_latin1((StrRange *)&local_190);
  StringName::StringName((StringName *)&local_168,(String *)&local_190,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_168,(StringName *)&local_180,(StringName *)&local_178,5,false);
  if ((StringName::configured != '\0') && (local_168 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_190);
  if ((StringName::configured != '\0') && (local_180 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_188);
  if ((StringName::configured != '\0') && (local_178 != (long *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_178,"IGD_STATUS_UNKNOWN_DEVICE",false);
  local_188 = 0;
  local_168 = "IGD_STATUS_UNKNOWN_DEVICE";
  local_160 = 0x19;
  String::parse_latin1((StrRange *)&local_188);
  __constant_get_enum_name<UPNPDevice::IGDStatus>((StringName *)&local_180);
  local_168 = "UPNPDevice";
  local_190 = 0;
  local_160 = 10;
  String::parse_latin1((StrRange *)&local_190);
  StringName::StringName((StringName *)&local_168,(String *)&local_190,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_168,(StringName *)&local_180,(StringName *)&local_178,6,false);
  if ((StringName::configured != '\0') && (local_168 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_190);
  if ((StringName::configured != '\0') && (local_180 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_188);
  if ((StringName::configured != '\0') && (local_178 != (long *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_178,"IGD_STATUS_INVALID_CONTROL",false);
  local_188 = 0;
  local_168 = "IGD_STATUS_INVALID_CONTROL";
  local_160 = 0x1a;
  String::parse_latin1((StrRange *)&local_188);
  __constant_get_enum_name<UPNPDevice::IGDStatus>((StringName *)&local_180);
  local_168 = "UPNPDevice";
  local_190 = 0;
  local_160 = 10;
  String::parse_latin1((StrRange *)&local_190);
  StringName::StringName((StringName *)&local_168,(String *)&local_190,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_168,(StringName *)&local_180,(StringName *)&local_178,7,false);
  if ((StringName::configured != '\0') && (local_168 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_190);
  if ((StringName::configured != '\0') && (local_180 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_188);
  if ((StringName::configured != '\0') && (local_178 != (long *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_178,"IGD_STATUS_MALLOC_ERROR",false);
  local_188 = 0;
  local_168 = "IGD_STATUS_MALLOC_ERROR";
  local_160 = 0x17;
  String::parse_latin1((StrRange *)&local_188);
  __constant_get_enum_name<UPNPDevice::IGDStatus>((StringName *)&local_180);
  local_168 = "UPNPDevice";
  local_190 = 0;
  local_160 = 10;
  String::parse_latin1((StrRange *)&local_190);
  StringName::StringName((StringName *)&local_168,(String *)&local_190,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_168,(StringName *)&local_180,(StringName *)&local_178,8,false);
  if ((StringName::configured != '\0') && (local_168 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_190);
  if ((StringName::configured != '\0') && (local_180 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_188);
  if ((StringName::configured != '\0') && (local_178 != (long *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_178,"IGD_STATUS_UNKNOWN_ERROR",false);
  local_188 = 0;
  local_168 = "IGD_STATUS_UNKNOWN_ERROR";
  local_160 = 0x18;
  String::parse_latin1((StrRange *)&local_188);
  __constant_get_enum_name<UPNPDevice::IGDStatus>((StringName *)&local_180);
  local_168 = "UPNPDevice";
  local_190 = 0;
  local_160 = 10;
  String::parse_latin1((StrRange *)&local_190);
  StringName::StringName((StringName *)&local_168,(String *)&local_190,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_168,(StringName *)&local_180,(StringName *)&local_178,9,false);
  if ((StringName::configured != '\0') && (local_168 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_190);
  if ((StringName::configured != '\0') && (local_180 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_188);
  if ((StringName::configured != '\0') && (local_178 != (long *)0x0)) {
    StringName::unref();
  }
  if (local_40[0] != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
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



/* MethodBindTRC<UPNPDevice::IGDStatus>::_gen_argument_type(int) const */

undefined8 MethodBindTRC<UPNPDevice::IGDStatus>::_gen_argument_type(int param_1)

{
  return 2;
}



/* MethodBindTRC<UPNPDevice::IGDStatus>::get_argument_meta(int) const */

undefined8 MethodBindTRC<UPNPDevice::IGDStatus>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindT<UPNPDevice::IGDStatus>::_gen_argument_type(int) const */

char __thiscall
MethodBindT<UPNPDevice::IGDStatus>::_gen_argument_type
          (MethodBindT<UPNPDevice::IGDStatus> *this,int param_1)

{
  return (param_1 == 0) * '\x02';
}



/* MethodBindT<UPNPDevice::IGDStatus>::get_argument_meta(int) const */

undefined8 MethodBindT<UPNPDevice::IGDStatus>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindT<String const&>::_gen_argument_type(int) const */

long __thiscall
MethodBindT<String_const&>::_gen_argument_type(MethodBindT<String_const&> *this,int param_1)

{
  return (ulong)(param_1 == 0) << 2;
}



/* MethodBindT<String const&>::get_argument_meta(int) const */

undefined8 MethodBindT<String_const&>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindTRC<int, int, String>::_gen_argument_type(int) const */

char __thiscall
MethodBindTRC<int,int,String>::_gen_argument_type(MethodBindTRC<int,int,String> *this,int param_1)

{
  return (param_1 == 1) * '\x02' + '\x02';
}



/* MethodBindTRC<int, int, String>::get_argument_meta(int) const */

char __thiscall
MethodBindTRC<int,int,String>::get_argument_meta(MethodBindTRC<int,int,String> *this,int param_1)

{
  return (param_1 < 1) * '\x03';
}



/* MethodBindTRC<String>::_gen_argument_type(int) const */

undefined8 MethodBindTRC<String>::_gen_argument_type(int param_1)

{
  return 4;
}



/* MethodBindTRC<String>::get_argument_meta(int) const */

undefined8 MethodBindTRC<String>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindTRC<bool>::_gen_argument_type(int) const */

undefined8 MethodBindTRC<bool>::_gen_argument_type(int param_1)

{
  return 1;
}



/* MethodBindTRC<bool>::get_argument_meta(int) const */

undefined8 MethodBindTRC<bool>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindTRC<int, int, int, String, String, int>::_gen_argument_type(int) const */

char __thiscall
MethodBindTRC<int,int,int,String,String,int>::_gen_argument_type
          (MethodBindTRC<int,int,int,String,String,int> *this,int param_1)

{
  return (-(param_1 - 2U < 2) & 2U) + 2;
}



/* MethodBindTRC<int, int, int, String, String, int>::get_argument_meta(int) const */

char __thiscall
MethodBindTRC<int,int,int,String,String,int>::get_argument_meta
          (MethodBindTRC<int,int,int,String,String,int> *this,int param_1)

{
  if (1 < param_1) {
    return (param_1 == 4) * '\x03';
  }
  return '\x03';
}



/* MethodBindTRC<bool>::~MethodBindTRC() */

void __thiscall MethodBindTRC<bool>::~MethodBindTRC(MethodBindTRC<bool> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010a118;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<bool>::~MethodBindTRC() */

void __thiscall MethodBindTRC<bool>::~MethodBindTRC(MethodBindTRC<bool> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010a118;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<int, int, int, String, String, int>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<int,int,int,String,String,int>::~MethodBindTRC
          (MethodBindTRC<int,int,int,String,String,int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010a1d8;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<int, int, int, String, String, int>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<int,int,int,String,String,int>::~MethodBindTRC
          (MethodBindTRC<int,int,int,String,String,int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010a1d8;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<int, int, String>::~MethodBindTRC() */

void __thiscall MethodBindTRC<int,int,String>::~MethodBindTRC(MethodBindTRC<int,int,String> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010a238;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<int, int, String>::~MethodBindTRC() */

void __thiscall MethodBindTRC<int,int,String>::~MethodBindTRC(MethodBindTRC<int,int,String> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010a238;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<String const&>::~MethodBindT() */

void __thiscall MethodBindT<String_const&>::~MethodBindT(MethodBindT<String_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010a298;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<String const&>::~MethodBindT() */

void __thiscall MethodBindT<String_const&>::~MethodBindT(MethodBindT<String_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010a298;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<String>::~MethodBindTRC() */

void __thiscall MethodBindTRC<String>::~MethodBindTRC(MethodBindTRC<String> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010a178;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<String>::~MethodBindTRC() */

void __thiscall MethodBindTRC<String>::~MethodBindTRC(MethodBindTRC<String> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010a178;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<UPNPDevice::IGDStatus>::~MethodBindT() */

void __thiscall
MethodBindT<UPNPDevice::IGDStatus>::~MethodBindT(MethodBindT<UPNPDevice::IGDStatus> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010a2f8;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<UPNPDevice::IGDStatus>::~MethodBindT() */

void __thiscall
MethodBindT<UPNPDevice::IGDStatus>::~MethodBindT(MethodBindT<UPNPDevice::IGDStatus> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010a2f8;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<UPNPDevice::IGDStatus>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<UPNPDevice::IGDStatus>::~MethodBindTRC(MethodBindTRC<UPNPDevice::IGDStatus> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010a358;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<UPNPDevice::IGDStatus>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<UPNPDevice::IGDStatus>::~MethodBindTRC(MethodBindTRC<UPNPDevice::IGDStatus> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010a358;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<String>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<String>::_gen_argument_type_info(int param_1)

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
  local_48 = &_LC0;
  local_40 = 0;
  String::parse_latin1((StrRange *)&local_58);
  *puVar3 = 4;
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
      goto joined_r0x001038dc;
    }
  }
  StringName::operator=((StringName *)(puVar3 + 4),(StringName *)&local_50);
  lVar2 = local_58;
joined_r0x001038dc:
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



/* MethodBindTRC<bool>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<bool>::_gen_argument_type_info(int param_1)

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
  local_48 = &_LC0;
  local_40 = 0;
  String::parse_latin1((StrRange *)&local_58);
  *puVar3 = 1;
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
      goto joined_r0x00103a5c;
    }
  }
  StringName::operator=((StringName *)(puVar3 + 4),(StringName *)&local_50);
  lVar2 = local_58;
joined_r0x00103a5c:
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



/* MethodBindT<String const&>::_gen_argument_type_info(int) const */

undefined4 * MethodBindT<String_const&>::_gen_argument_type_info(int param_1)

{
  long *plVar1;
  long lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined8 uVar6;
  long lVar7;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar8;
  long in_FS_OFFSET;
  long local_70;
  long local_68;
  long local_60;
  undefined *local_58;
  undefined1 local_50 [16];
  int local_40;
  long local_38;
  undefined4 local_30;
  long local_20;
  
  puVar8 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  *puVar8 = 0;
  puVar8[6] = 0;
  *(undefined8 *)(puVar8 + 8) = 0;
  puVar8[10] = 6;
  *(undefined1 (*) [16])(puVar8 + 2) = (undefined1  [16])0x0;
  if (in_EDX != 0) goto LAB_00103ae7;
  local_68 = 0;
  local_58 = &_LC0;
  local_70 = 0;
  auVar3._8_8_ = 0;
  auVar3._0_8_ = local_50._8_8_;
  local_50 = auVar3 << 0x40;
  String::parse_latin1((StrRange *)&local_70);
  local_58 = (undefined *)CONCAT44(local_58._4_4_,4);
  local_40 = 0;
  local_38 = 0;
  local_50 = (undefined1  [16])0x0;
  if (local_70 == 0) {
LAB_00103bd8:
    local_30 = 6;
    StringName::operator=((StringName *)(local_50 + 8),(StringName *)&local_68);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_38,(CowData *)&local_70);
    local_30 = 6;
    if (local_40 != 0x11) goto LAB_00103bd8;
    StringName::StringName((StringName *)&local_60,(String *)&local_38,false);
    if (local_50._8_8_ == local_60) {
      if ((StringName::configured != '\0') && (local_60 != 0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_50._8_8_ = local_60;
    }
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
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  *puVar8 = local_58._0_4_;
  lVar2 = *(long *)(puVar8 + 2);
  if (lVar2 != local_50._0_8_) {
    if (lVar2 != 0) {
      LOCK();
      plVar1 = (long *)(lVar2 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        lVar2 = *(long *)(puVar8 + 2);
        *(undefined8 *)(puVar8 + 2) = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
    *(undefined8 *)(puVar8 + 2) = local_50._0_8_;
    auVar5._8_8_ = 0;
    auVar5._0_8_ = local_50._8_8_;
    local_50 = auVar5 << 0x40;
  }
  if (*(long *)(puVar8 + 4) != local_50._8_8_) {
    StringName::unref();
    uVar6 = local_50._8_8_;
    local_50._8_8_ = 0;
    *(undefined8 *)(puVar8 + 4) = uVar6;
  }
  lVar7 = local_38;
  puVar8[6] = local_40;
  lVar2 = *(long *)(puVar8 + 8);
  if (lVar2 == local_38) {
    puVar8[10] = local_30;
    if (lVar2 != 0) {
      LOCK();
      plVar1 = (long *)(lVar2 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_38 = 0;
        Memory::free_static((void *)(lVar7 + -0x10),false);
      }
    }
  }
  else {
    if (lVar2 != 0) {
      LOCK();
      plVar1 = (long *)(lVar2 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        lVar2 = *(long *)(puVar8 + 8);
        *(undefined8 *)(puVar8 + 8) = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
    *(long *)(puVar8 + 8) = local_38;
    puVar8[10] = local_30;
  }
  if ((StringName::configured != '\0') && (local_50._8_8_ != 0)) {
    StringName::unref();
  }
  uVar6 = local_50._0_8_;
  if (local_50._0_8_ != 0) {
    LOCK();
    plVar1 = (long *)(local_50._0_8_ + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      auVar4._8_8_ = 0;
      auVar4._0_8_ = local_50._8_8_;
      local_50 = auVar4 << 0x40;
      Memory::free_static((void *)(uVar6 + -0x10),false);
    }
  }
LAB_00103ae7:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar8;
}



/* godot::details::enum_qualified_name_to_class_info_name(String const&) */

details * __thiscall
godot::details::enum_qualified_name_to_class_info_name(details *this,String *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  code *pcVar4;
  undefined *puVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long in_FS_OFFSET;
  long local_60;
  char local_58 [8];
  long *local_50;
  undefined *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  String::split(local_58,SUB81(param_1,0),0x103db8);
  if ((local_50 != (long *)0x0) && (2 < local_50[-1])) {
    local_60 = 0;
    local_48 = &_LC2;
    local_40 = 1;
    String::parse_latin1((StrRange *)&local_60);
    if (local_50 == (long *)0x0) {
      lVar8 = 0;
      lVar7 = -2;
    }
    else {
      lVar8 = local_50[-1];
      lVar7 = lVar8 + -2;
      if (-1 < lVar7) {
        String::operator+((String *)&local_48,(String *)(local_50 + lVar7));
        String::operator+((String *)this,(String *)&local_48);
        puVar5 = local_48;
        lVar8 = local_60;
        if (local_48 != (undefined *)0x0) {
          LOCK();
          plVar1 = (long *)(local_48 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_48 = (undefined *)0x0;
            Memory::free_static(puVar5 + -0x10,false);
            lVar8 = local_60;
          }
        }
        goto joined_r0x00103e8a;
      }
    }
    _err_print_index_error
              ("get","./core/templates/cowdata.h",0xdb,lVar7,lVar8,"p_index","size()","",false,true)
    ;
    _err_flush_stdout();
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  local_60 = 0;
  local_48 = &_LC2;
  local_40 = 1;
  String::parse_latin1((StrRange *)&local_60);
  String::join((Vector *)this);
  lVar8 = local_60;
joined_r0x00103e8a:
  local_60 = lVar8;
  if (lVar8 != 0) {
    LOCK();
    plVar1 = (long *)(lVar8 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_60 = 0;
      Memory::free_static((void *)(lVar8 + -0x10),false);
    }
  }
  plVar1 = local_50;
  if (local_50 != (long *)0x0) {
    LOCK();
    plVar6 = local_50 + -2;
    *plVar6 = *plVar6 + -1;
    UNLOCK();
    if (*plVar6 == 0) {
      if (local_50 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      lVar8 = local_50[-1];
      local_50 = (long *)0x0;
      if (lVar8 != 0) {
        lVar7 = 0;
        plVar6 = plVar1;
        do {
          if (*plVar6 != 0) {
            LOCK();
            plVar2 = (long *)(*plVar6 + -0x10);
            *plVar2 = *plVar2 + -1;
            UNLOCK();
            if (*plVar2 == 0) {
              lVar3 = *plVar6;
              *plVar6 = 0;
              Memory::free_static((void *)(lVar3 + -0x10),false);
            }
          }
          lVar7 = lVar7 + 1;
          plVar6 = plVar6 + 1;
        } while (lVar8 != lVar7);
      }
      Memory::free_static(plVar1 + -2,false);
    }
  }
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return this;
}



/* MethodBindTRC<UPNPDevice::IGDStatus>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<UPNPDevice::IGDStatus>::_gen_argument_type_info(int param_1)

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
  local_58 = 0;
  local_48 = "UPNPDevice::IGDStatus";
  local_40 = 0x15;
  String::parse_latin1((StrRange *)&local_58);
  godot::details::enum_qualified_name_to_class_info_name((details *)&local_50,(String *)&local_58);
  StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
  *puVar3 = 2;
  puVar3[6] = 0;
  *(undefined8 *)(puVar3 + 8) = 0;
  puVar3[10] = 0x10006;
  *(undefined1 (*) [16])(puVar3 + 2) = (undefined1  [16])0x0;
  StringName::operator=((StringName *)(puVar3 + 4),(StringName *)&local_48);
  if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
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
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GetTypeInfo<UPNPDevice::IGDStatus, void>::get_class_info() */

GetTypeInfo<UPNPDevice::IGDStatus,void> * __thiscall
GetTypeInfo<UPNPDevice::IGDStatus,void>::get_class_info
          (GetTypeInfo<UPNPDevice::IGDStatus,void> *this)

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
  local_58 = 0;
  local_48 = "UPNPDevice::IGDStatus";
  local_40 = 0x15;
  String::parse_latin1((StrRange *)&local_58);
  godot::details::enum_qualified_name_to_class_info_name((details *)&local_50,(String *)&local_58);
  StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
  *(undefined4 *)this = 2;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x28) = 0x10006;
  *(undefined1 (*) [16])(this + 8) = (undefined1  [16])0x0;
  StringName::operator=((StringName *)(this + 0x10),(StringName *)&local_48);
  if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
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
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<UPNPDevice::IGDStatus>::_gen_argument_type_info(int) const */

undefined4 * MethodBindT<UPNPDevice::IGDStatus>::_gen_argument_type_info(int param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar4;
  long in_FS_OFFSET;
  undefined4 local_48 [2];
  long local_40;
  long local_38;
  undefined4 local_30;
  long local_28;
  undefined4 local_20;
  long local_10;
  
  puVar4 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  *puVar4 = 0;
  puVar4[6] = 0;
  *(undefined8 *)(puVar4 + 8) = 0;
  puVar4[10] = 6;
  *(undefined1 (*) [16])(puVar4 + 2) = (undefined1  [16])0x0;
  if (in_EDX == 0) {
    GetTypeInfo<UPNPDevice::IGDStatus,void>::get_class_info
              ((GetTypeInfo<UPNPDevice::IGDStatus,void> *)local_48);
    *puVar4 = local_48[0];
    lVar2 = *(long *)(puVar4 + 2);
    if (lVar2 != local_40) {
      if (lVar2 != 0) {
        LOCK();
        plVar1 = (long *)(lVar2 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          lVar2 = *(long *)(puVar4 + 2);
          *(undefined8 *)(puVar4 + 2) = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      *(long *)(puVar4 + 2) = local_40;
      local_40 = 0;
    }
    if (*(long *)(puVar4 + 4) != local_38) {
      StringName::unref();
      lVar2 = local_38;
      local_38 = 0;
      *(long *)(puVar4 + 4) = lVar2;
    }
    lVar3 = local_28;
    puVar4[6] = local_30;
    lVar2 = *(long *)(puVar4 + 8);
    if (lVar2 == local_28) {
      puVar4[10] = local_20;
      if (lVar2 != 0) {
        LOCK();
        plVar1 = (long *)(lVar2 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_28 = 0;
          Memory::free_static((void *)(lVar3 + -0x10),false);
        }
      }
    }
    else {
      if (lVar2 != 0) {
        LOCK();
        plVar1 = (long *)(lVar2 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          lVar2 = *(long *)(puVar4 + 8);
          *(undefined8 *)(puVar4 + 8) = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      *(long *)(puVar4 + 8) = local_28;
      puVar4[10] = local_20;
    }
    if ((StringName::configured != '\0') && (local_38 != 0)) {
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
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar4;
}



/* MethodDefinition::~MethodDefinition() */

void __thiscall MethodDefinition::~MethodDefinition(MethodDefinition *this)

{
  long *plVar1;
  long lVar2;
  code *pcVar3;
  long *plVar4;
  long lVar5;
  
  if (*(long *)(this + 0x10) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x10) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      plVar1 = *(long **)(this + 0x10);
      if (plVar1 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      lVar2 = plVar1[-1];
      *(undefined8 *)(this + 0x10) = 0;
      if (lVar2 != 0) {
        lVar5 = 0;
        plVar4 = plVar1;
        do {
          if ((StringName::configured != '\0') && (*plVar4 != 0)) {
            StringName::unref();
          }
          lVar5 = lVar5 + 1;
          plVar4 = plVar4 + 1;
        } while (lVar2 != lVar5);
      }
      Memory::free_static(plVar1 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (*(long *)this != 0)) {
    StringName::unref();
    return;
  }
  return;
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



/* MethodBind* create_method_bind<UPNPDevice, bool>(bool (UPNPDevice::*)() const) */

MethodBind * create_method_bind<UPNPDevice,bool>(_func_bool *param_1)

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
  *(_func_bool **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0010a118;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "UPNPDevice";
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



/* MethodBind* create_method_bind<UPNPDevice, String>(String (UPNPDevice::*)() const) */

MethodBind * create_method_bind<UPNPDevice,String>(_func_String *param_1)

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
  *(_func_String **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0010a178;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "UPNPDevice";
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



/* MethodBind* create_method_bind<UPNPDevice, int, int, int, String, String, int>(int
   (UPNPDevice::*)(int, int, String, String, int) const) */

MethodBind *
create_method_bind<UPNPDevice,int,int,int,String,String,int>
          (_func_int_int_int_String_String_int *param_1)

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
  *(_func_int_int_int_String_String_int **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0010a1d8;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 5;
  local_40 = 0;
  local_38 = "UPNPDevice";
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



/* MethodBind* create_method_bind<UPNPDevice, int, int, String>(int (UPNPDevice::*)(int, String)
   const) */

MethodBind * create_method_bind<UPNPDevice,int,int,String>(_func_int_int_String *param_1)

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
  *(_func_int_int_String **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0010a238;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 2;
  local_40 = 0;
  local_38 = "UPNPDevice";
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



/* MethodBind* create_method_bind<UPNPDevice, String const&>(void (UPNPDevice::*)(String const&)) */

MethodBind * create_method_bind<UPNPDevice,String_const&>(_func_void_String_ptr *param_1)

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
  *(_func_void_String_ptr **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0010a298;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "UPNPDevice";
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



/* MethodBind* create_method_bind<UPNPDevice, UPNPDevice::IGDStatus>(void
   (UPNPDevice::*)(UPNPDevice::IGDStatus)) */

MethodBind * create_method_bind<UPNPDevice,UPNPDevice::IGDStatus>(_func_void_IGDStatus *param_1)

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
  *(_func_void_IGDStatus **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0010a2f8;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "UPNPDevice";
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



/* MethodBind* create_method_bind<UPNPDevice, UPNPDevice::IGDStatus>(UPNPDevice::IGDStatus
   (UPNPDevice::*)() const) */

MethodBind * create_method_bind<UPNPDevice,UPNPDevice::IGDStatus>(_func_IGDStatus *param_1)

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
  *(_func_IGDStatus **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0010a358;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "UPNPDevice";
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



/* UPNPDevice::_bind_methods() [clone .cold] */

void UPNPDevice::_bind_methods(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* WARNING: Removing unreachable block (ram,0x001052d8) */
/* WARNING: Removing unreachable block (ram,0x00105408) */
/* WARNING: Removing unreachable block (ram,0x001055d0) */
/* WARNING: Removing unreachable block (ram,0x00105414) */
/* WARNING: Removing unreachable block (ram,0x0010541e) */
/* WARNING: Removing unreachable block (ram,0x001055b0) */
/* WARNING: Removing unreachable block (ram,0x0010542a) */
/* WARNING: Removing unreachable block (ram,0x00105434) */
/* WARNING: Removing unreachable block (ram,0x00105590) */
/* WARNING: Removing unreachable block (ram,0x00105440) */
/* WARNING: Removing unreachable block (ram,0x0010544a) */
/* WARNING: Removing unreachable block (ram,0x00105570) */
/* WARNING: Removing unreachable block (ram,0x00105456) */
/* WARNING: Removing unreachable block (ram,0x00105460) */
/* WARNING: Removing unreachable block (ram,0x00105550) */
/* WARNING: Removing unreachable block (ram,0x0010546c) */
/* WARNING: Removing unreachable block (ram,0x00105476) */
/* WARNING: Removing unreachable block (ram,0x00105530) */
/* WARNING: Removing unreachable block (ram,0x00105482) */
/* WARNING: Removing unreachable block (ram,0x0010548c) */
/* WARNING: Removing unreachable block (ram,0x00105510) */
/* WARNING: Removing unreachable block (ram,0x00105494) */
/* WARNING: Removing unreachable block (ram,0x001054aa) */
/* WARNING: Removing unreachable block (ram,0x001054b6) */
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



/* MethodBindTRC<UPNPDevice::IGDStatus>::call(Object*, Variant const**, int, Callable::CallError&)
   const */

Object * MethodBindTRC<UPNPDevice::IGDStatus>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  long lVar2;
  char *pcVar3;
  int iVar4;
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
      _err_print_error(&_LC60,"./core/object/method_bind.h",0x267,
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
      goto LAB_001057a0;
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
      iVar4 = (*(code *)pVVar5)();
      Variant::Variant((Variant *)local_48,iVar4);
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
LAB_001057a0:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<UPNPDevice::IGDStatus>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTRC<UPNPDevice::IGDStatus>::validated_call
          (MethodBindTRC<UPNPDevice::IGDStatus> *this,Object *param_1,Variant **param_2,
          Variant *param_3)

{
  long lVar1;
  char *pcVar2;
  uint uVar3;
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
      goto LAB_00105a94;
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
  *(ulong *)(param_3 + 8) = (ulong)uVar3;
LAB_00105a94:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<UPNPDevice::IGDStatus>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<UPNPDevice::IGDStatus>::ptrcall
          (MethodBindTRC<UPNPDevice::IGDStatus> *this,Object *param_1,void **param_2,void *param_3)

{
  long lVar1;
  char *pcVar2;
  uint uVar3;
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
      goto LAB_00105c93;
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
  *(ulong *)param_3 = (ulong)uVar3;
LAB_00105c93:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<UPNPDevice::IGDStatus>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<UPNPDevice::IGDStatus>::validated_call
               (Object *param_1,Variant **param_2,Variant *param_3)

{
  long *plVar1;
  long lVar2;
  char *pcVar3;
  code *UNRECOVERED_JUMPTABLE;
  Variant *pVVar4;
  long in_FS_OFFSET;
  long local_48;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (Variant **)0x0) && (param_2[1] != (Variant *)0x0)) &&
     (param_2[1][0x2e] != (Variant)0x0)) {
    StringName::StringName((StringName *)&local_38,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (Variant *)0x0) {
      pVVar4 = param_2[0x23];
      if (pVVar4 == (Variant *)0x0) {
        pVVar4 = (Variant *)(**(code **)(*param_2 + 0x40))(param_2);
      }
    }
    else {
      pVVar4 = param_2[1] + 0x20;
    }
    if (local_38 == *(char **)pVVar4) {
      if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_38 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_40 = 0;
      local_30 = 0x35;
      String::parse_latin1((StrRange *)&local_40);
      vformat<StringName>((StringName *)&local_38,(StrRange *)&local_40,&local_48);
      _err_print_error("validated_call","./core/object/method_bind.h",0x160,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_38,0);
      pcVar3 = local_38;
      if (local_38 != (char *)0x0) {
        LOCK();
        plVar1 = (long *)(local_38 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_38 = (char *)0x0;
          Memory::free_static(pcVar3 + -0x10,false);
        }
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
      if ((StringName::configured != '\0') && (local_48 != 0)) {
        StringName::unref();
      }
      if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_00106065;
    }
    if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
      StringName::unref();
    }
  }
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x58);
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)((long)param_2 + *(long *)(param_1 + 0x60)) + -1);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00105ea8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),
               *(undefined4 *)(*(long *)param_3 + 8));
    return;
  }
LAB_00106065:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<UPNPDevice::IGDStatus>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<UPNPDevice::IGDStatus>::ptrcall(Object *param_1,void **param_2,void *param_3)

{
  long lVar1;
  char *pcVar2;
  code *UNRECOVERED_JUMPTABLE;
  long *plVar3;
  long in_FS_OFFSET;
  long local_48;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (void **)0x0) && (param_2[1] != (void *)0x0)) &&
     (*(char *)((long)param_2[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_38,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (void *)0x0) {
      plVar3 = (long *)param_2[0x23];
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)((long)*param_2 + 0x40))(param_2);
      }
    }
    else {
      plVar3 = (long *)((long)param_2[1] + 0x20);
    }
    if (local_38 == (char *)*plVar3) {
      if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_38 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_40 = 0;
      local_30 = 0x35;
      String::parse_latin1((StrRange *)&local_40);
      vformat<StringName>((StringName *)&local_38,(StrRange *)&local_40,&local_48);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x16b,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_38,0);
      pcVar2 = local_38;
      if (local_38 != (char *)0x0) {
        LOCK();
        plVar3 = (long *)(local_38 + -0x10);
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          local_38 = (char *)0x0;
          Memory::free_static(pcVar2 + -0x10,false);
        }
      }
      lVar1 = local_40;
      if (local_40 != 0) {
        LOCK();
        plVar3 = (long *)(local_40 + -0x10);
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          local_40 = 0;
          Memory::free_static((void *)(lVar1 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_48 != 0)) {
        StringName::unref();
      }
      if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_00106285;
    }
    if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
      StringName::unref();
    }
  }
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x58);
                    /* WARNING: Load size is inaccurate */
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)((long)param_2 + *(long *)(param_1 + 0x60)) + -1);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x001060c7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)),**param_3);
    return;
  }
LAB_00106285:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<String const&>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<String_const&>::validated_call(Object *param_1,Variant **param_2,Variant *param_3)

{
  long *plVar1;
  long lVar2;
  char *pcVar3;
  code *UNRECOVERED_JUMPTABLE;
  Variant *pVVar4;
  long in_FS_OFFSET;
  long local_48;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (Variant **)0x0) && (param_2[1] != (Variant *)0x0)) &&
     (param_2[1][0x2e] != (Variant)0x0)) {
    StringName::StringName((StringName *)&local_38,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (Variant *)0x0) {
      pVVar4 = param_2[0x23];
      if (pVVar4 == (Variant *)0x0) {
        pVVar4 = (Variant *)(**(code **)(*param_2 + 0x40))(param_2);
      }
    }
    else {
      pVVar4 = param_2[1] + 0x20;
    }
    if (local_38 == *(char **)pVVar4) {
      if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_38 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_40 = 0;
      local_30 = 0x35;
      String::parse_latin1((StrRange *)&local_40);
      vformat<StringName>((StringName *)&local_38,(StrRange *)&local_40,&local_48);
      _err_print_error("validated_call","./core/object/method_bind.h",0x160,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_38,0);
      pcVar3 = local_38;
      if (local_38 != (char *)0x0) {
        LOCK();
        plVar1 = (long *)(local_38 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_38 = (char *)0x0;
          Memory::free_static(pcVar3 + -0x10,false);
        }
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
      if ((StringName::configured != '\0') && (local_48 != 0)) {
        StringName::unref();
      }
      if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_001064a5;
    }
    if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
      StringName::unref();
    }
  }
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x58);
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)((long)param_2 + *(long *)(param_1 + 0x60)) + -1);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x001062e9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),*(long *)param_3 + 8);
    return;
  }
LAB_001064a5:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<String const&>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<String_const&>::ptrcall(Object *param_1,void **param_2,void *param_3)

{
  long lVar1;
  char *pcVar2;
  code *UNRECOVERED_JUMPTABLE;
  long *plVar3;
  long in_FS_OFFSET;
  long local_48;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (void **)0x0) && (param_2[1] != (void *)0x0)) &&
     (*(char *)((long)param_2[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_38,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (void *)0x0) {
      plVar3 = (long *)param_2[0x23];
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)((long)*param_2 + 0x40))(param_2);
      }
    }
    else {
      plVar3 = (long *)((long)param_2[1] + 0x20);
    }
    if (local_38 == (char *)*plVar3) {
      if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_38 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_40 = 0;
      local_30 = 0x35;
      String::parse_latin1((StrRange *)&local_40);
      vformat<StringName>((StringName *)&local_38,(StrRange *)&local_40,&local_48);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x16b,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_38,0);
      pcVar2 = local_38;
      if (local_38 != (char *)0x0) {
        LOCK();
        plVar3 = (long *)(local_38 + -0x10);
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          local_38 = (char *)0x0;
          Memory::free_static(pcVar2 + -0x10,false);
        }
      }
      lVar1 = local_40;
      if (local_40 != 0) {
        LOCK();
        plVar3 = (long *)(local_40 + -0x10);
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          local_40 = 0;
          Memory::free_static((void *)(lVar1 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_48 != 0)) {
        StringName::unref();
      }
      if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_001066c5;
    }
    if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
      StringName::unref();
    }
  }
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x58);
                    /* WARNING: Load size is inaccurate */
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)((long)param_2 + *(long *)(param_1 + 0x60)) + -1);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00106505. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)),*param_3);
    return;
  }
LAB_001066c5:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<int, int, String>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTRC<int,int,String>::validated_call
          (MethodBindTRC<int,int,String> *this,Object *param_1,Variant **param_2,Variant *param_3)

{
  long lVar1;
  Variant *pVVar2;
  long lVar3;
  char *pcVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  code *pcVar8;
  long in_FS_OFFSET;
  bool bVar9;
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
      plVar7 = *(long **)(param_1 + 0x118);
      if (plVar7 == (long *)0x0) {
        plVar7 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar7 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar7) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x273,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0);
      pcVar4 = local_48;
      if (local_48 != (char *)0x0) {
        LOCK();
        plVar7 = (long *)(local_48 + -0x10);
        *plVar7 = *plVar7 + -1;
        UNLOCK();
        if (*plVar7 == 0) {
          local_48 = (char *)0x0;
          Memory::free_static(pcVar4 + -0x10,false);
        }
      }
      lVar1 = local_50;
      if (local_50 != 0) {
        LOCK();
        plVar7 = (long *)(local_50 + -0x10);
        *plVar7 = *plVar7 + -1;
        UNLOCK();
        if (*plVar7 == 0) {
          local_50 = 0;
          Memory::free_static((void *)(lVar1 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00106796;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar8 = *(code **)(this + 0x58);
  lVar1 = *(long *)(this + 0x60);
  if (((ulong)pcVar8 & 1) != 0) {
    pcVar8 = *(code **)(pcVar8 + *(long *)(param_1 + lVar1) + -1);
  }
  local_48 = (char *)0x0;
  pVVar2 = param_2[1];
  lVar3 = *(long *)(pVVar2 + 8);
  plVar7 = (long *)(lVar3 + -0x10);
  if (lVar3 != 0) {
    do {
      lVar3 = *plVar7;
      if (lVar3 == 0) goto LAB_00106759;
      LOCK();
      lVar6 = *plVar7;
      bVar9 = lVar3 == lVar6;
      if (bVar9) {
        *plVar7 = lVar3 + 1;
        lVar6 = lVar3;
      }
      UNLOCK();
    } while (!bVar9);
    if (lVar6 != -1) {
      local_48 = *(char **)(pVVar2 + 8);
    }
  }
LAB_00106759:
  iVar5 = (*pcVar8)(param_1 + lVar1,*(undefined4 *)(*param_2 + 8),(StringName *)&local_48);
  pcVar4 = local_48;
  *(long *)(param_3 + 8) = (long)iVar5;
  if (local_48 != (char *)0x0) {
    LOCK();
    plVar7 = (long *)(local_48 + -0x10);
    *plVar7 = *plVar7 + -1;
    UNLOCK();
    if (*plVar7 == 0) {
      local_48 = (char *)0x0;
      Memory::free_static(pcVar4 + -0x10,false);
    }
  }
LAB_00106796:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* MethodBindTRC<int, int, String>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<int,int,String>::ptrcall
          (MethodBindTRC<int,int,String> *this,Object *param_1,void **param_2,void *param_3)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  char *pcVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  code *pcVar8;
  long in_FS_OFFSET;
  bool bVar9;
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
      plVar7 = *(long **)(param_1 + 0x118);
      if (plVar7 == (long *)0x0) {
        plVar7 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar7 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar7) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x27e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0);
      pcVar4 = local_48;
      if (local_48 != (char *)0x0) {
        LOCK();
        plVar7 = (long *)(local_48 + -0x10);
        *plVar7 = *plVar7 + -1;
        UNLOCK();
        if (*plVar7 == 0) {
          local_48 = (char *)0x0;
          Memory::free_static(pcVar4 + -0x10,false);
        }
      }
      lVar1 = local_50;
      if (local_50 != 0) {
        LOCK();
        plVar7 = (long *)(local_50 + -0x10);
        *plVar7 = *plVar7 + -1;
        UNLOCK();
        if (*plVar7 == 0) {
          local_50 = 0;
          Memory::free_static((void *)(lVar1 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00106a22;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar8 = *(code **)(this + 0x58);
  lVar1 = *(long *)(this + 0x60);
  if (((ulong)pcVar8 & 1) != 0) {
    pcVar8 = *(code **)(pcVar8 + *(long *)(param_1 + lVar1) + -1);
  }
  local_48 = (char *)0x0;
  plVar2 = (long *)param_2[1];
  lVar3 = *plVar2;
  plVar7 = (long *)(lVar3 + -0x10);
  if (lVar3 != 0) {
    do {
      lVar3 = *plVar7;
      if (lVar3 == 0) goto LAB_001069e7;
      LOCK();
      lVar6 = *plVar7;
      bVar9 = lVar3 == lVar6;
      if (bVar9) {
        *plVar7 = lVar3 + 1;
        lVar6 = lVar3;
      }
      UNLOCK();
    } while (!bVar9);
    if (lVar6 != -1) {
      local_48 = (char *)*plVar2;
    }
  }
LAB_001069e7:
                    /* WARNING: Load size is inaccurate */
  iVar5 = (*pcVar8)(param_1 + lVar1,**param_2,(StringName *)&local_48);
  pcVar4 = local_48;
  *(long *)param_3 = (long)iVar5;
  if (local_48 != (char *)0x0) {
    LOCK();
    plVar7 = (long *)(local_48 + -0x10);
    *plVar7 = *plVar7 + -1;
    UNLOCK();
    if (*plVar7 == 0) {
      local_48 = (char *)0x0;
      Memory::free_static(pcVar4 + -0x10,false);
    }
  }
LAB_00106a22:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* MethodBindTRC<int, int, int, String, String, int>::validated_call(Object*, Variant const**,
   Variant*) const */

void __thiscall
MethodBindTRC<int,int,int,String,String,int>::validated_call
          (MethodBindTRC<int,int,int,String,String,int> *this,Object *param_1,Variant **param_2,
          Variant *param_3)

{
  long lVar1;
  Variant *pVVar2;
  undefined8 uVar3;
  long lVar4;
  char *pcVar5;
  int iVar6;
  long lVar7;
  long *plVar8;
  code *pcVar9;
  long in_FS_OFFSET;
  bool bVar10;
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
      plVar8 = *(long **)(param_1 + 0x118);
      if (plVar8 == (long *)0x0) {
        plVar8 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar8 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar8) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x273,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0);
      pcVar5 = local_48;
      if (local_48 != (char *)0x0) {
        LOCK();
        plVar8 = (long *)(local_48 + -0x10);
        *plVar8 = *plVar8 + -1;
        UNLOCK();
        if (*plVar8 == 0) {
          local_48 = (char *)0x0;
          Memory::free_static(pcVar5 + -0x10,false);
        }
      }
      lVar1 = local_50;
      if (local_50 != 0) {
        LOCK();
        plVar8 = (long *)(local_50 + -0x10);
        *plVar8 = *plVar8 + -1;
        UNLOCK();
        if (*plVar8 == 0) {
          local_50 = 0;
          Memory::free_static((void *)(lVar1 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00106d32;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar9 = *(code **)(this + 0x58);
  lVar1 = *(long *)(this + 0x60);
  if (((ulong)pcVar9 & 1) != 0) {
    pcVar9 = *(code **)(pcVar9 + *(long *)(param_1 + lVar1) + -1);
  }
  pVVar2 = param_2[3];
  uVar3 = *(undefined8 *)(param_2[4] + 8);
  local_50 = 0;
  lVar4 = *(long *)(pVVar2 + 8);
  plVar8 = (long *)(lVar4 + -0x10);
  if (lVar4 != 0) {
    do {
      lVar4 = *plVar8;
      if (lVar4 == 0) goto LAB_00106c82;
      LOCK();
      lVar7 = *plVar8;
      bVar10 = lVar4 == lVar7;
      if (bVar10) {
        *plVar8 = lVar4 + 1;
        lVar7 = lVar4;
      }
      UNLOCK();
    } while (!bVar10);
    if (lVar7 != -1) {
      local_50 = *(long *)(pVVar2 + 8);
    }
  }
LAB_00106c82:
  local_48 = (char *)0x0;
  pVVar2 = param_2[2];
  lVar4 = *(long *)(pVVar2 + 8);
  plVar8 = (long *)(lVar4 + -0x10);
  if (lVar4 != 0) {
    do {
      lVar4 = *plVar8;
      if (lVar4 == 0) goto LAB_00106cbe;
      LOCK();
      lVar7 = *plVar8;
      bVar10 = lVar4 == lVar7;
      if (bVar10) {
        *plVar8 = lVar4 + 1;
        lVar7 = lVar4;
      }
      UNLOCK();
    } while (!bVar10);
    if (lVar7 != -1) {
      local_48 = *(char **)(pVVar2 + 8);
    }
  }
LAB_00106cbe:
  iVar6 = (*pcVar9)(param_1 + lVar1,*(undefined4 *)(*param_2 + 8),*(undefined4 *)(param_2[1] + 8),
                    (StringName *)&local_48,&local_50,uVar3);
  pcVar5 = local_48;
  *(long *)(param_3 + 8) = (long)iVar6;
  if (local_48 != (char *)0x0) {
    LOCK();
    plVar8 = (long *)(local_48 + -0x10);
    *plVar8 = *plVar8 + -1;
    UNLOCK();
    if (*plVar8 == 0) {
      local_48 = (char *)0x0;
      Memory::free_static(pcVar5 + -0x10,false);
    }
  }
  lVar1 = local_50;
  if (local_50 != 0) {
    LOCK();
    plVar8 = (long *)(local_50 + -0x10);
    *plVar8 = *plVar8 + -1;
    UNLOCK();
    if (*plVar8 == 0) {
      local_50 = 0;
      Memory::free_static((void *)(lVar1 + -0x10),false);
    }
  }
LAB_00106d32:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* MethodBindTRC<int, int, int, String, String, int>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<int,int,int,String,String,int>::ptrcall
          (MethodBindTRC<int,int,int,String,String,int> *this,Object *param_1,void **param_2,
          void *param_3)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  char *pcVar5;
  int iVar6;
  long lVar7;
  long *plVar8;
  code *pcVar9;
  long in_FS_OFFSET;
  bool bVar10;
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
      plVar8 = *(long **)(param_1 + 0x118);
      if (plVar8 == (long *)0x0) {
        plVar8 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar8 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar8) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x27e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0);
      pcVar5 = local_48;
      if (local_48 != (char *)0x0) {
        LOCK();
        plVar8 = (long *)(local_48 + -0x10);
        *plVar8 = *plVar8 + -1;
        UNLOCK();
        if (*plVar8 == 0) {
          local_48 = (char *)0x0;
          Memory::free_static(pcVar5 + -0x10,false);
        }
      }
      lVar1 = local_50;
      if (local_50 != 0) {
        LOCK();
        plVar8 = (long *)(local_50 + -0x10);
        *plVar8 = *plVar8 + -1;
        UNLOCK();
        if (*plVar8 == 0) {
          local_50 = 0;
          Memory::free_static((void *)(lVar1 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0010703b;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar9 = *(code **)(this + 0x58);
  lVar1 = *(long *)(this + 0x60);
  if (((ulong)pcVar9 & 1) != 0) {
    pcVar9 = *(code **)(pcVar9 + *(long *)(param_1 + lVar1) + -1);
  }
  plVar2 = (long *)param_2[3];
                    /* WARNING: Load size is inaccurate */
  uVar3 = *param_2[4];
  local_50 = 0;
  lVar4 = *plVar2;
  plVar8 = (long *)(lVar4 + -0x10);
  if (lVar4 != 0) {
    do {
      lVar4 = *plVar8;
      if (lVar4 == 0) goto LAB_00106f8f;
      LOCK();
      lVar7 = *plVar8;
      bVar10 = lVar4 == lVar7;
      if (bVar10) {
        *plVar8 = lVar4 + 1;
        lVar7 = lVar4;
      }
      UNLOCK();
    } while (!bVar10);
    if (lVar7 != -1) {
      local_50 = *plVar2;
    }
  }
LAB_00106f8f:
  local_48 = (char *)0x0;
  plVar2 = (long *)param_2[2];
  lVar4 = *plVar2;
  plVar8 = (long *)(lVar4 + -0x10);
  if (lVar4 != 0) {
    do {
      lVar4 = *plVar8;
      if (lVar4 == 0) goto LAB_00106fc9;
      LOCK();
      lVar7 = *plVar8;
      bVar10 = lVar4 == lVar7;
      if (bVar10) {
        *plVar8 = lVar4 + 1;
        lVar7 = lVar4;
      }
      UNLOCK();
    } while (!bVar10);
    if (lVar7 != -1) {
      local_48 = (char *)*plVar2;
    }
  }
LAB_00106fc9:
                    /* WARNING: Load size is inaccurate */
                    /* WARNING: Load size is inaccurate */
  iVar6 = (*pcVar9)(param_1 + lVar1,**param_2,*param_2[1],(StringName *)&local_48,&local_50,uVar3);
  pcVar5 = local_48;
  *(long *)param_3 = (long)iVar6;
  if (local_48 != (char *)0x0) {
    LOCK();
    plVar8 = (long *)(local_48 + -0x10);
    *plVar8 = *plVar8 + -1;
    UNLOCK();
    if (*plVar8 == 0) {
      local_48 = (char *)0x0;
      Memory::free_static(pcVar5 + -0x10,false);
    }
  }
  lVar1 = local_50;
  if (local_50 != 0) {
    LOCK();
    plVar8 = (long *)(local_50 + -0x10);
    *plVar8 = *plVar8 + -1;
    UNLOCK();
    if (*plVar8 == 0) {
      local_50 = 0;
      Memory::free_static((void *)(lVar1 + -0x10),false);
    }
  }
LAB_0010703b:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* MethodBindTRC<String>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTRC<String>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

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
      _err_print_error(&_LC60,"./core/object/method_bind.h",0x267,
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
      goto LAB_00107310;
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
      (*(code *)pVVar4)((String *)&local_58);
      Variant::Variant((Variant *)local_48,(String *)&local_58);
      if (Variant::needs_deinit[*(int *)param_1] != '\0') {
        Variant::_clear_internal();
      }
      pcVar3 = local_58;
      *(undefined4 *)param_1 = local_48[0];
      *(undefined8 *)(param_1 + 8) = local_40;
      *(undefined8 *)(param_1 + 0x10) = uStack_38;
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
LAB_00107310:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<String>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTRC<String>::validated_call
          (MethodBindTRC<String> *this,Object *param_1,Variant **param_2,Variant *param_3)

{
  Variant **ppVVar1;
  long lVar2;
  Variant **ppVVar3;
  code *pcVar4;
  long *plVar5;
  Variant **extraout_RDX;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  Variant **local_48;
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
    if (local_48 == (Variant **)*plVar5) {
      if ((StringName::configured != '\0') && (local_48 != (Variant **)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = (Variant **)0x1055f8;
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x273,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      ppVVar3 = local_48;
      if (local_48 != (Variant **)0x0) {
        LOCK();
        ppVVar1 = local_48 + -2;
        *ppVVar1 = *ppVVar1 + -1;
        UNLOCK();
        if (*ppVVar1 == (Variant *)0x0) {
          local_48 = (Variant **)0x0;
          Memory::free_static(ppVVar3 + -2,false);
        }
      }
      lVar2 = local_50;
      if (local_50 != 0) {
        LOCK();
        plVar5 = (long *)(local_50 + -0x10);
        *plVar5 = *plVar5 + -1;
        UNLOCK();
        if (*plVar5 == 0) {
          local_50 = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_001075c1;
    }
    param_2 = local_48;
    if ((StringName::configured != '\0') && (local_48 != (Variant **)0x0)) {
      StringName::unref();
      param_2 = extraout_RDX;
    }
  }
  pcVar4 = *(code **)(this + 0x58);
  if (((ulong)pcVar4 & 1) != 0) {
    param_2 = *(Variant ***)(param_1 + *(long *)(this + 0x60));
    pcVar4 = *(code **)(pcVar4 + (long)param_2 + -1);
  }
  (*pcVar4)((StringName *)&local_48,param_1 + *(long *)(this + 0x60),param_2);
  if (*(Variant ***)(param_3 + 8) != local_48) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(param_3 + 8),(CowData *)&local_48);
  }
  ppVVar3 = local_48;
  if (local_48 != (Variant **)0x0) {
    LOCK();
    ppVVar1 = local_48 + -2;
    *ppVVar1 = *ppVVar1 + -1;
    UNLOCK();
    if (*ppVVar1 == (Variant *)0x0) {
      local_48 = (Variant **)0x0;
      Memory::free_static(ppVVar3 + -2,false);
    }
  }
LAB_001075c1:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<String>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<String>::ptrcall
          (MethodBindTRC<String> *this,Object *param_1,void **param_2,void *param_3)

{
  void **ppvVar1;
  long lVar2;
  void **ppvVar3;
  code *pcVar4;
  long *plVar5;
  void **extraout_RDX;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  void **local_48;
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
    if (local_48 == (void **)*plVar5) {
      if ((StringName::configured != '\0') && (local_48 != (void **)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = (void **)0x1055f8;
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x27e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      ppvVar3 = local_48;
      if (local_48 != (void **)0x0) {
        LOCK();
        ppvVar1 = local_48 + -2;
        *ppvVar1 = (void *)((long)*ppvVar1 + -1);
        UNLOCK();
        if (*ppvVar1 == (void *)0x0) {
          local_48 = (void **)0x0;
          Memory::free_static(ppvVar3 + -2,false);
        }
      }
      lVar2 = local_50;
      if (local_50 != 0) {
        LOCK();
        plVar5 = (long *)(local_50 + -0x10);
        *plVar5 = *plVar5 + -1;
        UNLOCK();
        if (*plVar5 == 0) {
          local_50 = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_001077ee;
    }
    param_2 = local_48;
    if ((StringName::configured != '\0') && (local_48 != (void **)0x0)) {
      StringName::unref();
      param_2 = extraout_RDX;
    }
  }
  pcVar4 = *(code **)(this + 0x58);
  if (((ulong)pcVar4 & 1) != 0) {
    param_2 = *(void ***)(param_1 + *(long *)(this + 0x60));
    pcVar4 = *(code **)(pcVar4 + (long)param_2 + -1);
  }
  (*pcVar4)((StringName *)&local_48,param_1 + *(long *)(this + 0x60),param_2);
                    /* WARNING: Load size is inaccurate */
  if (*param_3 != local_48) {
    CowData<char32_t>::_ref((CowData<char32_t> *)param_3,(CowData *)&local_48);
  }
  ppvVar3 = local_48;
  if (local_48 != (void **)0x0) {
    LOCK();
    ppvVar1 = local_48 + -2;
    *ppvVar1 = (void *)((long)*ppvVar1 + -1);
    UNLOCK();
    if (*ppvVar1 == (void *)0x0) {
      local_48 = (void **)0x0;
      Memory::free_static(ppvVar3 + -2,false);
    }
  }
LAB_001077ee:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<bool>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTRC<bool>::call(Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  long lVar2;
  char *pcVar3;
  bool bVar4;
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
      _err_print_error(&_LC60,"./core/object/method_bind.h",0x267,
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
      goto LAB_00107a50;
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
      bVar4 = (bool)(*(code *)pVVar5)();
      Variant::Variant((Variant *)local_48,bVar4);
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
LAB_00107a50:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<bool>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTRC<bool>::validated_call
          (MethodBindTRC<bool> *this,Object *param_1,Variant **param_2,Variant *param_3)

{
  long lVar1;
  char *pcVar2;
  Variant VVar3;
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
      goto LAB_00107cb2;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar4 = *(code **)(this + 0x58);
  if (((ulong)pcVar4 & 1) != 0) {
    pcVar4 = *(code **)(pcVar4 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  VVar3 = (Variant)(*pcVar4)(param_1 + *(long *)(this + 0x60));
  param_3[8] = VVar3;
LAB_00107cb2:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<bool>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<bool>::ptrcall(MethodBindTRC<bool> *this,Object *param_1,void **param_2,void *param_3)

{
  long lVar1;
  char *pcVar2;
  undefined1 uVar3;
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
      goto LAB_00107eb1;
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
  *(undefined1 *)param_3 = uVar3;
LAB_00107eb1:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<String const&>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindT<String_const&>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  char *pcVar5;
  char cVar6;
  undefined4 uVar7;
  long *plVar8;
  long lVar9;
  undefined4 in_register_00000014;
  long *plVar10;
  uint in_R8D;
  undefined4 *in_R9;
  Variant *pVVar11;
  Variant *pVVar12;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  plVar10 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((plVar10 != (long *)0x0) && (plVar10[1] != 0)) && (*(char *)(plVar10[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_2 + 3));
    if (plVar10[1] == 0) {
      plVar8 = (long *)plVar10[0x23];
      if (plVar8 == (long *)0x0) {
        plVar8 = (long *)(**(code **)(*plVar10 + 0x40))(plVar10);
      }
    }
    else {
      plVar8 = (long *)(plVar10[1] + 0x20);
    }
    if (local_48 == (char *)*plVar8) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error(&_LC60,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0);
      pcVar5 = local_48;
      if (local_48 != (char *)0x0) {
        LOCK();
        plVar10 = (long *)(local_48 + -0x10);
        *plVar10 = *plVar10 + -1;
        UNLOCK();
        if (*plVar10 == 0) {
          local_48 = (char *)0x0;
          Memory::free_static(pcVar5 + -0x10,false);
        }
      }
      lVar2 = local_50;
      if (local_50 != 0) {
        LOCK();
        plVar10 = (long *)(local_50 + -0x10);
        *plVar10 = *plVar10 + -1;
        UNLOCK();
        if (*plVar10 == 0) {
          local_50 = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00108220;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar12 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D < 2) {
    pVVar11 = param_2[5];
    if (pVVar11 == (Variant *)0x0) {
      if (in_R8D != 1) goto LAB_00108270;
LAB_00108260:
      pVVar11 = *(Variant **)param_4;
    }
    else {
      lVar2 = *(long *)(pVVar11 + -8);
      if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_00108270:
        uVar7 = 4;
        goto LAB_00108215;
      }
      if (in_R8D == 1) goto LAB_00108260;
      lVar9 = (long)((int)lVar2 + -1);
      if (lVar2 <= lVar9) {
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar9,lVar2,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      pVVar11 = pVVar11 + lVar9 * 0x18;
    }
    *in_R9 = 0;
    if (((ulong)pVVar12 & 1) != 0) {
      pVVar12 = *(Variant **)(pVVar12 + *(long *)((long)plVar10 + (long)pVVar1) + -1);
    }
    cVar6 = Variant::can_convert_strict(*(undefined4 *)pVVar11,4);
    uVar4 = _LC65;
    if (cVar6 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    Variant::operator_cast_to_String((Variant *)&local_48);
    (*(code *)pVVar12)((Variant *)((long)plVar10 + (long)pVVar1));
    pcVar5 = local_48;
    if (local_48 != (char *)0x0) {
      LOCK();
      plVar10 = (long *)(local_48 + -0x10);
      *plVar10 = *plVar10 + -1;
      UNLOCK();
      if (*plVar10 == 0) {
        local_48 = (char *)0x0;
        Memory::free_static(pcVar5 + -0x10,false);
      }
    }
  }
  else {
    uVar7 = 3;
LAB_00108215:
    *in_R9 = uVar7;
    in_R9[2] = 1;
  }
LAB_00108220:
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<int, int, int, String, String, int>::call(Object*, Variant const**, int,
   Callable::CallError&) const */

Object * MethodBindTRC<int,int,int,String,String,int>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  Variant *pVVar2;
  code *pcVar3;
  undefined8 uVar4;
  char *pcVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  long lVar11;
  long *plVar12;
  uint uVar13;
  undefined4 in_register_00000014;
  long *plVar14;
  Variant *pVVar15;
  long lVar16;
  uint in_R8D;
  undefined4 *in_R9;
  long in_FS_OFFSET;
  Variant *local_b8;
  long local_a8;
  long local_a0;
  char *local_98;
  undefined8 local_90;
  undefined4 local_88 [2];
  undefined8 local_80;
  undefined8 uStack_78;
  Variant *local_68 [5];
  long local_40;
  
  plVar14 = (long *)CONCAT44(in_register_00000014,param_3);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar14 != (long *)0x0) && (plVar14[1] != 0)) && (*(char *)(plVar14[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_98,(StringName *)(param_2 + 3));
    if (plVar14[1] == 0) {
      plVar12 = (long *)plVar14[0x23];
      if (plVar12 == (long *)0x0) {
        plVar12 = (long *)(**(code **)(*plVar14 + 0x40))();
      }
    }
    else {
      plVar12 = (long *)(plVar14[1] + 0x20);
    }
    if (local_98 == (char *)*plVar12) {
      if ((StringName::configured != '\0') && (local_98 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_98 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_a0 = 0;
      local_90 = 0x35;
      String::parse_latin1((StrRange *)&local_a0);
      vformat<StringName>((StringName *)&local_98,(StrRange *)&local_a0,&local_a8);
      _err_print_error(&_LC60,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_98,0);
      pcVar5 = local_98;
      if (local_98 != (char *)0x0) {
        LOCK();
        plVar14 = (long *)(local_98 + -0x10);
        *plVar14 = *plVar14 + -1;
        UNLOCK();
        if (*plVar14 == 0) {
          local_98 = (char *)0x0;
          Memory::free_static(pcVar5 + -0x10,false);
        }
      }
      lVar16 = local_a0;
      if (local_a0 != 0) {
        LOCK();
        plVar14 = (long *)(local_a0 + -0x10);
        *plVar14 = *plVar14 + -1;
        UNLOCK();
        if (*plVar14 == 0) {
          local_a0 = 0;
          Memory::free_static((void *)(lVar16 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_a8 != 0)) {
        StringName::unref();
      }
      goto LAB_00108761;
    }
    if ((StringName::configured != '\0') && (local_98 != (char *)0x0)) {
      StringName::unref();
    }
  }
  local_b8 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D < 6) {
    pVVar2 = param_2[5];
    if (pVVar2 == (Variant *)0x0) {
      iVar7 = 0;
      lVar16 = 0;
    }
    else {
      lVar16 = *(long *)(pVVar2 + -8);
      iVar7 = (int)lVar16;
    }
    if ((int)(5 - in_R8D) <= iVar7) {
      lVar11 = 0;
      do {
        if ((int)lVar11 < (int)in_R8D) {
          pVVar15 = *(Variant **)(param_4 + lVar11 * 8);
        }
        else {
          uVar13 = iVar7 + -5 + (int)lVar11;
          if (lVar16 <= (int)uVar13) {
            _err_print_index_error
                      ("get","./core/templates/cowdata.h",0xdb,(long)(int)uVar13,lVar16,"p_index",
                       "size()","",false,true);
            _err_flush_stdout();
                    /* WARNING: Does not return */
            pcVar3 = (code *)invalidInstructionException();
            (*pcVar3)();
          }
          pVVar15 = pVVar2 + (ulong)uVar13 * 0x18;
        }
        local_68[lVar11] = pVVar15;
        lVar11 = lVar11 + 1;
      } while (lVar11 != 5);
      *in_R9 = 0;
      if (((ulong)local_b8 & 1) != 0) {
        local_b8 = *(Variant **)(local_b8 + *(long *)((long)plVar14 + (long)pVVar1) + -1);
      }
      cVar6 = Variant::can_convert_strict(*(undefined4 *)local_68[4],2);
      uVar4 = _LC67;
      if (cVar6 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = uVar4;
      }
      iVar7 = Variant::operator_cast_to_int(local_68[4]);
      cVar6 = Variant::can_convert_strict(*(undefined4 *)local_68[3],4);
      uVar4 = _LC68;
      if (cVar6 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = uVar4;
      }
      Variant::operator_cast_to_String((Variant *)&local_a0);
      cVar6 = Variant::can_convert_strict(*(undefined4 *)local_68[2],4);
      uVar4 = _LC69;
      if (cVar6 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = uVar4;
      }
      Variant::operator_cast_to_String((Variant *)&local_98);
      cVar6 = Variant::can_convert_strict(*(undefined4 *)local_68[1],2);
      uVar4 = _LC70;
      if (cVar6 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = uVar4;
      }
      iVar8 = Variant::operator_cast_to_int(local_68[1]);
      cVar6 = Variant::can_convert_strict(*(undefined4 *)local_68[0],2);
      uVar4 = _LC71;
      if (cVar6 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = uVar4;
      }
      iVar9 = Variant::operator_cast_to_int(local_68[0]);
      iVar7 = (*(code *)local_b8)((Variant *)((long)plVar14 + (long)pVVar1),iVar9,iVar8,
                                  (Variant *)&local_98,(Variant *)&local_a0,iVar7);
      Variant::Variant((Variant *)local_88,iVar7);
      if (Variant::needs_deinit[*(int *)param_1] != '\0') {
        Variant::_clear_internal();
      }
      pcVar5 = local_98;
      *(undefined4 *)param_1 = local_88[0];
      *(undefined8 *)(param_1 + 8) = local_80;
      *(undefined8 *)(param_1 + 0x10) = uStack_78;
      if (local_98 != (char *)0x0) {
        LOCK();
        plVar14 = (long *)(local_98 + -0x10);
        *plVar14 = *plVar14 + -1;
        UNLOCK();
        if (*plVar14 == 0) {
          local_98 = (char *)0x0;
          Memory::free_static(pcVar5 + -0x10,false);
        }
      }
      lVar16 = local_a0;
      if (local_a0 != 0) {
        LOCK();
        plVar14 = (long *)(local_a0 + -0x10);
        *plVar14 = *plVar14 + -1;
        UNLOCK();
        if (*plVar14 == 0) {
          local_a0 = 0;
          Memory::free_static((void *)(lVar16 + -0x10),false);
        }
      }
      goto LAB_00108761;
    }
    uVar10 = 4;
  }
  else {
    uVar10 = 3;
  }
  *in_R9 = uVar10;
  in_R9[2] = 5;
LAB_00108761:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<int, int, String>::call(Object*, Variant const**, int, Callable::CallError&) const
    */

Object * MethodBindTRC<int,int,String>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  char *pcVar5;
  char cVar6;
  int iVar7;
  undefined4 uVar8;
  long *plVar9;
  long lVar10;
  undefined4 in_register_00000014;
  long *plVar11;
  Variant *pVVar12;
  Variant *this;
  uint in_R8D;
  undefined4 *in_R9;
  int iVar13;
  Variant *pVVar14;
  long in_FS_OFFSET;
  long local_78;
  long local_70;
  char *local_68;
  undefined8 local_60;
  undefined4 local_58 [2];
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  
  plVar11 = (long *)CONCAT44(in_register_00000014,param_3);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar11 != (long *)0x0) && (plVar11[1] != 0)) && (*(char *)(plVar11[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_68,(StringName *)(param_2 + 3));
    if (plVar11[1] == 0) {
      plVar9 = (long *)plVar11[0x23];
      if (plVar9 == (long *)0x0) {
        plVar9 = (long *)(**(code **)(*plVar11 + 0x40))(plVar11);
      }
    }
    else {
      plVar9 = (long *)(plVar11[1] + 0x20);
    }
    if (local_68 == (char *)*plVar9) {
      if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_68 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_70 = 0;
      local_60 = 0x35;
      String::parse_latin1((StrRange *)&local_70);
      vformat<StringName>((StringName *)&local_68,(StrRange *)&local_70,&local_78);
      _err_print_error(&_LC60,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_68,0);
      pcVar5 = local_68;
      if (local_68 != (char *)0x0) {
        LOCK();
        plVar11 = (long *)(local_68 + -0x10);
        *plVar11 = *plVar11 + -1;
        UNLOCK();
        if (*plVar11 == 0) {
          local_68 = (char *)0x0;
          Memory::free_static(pcVar5 + -0x10,false);
        }
      }
      lVar2 = local_70;
      if (local_70 != 0) {
        LOCK();
        plVar11 = (long *)(local_70 + -0x10);
        *plVar11 = *plVar11 + -1;
        UNLOCK();
        if (*plVar11 == 0) {
          local_70 = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_78 != 0)) {
        StringName::unref();
      }
      goto LAB_00108b70;
    }
    if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar14 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D < 3) {
    pVVar12 = param_2[5];
    iVar7 = 2 - in_R8D;
    if (pVVar12 == (Variant *)0x0) {
      if (iVar7 != 0) goto LAB_00108bb8;
      this = *(Variant **)param_4;
LAB_00108bcd:
      pVVar12 = *(Variant **)(param_4 + 8);
    }
    else {
      lVar2 = *(long *)(pVVar12 + -8);
      iVar13 = (int)lVar2;
      if (iVar13 < iVar7) {
LAB_00108bb8:
        uVar8 = 4;
        goto LAB_00108ba5;
      }
      if (in_R8D == 0) {
        lVar10 = (long)(iVar13 + -2);
        if (lVar2 <= lVar10) goto LAB_00108c90;
        this = pVVar12 + lVar10 * 0x18;
      }
      else {
        this = *(Variant **)param_4;
        if (in_R8D == 2) goto LAB_00108bcd;
      }
      lVar10 = (long)(int)((in_R8D ^ 1) + (iVar13 - iVar7));
      if (lVar2 <= lVar10) {
LAB_00108c90:
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar10,lVar2,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      pVVar12 = pVVar12 + lVar10 * 0x18;
    }
    *in_R9 = 0;
    if (((ulong)pVVar14 & 1) != 0) {
      pVVar14 = *(Variant **)(pVVar14 + *(long *)((long)plVar11 + (long)pVVar1) + -1);
    }
    cVar6 = Variant::can_convert_strict(*(undefined4 *)pVVar12,4);
    uVar4 = _LC72;
    if (cVar6 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    Variant::operator_cast_to_String((Variant *)&local_68);
    cVar6 = Variant::can_convert_strict(*(undefined4 *)this,2);
    uVar4 = _LC71;
    if (cVar6 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    iVar7 = Variant::operator_cast_to_int(this);
    iVar7 = (*(code *)pVVar14)((Variant *)((long)plVar11 + (long)pVVar1),iVar7,(Variant *)&local_68)
    ;
    Variant::Variant((Variant *)local_58,iVar7);
    if (Variant::needs_deinit[*(int *)param_1] != '\0') {
      Variant::_clear_internal();
    }
    pcVar5 = local_68;
    *(undefined4 *)param_1 = local_58[0];
    *(undefined8 *)(param_1 + 8) = local_50;
    *(undefined8 *)(param_1 + 0x10) = uStack_48;
    if (local_68 != (char *)0x0) {
      LOCK();
      plVar11 = (long *)(local_68 + -0x10);
      *plVar11 = *plVar11 + -1;
      UNLOCK();
      if (*plVar11 == 0) {
        local_68 = (char *)0x0;
        Memory::free_static(pcVar5 + -0x10,false);
      }
    }
  }
  else {
    uVar8 = 3;
LAB_00108ba5:
    *in_R9 = uVar8;
    in_R9[2] = 2;
  }
LAB_00108b70:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_with_variant_args_dv<__UnexistingClass, UPNPDevice::IGDStatus>(__UnexistingClass*, void
   (__UnexistingClass::*)(UPNPDevice::IGDStatus), Variant const**, int, Callable::CallError&,
   Vector<Variant> const&) */

void call_with_variant_args_dv<__UnexistingClass,UPNPDevice::IGDStatus>
               (__UnexistingClass *param_1,_func_void_IGDStatus *param_2,Variant **param_3,
               int param_4,CallError *param_5,Vector *param_6)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  char cVar5;
  undefined4 uVar6;
  undefined4 in_register_0000000c;
  long lVar7;
  uint uVar8;
  Variant *this;
  long in_stack_00000008;
  
  uVar8 = (uint)param_5;
  if (1 < uVar8) {
    uVar6 = 3;
    goto LAB_00108f1d;
  }
  lVar1 = *(long *)(in_stack_00000008 + 8);
  if (lVar1 == 0) {
    if (uVar8 != 1) goto LAB_00108f80;
  }
  else {
    lVar2 = *(long *)(lVar1 + -8);
    if ((int)lVar2 < (int)(uVar8 ^ 1)) {
LAB_00108f80:
      uVar6 = 4;
LAB_00108f1d:
      *(undefined4 *)param_6 = uVar6;
      *(undefined4 *)(param_6 + 8) = 1;
      return;
    }
    if (uVar8 != 1) {
      lVar7 = (long)((int)lVar2 + -1);
      if (lVar2 <= lVar7) {
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar7,lVar2,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      this = (Variant *)(lVar1 + lVar7 * 0x18);
      goto LAB_00108e9b;
    }
  }
  this = *(Variant **)CONCAT44(in_register_0000000c,param_4);
LAB_00108e9b:
  *(undefined4 *)param_6 = 0;
  if (((ulong)param_2 & 1) != 0) {
    param_2 = *(_func_void_IGDStatus **)(param_2 + *(long *)(param_1 + (long)param_3) + -1);
  }
  cVar5 = Variant::can_convert_strict(*(undefined4 *)this,2);
  uVar4 = _LC71;
  if (cVar5 == '\0') {
    *(undefined4 *)param_6 = 2;
    *(undefined8 *)(param_6 + 4) = uVar4;
  }
  Variant::operator_cast_to_long(this);
                    /* WARNING: Could not recover jumptable at 0x00108ef6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*param_2)((char)(param_1 + (long)param_3));
  return;
}



/* MethodBindT<UPNPDevice::IGDStatus>::call(Object*, Variant const**, int, Callable::CallError&)
   const */

Object * MethodBindT<UPNPDevice::IGDStatus>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  long lVar1;
  char *pcVar2;
  long *plVar3;
  undefined4 in_register_00000014;
  __UnexistingClass *p_Var4;
  CallError *in_R8;
  Vector *in_R9;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  p_Var4 = (__UnexistingClass *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((p_Var4 != (__UnexistingClass *)0x0) && (*(long *)(p_Var4 + 8) != 0)) &&
     (*(char *)(*(long *)(p_Var4 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_2 + 3));
    if (*(long *)(p_Var4 + 8) == 0) {
      plVar3 = *(long **)(p_Var4 + 0x118);
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*(long *)p_Var4 + 0x40))(p_Var4);
      }
    }
    else {
      plVar3 = (long *)(*(long *)(p_Var4 + 8) + 0x20);
    }
    in_R8 = (CallError *)((ulong)in_R8 & 0xffffffff);
    if (local_48 == (char *)*plVar3) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error(&_LC60,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      pcVar2 = local_48;
      if (local_48 != (char *)0x0) {
        LOCK();
        plVar3 = (long *)(local_48 + -0x10);
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          local_48 = (char *)0x0;
          Memory::free_static(pcVar2 + -0x10,false);
        }
      }
      lVar1 = local_50;
      if (local_50 != 0) {
        LOCK();
        plVar3 = (long *)(local_50 + -0x10);
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          local_50 = 0;
          Memory::free_static((void *)(lVar1 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      *(undefined4 *)param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
      goto LAB_00108fe6;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  call_with_variant_args_dv<__UnexistingClass,UPNPDevice::IGDStatus>
            (p_Var4,(_func_void_IGDStatus *)param_2[0xb],(Variant **)param_2[0xc],(int)param_4,in_R8
             ,in_R9);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
LAB_00108fe6:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_get_argument_type_info_helper<int>(int, int&, PropertyInfo&) */

void call_get_argument_type_info_helper<int>(int param_1,int *param_2,PropertyInfo *param_3)

{
  long *plVar1;
  long lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined8 uVar6;
  long lVar7;
  int iVar8;
  long in_FS_OFFSET;
  long local_80;
  long local_78;
  long local_70;
  undefined *local_68;
  undefined1 local_60 [16];
  int local_50;
  long local_48;
  undefined4 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  iVar8 = *param_2;
  if (iVar8 != param_1) goto LAB_00109225;
  local_78 = 0;
  local_68 = &_LC0;
  local_80 = 0;
  auVar3._8_8_ = 0;
  auVar3._0_8_ = local_60._8_8_;
  local_60 = auVar3 << 0x40;
  String::parse_latin1((StrRange *)&local_80);
  local_68 = (undefined *)CONCAT44(local_68._4_4_,2);
  local_50 = 0;
  local_48 = 0;
  local_60 = (undefined1  [16])0x0;
  if (local_80 == 0) {
LAB_00109318:
    local_40 = 6;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_78);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_80);
    local_40 = 6;
    if (local_50 != 0x11) goto LAB_00109318;
    StringName::StringName((StringName *)&local_70,(String *)&local_48,false);
    if (local_60._8_8_ == local_70) {
      if ((StringName::configured != '\0') && (local_70 != 0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_60._8_8_ = local_70;
    }
  }
  lVar2 = local_80;
  if (local_80 != 0) {
    LOCK();
    plVar1 = (long *)(local_80 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_80 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_78 != 0)) {
    StringName::unref();
  }
  *(undefined4 *)param_3 = local_68._0_4_;
  lVar2 = *(long *)(param_3 + 8);
  if (lVar2 != local_60._0_8_) {
    if (lVar2 != 0) {
      LOCK();
      plVar1 = (long *)(lVar2 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        lVar2 = *(long *)(param_3 + 8);
        *(undefined8 *)(param_3 + 8) = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
    *(undefined8 *)(param_3 + 8) = local_60._0_8_;
    auVar5._8_8_ = 0;
    auVar5._0_8_ = local_60._8_8_;
    local_60 = auVar5 << 0x40;
  }
  if (*(long *)(param_3 + 0x10) != local_60._8_8_) {
    StringName::unref();
    uVar6 = local_60._8_8_;
    local_60._8_8_ = 0;
    *(undefined8 *)(param_3 + 0x10) = uVar6;
  }
  lVar7 = local_48;
  *(int *)(param_3 + 0x18) = local_50;
  lVar2 = *(long *)(param_3 + 0x20);
  if (lVar2 == local_48) {
    *(undefined4 *)(param_3 + 0x28) = local_40;
    if (lVar2 != 0) {
      LOCK();
      plVar1 = (long *)(lVar2 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_48 = 0;
        Memory::free_static((void *)(lVar7 + -0x10),false);
      }
    }
  }
  else {
    if (lVar2 != 0) {
      LOCK();
      plVar1 = (long *)(lVar2 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        lVar2 = *(long *)(param_3 + 0x20);
        *(undefined8 *)(param_3 + 0x20) = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
    *(long *)(param_3 + 0x20) = local_48;
    *(undefined4 *)(param_3 + 0x28) = local_40;
  }
  if ((StringName::configured != '\0') && (local_60._8_8_ != 0)) {
    StringName::unref();
  }
  uVar6 = local_60._0_8_;
  if (local_60._0_8_ != 0) {
    LOCK();
    plVar1 = (long *)(local_60._0_8_ + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      auVar4._8_8_ = 0;
      auVar4._0_8_ = local_60._8_8_;
      local_60 = auVar4 << 0x40;
      Memory::free_static((void *)(uVar6 + -0x10),false);
    }
  }
  iVar8 = *param_2;
LAB_00109225:
  *param_2 = iVar8 + 1;
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* void call_get_argument_type_info_helper<String>(int, int&, PropertyInfo&) */

void call_get_argument_type_info_helper<String>(int param_1,int *param_2,PropertyInfo *param_3)

{
  long *plVar1;
  long lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined8 uVar6;
  long lVar7;
  int iVar8;
  long in_FS_OFFSET;
  long local_80;
  long local_78;
  long local_70;
  undefined *local_68;
  undefined1 local_60 [16];
  int local_50;
  long local_48;
  undefined4 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  iVar8 = *param_2;
  if (iVar8 != param_1) goto LAB_00109515;
  local_78 = 0;
  local_68 = &_LC0;
  local_80 = 0;
  auVar3._8_8_ = 0;
  auVar3._0_8_ = local_60._8_8_;
  local_60 = auVar3 << 0x40;
  String::parse_latin1((StrRange *)&local_80);
  local_68 = (undefined *)CONCAT44(local_68._4_4_,4);
  local_50 = 0;
  local_48 = 0;
  local_60 = (undefined1  [16])0x0;
  if (local_80 == 0) {
LAB_00109608:
    local_40 = 6;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_78);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_80);
    local_40 = 6;
    if (local_50 != 0x11) goto LAB_00109608;
    StringName::StringName((StringName *)&local_70,(String *)&local_48,false);
    if (local_60._8_8_ == local_70) {
      if ((StringName::configured != '\0') && (local_70 != 0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_60._8_8_ = local_70;
    }
  }
  lVar2 = local_80;
  if (local_80 != 0) {
    LOCK();
    plVar1 = (long *)(local_80 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_80 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_78 != 0)) {
    StringName::unref();
  }
  *(undefined4 *)param_3 = local_68._0_4_;
  lVar2 = *(long *)(param_3 + 8);
  if (lVar2 != local_60._0_8_) {
    if (lVar2 != 0) {
      LOCK();
      plVar1 = (long *)(lVar2 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        lVar2 = *(long *)(param_3 + 8);
        *(undefined8 *)(param_3 + 8) = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
    *(undefined8 *)(param_3 + 8) = local_60._0_8_;
    auVar5._8_8_ = 0;
    auVar5._0_8_ = local_60._8_8_;
    local_60 = auVar5 << 0x40;
  }
  if (*(long *)(param_3 + 0x10) != local_60._8_8_) {
    StringName::unref();
    uVar6 = local_60._8_8_;
    local_60._8_8_ = 0;
    *(undefined8 *)(param_3 + 0x10) = uVar6;
  }
  lVar7 = local_48;
  *(int *)(param_3 + 0x18) = local_50;
  lVar2 = *(long *)(param_3 + 0x20);
  if (lVar2 == local_48) {
    *(undefined4 *)(param_3 + 0x28) = local_40;
    if (lVar2 != 0) {
      LOCK();
      plVar1 = (long *)(lVar2 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_48 = 0;
        Memory::free_static((void *)(lVar7 + -0x10),false);
      }
    }
  }
  else {
    if (lVar2 != 0) {
      LOCK();
      plVar1 = (long *)(lVar2 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        lVar2 = *(long *)(param_3 + 0x20);
        *(undefined8 *)(param_3 + 0x20) = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
    *(long *)(param_3 + 0x20) = local_48;
    *(undefined4 *)(param_3 + 0x28) = local_40;
  }
  if ((StringName::configured != '\0') && (local_60._8_8_ != 0)) {
    StringName::unref();
  }
  uVar6 = local_60._0_8_;
  if (local_60._0_8_ != 0) {
    LOCK();
    plVar1 = (long *)(local_60._0_8_ + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      auVar4._8_8_ = 0;
      auVar4._0_8_ = local_60._8_8_;
      local_60 = auVar4 << 0x40;
      Memory::free_static((void *)(uVar6 + -0x10),false);
    }
  }
  iVar8 = *param_2;
LAB_00109515:
  *param_2 = iVar8 + 1;
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* MethodBindTRC<int, int, int, String, String, int>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<int,int,int,String,String,int>::_gen_argument_type_info(int param_1)

{
  long *plVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  int iVar10;
  uint in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar11;
  long in_FS_OFFSET;
  int local_b4;
  long local_b0;
  long local_a8;
  long local_a0;
  long local_98;
  undefined1 local_90 [16];
  undefined8 local_80;
  long local_78;
  undefined4 local_70;
  undefined *local_68;
  undefined1 local_60 [16];
  int local_50;
  long local_48;
  undefined4 local_40;
  long local_30;
  
  puVar11 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (in_EDX < 5) {
    iVar10 = 1;
    local_98 = 0;
    local_80 = 0;
    local_78 = 0;
    local_70 = 6;
    local_b4 = 0;
    local_90 = (undefined1  [16])0x0;
    if (in_EDX == 0) {
      local_a8 = 0;
      local_68 = &_LC0;
      local_b0 = 0;
      auVar3._8_8_ = 0;
      auVar3._0_8_ = local_60._8_8_;
      local_60 = auVar3 << 0x40;
      String::parse_latin1((StrRange *)&local_b0);
      local_68 = (undefined *)CONCAT44(local_68._4_4_,2);
      local_50 = 0;
      local_48 = 0;
      local_60 = (undefined1  [16])0x0;
      if (local_b0 == 0) {
LAB_00109b10:
        local_40 = 6;
        StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_a8);
      }
      else {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_b0);
        local_40 = 6;
        if (local_50 != 0x11) goto LAB_00109b10;
        StringName::StringName((StringName *)&local_a0,(String *)&local_48,false);
        if (local_60._8_8_ == local_a0) {
          if ((StringName::configured != '\0') && (local_a0 != 0)) {
            StringName::unref();
          }
        }
        else {
          StringName::unref();
          local_60._8_8_ = local_a0;
        }
      }
      lVar7 = local_b0;
      if (local_b0 != 0) {
        LOCK();
        plVar1 = (long *)(local_b0 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_b0 = 0;
          Memory::free_static((void *)(lVar7 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_a8 != 0)) {
        StringName::unref();
      }
      local_98 = CONCAT44(local_98._4_4_,local_68._0_4_);
      uVar8 = local_90._0_8_;
      if (local_90._0_8_ != local_60._0_8_) {
        if (local_90._0_8_ != 0) {
          LOCK();
          plVar1 = (long *)(local_90._0_8_ + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            auVar4._8_8_ = 0;
            auVar4._0_8_ = local_90._8_8_;
            local_90 = auVar4 << 0x40;
            Memory::free_static((void *)(uVar8 + -0x10),false);
          }
        }
        local_90._0_8_ = local_60._0_8_;
        auVar6._8_8_ = 0;
        auVar6._0_8_ = local_60._8_8_;
        local_60 = auVar6 << 0x40;
      }
      if (local_90._8_8_ != local_60._8_8_) {
        StringName::unref();
        uVar8 = local_60._8_8_;
        local_60._8_8_ = 0;
        local_90._8_8_ = uVar8;
      }
      lVar9 = local_48;
      lVar7 = local_78;
      local_80 = CONCAT44(local_80._4_4_,local_50);
      if (local_78 == local_48) {
        local_70 = local_40;
        if (local_78 != 0) {
          LOCK();
          plVar1 = (long *)(local_78 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_48 = 0;
            Memory::free_static((void *)(lVar9 + -0x10),false);
          }
        }
      }
      else {
        if (local_78 != 0) {
          LOCK();
          plVar1 = (long *)(local_78 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_78 = 0;
            Memory::free_static((void *)(lVar7 + -0x10),false);
          }
        }
        local_78 = local_48;
        local_70 = local_40;
      }
      if ((StringName::configured != '\0') && (local_60._8_8_ != 0)) {
        StringName::unref();
      }
      uVar8 = local_60._0_8_;
      if (local_60._0_8_ != 0) {
        LOCK();
        plVar1 = (long *)(local_60._0_8_ + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          auVar5._8_8_ = 0;
          auVar5._0_8_ = local_60._8_8_;
          local_60 = auVar5 << 0x40;
          Memory::free_static((void *)(uVar8 + -0x10),false);
        }
      }
      iVar10 = local_b4 + 1;
    }
    local_b4 = iVar10;
    call_get_argument_type_info_helper<int>(in_EDX,&local_b4,(PropertyInfo *)&local_98);
    call_get_argument_type_info_helper<String>(in_EDX,&local_b4,(PropertyInfo *)&local_98);
    call_get_argument_type_info_helper<String>(in_EDX,&local_b4,(PropertyInfo *)&local_98);
    call_get_argument_type_info_helper<int>(in_EDX,&local_b4,(PropertyInfo *)&local_98);
    *puVar11 = (undefined4)local_98;
    *(undefined8 *)(puVar11 + 2) = local_90._0_8_;
    *(undefined8 *)(puVar11 + 4) = local_90._8_8_;
    puVar11[6] = (undefined4)local_80;
    *(long *)(puVar11 + 8) = local_78;
    puVar11[10] = local_70;
    goto LAB_001098bc;
  }
  local_98 = 0;
  local_a0 = 0;
  local_68 = &_LC0;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = local_60._8_8_;
  local_60 = auVar2 << 0x40;
  String::parse_latin1((StrRange *)&local_a0);
  *puVar11 = 2;
  puVar11[6] = 0;
  *(undefined8 *)(puVar11 + 8) = 0;
  *(undefined1 (*) [16])(puVar11 + 2) = (undefined1  [16])0x0;
  if (local_a0 == 0) {
    puVar11[10] = 6;
LAB_001099d7:
    StringName::operator=((StringName *)(puVar11 + 4),(StringName *)&local_98);
    lVar7 = local_a0;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar11 + 8),(CowData *)&local_a0);
    puVar11[10] = 6;
    if (puVar11[6] != 0x11) goto LAB_001099d7;
    StringName::StringName((StringName *)&local_68,(String *)(puVar11 + 8),false);
    if (*(undefined **)(puVar11 + 4) == local_68) {
      lVar7 = local_a0;
      if ((StringName::configured != '\0') && (local_68 != (undefined *)0x0)) {
        StringName::unref();
        lVar7 = local_a0;
      }
    }
    else {
      StringName::unref();
      *(undefined **)(puVar11 + 4) = local_68;
      lVar7 = local_a0;
    }
  }
  local_a0 = lVar7;
  if (lVar7 != 0) {
    LOCK();
    plVar1 = (long *)(lVar7 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_a0 = 0;
      Memory::free_static((void *)(lVar7 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_98 != 0)) {
    StringName::unref();
  }
LAB_001098bc:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar11;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<int, int, String>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<int,int,String>::_gen_argument_type_info(int param_1)

{
  long *plVar1;
  undefined1 auVar2 [16];
  long lVar3;
  uint in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar4;
  long in_FS_OFFSET;
  long local_78;
  ulong local_70;
  undefined *local_68;
  undefined1 local_60 [16];
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  long local_30;
  
  puVar4 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (in_EDX < 2) {
    local_60 = (undefined1  [16])0x0;
    local_68 = (undefined *)0x0;
    local_50 = 0;
    local_48 = 0;
    local_40 = 6;
    local_70 = local_70 & 0xffffffff00000000;
    call_get_argument_type_info_helper<int>(in_EDX,(int *)&local_70,(PropertyInfo *)&local_68);
    call_get_argument_type_info_helper<String>(in_EDX,(int *)&local_70,(PropertyInfo *)&local_68);
    *puVar4 = local_68._0_4_;
    *(undefined8 *)(puVar4 + 2) = local_60._0_8_;
    *(undefined8 *)(puVar4 + 4) = local_60._8_8_;
    puVar4[6] = (undefined4)local_50;
    *(undefined8 *)(puVar4 + 8) = local_48;
    puVar4[10] = local_40;
    goto LAB_00109e71;
  }
  local_70 = 0;
  local_68 = &_LC0;
  local_78 = 0;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = local_60._0_8_;
  local_60 = auVar2 << 0x40;
  String::parse_latin1((StrRange *)&local_78);
  *puVar4 = 2;
  puVar4[6] = 0;
  *(undefined8 *)(puVar4 + 8) = 0;
  *(undefined1 (*) [16])(puVar4 + 2) = (undefined1  [16])0x0;
  if (local_78 == 0) {
    puVar4[10] = 6;
LAB_00109e9f:
    StringName::operator=((StringName *)(puVar4 + 4),(StringName *)&local_70);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar4 + 8),(CowData *)&local_78);
    puVar4[10] = 6;
    if (puVar4[6] != 0x11) goto LAB_00109e9f;
    StringName::StringName((StringName *)&local_68,(String *)(puVar4 + 8),false);
    if (*(undefined **)(puVar4 + 4) == local_68) {
      if ((StringName::configured != '\0') && (local_68 != (undefined *)0x0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      *(undefined **)(puVar4 + 4) = local_68;
    }
  }
  lVar3 = local_78;
  if (local_78 != 0) {
    LOCK();
    plVar1 = (long *)(local_78 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_78 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_70 != 0)) {
    StringName::unref();
  }
LAB_00109e71:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodDefinition::~MethodDefinition() */

void __thiscall MethodDefinition::~MethodDefinition(MethodDefinition *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<UPNPDevice::IGDStatus>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<UPNPDevice::IGDStatus>::~MethodBindTRC(MethodBindTRC<UPNPDevice::IGDStatus> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<UPNPDevice::IGDStatus>::~MethodBindT() */

void __thiscall
MethodBindT<UPNPDevice::IGDStatus>::~MethodBindT(MethodBindT<UPNPDevice::IGDStatus> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<String>::~MethodBindTRC() */

void __thiscall MethodBindTRC<String>::~MethodBindTRC(MethodBindTRC<String> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<String const&>::~MethodBindT() */

void __thiscall MethodBindT<String_const&>::~MethodBindT(MethodBindT<String_const&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<int, int, String>::~MethodBindTRC() */

void __thiscall MethodBindTRC<int,int,String>::~MethodBindTRC(MethodBindTRC<int,int,String> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<int, int, int, String, String, int>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<int,int,int,String,String,int>::~MethodBindTRC
          (MethodBindTRC<int,int,int,String,String,int> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<bool>::~MethodBindTRC() */

void __thiscall MethodBindTRC<bool>::~MethodBindTRC(MethodBindTRC<bool> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



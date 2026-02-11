
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



/* OpenXRBindingModifier::_bind_methods() */

void OpenXRBindingModifier::_bind_methods(void)

{
  long *plVar1;
  long lVar2;
  code *pcVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined8 uVar6;
  int *piVar7;
  int *piVar8;
  long lVar9;
  long in_FS_OFFSET;
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
  local_e8 = "_get_description";
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
  local_e8 = "";
  local_80 = CONCAT44(local_80._4_4_,0x8c);
  local_110 = 0;
  local_108 = 0;
  auVar4._8_8_ = 0;
  auVar4._0_8_ = local_e0._8_8_;
  local_e0 = auVar4 << 0x40;
  String::parse_latin1((StrRange *)&local_108);
  local_e8 = (char *)CONCAT44(local_e8._4_4_,4);
  local_d0 = 0;
  local_c8 = 0;
  local_e0._0_8_ = 0;
  local_e0._8_8_ = 0;
  if (local_108 == 0) {
LAB_001009cb:
    local_c0 = 6;
    StringName::operator=((StringName *)(local_e0 + 8),(StringName *)&local_110);
    lVar2 = local_108;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_c8,(CowData *)&local_108);
    local_c0 = 6;
    if (local_d0 != 0x11) goto LAB_001009cb;
    StringName::StringName((StringName *)&local_100,(String *)&local_c8,false);
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
  lVar9 = local_90;
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
        Memory::free_static((void *)(lVar9 + -0x10),false);
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
  local_e8 = "OpenXRBindingModifier";
  local_e0._0_8_ = 0x15;
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
      lVar9 = 0;
      local_68 = (int *)0x0;
      piVar8 = piVar7;
      if (lVar2 != 0) {
        do {
          if (Variant::needs_deinit[*piVar8] != '\0') {
            Variant::_clear_internal();
          }
          lVar9 = lVar9 + 1;
          piVar8 = piVar8 + 6;
        } while (lVar2 != lVar9);
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
  local_e8 = "_get_ip_modification";
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
  local_e0._0_8_ = 0x14;
  String::parse_latin1((StrRange *)&local_b8);
  local_e8 = "";
  local_80 = CONCAT44(local_80._4_4_,0x88);
  local_110 = 0;
  local_108 = 0;
  auVar5._8_8_ = 0;
  auVar5._0_8_ = local_e0._8_8_;
  local_e0 = auVar5 << 0x40;
  String::parse_latin1((StrRange *)&local_108);
  local_e8 = (char *)CONCAT44(local_e8._4_4_,0x1d);
  local_d0 = 0;
  local_c8 = 0;
  local_e0._0_8_ = 0;
  local_e0._8_8_ = 0;
  if (local_108 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_c8,(CowData *)&local_108);
    local_c0 = 6;
    if (local_d0 == 0x11) {
      StringName::StringName((StringName *)&local_100,(String *)&local_c8,false);
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
      goto joined_r0x00100a42;
    }
  }
  local_c0 = 6;
  StringName::operator=((StringName *)(local_e0 + 8),(StringName *)&local_110);
  lVar2 = local_108;
joined_r0x00100a42:
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
  lVar9 = local_90;
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
        Memory::free_static((void *)(lVar9 + -0x10),false);
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
  local_e8 = "OpenXRBindingModifier";
  local_e0._0_8_ = 0x15;
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
      lVar9 = 0;
      local_68 = (int *)0x0;
      piVar8 = piVar7;
      if (lVar2 != 0) {
        do {
          if (Variant::needs_deinit[*piVar8] != '\0') {
            Variant::_clear_internal();
          }
          lVar9 = lVar9 + 1;
          piVar8 = piVar8 + 6;
        } while (lVar2 != lVar9);
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



/* OpenXRBindingModifier::get_description() const */

void OpenXRBindingModifier::get_description(void)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  undefined4 uVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  code *pcVar7;
  char *pcVar8;
  char *pcVar9;
  long *in_RSI;
  StrRange *in_RDI;
  long in_FS_OFFSET;
  bool bVar10;
  long local_128;
  long local_120;
  long local_118;
  long local_110;
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
  
  plVar6 = (long *)in_RSI[0x13];
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (plVar6 == (long *)0x0) {
LAB_00100e2a:
    if ((in_RSI[1] != 0) && ((char)in_RSI[0x49] == '\0')) {
      local_f8 = "_get_description";
      local_b8 = (undefined1  [16])0x0;
      local_c8 = 0;
      uStack_c4 = 0;
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
      local_90 = CONCAT44(local_90._4_4_,0x8c);
      GetTypeInfo<String,void>::get_class_info((GetTypeInfo<String,void> *)&local_f8);
      uStack_c0 = local_f8._0_4_;
      uVar2 = local_b8._0_8_;
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
            Memory::free_static((void *)(uVar2 + -0x10),false);
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
      lVar4 = local_a0;
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
            Memory::free_static((void *)(lVar4 + -0x10),false);
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
      lVar5 = in_RSI[1];
      in_RSI[0x4a] = 0;
      pcVar7 = *(code **)(lVar5 + 0xd8);
      if (((pcVar7 == (code *)0x0) || (*(long *)(lVar5 + 0xe0) == 0)) &&
         (pcVar7 = *(code **)(lVar5 + 0xd0), pcVar7 == (code *)0x0)) {
        local_f0 = 0x15;
        local_108 = 0;
        local_f8 = "OpenXRBindingModifier";
        String::parse_latin1((StrRange *)&local_108);
        StringName::StringName((StringName *)&local_100,(String *)&local_108,false);
        ClassDB::get_virtual_method_compatibility_hashes
                  ((StringName *)&local_f8,(StringName *)&local_100);
        if (local_f0 == 0) {
          lVar5 = 0;
          CowData<unsigned_int>::_unref((CowData<unsigned_int> *)&local_f0);
          if (StringName::configured != '\0') goto LAB_001015e4;
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
LAB_00101601:
          lVar5 = in_RSI[1];
          pcVar7 = *(code **)(lVar5 + 200);
          if (((pcVar7 == (code *)0x0) || (*(long *)(lVar5 + 0xe0) == 0)) &&
             (pcVar7 = *(code **)(lVar5 + 0xc0), pcVar7 == (code *)0x0)) goto LAB_001013fa;
          lVar5 = (*pcVar7)(*(undefined8 *)(lVar5 + 0xa0));
          in_RSI[0x4a] = lVar5;
        }
        else {
          lVar5 = *(long *)(local_f0 + -8);
          CowData<unsigned_int>::_unref((CowData<unsigned_int> *)&local_f0);
          if (StringName::configured != '\0') {
LAB_001015e4:
            if (local_100 != 0) {
              StringName::unref();
            }
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
          if (lVar5 == 0) goto LAB_00101601;
        }
        lVar5 = in_RSI[1];
      }
      else {
        lVar5 = (*pcVar7)(*(undefined8 *)(lVar5 + 0xa0),in_RSI + 0x48,uVar3);
        in_RSI[0x4a] = lVar5;
        lVar5 = in_RSI[1];
      }
LAB_001013fa:
      if (*(char *)(lVar5 + 0x29) != '\0') {
        plVar6 = (long *)operator_new(0x18,"");
        *plVar6 = (long)(in_RSI + 0x4a);
        plVar6[1] = (long)(in_RSI + 0x49);
        plVar6[2] = in_RSI[0x2d];
        in_RSI[0x2d] = (long)plVar6;
      }
      *(undefined1 *)(in_RSI + 0x49) = 1;
      MethodInfo::~MethodInfo((MethodInfo *)&local_c8);
    }
    pcVar7 = (code *)in_RSI[0x4a];
    if (pcVar7 == (code *)0x0) {
      if (_gdvirtual__get_description_call(String&)::first_print != '\0') {
        local_f8 = (char *)0x0;
        local_c8 = 0x104240;
        uStack_c4 = 0;
        uStack_c0 = 0x23;
        uStack_bc = 0;
        String::parse_latin1((StrRange *)&local_f8);
        local_c8 = 0x103d7a;
        uStack_c4 = 0;
        local_108 = 0;
        uStack_c0 = 0x10;
        uStack_bc = 0;
        String::parse_latin1((StrRange *)&local_108);
        local_118 = 0;
        local_c8 = 0x103da0;
        uStack_c4 = 0;
        uStack_c0 = 2;
        uStack_bc = 0;
        String::parse_latin1((StrRange *)&local_118);
        (**(code **)(*in_RSI + 0x48))(&local_128);
        operator+((char *)&local_120,(String *)"Required virtual method ");
        String::operator+((String *)&local_110,(String *)&local_120);
        String::operator+((String *)&local_100,(String *)&local_110);
        String::operator+((String *)&local_c8,(String *)&local_100);
        _err_print_error("_gdvirtual__get_description_call",
                         "modules/openxr/action_map/openxr_binding_modifier.h",0x31,
                         (String *)&local_c8,0,0);
        if (CONCAT44(uStack_c4,local_c8) != 0) {
          LOCK();
          plVar6 = (long *)(CONCAT44(uStack_c4,local_c8) + -0x10);
          *plVar6 = *plVar6 + -1;
          UNLOCK();
          if (*plVar6 == 0) {
            lVar5 = CONCAT44(uStack_c4,local_c8);
            local_c8 = 0;
            uStack_c4 = 0;
            Memory::free_static((void *)(lVar5 + -0x10),false);
          }
        }
        lVar5 = local_100;
        if (local_100 != 0) {
          LOCK();
          plVar6 = (long *)(local_100 + -0x10);
          *plVar6 = *plVar6 + -1;
          UNLOCK();
          if (*plVar6 == 0) {
            local_100 = 0;
            Memory::free_static((void *)(lVar5 + -0x10),false);
          }
        }
        lVar5 = local_110;
        if (local_110 != 0) {
          LOCK();
          plVar6 = (long *)(local_110 + -0x10);
          *plVar6 = *plVar6 + -1;
          UNLOCK();
          if (*plVar6 == 0) {
            local_110 = 0;
            Memory::free_static((void *)(lVar5 + -0x10),false);
          }
        }
        lVar5 = local_120;
        if (local_120 != 0) {
          LOCK();
          plVar6 = (long *)(local_120 + -0x10);
          *plVar6 = *plVar6 + -1;
          UNLOCK();
          if (*plVar6 == 0) {
            local_120 = 0;
            Memory::free_static((void *)(lVar5 + -0x10),false);
          }
        }
        lVar5 = local_128;
        if (local_128 != 0) {
          LOCK();
          plVar6 = (long *)(local_128 + -0x10);
          *plVar6 = *plVar6 + -1;
          UNLOCK();
          if (*plVar6 == 0) {
            local_128 = 0;
            Memory::free_static((void *)(lVar5 + -0x10),false);
          }
        }
        lVar5 = local_118;
        if (local_118 != 0) {
          LOCK();
          plVar6 = (long *)(local_118 + -0x10);
          *plVar6 = *plVar6 + -1;
          UNLOCK();
          if (*plVar6 == 0) {
            local_118 = 0;
            Memory::free_static((void *)(lVar5 + -0x10),false);
          }
        }
        lVar5 = local_108;
        if (local_108 != 0) {
          LOCK();
          plVar6 = (long *)(local_108 + -0x10);
          *plVar6 = *plVar6 + -1;
          UNLOCK();
          if (*plVar6 == 0) {
            local_108 = 0;
            Memory::free_static((void *)(lVar5 + -0x10),false);
          }
        }
        pcVar8 = local_f8;
        if (local_f8 != (char *)0x0) {
          LOCK();
          plVar6 = (long *)(local_f8 + -0x10);
          *plVar6 = *plVar6 + -1;
          UNLOCK();
          if (*plVar6 == 0) {
            local_f8 = (char *)0x0;
            Memory::free_static(pcVar8 + -0x10,false);
          }
        }
        _gdvirtual__get_description_call(String&)::first_print = '\0';
      }
      *(undefined8 *)in_RDI = 0;
      local_c8 = 0x10295e;
      uStack_c4 = 0;
      uStack_c0 = 0;
      uStack_bc = 0;
      String::parse_latin1(in_RDI);
      goto LAB_00100f14;
    }
    local_c8 = 0;
    uStack_c4 = 0;
    if (*(code **)(in_RSI[1] + 0xe0) == (code *)0x0) {
      (*pcVar7)(in_RSI[2],0,(String *)&local_c8);
      plVar6 = (long *)(CONCAT44(uStack_c4,local_c8) + -0x10);
      if (CONCAT44(uStack_c4,local_c8) != 0) {
        do {
          lVar5 = *plVar6;
          if (lVar5 == 0) goto LAB_00101540;
          LOCK();
          lVar4 = *plVar6;
          bVar10 = lVar5 == lVar4;
          if (bVar10) {
            *plVar6 = lVar5 + 1;
            lVar4 = lVar5;
          }
          UNLOCK();
        } while (!bVar10);
        pcVar8 = (char *)CONCAT44(uStack_c4,local_c8);
        if (lVar4 == -1) {
          pcVar9 = (char *)0x0;
          goto LAB_00100eb0;
        }
        pcVar9 = pcVar8;
        if (pcVar8 != (char *)0x0) goto LAB_00100eb5;
      }
    }
    else {
      (**(code **)(in_RSI[1] + 0xe0))(in_RSI[2],in_RSI + 0x48,pcVar7,0,(String *)&local_c8);
      if (CONCAT44(uStack_c4,local_c8) != 0) {
        plVar6 = (long *)(CONCAT44(uStack_c4,local_c8) + -0x10);
        do {
          lVar5 = *plVar6;
          if (lVar5 == 0) goto LAB_00101540;
          LOCK();
          lVar4 = *plVar6;
          bVar10 = lVar5 == lVar4;
          if (bVar10) {
            *plVar6 = lVar5 + 1;
            lVar4 = lVar5;
          }
          UNLOCK();
        } while (!bVar10);
        pcVar8 = (char *)CONCAT44(uStack_c4,local_c8);
        pcVar9 = (char *)0x0;
        if (lVar4 != -1) {
          pcVar9 = pcVar8;
        }
LAB_00100eb0:
        if (pcVar8 != (char *)0x0) {
LAB_00100eb5:
          LOCK();
          plVar6 = (long *)(pcVar8 + -0x10);
          *plVar6 = *plVar6 + -1;
          UNLOCK();
          if (*plVar6 == 0) {
            lVar5 = CONCAT44(uStack_c4,local_c8);
            local_c8 = 0;
            uStack_c4 = 0;
            Memory::free_static((void *)(lVar5 + -0x10),false);
          }
        }
        goto LAB_00100ed6;
      }
    }
    pcVar9 = (char *)0x0;
  }
  else {
    local_c8 = 0;
    uStack_c4 = 0;
    uStack_c0 = 0;
    (**(code **)(*plVar6 + 0x60))(local_58,plVar6,in_RSI + 0x48,0,0,&local_c8);
    if (local_c8 != 0) {
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      goto LAB_00100e2a;
    }
    Variant::operator_cast_to_String((Variant *)&local_f8);
    pcVar9 = local_f8;
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
  }
LAB_00100ed6:
  *(char **)in_RDI = pcVar9;
LAB_00100f14:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
LAB_00101540:
  pcVar8 = (char *)CONCAT44(uStack_c4,local_c8);
  pcVar9 = (char *)0x0;
  goto LAB_00100eb0;
}



/* OpenXRBindingModifier::get_ip_modification() */

void OpenXRBindingModifier::get_ip_modification(void)

{
  undefined1 auVar1 [16];
  char *pcVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  code *pcVar8;
  long *in_RSI;
  long in_RDI;
  long in_FS_OFFSET;
  bool bVar9;
  long local_128;
  long local_120;
  long local_118;
  long local_110;
  long local_108;
  long local_100;
  int local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  long local_e8;
  undefined4 local_e0;
  long local_d8;
  undefined4 local_d0;
  char *local_c8;
  long local_c0;
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
  
  plVar7 = (long *)in_RSI[0x13];
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (plVar7 == (long *)0x0) {
LAB_00101793:
    if ((in_RSI[1] != 0) && ((char)in_RSI[0x4c] == '\0')) {
      local_c8 = (char *)0x0;
      local_b8 = (undefined1  [16])0x0;
      local_f8 = 0x103d8b;
      uStack_f4 = 0;
      local_c0 = 0;
      local_a8 = 0;
      local_a0 = 0;
      local_98 = 6;
      local_90 = 1;
      local_88 = 0;
      local_78 = 0;
      local_70 = 0;
      local_60 = 0;
      uStack_f0 = 0x14;
      uStack_ec = 0;
      String::parse_latin1((StrRange *)&local_c8);
      local_90 = CONCAT44(local_90._4_4_,0x88);
      GetTypeInfo<Vector<unsigned_char>,void>::get_class_info
                ((GetTypeInfo<Vector<unsigned_char>,void> *)&local_f8);
      lVar6 = CONCAT44(uStack_ec,uStack_f0);
      local_c0 = CONCAT44(local_c0._4_4_,local_f8);
      uVar3 = local_b8._0_8_;
      if (local_b8._0_8_ != lVar6) {
        if (local_b8._0_8_ != 0) {
          LOCK();
          plVar7 = (long *)(local_b8._0_8_ + -0x10);
          *plVar7 = *plVar7 + -1;
          UNLOCK();
          if (*plVar7 == 0) {
            auVar1._8_8_ = 0;
            auVar1._0_8_ = local_b8._8_8_;
            local_b8 = auVar1 << 0x40;
            Memory::free_static((void *)(uVar3 + -0x10),false);
          }
          lVar6 = CONCAT44(uStack_ec,uStack_f0);
        }
        local_b8._0_8_ = lVar6;
        uStack_f0 = 0;
        uStack_ec = 0;
      }
      if (local_b8._8_8_ != local_e8) {
        StringName::unref();
        lVar6 = local_e8;
        local_e8 = 0;
        local_b8._8_8_ = lVar6;
      }
      lVar5 = local_a0;
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
            Memory::free_static((void *)(lVar5 + -0x10),false);
          }
        }
        local_a0 = local_d8;
        local_98 = CONCAT44(local_98._4_4_,local_d0);
      }
      if ((StringName::configured != '\0') && (local_e8 != 0)) {
        StringName::unref();
      }
      if (CONCAT44(uStack_ec,uStack_f0) != 0) {
        LOCK();
        plVar7 = (long *)(CONCAT44(uStack_ec,uStack_f0) + -0x10);
        *plVar7 = *plVar7 + -1;
        UNLOCK();
        if (*plVar7 == 0) {
          lVar6 = CONCAT44(uStack_ec,uStack_f0);
          uStack_f0 = 0;
          uStack_ec = 0;
          Memory::free_static((void *)(lVar6 + -0x10),false);
        }
      }
      local_70 = local_70 & 0xffffffff00000000;
      uVar4 = MethodInfo::get_compatibility_hash();
      lVar6 = in_RSI[1];
      in_RSI[0x4d] = 0;
      pcVar8 = *(code **)(lVar6 + 0xd8);
      if (((pcVar8 == (code *)0x0) || (*(long *)(lVar6 + 0xe0) == 0)) &&
         (pcVar8 = *(code **)(lVar6 + 0xd0), pcVar8 == (code *)0x0)) {
        uStack_f0 = 0x15;
        uStack_ec = 0;
        local_108 = 0;
        local_f8 = 0x102219;
        uStack_f4 = 0;
        String::parse_latin1((StrRange *)&local_108);
        StringName::StringName((StringName *)&local_100,(String *)&local_108,false);
        ClassDB::get_virtual_method_compatibility_hashes
                  ((StringName *)&local_f8,(StringName *)&local_100);
        if (CONCAT44(uStack_ec,uStack_f0) == 0) {
          lVar6 = 0;
          CowData<unsigned_int>::_unref((CowData<unsigned_int> *)&uStack_f0);
          if (StringName::configured != '\0') goto LAB_00101f60;
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
LAB_00101f7d:
          lVar6 = in_RSI[1];
          pcVar8 = *(code **)(lVar6 + 200);
          if (((pcVar8 == (code *)0x0) || (*(long *)(lVar6 + 0xe0) == 0)) &&
             (pcVar8 = *(code **)(lVar6 + 0xc0), pcVar8 == (code *)0x0)) goto LAB_00101d65;
          lVar6 = (*pcVar8)(*(undefined8 *)(lVar6 + 0xa0));
          in_RSI[0x4d] = lVar6;
        }
        else {
          lVar6 = *(long *)(CONCAT44(uStack_ec,uStack_f0) + -8);
          CowData<unsigned_int>::_unref((CowData<unsigned_int> *)&uStack_f0);
          if (StringName::configured != '\0') {
LAB_00101f60:
            if (local_100 != 0) {
              StringName::unref();
            }
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
          if (lVar6 == 0) goto LAB_00101f7d;
        }
        lVar6 = in_RSI[1];
      }
      else {
        lVar6 = (*pcVar8)(*(undefined8 *)(lVar6 + 0xa0),in_RSI + 0x4b,uVar4);
        in_RSI[0x4d] = lVar6;
        lVar6 = in_RSI[1];
      }
LAB_00101d65:
      if (*(char *)(lVar6 + 0x29) != '\0') {
        plVar7 = (long *)operator_new(0x18,"");
        *plVar7 = (long)(in_RSI + 0x4d);
        plVar7[1] = (long)(in_RSI + 0x4c);
        plVar7[2] = in_RSI[0x2d];
        in_RSI[0x2d] = (long)plVar7;
      }
      *(undefined1 *)(in_RSI + 0x4c) = 1;
      MethodInfo::~MethodInfo((MethodInfo *)&local_c8);
    }
    pcVar8 = (code *)in_RSI[0x4d];
    if (pcVar8 == (code *)0x0) {
      if (_gdvirtual__get_ip_modification_call(Vector<unsigned_char>&)::first_print != '\0') {
        local_f8 = 0;
        uStack_f4 = 0;
        local_c0 = 0x23;
        local_c8 = " must be overridden before calling.";
        String::parse_latin1((StrRange *)&local_f8);
        local_c8 = "_get_ip_modification";
        local_108 = 0;
        local_c0 = 0x14;
        String::parse_latin1((StrRange *)&local_108);
        local_118 = 0;
        local_c8 = "::";
        local_c0 = 2;
        String::parse_latin1((StrRange *)&local_118);
        (**(code **)(*in_RSI + 0x48))(&local_128);
        operator+((char *)&local_120,(String *)"Required virtual method ");
        String::operator+((String *)&local_110,(String *)&local_120);
        String::operator+((String *)&local_100,(String *)&local_110);
        String::operator+((String *)&local_c8,(String *)&local_100);
        _err_print_error("_gdvirtual__get_ip_modification_call",
                         "modules/openxr/action_map/openxr_binding_modifier.h",0x32,
                         (String *)&local_c8,0,0);
        pcVar2 = local_c8;
        if (local_c8 != (char *)0x0) {
          LOCK();
          plVar7 = (long *)(local_c8 + -0x10);
          *plVar7 = *plVar7 + -1;
          UNLOCK();
          if (*plVar7 == 0) {
            local_c8 = (char *)0x0;
            Memory::free_static(pcVar2 + -0x10,false);
          }
        }
        lVar6 = local_100;
        if (local_100 != 0) {
          LOCK();
          plVar7 = (long *)(local_100 + -0x10);
          *plVar7 = *plVar7 + -1;
          UNLOCK();
          if (*plVar7 == 0) {
            local_100 = 0;
            Memory::free_static((void *)(lVar6 + -0x10),false);
          }
        }
        lVar6 = local_110;
        if (local_110 != 0) {
          LOCK();
          plVar7 = (long *)(local_110 + -0x10);
          *plVar7 = *plVar7 + -1;
          UNLOCK();
          if (*plVar7 == 0) {
            local_110 = 0;
            Memory::free_static((void *)(lVar6 + -0x10),false);
          }
        }
        lVar6 = local_120;
        if (local_120 != 0) {
          LOCK();
          plVar7 = (long *)(local_120 + -0x10);
          *plVar7 = *plVar7 + -1;
          UNLOCK();
          if (*plVar7 == 0) {
            local_120 = 0;
            Memory::free_static((void *)(lVar6 + -0x10),false);
          }
        }
        lVar6 = local_128;
        if (local_128 != 0) {
          LOCK();
          plVar7 = (long *)(local_128 + -0x10);
          *plVar7 = *plVar7 + -1;
          UNLOCK();
          if (*plVar7 == 0) {
            local_128 = 0;
            Memory::free_static((void *)(lVar6 + -0x10),false);
          }
        }
        lVar6 = local_118;
        if (local_118 != 0) {
          LOCK();
          plVar7 = (long *)(local_118 + -0x10);
          *plVar7 = *plVar7 + -1;
          UNLOCK();
          if (*plVar7 == 0) {
            local_118 = 0;
            Memory::free_static((void *)(lVar6 + -0x10),false);
          }
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
        if (CONCAT44(uStack_f4,local_f8) != 0) {
          LOCK();
          plVar7 = (long *)(CONCAT44(uStack_f4,local_f8) + -0x10);
          *plVar7 = *plVar7 + -1;
          UNLOCK();
          if (*plVar7 == 0) {
            lVar6 = CONCAT44(uStack_f4,local_f8);
            local_f8 = 0;
            uStack_f4 = 0;
            Memory::free_static((void *)(lVar6 + -0x10),false);
          }
        }
        _gdvirtual__get_ip_modification_call(Vector<unsigned_char>&)::first_print = '\0';
      }
      *(undefined8 *)(in_RDI + 8) = 0;
      goto LAB_00101865;
    }
    local_c0 = 0;
    if (*(code **)(in_RSI[1] + 0xe0) == (code *)0x0) {
      (*pcVar8)(in_RSI[2],0,&local_c8);
      plVar7 = (long *)(local_c0 + -0x10);
      if (local_c0 != 0) {
        do {
          lVar6 = *plVar7;
          if (lVar6 == 0) goto LAB_00101ea8;
          LOCK();
          lVar5 = *plVar7;
          bVar9 = lVar6 == lVar5;
          if (bVar9) {
            *plVar7 = lVar6 + 1;
            lVar5 = lVar6;
          }
          UNLOCK();
        } while (!bVar9);
        if (lVar5 == -1) {
LAB_00101ea8:
          lVar6 = 0;
          goto LAB_00101821;
        }
        lVar6 = local_c0;
        if (local_c0 != 0) goto LAB_00101826;
      }
    }
    else {
      (**(code **)(in_RSI[1] + 0xe0))(in_RSI[2],in_RSI + 0x4b,pcVar8,0,&local_c8);
      plVar7 = (long *)(local_c0 + -0x10);
      if (local_c0 != 0) {
        do {
          lVar6 = *plVar7;
          if (lVar6 == 0) {
            lVar6 = 0;
            goto LAB_00101821;
          }
          LOCK();
          lVar5 = *plVar7;
          bVar9 = lVar6 == lVar5;
          if (bVar9) {
            *plVar7 = lVar6 + 1;
            lVar5 = lVar6;
          }
          UNLOCK();
        } while (!bVar9);
        lVar6 = 0;
        if (lVar5 != -1) {
          lVar6 = local_c0;
        }
LAB_00101821:
        if (local_c0 != 0) {
LAB_00101826:
          lVar5 = local_c0;
          LOCK();
          plVar7 = (long *)(local_c0 + -0x10);
          *plVar7 = *plVar7 + -1;
          UNLOCK();
          if (*plVar7 == 0) {
            local_c0 = 0;
            Memory::free_static((void *)(lVar5 + -0x10),false);
          }
        }
        goto LAB_00101847;
      }
    }
    lVar6 = 0;
  }
  else {
    local_f8 = 0;
    uStack_f4 = 0;
    uStack_f0 = 0;
    (**(code **)(*plVar7 + 0x60))(local_58,plVar7,in_RSI + 0x4b,0,0,&local_f8);
    if (local_f8 != 0) {
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      goto LAB_00101793;
    }
    Variant::operator_cast_to_Vector((Variant *)&local_c8);
    lVar6 = local_c0;
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
  }
LAB_00101847:
  *(long *)(in_RDI + 8) = lVar6;
LAB_00101865:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
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



/* Resource::set_last_modified_time(unsigned long) */

void __thiscall Resource::set_last_modified_time(Resource *this,ulong param_1)

{
  *(ulong *)(this + 0x198) = param_1;
  return;
}



/* Resource::set_import_last_modified_time(unsigned long) */

void __thiscall Resource::set_import_last_modified_time(Resource *this,ulong param_1)

{
  *(ulong *)(this + 0x1a0) = param_1;
  return;
}



/* OpenXRBindingModifier::is_class_ptr(void*) const */

uint __thiscall OpenXRBindingModifier::is_class_ptr(OpenXRBindingModifier *this,void *param_1)

{
  return (uint)CONCAT71(0x1045,(undefined4 *)param_1 == &Resource::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1045,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1045,(undefined4 *)param_1 == &RefCounted::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1045,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* OpenXRBindingModifier::_getv(StringName const&, Variant&) const */

undefined8 OpenXRBindingModifier::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* OpenXRBindingModifier::_setv(StringName const&, Variant const&) */

undefined8 OpenXRBindingModifier::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* OpenXRBindingModifier::_validate_propertyv(PropertyInfo&) const */

void OpenXRBindingModifier::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* OpenXRBindingModifier::_property_can_revertv(StringName const&) const */

undefined8 OpenXRBindingModifier::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* OpenXRBindingModifier::_property_get_revertv(StringName const&, Variant&) const */

undefined8 OpenXRBindingModifier::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* OpenXRBindingModifier::_notificationv(int, bool) */

void OpenXRBindingModifier::_notificationv(int param_1,bool param_2)

{
  return;
}



/* OpenXRBindingModifier::~OpenXRBindingModifier() */

void __thiscall OpenXRBindingModifier::~OpenXRBindingModifier(OpenXRBindingModifier *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(undefined ***)this = &PTR__initialize_classv_00104330;
  if (bVar1) {
    if (*(long *)(this + 600) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00102210;
    }
    if (*(long *)(this + 0x240) != 0) {
      StringName::unref();
    }
  }
LAB_00102210:
  Resource::~Resource((Resource *)this);
  return;
}



/* OpenXRBindingModifier::_get_class_namev() const */

undefined8 * OpenXRBindingModifier::_get_class_namev(void)

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
LAB_00102263:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00102263;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"OpenXRBindingModifier");
      goto LAB_001022ce;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"OpenXRBindingModifier");
LAB_001022ce:
  return &_get_class_namev()::_class_name_static;
}



/* OpenXRBindingModifier::~OpenXRBindingModifier() */

void __thiscall OpenXRBindingModifier::~OpenXRBindingModifier(OpenXRBindingModifier *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(undefined ***)this = &PTR__initialize_classv_00104330;
  if (bVar1) {
    if (*(long *)(this + 600) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00102360;
    }
    if (*(long *)(this + 0x240) != 0) {
      StringName::unref();
    }
  }
LAB_00102360:
  Resource::~Resource((Resource *)this);
  operator_delete(this,0x270);
  return;
}



/* Resource::get_base_extension() const */

Resource * __thiscall Resource::get_base_extension(Resource *this)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined8 *)this = 0;
  String::parse_latin1((StrRange *)this);
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* OpenXRBindingModifier::get_class() const */

void OpenXRBindingModifier::get_class(void)

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



/* OpenXRBindingModifier::is_class(String const&) const */

undefined8 __thiscall OpenXRBindingModifier::is_class(OpenXRBindingModifier *this,String *param_1)

{
  long *plVar1;
  long lVar2;
  char *pcVar3;
  long lVar4;
  long lVar5;
  char cVar6;
  long lVar7;
  undefined8 uVar8;
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
            if (lVar5 == 0) goto LAB_0010253f;
            LOCK();
            lVar7 = *plVar1;
            bVar9 = lVar5 == lVar7;
            if (bVar9) {
              *plVar1 = lVar5 + 1;
              lVar7 = lVar5;
            }
            UNLOCK();
          } while (!bVar9);
          if (lVar7 != -1) {
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
LAB_0010253f:
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
    if (cVar6 != '\0') goto LAB_001025f3;
  }
  cVar6 = String::operator==(param_1,"OpenXRBindingModifier");
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
              if (lVar5 == 0) goto LAB_00102763;
              LOCK();
              lVar7 = *plVar1;
              bVar9 = lVar5 == lVar7;
              if (bVar9) {
                *plVar1 = lVar5 + 1;
                lVar7 = lVar5;
              }
              UNLOCK();
            } while (!bVar9);
            if (lVar7 != -1) {
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
LAB_00102763:
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
      if (cVar6 != '\0') goto LAB_001025f3;
    }
    cVar6 = String::operator==(param_1,"Resource");
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
                if (lVar5 == 0) goto LAB_00102843;
                LOCK();
                lVar7 = *plVar1;
                bVar9 = lVar5 == lVar7;
                if (bVar9) {
                  *plVar1 = lVar5 + 1;
                  lVar7 = lVar5;
                }
                UNLOCK();
              } while (!bVar9);
              if (lVar7 != -1) {
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
LAB_00102843:
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
        if (cVar6 != '\0') goto LAB_001025f3;
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
                  if (lVar5 == 0) goto LAB_001026cb;
                  LOCK();
                  lVar7 = *plVar1;
                  bVar9 = lVar5 == lVar7;
                  if (bVar9) {
                    *plVar1 = lVar5 + 1;
                    lVar7 = lVar5;
                  }
                  UNLOCK();
                } while (!bVar9);
                if (lVar7 != -1) {
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
LAB_001026cb:
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
          if (cVar6 != '\0') goto LAB_001025f3;
        }
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          uVar8 = String::operator==(param_1,"Object");
          return uVar8;
        }
        goto LAB_00102959;
      }
    }
  }
LAB_001025f3:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_00102959:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GetTypeInfo<String, void>::get_class_info() */

GetTypeInfo<String,void> * __thiscall
GetTypeInfo<String,void>::get_class_info(GetTypeInfo<String,void> *this)

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
  *(undefined4 *)this = 4;
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
      goto joined_r0x00102a9c;
    }
  }
  StringName::operator=((StringName *)(this + 0x10),(StringName *)&local_50);
  lVar2 = local_58;
joined_r0x00102a9c:
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



/* GetTypeInfo<Vector<unsigned char>, void>::get_class_info() */

GetTypeInfo<Vector<unsigned_char>,void> * __thiscall
GetTypeInfo<Vector<unsigned_char>,void>::get_class_info
          (GetTypeInfo<Vector<unsigned_char>,void> *this)

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
  *(undefined4 *)this = 0x1d;
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
      goto joined_r0x00102c1c;
    }
  }
  StringName::operator=((StringName *)(this + 0x10),(StringName *)&local_50);
  lVar2 = local_58;
joined_r0x00102c1c:
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
LAB_00102dc8:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00102dc8;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)pLVar6;
      local_68 = local_80;
      goto joined_r0x00102de6;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)pLVar6;
joined_r0x00102de6:
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



/* Resource::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall Resource::_get_property_listv(Resource *this,List *param_1,bool param_2)

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
    RefCounted::_get_property_listv((List *)this,SUB81(param_1,0));
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "Resource";
  local_70 = 8;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "Resource";
  local_98 = 0;
  local_70 = 8;
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
LAB_001031c8:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_001031c8;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x001031e5;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x001031e5:
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
  StringName::StringName((StringName *)&local_78,"Resource",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      RefCounted::_get_property_listv((List *)this,SUB81(param_1,0));
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* OpenXRBindingModifier::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall
OpenXRBindingModifier::_get_property_listv(OpenXRBindingModifier *this,List *param_1,bool param_2)

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
    Resource::_get_property_listv((Resource *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "OpenXRBindingModifier";
  local_70 = 0x15;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "OpenXRBindingModifier";
  local_98 = 0;
  local_70 = 0x15;
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
LAB_00103618:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00103618;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x00103635;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x00103635:
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
  StringName::StringName((StringName *)&local_78,"OpenXRBindingModifier",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      Resource::_get_property_listv((Resource *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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



/* OpenXRBindingModifier::_bind_methods() [clone .cold] */

void OpenXRBindingModifier::_bind_methods(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* OpenXRBindingModifier::_initialize_classv() */

void OpenXRBindingModifier::_initialize_classv(void)

{
  long *plVar1;
  long lVar2;
  long in_FS_OFFSET;
  long local_70;
  long local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (initialize_class()::initialized == '\0') {
    if (Resource::initialize_class()::initialized == '\0') {
      if (RefCounted::initialize_class()::initialized == '\0') {
        Object::initialize_class();
        local_68 = 0;
        local_50 = 6;
        local_58 = "Object";
        String::parse_latin1((StrRange *)&local_68);
        StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
        local_58 = "RefCounted";
        local_70 = 0;
        local_50 = 10;
        String::parse_latin1((StrRange *)&local_70);
        StringName::StringName((StringName *)&local_58,(String *)&local_70,false);
        ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_60);
        if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
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
        if ((StringName::configured != '\0') && (local_60 != 0)) {
          StringName::unref();
        }
        lVar2 = local_68;
        if (local_68 != 0) {
          LOCK();
          plVar1 = (long *)(local_68 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_68 = 0;
            Memory::free_static((void *)(lVar2 + -0x10),false);
          }
        }
        if ((code *)PTR__bind_methods_00106008 != RefCounted::_bind_methods) {
          RefCounted::_bind_methods();
        }
        RefCounted::initialize_class()::initialized = '\x01';
      }
      local_58 = "RefCounted";
      local_68 = 0;
      local_50 = 10;
      String::parse_latin1((StrRange *)&local_68);
      StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
      local_58 = "Resource";
      local_70 = 0;
      local_50 = 8;
      String::parse_latin1((StrRange *)&local_70);
      StringName::StringName((StringName *)&local_58,(String *)&local_70,false);
      ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_60);
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
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
      if ((StringName::configured != '\0') && (local_60 != 0)) {
        StringName::unref();
      }
      lVar2 = local_68;
      if (local_68 != 0) {
        LOCK();
        plVar1 = (long *)(local_68 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_68 = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      if ((code *)_GLOBAL_OFFSET_TABLE_ != RefCounted::_bind_methods) {
        Resource::_bind_methods();
      }
      Resource::initialize_class()::initialized = '\x01';
    }
    local_58 = "Resource";
    local_68 = 0;
    local_50 = 8;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "OpenXRBindingModifier";
    local_70 = 0;
    local_50 = 0x15;
    String::parse_latin1((StrRange *)&local_70);
    StringName::StringName((StringName *)&local_58,(String *)&local_70,false);
    ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_60);
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
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
    if ((StringName::configured != '\0') && (local_60 != 0)) {
      StringName::unref();
    }
    lVar2 = local_68;
    if (local_68 != 0) {
      LOCK();
      plVar1 = (long *)(local_68 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_68 = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
    _bind_methods();
    initialize_class()::initialized = '\x01';
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
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
/* OpenXRBindingModifier::~OpenXRBindingModifier() */

void __thiscall OpenXRBindingModifier::~OpenXRBindingModifier(OpenXRBindingModifier *this)

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



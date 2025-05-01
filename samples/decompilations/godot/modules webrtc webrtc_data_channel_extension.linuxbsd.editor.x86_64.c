
/* CowData<int>::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<int>::_copy_on_write(CowData<int> *this)

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
  __n = lVar2 * 4;
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



/* List<PropertyInfo, DefaultAllocator>::push_back(PropertyInfo const&) [clone .isra.0] */

void __thiscall
List<PropertyInfo,DefaultAllocator>::push_back
          (List<PropertyInfo,DefaultAllocator> *this,PropertyInfo *param_1)

{
  long *plVar1;
  long lVar2;
  undefined4 *puVar3;
  undefined1 (*pauVar4) [16];
  
  if (*(long *)this == 0) {
    pauVar4 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])this = pauVar4;
    *(undefined4 *)pauVar4[1] = 0;
    *pauVar4 = (undefined1  [16])0x0;
  }
  puVar3 = (undefined4 *)operator_new(0x48,DefaultAllocator::alloc);
  *(undefined8 *)(puVar3 + 8) = 0;
  *(undefined1 (*) [16])(puVar3 + 2) = (undefined1  [16])0x0;
  lVar2 = *(long *)(param_1 + 8);
  *puVar3 = 0;
  puVar3[6] = 0;
  puVar3[10] = 6;
  *(undefined8 *)(puVar3 + 0x10) = 0;
  *(undefined1 (*) [16])(puVar3 + 0xc) = (undefined1  [16])0x0;
  *puVar3 = *(undefined4 *)param_1;
  if (lVar2 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar3 + 2),(CowData *)(param_1 + 8));
  }
  StringName::operator=((StringName *)(puVar3 + 4),(StringName *)(param_1 + 0x10));
  puVar3[6] = *(undefined4 *)(param_1 + 0x18);
  if (*(long *)(puVar3 + 8) != *(long *)(param_1 + 0x20)) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar3 + 8),(CowData *)(param_1 + 0x20));
  }
  puVar3[10] = *(undefined4 *)(param_1 + 0x28);
  plVar1 = *(long **)this;
  lVar2 = plVar1[1];
  *(undefined8 *)(puVar3 + 0xc) = 0;
  *(long **)(puVar3 + 0x10) = plVar1;
  *(long *)(puVar3 + 0xe) = lVar2;
  if (lVar2 != 0) {
    *(undefined4 **)(lVar2 + 0x30) = puVar3;
  }
  plVar1[1] = (long)puVar3;
  if (*plVar1 != 0) {
    *(int *)(plVar1 + 2) = (int)plVar1[2] + 1;
    return;
  }
  *(int *)(plVar1 + 2) = (int)plVar1[2] + 1;
  *plVar1 = (long)puVar3;
  return;
}



/* PropertyInfo::TEMPNAMEPLACEHOLDERVALUE(PropertyInfo&&) [clone .isra.0] */

void __thiscall PropertyInfo::operator=(PropertyInfo *this,PropertyInfo *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 8);
  *(undefined4 *)this = *(undefined4 *)param_1;
  lVar2 = *(long *)(this + 8);
  if (lVar2 != lVar3) {
    if (lVar2 != 0) {
      LOCK();
      plVar1 = (long *)(lVar2 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        lVar3 = *(long *)(this + 8);
        *(undefined8 *)(this + 8) = 0;
        Memory::free_static((void *)(lVar3 + -0x10),false);
        lVar3 = *(long *)(param_1 + 8);
      }
      else {
        *(undefined8 *)(this + 8) = 0;
        lVar3 = *(long *)(param_1 + 8);
      }
    }
    *(long *)(this + 8) = lVar3;
    *(undefined8 *)(param_1 + 8) = 0;
  }
  if (*(long *)(this + 0x10) != *(long *)(param_1 + 0x10)) {
    StringName::unref();
    *(undefined8 *)(this + 0x10) = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  lVar3 = *(long *)(param_1 + 0x20);
  *(undefined4 *)(this + 0x18) = *(undefined4 *)(param_1 + 0x18);
  lVar2 = *(long *)(this + 0x20);
  if (lVar2 != lVar3) {
    if (lVar2 != 0) {
      LOCK();
      plVar1 = (long *)(lVar2 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        lVar3 = *(long *)(this + 0x20);
        *(undefined8 *)(this + 0x20) = 0;
        Memory::free_static((void *)(lVar3 + -0x10),false);
        lVar3 = *(long *)(param_1 + 0x20);
      }
      else {
        *(undefined8 *)(this + 0x20) = 0;
        lVar3 = *(long *)(param_1 + 0x20);
      }
    }
    *(long *)(this + 0x20) = lVar3;
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  *(undefined4 *)(this + 0x28) = *(undefined4 *)(param_1 + 0x28);
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



/* Vector<int>::push_back(int) [clone .isra.0] */

void __thiscall Vector<int>::push_back(Vector<int> *this,int param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  
  if (*(long *)(this + 8) == 0) {
    lVar2 = 1;
  }
  else {
    lVar2 = *(long *)(*(long *)(this + 8) + -8) + 1;
  }
  iVar1 = CowData<int>::resize<false>((CowData<int> *)(this + 8),lVar2);
  if (iVar1 == 0) {
    if (*(long *)(this + 8) == 0) {
      lVar3 = -1;
      lVar2 = 0;
    }
    else {
      lVar2 = *(long *)(*(long *)(this + 8) + -8);
      lVar3 = lVar2 + -1;
      if (-1 < lVar3) {
        CowData<int>::_copy_on_write((CowData<int> *)(this + 8));
        *(int *)(*(long *)(this + 8) + lVar3 * 4) = param_1;
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



/* WebRTCDataChannelExtension::_bind_methods() */

void WebRTCDataChannelExtension::_bind_methods(void)

{
  long *plVar1;
  long lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined8 uVar23;
  long lVar24;
  long in_FS_OFFSET;
  bool bVar25;
  long local_128;
  long local_120;
  undefined8 local_118;
  long local_110;
  undefined8 local_108;
  undefined8 local_100;
  char *local_f8;
  undefined1 local_f0 [16];
  int local_e0;
  long local_d8;
  undefined4 local_d0;
  char *local_c8;
  undefined8 local_c0;
  undefined1 local_b8 [16];
  undefined8 local_a8;
  long local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88 [2];
  undefined8 local_78;
  ulong local_70;
  Vector<int> local_68 [8];
  undefined8 local_60;
  int local_58 [6];
  long local_40;
  
  local_f0._8_8_ = local_f0._0_8_;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Variant::Variant((Variant *)local_58,1);
  StringName::StringName((StringName *)&local_f8,"write_mode",false);
  local_108 = 0;
  local_c8 = "WebRTCDataChannelExtension";
  local_c0 = 0x1a;
  String::parse_latin1((StrRange *)&local_108);
  StringName::StringName((StringName *)&local_c8,(StrRange *)&local_108,false);
  ClassDB::set_property_default_value
            ((StringName *)&local_c8,(StringName *)&local_f8,(Variant *)local_58);
  if ((StringName::configured != '\0') && (local_c8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
  if ((StringName::configured != '\0') && (local_f8 != (char *)0x0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  local_100 = 0;
  local_c8 = "r_buffer";
  local_f8 = (char *)0x0;
  local_c0 = 8;
  String::parse_latin1((StrRange *)&local_f8);
  local_c8 = (char *)0x0;
  plVar1 = (long *)((long)local_f8 + -0x10);
  if (local_f8 != (char *)0x0) {
    do {
      lVar2 = *plVar1;
      if (lVar2 == 0) goto LAB_00100848;
      LOCK();
      lVar24 = *plVar1;
      bVar25 = lVar2 == lVar24;
      if (bVar25) {
        *plVar1 = lVar2 + 1;
        lVar24 = lVar2;
      }
      UNLOCK();
    } while (!bVar25);
    if (lVar24 != -1) {
      local_c8 = local_f8;
    }
  }
LAB_00100848:
  Vector<String>::push_back((Vector<String> *)&local_108,(StringName *)&local_c8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
  local_c8 = "r_buffer_size";
  local_110 = 0;
  local_c0 = 0xd;
  String::parse_latin1((StrRange *)&local_110);
  local_c8 = (char *)0x0;
  plVar1 = (long *)(local_110 + -0x10);
  if (local_110 != 0) {
    do {
      lVar2 = *plVar1;
      if (lVar2 == 0) goto LAB_001008cf;
      LOCK();
      lVar24 = *plVar1;
      bVar25 = lVar2 == lVar24;
      if (bVar25) {
        *plVar1 = lVar2 + 1;
        lVar24 = lVar2;
      }
      UNLOCK();
    } while (!bVar25);
    if (lVar24 != -1) {
      local_c8 = (char *)local_110;
    }
  }
LAB_001008cf:
  Vector<String>::push_back((Vector<String> *)&local_108,(StringName *)&local_c8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_110);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
  local_b8 = (undefined1  [16])0x0;
  local_f8 = "_get_packet";
  local_c8 = (char *)0x0;
  local_c0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 6;
  local_90 = 1;
  local_88[0] = 0;
  local_78 = 0;
  local_70 = 0;
  local_60 = 0;
  local_f0._0_8_ = 0xb;
  String::parse_latin1((StrRange *)&local_c8);
  local_90 = CONCAT44(local_90._4_4_,8);
  GetTypeInfo<Error,void>::get_class_info((GetTypeInfo<Error,void> *)&local_f8);
  PropertyInfo::operator=((PropertyInfo *)&local_c0,(PropertyInfo *)&local_f8);
  lVar2 = local_d8;
  if (local_d8 != 0) {
    LOCK();
    plVar1 = (long *)(local_d8 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_d8 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_f0._8_8_ != 0)) {
    StringName::unref();
  }
  uVar23 = local_f0._0_8_;
  if (local_f0._0_8_ != 0) {
    LOCK();
    plVar1 = (long *)(local_f0._0_8_ + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      auVar19._8_8_ = 0;
      auVar19._0_8_ = local_f0._8_8_;
      local_f0 = auVar19 << 0x40;
      Memory::free_static((void *)(uVar23 + -0x10),false);
    }
  }
  local_70 = local_70 & 0xffffffff00000000;
  local_f8 = "const uint8_t *";
  local_128 = 0;
  local_120 = 0;
  local_f0._0_8_ = 0xf;
  String::parse_latin1((StrRange *)&local_120);
  local_118 = 0;
  local_f8 = (char *)CONCAT44(local_f8._4_4_,2);
  local_e0 = 0x1e;
  local_d8 = 0;
  local_f0 = (undefined1  [16])0x0;
  if (local_120 == 0) {
LAB_00100aeb:
    local_d0 = 6;
    StringName::operator=((StringName *)(local_f0 + 8),(StringName *)&local_128);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_d8,(CowData *)&local_120);
    local_d0 = 6;
    if (local_e0 != 0x11) goto LAB_00100aeb;
    StringName::StringName((StringName *)&local_110,(CowData<char32_t> *)&local_d8,false);
    if (local_f0._8_8_ == local_110) {
      if ((StringName::configured != '\0') && (local_110 != 0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_f0._8_8_ = local_110;
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_118);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_120);
  if ((StringName::configured != '\0') && (local_128 != 0)) {
    StringName::unref();
  }
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_88,(PropertyInfo *)&local_f8);
  lVar2 = local_d8;
  if (local_d8 != 0) {
    LOCK();
    plVar1 = (long *)(local_d8 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_d8 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_f0._8_8_ != 0)) {
    StringName::unref();
  }
  uVar23 = local_f0._0_8_;
  if (local_f0._0_8_ != 0) {
    LOCK();
    plVar1 = (long *)(local_f0._0_8_ + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      auVar17._8_8_ = 0;
      auVar17._0_8_ = local_f0._8_8_;
      local_f0 = auVar17 << 0x40;
      Memory::free_static((void *)(uVar23 + -0x10),false);
    }
  }
  Vector<int>::push_back(local_68,0);
  local_128 = 0;
  local_120 = 0;
  local_f8 = "int32_t";
  local_f0._0_8_ = 7;
  String::parse_latin1((StrRange *)&local_120);
  local_118 = 0;
  local_f8 = (char *)CONCAT44(local_f8._4_4_,2);
  local_e0 = 0x1e;
  local_d8 = 0;
  local_f0 = (undefined1  [16])0x0;
  if (local_120 == 0) {
LAB_00100c7b:
    local_d0 = 6;
    StringName::operator=((StringName *)(local_f0 + 8),(StringName *)&local_128);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_d8,(CowData *)&local_120);
    local_d0 = 6;
    if (local_e0 != 0x11) goto LAB_00100c7b;
    StringName::StringName((StringName *)&local_110,(CowData<char32_t> *)&local_d8,false);
    if (local_f0._8_8_ == local_110) {
      if ((StringName::configured != '\0') && (local_110 != 0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_f0._8_8_ = local_110;
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_118);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_120);
  if ((StringName::configured != '\0') && (local_128 != 0)) {
    StringName::unref();
  }
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_88,(PropertyInfo *)&local_f8);
  lVar2 = local_d8;
  if (local_d8 != 0) {
    LOCK();
    plVar1 = (long *)(local_d8 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_d8 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_f0._8_8_ != 0)) {
    StringName::unref();
  }
  uVar23 = local_f0._0_8_;
  if (local_f0._0_8_ != 0) {
    LOCK();
    plVar1 = (long *)(local_f0._0_8_ + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      auVar18._8_8_ = 0;
      auVar18._0_8_ = local_f0._8_8_;
      local_f0 = auVar18 << 0x40;
      Memory::free_static((void *)(uVar23 + -0x10),false);
    }
  }
  Vector<int>::push_back(local_68,0);
  local_f8 = "WebRTCDataChannelExtension";
  local_110 = 0;
  local_f0._0_8_ = 0x1a;
  String::parse_latin1((StrRange *)&local_110);
  StringName::StringName((StringName *)&local_f8,(StrRange *)&local_110,false);
  ClassDB::add_virtual_method
            ((StringName *)&local_f8,(MethodInfo *)&local_c8,true,(Vector *)&local_108,false);
  if ((StringName::configured != '\0') && (local_f8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_110);
  MethodInfo::~MethodInfo((MethodInfo *)&local_c8);
  CowData<String>::_unref((CowData<String> *)&local_100);
  local_c8 = "p_buffer";
  local_100 = 0;
  local_f8 = (char *)0x0;
  local_c0 = 8;
  String::parse_latin1((StrRange *)&local_f8);
  local_c8 = (char *)0x0;
  plVar1 = (long *)((long)local_f8 + -0x10);
  if (local_f8 != (char *)0x0) {
    do {
      lVar2 = *plVar1;
      if (lVar2 == 0) goto LAB_00100e0e;
      LOCK();
      lVar24 = *plVar1;
      bVar25 = lVar2 == lVar24;
      if (bVar25) {
        *plVar1 = lVar2 + 1;
        lVar24 = lVar2;
      }
      UNLOCK();
    } while (!bVar25);
    if (lVar24 != -1) {
      local_c8 = local_f8;
    }
  }
LAB_00100e0e:
  Vector<String>::push_back((Vector<String> *)&local_108,(StringName *)&local_c8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
  local_c8 = "p_buffer_size";
  local_110 = 0;
  local_c0 = 0xd;
  String::parse_latin1((StrRange *)&local_110);
  local_c8 = (char *)0x0;
  plVar1 = (long *)(local_110 + -0x10);
  if (local_110 != 0) {
    do {
      lVar2 = *plVar1;
      if (lVar2 == 0) goto LAB_00100e90;
      LOCK();
      lVar24 = *plVar1;
      bVar25 = lVar2 == lVar24;
      if (bVar25) {
        *plVar1 = lVar2 + 1;
        lVar24 = lVar2;
      }
      UNLOCK();
    } while (!bVar25);
    if (lVar24 != -1) {
      local_c8 = (char *)local_110;
    }
  }
LAB_00100e90:
  Vector<String>::push_back((Vector<String> *)&local_108,(StringName *)&local_c8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_110);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
  local_b8 = (undefined1  [16])0x0;
  local_f8 = "_put_packet";
  local_c8 = (char *)0x0;
  local_c0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 6;
  local_90 = 1;
  local_88[0] = 0;
  local_78 = 0;
  local_70 = 0;
  local_60 = 0;
  local_f0._0_8_ = 0xb;
  String::parse_latin1((StrRange *)&local_c8);
  local_90 = CONCAT44(local_90._4_4_,8);
  GetTypeInfo<Error,void>::get_class_info((GetTypeInfo<Error,void> *)&local_f8);
  PropertyInfo::operator=((PropertyInfo *)&local_c0,(PropertyInfo *)&local_f8);
  lVar2 = local_d8;
  if (local_d8 != 0) {
    LOCK();
    plVar1 = (long *)(local_d8 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_d8 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_f0._8_8_ != 0)) {
    StringName::unref();
  }
  uVar23 = local_f0._0_8_;
  if (local_f0._0_8_ != 0) {
    LOCK();
    plVar1 = (long *)(local_f0._0_8_ + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      auVar3._8_8_ = 0;
      auVar3._0_8_ = local_f0._8_8_;
      local_f0 = auVar3 << 0x40;
      Memory::free_static((void *)(uVar23 + -0x10),false);
    }
  }
  local_70 = local_70 & 0xffffffff00000000;
  local_128 = 0;
  local_120 = 0;
  local_f8 = "const uint8_t";
  local_f0._0_8_ = 0xd;
  String::parse_latin1((StrRange *)&local_120);
  local_118 = 0;
  local_f8 = (char *)CONCAT44(local_f8._4_4_,2);
  local_e0 = 0x1e;
  local_d8 = 0;
  local_f0 = (undefined1  [16])0x0;
  if (local_120 == 0) {
LAB_001010a3:
    local_d0 = 6;
    StringName::operator=((StringName *)(local_f0 + 8),(StringName *)&local_128);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_d8,(CowData *)&local_120);
    local_d0 = 6;
    if (local_e0 != 0x11) goto LAB_001010a3;
    StringName::StringName((StringName *)&local_110,(CowData<char32_t> *)&local_d8,false);
    if (local_f0._8_8_ == local_110) {
      if ((StringName::configured != '\0') && (local_110 != 0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_f0._8_8_ = local_110;
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_118);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_120);
  if ((StringName::configured != '\0') && (local_128 != 0)) {
    StringName::unref();
  }
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_88,(PropertyInfo *)&local_f8);
  lVar2 = local_d8;
  if (local_d8 != 0) {
    LOCK();
    plVar1 = (long *)(local_d8 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_d8 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_f0._8_8_ != 0)) {
    StringName::unref();
  }
  uVar23 = local_f0._0_8_;
  if (local_f0._0_8_ != 0) {
    LOCK();
    plVar1 = (long *)(local_f0._0_8_ + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      auVar5._8_8_ = 0;
      auVar5._0_8_ = local_f0._8_8_;
      local_f0 = auVar5 << 0x40;
      Memory::free_static((void *)(uVar23 + -0x10),false);
    }
  }
  Vector<int>::push_back(local_68,0);
  GetTypeInfo<int,void>::get_class_info((GetTypeInfo<int,void> *)&local_f8);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_88,(PropertyInfo *)&local_f8);
  lVar2 = local_d8;
  if (local_d8 != 0) {
    LOCK();
    plVar1 = (long *)(local_d8 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_d8 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_f0._8_8_ != 0)) {
    StringName::unref();
  }
  uVar23 = local_f0._0_8_;
  if (local_f0._0_8_ != 0) {
    LOCK();
    plVar1 = (long *)(local_f0._0_8_ + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      auVar20._8_8_ = 0;
      auVar20._0_8_ = local_f0._8_8_;
      local_f0 = auVar20 << 0x40;
      Memory::free_static((void *)(uVar23 + -0x10),false);
    }
  }
  Vector<int>::push_back(local_68,3);
  local_f8 = "WebRTCDataChannelExtension";
  local_110 = 0;
  local_f0._0_8_ = 0x1a;
  String::parse_latin1((StrRange *)&local_110);
  StringName::StringName((StringName *)&local_f8,(StrRange *)&local_110,false);
  ClassDB::add_virtual_method
            ((StringName *)&local_f8,(MethodInfo *)&local_c8,true,(Vector *)&local_108,false);
  if ((StringName::configured != '\0') && (local_f8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_110);
  MethodInfo::~MethodInfo((MethodInfo *)&local_c8);
  CowData<String>::_unref((CowData<String> *)&local_100);
  local_b8 = (undefined1  [16])0x0;
  local_f8 = "_get_available_packet_count";
  local_100 = 0;
  local_c8 = (char *)0x0;
  local_c0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 6;
  local_90 = 1;
  local_88[0] = 0;
  local_78 = 0;
  local_70 = 0;
  local_60 = 0;
  local_f0._0_8_ = 0x1b;
  String::parse_latin1((StrRange *)&local_c8);
  local_90 = CONCAT44(local_90._4_4_,0x8c);
  GetTypeInfo<int,void>::get_class_info((GetTypeInfo<int,void> *)&local_f8);
  PropertyInfo::operator=((PropertyInfo *)&local_c0,(PropertyInfo *)&local_f8);
  lVar2 = local_d8;
  if (local_d8 != 0) {
    LOCK();
    plVar1 = (long *)(local_d8 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_d8 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_f0._8_8_ != 0)) {
    StringName::unref();
  }
  uVar23 = local_f0._0_8_;
  if (local_f0._0_8_ != 0) {
    LOCK();
    plVar1 = (long *)(local_f0._0_8_ + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      auVar4._8_8_ = 0;
      auVar4._0_8_ = local_f0._8_8_;
      local_f0 = auVar4 << 0x40;
      Memory::free_static((void *)(uVar23 + -0x10),false);
    }
  }
  local_70 = CONCAT44(local_70._4_4_,3);
  local_110 = 0;
  local_f8 = "WebRTCDataChannelExtension";
  local_f0._0_8_ = 0x1a;
  String::parse_latin1((StrRange *)&local_110);
  StringName::StringName((StringName *)&local_f8,(StrRange *)&local_110,false);
  ClassDB::add_virtual_method
            ((StringName *)&local_f8,(MethodInfo *)&local_c8,true,(Vector *)&local_108,false);
  if ((StringName::configured != '\0') && (local_f8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_110);
  MethodInfo::~MethodInfo((MethodInfo *)&local_c8);
  CowData<String>::_unref((CowData<String> *)&local_100);
  local_b8 = (undefined1  [16])0x0;
  local_f8 = "_get_max_packet_size";
  local_100 = 0;
  local_c8 = (char *)0x0;
  local_c0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 6;
  local_90 = 1;
  local_88[0] = 0;
  local_78 = 0;
  local_70 = 0;
  local_60 = 0;
  local_f0._0_8_ = 0x14;
  String::parse_latin1((StrRange *)&local_c8);
  local_90 = CONCAT44(local_90._4_4_,0x8c);
  GetTypeInfo<int,void>::get_class_info((GetTypeInfo<int,void> *)&local_f8);
  PropertyInfo::operator=((PropertyInfo *)&local_c0,(PropertyInfo *)&local_f8);
  lVar2 = local_d8;
  if (local_d8 != 0) {
    LOCK();
    plVar1 = (long *)(local_d8 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_d8 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_f0._8_8_ != 0)) {
    StringName::unref();
  }
  uVar23 = local_f0._0_8_;
  if (local_f0._0_8_ != 0) {
    LOCK();
    plVar1 = (long *)(local_f0._0_8_ + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      auVar14._8_8_ = 0;
      auVar14._0_8_ = local_f0._8_8_;
      local_f0 = auVar14 << 0x40;
      Memory::free_static((void *)(uVar23 + -0x10),false);
    }
  }
  local_70 = CONCAT44(local_70._4_4_,3);
  local_110 = 0;
  local_f8 = "WebRTCDataChannelExtension";
  local_f0._0_8_ = 0x1a;
  String::parse_latin1((StrRange *)&local_110);
  StringName::StringName((StringName *)&local_f8,(StrRange *)&local_110,false);
  ClassDB::add_virtual_method
            ((StringName *)&local_f8,(MethodInfo *)&local_c8,true,(Vector *)&local_108,false);
  if ((StringName::configured != '\0') && (local_f8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_110);
  MethodInfo::~MethodInfo((MethodInfo *)&local_c8);
  CowData<String>::_unref((CowData<String> *)&local_100);
  local_b8 = (undefined1  [16])0x0;
  local_f8 = "_poll";
  local_100 = 0;
  local_c8 = (char *)0x0;
  local_c0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 6;
  local_90 = 1;
  local_88[0] = 0;
  local_78 = 0;
  local_70 = 0;
  local_60 = 0;
  local_f0._0_8_ = 5;
  String::parse_latin1((StrRange *)&local_c8);
  local_90 = CONCAT44(local_90._4_4_,0x88);
  GetTypeInfo<Error,void>::get_class_info((GetTypeInfo<Error,void> *)&local_f8);
  PropertyInfo::operator=((PropertyInfo *)&local_c0,(PropertyInfo *)&local_f8);
  lVar2 = local_d8;
  if (local_d8 != 0) {
    LOCK();
    plVar1 = (long *)(local_d8 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_d8 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_f0._8_8_ != 0)) {
    StringName::unref();
  }
  uVar23 = local_f0._0_8_;
  if (local_f0._0_8_ != 0) {
    LOCK();
    plVar1 = (long *)(local_f0._0_8_ + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      auVar15._8_8_ = 0;
      auVar15._0_8_ = local_f0._8_8_;
      local_f0 = auVar15 << 0x40;
      Memory::free_static((void *)(uVar23 + -0x10),false);
    }
  }
  local_70 = local_70 & 0xffffffff00000000;
  local_110 = 0;
  local_f8 = "WebRTCDataChannelExtension";
  local_f0._0_8_ = 0x1a;
  String::parse_latin1((StrRange *)&local_110);
  StringName::StringName((StringName *)&local_f8,(StrRange *)&local_110,false);
  ClassDB::add_virtual_method
            ((StringName *)&local_f8,(MethodInfo *)&local_c8,true,(Vector *)&local_108,false);
  if ((StringName::configured != '\0') && (local_f8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_110);
  MethodInfo::~MethodInfo((MethodInfo *)&local_c8);
  CowData<String>::_unref((CowData<String> *)&local_100);
  local_b8 = (undefined1  [16])0x0;
  local_f8 = "_close";
  local_100 = 0;
  local_c8 = (char *)0x0;
  local_c0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 6;
  local_90 = 1;
  local_88[0] = 0;
  local_78 = 0;
  local_70 = 0;
  local_60 = 0;
  local_f0._0_8_ = 6;
  String::parse_latin1((StrRange *)&local_c8);
  local_f8 = "WebRTCDataChannelExtension";
  local_90 = CONCAT44(local_90._4_4_,0x88);
  local_110 = 0;
  local_f0._0_8_ = 0x1a;
  String::parse_latin1((StrRange *)&local_110);
  StringName::StringName((StringName *)&local_f8,(StrRange *)&local_110,false);
  ClassDB::add_virtual_method
            ((StringName *)&local_f8,(MethodInfo *)&local_c8,true,(Vector *)&local_108,false);
  if ((StringName::configured != '\0') && (local_f8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_110);
  MethodInfo::~MethodInfo((MethodInfo *)&local_c8);
  CowData<String>::_unref((CowData<String> *)&local_100);
  local_c8 = "p_write_mode";
  local_100 = 0;
  local_f8 = (char *)0x0;
  local_c0 = 0xc;
  String::parse_latin1((StrRange *)&local_f8);
  local_c8 = (char *)0x0;
  plVar1 = (long *)((long)local_f8 + -0x10);
  if (local_f8 != (char *)0x0) {
    do {
      lVar2 = *plVar1;
      if (lVar2 == 0) goto LAB_00101895;
      LOCK();
      lVar24 = *plVar1;
      bVar25 = lVar2 == lVar24;
      if (bVar25) {
        *plVar1 = lVar2 + 1;
        lVar24 = lVar2;
      }
      UNLOCK();
    } while (!bVar25);
    if (lVar24 != -1) {
      local_c8 = local_f8;
    }
  }
LAB_00101895:
  Vector<String>::push_back((Vector<String> *)&local_108,(StringName *)&local_c8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
  local_b8 = (undefined1  [16])0x0;
  local_f8 = "_set_write_mode";
  local_c8 = (char *)0x0;
  local_c0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 6;
  local_90 = 1;
  local_88[0] = 0;
  local_78 = 0;
  local_70 = 0;
  local_60 = 0;
  local_f0._0_8_ = 0xf;
  String::parse_latin1((StrRange *)&local_c8);
  local_90 = CONCAT44(local_90._4_4_,0x88);
  GetTypeInfo<WebRTCDataChannel::WriteMode,void>::get_class_info
            ((GetTypeInfo<WebRTCDataChannel::WriteMode,void> *)&local_f8);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_88,(PropertyInfo *)&local_f8);
  lVar2 = local_d8;
  if (local_d8 != 0) {
    LOCK();
    plVar1 = (long *)(local_d8 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_d8 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_f0._8_8_ != 0)) {
    StringName::unref();
  }
  uVar23 = local_f0._0_8_;
  if (local_f0._0_8_ != 0) {
    LOCK();
    plVar1 = (long *)(local_f0._0_8_ + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      auVar16._8_8_ = 0;
      auVar16._0_8_ = local_f0._8_8_;
      local_f0 = auVar16 << 0x40;
      Memory::free_static((void *)(uVar23 + -0x10),false);
    }
  }
  Vector<int>::push_back(local_68,0);
  local_f8 = "WebRTCDataChannelExtension";
  local_110 = 0;
  local_f0._0_8_ = 0x1a;
  String::parse_latin1((StrRange *)&local_110);
  StringName::StringName((StringName *)&local_f8,(StrRange *)&local_110,false);
  ClassDB::add_virtual_method
            ((StringName *)&local_f8,(MethodInfo *)&local_c8,true,(Vector *)&local_108,false);
  if ((StringName::configured != '\0') && (local_f8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_110);
  MethodInfo::~MethodInfo((MethodInfo *)&local_c8);
  CowData<String>::_unref((CowData<String> *)&local_100);
  local_b8 = (undefined1  [16])0x0;
  local_f8 = "_get_write_mode";
  local_100 = 0;
  local_c8 = (char *)0x0;
  local_c0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 6;
  local_90 = 1;
  local_88[0] = 0;
  local_78 = 0;
  local_70 = 0;
  local_60 = 0;
  local_f0._0_8_ = 0xf;
  String::parse_latin1((StrRange *)&local_c8);
  local_90 = CONCAT44(local_90._4_4_,0x8c);
  GetTypeInfo<WebRTCDataChannel::WriteMode,void>::get_class_info
            ((GetTypeInfo<WebRTCDataChannel::WriteMode,void> *)&local_f8);
  PropertyInfo::operator=((PropertyInfo *)&local_c0,(PropertyInfo *)&local_f8);
  lVar2 = local_d8;
  if (local_d8 != 0) {
    LOCK();
    plVar1 = (long *)(local_d8 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_d8 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_f0._8_8_ != 0)) {
    StringName::unref();
  }
  uVar23 = local_f0._0_8_;
  if (local_f0._0_8_ != 0) {
    LOCK();
    plVar1 = (long *)(local_f0._0_8_ + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      auVar7._8_8_ = 0;
      auVar7._0_8_ = local_f0._8_8_;
      local_f0 = auVar7 << 0x40;
      Memory::free_static((void *)(uVar23 + -0x10),false);
    }
  }
  local_70 = local_70 & 0xffffffff00000000;
  local_110 = 0;
  local_f8 = "WebRTCDataChannelExtension";
  local_f0._0_8_ = 0x1a;
  String::parse_latin1((StrRange *)&local_110);
  StringName::StringName((StringName *)&local_f8,(StrRange *)&local_110,false);
  ClassDB::add_virtual_method
            ((StringName *)&local_f8,(MethodInfo *)&local_c8,true,(Vector *)&local_108,false);
  if ((StringName::configured != '\0') && (local_f8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_110);
  MethodInfo::~MethodInfo((MethodInfo *)&local_c8);
  CowData<String>::_unref((CowData<String> *)&local_100);
  local_b8 = (undefined1  [16])0x0;
  local_f8 = "_was_string_packet";
  local_100 = 0;
  local_c8 = (char *)0x0;
  local_c0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 6;
  local_90 = 1;
  local_88[0] = 0;
  local_78 = 0;
  local_70 = 0;
  local_60 = 0;
  local_f0._0_8_ = 0x12;
  String::parse_latin1((StrRange *)&local_c8);
  local_90 = CONCAT44(local_90._4_4_,0x8c);
  GetTypeInfo<bool,void>::get_class_info((GetTypeInfo<bool,void> *)&local_f8);
  PropertyInfo::operator=((PropertyInfo *)&local_c0,(PropertyInfo *)&local_f8);
  lVar2 = local_d8;
  if (local_d8 != 0) {
    LOCK();
    plVar1 = (long *)(local_d8 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_d8 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_f0._8_8_ != 0)) {
    StringName::unref();
  }
  uVar23 = local_f0._0_8_;
  if (local_f0._0_8_ != 0) {
    LOCK();
    plVar1 = (long *)(local_f0._0_8_ + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      auVar8._8_8_ = 0;
      auVar8._0_8_ = local_f0._8_8_;
      local_f0 = auVar8 << 0x40;
      Memory::free_static((void *)(uVar23 + -0x10),false);
    }
  }
  local_70 = local_70 & 0xffffffff00000000;
  local_110 = 0;
  local_f8 = "WebRTCDataChannelExtension";
  local_f0._0_8_ = 0x1a;
  String::parse_latin1((StrRange *)&local_110);
  StringName::StringName((StringName *)&local_f8,(StrRange *)&local_110,false);
  ClassDB::add_virtual_method
            ((StringName *)&local_f8,(MethodInfo *)&local_c8,true,(Vector *)&local_108,false);
  if ((StringName::configured != '\0') && (local_f8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_110);
  MethodInfo::~MethodInfo((MethodInfo *)&local_c8);
  CowData<String>::_unref((CowData<String> *)&local_100);
  local_b8 = (undefined1  [16])0x0;
  local_f8 = "_get_ready_state";
  local_100 = 0;
  local_c8 = (char *)0x0;
  local_c0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 6;
  local_90 = 1;
  local_88[0] = 0;
  local_78 = 0;
  local_70 = 0;
  local_60 = 0;
  local_f0._0_8_ = 0x10;
  String::parse_latin1((StrRange *)&local_c8);
  local_90 = CONCAT44(local_90._4_4_,0x8c);
  GetTypeInfo<WebRTCDataChannel::ChannelState,void>::get_class_info
            ((GetTypeInfo<WebRTCDataChannel::ChannelState,void> *)&local_f8);
  PropertyInfo::operator=((PropertyInfo *)&local_c0,(PropertyInfo *)&local_f8);
  lVar2 = local_d8;
  if (local_d8 != 0) {
    LOCK();
    plVar1 = (long *)(local_d8 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_d8 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_f0._8_8_ != 0)) {
    StringName::unref();
  }
  uVar23 = local_f0._0_8_;
  if (local_f0._0_8_ != 0) {
    LOCK();
    plVar1 = (long *)(local_f0._0_8_ + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      auVar6._8_8_ = 0;
      auVar6._0_8_ = local_f0._8_8_;
      local_f0 = auVar6 << 0x40;
      Memory::free_static((void *)(uVar23 + -0x10),false);
    }
  }
  local_70 = local_70 & 0xffffffff00000000;
  local_110 = 0;
  local_f8 = "WebRTCDataChannelExtension";
  local_f0._0_8_ = 0x1a;
  String::parse_latin1((StrRange *)&local_110);
  StringName::StringName((StringName *)&local_f8,(StrRange *)&local_110,false);
  ClassDB::add_virtual_method
            ((StringName *)&local_f8,(MethodInfo *)&local_c8,true,(Vector *)&local_108,false);
  if ((StringName::configured != '\0') && (local_f8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_110);
  MethodInfo::~MethodInfo((MethodInfo *)&local_c8);
  CowData<String>::_unref((CowData<String> *)&local_100);
  local_b8 = (undefined1  [16])0x0;
  local_f8 = "_get_label";
  local_100 = 0;
  local_c8 = (char *)0x0;
  local_c0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 6;
  local_90 = 1;
  local_88[0] = 0;
  local_78 = 0;
  local_70 = 0;
  local_60 = 0;
  local_f0._0_8_ = 10;
  String::parse_latin1((StrRange *)&local_c8);
  local_90 = CONCAT44(local_90._4_4_,0x8c);
  local_128 = 0;
  local_120 = 0;
  local_f8 = "";
  auVar21._8_8_ = 0;
  auVar21._0_8_ = local_f0._8_8_;
  local_f0 = auVar21 << 0x40;
  String::parse_latin1((StrRange *)&local_120);
  local_118 = 0;
  local_f8 = (char *)CONCAT44(local_f8._4_4_,4);
  local_e0 = 0;
  local_d8 = 0;
  local_f0 = (undefined1  [16])0x0;
  if (local_120 == 0) {
LAB_0010209b:
    local_d0 = 6;
    StringName::operator=((StringName *)(local_f0 + 8),(StringName *)&local_128);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_d8,(CowData *)&local_120);
    local_d0 = 6;
    if (local_e0 != 0x11) goto LAB_0010209b;
    StringName::StringName((StringName *)&local_110,(CowData<char32_t> *)&local_d8,false);
    if (local_f0._8_8_ == local_110) {
      if ((StringName::configured != '\0') && (local_110 != 0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_f0._8_8_ = local_110;
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_118);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_120);
  if ((StringName::configured != '\0') && (local_128 != 0)) {
    StringName::unref();
  }
  PropertyInfo::operator=((PropertyInfo *)&local_c0,(PropertyInfo *)&local_f8);
  lVar2 = local_d8;
  if (local_d8 != 0) {
    LOCK();
    plVar1 = (long *)(local_d8 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_d8 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_f0._8_8_ != 0)) {
    StringName::unref();
  }
  uVar23 = local_f0._0_8_;
  if (local_f0._0_8_ != 0) {
    LOCK();
    plVar1 = (long *)(local_f0._0_8_ + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      auVar10._8_8_ = 0;
      auVar10._0_8_ = local_f0._8_8_;
      local_f0 = auVar10 << 0x40;
      Memory::free_static((void *)(uVar23 + -0x10),false);
    }
  }
  local_70 = local_70 & 0xffffffff00000000;
  local_110 = 0;
  local_f8 = "WebRTCDataChannelExtension";
  local_f0._0_8_ = 0x1a;
  String::parse_latin1((StrRange *)&local_110);
  StringName::StringName((StringName *)&local_f8,(StrRange *)&local_110,false);
  ClassDB::add_virtual_method
            ((StringName *)&local_f8,(MethodInfo *)&local_c8,true,(Vector *)&local_108,false);
  if ((StringName::configured != '\0') && (local_f8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_110);
  MethodInfo::~MethodInfo((MethodInfo *)&local_c8);
  CowData<String>::_unref((CowData<String> *)&local_100);
  local_b8 = (undefined1  [16])0x0;
  local_f8 = "_is_ordered";
  local_100 = 0;
  local_c8 = (char *)0x0;
  local_c0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 6;
  local_90 = 1;
  local_88[0] = 0;
  local_78 = 0;
  local_70 = 0;
  local_60 = 0;
  local_f0._0_8_ = 0xb;
  String::parse_latin1((StrRange *)&local_c8);
  local_90 = CONCAT44(local_90._4_4_,0x8c);
  GetTypeInfo<bool,void>::get_class_info((GetTypeInfo<bool,void> *)&local_f8);
  PropertyInfo::operator=((PropertyInfo *)&local_c0,(PropertyInfo *)&local_f8);
  lVar2 = local_d8;
  if (local_d8 != 0) {
    LOCK();
    plVar1 = (long *)(local_d8 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_d8 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_f0._8_8_ != 0)) {
    StringName::unref();
  }
  uVar23 = local_f0._0_8_;
  if (local_f0._0_8_ != 0) {
    LOCK();
    plVar1 = (long *)(local_f0._0_8_ + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      auVar9._8_8_ = 0;
      auVar9._0_8_ = local_f0._8_8_;
      local_f0 = auVar9 << 0x40;
      Memory::free_static((void *)(uVar23 + -0x10),false);
    }
  }
  local_70 = local_70 & 0xffffffff00000000;
  local_110 = 0;
  local_f8 = "WebRTCDataChannelExtension";
  local_f0._0_8_ = 0x1a;
  String::parse_latin1((StrRange *)&local_110);
  StringName::StringName((StringName *)&local_f8,(StrRange *)&local_110,false);
  ClassDB::add_virtual_method
            ((StringName *)&local_f8,(MethodInfo *)&local_c8,true,(Vector *)&local_108,false);
  if ((StringName::configured != '\0') && (local_f8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_110);
  MethodInfo::~MethodInfo((MethodInfo *)&local_c8);
  CowData<String>::_unref((CowData<String> *)&local_100);
  local_b8._0_8_ = 0;
  local_b8._8_8_ = 0;
  local_f8 = "_get_id";
  local_100 = 0;
  local_c8 = (char *)0x0;
  local_c0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 6;
  local_90 = 1;
  local_88[0] = 0;
  local_78 = 0;
  local_70 = 0;
  local_60 = 0;
  local_f0._0_8_ = 7;
  String::parse_latin1((StrRange *)&local_c8);
  local_90 = CONCAT44(local_90._4_4_,0x8c);
  GetTypeInfo<int,void>::get_class_info((GetTypeInfo<int,void> *)&local_f8);
  uVar23 = local_b8._0_8_;
  local_c0 = CONCAT44(local_c0._4_4_,local_f8._0_4_);
  if (local_b8._0_8_ != local_f0._0_8_) {
    if (local_b8._0_8_ != 0) {
      LOCK();
      plVar1 = (long *)(local_b8._0_8_ + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_b8._0_8_ = 0;
        Memory::free_static((void *)(uVar23 + -0x10),false);
      }
    }
    local_b8._0_8_ = local_f0._0_8_;
    local_f0._0_8_ = 0;
  }
  if (local_b8._8_8_ != local_f0._8_8_) {
    StringName::unref();
    local_b8._8_8_ = local_f0._8_8_;
    local_f0._8_8_ = 0;
  }
  lVar24 = local_a0;
  lVar2 = local_d8;
  local_a8 = CONCAT44(local_a8._4_4_,local_e0);
  if (local_a0 == local_d8) {
    local_98 = CONCAT44(local_98._4_4_,local_d0);
    if (local_a0 != 0) {
      LOCK();
      plVar1 = (long *)(local_a0 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_d8 = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
  }
  else {
    if (local_a0 != 0) {
      LOCK();
      plVar1 = (long *)(local_a0 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_a0 = 0;
        Memory::free_static((void *)(lVar24 + -0x10),false);
      }
    }
    local_a0 = local_d8;
    local_98 = CONCAT44(local_98._4_4_,local_d0);
  }
  if ((StringName::configured != '\0') && (local_f0._8_8_ != 0)) {
    StringName::unref();
  }
  uVar23 = local_f0._0_8_;
  if (local_f0._0_8_ != 0) {
    LOCK();
    plVar1 = (long *)(local_f0._0_8_ + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_f0._0_8_ = 0;
      Memory::free_static((void *)(uVar23 + -0x10),false);
    }
  }
  local_70 = CONCAT44(local_70._4_4_,3);
  local_110 = 0;
  local_f8 = "WebRTCDataChannelExtension";
  local_f0._0_8_ = 0x1a;
  String::parse_latin1((StrRange *)&local_110);
  StringName::StringName((StringName *)&local_f8,(StrRange *)&local_110,false);
  ClassDB::add_virtual_method
            ((StringName *)&local_f8,(MethodInfo *)&local_c8,true,(Vector *)&local_108,false);
  if ((StringName::configured != '\0') && (local_f8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_110);
  MethodInfo::~MethodInfo((MethodInfo *)&local_c8);
  CowData<String>::_unref((CowData<String> *)&local_100);
  local_b8 = (undefined1  [16])0x0;
  local_f8 = "_get_max_packet_life_time";
  local_100 = 0;
  local_c8 = (char *)0x0;
  local_c0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 6;
  local_90 = 1;
  local_88[0] = 0;
  local_78 = 0;
  local_70 = 0;
  local_60 = 0;
  local_f0._0_8_ = 0x19;
  String::parse_latin1((StrRange *)&local_c8);
  local_90 = CONCAT44(local_90._4_4_,0x8c);
  GetTypeInfo<int,void>::get_class_info((GetTypeInfo<int,void> *)&local_f8);
  PropertyInfo::operator=((PropertyInfo *)&local_c0,(PropertyInfo *)&local_f8);
  lVar2 = local_d8;
  if (local_d8 != 0) {
    LOCK();
    plVar1 = (long *)(local_d8 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_d8 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_f0._8_8_ != 0)) {
    StringName::unref();
  }
  uVar23 = local_f0._0_8_;
  if (local_f0._0_8_ != 0) {
    LOCK();
    plVar1 = (long *)(local_f0._0_8_ + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      auVar13._8_8_ = 0;
      auVar13._0_8_ = local_f0._8_8_;
      local_f0 = auVar13 << 0x40;
      Memory::free_static((void *)(uVar23 + -0x10),false);
    }
  }
  local_70 = CONCAT44(local_70._4_4_,3);
  local_110 = 0;
  local_f8 = "WebRTCDataChannelExtension";
  local_f0._0_8_ = 0x1a;
  String::parse_latin1((StrRange *)&local_110);
  StringName::StringName((StringName *)&local_f8,(StrRange *)&local_110,false);
  ClassDB::add_virtual_method
            ((StringName *)&local_f8,(MethodInfo *)&local_c8,true,(Vector *)&local_108,false);
  if ((StringName::configured != '\0') && (local_f8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_110);
  MethodInfo::~MethodInfo((MethodInfo *)&local_c8);
  CowData<String>::_unref((CowData<String> *)&local_100);
  local_b8 = (undefined1  [16])0x0;
  local_f8 = "_get_max_retransmits";
  local_100 = 0;
  local_c8 = (char *)0x0;
  local_c0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 6;
  local_90 = 1;
  local_88[0] = 0;
  local_78 = 0;
  local_70 = 0;
  local_60 = 0;
  local_f0._0_8_ = 0x14;
  String::parse_latin1((StrRange *)&local_c8);
  local_90 = CONCAT44(local_90._4_4_,0x8c);
  GetTypeInfo<int,void>::get_class_info((GetTypeInfo<int,void> *)&local_f8);
  PropertyInfo::operator=((PropertyInfo *)&local_c0,(PropertyInfo *)&local_f8);
  lVar2 = local_d8;
  if (local_d8 != 0) {
    LOCK();
    plVar1 = (long *)(local_d8 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_d8 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_f0._8_8_ != 0)) {
    StringName::unref();
  }
  uVar23 = local_f0._0_8_;
  if (local_f0._0_8_ != 0) {
    LOCK();
    plVar1 = (long *)(local_f0._0_8_ + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      auVar12._8_8_ = 0;
      auVar12._0_8_ = local_f0._8_8_;
      local_f0 = auVar12 << 0x40;
      Memory::free_static((void *)(uVar23 + -0x10),false);
    }
  }
  local_70 = CONCAT44(local_70._4_4_,3);
  local_110 = 0;
  local_f8 = "WebRTCDataChannelExtension";
  local_f0._0_8_ = 0x1a;
  String::parse_latin1((StrRange *)&local_110);
  StringName::StringName((StringName *)&local_f8,(StrRange *)&local_110,false);
  ClassDB::add_virtual_method
            ((StringName *)&local_f8,(MethodInfo *)&local_c8,true,(Vector *)&local_108,false);
  if ((StringName::configured != '\0') && (local_f8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_110);
  MethodInfo::~MethodInfo((MethodInfo *)&local_c8);
  CowData<String>::_unref((CowData<String> *)&local_100);
  local_b8._0_8_ = 0;
  local_b8._8_8_ = 0;
  local_f8 = "_get_protocol";
  local_100 = 0;
  local_c8 = (char *)0x0;
  local_c0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 6;
  local_90 = 1;
  local_88[0] = 0;
  local_78 = 0;
  local_70 = 0;
  local_60 = 0;
  local_f0._0_8_ = 0xd;
  String::parse_latin1((StrRange *)&local_c8);
  local_90 = CONCAT44(local_90._4_4_,0x8c);
  local_128 = 0;
  local_120 = 0;
  local_f8 = "";
  auVar22._8_8_ = 0;
  auVar22._0_8_ = local_f0._8_8_;
  local_f0 = auVar22 << 0x40;
  String::parse_latin1((StrRange *)&local_120);
  local_118 = 0;
  local_f8 = (char *)CONCAT44(local_f8._4_4_,4);
  local_e0 = 0;
  local_d8 = 0;
  local_f0._0_8_ = 0;
  local_f0._8_8_ = 0;
  if (local_120 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_d8,(CowData *)&local_120);
    local_d0 = 6;
    if (local_e0 == 0x11) {
      StringName::StringName((StringName *)&local_110,(CowData<char32_t> *)&local_d8,false);
      if (local_f0._8_8_ == local_110) {
        if ((StringName::configured != '\0') && (local_110 != 0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        local_f0._8_8_ = local_110;
      }
      goto LAB_00102a8a;
    }
  }
  local_d0 = 6;
  StringName::operator=((StringName *)(local_f0 + 8),(StringName *)&local_128);
LAB_00102a8a:
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_118);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_120);
  if ((StringName::configured != '\0') && (local_128 != 0)) {
    StringName::unref();
  }
  uVar23 = local_b8._0_8_;
  local_c0 = CONCAT44(local_c0._4_4_,local_f8._0_4_);
  if (local_b8._0_8_ != local_f0._0_8_) {
    if (local_b8._0_8_ != 0) {
      LOCK();
      plVar1 = (long *)(local_b8._0_8_ + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_b8._0_8_ = 0;
        Memory::free_static((void *)(uVar23 + -0x10),false);
      }
    }
    local_b8._0_8_ = local_f0._0_8_;
    local_f0._0_8_ = 0;
  }
  if (local_b8._8_8_ != local_f0._8_8_) {
    StringName::unref();
    local_b8._8_8_ = local_f0._8_8_;
    local_f0._8_8_ = 0;
  }
  lVar24 = local_a0;
  lVar2 = local_d8;
  local_a8 = CONCAT44(local_a8._4_4_,local_e0);
  if (local_a0 == local_d8) {
    local_98 = CONCAT44(local_98._4_4_,local_d0);
    if (local_a0 != 0) {
      LOCK();
      plVar1 = (long *)(local_a0 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_d8 = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
  }
  else {
    if (local_a0 != 0) {
      LOCK();
      plVar1 = (long *)(local_a0 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_a0 = 0;
        Memory::free_static((void *)(lVar24 + -0x10),false);
      }
    }
    local_a0 = local_d8;
    local_98 = CONCAT44(local_98._4_4_,local_d0);
  }
  if ((StringName::configured != '\0') && (local_f0._8_8_ != 0)) {
    StringName::unref();
  }
  uVar23 = local_f0._0_8_;
  if (local_f0._0_8_ != 0) {
    LOCK();
    plVar1 = (long *)(local_f0._0_8_ + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_f0._0_8_ = 0;
      Memory::free_static((void *)(uVar23 + -0x10),false);
    }
  }
  local_70 = local_70 & 0xffffffff00000000;
  local_110 = 0;
  local_f8 = "WebRTCDataChannelExtension";
  local_f0._0_8_ = 0x1a;
  String::parse_latin1((StrRange *)&local_110);
  StringName::StringName((StringName *)&local_f8,(StrRange *)&local_110,false);
  ClassDB::add_virtual_method
            ((StringName *)&local_f8,(MethodInfo *)&local_c8,true,(Vector *)&local_108,false);
  if ((StringName::configured != '\0') && (local_f8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_110);
  MethodInfo::~MethodInfo((MethodInfo *)&local_c8);
  CowData<String>::_unref((CowData<String> *)&local_100);
  local_b8._0_8_ = 0;
  local_b8._8_8_ = 0;
  local_f8 = "_is_negotiated";
  local_100 = 0;
  local_c8 = (char *)0x0;
  local_c0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 6;
  local_90 = 1;
  local_88[0] = 0;
  local_78 = 0;
  local_70 = 0;
  local_60 = 0;
  local_f0._0_8_ = 0xe;
  String::parse_latin1((StrRange *)&local_c8);
  local_90 = CONCAT44(local_90._4_4_,0x8c);
  GetTypeInfo<bool,void>::get_class_info((GetTypeInfo<bool,void> *)&local_f8);
  uVar23 = local_b8._0_8_;
  local_c0 = CONCAT44(local_c0._4_4_,local_f8._0_4_);
  if (local_b8._0_8_ != local_f0._0_8_) {
    if (local_b8._0_8_ != 0) {
      LOCK();
      plVar1 = (long *)(local_b8._0_8_ + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_b8._0_8_ = 0;
        Memory::free_static((void *)(uVar23 + -0x10),false);
      }
    }
    local_b8._0_8_ = local_f0._0_8_;
    local_f0._0_8_ = 0;
  }
  if (local_b8._8_8_ != local_f0._8_8_) {
    StringName::unref();
    local_b8._8_8_ = local_f0._8_8_;
    local_f0._8_8_ = 0;
  }
  lVar24 = local_a0;
  lVar2 = local_d8;
  local_a8 = CONCAT44(local_a8._4_4_,local_e0);
  if (local_a0 == local_d8) {
    local_98 = CONCAT44(local_98._4_4_,local_d0);
    if (local_a0 != 0) {
      LOCK();
      plVar1 = (long *)(local_a0 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_d8 = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
  }
  else {
    if (local_a0 != 0) {
      LOCK();
      plVar1 = (long *)(local_a0 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_a0 = 0;
        Memory::free_static((void *)(lVar24 + -0x10),false);
      }
    }
    local_a0 = local_d8;
    local_98 = CONCAT44(local_98._4_4_,local_d0);
  }
  if ((StringName::configured != '\0') && (local_f0._8_8_ != 0)) {
    StringName::unref();
  }
  uVar23 = local_f0._0_8_;
  if (local_f0._0_8_ != 0) {
    LOCK();
    plVar1 = (long *)(local_f0._0_8_ + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_f0._0_8_ = 0;
      Memory::free_static((void *)(uVar23 + -0x10),false);
    }
  }
  local_70 = local_70 & 0xffffffff00000000;
  local_110 = 0;
  local_f8 = "WebRTCDataChannelExtension";
  local_f0._0_8_ = 0x1a;
  String::parse_latin1((StrRange *)&local_110);
  StringName::StringName((StringName *)&local_f8,(StrRange *)&local_110,false);
  ClassDB::add_virtual_method
            ((StringName *)&local_f8,(MethodInfo *)&local_c8,true,(Vector *)&local_108,false);
  if ((StringName::configured != '\0') && (local_f8 != (char *)0x0)) {
    StringName::unref();
  }
  lVar2 = local_110;
  if (local_110 != 0) {
    LOCK();
    plVar1 = (long *)(local_110 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_110 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  MethodInfo::~MethodInfo((MethodInfo *)&local_c8);
  CowData<String>::_unref((CowData<String> *)&local_100);
  local_b8 = (undefined1  [16])0x0;
  local_f8 = "_get_buffered_amount";
  local_100 = 0;
  local_c8 = (char *)0x0;
  local_c0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 6;
  local_90 = 1;
  local_88[0] = 0;
  local_78 = 0;
  local_70 = 0;
  local_60 = 0;
  local_f0._0_8_ = 0x14;
  String::parse_latin1((StrRange *)&local_c8);
  local_90 = CONCAT44(local_90._4_4_,0x8c);
  GetTypeInfo<int,void>::get_class_info((GetTypeInfo<int,void> *)&local_f8);
  PropertyInfo::operator=((PropertyInfo *)&local_c0,(PropertyInfo *)&local_f8);
  lVar2 = local_d8;
  if (local_d8 != 0) {
    LOCK();
    plVar1 = (long *)(local_d8 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_d8 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_f0._8_8_ != 0)) {
    StringName::unref();
  }
  uVar23 = local_f0._0_8_;
  if (local_f0._0_8_ != 0) {
    LOCK();
    plVar1 = (long *)(local_f0._0_8_ + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      auVar11._8_8_ = 0;
      auVar11._0_8_ = local_f0._8_8_;
      local_f0 = auVar11 << 0x40;
      Memory::free_static((void *)(uVar23 + -0x10),false);
    }
  }
  local_70 = CONCAT44(local_70._4_4_,3);
  local_110 = 0;
  local_f8 = "WebRTCDataChannelExtension";
  local_f0._0_8_ = 0x1a;
  String::parse_latin1((StrRange *)&local_110);
  StringName::StringName((StringName *)&local_f8,(StrRange *)&local_110,false);
  ClassDB::add_virtual_method
            ((StringName *)&local_f8,(MethodInfo *)&local_c8,true,(Vector *)&local_108,false);
  if ((StringName::configured != '\0') && (local_f8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_110);
  MethodInfo::~MethodInfo((MethodInfo *)&local_c8);
  CowData<String>::_unref((CowData<String> *)&local_100);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* WebRTCDataChannelExtension::put_packet(unsigned char const*, int) */

ulong __thiscall
WebRTCDataChannelExtension::put_packet(WebRTCDataChannelExtension *this,uchar *param_1,int param_2)

{
  undefined4 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  code *pcVar6;
  long in_FS_OFFSET;
  undefined8 local_158;
  uchar *local_150;
  char *local_148;
  long local_140 [5];
  uint local_118 [2];
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined1 local_108 [16];
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8 [2];
  undefined8 local_c8;
  ulong local_c0;
  Vector<int> local_b8 [8];
  undefined8 local_b0;
  Variant *local_a8;
  Variant *pVStack_a0;
  int local_98 [8];
  uchar **local_78;
  char **ppcStack_70;
  int local_60 [8];
  long local_40;
  
  plVar5 = *(long **)(this + 0x98);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (plVar5 != (long *)0x0) {
    local_118[0] = 0;
    local_118[1] = 0;
    uStack_110 = 0;
    Variant::Variant((Variant *)&local_78,(ulong)param_1);
    Variant::Variant((Variant *)local_60,param_2);
    local_a8 = (Variant *)&local_78;
    pVStack_a0 = (Variant *)local_60;
    (**(code **)(*plVar5 + 0x60))((Variant *)local_98,plVar5,this + 0x338,&local_a8,2,local_118);
    if (local_118[0] == 0) {
      uVar2 = Variant::operator_cast_to_long((Variant *)local_98);
      if (Variant::needs_deinit[local_98[0]] != '\0') {
        Variant::_clear_internal();
        uVar2 = uVar2 & 0xffffffff;
      }
      if (Variant::needs_deinit[local_60[0]] != '\0') {
        Variant::_clear_internal();
        uVar2 = uVar2 & 0xffffffff;
      }
      if (Variant::needs_deinit[(int)local_78] != '\0') {
        Variant::_clear_internal();
        uVar2 = uVar2 & 0xffffffff;
      }
      goto LAB_001039de;
    }
    if (Variant::needs_deinit[local_98[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[local_60[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
    }
  }
  if ((*(long *)(this + 8) != 0) && (this[0x340] == (WebRTCDataChannelExtension)0x0)) {
    local_118[0] = 0;
    local_118[1] = 0;
    local_108 = (undefined1  [16])0x0;
    local_148 = "_put_packet";
    uStack_110 = 0;
    uStack_10c = 0;
    local_f8 = 0;
    local_f0 = 0;
    local_e8 = 6;
    local_e0 = 1;
    local_d8[0] = 0;
    local_c8 = 0;
    local_c0 = 0;
    local_b0 = 0;
    local_140[0] = 0xb;
    String::parse_latin1((StrRange *)local_118);
    local_e0 = CONCAT44(local_e0._4_4_,8);
    GetTypeInfo<Error,void>::get_class_info((GetTypeInfo<Error,void> *)&local_148);
    PropertyInfo::operator=((PropertyInfo *)&uStack_110,(PropertyInfo *)&local_148);
    PropertyInfo::~PropertyInfo((PropertyInfo *)&local_148);
    local_c0 = local_c0 & 0xffffffff00000000;
    GetTypeInfo<GDExtensionConstPtr<unsigned_char_const>,void>::get_class_info
              ((GetTypeInfo<GDExtensionConstPtr<unsigned_char_const>,void> *)&local_148);
    List<PropertyInfo,DefaultAllocator>::push_back
              ((List<PropertyInfo,DefaultAllocator> *)local_d8,(PropertyInfo *)&local_148);
    PropertyInfo::~PropertyInfo((PropertyInfo *)&local_148);
    Vector<int>::push_back(local_b8,0);
    GetTypeInfo<int,void>::get_class_info((GetTypeInfo<int,void> *)&local_148);
    List<PropertyInfo,DefaultAllocator>::push_back
              ((List<PropertyInfo,DefaultAllocator> *)local_d8,(PropertyInfo *)&local_148);
    PropertyInfo::~PropertyInfo((PropertyInfo *)&local_148);
    Vector<int>::push_back(local_b8,3);
    uVar1 = MethodInfo::get_compatibility_hash();
    *(undefined8 *)(this + 0x348) = 0;
    lVar4 = *(long *)(this + 8);
    pcVar6 = *(code **)(lVar4 + 0xd8);
    if (((pcVar6 == (code *)0x0) || (*(long *)(lVar4 + 0xe0) == 0)) &&
       (pcVar6 = *(code **)(lVar4 + 0xd0), pcVar6 == (code *)0x0)) {
      local_158 = 0;
      String::parse_latin1((String *)&local_158,"WebRTCDataChannelExtension");
      StringName::StringName((StringName *)&local_150,(String *)&local_158,false);
      ClassDB::get_virtual_method_compatibility_hashes
                ((StringName *)&local_148,(StringName *)&local_150);
      if (local_140[0] == 0) {
        lVar4 = 0;
        CowData<unsigned_int>::_unref((CowData<unsigned_int> *)local_140);
        if (StringName::configured != '\0') goto LAB_00103d6b;
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_158);
LAB_00103d8a:
        lVar4 = *(long *)(this + 8);
        pcVar6 = *(code **)(lVar4 + 200);
        if (((pcVar6 == (code *)0x0) || (*(long *)(lVar4 + 0xe0) == 0)) &&
           (pcVar6 = *(code **)(lVar4 + 0xc0), pcVar6 == (code *)0x0)) goto LAB_00103c6c;
        uVar3 = (*pcVar6)(*(undefined8 *)(lVar4 + 0xa0),this + 0x338);
        *(undefined8 *)(this + 0x348) = uVar3;
      }
      else {
        lVar4 = *(long *)(local_140[0] + -8);
        CowData<unsigned_int>::_unref((CowData<unsigned_int> *)local_140);
        if (StringName::configured != '\0') {
LAB_00103d6b:
          if (local_150 != (uchar *)0x0) {
            StringName::unref();
          }
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_158);
        if (lVar4 == 0) goto LAB_00103d8a;
      }
      lVar4 = *(long *)(this + 8);
    }
    else {
      uVar3 = (*pcVar6)(*(undefined8 *)(lVar4 + 0xa0),this + 0x338,uVar1);
      *(undefined8 *)(this + 0x348) = uVar3;
      lVar4 = *(long *)(this + 8);
    }
LAB_00103c6c:
    if (*(char *)(lVar4 + 0x29) != '\0') {
      plVar5 = (long *)operator_new(0x18,"");
      *plVar5 = (long)(this + 0x348);
      plVar5[1] = (long)(this + 0x340);
      plVar5[2] = *(long *)(this + 0x168);
      *(long **)(this + 0x168) = plVar5;
    }
    this[0x340] = (WebRTCDataChannelExtension)0x1;
    MethodInfo::~MethodInfo((MethodInfo *)local_118);
  }
  pcVar6 = *(code **)(this + 0x348);
  if (pcVar6 == (code *)0x0) {
    if (put_packet(unsigned_char_const*,int)::first_print != '\0') {
      _err_print_error("put_packet","modules/webrtc/webrtc_data_channel_extension.cpp",0x49,
                       "WebRTCDataChannelExtension::_put_packet_native is unimplemented!",0,1);
      put_packet(unsigned_char_const*,int)::first_print = '\0';
    }
    uVar2 = 1;
  }
  else {
    ppcStack_70 = &local_148;
    local_78 = &local_150;
    local_150 = param_1;
    local_148 = (char *)(long)param_2;
    if (*(code **)(*(long *)(this + 8) + 0xe0) == (code *)0x0) {
      (*pcVar6)(*(undefined8 *)(this + 0x10),&local_78,local_118);
      uVar2 = (ulong)local_118[0];
    }
    else {
      (**(code **)(*(long *)(this + 8) + 0xe0))
                (*(undefined8 *)(this + 0x10),this + 0x338,pcVar6,&local_78,local_118);
      uVar2 = (ulong)local_118[0];
    }
  }
LAB_001039de:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* WebRTCDataChannelExtension::get_packet(unsigned char const**, int&) */

ulong __thiscall
WebRTCDataChannelExtension::get_packet
          (WebRTCDataChannelExtension *this,uchar **param_1,int *param_2)

{
  undefined4 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  code *pcVar6;
  long in_FS_OFFSET;
  undefined8 local_158;
  uchar **local_150;
  int *local_148;
  long local_140 [5];
  uint local_118 [2];
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined1 local_108 [16];
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8 [2];
  undefined8 local_c8;
  ulong local_c0;
  Vector<int> local_b8 [8];
  undefined8 local_b0;
  Variant *local_a8;
  Variant *pVStack_a0;
  int local_98 [8];
  uchar ***local_78;
  int **ppiStack_70;
  int local_60 [8];
  long local_40;
  
  plVar5 = *(long **)(this + 0x98);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (plVar5 != (long *)0x0) {
    local_118[0] = 0;
    local_118[1] = 0;
    uStack_110 = 0;
    Variant::Variant((Variant *)&local_78,(ulong)param_1);
    Variant::Variant((Variant *)local_60,(ulong)param_2);
    local_a8 = (Variant *)&local_78;
    pVStack_a0 = (Variant *)local_60;
    (**(code **)(*plVar5 + 0x60))((Variant *)local_98,plVar5,this + 800,&local_a8,2,local_118);
    if (local_118[0] == 0) {
      uVar2 = Variant::operator_cast_to_long((Variant *)local_98);
      if (Variant::needs_deinit[local_98[0]] != '\0') {
        Variant::_clear_internal();
        uVar2 = uVar2 & 0xffffffff;
      }
      if (Variant::needs_deinit[local_60[0]] != '\0') {
        Variant::_clear_internal();
        uVar2 = uVar2 & 0xffffffff;
      }
      if (Variant::needs_deinit[(int)local_78] != '\0') {
        Variant::_clear_internal();
        uVar2 = uVar2 & 0xffffffff;
      }
      goto LAB_00103fbf;
    }
    if (Variant::needs_deinit[local_98[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[local_60[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
    }
  }
  if ((*(long *)(this + 8) != 0) && (this[0x328] == (WebRTCDataChannelExtension)0x0)) {
    local_118[0] = 0;
    local_118[1] = 0;
    local_108 = (undefined1  [16])0x0;
    local_148 = (int *)0x10488c;
    uStack_110 = 0;
    uStack_10c = 0;
    local_f8 = 0;
    local_f0 = 0;
    local_e8 = 6;
    local_e0 = 1;
    local_d8[0] = 0;
    local_c8 = 0;
    local_c0 = 0;
    local_b0 = 0;
    local_140[0] = 0xb;
    String::parse_latin1((StrRange *)local_118);
    local_e0 = CONCAT44(local_e0._4_4_,8);
    GetTypeInfo<Error,void>::get_class_info((GetTypeInfo<Error,void> *)&local_148);
    PropertyInfo::operator=((PropertyInfo *)&uStack_110,(PropertyInfo *)&local_148);
    PropertyInfo::~PropertyInfo((PropertyInfo *)&local_148);
    local_c0 = local_c0 & 0xffffffff00000000;
    GetTypeInfo<GDExtensionConstPtr<unsigned_char_const*>,void>::get_class_info
              ((GetTypeInfo<GDExtensionConstPtr<unsigned_char_const*>,void> *)&local_148);
    List<PropertyInfo,DefaultAllocator>::push_back
              ((List<PropertyInfo,DefaultAllocator> *)local_d8,(PropertyInfo *)&local_148);
    PropertyInfo::~PropertyInfo((PropertyInfo *)&local_148);
    Vector<int>::push_back(local_b8,0);
    GetTypeInfo<GDExtensionPtr<int>,void>::get_class_info
              ((GetTypeInfo<GDExtensionPtr<int>,void> *)&local_148);
    List<PropertyInfo,DefaultAllocator>::push_back
              ((List<PropertyInfo,DefaultAllocator> *)local_d8,(PropertyInfo *)&local_148);
    PropertyInfo::~PropertyInfo((PropertyInfo *)&local_148);
    Vector<int>::push_back(local_b8,0);
    uVar1 = MethodInfo::get_compatibility_hash();
    *(undefined8 *)(this + 0x330) = 0;
    lVar4 = *(long *)(this + 8);
    pcVar6 = *(code **)(lVar4 + 0xd8);
    if (((pcVar6 == (code *)0x0) || (*(long *)(lVar4 + 0xe0) == 0)) &&
       (pcVar6 = *(code **)(lVar4 + 0xd0), pcVar6 == (code *)0x0)) {
      local_158 = 0;
      String::parse_latin1((String *)&local_158,"WebRTCDataChannelExtension");
      StringName::StringName((StringName *)&local_150,(String *)&local_158,false);
      ClassDB::get_virtual_method_compatibility_hashes
                ((StringName *)&local_148,(StringName *)&local_150);
      if (local_140[0] == 0) {
        lVar4 = 0;
        CowData<unsigned_int>::_unref((CowData<unsigned_int> *)local_140);
        if (StringName::configured != '\0') goto LAB_0010434b;
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_158);
LAB_0010436a:
        lVar4 = *(long *)(this + 8);
        pcVar6 = *(code **)(lVar4 + 200);
        if (((pcVar6 == (code *)0x0) || (*(long *)(lVar4 + 0xe0) == 0)) &&
           (pcVar6 = *(code **)(lVar4 + 0xc0), pcVar6 == (code *)0x0)) goto LAB_00104249;
        uVar3 = (*pcVar6)(*(undefined8 *)(lVar4 + 0xa0),this + 800);
        *(undefined8 *)(this + 0x330) = uVar3;
      }
      else {
        lVar4 = *(long *)(local_140[0] + -8);
        CowData<unsigned_int>::_unref((CowData<unsigned_int> *)local_140);
        if (StringName::configured != '\0') {
LAB_0010434b:
          if (local_150 != (uchar **)0x0) {
            StringName::unref();
          }
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_158);
        if (lVar4 == 0) goto LAB_0010436a;
      }
      lVar4 = *(long *)(this + 8);
    }
    else {
      uVar3 = (*pcVar6)(*(undefined8 *)(lVar4 + 0xa0),this + 800,uVar1);
      *(undefined8 *)(this + 0x330) = uVar3;
      lVar4 = *(long *)(this + 8);
    }
LAB_00104249:
    if (*(char *)(lVar4 + 0x29) != '\0') {
      plVar5 = (long *)operator_new(0x18,"");
      *plVar5 = (long)(this + 0x330);
      plVar5[1] = (long)(this + 0x328);
      plVar5[2] = *(long *)(this + 0x168);
      *(long **)(this + 0x168) = plVar5;
    }
    this[0x328] = (WebRTCDataChannelExtension)0x1;
    MethodInfo::~MethodInfo((MethodInfo *)local_118);
  }
  pcVar6 = *(code **)(this + 0x330);
  if (pcVar6 == (code *)0x0) {
    if (get_packet(unsigned_char_const**,int&)::first_print != '\0') {
      _err_print_error("get_packet","modules/webrtc/webrtc_data_channel_extension.cpp",0x40,
                       "WebRTCDataChannelExtension::_get_packet_native is unimplemented!",0,1);
      get_packet(unsigned_char_const**,int&)::first_print = '\0';
    }
    uVar2 = 1;
  }
  else {
    ppiStack_70 = &local_148;
    local_78 = &local_150;
    local_150 = param_1;
    local_148 = param_2;
    if (*(code **)(*(long *)(this + 8) + 0xe0) == (code *)0x0) {
      (*pcVar6)(*(undefined8 *)(this + 0x10),&local_78,local_118);
      uVar2 = (ulong)local_118[0];
    }
    else {
      (**(code **)(*(long *)(this + 8) + 0xe0))
                (*(undefined8 *)(this + 0x10),this + 800,pcVar6,&local_78,local_118);
      uVar2 = (ulong)local_118[0];
    }
  }
LAB_00103fbf:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
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



/* WebRTCDataChannelExtension::is_class_ptr(void*) const */

uint __thiscall
WebRTCDataChannelExtension::is_class_ptr(WebRTCDataChannelExtension *this,void *param_1)

{
  return (uint)CONCAT71(0x10fa,(undefined4 *)param_1 ==
                               &WebRTCDataChannel::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10fa,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10fa,(undefined4 *)param_1 == &PacketPeer::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10fa,(undefined4 *)param_1 == &RefCounted::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10fa,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* WebRTCDataChannelExtension::_getv(StringName const&, Variant&) const */

undefined8 WebRTCDataChannelExtension::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* WebRTCDataChannelExtension::_setv(StringName const&, Variant const&) */

undefined8 WebRTCDataChannelExtension::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* WebRTCDataChannelExtension::_validate_propertyv(PropertyInfo&) const */

void WebRTCDataChannelExtension::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* WebRTCDataChannelExtension::_property_can_revertv(StringName const&) const */

undefined8 WebRTCDataChannelExtension::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* WebRTCDataChannelExtension::_property_get_revertv(StringName const&, Variant&) const */

undefined8 WebRTCDataChannelExtension::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* WebRTCDataChannelExtension::_notificationv(int, bool) */

void WebRTCDataChannelExtension::_notificationv(int param_1,bool param_2)

{
  return;
}



/* WebRTCDataChannelExtension::~WebRTCDataChannelExtension() */

void __thiscall
WebRTCDataChannelExtension::~WebRTCDataChannelExtension(WebRTCDataChannelExtension *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(undefined ***)this = &PTR__initialize_classv_0010f868;
  if (bVar1) {
    if (*(long *)(this + 0x338) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001047c8;
    }
    if (*(long *)(this + 800) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001047c8;
    }
    if (*(long *)(this + 0x308) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001047c8;
    }
    if (*(long *)(this + 0x2f0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001047c8;
    }
    if (*(long *)(this + 0x2d8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001047c8;
    }
    if (*(long *)(this + 0x2c0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001047c8;
    }
    if (*(long *)(this + 0x2a8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001047c8;
    }
    if (*(long *)(this + 0x290) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001047c8;
    }
    if (*(long *)(this + 0x278) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001047c8;
    }
    if (*(long *)(this + 0x260) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001047c8;
    }
    if (*(long *)(this + 0x248) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001047c8;
    }
    if (*(long *)(this + 0x230) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001047c8;
    }
    if (*(long *)(this + 0x218) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001047c8;
    }
    if (*(long *)(this + 0x200) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001047c8;
    }
    if (*(long *)(this + 0x1e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001047c8;
    }
    if (*(long *)(this + 0x1d0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001047c8;
    }
    if (*(long *)(this + 0x1b8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001047c8;
    }
    if (*(long *)(this + 0x1a0) != 0) {
      StringName::unref();
    }
  }
LAB_001047c8:
  WebRTCDataChannel::~WebRTCDataChannel((WebRTCDataChannel *)this);
  return;
}



/* WebRTCDataChannelExtension::~WebRTCDataChannelExtension() */

void __thiscall
WebRTCDataChannelExtension::~WebRTCDataChannelExtension(WebRTCDataChannelExtension *this)

{
  ~WebRTCDataChannelExtension(this);
  operator_delete(this,0x350);
  return;
}



/* CowData<int>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<int>::_copy_on_write(void)

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



/* WebRTCDataChannelExtension::_get_class_namev() const */

undefined8 * WebRTCDataChannelExtension::_get_class_namev(void)

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
LAB_00104953:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00104953;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"WebRTCDataChannelExtension")
      ;
      goto LAB_001049be;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"WebRTCDataChannelExtension");
LAB_001049be:
  return &_get_class_namev()::_class_name_static;
}



/* WebRTCDataChannelExtension::get_class() const */

void WebRTCDataChannelExtension::get_class(void)

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



/* PropertyInfo::~PropertyInfo() */

void __thiscall PropertyInfo::~PropertyInfo(PropertyInfo *this)

{
  long *plVar1;
  long lVar2;
  
  if (*(long *)(this + 0x20) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x20) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x20);
      *(undefined8 *)(this + 0x20) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (*(long *)(this + 0x10) != 0)) {
    StringName::unref();
  }
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



/* GetTypeInfo<bool, void>::get_class_info() */

GetTypeInfo<bool,void> * __thiscall
GetTypeInfo<bool,void>::get_class_info(GetTypeInfo<bool,void> *this)

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
  *(undefined4 *)this = 1;
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
      StringName::StringName((StringName *)&local_48,(CowData<char32_t> *)(this + 0x20),false);
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
      goto joined_r0x00104cfc;
    }
  }
  StringName::operator=((StringName *)(this + 0x10),(StringName *)&local_50);
  lVar2 = local_58;
joined_r0x00104cfc:
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



/* GetTypeInfo<int, void>::get_class_info() */

GetTypeInfo<int,void> * __thiscall
GetTypeInfo<int,void>::get_class_info(GetTypeInfo<int,void> *this)

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
  *(undefined4 *)this = 2;
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
      StringName::StringName((StringName *)&local_48,(CowData<char32_t> *)(this + 0x20),false);
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
      goto joined_r0x00104e7c;
    }
  }
  StringName::operator=((StringName *)(this + 0x10),(StringName *)&local_50);
  lVar2 = local_58;
joined_r0x00104e7c:
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
      StringName::StringName((StringName *)&local_48,(CowData<char32_t> *)(this + 0x20),false);
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
      goto joined_r0x00104ffc;
    }
  }
  StringName::operator=((StringName *)(this + 0x10),(StringName *)&local_50);
  lVar2 = local_58;
joined_r0x00104ffc:
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
LAB_001051b8:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_001051b8;
    StringName::StringName((StringName *)&local_80,(CowData<char32_t> *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)pLVar6;
      local_68 = local_80;
      goto joined_r0x001051d6;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)pLVar6;
joined_r0x001051d6:
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



/* PacketPeer::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall PacketPeer::_get_property_listv(PacketPeer *this,List *param_1,bool param_2)

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
  local_78 = "PacketPeer";
  local_70 = 10;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "PacketPeer";
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
LAB_001055b8:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_001055b8;
    StringName::StringName((StringName *)&local_80,(CowData<char32_t> *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x001055d5;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x001055d5:
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
  StringName::StringName((StringName *)&local_78,"PacketPeer",false);
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



/* WebRTCDataChannel::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall
WebRTCDataChannel::_get_property_listv(WebRTCDataChannel *this,List *param_1,bool param_2)

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
    PacketPeer::_get_property_listv((PacketPeer *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "WebRTCDataChannel";
  local_70 = 0x11;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "WebRTCDataChannel";
  local_98 = 0;
  local_70 = 0x11;
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
LAB_00105a18:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00105a18;
    StringName::StringName((StringName *)&local_80,(CowData<char32_t> *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x00105a35;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x00105a35:
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
  StringName::StringName((StringName *)&local_78,"WebRTCDataChannel",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      PacketPeer::_get_property_listv((PacketPeer *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WebRTCDataChannelExtension::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool)
   const */

void __thiscall
WebRTCDataChannelExtension::_get_property_listv
          (WebRTCDataChannelExtension *this,List *param_1,bool param_2)

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
    WebRTCDataChannel::_get_property_listv((WebRTCDataChannel *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "WebRTCDataChannelExtension";
  local_70 = 0x1a;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "WebRTCDataChannelExtension";
  local_98 = 0;
  local_70 = 0x1a;
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
LAB_00105e68:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00105e68;
    StringName::StringName((StringName *)&local_80,(CowData<char32_t> *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x00105e85;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x00105e85:
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
  StringName::StringName((StringName *)&local_78,"WebRTCDataChannelExtension",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      WebRTCDataChannel::_get_property_listv((WebRTCDataChannel *)this,param_1,true);
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



/* GetTypeInfo<GDExtensionConstPtr<unsigned char const>, void>::get_class_info() */

GetTypeInfo<GDExtensionConstPtr<unsigned_char_const>,void> * __thiscall
GetTypeInfo<GDExtensionConstPtr<unsigned_char_const>,void>::get_class_info
          (GetTypeInfo<GDExtensionConstPtr<unsigned_char_const>,void> *this)

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
  local_48 = "const uint8_t";
  local_40 = 0xd;
  String::parse_latin1((StrRange *)&local_58);
  *(undefined4 *)this = 2;
  *(undefined4 *)(this + 0x18) = 0x1e;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined1 (*) [16])(this + 8) = (undefined1  [16])0x0;
  if (local_58 == 0) {
    *(undefined4 *)(this + 0x28) = 6;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(this + 0x20),(CowData *)&local_58);
    *(undefined4 *)(this + 0x28) = 6;
    if (*(int *)(this + 0x18) == 0x11) {
      StringName::StringName((StringName *)&local_48,(CowData<char32_t> *)(this + 0x20),false);
      if (*(char **)(this + 0x10) == local_48) {
        lVar2 = local_58;
        if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
          StringName::unref();
          lVar2 = local_58;
        }
      }
      else {
        StringName::unref();
        *(char **)(this + 0x10) = local_48;
        lVar2 = local_58;
      }
      goto joined_r0x0010662c;
    }
  }
  StringName::operator=((StringName *)(this + 0x10),(StringName *)&local_50);
  lVar2 = local_58;
joined_r0x0010662c:
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



/* GetTypeInfo<GDExtensionPtr<int>, void>::get_class_info() */

GetTypeInfo<GDExtensionPtr<int>,void> * __thiscall
GetTypeInfo<GDExtensionPtr<int>,void>::get_class_info(GetTypeInfo<GDExtensionPtr<int>,void> *this)

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
  local_48 = "int32_t";
  local_40 = 7;
  String::parse_latin1((StrRange *)&local_58);
  *(undefined4 *)this = 2;
  *(undefined4 *)(this + 0x18) = 0x1e;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined1 (*) [16])(this + 8) = (undefined1  [16])0x0;
  if (local_58 == 0) {
    *(undefined4 *)(this + 0x28) = 6;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(this + 0x20),(CowData *)&local_58);
    *(undefined4 *)(this + 0x28) = 6;
    if (*(int *)(this + 0x18) == 0x11) {
      StringName::StringName((StringName *)&local_48,(CowData<char32_t> *)(this + 0x20),false);
      if (*(char **)(this + 0x10) == local_48) {
        lVar2 = local_58;
        if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
          StringName::unref();
          lVar2 = local_58;
        }
      }
      else {
        StringName::unref();
        *(char **)(this + 0x10) = local_48;
        lVar2 = local_58;
      }
      goto joined_r0x001067bc;
    }
  }
  StringName::operator=((StringName *)(this + 0x10),(StringName *)&local_50);
  lVar2 = local_58;
joined_r0x001067bc:
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



/* GetTypeInfo<GDExtensionConstPtr<unsigned char const*>, void>::get_class_info() */

GetTypeInfo<GDExtensionConstPtr<unsigned_char_const*>,void> * __thiscall
GetTypeInfo<GDExtensionConstPtr<unsigned_char_const*>,void>::get_class_info
          (GetTypeInfo<GDExtensionConstPtr<unsigned_char_const*>,void> *this)

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
  local_48 = "const uint8_t *";
  local_40 = 0xf;
  String::parse_latin1((StrRange *)&local_58);
  *(undefined4 *)this = 2;
  *(undefined4 *)(this + 0x18) = 0x1e;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined1 (*) [16])(this + 8) = (undefined1  [16])0x0;
  if (local_58 == 0) {
    *(undefined4 *)(this + 0x28) = 6;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(this + 0x20),(CowData *)&local_58);
    *(undefined4 *)(this + 0x28) = 6;
    if (*(int *)(this + 0x18) == 0x11) {
      StringName::StringName((StringName *)&local_48,(CowData<char32_t> *)(this + 0x20),false);
      if (*(char **)(this + 0x10) == local_48) {
        lVar2 = local_58;
        if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
          StringName::unref();
          lVar2 = local_58;
        }
      }
      else {
        StringName::unref();
        *(char **)(this + 0x10) = local_48;
        lVar2 = local_58;
      }
      goto joined_r0x0010694c;
    }
  }
  StringName::operator=((StringName *)(this + 0x10),(StringName *)&local_50);
  lVar2 = local_58;
joined_r0x0010694c:
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



/* WebRTCDataChannel::is_class(String const&) const */

undefined8 __thiscall WebRTCDataChannel::is_class(WebRTCDataChannel *this,String *param_1)

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
            if (lVar5 == 0) goto LAB_00106a4f;
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
LAB_00106a4f:
    cVar6 = String::operator==((String *)param_1,(StrRange *)&local_60);
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
    if (cVar6 != '\0') goto LAB_00106b03;
  }
  cVar6 = String::operator==((String *)param_1,"WebRTCDataChannel");
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
              if (lVar5 == 0) goto LAB_00106c4b;
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
LAB_00106c4b:
      cVar6 = String::operator==((String *)param_1,(StrRange *)&local_60);
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
      if (cVar6 != '\0') goto LAB_00106b03;
    }
    cVar6 = String::operator==((String *)param_1,"PacketPeer");
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
                if (lVar5 == 0) goto LAB_00106d2b;
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
LAB_00106d2b:
        cVar6 = String::operator==((String *)param_1,(StrRange *)&local_60);
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
        if (cVar6 != '\0') goto LAB_00106b03;
      }
      cVar6 = String::operator==((String *)param_1,"RefCounted");
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
              if (*(long *)(lVar4 + 0x10) != 0) {
                CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar4 + 0x10));
              }
            }
            else {
              local_50 = strlen(pcVar3);
              local_58 = pcVar3;
              String::parse_latin1((StrRange *)&local_60);
            }
          }
          cVar6 = String::operator==((String *)param_1,(StrRange *)&local_60);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
          if (cVar6 != '\0') goto LAB_00106b03;
        }
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          uVar8 = String::operator==((String *)param_1,"Object");
          return uVar8;
        }
        goto LAB_00106e1d;
      }
    }
  }
LAB_00106b03:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_00106e1d:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WebRTCDataChannelExtension::is_class(String const&) const */

undefined8 __thiscall
WebRTCDataChannelExtension::is_class(WebRTCDataChannelExtension *this,String *param_1)

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
            if (lVar4 == 0) goto LAB_00106e9f;
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
LAB_00106e9f:
    cVar5 = String::operator==((String *)param_1,(StrRange *)&local_60);
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
    if (cVar5 != '\0') goto LAB_00106f53;
  }
  cVar5 = String::operator==((String *)param_1,"WebRTCDataChannelExtension");
  if (cVar5 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = WebRTCDataChannel::is_class((WebRTCDataChannel *)this,param_1);
      return uVar7;
    }
  }
  else {
LAB_00106f53:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
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



/* godot::details::enum_qualified_name_to_class_info_name(String const&) */

details * __thiscall
godot::details::enum_qualified_name_to_class_info_name(details *this,String *param_1)

{
  long *plVar1;
  code *pcVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long in_FS_OFFSET;
  long local_60;
  char local_58 [8];
  long local_50;
  undefined *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  String::split(local_58,SUB81(param_1,0),0x10705a);
  if ((local_50 != 0) && (2 < *(long *)(local_50 + -8))) {
    local_60 = 0;
    local_48 = &_LC19;
    local_40 = 1;
    String::parse_latin1((StrRange *)&local_60);
    if (local_50 == 0) {
      lVar5 = 0;
      lVar4 = -2;
    }
    else {
      lVar5 = *(long *)(local_50 + -8);
      lVar4 = lVar5 + -2;
      if (-1 < lVar4) {
        String::operator+((String *)&local_48,(String *)(local_50 + lVar4 * 8));
        String::operator+((String *)this,(String *)&local_48);
        puVar3 = local_48;
        lVar5 = local_60;
        if (local_48 != (undefined *)0x0) {
          LOCK();
          plVar1 = (long *)(local_48 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_48 = (undefined *)0x0;
            Memory::free_static(puVar3 + -0x10,false);
            lVar5 = local_60;
          }
        }
        goto joined_r0x00107118;
      }
    }
    _err_print_index_error
              ("get","./core/templates/cowdata.h",0xdb,lVar4,lVar5,"p_index","size()","",false,true)
    ;
    _err_flush_stdout();
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  local_60 = 0;
  local_48 = &_LC19;
  local_40 = 1;
  String::parse_latin1((StrRange *)&local_60);
  String::join((Vector *)this);
  lVar5 = local_60;
joined_r0x00107118:
  local_60 = lVar5;
  if (lVar5 != 0) {
    LOCK();
    plVar1 = (long *)(lVar5 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_60 = 0;
      Memory::free_static((void *)(lVar5 + -0x10),false);
    }
  }
  CowData<String>::_unref((CowData<String> *)&local_50);
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return this;
}



/* GetTypeInfo<Error, void>::get_class_info() */

GetTypeInfo<Error,void> * __thiscall
GetTypeInfo<Error,void>::get_class_info(GetTypeInfo<Error,void> *this)

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
  local_48 = "Error";
  local_40 = 5;
  String::parse_latin1((StrRange *)&local_58);
  godot::details::enum_qualified_name_to_class_info_name((details *)&local_50,(String *)&local_58);
  StringName::StringName((StringName *)&local_48,(details *)&local_50,false);
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



/* GetTypeInfo<WebRTCDataChannel::WriteMode, void>::get_class_info() */

GetTypeInfo<WebRTCDataChannel::WriteMode,void> * __thiscall
GetTypeInfo<WebRTCDataChannel::WriteMode,void>::get_class_info
          (GetTypeInfo<WebRTCDataChannel::WriteMode,void> *this)

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
  local_48 = "WebRTCDataChannel::WriteMode";
  local_40 = 0x1c;
  String::parse_latin1((StrRange *)&local_58);
  godot::details::enum_qualified_name_to_class_info_name((details *)&local_50,(String *)&local_58);
  StringName::StringName((StringName *)&local_48,(details *)&local_50,false);
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



/* GetTypeInfo<WebRTCDataChannel::ChannelState, void>::get_class_info() */

GetTypeInfo<WebRTCDataChannel::ChannelState,void> * __thiscall
GetTypeInfo<WebRTCDataChannel::ChannelState,void>::get_class_info
          (GetTypeInfo<WebRTCDataChannel::ChannelState,void> *this)

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
  local_48 = "WebRTCDataChannel::ChannelState";
  local_40 = 0x1f;
  String::parse_latin1((StrRange *)&local_58);
  godot::details::enum_qualified_name_to_class_info_name((details *)&local_50,(String *)&local_58);
  StringName::StringName((StringName *)&local_48,(details *)&local_50,false);
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
LAB_00107a20:
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
  if (lVar10 == 0) goto LAB_00107a20;
  if (param_1 <= lVar6) {
    lVar6 = *(long *)this;
    uVar8 = param_1;
    while (lVar6 != 0) {
      if (*(ulong *)(lVar6 + -8) <= uVar8) {
LAB_001078f9:
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
        if (*(ulong *)(lVar6 + -8) <= uVar8) goto LAB_001078f9;
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
    goto LAB_00107a76;
  }
  if (lVar10 == lVar7) {
LAB_0010799f:
    puVar9 = *(undefined8 **)this;
    if (puVar9 == (undefined8 *)0x0) {
LAB_00107a76:
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    lVar6 = puVar9[-1];
    if (param_1 <= lVar6) goto LAB_0010798a;
  }
  else {
    if (lVar6 != 0) {
      uVar4 = _realloc(this,lVar10);
      if ((int)uVar4 != 0) {
        return uVar4;
      }
      goto LAB_0010799f;
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
LAB_0010798a:
  puVar9[-1] = param_1;
  return 0;
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



/* WebRTCDataChannelExtension::close() */

void __thiscall WebRTCDataChannelExtension::close(WebRTCDataChannelExtension *this)

{
  char *__s;
  undefined4 uVar1;
  size_t sVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  code *UNRECOVERED_JUMPTABLE;
  long in_FS_OFFSET;
  CowData<char32_t> *local_110;
  undefined8 local_108;
  long local_100;
  undefined8 local_f8;
  String local_f0 [8];
  undefined8 local_e8;
  long local_e0;
  char *local_d8;
  long local_d0;
  int local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined1 local_b8 [16];
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_60;
  int local_58 [6];
  long local_40;
  
  plVar5 = *(long **)(this + 0x98);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (plVar5 == (long *)0x0) {
LAB_00107cdb:
    if ((*(long *)(this + 8) != 0) && (this[0x1c0] == (WebRTCDataChannelExtension)0x0)) {
      local_c8 = 0;
      uStack_c4 = 0;
      local_b8 = (undefined1  [16])0x0;
      local_d8 = "_close";
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
      local_d0 = 6;
      String::parse_latin1((StrRange *)&local_c8);
      local_90 = CONCAT44(local_90._4_4_,0x88);
      uVar1 = MethodInfo::get_compatibility_hash();
      lVar4 = *(long *)(this + 8);
      *(undefined8 *)(this + 0x1c8) = 0;
      UNRECOVERED_JUMPTABLE = *(code **)(lVar4 + 0xd8);
      if (((UNRECOVERED_JUMPTABLE == (code *)0x0) || (*(long *)(lVar4 + 0xe0) == 0)) &&
         (UNRECOVERED_JUMPTABLE = *(code **)(lVar4 + 0xd0), UNRECOVERED_JUMPTABLE == (code *)0x0)) {
        local_e8 = 0;
        String::parse_latin1((String *)&local_e8,"WebRTCDataChannelExtension");
        StringName::StringName((StringName *)&local_e0,(String *)&local_e8,false);
        ClassDB::get_virtual_method_compatibility_hashes
                  ((StringName *)&local_d8,(StringName *)&local_e0);
        if (local_d0 == 0) {
          CowData<unsigned_int>::_unref((CowData<unsigned_int> *)&local_d0);
          if ((StringName::configured != '\0') && (lVar4 = 0, local_e0 != 0)) goto LAB_001081e4;
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
LAB_001081f9:
          lVar4 = *(long *)(this + 8);
          UNRECOVERED_JUMPTABLE = *(code **)(lVar4 + 200);
          if (((UNRECOVERED_JUMPTABLE == (code *)0x0) || (*(long *)(lVar4 + 0xe0) == 0)) &&
             (UNRECOVERED_JUMPTABLE = *(code **)(lVar4 + 0xc0), UNRECOVERED_JUMPTABLE == (code *)0x0
             )) goto LAB_0010809a;
          uVar3 = (*UNRECOVERED_JUMPTABLE)(*(undefined8 *)(lVar4 + 0xa0),this + 0x1b8);
          *(undefined8 *)(this + 0x1c8) = uVar3;
        }
        else {
          lVar4 = *(long *)(local_d0 + -8);
          CowData<unsigned_int>::_unref((CowData<unsigned_int> *)&local_d0);
          if ((StringName::configured != '\0') && (local_e0 != 0)) {
LAB_001081e4:
            StringName::unref();
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
          if (lVar4 == 0) goto LAB_001081f9;
        }
        lVar4 = *(long *)(this + 8);
      }
      else {
        uVar3 = (*UNRECOVERED_JUMPTABLE)(*(undefined8 *)(lVar4 + 0xa0),this + 0x1b8,uVar1);
        *(undefined8 *)(this + 0x1c8) = uVar3;
        lVar4 = *(long *)(this + 8);
      }
LAB_0010809a:
      if (*(char *)(lVar4 + 0x29) != '\0') {
        plVar5 = (long *)operator_new(0x18,"");
        *plVar5 = (long)(this + 0x1c8);
        plVar5[1] = (long)(this + 0x1c0);
        plVar5[2] = *(long *)(this + 0x168);
        *(long **)(this + 0x168) = plVar5;
      }
      this[0x1c0] = (WebRTCDataChannelExtension)0x1;
      MethodInfo::~MethodInfo((MethodInfo *)&local_c8);
    }
    UNRECOVERED_JUMPTABLE = *(code **)(this + 0x1c8);
    if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
      if (*(code **)(*(long *)(this + 8) + 0xe0) == (code *)0x0) {
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00107f8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)(*(undefined8 *)(this + 0x10),0,0);
          return;
        }
      }
      else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00107d41. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*(long *)(this + 8) + 0xe0))
                  (*(undefined8 *)(this + 0x10),this + 0x1b8,UNRECOVERED_JUMPTABLE,0,0);
        return;
      }
      goto LAB_0010826c;
    }
    if (_gdvirtual__close_call()::first_print != '\0') {
      local_d8 = (char *)0x0;
      uStack_c0 = 0x23;
      uStack_bc = 0;
      local_c8 = 0x107bf8;
      uStack_c4 = 0;
      String::parse_latin1((StrRange *)&local_d8);
      local_c8 = 0x107bbd;
      uStack_c4 = 0;
      local_e8 = 0;
      uStack_c0 = 6;
      uStack_bc = 0;
      String::parse_latin1((StrRange *)&local_e8);
      local_c8 = 0x10705a;
      uStack_c4 = 0;
      local_f8 = 0;
      uStack_c0 = 2;
      uStack_bc = 0;
      String::parse_latin1((StrRange *)&local_f8);
      if (*(code **)(*(long *)this + 0x48) == get_class) {
        if (*(long *)(this + 8) == 0) {
          local_108 = 0;
          local_c8 = 0x104902;
          uStack_c4 = 0;
          uStack_c0 = 0x1a;
          uStack_bc = 0;
          String::parse_latin1((StrRange *)&local_108);
        }
        else {
          lVar4 = *(long *)(*(long *)(this + 8) + 0x20);
          if (lVar4 == 0) {
            local_108 = 0;
          }
          else {
            __s = *(char **)(lVar4 + 8);
            local_108 = 0;
            if (__s == (char *)0x0) {
              if (*(long *)(lVar4 + 0x10) != 0) {
                CowData<char32_t>::_ref((CowData<char32_t> *)&local_108,(CowData *)(lVar4 + 0x10));
              }
            }
            else {
              sVar2 = strlen(__s);
              local_c8 = (int)__s;
              uStack_c4 = (undefined4)((ulong)__s >> 0x20);
              uStack_c0 = (undefined4)sVar2;
              uStack_bc = (undefined4)(sVar2 >> 0x20);
              String::parse_latin1((StrRange *)&local_108);
            }
          }
        }
      }
      else {
        (**(code **)(*(long *)this + 0x48))(&local_108,this);
      }
      local_110 = (CowData<char32_t> *)&local_108;
      operator+((char *)&local_100,(String *)"Required virtual method ");
      String::operator+(local_f0,(String *)&local_100);
      String::operator+((String *)&local_e0,local_f0);
      String::operator+((String *)&local_c8,(String *)&local_e0);
      _err_print_error("_gdvirtual__close_call","modules/webrtc/webrtc_data_channel_extension.h",
                       0x30,(String *)&local_c8,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_f0);
      lVar4 = local_100;
      if (local_100 != 0) {
        LOCK();
        plVar5 = (long *)(local_100 + -0x10);
        *plVar5 = *plVar5 + -1;
        UNLOCK();
        if (*plVar5 == 0) {
          local_100 = 0;
          Memory::free_static((void *)(lVar4 + -0x10),false);
        }
      }
      CowData<char32_t>::_unref(local_110);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
      _gdvirtual__close_call()::first_print = '\0';
    }
  }
  else {
    local_c8 = 0;
    uStack_c4 = 0;
    uStack_c0 = 0;
    (**(code **)(*plVar5 + 0x60))(local_58,plVar5,this + 0x1b8,0,0,&local_c8);
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (local_c8 != 0) goto LAB_00107cdb;
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_0010826c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WebRTCDataChannelExtension::poll() */

ulong __thiscall WebRTCDataChannelExtension::poll(WebRTCDataChannelExtension *this)

{
  char *__s;
  undefined4 uVar1;
  size_t sVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  code *pcVar7;
  long in_FS_OFFSET;
  undefined8 local_128;
  long local_120;
  undefined8 local_118;
  long local_110;
  undefined8 local_108;
  long local_100;
  char *local_f8;
  long local_f0 [5];
  uint local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined1 local_b8 [16];
  undefined8 local_a8;
  undefined8 local_a0;
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
    (**(code **)(*plVar6 + 0x60))((Variant *)local_58,plVar6,this + 0x1a0,0,0,&local_c8);
    if (local_c8 == 0) {
      uVar3 = Variant::operator_cast_to_long((Variant *)local_58);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
        uVar3 = uVar3 & 0xffffffff;
      }
      goto LAB_001083a6;
    }
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
  }
  if ((*(long *)(this + 8) != 0) && (this[0x1a8] == (WebRTCDataChannelExtension)0x0)) {
    local_c8 = 0;
    uStack_c4 = 0;
    local_b8 = (undefined1  [16])0x0;
    local_f8 = "_poll";
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
    local_f0[0] = 5;
    String::parse_latin1((StrRange *)&local_c8);
    local_90 = CONCAT44(local_90._4_4_,0x88);
    GetTypeInfo<Error,void>::get_class_info((GetTypeInfo<Error,void> *)&local_f8);
    PropertyInfo::operator=((PropertyInfo *)&uStack_c0,(PropertyInfo *)&local_f8);
    PropertyInfo::~PropertyInfo((PropertyInfo *)&local_f8);
    local_70 = local_70 & 0xffffffff00000000;
    uVar1 = MethodInfo::get_compatibility_hash();
    lVar5 = *(long *)(this + 8);
    *(undefined8 *)(this + 0x1b0) = 0;
    pcVar7 = *(code **)(lVar5 + 0xd8);
    if (((pcVar7 == (code *)0x0) || (*(long *)(lVar5 + 0xe0) == 0)) &&
       (pcVar7 = *(code **)(lVar5 + 0xd0), pcVar7 == (code *)0x0)) {
      local_108 = 0;
      String::parse_latin1((String *)&local_108,"WebRTCDataChannelExtension");
      StringName::StringName((StringName *)&local_100,(String *)&local_108,false);
      ClassDB::get_virtual_method_compatibility_hashes
                ((StringName *)&local_f8,(StringName *)&local_100);
      if (local_f0[0] == 0) {
        CowData<unsigned_int>::_unref((CowData<unsigned_int> *)local_f0);
        if ((StringName::configured != '\0') && (lVar5 = 0, local_100 != 0)) goto LAB_001088ca;
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
LAB_001088df:
        lVar5 = *(long *)(this + 8);
        pcVar7 = *(code **)(lVar5 + 200);
        if (((pcVar7 == (code *)0x0) || (*(long *)(lVar5 + 0xe0) == 0)) &&
           (pcVar7 = *(code **)(lVar5 + 0xc0), pcVar7 == (code *)0x0)) goto LAB_00108792;
        uVar4 = (*pcVar7)(*(undefined8 *)(lVar5 + 0xa0),this + 0x1a0);
        *(undefined8 *)(this + 0x1b0) = uVar4;
      }
      else {
        lVar5 = *(long *)(local_f0[0] + -8);
        CowData<unsigned_int>::_unref((CowData<unsigned_int> *)local_f0);
        if ((StringName::configured != '\0') && (local_100 != 0)) {
LAB_001088ca:
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
        if (lVar5 == 0) goto LAB_001088df;
      }
      lVar5 = *(long *)(this + 8);
    }
    else {
      uVar4 = (*pcVar7)(*(undefined8 *)(lVar5 + 0xa0),this + 0x1a0,uVar1);
      *(undefined8 *)(this + 0x1b0) = uVar4;
      lVar5 = *(long *)(this + 8);
    }
LAB_00108792:
    if (*(char *)(lVar5 + 0x29) != '\0') {
      plVar6 = (long *)operator_new(0x18,"");
      *plVar6 = (long)(this + 0x1b0);
      plVar6[1] = (long)(this + 0x1a8);
      plVar6[2] = *(long *)(this + 0x168);
      *(long **)(this + 0x168) = plVar6;
    }
    this[0x1a8] = (WebRTCDataChannelExtension)0x1;
    MethodInfo::~MethodInfo((MethodInfo *)&local_c8);
  }
  pcVar7 = *(code **)(this + 0x1b0);
  if (pcVar7 == (code *)0x0) {
    if (_gdvirtual__poll_call(Error&)::first_print == '\0') {
      uVar3 = 0;
    }
    else {
      local_f8 = (char *)0x0;
      uStack_c0 = 0x23;
      uStack_bc = 0;
      local_c8 = 0x107bf8;
      uStack_c4 = 0;
      String::parse_latin1((StrRange *)&local_f8);
      local_c8 = 0x1082b0;
      uStack_c4 = 0;
      local_108 = 0;
      uStack_c0 = 5;
      uStack_bc = 0;
      String::parse_latin1((StrRange *)&local_108);
      local_c8 = 0x10705a;
      uStack_c4 = 0;
      local_118 = 0;
      uStack_c0 = 2;
      uStack_bc = 0;
      String::parse_latin1((StrRange *)&local_118);
      if (*(code **)(*(long *)this + 0x48) == get_class) {
        if (*(long *)(this + 8) == 0) {
          local_128 = 0;
          local_c8 = 0x104902;
          uStack_c4 = 0;
          uStack_c0 = 0x1a;
          uStack_bc = 0;
          String::parse_latin1((StrRange *)&local_128);
        }
        else {
          lVar5 = *(long *)(*(long *)(this + 8) + 0x20);
          if (lVar5 == 0) {
            local_128 = 0;
          }
          else {
            __s = *(char **)(lVar5 + 8);
            local_128 = 0;
            if (__s == (char *)0x0) {
              if (*(long *)(lVar5 + 0x10) != 0) {
                CowData<char32_t>::_ref((CowData<char32_t> *)&local_128,(CowData *)(lVar5 + 0x10));
              }
            }
            else {
              sVar2 = strlen(__s);
              local_c8 = (uint)__s;
              uStack_c4 = (undefined4)((ulong)__s >> 0x20);
              uStack_c0 = (undefined4)sVar2;
              uStack_bc = (undefined4)(sVar2 >> 0x20);
              String::parse_latin1((StrRange *)&local_128);
            }
          }
        }
      }
      else {
        (**(code **)(*(long *)this + 0x48))(&local_128,this);
      }
      operator+((char *)&local_120,(String *)"Required virtual method ");
      String::operator+((String *)&local_110,(String *)&local_120);
      String::operator+((String *)&local_100,(String *)&local_110);
      String::operator+((String *)&local_c8,(String *)&local_100);
      _err_print_error("_gdvirtual__poll_call","modules/webrtc/webrtc_data_channel_extension.h",0x2f
                       ,(String *)&local_c8,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
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
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_128);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_118);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
      _gdvirtual__poll_call(Error&)::first_print = '\0';
      uVar3 = 0;
    }
  }
  else if (*(code **)(*(long *)(this + 8) + 0xe0) == (code *)0x0) {
    (*pcVar7)(*(undefined8 *)(this + 0x10),0,&local_c8);
    uVar3 = (ulong)local_c8;
  }
  else {
    (**(code **)(*(long *)(this + 8) + 0xe0))
              (*(undefined8 *)(this + 0x10),this + 0x1a0,pcVar7,0,&local_c8);
    uVar3 = (ulong)local_c8;
  }
LAB_001083a6:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar3;
}



/* WebRTCDataChannelExtension::get_buffered_amount() const */

int __thiscall WebRTCDataChannelExtension::get_buffered_amount(WebRTCDataChannelExtension *this)

{
  char *__s;
  int iVar1;
  undefined4 uVar2;
  size_t sVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  code *pcVar7;
  long in_FS_OFFSET;
  undefined8 local_128;
  long local_120;
  undefined8 local_118;
  String local_110 [8];
  undefined8 local_108;
  long local_100;
  char *local_f8;
  long local_f0 [5];
  int local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined1 local_b8 [16];
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_60;
  int local_58 [6];
  long local_40;
  
  plVar6 = *(long **)(this + 0x98);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (plVar6 != (long *)0x0) {
    local_c8 = 0;
    uStack_c4 = 0;
    uStack_c0 = 0;
    (**(code **)(*plVar6 + 0x60))((Variant *)local_58,plVar6,this + 0x2d8,0,0,&local_c8);
    if (local_c8 == 0) {
      iVar1 = Variant::operator_cast_to_int((Variant *)local_58);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      goto LAB_00108ab6;
    }
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
  }
  if ((*(long *)(this + 8) != 0) && (this[0x2e0] == (WebRTCDataChannelExtension)0x0)) {
    local_c8 = 0;
    uStack_c4 = 0;
    local_b8 = (undefined1  [16])0x0;
    local_f8 = "_get_buffered_amount";
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
    local_f0[0] = 0x14;
    String::parse_latin1((StrRange *)&local_c8);
    local_90 = CONCAT44(local_90._4_4_,0x8c);
    GetTypeInfo<int,void>::get_class_info((GetTypeInfo<int,void> *)&local_f8);
    PropertyInfo::operator=((PropertyInfo *)&uStack_c0,(PropertyInfo *)&local_f8);
    PropertyInfo::~PropertyInfo((PropertyInfo *)&local_f8);
    local_70 = CONCAT44(local_70._4_4_,3);
    uVar2 = MethodInfo::get_compatibility_hash();
    lVar5 = *(long *)(this + 8);
    *(undefined8 *)(this + 0x2e8) = 0;
    pcVar7 = *(code **)(lVar5 + 0xd8);
    if (((pcVar7 == (code *)0x0) || (*(long *)(lVar5 + 0xe0) == 0)) &&
       (pcVar7 = *(code **)(lVar5 + 0xd0), pcVar7 == (code *)0x0)) {
      local_108 = 0;
      String::parse_latin1((String *)&local_108,"WebRTCDataChannelExtension");
      StringName::StringName((StringName *)&local_100,(String *)&local_108,false);
      ClassDB::get_virtual_method_compatibility_hashes
                ((StringName *)&local_f8,(StringName *)&local_100);
      if (local_f0[0] == 0) {
        CowData<unsigned_int>::_unref((CowData<unsigned_int> *)local_f0);
        if ((StringName::configured != '\0') && (lVar5 = 0, local_100 != 0)) goto LAB_00108fea;
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
LAB_00108fff:
        lVar5 = *(long *)(this + 8);
        pcVar7 = *(code **)(lVar5 + 200);
        if (((pcVar7 == (code *)0x0) || (*(long *)(lVar5 + 0xe0) == 0)) &&
           (pcVar7 = *(code **)(lVar5 + 0xc0), pcVar7 == (code *)0x0)) goto LAB_00108eb2;
        uVar4 = (*pcVar7)(*(undefined8 *)(lVar5 + 0xa0),this + 0x2d8);
        *(undefined8 *)(this + 0x2e8) = uVar4;
      }
      else {
        lVar5 = *(long *)(local_f0[0] + -8);
        CowData<unsigned_int>::_unref((CowData<unsigned_int> *)local_f0);
        if ((StringName::configured != '\0') && (local_100 != 0)) {
LAB_00108fea:
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
        if (lVar5 == 0) goto LAB_00108fff;
      }
      lVar5 = *(long *)(this + 8);
    }
    else {
      uVar4 = (*pcVar7)(*(undefined8 *)(lVar5 + 0xa0),this + 0x2d8,uVar2);
      *(undefined8 *)(this + 0x2e8) = uVar4;
      lVar5 = *(long *)(this + 8);
    }
LAB_00108eb2:
    if (*(char *)(lVar5 + 0x29) != '\0') {
      plVar6 = (long *)operator_new(0x18,"");
      *plVar6 = (long)(this + 0x2e8);
      plVar6[1] = (long)(this + 0x2e0);
      plVar6[2] = *(long *)(this + 0x168);
      *(long **)(this + 0x168) = plVar6;
    }
    this[0x2e0] = (WebRTCDataChannelExtension)0x1;
    MethodInfo::~MethodInfo((MethodInfo *)&local_c8);
  }
  pcVar7 = *(code **)(this + 0x2e8);
  if (pcVar7 == (code *)0x0) {
    if (_gdvirtual__get_buffered_amount_call(int&)::first_print == '\0') {
      iVar1 = 0;
    }
    else {
      local_f8 = (char *)0x0;
      uStack_c0 = 0x23;
      uStack_bc = 0;
      local_c8 = 0x107bf8;
      uStack_c4 = 0;
      String::parse_latin1((StrRange *)&local_f8);
      local_c8 = 0x108997;
      uStack_c4 = 0;
      local_108 = 0;
      uStack_c0 = 0x14;
      uStack_bc = 0;
      String::parse_latin1((StrRange *)&local_108);
      local_c8 = 0x10705a;
      uStack_c4 = 0;
      local_118 = 0;
      uStack_c0 = 2;
      uStack_bc = 0;
      String::parse_latin1((StrRange *)&local_118);
      if (*(code **)(*(long *)this + 0x48) == get_class) {
        if (*(long *)(this + 8) == 0) {
          local_128 = 0;
          local_c8 = 0x104902;
          uStack_c4 = 0;
          uStack_c0 = 0x1a;
          uStack_bc = 0;
          String::parse_latin1((StrRange *)&local_128);
        }
        else {
          lVar5 = *(long *)(*(long *)(this + 8) + 0x20);
          if (lVar5 == 0) {
            local_128 = 0;
          }
          else {
            __s = *(char **)(lVar5 + 8);
            local_128 = 0;
            if (__s == (char *)0x0) {
              if (*(long *)(lVar5 + 0x10) != 0) {
                CowData<char32_t>::_ref((CowData<char32_t> *)&local_128,(CowData *)(lVar5 + 0x10));
              }
            }
            else {
              sVar3 = strlen(__s);
              local_c8 = (int)__s;
              uStack_c4 = (undefined4)((ulong)__s >> 0x20);
              uStack_c0 = (undefined4)sVar3;
              uStack_bc = (undefined4)(sVar3 >> 0x20);
              String::parse_latin1((StrRange *)&local_128);
            }
          }
        }
      }
      else {
        (**(code **)(*(long *)this + 0x48))(&local_128,this);
      }
      operator+((char *)&local_120,(String *)"Required virtual method ");
      String::operator+(local_110,(String *)&local_120);
      String::operator+((String *)&local_100,local_110);
      String::operator+((String *)&local_c8,(String *)&local_100);
      _err_print_error("_gdvirtual__get_buffered_amount_call",
                       "modules/webrtc/webrtc_data_channel_extension.h",0x3f,(String *)&local_c8,0,0
                      );
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
      CowData<char32_t>::_unref((CowData<char32_t> *)local_110);
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
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_128);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_118);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
      _gdvirtual__get_buffered_amount_call(int&)::first_print = '\0';
      iVar1 = 0;
    }
  }
  else if (*(code **)(*(long *)(this + 8) + 0xe0) == (code *)0x0) {
    (*pcVar7)(*(undefined8 *)(this + 0x10),0,&local_c8);
    iVar1 = local_c8;
  }
  else {
    (**(code **)(*(long *)(this + 8) + 0xe0))
              (*(undefined8 *)(this + 0x10),this + 0x2d8,pcVar7,0,&local_c8);
    iVar1 = local_c8;
  }
LAB_00108ab6:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar1;
}



/* WebRTCDataChannelExtension::is_negotiated() const */

bool __thiscall WebRTCDataChannelExtension::is_negotiated(WebRTCDataChannelExtension *this)

{
  char *__s;
  undefined4 uVar1;
  size_t sVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  code *pcVar6;
  long in_FS_OFFSET;
  bool bVar7;
  long local_128;
  CowData<char32_t> local_120 [8];
  undefined8 local_118;
  String local_110 [8];
  undefined8 local_108;
  long local_100;
  char *local_f8;
  long local_f0 [5];
  int local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined1 local_b8 [16];
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_78;
  ulong local_70;
  undefined8 local_60;
  int local_58 [6];
  long local_40;
  
  plVar5 = *(long **)(this + 0x98);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (plVar5 != (long *)0x0) {
    local_c8 = 0;
    uStack_c4 = 0;
    uStack_c0 = 0;
    (**(code **)(*plVar5 + 0x60))((Variant *)local_58,plVar5,this + 0x2c0,0,0,&local_c8);
    if (local_c8 == 0) {
      bVar7 = Variant::operator_cast_to_bool((Variant *)local_58);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      goto LAB_001091ca;
    }
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
  }
  if ((*(long *)(this + 8) != 0) && (this[0x2c8] == (WebRTCDataChannelExtension)0x0)) {
    local_c8 = 0;
    uStack_c4 = 0;
    local_b8 = (undefined1  [16])0x0;
    local_f8 = "_is_negotiated";
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
    local_f0[0] = 0xe;
    String::parse_latin1((StrRange *)&local_c8);
    local_90 = CONCAT44(local_90._4_4_,0x8c);
    GetTypeInfo<bool,void>::get_class_info((GetTypeInfo<bool,void> *)&local_f8);
    PropertyInfo::operator=((PropertyInfo *)&uStack_c0,(PropertyInfo *)&local_f8);
    PropertyInfo::~PropertyInfo((PropertyInfo *)&local_f8);
    local_70 = local_70 & 0xffffffff00000000;
    uVar1 = MethodInfo::get_compatibility_hash();
    lVar4 = *(long *)(this + 8);
    *(undefined8 *)(this + 0x2d0) = 0;
    pcVar6 = *(code **)(lVar4 + 0xd8);
    if (((pcVar6 == (code *)0x0) || (*(long *)(lVar4 + 0xe0) == 0)) &&
       (pcVar6 = *(code **)(lVar4 + 0xd0), pcVar6 == (code *)0x0)) {
      local_108 = 0;
      String::parse_latin1((String *)&local_108,"WebRTCDataChannelExtension");
      StringName::StringName((StringName *)&local_100,(String *)&local_108,false);
      ClassDB::get_virtual_method_compatibility_hashes
                ((StringName *)&local_f8,(StringName *)&local_100);
      if (local_f0[0] == 0) {
        CowData<unsigned_int>::_unref((CowData<unsigned_int> *)local_f0);
        if ((StringName::configured != '\0') && (lVar4 = 0, local_100 != 0)) goto LAB_001096ea;
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
LAB_001096ff:
        lVar4 = *(long *)(this + 8);
        pcVar6 = *(code **)(lVar4 + 200);
        if (((pcVar6 == (code *)0x0) || (*(long *)(lVar4 + 0xe0) == 0)) &&
           (pcVar6 = *(code **)(lVar4 + 0xc0), pcVar6 == (code *)0x0)) goto LAB_001095aa;
        uVar3 = (*pcVar6)(*(undefined8 *)(lVar4 + 0xa0),this + 0x2c0);
        *(undefined8 *)(this + 0x2d0) = uVar3;
      }
      else {
        lVar4 = *(long *)(local_f0[0] + -8);
        CowData<unsigned_int>::_unref((CowData<unsigned_int> *)local_f0);
        if ((StringName::configured != '\0') && (local_100 != 0)) {
LAB_001096ea:
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
        if (lVar4 == 0) goto LAB_001096ff;
      }
      lVar4 = *(long *)(this + 8);
    }
    else {
      uVar3 = (*pcVar6)(*(undefined8 *)(lVar4 + 0xa0),this + 0x2c0,uVar1);
      *(undefined8 *)(this + 0x2d0) = uVar3;
      lVar4 = *(long *)(this + 8);
    }
LAB_001095aa:
    if (*(char *)(lVar4 + 0x29) != '\0') {
      plVar5 = (long *)operator_new(0x18,"");
      *plVar5 = (long)(this + 0x2d0);
      plVar5[1] = (long)(this + 0x2c8);
      plVar5[2] = *(long *)(this + 0x168);
      *(long **)(this + 0x168) = plVar5;
    }
    this[0x2c8] = (WebRTCDataChannelExtension)0x1;
    MethodInfo::~MethodInfo((MethodInfo *)&local_c8);
  }
  pcVar6 = *(code **)(this + 0x2d0);
  if (pcVar6 == (code *)0x0) {
    if (_gdvirtual__is_negotiated_call(bool&)::first_print == '\0') {
      bVar7 = false;
    }
    else {
      local_f8 = (char *)0x0;
      uStack_c0 = 0x23;
      uStack_bc = 0;
      local_c8 = 0x107bf8;
      uStack_c4 = 0;
      String::parse_latin1((StrRange *)&local_f8);
      local_c8 = 0x1090b7;
      uStack_c4 = 0;
      local_108 = 0;
      uStack_c0 = 0xe;
      uStack_bc = 0;
      String::parse_latin1((StrRange *)&local_108);
      local_c8 = 0x10705a;
      uStack_c4 = 0;
      local_118 = 0;
      uStack_c0 = 2;
      uStack_bc = 0;
      String::parse_latin1((StrRange *)&local_118);
      if (*(code **)(*(long *)this + 0x48) == get_class) {
        if (*(long *)(this + 8) == 0) {
          local_128 = 0;
          local_c8 = 0x104902;
          uStack_c4 = 0;
          uStack_c0 = 0x1a;
          uStack_bc = 0;
          String::parse_latin1((StrRange *)&local_128);
        }
        else {
          lVar4 = *(long *)(*(long *)(this + 8) + 0x20);
          if (lVar4 == 0) {
            local_128 = 0;
          }
          else {
            __s = *(char **)(lVar4 + 8);
            local_128 = 0;
            if (__s == (char *)0x0) {
              if (*(long *)(lVar4 + 0x10) != 0) {
                CowData<char32_t>::_ref((CowData<char32_t> *)&local_128,(CowData *)(lVar4 + 0x10));
              }
            }
            else {
              sVar2 = strlen(__s);
              local_c8 = (int)__s;
              uStack_c4 = (undefined4)((ulong)__s >> 0x20);
              uStack_c0 = (undefined4)sVar2;
              uStack_bc = (undefined4)(sVar2 >> 0x20);
              String::parse_latin1((StrRange *)&local_128);
            }
          }
        }
      }
      else {
        (**(code **)(*(long *)this + 0x48))(&local_128,this);
      }
      operator+((char *)local_120,(String *)"Required virtual method ");
      String::operator+(local_110,(String *)local_120);
      String::operator+((String *)&local_100,local_110);
      String::operator+((String *)&local_c8,(String *)&local_100);
      _err_print_error("_gdvirtual__is_negotiated_call",
                       "modules/webrtc/webrtc_data_channel_extension.h",0x3e,(String *)&local_c8,0,0
                      );
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
      lVar4 = local_100;
      if (local_100 != 0) {
        LOCK();
        plVar5 = (long *)(local_100 + -0x10);
        *plVar5 = *plVar5 + -1;
        UNLOCK();
        if (*plVar5 == 0) {
          local_100 = 0;
          Memory::free_static((void *)(lVar4 + -0x10),false);
        }
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)local_110);
      CowData<char32_t>::_unref(local_120);
      lVar4 = local_128;
      if (local_128 != 0) {
        LOCK();
        plVar5 = (long *)(local_128 + -0x10);
        *plVar5 = *plVar5 + -1;
        UNLOCK();
        if (*plVar5 == 0) {
          local_128 = 0;
          Memory::free_static((void *)(lVar4 + -0x10),false);
        }
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_118);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
      _gdvirtual__is_negotiated_call(bool&)::first_print = '\0';
      bVar7 = false;
    }
  }
  else if (*(code **)(*(long *)(this + 8) + 0xe0) == (code *)0x0) {
    (*pcVar6)(*(undefined8 *)(this + 0x10),0,&local_c8);
    bVar7 = local_c8._0_1_ != (String)0x0;
  }
  else {
    (**(code **)(*(long *)(this + 8) + 0xe0))
              (*(undefined8 *)(this + 0x10),this + 0x2c0,pcVar6,0,&local_c8);
    bVar7 = local_c8._0_1_ != (String)0x0;
  }
LAB_001091ca:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar7;
}



/* WebRTCDataChannelExtension::get_protocol() const */

void WebRTCDataChannelExtension::get_protocol(void)

{
  undefined4 uVar1;
  long lVar2;
  size_t sVar3;
  long lVar4;
  code *pcVar5;
  char *pcVar6;
  char *pcVar7;
  long *in_RSI;
  CowData<char32_t> *in_RDI;
  long *plVar8;
  long in_FS_OFFSET;
  bool bVar9;
  CowData<char32_t> *local_138;
  undefined8 local_128;
  String local_120 [8];
  undefined8 local_118;
  String local_110 [8];
  undefined8 local_108;
  long local_100;
  char *local_f8;
  long local_f0 [5];
  int local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined1 local_b8 [16];
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_78;
  ulong local_70;
  undefined8 local_60;
  int local_58 [6];
  long local_40;
  
  plVar8 = (long *)in_RSI[0x13];
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined8 *)in_RDI = 0;
  if (plVar8 != (long *)0x0) {
    local_c8 = 0;
    uStack_c4 = 0;
    uStack_c0 = 0;
    (**(code **)(*plVar8 + 0x60))(local_58,plVar8,in_RSI + 0x55,0,0,&local_c8);
    if (local_c8 == 0) {
      Variant::operator_cast_to_String((Variant *)&local_f8);
      if (*(char **)in_RDI != local_f8) {
        CowData<char32_t>::_unref(in_RDI);
        pcVar7 = local_f8;
        local_f8 = (char *)0x0;
        *(char **)in_RDI = pcVar7;
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      goto LAB_0010996d;
    }
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
  }
  if ((in_RSI[1] != 0) && ((char)in_RSI[0x56] == '\0')) {
    local_c8 = 0;
    uStack_c4 = 0;
    local_b8 = (undefined1  [16])0x0;
    local_f8 = "_get_protocol";
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
    local_f0[0] = 0xd;
    String::parse_latin1((StrRange *)&local_c8);
    local_90 = CONCAT44(local_90._4_4_,0x8c);
    GetTypeInfo<String,void>::get_class_info((GetTypeInfo<String,void> *)&local_f8);
    PropertyInfo::operator=((PropertyInfo *)&uStack_c0,(PropertyInfo *)&local_f8);
    PropertyInfo::~PropertyInfo((PropertyInfo *)&local_f8);
    local_70 = local_70 & 0xffffffff00000000;
    uVar1 = MethodInfo::get_compatibility_hash();
    lVar4 = in_RSI[1];
    in_RSI[0x57] = 0;
    pcVar5 = *(code **)(lVar4 + 0xd8);
    if (((pcVar5 == (code *)0x0) || (*(long *)(lVar4 + 0xe0) == 0)) &&
       (pcVar5 = *(code **)(lVar4 + 0xd0), pcVar5 == (code *)0x0)) {
      local_108 = 0;
      String::parse_latin1((String *)&local_108,"WebRTCDataChannelExtension");
      StringName::StringName((StringName *)&local_100,(String *)&local_108,false);
      ClassDB::get_virtual_method_compatibility_hashes
                ((StringName *)&local_f8,(StringName *)&local_100);
      if (local_f0[0] == 0) {
        lVar4 = 0;
        CowData<unsigned_int>::_unref((CowData<unsigned_int> *)local_f0);
        if (StringName::configured != '\0') goto LAB_00109fa9;
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
LAB_00109fc6:
        lVar4 = in_RSI[1];
        pcVar5 = *(code **)(lVar4 + 200);
        if (((pcVar5 == (code *)0x0) || (*(long *)(lVar4 + 0xe0) == 0)) &&
           (pcVar5 = *(code **)(lVar4 + 0xc0), pcVar5 == (code *)0x0)) goto LAB_00109e17;
        lVar4 = (*pcVar5)(*(undefined8 *)(lVar4 + 0xa0));
        in_RSI[0x57] = lVar4;
      }
      else {
        lVar4 = *(long *)(local_f0[0] + -8);
        CowData<unsigned_int>::_unref((CowData<unsigned_int> *)local_f0);
        if (StringName::configured != '\0') {
LAB_00109fa9:
          if (local_100 != 0) {
            StringName::unref();
          }
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
        if (lVar4 == 0) goto LAB_00109fc6;
      }
      lVar4 = in_RSI[1];
    }
    else {
      lVar4 = (*pcVar5)(*(undefined8 *)(lVar4 + 0xa0),in_RSI + 0x55,uVar1);
      in_RSI[0x57] = lVar4;
      lVar4 = in_RSI[1];
    }
LAB_00109e17:
    if (*(char *)(lVar4 + 0x29) != '\0') {
      plVar8 = (long *)operator_new(0x18,"");
      *plVar8 = (long)(in_RSI + 0x57);
      plVar8[1] = (long)(in_RSI + 0x56);
      plVar8[2] = in_RSI[0x2d];
      in_RSI[0x2d] = (long)plVar8;
    }
    *(undefined1 *)(in_RSI + 0x56) = 1;
    MethodInfo::~MethodInfo((MethodInfo *)&local_c8);
  }
  pcVar5 = (code *)in_RSI[0x57];
  if (pcVar5 == (code *)0x0) {
    if (_gdvirtual__get_protocol_call(String&)::first_print != '\0') {
      local_f8 = (char *)0x0;
      local_c8 = 0x107bf8;
      uStack_c4 = 0;
      uStack_c0 = 0x23;
      uStack_bc = 0;
      String::parse_latin1((StrRange *)&local_f8);
      local_c8 = 0x1097b7;
      uStack_c4 = 0;
      local_108 = 0;
      uStack_c0 = 0xd;
      uStack_bc = 0;
      String::parse_latin1((StrRange *)&local_108);
      local_118 = 0;
      local_c8 = 0x10705a;
      uStack_c4 = 0;
      uStack_c0 = 2;
      uStack_bc = 0;
      String::parse_latin1((StrRange *)&local_118);
      if (*(code **)(*in_RSI + 0x48) == get_class) {
        if (in_RSI[1] == 0) {
          local_128 = 0;
          local_c8 = 0x104902;
          uStack_c4 = 0;
          uStack_c0 = 0x1a;
          uStack_bc = 0;
          String::parse_latin1((StrRange *)&local_128);
        }
        else {
          lVar4 = *(long *)(in_RSI[1] + 0x20);
          if (lVar4 == 0) {
            local_128 = 0;
          }
          else {
            pcVar7 = *(char **)(lVar4 + 8);
            local_128 = 0;
            if (pcVar7 == (char *)0x0) {
              if (*(long *)(lVar4 + 0x10) != 0) {
                CowData<char32_t>::_ref((CowData<char32_t> *)&local_128,(CowData *)(lVar4 + 0x10));
              }
            }
            else {
              sVar3 = strlen(pcVar7);
              local_c8 = (int)pcVar7;
              uStack_c4 = (undefined4)((ulong)pcVar7 >> 0x20);
              uStack_c0 = (undefined4)sVar3;
              uStack_bc = (undefined4)(sVar3 >> 0x20);
              String::parse_latin1((StrRange *)&local_128);
            }
          }
        }
      }
      else {
        (**(code **)(*in_RSI + 0x48))();
      }
      local_138 = (CowData<char32_t> *)&local_128;
      operator+((char *)local_120,(String *)"Required virtual method ");
      String::operator+(local_110,local_120);
      String::operator+((String *)&local_100,local_110);
      String::operator+((String *)&local_c8,(String *)&local_100);
      _err_print_error("_gdvirtual__get_protocol_call",
                       "modules/webrtc/webrtc_data_channel_extension.h",0x3d,(String *)&local_c8,0,0
                      );
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_110);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_120);
      CowData<char32_t>::_unref(local_138);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_118);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
      _gdvirtual__get_protocol_call(String&)::first_print = '\0';
    }
    goto LAB_0010996d;
  }
  local_f8 = (char *)0x0;
  if (*(code **)(in_RSI[1] + 0xe0) == (code *)0x0) {
    (*pcVar5)(in_RSI[2],0,&local_f8);
    local_c8 = 0;
    uStack_c4 = 0;
    pcVar7 = local_f8;
    if (local_f8 != (char *)0x0) {
      plVar8 = (long *)(local_f8 + -0x10);
      do {
        lVar4 = *plVar8;
        if (lVar4 == 0) goto LAB_00109e80;
        LOCK();
        lVar2 = *plVar8;
        bVar9 = lVar4 == lVar2;
        if (bVar9) {
          *plVar8 = lVar4 + 1;
          lVar2 = lVar4;
        }
        UNLOCK();
      } while (!bVar9);
      if (lVar2 == -1) {
LAB_00109e80:
        pcVar7 = (char *)0x0;
      }
      else {
        local_c8 = (int)local_f8;
        uStack_c4 = (undefined4)((ulong)local_f8 >> 0x20);
      }
    }
    if (pcVar7 != *(char **)in_RDI) {
      CowData<char32_t>::_unref(in_RDI);
      *(char **)in_RDI = pcVar7;
      local_c8 = 0;
      uStack_c4 = 0;
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
    goto LAB_00109938;
  }
  (**(code **)(in_RSI[1] + 0xe0))(in_RSI[2],in_RSI + 0x55,pcVar5,0,&local_f8);
  plVar8 = (long *)(local_f8 + -0x10);
  pcVar7 = local_f8;
  if (local_f8 == (char *)0x0) {
    pcVar6 = *(char **)in_RDI;
    if (pcVar6 == (char *)0x0) goto LAB_0010996d;
LAB_001099b3:
    LOCK();
    plVar8 = (long *)(pcVar6 + -0x10);
    *plVar8 = *plVar8 + -1;
    UNLOCK();
    if (*plVar8 == 0) {
      lVar4 = *(long *)in_RDI;
      *(undefined8 *)in_RDI = 0;
      Memory::free_static((void *)(lVar4 + -0x10),false);
    }
LAB_00109935:
    *(char **)in_RDI = pcVar7;
  }
  else {
    do {
      lVar4 = *plVar8;
      if (lVar4 == 0) {
        pcVar6 = *(char **)in_RDI;
        goto LAB_001099a8;
      }
      LOCK();
      lVar2 = *plVar8;
      bVar9 = lVar4 == lVar2;
      if (bVar9) {
        *plVar8 = lVar4 + 1;
        lVar2 = lVar4;
      }
      UNLOCK();
    } while (!bVar9);
    pcVar6 = *(char **)in_RDI;
    if (lVar2 == -1) {
LAB_001099a8:
      pcVar7 = (char *)0x0;
      if (pcVar6 != (char *)0x0) goto LAB_001099b3;
    }
    else {
      if (pcVar6 != local_f8) {
        if (pcVar6 != (char *)0x0) goto LAB_001099b3;
        goto LAB_00109935;
      }
      if (pcVar6 == (char *)0x0) goto LAB_0010996d;
      plVar8 = (long *)(local_f8 + -0x10);
      LOCK();
      *plVar8 = *plVar8 + -1;
      UNLOCK();
      if (*plVar8 == 0) {
        Memory::free_static(plVar8,false);
      }
    }
  }
LAB_00109938:
  pcVar7 = local_f8;
  if (local_f8 != (char *)0x0) {
    LOCK();
    plVar8 = (long *)(local_f8 + -0x10);
    *plVar8 = *plVar8 + -1;
    UNLOCK();
    if (*plVar8 == 0) {
      local_f8 = (char *)0x0;
      Memory::free_static(pcVar7 + -0x10,false);
    }
  }
LAB_0010996d:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* WebRTCDataChannelExtension::get_max_retransmits() const */

int __thiscall WebRTCDataChannelExtension::get_max_retransmits(WebRTCDataChannelExtension *this)

{
  char *__s;
  int iVar1;
  undefined4 uVar2;
  size_t sVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  code *pcVar7;
  long in_FS_OFFSET;
  undefined8 local_128;
  long local_120;
  undefined8 local_118;
  String local_110 [8];
  undefined8 local_108;
  long local_100;
  char *local_f8;
  long local_f0 [5];
  int local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined1 local_b8 [16];
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_60;
  int local_58 [6];
  long local_40;
  
  plVar6 = *(long **)(this + 0x98);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (plVar6 != (long *)0x0) {
    local_c8 = 0;
    uStack_c4 = 0;
    uStack_c0 = 0;
    (**(code **)(*plVar6 + 0x60))((Variant *)local_58,plVar6,this + 0x290,0,0,&local_c8);
    if (local_c8 == 0) {
      iVar1 = Variant::operator_cast_to_int((Variant *)local_58);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      goto LAB_0010a196;
    }
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
  }
  if ((*(long *)(this + 8) != 0) && (this[0x298] == (WebRTCDataChannelExtension)0x0)) {
    local_c8 = 0;
    uStack_c4 = 0;
    local_b8 = (undefined1  [16])0x0;
    local_f8 = "_get_max_retransmits";
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
    local_f0[0] = 0x14;
    String::parse_latin1((StrRange *)&local_c8);
    local_90 = CONCAT44(local_90._4_4_,0x8c);
    GetTypeInfo<int,void>::get_class_info((GetTypeInfo<int,void> *)&local_f8);
    PropertyInfo::operator=((PropertyInfo *)&uStack_c0,(PropertyInfo *)&local_f8);
    PropertyInfo::~PropertyInfo((PropertyInfo *)&local_f8);
    local_70 = CONCAT44(local_70._4_4_,3);
    uVar2 = MethodInfo::get_compatibility_hash();
    lVar5 = *(long *)(this + 8);
    *(undefined8 *)(this + 0x2a0) = 0;
    pcVar7 = *(code **)(lVar5 + 0xd8);
    if (((pcVar7 == (code *)0x0) || (*(long *)(lVar5 + 0xe0) == 0)) &&
       (pcVar7 = *(code **)(lVar5 + 0xd0), pcVar7 == (code *)0x0)) {
      local_108 = 0;
      String::parse_latin1((String *)&local_108,"WebRTCDataChannelExtension");
      StringName::StringName((StringName *)&local_100,(String *)&local_108,false);
      ClassDB::get_virtual_method_compatibility_hashes
                ((StringName *)&local_f8,(StringName *)&local_100);
      if (local_f0[0] == 0) {
        CowData<unsigned_int>::_unref((CowData<unsigned_int> *)local_f0);
        if ((StringName::configured != '\0') && (lVar5 = 0, local_100 != 0)) goto LAB_0010a6ca;
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
LAB_0010a6df:
        lVar5 = *(long *)(this + 8);
        pcVar7 = *(code **)(lVar5 + 200);
        if (((pcVar7 == (code *)0x0) || (*(long *)(lVar5 + 0xe0) == 0)) &&
           (pcVar7 = *(code **)(lVar5 + 0xc0), pcVar7 == (code *)0x0)) goto LAB_0010a592;
        uVar4 = (*pcVar7)(*(undefined8 *)(lVar5 + 0xa0),this + 0x290);
        *(undefined8 *)(this + 0x2a0) = uVar4;
      }
      else {
        lVar5 = *(long *)(local_f0[0] + -8);
        CowData<unsigned_int>::_unref((CowData<unsigned_int> *)local_f0);
        if ((StringName::configured != '\0') && (local_100 != 0)) {
LAB_0010a6ca:
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
        if (lVar5 == 0) goto LAB_0010a6df;
      }
      lVar5 = *(long *)(this + 8);
    }
    else {
      uVar4 = (*pcVar7)(*(undefined8 *)(lVar5 + 0xa0),this + 0x290,uVar2);
      *(undefined8 *)(this + 0x2a0) = uVar4;
      lVar5 = *(long *)(this + 8);
    }
LAB_0010a592:
    if (*(char *)(lVar5 + 0x29) != '\0') {
      plVar6 = (long *)operator_new(0x18,"");
      *plVar6 = (long)(this + 0x2a0);
      plVar6[1] = (long)(this + 0x298);
      plVar6[2] = *(long *)(this + 0x168);
      *(long **)(this + 0x168) = plVar6;
    }
    this[0x298] = (WebRTCDataChannelExtension)0x1;
    MethodInfo::~MethodInfo((MethodInfo *)&local_c8);
  }
  pcVar7 = *(code **)(this + 0x2a0);
  if (pcVar7 == (code *)0x0) {
    if (_gdvirtual__get_max_retransmits_call(int&)::first_print == '\0') {
      iVar1 = 0;
    }
    else {
      local_f8 = (char *)0x0;
      uStack_c0 = 0x23;
      uStack_bc = 0;
      local_c8 = 0x107bf8;
      uStack_c4 = 0;
      String::parse_latin1((StrRange *)&local_f8);
      local_c8 = 0x10a078;
      uStack_c4 = 0;
      local_108 = 0;
      uStack_c0 = 0x14;
      uStack_bc = 0;
      String::parse_latin1((StrRange *)&local_108);
      local_c8 = 0x10705a;
      uStack_c4 = 0;
      local_118 = 0;
      uStack_c0 = 2;
      uStack_bc = 0;
      String::parse_latin1((StrRange *)&local_118);
      if (*(code **)(*(long *)this + 0x48) == get_class) {
        if (*(long *)(this + 8) == 0) {
          local_128 = 0;
          local_c8 = 0x104902;
          uStack_c4 = 0;
          uStack_c0 = 0x1a;
          uStack_bc = 0;
          String::parse_latin1((StrRange *)&local_128);
        }
        else {
          lVar5 = *(long *)(*(long *)(this + 8) + 0x20);
          if (lVar5 == 0) {
            local_128 = 0;
          }
          else {
            __s = *(char **)(lVar5 + 8);
            local_128 = 0;
            if (__s == (char *)0x0) {
              if (*(long *)(lVar5 + 0x10) != 0) {
                CowData<char32_t>::_ref((CowData<char32_t> *)&local_128,(CowData *)(lVar5 + 0x10));
              }
            }
            else {
              sVar3 = strlen(__s);
              local_c8 = (int)__s;
              uStack_c4 = (undefined4)((ulong)__s >> 0x20);
              uStack_c0 = (undefined4)sVar3;
              uStack_bc = (undefined4)(sVar3 >> 0x20);
              String::parse_latin1((StrRange *)&local_128);
            }
          }
        }
      }
      else {
        (**(code **)(*(long *)this + 0x48))(&local_128,this);
      }
      operator+((char *)&local_120,(String *)"Required virtual method ");
      String::operator+(local_110,(String *)&local_120);
      String::operator+((String *)&local_100,local_110);
      String::operator+((String *)&local_c8,(String *)&local_100);
      _err_print_error("_gdvirtual__get_max_retransmits_call",
                       "modules/webrtc/webrtc_data_channel_extension.h",0x3c,(String *)&local_c8,0,0
                      );
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
      CowData<char32_t>::_unref((CowData<char32_t> *)local_110);
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
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_128);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_118);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
      _gdvirtual__get_max_retransmits_call(int&)::first_print = '\0';
      iVar1 = 0;
    }
  }
  else if (*(code **)(*(long *)(this + 8) + 0xe0) == (code *)0x0) {
    (*pcVar7)(*(undefined8 *)(this + 0x10),0,&local_c8);
    iVar1 = local_c8;
  }
  else {
    (**(code **)(*(long *)(this + 8) + 0xe0))
              (*(undefined8 *)(this + 0x10),this + 0x290,pcVar7,0,&local_c8);
    iVar1 = local_c8;
  }
LAB_0010a196:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar1;
}



/* WebRTCDataChannelExtension::get_max_packet_life_time() const */

int __thiscall
WebRTCDataChannelExtension::get_max_packet_life_time(WebRTCDataChannelExtension *this)

{
  char *__s;
  int iVar1;
  undefined4 uVar2;
  size_t sVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  code *pcVar7;
  long in_FS_OFFSET;
  long local_128;
  CowData<char32_t> local_120 [8];
  undefined8 local_118;
  String local_110 [8];
  long local_108;
  long local_100;
  char *local_f8;
  long local_f0 [5];
  int local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined1 local_b8 [16];
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_60;
  int local_58 [6];
  long local_40;
  
  plVar6 = *(long **)(this + 0x98);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (plVar6 != (long *)0x0) {
    local_c8 = 0;
    uStack_c4 = 0;
    uStack_c0 = 0;
    (**(code **)(*plVar6 + 0x60))((Variant *)local_58,plVar6,this + 0x278,0,0,&local_c8);
    if (local_c8 == 0) {
      iVar1 = Variant::operator_cast_to_int((Variant *)local_58);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      goto LAB_0010a8c6;
    }
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
  }
  if ((*(long *)(this + 8) != 0) && (this[0x280] == (WebRTCDataChannelExtension)0x0)) {
    local_c8 = 0;
    uStack_c4 = 0;
    local_b8 = (undefined1  [16])0x0;
    local_f8 = "_get_max_packet_life_time";
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
    local_f0[0] = 0x19;
    String::parse_latin1((StrRange *)&local_c8);
    local_90 = CONCAT44(local_90._4_4_,0x8c);
    GetTypeInfo<int,void>::get_class_info((GetTypeInfo<int,void> *)&local_f8);
    PropertyInfo::operator=((PropertyInfo *)&uStack_c0,(PropertyInfo *)&local_f8);
    PropertyInfo::~PropertyInfo((PropertyInfo *)&local_f8);
    local_70 = CONCAT44(local_70._4_4_,3);
    uVar2 = MethodInfo::get_compatibility_hash();
    lVar5 = *(long *)(this + 8);
    *(undefined8 *)(this + 0x288) = 0;
    pcVar7 = *(code **)(lVar5 + 0xd8);
    if (((pcVar7 == (code *)0x0) || (*(long *)(lVar5 + 0xe0) == 0)) &&
       (pcVar7 = *(code **)(lVar5 + 0xd0), pcVar7 == (code *)0x0)) {
      local_108 = 0;
      String::parse_latin1((String *)&local_108,"WebRTCDataChannelExtension");
      StringName::StringName((StringName *)&local_100,(String *)&local_108,false);
      ClassDB::get_virtual_method_compatibility_hashes
                ((StringName *)&local_f8,(StringName *)&local_100);
      if (local_f0[0] == 0) {
        CowData<unsigned_int>::_unref((CowData<unsigned_int> *)local_f0);
        if ((StringName::configured != '\0') && (lVar5 = 0, local_100 != 0)) goto LAB_0010adea;
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
LAB_0010adff:
        lVar5 = *(long *)(this + 8);
        pcVar7 = *(code **)(lVar5 + 200);
        if (((pcVar7 == (code *)0x0) || (*(long *)(lVar5 + 0xe0) == 0)) &&
           (pcVar7 = *(code **)(lVar5 + 0xc0), pcVar7 == (code *)0x0)) goto LAB_0010acb2;
        uVar4 = (*pcVar7)(*(undefined8 *)(lVar5 + 0xa0),this + 0x278);
        *(undefined8 *)(this + 0x288) = uVar4;
      }
      else {
        lVar5 = *(long *)(local_f0[0] + -8);
        CowData<unsigned_int>::_unref((CowData<unsigned_int> *)local_f0);
        if ((StringName::configured != '\0') && (local_100 != 0)) {
LAB_0010adea:
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
        if (lVar5 == 0) goto LAB_0010adff;
      }
      lVar5 = *(long *)(this + 8);
    }
    else {
      uVar4 = (*pcVar7)(*(undefined8 *)(lVar5 + 0xa0),this + 0x278,uVar2);
      *(undefined8 *)(this + 0x288) = uVar4;
      lVar5 = *(long *)(this + 8);
    }
LAB_0010acb2:
    if (*(char *)(lVar5 + 0x29) != '\0') {
      plVar6 = (long *)operator_new(0x18,"");
      *plVar6 = (long)(this + 0x288);
      plVar6[1] = (long)(this + 0x280);
      plVar6[2] = *(long *)(this + 0x168);
      *(long **)(this + 0x168) = plVar6;
    }
    this[0x280] = (WebRTCDataChannelExtension)0x1;
    MethodInfo::~MethodInfo((MethodInfo *)&local_c8);
  }
  pcVar7 = *(code **)(this + 0x288);
  if (pcVar7 == (code *)0x0) {
    if (_gdvirtual__get_max_packet_life_time_call(int&)::first_print == '\0') {
      iVar1 = 0;
    }
    else {
      local_f8 = (char *)0x0;
      uStack_c0 = 0x23;
      uStack_bc = 0;
      local_c8 = 0x107bf8;
      uStack_c4 = 0;
      String::parse_latin1((StrRange *)&local_f8);
      local_c8 = 0x10a797;
      uStack_c4 = 0;
      local_108 = 0;
      uStack_c0 = 0x19;
      uStack_bc = 0;
      String::parse_latin1((StrRange *)&local_108);
      local_c8 = 0x10705a;
      uStack_c4 = 0;
      local_118 = 0;
      uStack_c0 = 2;
      uStack_bc = 0;
      String::parse_latin1((StrRange *)&local_118);
      if (*(code **)(*(long *)this + 0x48) == get_class) {
        if (*(long *)(this + 8) == 0) {
          local_128 = 0;
          local_c8 = 0x104902;
          uStack_c4 = 0;
          uStack_c0 = 0x1a;
          uStack_bc = 0;
          String::parse_latin1((StrRange *)&local_128);
        }
        else {
          lVar5 = *(long *)(*(long *)(this + 8) + 0x20);
          if (lVar5 == 0) {
            local_128 = 0;
          }
          else {
            __s = *(char **)(lVar5 + 8);
            local_128 = 0;
            if (__s == (char *)0x0) {
              if (*(long *)(lVar5 + 0x10) != 0) {
                CowData<char32_t>::_ref((CowData<char32_t> *)&local_128,(CowData *)(lVar5 + 0x10));
              }
            }
            else {
              sVar3 = strlen(__s);
              local_c8 = (int)__s;
              uStack_c4 = (undefined4)((ulong)__s >> 0x20);
              uStack_c0 = (undefined4)sVar3;
              uStack_bc = (undefined4)(sVar3 >> 0x20);
              String::parse_latin1((StrRange *)&local_128);
            }
          }
        }
      }
      else {
        (**(code **)(*(long *)this + 0x48))(&local_128,this);
      }
      operator+((char *)local_120,(String *)"Required virtual method ");
      String::operator+(local_110,(String *)local_120);
      String::operator+((String *)&local_100,local_110);
      String::operator+((String *)&local_c8,(String *)&local_100);
      _err_print_error("_gdvirtual__get_max_packet_life_time_call",
                       "modules/webrtc/webrtc_data_channel_extension.h",0x3b,(String *)&local_c8,0,0
                      );
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
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
      CowData<char32_t>::_unref((CowData<char32_t> *)local_110);
      CowData<char32_t>::_unref(local_120);
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
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_118);
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
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
      _gdvirtual__get_max_packet_life_time_call(int&)::first_print = '\0';
      iVar1 = 0;
    }
  }
  else if (*(code **)(*(long *)(this + 8) + 0xe0) == (code *)0x0) {
    (*pcVar7)(*(undefined8 *)(this + 0x10),0,&local_c8);
    iVar1 = local_c8;
  }
  else {
    (**(code **)(*(long *)(this + 8) + 0xe0))
              (*(undefined8 *)(this + 0x10),this + 0x278,pcVar7,0,&local_c8);
    iVar1 = local_c8;
  }
LAB_0010a8c6:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar1;
}



/* WebRTCDataChannelExtension::get_id() const */

int __thiscall WebRTCDataChannelExtension::get_id(WebRTCDataChannelExtension *this)

{
  char *__s;
  int iVar1;
  undefined4 uVar2;
  size_t sVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  code *pcVar7;
  long in_FS_OFFSET;
  undefined8 local_128;
  long local_120;
  undefined8 local_118;
  String local_110 [8];
  long local_108;
  long local_100;
  char *local_f8;
  long local_f0 [5];
  int local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined1 local_b8 [16];
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_60;
  int local_58 [6];
  long local_40;
  
  plVar6 = *(long **)(this + 0x98);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (plVar6 != (long *)0x0) {
    local_c8 = 0;
    uStack_c4 = 0;
    uStack_c0 = 0;
    (**(code **)(*plVar6 + 0x60))((Variant *)local_58,plVar6,this + 0x260,0,0,&local_c8);
    if (local_c8 == 0) {
      iVar1 = Variant::operator_cast_to_int((Variant *)local_58);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      goto LAB_0010afb6;
    }
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
  }
  if ((*(long *)(this + 8) != 0) && (this[0x268] == (WebRTCDataChannelExtension)0x0)) {
    local_c8 = 0;
    uStack_c4 = 0;
    local_b8 = (undefined1  [16])0x0;
    local_f8 = "_get_id";
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
    local_f0[0] = 7;
    String::parse_latin1((StrRange *)&local_c8);
    local_90 = CONCAT44(local_90._4_4_,0x8c);
    GetTypeInfo<int,void>::get_class_info((GetTypeInfo<int,void> *)&local_f8);
    PropertyInfo::operator=((PropertyInfo *)&uStack_c0,(PropertyInfo *)&local_f8);
    PropertyInfo::~PropertyInfo((PropertyInfo *)&local_f8);
    local_70 = CONCAT44(local_70._4_4_,3);
    uVar2 = MethodInfo::get_compatibility_hash();
    lVar5 = *(long *)(this + 8);
    *(undefined8 *)(this + 0x270) = 0;
    pcVar7 = *(code **)(lVar5 + 0xd8);
    if (((pcVar7 == (code *)0x0) || (*(long *)(lVar5 + 0xe0) == 0)) &&
       (pcVar7 = *(code **)(lVar5 + 0xd0), pcVar7 == (code *)0x0)) {
      local_108 = 0;
      String::parse_latin1((String *)&local_108,"WebRTCDataChannelExtension");
      StringName::StringName((StringName *)&local_100,(String *)&local_108,false);
      ClassDB::get_virtual_method_compatibility_hashes
                ((StringName *)&local_f8,(StringName *)&local_100);
      if (local_f0[0] == 0) {
        CowData<unsigned_int>::_unref((CowData<unsigned_int> *)local_f0);
        if ((StringName::configured != '\0') && (lVar5 = 0, local_100 != 0)) goto LAB_0010b4ea;
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
LAB_0010b501:
        lVar5 = *(long *)(this + 8);
        pcVar7 = *(code **)(lVar5 + 200);
        if (((pcVar7 == (code *)0x0) || (*(long *)(lVar5 + 0xe0) == 0)) &&
           (pcVar7 = *(code **)(lVar5 + 0xc0), pcVar7 == (code *)0x0)) goto LAB_0010b3a3;
        uVar4 = (*pcVar7)(*(undefined8 *)(lVar5 + 0xa0),this + 0x260);
        *(undefined8 *)(this + 0x270) = uVar4;
      }
      else {
        lVar5 = *(long *)(local_f0[0] + -8);
        CowData<unsigned_int>::_unref((CowData<unsigned_int> *)local_f0);
        if ((StringName::configured != '\0') && (local_100 != 0)) {
LAB_0010b4ea:
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
        if (lVar5 == 0) goto LAB_0010b501;
      }
      lVar5 = *(long *)(this + 8);
    }
    else {
      uVar4 = (*pcVar7)(*(undefined8 *)(lVar5 + 0xa0),this + 0x260,uVar2);
      *(undefined8 *)(this + 0x270) = uVar4;
      lVar5 = *(long *)(this + 8);
    }
LAB_0010b3a3:
    if (*(char *)(lVar5 + 0x29) != '\0') {
      plVar6 = (long *)operator_new(0x18,"");
      *plVar6 = (long)(this + 0x270);
      plVar6[1] = (long)(this + 0x268);
      plVar6[2] = *(long *)(this + 0x168);
      *(long **)(this + 0x168) = plVar6;
    }
    this[0x268] = (WebRTCDataChannelExtension)0x1;
    MethodInfo::~MethodInfo((MethodInfo *)&local_c8);
  }
  pcVar7 = *(code **)(this + 0x270);
  if (pcVar7 == (code *)0x0) {
    if (_gdvirtual__get_id_call(int&)::first_print == '\0') {
      iVar1 = 0;
    }
    else {
      local_f8 = (char *)0x0;
      uStack_c0 = 0x23;
      uStack_bc = 0;
      local_c8 = 0x107bf8;
      uStack_c4 = 0;
      String::parse_latin1((StrRange *)&local_f8);
      local_108 = 0;
      local_c8 = 0x10aeb7;
      uStack_c4 = 0;
      uStack_c0 = 7;
      uStack_bc = 0;
      String::parse_latin1((StrRange *)&local_108);
      local_c8 = 0x10705a;
      uStack_c4 = 0;
      local_118 = 0;
      uStack_c0 = 2;
      uStack_bc = 0;
      String::parse_latin1((StrRange *)&local_118);
      if (*(code **)(*(long *)this + 0x48) == get_class) {
        if (*(long *)(this + 8) == 0) {
          local_128 = 0;
          local_c8 = 0x104902;
          uStack_c4 = 0;
          uStack_c0 = 0x1a;
          uStack_bc = 0;
          String::parse_latin1((StrRange *)&local_128);
        }
        else {
          lVar5 = *(long *)(*(long *)(this + 8) + 0x20);
          if (lVar5 == 0) {
            local_128 = 0;
          }
          else {
            __s = *(char **)(lVar5 + 8);
            local_128 = 0;
            if (__s == (char *)0x0) {
              if (*(long *)(lVar5 + 0x10) != 0) {
                CowData<char32_t>::_ref((CowData<char32_t> *)&local_128,(CowData *)(lVar5 + 0x10));
              }
            }
            else {
              sVar3 = strlen(__s);
              local_c8 = (int)__s;
              uStack_c4 = (undefined4)((ulong)__s >> 0x20);
              uStack_c0 = (undefined4)sVar3;
              uStack_bc = (undefined4)(sVar3 >> 0x20);
              String::parse_latin1((StrRange *)&local_128);
            }
          }
        }
      }
      else {
        (**(code **)(*(long *)this + 0x48))(&local_128,this);
      }
      operator+((char *)&local_120,(String *)"Required virtual method ");
      String::operator+(local_110,(String *)&local_120);
      String::operator+((String *)&local_100,local_110);
      String::operator+((String *)&local_c8,(String *)&local_100);
      _err_print_error("_gdvirtual__get_id_call","modules/webrtc/webrtc_data_channel_extension.h",
                       0x3a,(String *)&local_c8,0,0);
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
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_110);
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
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_128);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_118);
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
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
      _gdvirtual__get_id_call(int&)::first_print = '\0';
      iVar1 = 0;
    }
  }
  else if (*(code **)(*(long *)(this + 8) + 0xe0) == (code *)0x0) {
    (*pcVar7)(*(undefined8 *)(this + 0x10),0,&local_c8);
    iVar1 = local_c8;
  }
  else {
    (**(code **)(*(long *)(this + 8) + 0xe0))
              (*(undefined8 *)(this + 0x10),this + 0x260,pcVar7,0,&local_c8);
    iVar1 = local_c8;
  }
LAB_0010afb6:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar1;
}



/* WebRTCDataChannelExtension::is_ordered() const */

bool __thiscall WebRTCDataChannelExtension::is_ordered(WebRTCDataChannelExtension *this)

{
  char *__s;
  undefined4 uVar1;
  size_t sVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  code *pcVar6;
  long in_FS_OFFSET;
  bool bVar7;
  CowData<char32_t> *local_138;
  undefined8 local_128;
  CowData<char32_t> local_120 [8];
  undefined8 local_118;
  String local_110 [8];
  long local_108;
  long local_100;
  char *local_f8;
  long local_f0 [5];
  int local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined1 local_b8 [16];
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_78;
  ulong local_70;
  undefined8 local_60;
  int local_58 [6];
  long local_40;
  
  plVar5 = *(long **)(this + 0x98);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (plVar5 != (long *)0x0) {
    local_c8 = 0;
    uStack_c4 = 0;
    uStack_c0 = 0;
    (**(code **)(*plVar5 + 0x60))((Variant *)local_58,plVar5,this + 0x248,0,0,&local_c8);
    if (local_c8 == 0) {
      bVar7 = Variant::operator_cast_to_bool((Variant *)local_58);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      goto LAB_0010b6ca;
    }
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
  }
  if ((*(long *)(this + 8) != 0) && (this[0x250] == (WebRTCDataChannelExtension)0x0)) {
    local_c8 = 0;
    uStack_c4 = 0;
    local_b8 = (undefined1  [16])0x0;
    local_f8 = "_is_ordered";
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
    local_f0[0] = 0xb;
    String::parse_latin1((StrRange *)&local_c8);
    local_90 = CONCAT44(local_90._4_4_,0x8c);
    GetTypeInfo<bool,void>::get_class_info((GetTypeInfo<bool,void> *)&local_f8);
    PropertyInfo::operator=((PropertyInfo *)&uStack_c0,(PropertyInfo *)&local_f8);
    PropertyInfo::~PropertyInfo((PropertyInfo *)&local_f8);
    local_70 = local_70 & 0xffffffff00000000;
    uVar1 = MethodInfo::get_compatibility_hash();
    lVar4 = *(long *)(this + 8);
    *(undefined8 *)(this + 600) = 0;
    pcVar6 = *(code **)(lVar4 + 0xd8);
    if (((pcVar6 == (code *)0x0) || (*(long *)(lVar4 + 0xe0) == 0)) &&
       (pcVar6 = *(code **)(lVar4 + 0xd0), pcVar6 == (code *)0x0)) {
      local_108 = 0;
      String::parse_latin1((String *)&local_108,"WebRTCDataChannelExtension");
      StringName::StringName((StringName *)&local_100,(String *)&local_108,false);
      ClassDB::get_virtual_method_compatibility_hashes
                ((StringName *)&local_f8,(StringName *)&local_100);
      if (local_f0[0] == 0) {
        CowData<unsigned_int>::_unref((CowData<unsigned_int> *)local_f0);
        if ((StringName::configured != '\0') && (lVar4 = 0, local_100 != 0)) goto LAB_0010bbeb;
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
LAB_0010bc02:
        lVar4 = *(long *)(this + 8);
        pcVar6 = *(code **)(lVar4 + 200);
        if (((pcVar6 == (code *)0x0) || (*(long *)(lVar4 + 0xe0) == 0)) &&
           (pcVar6 = *(code **)(lVar4 + 0xc0), pcVar6 == (code *)0x0)) goto LAB_0010ba9b;
        uVar3 = (*pcVar6)(*(undefined8 *)(lVar4 + 0xa0),this + 0x248);
        *(undefined8 *)(this + 600) = uVar3;
      }
      else {
        lVar4 = *(long *)(local_f0[0] + -8);
        CowData<unsigned_int>::_unref((CowData<unsigned_int> *)local_f0);
        if ((StringName::configured != '\0') && (local_100 != 0)) {
LAB_0010bbeb:
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
        if (lVar4 == 0) goto LAB_0010bc02;
      }
      lVar4 = *(long *)(this + 8);
    }
    else {
      uVar3 = (*pcVar6)(*(undefined8 *)(lVar4 + 0xa0),this + 0x248,uVar1);
      *(undefined8 *)(this + 600) = uVar3;
      lVar4 = *(long *)(this + 8);
    }
LAB_0010ba9b:
    if (*(char *)(lVar4 + 0x29) != '\0') {
      plVar5 = (long *)operator_new(0x18,"");
      *plVar5 = (long)(this + 600);
      plVar5[1] = (long)(this + 0x250);
      plVar5[2] = *(long *)(this + 0x168);
      *(long **)(this + 0x168) = plVar5;
    }
    this[0x250] = (WebRTCDataChannelExtension)0x1;
    MethodInfo::~MethodInfo((MethodInfo *)&local_c8);
  }
  pcVar6 = *(code **)(this + 600);
  if (pcVar6 == (code *)0x0) {
    if (_gdvirtual__is_ordered_call(bool&)::first_print == '\0') {
      bVar7 = false;
    }
    else {
      local_f8 = (char *)0x0;
      uStack_c0 = 0x23;
      uStack_bc = 0;
      local_c8 = 0x107bf8;
      uStack_c4 = 0;
      String::parse_latin1((StrRange *)&local_f8);
      local_108 = 0;
      local_c8 = 0x10b5ba;
      uStack_c4 = 0;
      uStack_c0 = 0xb;
      uStack_bc = 0;
      String::parse_latin1((StrRange *)&local_108);
      local_c8 = 0x10705a;
      uStack_c4 = 0;
      local_118 = 0;
      uStack_c0 = 2;
      uStack_bc = 0;
      String::parse_latin1((StrRange *)&local_118);
      if (*(code **)(*(long *)this + 0x48) == get_class) {
        if (*(long *)(this + 8) == 0) {
          local_128 = 0;
          local_c8 = 0x104902;
          uStack_c4 = 0;
          uStack_c0 = 0x1a;
          uStack_bc = 0;
          String::parse_latin1((StrRange *)&local_128);
        }
        else {
          lVar4 = *(long *)(*(long *)(this + 8) + 0x20);
          if (lVar4 == 0) {
            local_128 = 0;
          }
          else {
            __s = *(char **)(lVar4 + 8);
            local_128 = 0;
            if (__s == (char *)0x0) {
              if (*(long *)(lVar4 + 0x10) != 0) {
                CowData<char32_t>::_ref((CowData<char32_t> *)&local_128,(CowData *)(lVar4 + 0x10));
              }
            }
            else {
              sVar2 = strlen(__s);
              local_c8 = (int)__s;
              uStack_c4 = (undefined4)((ulong)__s >> 0x20);
              uStack_c0 = (undefined4)sVar2;
              uStack_bc = (undefined4)(sVar2 >> 0x20);
              String::parse_latin1((StrRange *)&local_128);
            }
          }
        }
      }
      else {
        (**(code **)(*(long *)this + 0x48))(&local_128,this);
      }
      local_138 = (CowData<char32_t> *)&local_128;
      operator+((char *)local_120,(String *)"Required virtual method ");
      String::operator+(local_110,(String *)local_120);
      String::operator+((String *)&local_100,local_110);
      String::operator+((String *)&local_c8,(String *)&local_100);
      _err_print_error("_gdvirtual__is_ordered_call",
                       "modules/webrtc/webrtc_data_channel_extension.h",0x39,(String *)&local_c8,0,0
                      );
      if (CONCAT44(uStack_c4,local_c8) != 0) {
        LOCK();
        plVar5 = (long *)(CONCAT44(uStack_c4,local_c8) + -0x10);
        *plVar5 = *plVar5 + -1;
        UNLOCK();
        if (*plVar5 == 0) {
          lVar4 = CONCAT44(uStack_c4,local_c8);
          local_c8 = 0;
          uStack_c4 = 0;
          Memory::free_static((void *)(lVar4 + -0x10),false);
        }
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_110);
      CowData<char32_t>::_unref(local_120);
      CowData<char32_t>::_unref(local_138);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_118);
      lVar4 = local_108;
      if (local_108 != 0) {
        LOCK();
        plVar5 = (long *)(local_108 + -0x10);
        *plVar5 = *plVar5 + -1;
        UNLOCK();
        if (*plVar5 == 0) {
          local_108 = 0;
          Memory::free_static((void *)(lVar4 + -0x10),false);
        }
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
      _gdvirtual__is_ordered_call(bool&)::first_print = '\0';
      bVar7 = false;
    }
  }
  else if (*(code **)(*(long *)(this + 8) + 0xe0) == (code *)0x0) {
    (*pcVar6)(*(undefined8 *)(this + 0x10),0,&local_c8);
    bVar7 = local_c8._0_1_ != (String)0x0;
  }
  else {
    (**(code **)(*(long *)(this + 8) + 0xe0))
              (*(undefined8 *)(this + 0x10),this + 0x248,pcVar6,0,&local_c8);
    bVar7 = local_c8._0_1_ != (String)0x0;
  }
LAB_0010b6ca:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar7;
}



/* WebRTCDataChannelExtension::get_label() const */

void WebRTCDataChannelExtension::get_label(void)

{
  undefined4 uVar1;
  long lVar2;
  size_t sVar3;
  long lVar4;
  code *pcVar5;
  char *pcVar6;
  char *pcVar7;
  long *in_RSI;
  CowData<char32_t> *in_RDI;
  long *plVar8;
  long in_FS_OFFSET;
  bool bVar9;
  CowData<char32_t> *local_138;
  undefined8 local_128;
  String local_120 [8];
  undefined8 local_118;
  String local_110 [8];
  undefined8 local_108;
  long local_100;
  char *local_f8;
  long local_f0 [5];
  int local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined1 local_b8 [16];
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_78;
  ulong local_70;
  undefined8 local_60;
  int local_58 [6];
  long local_40;
  
  plVar8 = (long *)in_RSI[0x13];
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined8 *)in_RDI = 0;
  if (plVar8 != (long *)0x0) {
    local_c8 = 0;
    uStack_c4 = 0;
    uStack_c0 = 0;
    (**(code **)(*plVar8 + 0x60))(local_58,plVar8,in_RSI + 0x46,0,0,&local_c8);
    if (local_c8 == 0) {
      Variant::operator_cast_to_String((Variant *)&local_f8);
      if (*(char **)in_RDI != local_f8) {
        CowData<char32_t>::_unref(in_RDI);
        pcVar7 = local_f8;
        local_f8 = (char *)0x0;
        *(char **)in_RDI = pcVar7;
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      goto LAB_0010be6d;
    }
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
  }
  if ((in_RSI[1] != 0) && ((char)in_RSI[0x47] == '\0')) {
    local_c8 = 0;
    uStack_c4 = 0;
    local_b8 = (undefined1  [16])0x0;
    local_f8 = "_get_label";
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
    local_f0[0] = 10;
    String::parse_latin1((StrRange *)&local_c8);
    local_90 = CONCAT44(local_90._4_4_,0x8c);
    GetTypeInfo<String,void>::get_class_info((GetTypeInfo<String,void> *)&local_f8);
    PropertyInfo::operator=((PropertyInfo *)&uStack_c0,(PropertyInfo *)&local_f8);
    PropertyInfo::~PropertyInfo((PropertyInfo *)&local_f8);
    local_70 = local_70 & 0xffffffff00000000;
    uVar1 = MethodInfo::get_compatibility_hash();
    lVar4 = in_RSI[1];
    in_RSI[0x48] = 0;
    pcVar5 = *(code **)(lVar4 + 0xd8);
    if (((pcVar5 == (code *)0x0) || (*(long *)(lVar4 + 0xe0) == 0)) &&
       (pcVar5 = *(code **)(lVar4 + 0xd0), pcVar5 == (code *)0x0)) {
      local_108 = 0;
      String::parse_latin1((String *)&local_108,"WebRTCDataChannelExtension");
      StringName::StringName((StringName *)&local_100,(String *)&local_108,false);
      ClassDB::get_virtual_method_compatibility_hashes
                ((StringName *)&local_f8,(StringName *)&local_100);
      if (local_f0[0] == 0) {
        lVar4 = 0;
        CowData<unsigned_int>::_unref((CowData<unsigned_int> *)local_f0);
        if (StringName::configured != '\0') goto LAB_0010c4a9;
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
LAB_0010c4c6:
        lVar4 = in_RSI[1];
        pcVar5 = *(code **)(lVar4 + 200);
        if (((pcVar5 == (code *)0x0) || (*(long *)(lVar4 + 0xe0) == 0)) &&
           (pcVar5 = *(code **)(lVar4 + 0xc0), pcVar5 == (code *)0x0)) goto LAB_0010c317;
        lVar4 = (*pcVar5)(*(undefined8 *)(lVar4 + 0xa0));
        in_RSI[0x48] = lVar4;
      }
      else {
        lVar4 = *(long *)(local_f0[0] + -8);
        CowData<unsigned_int>::_unref((CowData<unsigned_int> *)local_f0);
        if (StringName::configured != '\0') {
LAB_0010c4a9:
          if (local_100 != 0) {
            StringName::unref();
          }
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
        if (lVar4 == 0) goto LAB_0010c4c6;
      }
      lVar4 = in_RSI[1];
    }
    else {
      lVar4 = (*pcVar5)(*(undefined8 *)(lVar4 + 0xa0),in_RSI + 0x46,uVar1);
      in_RSI[0x48] = lVar4;
      lVar4 = in_RSI[1];
    }
LAB_0010c317:
    if (*(char *)(lVar4 + 0x29) != '\0') {
      plVar8 = (long *)operator_new(0x18,"");
      *plVar8 = (long)(in_RSI + 0x48);
      plVar8[1] = (long)(in_RSI + 0x47);
      plVar8[2] = in_RSI[0x2d];
      in_RSI[0x2d] = (long)plVar8;
    }
    *(undefined1 *)(in_RSI + 0x47) = 1;
    MethodInfo::~MethodInfo((MethodInfo *)&local_c8);
  }
  pcVar5 = (code *)in_RSI[0x48];
  if (pcVar5 == (code *)0x0) {
    if (_gdvirtual__get_label_call(String&)::first_print != '\0') {
      local_f8 = (char *)0x0;
      local_c8 = 0x107bf8;
      uStack_c4 = 0;
      uStack_c0 = 0x23;
      uStack_bc = 0;
      String::parse_latin1((StrRange *)&local_f8);
      local_c8 = 0x10bcbb;
      uStack_c4 = 0;
      local_108 = 0;
      uStack_c0 = 10;
      uStack_bc = 0;
      String::parse_latin1((StrRange *)&local_108);
      local_118 = 0;
      local_c8 = 0x10705a;
      uStack_c4 = 0;
      uStack_c0 = 2;
      uStack_bc = 0;
      String::parse_latin1((StrRange *)&local_118);
      if (*(code **)(*in_RSI + 0x48) == get_class) {
        if (in_RSI[1] == 0) {
          local_128 = 0;
          local_c8 = 0x104902;
          uStack_c4 = 0;
          uStack_c0 = 0x1a;
          uStack_bc = 0;
          String::parse_latin1((StrRange *)&local_128);
        }
        else {
          lVar4 = *(long *)(in_RSI[1] + 0x20);
          if (lVar4 == 0) {
            local_128 = 0;
          }
          else {
            pcVar7 = *(char **)(lVar4 + 8);
            local_128 = 0;
            if (pcVar7 == (char *)0x0) {
              if (*(long *)(lVar4 + 0x10) != 0) {
                CowData<char32_t>::_ref((CowData<char32_t> *)&local_128,(CowData *)(lVar4 + 0x10));
              }
            }
            else {
              sVar3 = strlen(pcVar7);
              local_c8 = (int)pcVar7;
              uStack_c4 = (undefined4)((ulong)pcVar7 >> 0x20);
              uStack_c0 = (undefined4)sVar3;
              uStack_bc = (undefined4)(sVar3 >> 0x20);
              String::parse_latin1((StrRange *)&local_128);
            }
          }
        }
      }
      else {
        (**(code **)(*in_RSI + 0x48))();
      }
      local_138 = (CowData<char32_t> *)&local_128;
      operator+((char *)local_120,(String *)"Required virtual method ");
      String::operator+(local_110,local_120);
      String::operator+((String *)&local_100,local_110);
      String::operator+((String *)&local_c8,(String *)&local_100);
      _err_print_error("_gdvirtual__get_label_call","modules/webrtc/webrtc_data_channel_extension.h"
                       ,0x38,(String *)&local_c8,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_110);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_120);
      CowData<char32_t>::_unref(local_138);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_118);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
      _gdvirtual__get_label_call(String&)::first_print = '\0';
    }
    goto LAB_0010be6d;
  }
  local_f8 = (char *)0x0;
  if (*(code **)(in_RSI[1] + 0xe0) == (code *)0x0) {
    (*pcVar5)(in_RSI[2],0,&local_f8);
    local_c8 = 0;
    uStack_c4 = 0;
    pcVar7 = local_f8;
    if (local_f8 != (char *)0x0) {
      plVar8 = (long *)(local_f8 + -0x10);
      do {
        lVar4 = *plVar8;
        if (lVar4 == 0) goto LAB_0010c380;
        LOCK();
        lVar2 = *plVar8;
        bVar9 = lVar4 == lVar2;
        if (bVar9) {
          *plVar8 = lVar4 + 1;
          lVar2 = lVar4;
        }
        UNLOCK();
      } while (!bVar9);
      if (lVar2 == -1) {
LAB_0010c380:
        pcVar7 = (char *)0x0;
      }
      else {
        local_c8 = (int)local_f8;
        uStack_c4 = (undefined4)((ulong)local_f8 >> 0x20);
      }
    }
    if (pcVar7 != *(char **)in_RDI) {
      CowData<char32_t>::_unref(in_RDI);
      *(char **)in_RDI = pcVar7;
      local_c8 = 0;
      uStack_c4 = 0;
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
    goto LAB_0010be38;
  }
  (**(code **)(in_RSI[1] + 0xe0))(in_RSI[2],in_RSI + 0x46,pcVar5,0,&local_f8);
  plVar8 = (long *)(local_f8 + -0x10);
  pcVar7 = local_f8;
  if (local_f8 == (char *)0x0) {
    pcVar6 = *(char **)in_RDI;
    if (pcVar6 == (char *)0x0) goto LAB_0010be6d;
LAB_0010beb3:
    LOCK();
    plVar8 = (long *)(pcVar6 + -0x10);
    *plVar8 = *plVar8 + -1;
    UNLOCK();
    if (*plVar8 == 0) {
      lVar4 = *(long *)in_RDI;
      *(undefined8 *)in_RDI = 0;
      Memory::free_static((void *)(lVar4 + -0x10),false);
    }
LAB_0010be35:
    *(char **)in_RDI = pcVar7;
  }
  else {
    do {
      lVar4 = *plVar8;
      if (lVar4 == 0) {
        pcVar6 = *(char **)in_RDI;
        goto LAB_0010bea8;
      }
      LOCK();
      lVar2 = *plVar8;
      bVar9 = lVar4 == lVar2;
      if (bVar9) {
        *plVar8 = lVar4 + 1;
        lVar2 = lVar4;
      }
      UNLOCK();
    } while (!bVar9);
    pcVar6 = *(char **)in_RDI;
    if (lVar2 == -1) {
LAB_0010bea8:
      pcVar7 = (char *)0x0;
      if (pcVar6 != (char *)0x0) goto LAB_0010beb3;
    }
    else {
      if (pcVar6 != local_f8) {
        if (pcVar6 != (char *)0x0) goto LAB_0010beb3;
        goto LAB_0010be35;
      }
      if (pcVar6 == (char *)0x0) goto LAB_0010be6d;
      plVar8 = (long *)(local_f8 + -0x10);
      LOCK();
      *plVar8 = *plVar8 + -1;
      UNLOCK();
      if (*plVar8 == 0) {
        Memory::free_static(plVar8,false);
      }
    }
  }
LAB_0010be38:
  pcVar7 = local_f8;
  if (local_f8 != (char *)0x0) {
    LOCK();
    plVar8 = (long *)(local_f8 + -0x10);
    *plVar8 = *plVar8 + -1;
    UNLOCK();
    if (*plVar8 == 0) {
      local_f8 = (char *)0x0;
      Memory::free_static(pcVar7 + -0x10,false);
    }
  }
LAB_0010be6d:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* WebRTCDataChannelExtension::get_ready_state() const */

ulong __thiscall WebRTCDataChannelExtension::get_ready_state(WebRTCDataChannelExtension *this)

{
  char *__s;
  undefined4 uVar1;
  size_t sVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  code *pcVar7;
  long in_FS_OFFSET;
  long local_128;
  CowData<char32_t> local_120 [8];
  long local_118;
  String local_110 [8];
  undefined8 local_108;
  long local_100;
  char *local_f8;
  long local_f0 [5];
  uint local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined1 local_b8 [16];
  undefined8 local_a8;
  undefined8 local_a0;
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
    (**(code **)(*plVar6 + 0x60))((Variant *)local_58,plVar6,this + 0x218,0,0,&local_c8);
    if (local_c8 == 0) {
      uVar3 = Variant::operator_cast_to_long((Variant *)local_58);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
        uVar3 = uVar3 & 0xffffffff;
      }
      goto LAB_0010c696;
    }
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
  }
  if ((*(long *)(this + 8) != 0) && (this[0x220] == (WebRTCDataChannelExtension)0x0)) {
    local_c8 = 0;
    uStack_c4 = 0;
    local_b8 = (undefined1  [16])0x0;
    local_f8 = "_get_ready_state";
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
    local_f0[0] = 0x10;
    String::parse_latin1((StrRange *)&local_c8);
    local_90 = CONCAT44(local_90._4_4_,0x8c);
    GetTypeInfo<WebRTCDataChannel::ChannelState,void>::get_class_info
              ((GetTypeInfo<WebRTCDataChannel::ChannelState,void> *)&local_f8);
    PropertyInfo::operator=((PropertyInfo *)&uStack_c0,(PropertyInfo *)&local_f8);
    PropertyInfo::~PropertyInfo((PropertyInfo *)&local_f8);
    local_70 = local_70 & 0xffffffff00000000;
    uVar1 = MethodInfo::get_compatibility_hash();
    lVar5 = *(long *)(this + 8);
    *(undefined8 *)(this + 0x228) = 0;
    pcVar7 = *(code **)(lVar5 + 0xd8);
    if (((pcVar7 == (code *)0x0) || (*(long *)(lVar5 + 0xe0) == 0)) &&
       (pcVar7 = *(code **)(lVar5 + 0xd0), pcVar7 == (code *)0x0)) {
      local_108 = 0;
      String::parse_latin1((String *)&local_108,"WebRTCDataChannelExtension");
      StringName::StringName((StringName *)&local_100,(String *)&local_108,false);
      ClassDB::get_virtual_method_compatibility_hashes
                ((StringName *)&local_f8,(StringName *)&local_100);
      if (local_f0[0] == 0) {
        CowData<unsigned_int>::_unref((CowData<unsigned_int> *)local_f0);
        if ((StringName::configured != '\0') && (lVar5 = 0, local_100 != 0)) goto LAB_0010cbc2;
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
LAB_0010cbd7:
        lVar5 = *(long *)(this + 8);
        pcVar7 = *(code **)(lVar5 + 200);
        if (((pcVar7 == (code *)0x0) || (*(long *)(lVar5 + 0xe0) == 0)) &&
           (pcVar7 = *(code **)(lVar5 + 0xc0), pcVar7 == (code *)0x0)) goto LAB_0010ca83;
        uVar4 = (*pcVar7)(*(undefined8 *)(lVar5 + 0xa0),this + 0x218);
        *(undefined8 *)(this + 0x228) = uVar4;
      }
      else {
        lVar5 = *(long *)(local_f0[0] + -8);
        CowData<unsigned_int>::_unref((CowData<unsigned_int> *)local_f0);
        if ((StringName::configured != '\0') && (local_100 != 0)) {
LAB_0010cbc2:
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
        if (lVar5 == 0) goto LAB_0010cbd7;
      }
      lVar5 = *(long *)(this + 8);
    }
    else {
      uVar4 = (*pcVar7)(*(undefined8 *)(lVar5 + 0xa0),this + 0x218,uVar1);
      *(undefined8 *)(this + 0x228) = uVar4;
      lVar5 = *(long *)(this + 8);
    }
LAB_0010ca83:
    if (*(char *)(lVar5 + 0x29) != '\0') {
      plVar6 = (long *)operator_new(0x18,"");
      *plVar6 = (long)(this + 0x228);
      plVar6[1] = (long)(this + 0x220);
      plVar6[2] = *(long *)(this + 0x168);
      *(long **)(this + 0x168) = plVar6;
    }
    this[0x220] = (WebRTCDataChannelExtension)0x1;
    MethodInfo::~MethodInfo((MethodInfo *)&local_c8);
  }
  pcVar7 = *(code **)(this + 0x228);
  if (pcVar7 == (code *)0x0) {
    if (_gdvirtual__get_ready_state_call(WebRTCDataChannel::ChannelState&)::first_print == '\0') {
      uVar3 = 0;
    }
    else {
      local_f8 = (char *)0x0;
      uStack_c0 = 0x23;
      uStack_bc = 0;
      local_c8 = 0x107bf8;
      uStack_c4 = 0;
      String::parse_latin1((StrRange *)&local_f8);
      local_c8 = 0x10c578;
      uStack_c4 = 0;
      local_108 = 0;
      uStack_c0 = 0x10;
      uStack_bc = 0;
      String::parse_latin1((StrRange *)&local_108);
      local_c8 = 0x10705a;
      uStack_c4 = 0;
      local_118 = 0;
      uStack_c0 = 2;
      uStack_bc = 0;
      String::parse_latin1((StrRange *)&local_118);
      if (*(code **)(*(long *)this + 0x48) == get_class) {
        if (*(long *)(this + 8) == 0) {
          local_128 = 0;
          local_c8 = 0x104902;
          uStack_c4 = 0;
          uStack_c0 = 0x1a;
          uStack_bc = 0;
          String::parse_latin1((StrRange *)&local_128);
        }
        else {
          lVar5 = *(long *)(*(long *)(this + 8) + 0x20);
          if (lVar5 == 0) {
            local_128 = 0;
          }
          else {
            __s = *(char **)(lVar5 + 8);
            local_128 = 0;
            if (__s == (char *)0x0) {
              if (*(long *)(lVar5 + 0x10) != 0) {
                CowData<char32_t>::_ref((CowData<char32_t> *)&local_128,(CowData *)(lVar5 + 0x10));
              }
            }
            else {
              sVar2 = strlen(__s);
              local_c8 = (uint)__s;
              uStack_c4 = (undefined4)((ulong)__s >> 0x20);
              uStack_c0 = (undefined4)sVar2;
              uStack_bc = (undefined4)(sVar2 >> 0x20);
              String::parse_latin1((StrRange *)&local_128);
            }
          }
        }
      }
      else {
        (**(code **)(*(long *)this + 0x48))(&local_128,this);
      }
      operator+((char *)local_120,(String *)"Required virtual method ");
      String::operator+(local_110,(String *)local_120);
      String::operator+((String *)&local_100,local_110);
      String::operator+((String *)&local_c8,(String *)&local_100);
      _err_print_error("_gdvirtual__get_ready_state_call",
                       "modules/webrtc/webrtc_data_channel_extension.h",0x37,(String *)&local_c8,0,0
                      );
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
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_110);
      CowData<char32_t>::_unref(local_120);
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
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
      _gdvirtual__get_ready_state_call(WebRTCDataChannel::ChannelState&)::first_print = '\0';
      uVar3 = 0;
    }
  }
  else if (*(code **)(*(long *)(this + 8) + 0xe0) == (code *)0x0) {
    (*pcVar7)(*(undefined8 *)(this + 0x10),0,&local_c8);
    uVar3 = (ulong)local_c8;
  }
  else {
    (**(code **)(*(long *)(this + 8) + 0xe0))
              (*(undefined8 *)(this + 0x10),this + 0x218,pcVar7,0,&local_c8);
    uVar3 = (ulong)local_c8;
  }
LAB_0010c696:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar3;
}



/* WebRTCDataChannelExtension::was_string_packet() const */

bool __thiscall WebRTCDataChannelExtension::was_string_packet(WebRTCDataChannelExtension *this)

{
  char *__s;
  undefined4 uVar1;
  size_t sVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  code *pcVar6;
  long in_FS_OFFSET;
  bool bVar7;
  long local_128;
  long local_120;
  undefined8 local_118;
  String local_110 [8];
  undefined8 local_108;
  long local_100;
  char *local_f8;
  long local_f0 [5];
  int local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined1 local_b8 [16];
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_78;
  ulong local_70;
  undefined8 local_60;
  int local_58 [6];
  long local_40;
  
  plVar5 = *(long **)(this + 0x98);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (plVar5 != (long *)0x0) {
    local_c8 = 0;
    uStack_c4 = 0;
    uStack_c0 = 0;
    (**(code **)(*plVar5 + 0x60))((Variant *)local_58,plVar5,this + 0x200,0,0,&local_c8);
    if (local_c8 == 0) {
      bVar7 = Variant::operator_cast_to_bool((Variant *)local_58);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      goto LAB_0010cdaa;
    }
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
  }
  if ((*(long *)(this + 8) != 0) && (this[0x208] == (WebRTCDataChannelExtension)0x0)) {
    local_c8 = 0;
    uStack_c4 = 0;
    local_b8 = (undefined1  [16])0x0;
    local_f8 = "_was_string_packet";
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
    local_f0[0] = 0x12;
    String::parse_latin1((StrRange *)&local_c8);
    local_90 = CONCAT44(local_90._4_4_,0x8c);
    GetTypeInfo<bool,void>::get_class_info((GetTypeInfo<bool,void> *)&local_f8);
    PropertyInfo::operator=((PropertyInfo *)&uStack_c0,(PropertyInfo *)&local_f8);
    PropertyInfo::~PropertyInfo((PropertyInfo *)&local_f8);
    local_70 = local_70 & 0xffffffff00000000;
    uVar1 = MethodInfo::get_compatibility_hash();
    lVar4 = *(long *)(this + 8);
    *(undefined8 *)(this + 0x210) = 0;
    pcVar6 = *(code **)(lVar4 + 0xd8);
    if (((pcVar6 == (code *)0x0) || (*(long *)(lVar4 + 0xe0) == 0)) &&
       (pcVar6 = *(code **)(lVar4 + 0xd0), pcVar6 == (code *)0x0)) {
      local_108 = 0;
      String::parse_latin1((String *)&local_108,"WebRTCDataChannelExtension");
      StringName::StringName((StringName *)&local_100,(String *)&local_108,false);
      ClassDB::get_virtual_method_compatibility_hashes
                ((StringName *)&local_f8,(StringName *)&local_100);
      if (local_f0[0] == 0) {
        CowData<unsigned_int>::_unref((CowData<unsigned_int> *)local_f0);
        if ((StringName::configured != '\0') && (lVar4 = 0, local_100 != 0)) goto LAB_0010d2ca;
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
LAB_0010d2df:
        lVar4 = *(long *)(this + 8);
        pcVar6 = *(code **)(lVar4 + 200);
        if (((pcVar6 == (code *)0x0) || (*(long *)(lVar4 + 0xe0) == 0)) &&
           (pcVar6 = *(code **)(lVar4 + 0xc0), pcVar6 == (code *)0x0)) goto LAB_0010d18a;
        uVar3 = (*pcVar6)(*(undefined8 *)(lVar4 + 0xa0),this + 0x200);
        *(undefined8 *)(this + 0x210) = uVar3;
      }
      else {
        lVar4 = *(long *)(local_f0[0] + -8);
        CowData<unsigned_int>::_unref((CowData<unsigned_int> *)local_f0);
        if ((StringName::configured != '\0') && (local_100 != 0)) {
LAB_0010d2ca:
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
        if (lVar4 == 0) goto LAB_0010d2df;
      }
      lVar4 = *(long *)(this + 8);
    }
    else {
      uVar3 = (*pcVar6)(*(undefined8 *)(lVar4 + 0xa0),this + 0x200,uVar1);
      *(undefined8 *)(this + 0x210) = uVar3;
      lVar4 = *(long *)(this + 8);
    }
LAB_0010d18a:
    if (*(char *)(lVar4 + 0x29) != '\0') {
      plVar5 = (long *)operator_new(0x18,"");
      *plVar5 = (long)(this + 0x210);
      plVar5[1] = (long)(this + 0x208);
      plVar5[2] = *(long *)(this + 0x168);
      *(long **)(this + 0x168) = plVar5;
    }
    this[0x208] = (WebRTCDataChannelExtension)0x1;
    MethodInfo::~MethodInfo((MethodInfo *)&local_c8);
  }
  pcVar6 = *(code **)(this + 0x210);
  if (pcVar6 != (code *)0x0) {
    if (*(code **)(*(long *)(this + 8) + 0xe0) == (code *)0x0) {
      (*pcVar6)(*(undefined8 *)(this + 0x10),0,&local_c8);
      bVar7 = local_c8._0_1_ != (String)0x0;
    }
    else {
      (**(code **)(*(long *)(this + 8) + 0xe0))
                (*(undefined8 *)(this + 0x10),this + 0x200,pcVar6,0,&local_c8);
      bVar7 = local_c8._0_1_ != (String)0x0;
    }
    goto LAB_0010cdaa;
  }
  if (_gdvirtual__was_string_packet_call(bool&)::first_print == '\0') {
    bVar7 = false;
    goto LAB_0010cdaa;
  }
  local_f8 = (char *)0x0;
  uStack_c0 = 0x23;
  uStack_bc = 0;
  local_c8 = 0x107bf8;
  uStack_c4 = 0;
  String::parse_latin1((StrRange *)&local_f8);
  local_c8 = 0x10cc8e;
  uStack_c4 = 0;
  local_108 = 0;
  uStack_c0 = 0x12;
  uStack_bc = 0;
  String::parse_latin1((StrRange *)&local_108);
  local_c8 = 0x10705a;
  uStack_c4 = 0;
  local_118 = 0;
  uStack_c0 = 2;
  uStack_bc = 0;
  String::parse_latin1((StrRange *)&local_118);
  if (*(code **)(*(long *)this + 0x48) == get_class) {
    if (*(long *)(this + 8) == 0) {
      local_128 = 0;
      local_c8 = 0x104902;
      uStack_c4 = 0;
      uStack_c0 = 0x1a;
      uStack_bc = 0;
LAB_0010ced0:
      String::parse_latin1((StrRange *)&local_128);
    }
    else {
      lVar4 = *(long *)(*(long *)(this + 8) + 0x20);
      if (lVar4 == 0) {
        local_128 = 0;
      }
      else {
        __s = *(char **)(lVar4 + 8);
        local_128 = 0;
        if (__s != (char *)0x0) {
          sVar2 = strlen(__s);
          local_c8 = (int)__s;
          uStack_c4 = (undefined4)((ulong)__s >> 0x20);
          uStack_c0 = (undefined4)sVar2;
          uStack_bc = (undefined4)(sVar2 >> 0x20);
          goto LAB_0010ced0;
        }
        if (*(long *)(lVar4 + 0x10) != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_128,(CowData *)(lVar4 + 0x10));
        }
      }
    }
  }
  else {
    (**(code **)(*(long *)this + 0x48))(&local_128,this);
  }
  operator+((char *)&local_120,(String *)"Required virtual method ");
  String::operator+(local_110,(String *)&local_120);
  String::operator+((String *)&local_100,local_110);
  String::operator+((String *)&local_c8,(String *)&local_100);
  _err_print_error("_gdvirtual__was_string_packet_call",
                   "modules/webrtc/webrtc_data_channel_extension.h",0x35,(String *)&local_c8,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_110);
  lVar4 = local_120;
  if (local_120 != 0) {
    LOCK();
    plVar5 = (long *)(local_120 + -0x10);
    *plVar5 = *plVar5 + -1;
    UNLOCK();
    if (*plVar5 == 0) {
      local_120 = 0;
      Memory::free_static((void *)(lVar4 + -0x10),false);
    }
  }
  lVar4 = local_128;
  if (local_128 != 0) {
    LOCK();
    plVar5 = (long *)(local_128 + -0x10);
    *plVar5 = *plVar5 + -1;
    UNLOCK();
    if (*plVar5 == 0) {
      local_128 = 0;
      Memory::free_static((void *)(lVar4 + -0x10),false);
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_118);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
  _gdvirtual__was_string_packet_call(bool&)::first_print = '\0';
  bVar7 = false;
LAB_0010cdaa:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar7;
}



/* WebRTCDataChannelExtension::get_write_mode() const */

ulong __thiscall WebRTCDataChannelExtension::get_write_mode(WebRTCDataChannelExtension *this)

{
  char *__s;
  undefined4 uVar1;
  size_t sVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  code *pcVar7;
  long in_FS_OFFSET;
  long local_128;
  CowData<char32_t> local_120 [8];
  undefined8 local_118;
  String local_110 [8];
  long local_108;
  long local_100;
  char *local_f8;
  long local_f0 [5];
  uint local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined1 local_b8 [16];
  undefined8 local_a8;
  undefined8 local_a0;
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
    (**(code **)(*plVar6 + 0x60))((Variant *)local_58,plVar6,this + 0x1e8,0,0,&local_c8);
    if (local_c8 == 0) {
      uVar3 = Variant::operator_cast_to_long((Variant *)local_58);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
        uVar3 = uVar3 & 0xffffffff;
      }
      goto LAB_0010d4a6;
    }
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
  }
  if ((*(long *)(this + 8) != 0) && (this[0x1f0] == (WebRTCDataChannelExtension)0x0)) {
    local_c8 = 0;
    uStack_c4 = 0;
    local_b8 = (undefined1  [16])0x0;
    local_f8 = "_get_write_mode";
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
    local_f0[0] = 0xf;
    String::parse_latin1((StrRange *)&local_c8);
    local_90 = CONCAT44(local_90._4_4_,0x8c);
    GetTypeInfo<WebRTCDataChannel::WriteMode,void>::get_class_info
              ((GetTypeInfo<WebRTCDataChannel::WriteMode,void> *)&local_f8);
    PropertyInfo::operator=((PropertyInfo *)&uStack_c0,(PropertyInfo *)&local_f8);
    PropertyInfo::~PropertyInfo((PropertyInfo *)&local_f8);
    local_70 = local_70 & 0xffffffff00000000;
    uVar1 = MethodInfo::get_compatibility_hash();
    lVar5 = *(long *)(this + 8);
    *(undefined8 *)(this + 0x1f8) = 0;
    pcVar7 = *(code **)(lVar5 + 0xd8);
    if (((pcVar7 == (code *)0x0) || (*(long *)(lVar5 + 0xe0) == 0)) &&
       (pcVar7 = *(code **)(lVar5 + 0xd0), pcVar7 == (code *)0x0)) {
      local_108 = 0;
      String::parse_latin1((String *)&local_108,"WebRTCDataChannelExtension");
      StringName::StringName((StringName *)&local_100,(String *)&local_108,false);
      ClassDB::get_virtual_method_compatibility_hashes
                ((StringName *)&local_f8,(StringName *)&local_100);
      if (local_f0[0] == 0) {
        CowData<unsigned_int>::_unref((CowData<unsigned_int> *)local_f0);
        if ((StringName::configured != '\0') && (lVar5 = 0, local_100 != 0)) goto LAB_0010d9da;
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
LAB_0010d9f1:
        lVar5 = *(long *)(this + 8);
        pcVar7 = *(code **)(lVar5 + 200);
        if (((pcVar7 == (code *)0x0) || (*(long *)(lVar5 + 0xe0) == 0)) &&
           (pcVar7 = *(code **)(lVar5 + 0xc0), pcVar7 == (code *)0x0)) goto LAB_0010d893;
        uVar4 = (*pcVar7)(*(undefined8 *)(lVar5 + 0xa0),this + 0x1e8);
        *(undefined8 *)(this + 0x1f8) = uVar4;
      }
      else {
        lVar5 = *(long *)(local_f0[0] + -8);
        CowData<unsigned_int>::_unref((CowData<unsigned_int> *)local_f0);
        if ((StringName::configured != '\0') && (local_100 != 0)) {
LAB_0010d9da:
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
        if (lVar5 == 0) goto LAB_0010d9f1;
      }
      lVar5 = *(long *)(this + 8);
    }
    else {
      uVar4 = (*pcVar7)(*(undefined8 *)(lVar5 + 0xa0),this + 0x1e8,uVar1);
      *(undefined8 *)(this + 0x1f8) = uVar4;
      lVar5 = *(long *)(this + 8);
    }
LAB_0010d893:
    if (*(char *)(lVar5 + 0x29) != '\0') {
      plVar6 = (long *)operator_new(0x18,"");
      *plVar6 = (long)(this + 0x1f8);
      plVar6[1] = (long)(this + 0x1f0);
      plVar6[2] = *(long *)(this + 0x168);
      *(long **)(this + 0x168) = plVar6;
    }
    this[0x1f0] = (WebRTCDataChannelExtension)0x1;
    MethodInfo::~MethodInfo((MethodInfo *)&local_c8);
  }
  pcVar7 = *(code **)(this + 0x1f8);
  if (pcVar7 == (code *)0x0) {
    if (_gdvirtual__get_write_mode_call(WebRTCDataChannel::WriteMode&)::first_print == '\0') {
      uVar3 = 0;
    }
    else {
      local_f8 = (char *)0x0;
      uStack_c0 = 0x23;
      uStack_bc = 0;
      local_c8 = 0x107bf8;
      uStack_c4 = 0;
      String::parse_latin1((StrRange *)&local_f8);
      local_108 = 0;
      local_c8 = 0x10d397;
      uStack_c4 = 0;
      uStack_c0 = 0xf;
      uStack_bc = 0;
      String::parse_latin1((StrRange *)&local_108);
      local_c8 = 0x10705a;
      uStack_c4 = 0;
      local_118 = 0;
      uStack_c0 = 2;
      uStack_bc = 0;
      String::parse_latin1((StrRange *)&local_118);
      if (*(code **)(*(long *)this + 0x48) == get_class) {
        if (*(long *)(this + 8) == 0) {
          local_128 = 0;
          local_c8 = 0x104902;
          uStack_c4 = 0;
          uStack_c0 = 0x1a;
          uStack_bc = 0;
          String::parse_latin1((StrRange *)&local_128);
        }
        else {
          lVar5 = *(long *)(*(long *)(this + 8) + 0x20);
          if (lVar5 == 0) {
            local_128 = 0;
          }
          else {
            __s = *(char **)(lVar5 + 8);
            local_128 = 0;
            if (__s == (char *)0x0) {
              if (*(long *)(lVar5 + 0x10) != 0) {
                CowData<char32_t>::_ref((CowData<char32_t> *)&local_128,(CowData *)(lVar5 + 0x10));
              }
            }
            else {
              sVar2 = strlen(__s);
              local_c8 = (uint)__s;
              uStack_c4 = (undefined4)((ulong)__s >> 0x20);
              uStack_c0 = (undefined4)sVar2;
              uStack_bc = (undefined4)(sVar2 >> 0x20);
              String::parse_latin1((StrRange *)&local_128);
            }
          }
        }
      }
      else {
        (**(code **)(*(long *)this + 0x48))(&local_128,this);
      }
      operator+((char *)local_120,(String *)"Required virtual method ");
      String::operator+(local_110,(String *)local_120);
      String::operator+((String *)&local_100,local_110);
      String::operator+((String *)&local_c8,(String *)&local_100);
      _err_print_error("_gdvirtual__get_write_mode_call",
                       "modules/webrtc/webrtc_data_channel_extension.h",0x33,(String *)&local_c8,0,0
                      );
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
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_110);
      CowData<char32_t>::_unref(local_120);
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
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_118);
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
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
      _gdvirtual__get_write_mode_call(WebRTCDataChannel::WriteMode&)::first_print = '\0';
      uVar3 = 0;
    }
  }
  else if (*(code **)(*(long *)(this + 8) + 0xe0) == (code *)0x0) {
    (*pcVar7)(*(undefined8 *)(this + 0x10),0,&local_c8);
    uVar3 = (ulong)local_c8;
  }
  else {
    (**(code **)(*(long *)(this + 8) + 0xe0))
              (*(undefined8 *)(this + 0x10),this + 0x1e8,pcVar7,0,&local_c8);
    uVar3 = (ulong)local_c8;
  }
LAB_0010d4a6:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar3;
}



/* WebRTCDataChannelExtension::get_max_packet_size() const */

int __thiscall WebRTCDataChannelExtension::get_max_packet_size(WebRTCDataChannelExtension *this)

{
  char *__s;
  int iVar1;
  undefined4 uVar2;
  size_t sVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  code *pcVar7;
  long in_FS_OFFSET;
  undefined8 local_128;
  CowData<char32_t> local_120 [8];
  long local_118;
  String local_110 [8];
  undefined8 local_108;
  long local_100;
  char *local_f8;
  long local_f0 [5];
  int local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined1 local_b8 [16];
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_60;
  int local_58 [6];
  long local_40;
  
  plVar6 = *(long **)(this + 0x98);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (plVar6 != (long *)0x0) {
    local_c8 = 0;
    uStack_c4 = 0;
    uStack_c0 = 0;
    (**(code **)(*plVar6 + 0x60))((Variant *)local_58,plVar6,this + 0x308,0,0,&local_c8);
    if (local_c8 == 0) {
      iVar1 = Variant::operator_cast_to_int((Variant *)local_58);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      goto LAB_0010dbc6;
    }
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
  }
  if ((*(long *)(this + 8) != 0) && (this[0x310] == (WebRTCDataChannelExtension)0x0)) {
    local_c8 = 0;
    uStack_c4 = 0;
    local_b8 = (undefined1  [16])0x0;
    local_f8 = "_get_max_packet_size";
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
    local_f0[0] = 0x14;
    String::parse_latin1((StrRange *)&local_c8);
    local_90 = CONCAT44(local_90._4_4_,0x8c);
    GetTypeInfo<int,void>::get_class_info((GetTypeInfo<int,void> *)&local_f8);
    PropertyInfo::operator=((PropertyInfo *)&uStack_c0,(PropertyInfo *)&local_f8);
    PropertyInfo::~PropertyInfo((PropertyInfo *)&local_f8);
    local_70 = CONCAT44(local_70._4_4_,3);
    uVar2 = MethodInfo::get_compatibility_hash();
    lVar5 = *(long *)(this + 8);
    *(undefined8 *)(this + 0x318) = 0;
    pcVar7 = *(code **)(lVar5 + 0xd8);
    if (((pcVar7 == (code *)0x0) || (*(long *)(lVar5 + 0xe0) == 0)) &&
       (pcVar7 = *(code **)(lVar5 + 0xd0), pcVar7 == (code *)0x0)) {
      local_108 = 0;
      String::parse_latin1((String *)&local_108,"WebRTCDataChannelExtension");
      StringName::StringName((StringName *)&local_100,(String *)&local_108,false);
      ClassDB::get_virtual_method_compatibility_hashes
                ((StringName *)&local_f8,(StringName *)&local_100);
      if (local_f0[0] == 0) {
        CowData<unsigned_int>::_unref((CowData<unsigned_int> *)local_f0);
        if ((StringName::configured != '\0') && (lVar5 = 0, local_100 != 0)) goto LAB_0010e102;
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
LAB_0010e117:
        lVar5 = *(long *)(this + 8);
        pcVar7 = *(code **)(lVar5 + 200);
        if (((pcVar7 == (code *)0x0) || (*(long *)(lVar5 + 0xe0) == 0)) &&
           (pcVar7 = *(code **)(lVar5 + 0xc0), pcVar7 == (code *)0x0)) goto LAB_0010dfc3;
        uVar4 = (*pcVar7)(*(undefined8 *)(lVar5 + 0xa0),this + 0x308);
        *(undefined8 *)(this + 0x318) = uVar4;
      }
      else {
        lVar5 = *(long *)(local_f0[0] + -8);
        CowData<unsigned_int>::_unref((CowData<unsigned_int> *)local_f0);
        if ((StringName::configured != '\0') && (local_100 != 0)) {
LAB_0010e102:
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
        if (lVar5 == 0) goto LAB_0010e117;
      }
      lVar5 = *(long *)(this + 8);
    }
    else {
      uVar4 = (*pcVar7)(*(undefined8 *)(lVar5 + 0xa0),this + 0x308,uVar2);
      *(undefined8 *)(this + 0x318) = uVar4;
      lVar5 = *(long *)(this + 8);
    }
LAB_0010dfc3:
    if (*(char *)(lVar5 + 0x29) != '\0') {
      plVar6 = (long *)operator_new(0x18,"");
      *plVar6 = (long)(this + 0x318);
      plVar6[1] = (long)(this + 0x310);
      plVar6[2] = *(long *)(this + 0x168);
      *(long **)(this + 0x168) = plVar6;
    }
    this[0x310] = (WebRTCDataChannelExtension)0x1;
    MethodInfo::~MethodInfo((MethodInfo *)&local_c8);
  }
  pcVar7 = *(code **)(this + 0x318);
  if (pcVar7 == (code *)0x0) {
    if (_gdvirtual__get_max_packet_size_call(int&)::first_print == '\0') {
      iVar1 = 0;
    }
    else {
      local_f8 = (char *)0x0;
      local_c8 = 0x107bf8;
      uStack_c4 = 0;
      uStack_c0 = 0x23;
      uStack_bc = 0;
      String::parse_latin1((StrRange *)&local_f8);
      local_c8 = 0x10daaa;
      uStack_c4 = 0;
      local_108 = 0;
      uStack_c0 = 0x14;
      uStack_bc = 0;
      String::parse_latin1((StrRange *)&local_108);
      local_118 = 0;
      local_c8 = 0x10705a;
      uStack_c4 = 0;
      uStack_c0 = 2;
      uStack_bc = 0;
      String::parse_latin1((StrRange *)&local_118);
      if (*(code **)(*(long *)this + 0x48) == get_class) {
        if (*(long *)(this + 8) == 0) {
          local_128 = 0;
          local_c8 = 0x104902;
          uStack_c4 = 0;
          uStack_c0 = 0x1a;
          uStack_bc = 0;
          String::parse_latin1((StrRange *)&local_128);
        }
        else {
          lVar5 = *(long *)(*(long *)(this + 8) + 0x20);
          if (lVar5 == 0) {
            local_128 = 0;
          }
          else {
            __s = *(char **)(lVar5 + 8);
            local_128 = 0;
            if (__s == (char *)0x0) {
              if (*(long *)(lVar5 + 0x10) != 0) {
                CowData<char32_t>::_ref((CowData<char32_t> *)&local_128,(CowData *)(lVar5 + 0x10));
              }
            }
            else {
              sVar3 = strlen(__s);
              local_c8 = (int)__s;
              uStack_c4 = (undefined4)((ulong)__s >> 0x20);
              uStack_c0 = (undefined4)sVar3;
              uStack_bc = (undefined4)(sVar3 >> 0x20);
              String::parse_latin1((StrRange *)&local_128);
            }
          }
        }
      }
      else {
        (**(code **)(*(long *)this + 0x48))(&local_128,this);
      }
      operator+((char *)local_120,(String *)"Required virtual method ");
      String::operator+(local_110,(String *)local_120);
      String::operator+((String *)&local_100,local_110);
      String::operator+((String *)&local_c8,(String *)&local_100);
      _err_print_error("_gdvirtual__get_max_packet_size_call",
                       "modules/webrtc/webrtc_data_channel_extension.h",0x43,(String *)&local_c8,0,0
                      );
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
      CowData<char32_t>::_unref((CowData<char32_t> *)local_110);
      CowData<char32_t>::_unref(local_120);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_128);
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
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
      _gdvirtual__get_max_packet_size_call(int&)::first_print = '\0';
      iVar1 = 0;
    }
  }
  else if (*(code **)(*(long *)(this + 8) + 0xe0) == (code *)0x0) {
    (*pcVar7)(*(undefined8 *)(this + 0x10),0,&local_c8);
    iVar1 = local_c8;
  }
  else {
    (**(code **)(*(long *)(this + 8) + 0xe0))
              (*(undefined8 *)(this + 0x10),this + 0x308,pcVar7,0,&local_c8);
    iVar1 = local_c8;
  }
LAB_0010dbc6:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar1;
}



/* WebRTCDataChannelExtension::get_available_packet_count() const */

int __thiscall
WebRTCDataChannelExtension::get_available_packet_count(WebRTCDataChannelExtension *this)

{
  char *pcVar1;
  int iVar2;
  undefined4 uVar3;
  size_t sVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  code *pcVar8;
  long in_FS_OFFSET;
  long local_128;
  long local_120;
  undefined8 local_118;
  String local_110 [8];
  undefined8 local_108;
  long local_100;
  char *local_f8;
  long local_f0 [5];
  int local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined1 local_b8 [16];
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_60;
  int local_58 [6];
  long local_40;
  
  plVar7 = *(long **)(this + 0x98);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (plVar7 != (long *)0x0) {
    local_c8 = 0;
    uStack_c4 = 0;
    uStack_c0 = 0;
    (**(code **)(*plVar7 + 0x60))((Variant *)local_58,plVar7,this + 0x2f0,0,0,&local_c8);
    if (local_c8 == 0) {
      iVar2 = Variant::operator_cast_to_int((Variant *)local_58);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      goto LAB_0010e2f6;
    }
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
  }
  if ((*(long *)(this + 8) != 0) && (this[0x2f8] == (WebRTCDataChannelExtension)0x0)) {
    local_c8 = 0;
    uStack_c4 = 0;
    local_b8 = (undefined1  [16])0x0;
    local_f8 = "_get_available_packet_count";
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
    local_f0[0] = 0x1b;
    String::parse_latin1((StrRange *)&local_c8);
    local_90 = CONCAT44(local_90._4_4_,0x8c);
    GetTypeInfo<int,void>::get_class_info((GetTypeInfo<int,void> *)&local_f8);
    PropertyInfo::operator=((PropertyInfo *)&uStack_c0,(PropertyInfo *)&local_f8);
    PropertyInfo::~PropertyInfo((PropertyInfo *)&local_f8);
    local_70 = CONCAT44(local_70._4_4_,3);
    uVar3 = MethodInfo::get_compatibility_hash();
    lVar6 = *(long *)(this + 8);
    *(undefined8 *)(this + 0x300) = 0;
    pcVar8 = *(code **)(lVar6 + 0xd8);
    if (((pcVar8 == (code *)0x0) || (*(long *)(lVar6 + 0xe0) == 0)) &&
       (pcVar8 = *(code **)(lVar6 + 0xd0), pcVar8 == (code *)0x0)) {
      local_108 = 0;
      String::parse_latin1((String *)&local_108,"WebRTCDataChannelExtension");
      StringName::StringName((StringName *)&local_100,(String *)&local_108,false);
      ClassDB::get_virtual_method_compatibility_hashes
                ((StringName *)&local_f8,(StringName *)&local_100);
      if (local_f0[0] == 0) {
        CowData<unsigned_int>::_unref((CowData<unsigned_int> *)local_f0);
        if ((StringName::configured != '\0') && (lVar6 = 0, local_100 != 0)) goto LAB_0010e81a;
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
LAB_0010e82f:
        lVar6 = *(long *)(this + 8);
        pcVar8 = *(code **)(lVar6 + 200);
        if (((pcVar8 == (code *)0x0) || (*(long *)(lVar6 + 0xe0) == 0)) &&
           (pcVar8 = *(code **)(lVar6 + 0xc0), pcVar8 == (code *)0x0)) goto LAB_0010e6e2;
        uVar5 = (*pcVar8)(*(undefined8 *)(lVar6 + 0xa0),this + 0x2f0);
        *(undefined8 *)(this + 0x300) = uVar5;
      }
      else {
        lVar6 = *(long *)(local_f0[0] + -8);
        CowData<unsigned_int>::_unref((CowData<unsigned_int> *)local_f0);
        if ((StringName::configured != '\0') && (local_100 != 0)) {
LAB_0010e81a:
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
        if (lVar6 == 0) goto LAB_0010e82f;
      }
      lVar6 = *(long *)(this + 8);
    }
    else {
      uVar5 = (*pcVar8)(*(undefined8 *)(lVar6 + 0xa0),this + 0x2f0,uVar3);
      *(undefined8 *)(this + 0x300) = uVar5;
      lVar6 = *(long *)(this + 8);
    }
LAB_0010e6e2:
    if (*(char *)(lVar6 + 0x29) != '\0') {
      plVar7 = (long *)operator_new(0x18,"");
      *plVar7 = (long)(this + 0x300);
      plVar7[1] = (long)(this + 0x2f8);
      plVar7[2] = *(long *)(this + 0x168);
      *(long **)(this + 0x168) = plVar7;
    }
    this[0x2f8] = (WebRTCDataChannelExtension)0x1;
    MethodInfo::~MethodInfo((MethodInfo *)&local_c8);
  }
  pcVar8 = *(code **)(this + 0x300);
  if (pcVar8 != (code *)0x0) {
    if (*(code **)(*(long *)(this + 8) + 0xe0) == (code *)0x0) {
      (*pcVar8)(*(undefined8 *)(this + 0x10),0,&local_c8);
      iVar2 = local_c8;
    }
    else {
      (**(code **)(*(long *)(this + 8) + 0xe0))
                (*(undefined8 *)(this + 0x10),this + 0x2f0,pcVar8,0,&local_c8);
      iVar2 = local_c8;
    }
    goto LAB_0010e2f6;
  }
  if (_gdvirtual__get_available_packet_count_call(int&)::first_print == '\0') {
    iVar2 = 0;
    goto LAB_0010e2f6;
  }
  local_f8 = (char *)0x0;
  uStack_c0 = 0x23;
  uStack_bc = 0;
  local_c8 = 0x107bf8;
  uStack_c4 = 0;
  String::parse_latin1((StrRange *)&local_f8);
  local_c8 = 0x10e1ce;
  uStack_c4 = 0;
  local_108 = 0;
  uStack_c0 = 0x1b;
  uStack_bc = 0;
  String::parse_latin1((StrRange *)&local_108);
  local_c8 = 0x10705a;
  uStack_c4 = 0;
  local_118 = 0;
  uStack_c0 = 2;
  uStack_bc = 0;
  String::parse_latin1((StrRange *)&local_118);
  if (*(code **)(*(long *)this + 0x48) == get_class) {
    if (*(long *)(this + 8) == 0) {
      local_128 = 0;
      local_c8 = 0x104902;
      uStack_c4 = 0;
      uStack_c0 = 0x1a;
      uStack_bc = 0;
LAB_0010e418:
      String::parse_latin1((StrRange *)&local_128);
    }
    else {
      lVar6 = *(long *)(*(long *)(this + 8) + 0x20);
      if (lVar6 == 0) {
        local_128 = 0;
      }
      else {
        pcVar1 = *(char **)(lVar6 + 8);
        local_128 = 0;
        if (pcVar1 != (char *)0x0) {
          sVar4 = strlen(pcVar1);
          local_c8 = (int)pcVar1;
          uStack_c4 = (undefined4)((ulong)pcVar1 >> 0x20);
          uStack_c0 = (undefined4)sVar4;
          uStack_bc = (undefined4)(sVar4 >> 0x20);
          goto LAB_0010e418;
        }
        if (*(long *)(lVar6 + 0x10) != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_128,(CowData *)(lVar6 + 0x10));
        }
      }
    }
  }
  else {
    (**(code **)(*(long *)this + 0x48))(&local_128,this);
  }
  operator+((char *)&local_120,(String *)"Required virtual method ");
  String::operator+(local_110,(String *)&local_120);
  String::operator+((String *)&local_100,local_110);
  String::operator+((String *)&local_c8,(String *)&local_100);
  _err_print_error("_gdvirtual__get_available_packet_count_call",
                   "modules/webrtc/webrtc_data_channel_extension.h",0x42,(String *)&local_c8,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_110);
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
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_118);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
  pcVar1 = local_f8;
  if (local_f8 != (char *)0x0) {
    LOCK();
    plVar7 = (long *)(local_f8 + -0x10);
    *plVar7 = *plVar7 + -1;
    UNLOCK();
    if (*plVar7 == 0) {
      local_f8 = (char *)0x0;
      Memory::free_static(pcVar1 + -0x10,false);
    }
  }
  _gdvirtual__get_available_packet_count_call(int&)::first_print = '\0';
  iVar2 = 0;
LAB_0010e2f6:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar2;
}



/* CowData<int>::_realloc(long) */

undefined8 __thiscall CowData<int>::_realloc(CowData<int> *this,long param_1)

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
/* Error CowData<int>::resize<false>(long) */

undefined8 __thiscall CowData<int>::resize<false>(CowData<int> *this,long param_1)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  
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
    lVar9 = 0;
    lVar3 = 0;
  }
  else {
    lVar9 = *(long *)(lVar3 + -8);
    if (param_1 == lVar9) {
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
    lVar3 = lVar9 * 4;
    if (lVar3 != 0) {
      uVar4 = lVar3 - 1U | lVar3 - 1U >> 1;
      uVar4 = uVar4 | uVar4 >> 2;
      uVar4 = uVar4 | uVar4 >> 4;
      uVar4 = uVar4 | uVar4 >> 8;
      uVar4 = uVar4 | uVar4 >> 0x10;
      lVar3 = (uVar4 | uVar4 >> 0x20) + 1;
    }
  }
  if (param_1 * 4 == 0) {
LAB_0010eb70:
    _err_print_error("resize","./core/templates/cowdata.h",0x16a,
                     "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                     ,0,0);
    return 6;
  }
  uVar4 = param_1 * 4 - 1;
  uVar4 = uVar4 | uVar4 >> 1;
  uVar4 = uVar4 | uVar4 >> 2;
  uVar4 = uVar4 | uVar4 >> 4;
  uVar4 = uVar4 | uVar4 >> 8;
  uVar4 = uVar4 | uVar4 >> 0x10;
  uVar4 = uVar4 | uVar4 >> 0x20;
  lVar8 = uVar4 + 1;
  if (lVar8 == 0) goto LAB_0010eb70;
  if (lVar9 < param_1) {
    if (lVar8 != lVar3) {
      if (lVar9 == 0) {
        puVar5 = (undefined8 *)Memory::alloc_static(uVar4 + 0x11,false);
        if (puVar5 == (undefined8 *)0x0) {
          _err_print_error("resize","./core/templates/cowdata.h",0x171,
                           "Parameter \"mem_new\" is null.",0,0);
          return 6;
        }
        puVar7 = puVar5 + 2;
        *puVar5 = 1;
        puVar5[1] = 0;
        *(undefined8 **)this = puVar7;
        goto LAB_0010ea81;
      }
      uVar6 = _realloc(this,lVar8);
      if ((int)uVar6 != 0) {
        return uVar6;
      }
    }
    puVar7 = *(undefined8 **)this;
    if (puVar7 != (undefined8 *)0x0) {
LAB_0010ea81:
      puVar7[-1] = param_1;
      return 0;
    }
  }
  else {
    if ((lVar8 != lVar3) && (uVar6 = _realloc(this,lVar8), (int)uVar6 != 0)) {
      return uVar6;
    }
    if (*(long *)this != 0) {
      *(long *)(*(long *)this + -8) = param_1;
      return 0;
    }
  }
  _DAT_00000000 = 0;
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}



/* WebRTCDataChannelExtension::_initialize_classv() */

void WebRTCDataChannelExtension::_initialize_classv(void)

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
    if (WebRTCDataChannel::initialize_class()::initialized == '\0') {
      if (PacketPeer::initialize_class()::initialized == '\0') {
        if (RefCounted::initialize_class()::initialized == '\0') {
          Object::initialize_class();
          local_68 = 0;
          local_50 = 6;
          local_58 = "Object";
          String::parse_latin1((StrRange *)&local_68);
          StringName::StringName((StringName *)&local_60,(StrRange *)&local_68,false);
          local_58 = "RefCounted";
          local_70 = 0;
          local_50 = 10;
          String::parse_latin1((StrRange *)&local_70);
          StringName::StringName((StringName *)&local_58,(StrRange *)&local_70,false);
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
          if ((code *)PTR__bind_methods_00112008 != RefCounted::_bind_methods) {
            RefCounted::_bind_methods();
          }
          RefCounted::initialize_class()::initialized = '\x01';
        }
        local_68 = 0;
        local_58 = "RefCounted";
        local_50 = 10;
        String::parse_latin1((StrRange *)&local_68);
        StringName::StringName((StringName *)&local_60,(StrRange *)&local_68,false);
        local_58 = "PacketPeer";
        local_70 = 0;
        local_50 = 10;
        String::parse_latin1((StrRange *)&local_70);
        StringName::StringName((StringName *)&local_58,(StrRange *)&local_70,false);
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
        PacketPeer::_bind_methods();
        PacketPeer::initialize_class()::initialized = '\x01';
      }
      local_58 = "PacketPeer";
      local_68 = 0;
      local_50 = 10;
      String::parse_latin1((StrRange *)&local_68);
      StringName::StringName((StringName *)&local_60,(StrRange *)&local_68,false);
      local_58 = "WebRTCDataChannel";
      local_70 = 0;
      local_50 = 0x11;
      String::parse_latin1((StrRange *)&local_70);
      StringName::StringName((StringName *)&local_58,(StrRange *)&local_70,false);
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
      if ((code *)_GLOBAL_OFFSET_TABLE_ != PacketPeer::_bind_methods) {
        WebRTCDataChannel::_bind_methods();
      }
      WebRTCDataChannel::initialize_class()::initialized = '\x01';
    }
    local_58 = "WebRTCDataChannel";
    local_68 = 0;
    local_50 = 0x11;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(StrRange *)&local_68,false);
    local_58 = "WebRTCDataChannelExtension";
    local_70 = 0;
    local_50 = 0x1a;
    String::parse_latin1((StrRange *)&local_70);
    StringName::StringName((StringName *)&local_58,(StrRange *)&local_70,false);
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
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WebRTCDataChannelExtension::set_write_mode(WebRTCDataChannel::WriteMode) */

void __thiscall
WebRTCDataChannelExtension::set_write_mode(WebRTCDataChannelExtension *this,int param_2)

{
  char *__s;
  undefined4 uVar1;
  size_t sVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  code *pcVar6;
  long in_FS_OFFSET;
  CowData<char32_t> *local_160;
  undefined8 local_158;
  CowData<char32_t> local_150 [8];
  undefined8 local_148;
  String local_140 [8];
  undefined8 local_138;
  long local_130;
  char *local_128;
  long local_120 [5];
  int local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined1 local_e8 [16];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8 [2];
  undefined8 local_a8;
  undefined8 local_a0;
  Vector<int> local_98 [8];
  undefined8 local_90;
  Variant *local_80;
  int local_78 [8];
  int *local_58 [3];
  long local_40;
  
  plVar5 = *(long **)(this + 0x98);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (plVar5 != (long *)0x0) {
    local_f8 = 0;
    uStack_f4 = 0;
    uStack_f0 = 0;
    Variant::Variant((Variant *)local_78,param_2);
    local_80 = (Variant *)local_78;
    (**(code **)(*plVar5 + 0x60))(local_58,plVar5,this + 0x1d0,&local_80,1,&local_f8);
    if (Variant::needs_deinit[(int)local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (local_f8 == 0) {
      if (Variant::needs_deinit[local_78[0]] != '\0') {
        Variant::_clear_internal();
      }
      goto LAB_0010f29a;
    }
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
  }
  if ((*(long *)(this + 8) != 0) && (this[0x1d8] == (WebRTCDataChannelExtension)0x0)) {
    local_f8 = 0;
    uStack_f4 = 0;
    local_e8 = (undefined1  [16])0x0;
    local_128 = "_set_write_mode";
    uStack_f0 = 0;
    uStack_ec = 0;
    local_d8 = 0;
    local_d0 = 0;
    local_c8 = 6;
    local_c0 = 1;
    local_b8[0] = 0;
    local_a8 = 0;
    local_a0 = 0;
    local_90 = 0;
    local_120[0] = 0xf;
    String::parse_latin1((StrRange *)&local_f8);
    local_c0 = CONCAT44(local_c0._4_4_,0x88);
    GetTypeInfo<WebRTCDataChannel::WriteMode,void>::get_class_info
              ((GetTypeInfo<WebRTCDataChannel::WriteMode,void> *)&local_128);
    List<PropertyInfo,DefaultAllocator>::push_back
              ((List<PropertyInfo,DefaultAllocator> *)local_b8,(PropertyInfo *)&local_128);
    PropertyInfo::~PropertyInfo((PropertyInfo *)&local_128);
    Vector<int>::push_back(local_98,0);
    uVar1 = MethodInfo::get_compatibility_hash();
    lVar4 = *(long *)(this + 8);
    *(undefined8 *)(this + 0x1e0) = 0;
    pcVar6 = *(code **)(lVar4 + 0xd8);
    if (((pcVar6 == (code *)0x0) || (*(long *)(lVar4 + 0xe0) == 0)) &&
       (pcVar6 = *(code **)(lVar4 + 0xd0), pcVar6 == (code *)0x0)) {
      local_138 = 0;
      String::parse_latin1((String *)&local_138,"WebRTCDataChannelExtension");
      StringName::StringName((StringName *)&local_130,(String *)&local_138,false);
      ClassDB::get_virtual_method_compatibility_hashes
                ((StringName *)&local_128,(StringName *)&local_130);
      if (local_120[0] == 0) {
        lVar4 = 0;
        CowData<unsigned_int>::_unref((CowData<unsigned_int> *)local_120);
        if (StringName::configured != '\0') goto LAB_0010f751;
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_138);
LAB_0010f76e:
        lVar4 = *(long *)(this + 8);
        pcVar6 = *(code **)(lVar4 + 200);
        if (((pcVar6 == (code *)0x0) || (*(long *)(lVar4 + 0xe0) == 0)) &&
           (pcVar6 = *(code **)(lVar4 + 0xc0), pcVar6 == (code *)0x0)) goto LAB_0010f612;
        uVar3 = (*pcVar6)(*(undefined8 *)(lVar4 + 0xa0),this + 0x1d0);
        *(undefined8 *)(this + 0x1e0) = uVar3;
      }
      else {
        lVar4 = *(long *)(local_120[0] + -8);
        CowData<unsigned_int>::_unref((CowData<unsigned_int> *)local_120);
        if (StringName::configured != '\0') {
LAB_0010f751:
          if (local_130 != 0) {
            StringName::unref();
          }
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_138);
        if (lVar4 == 0) goto LAB_0010f76e;
      }
      lVar4 = *(long *)(this + 8);
    }
    else {
      uVar3 = (*pcVar6)(*(undefined8 *)(lVar4 + 0xa0),this + 0x1d0,uVar1);
      *(undefined8 *)(this + 0x1e0) = uVar3;
      lVar4 = *(long *)(this + 8);
    }
LAB_0010f612:
    if (*(char *)(lVar4 + 0x29) != '\0') {
      plVar5 = (long *)operator_new(0x18,"");
      *plVar5 = (long)(this + 0x1e0);
      plVar5[1] = (long)(this + 0x1d8);
      plVar5[2] = *(long *)(this + 0x168);
      *(long **)(this + 0x168) = plVar5;
    }
    this[0x1d8] = (WebRTCDataChannelExtension)0x1;
    MethodInfo::~MethodInfo((MethodInfo *)&local_f8);
  }
  pcVar6 = *(code **)(this + 0x1e0);
  if (pcVar6 == (code *)0x0) {
    if (_gdvirtual__set_write_mode_call(WebRTCDataChannel::WriteMode)::first_print != '\0') {
      local_128 = (char *)0x0;
      local_f8 = 0x107bf8;
      uStack_f4 = 0;
      uStack_f0 = 0x23;
      uStack_ec = 0;
      String::parse_latin1((StrRange *)&local_128);
      local_f8 = 0x1048c8;
      uStack_f4 = 0;
      local_138 = 0;
      uStack_f0 = 0xf;
      uStack_ec = 0;
      String::parse_latin1((StrRange *)&local_138);
      local_148 = 0;
      local_f8 = 0x10705a;
      uStack_f4 = 0;
      uStack_f0 = 2;
      uStack_ec = 0;
      String::parse_latin1((StrRange *)&local_148);
      if (*(code **)(*(long *)this + 0x48) == get_class) {
        if (*(long *)(this + 8) == 0) {
          local_158 = 0;
          local_f8 = 0x104902;
          uStack_f4 = 0;
          uStack_f0 = 0x1a;
          uStack_ec = 0;
          String::parse_latin1((StrRange *)&local_158);
        }
        else {
          lVar4 = *(long *)(*(long *)(this + 8) + 0x20);
          if (lVar4 == 0) {
            local_158 = 0;
          }
          else {
            __s = *(char **)(lVar4 + 8);
            local_158 = 0;
            if (__s == (char *)0x0) {
              if (*(long *)(lVar4 + 0x10) != 0) {
                CowData<char32_t>::_ref((CowData<char32_t> *)&local_158,(CowData *)(lVar4 + 0x10));
              }
            }
            else {
              sVar2 = strlen(__s);
              local_f8 = (int)__s;
              uStack_f4 = (undefined4)((ulong)__s >> 0x20);
              uStack_f0 = (undefined4)sVar2;
              uStack_ec = (undefined4)(sVar2 >> 0x20);
              String::parse_latin1((StrRange *)&local_158);
            }
          }
        }
      }
      else {
        (**(code **)(*(long *)this + 0x48))(&local_158,this);
      }
      local_160 = (CowData<char32_t> *)&local_158;
      operator+((char *)local_150,(String *)"Required virtual method ");
      String::operator+(local_140,(String *)local_150);
      String::operator+((String *)&local_130,local_140);
      String::operator+((String *)&local_f8,(String *)&local_130);
      _err_print_error("_gdvirtual__set_write_mode_call",
                       "modules/webrtc/webrtc_data_channel_extension.h",0x32,(String *)&local_f8,0,0
                      );
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_130);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_140);
      CowData<char32_t>::_unref(local_150);
      CowData<char32_t>::_unref(local_160);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_148);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_138);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_128);
      _gdvirtual__set_write_mode_call(WebRTCDataChannel::WriteMode)::first_print = '\0';
    }
  }
  else {
    local_58[0] = &local_f8;
    uStack_f4 = 0;
    local_f8 = param_2;
    if (*(code **)(*(long *)(this + 8) + 0xe0) == (code *)0x0) {
      (*pcVar6)(*(undefined8 *)(this + 0x10),local_58,0);
    }
    else {
      (**(code **)(*(long *)(this + 8) + 0xe0))
                (*(undefined8 *)(this + 0x10),this + 0x1d0,pcVar6,local_58,0);
    }
  }
LAB_0010f29a:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
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
/* PropertyInfo::~PropertyInfo() */

void __thiscall PropertyInfo::~PropertyInfo(PropertyInfo *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* WebRTCDataChannelExtension::~WebRTCDataChannelExtension() */

void __thiscall
WebRTCDataChannelExtension::~WebRTCDataChannelExtension(WebRTCDataChannelExtension *this)

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




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
  StringName::operator=((StringName *)(puVar3 + 4),param_1 + 0x10);
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



/* ScriptLanguageExtension::_bind_methods() */

void ScriptLanguageExtension::_bind_methods(void)

{
  long *plVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  long lVar11;
  long in_FS_OFFSET;
  StringName *local_138;
  CowData<char32_t> *local_130;
  long local_120;
  long local_118;
  long local_110;
  long local_108;
  long local_100;
  long local_f8;
  undefined8 local_f0;
  char *local_e8;
  undefined1 local_e0 [16];
  int local_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  char *local_b8;
  undefined8 local_b0;
  undefined1 local_a8 [16];
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78 [2];
  undefined8 local_68;
  ulong local_60;
  Vector<int> local_58 [8];
  undefined8 local_50;
  long local_40;
  
  local_e0._8_8_ = local_e0._0_8_;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_a8 = (undefined1  [16])0x0;
  local_f0 = 0;
  local_e8 = "_get_name";
  local_b8 = (char *)0x0;
  local_b0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 6;
  local_80 = 1;
  local_78[0] = 0;
  local_68 = 0;
  local_60 = 0;
  local_50 = 0;
  local_e0._0_8_ = 9;
  String::parse_latin1((StrRange *)&local_b8);
  local_80 = CONCAT44(local_80._4_4_,0x8c);
  GetTypeInfo<String,void>::get_class_info((GetTypeInfo<String,void> *)&local_e8);
  PropertyInfo::operator=((PropertyInfo *)&local_b0,(PropertyInfo *)&local_e8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_e8);
  local_60 = local_60 & 0xffffffff00000000;
  local_100 = 0;
  local_e8 = "ScriptLanguageExtension";
  local_e0._0_8_ = 0x17;
  String::parse_latin1((StrRange *)&local_100);
  StringName::StringName((StringName *)&local_e8,(String *)&local_100,false);
  ClassDB::add_virtual_method
            ((StringName *)&local_e8,(MethodInfo *)&local_b8,true,(Vector *)&local_f8,false);
  if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  MethodInfo::~MethodInfo((MethodInfo *)&local_b8);
  CowData<String>::_unref((CowData<String> *)&local_f0);
  local_a8 = (undefined1  [16])0x0;
  local_e8 = "_init";
  local_f0 = 0;
  local_b8 = (char *)0x0;
  local_b0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 6;
  local_80 = 1;
  local_78[0] = 0;
  local_68 = 0;
  local_60 = 0;
  local_50 = 0;
  local_e0._0_8_ = 5;
  String::parse_latin1((StrRange *)&local_b8);
  local_80 = CONCAT44(local_80._4_4_,0x88);
  local_100 = 0;
  local_e8 = "ScriptLanguageExtension";
  local_e0._0_8_ = 0x17;
  String::parse_latin1((StrRange *)&local_100);
  StringName::StringName((StringName *)&local_e8,(String *)&local_100,false);
  ClassDB::add_virtual_method
            ((StringName *)&local_e8,(MethodInfo *)&local_b8,true,(Vector *)&local_f8,false);
  if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  MethodInfo::~MethodInfo((MethodInfo *)&local_b8);
  CowData<String>::_unref((CowData<String> *)&local_f0);
  local_a8 = (undefined1  [16])0x0;
  local_e8 = "_get_type";
  local_f0 = 0;
  local_b8 = (char *)0x0;
  local_b0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 6;
  local_80 = 1;
  local_78[0] = 0;
  local_68 = 0;
  local_60 = 0;
  local_50 = 0;
  local_e0._0_8_ = 9;
  String::parse_latin1((StrRange *)&local_b8);
  local_80 = CONCAT44(local_80._4_4_,0x8c);
  GetTypeInfo<String,void>::get_class_info((GetTypeInfo<String,void> *)&local_e8);
  PropertyInfo::operator=((PropertyInfo *)&local_b0,(PropertyInfo *)&local_e8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_e8);
  local_60 = local_60 & 0xffffffff00000000;
  local_100 = 0;
  local_e8 = "ScriptLanguageExtension";
  local_e0._0_8_ = 0x17;
  String::parse_latin1((StrRange *)&local_100);
  StringName::StringName((StringName *)&local_e8,(String *)&local_100,false);
  ClassDB::add_virtual_method
            ((StringName *)&local_e8,(MethodInfo *)&local_b8,true,(Vector *)&local_f8,false);
  if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  MethodInfo::~MethodInfo((MethodInfo *)&local_b8);
  CowData<String>::_unref((CowData<String> *)&local_f0);
  local_a8 = (undefined1  [16])0x0;
  local_e8 = "_get_extension";
  local_f0 = 0;
  local_b8 = (char *)0x0;
  local_b0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 6;
  local_80 = 1;
  local_78[0] = 0;
  local_68 = 0;
  local_60 = 0;
  local_50 = 0;
  local_e0._0_8_ = 0xe;
  String::parse_latin1((StrRange *)&local_b8);
  local_80 = CONCAT44(local_80._4_4_,0x8c);
  GetTypeInfo<String,void>::get_class_info((GetTypeInfo<String,void> *)&local_e8);
  PropertyInfo::operator=((PropertyInfo *)&local_b0,(PropertyInfo *)&local_e8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_e8);
  local_60 = local_60 & 0xffffffff00000000;
  local_100 = 0;
  local_e8 = "ScriptLanguageExtension";
  local_e0._0_8_ = 0x17;
  String::parse_latin1((StrRange *)&local_100);
  StringName::StringName((StringName *)&local_e8,(String *)&local_100,false);
  ClassDB::add_virtual_method
            ((StringName *)&local_e8,(MethodInfo *)&local_b8,true,(Vector *)&local_f8,false);
  if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  MethodInfo::~MethodInfo((MethodInfo *)&local_b8);
  CowData<String>::_unref((CowData<String> *)&local_f0);
  local_a8 = (undefined1  [16])0x0;
  local_e8 = "_finish";
  local_f0 = 0;
  local_b8 = (char *)0x0;
  local_b0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 6;
  local_80 = 1;
  local_78[0] = 0;
  local_68 = 0;
  local_60 = 0;
  local_50 = 0;
  local_e0._0_8_ = 7;
  String::parse_latin1((StrRange *)&local_b8);
  local_80 = CONCAT44(local_80._4_4_,0x88);
  local_100 = 0;
  local_e8 = "ScriptLanguageExtension";
  local_e0._0_8_ = 0x17;
  String::parse_latin1((StrRange *)&local_100);
  StringName::StringName((StringName *)&local_e8,(String *)&local_100,false);
  ClassDB::add_virtual_method
            ((StringName *)&local_e8,(MethodInfo *)&local_b8,true,(Vector *)&local_f8,false);
  if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  MethodInfo::~MethodInfo((MethodInfo *)&local_b8);
  CowData<String>::_unref((CowData<String> *)&local_f0);
  local_a8 = (undefined1  [16])0x0;
  local_e8 = "_get_reserved_words";
  local_f0 = 0;
  local_b8 = (char *)0x0;
  local_b0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 6;
  local_80 = 1;
  local_78[0] = 0;
  local_68 = 0;
  local_60 = 0;
  local_50 = 0;
  local_e0._0_8_ = 0x13;
  String::parse_latin1((StrRange *)&local_b8);
  local_80 = CONCAT44(local_80._4_4_,0x8c);
  GetTypeInfo<Vector<String>,void>::get_class_info((GetTypeInfo<Vector<String>,void> *)&local_e8);
  PropertyInfo::operator=((PropertyInfo *)&local_b0,(PropertyInfo *)&local_e8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_e8);
  local_60 = local_60 & 0xffffffff00000000;
  local_100 = 0;
  local_e8 = "ScriptLanguageExtension";
  local_e0._0_8_ = 0x17;
  String::parse_latin1((StrRange *)&local_100);
  StringName::StringName((StringName *)&local_e8,(String *)&local_100,false);
  ClassDB::add_virtual_method
            ((StringName *)&local_e8,(MethodInfo *)&local_b8,true,(Vector *)&local_f8,false);
  if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  MethodInfo::~MethodInfo((MethodInfo *)&local_b8);
  CowData<String>::_unref((CowData<String> *)&local_f0);
  local_f0 = 0;
  local_e8 = (char *)0x0;
  local_b8 = "keyword";
  local_b0 = 7;
  String::parse_latin1((StrRange *)&local_e8);
  local_b8 = (char *)0x0;
  if (local_e8 != (char *)0x0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_b8,(CowData *)&local_e8);
  }
  Vector<String>::push_back((Vector<String> *)&local_f8,(StrRange *)&local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
  local_a8 = (undefined1  [16])0x0;
  local_e8 = "_is_control_flow_keyword";
  local_b8 = (char *)0x0;
  local_b0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 6;
  local_80 = 1;
  local_78[0] = 0;
  local_68 = 0;
  local_60 = 0;
  local_50 = 0;
  local_e0._0_8_ = 0x18;
  String::parse_latin1((StrRange *)&local_b8);
  local_80 = CONCAT44(local_80._4_4_,0x8c);
  GetTypeInfo<bool,void>::get_class_info((GetTypeInfo<bool,void> *)&local_e8);
  PropertyInfo::operator=((PropertyInfo *)&local_b0,(PropertyInfo *)&local_e8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_e8);
  local_60 = local_60 & 0xffffffff00000000;
  GetTypeInfo<String_const&,void>::get_class_info((GetTypeInfo<String_const&,void> *)&local_e8);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_78,(PropertyInfo *)&local_e8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_e8);
  Vector<int>::push_back(local_58,0);
  local_100 = 0;
  local_e8 = "ScriptLanguageExtension";
  local_e0._0_8_ = 0x17;
  String::parse_latin1((StrRange *)&local_100);
  StringName::StringName((StringName *)&local_e8,(String *)&local_100,false);
  ClassDB::add_virtual_method
            ((StringName *)&local_e8,(MethodInfo *)&local_b8,true,(Vector *)&local_f8,false);
  if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  MethodInfo::~MethodInfo((MethodInfo *)&local_b8);
  CowData<String>::_unref((CowData<String> *)&local_f0);
  local_a8 = (undefined1  [16])0x0;
  local_e8 = "_get_comment_delimiters";
  local_f0 = 0;
  local_b8 = (char *)0x0;
  local_b0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 6;
  local_80 = 1;
  local_78[0] = 0;
  local_68 = 0;
  local_60 = 0;
  local_50 = 0;
  local_e0._0_8_ = 0x17;
  String::parse_latin1((StrRange *)&local_b8);
  local_80 = CONCAT44(local_80._4_4_,0x8c);
  GetTypeInfo<Vector<String>,void>::get_class_info((GetTypeInfo<Vector<String>,void> *)&local_e8);
  PropertyInfo::operator=((PropertyInfo *)&local_b0,(PropertyInfo *)&local_e8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_e8);
  local_60 = local_60 & 0xffffffff00000000;
  local_100 = 0;
  local_e8 = "ScriptLanguageExtension";
  local_e0._0_8_ = 0x17;
  String::parse_latin1((StrRange *)&local_100);
  StringName::StringName((StringName *)&local_e8,(String *)&local_100,false);
  ClassDB::add_virtual_method
            ((StringName *)&local_e8,(MethodInfo *)&local_b8,true,(Vector *)&local_f8,false);
  if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  MethodInfo::~MethodInfo((MethodInfo *)&local_b8);
  CowData<String>::_unref((CowData<String> *)&local_f0);
  local_a8 = (undefined1  [16])0x0;
  local_e8 = "_get_doc_comment_delimiters";
  local_f0 = 0;
  local_b8 = (char *)0x0;
  local_b0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 6;
  local_80 = 1;
  local_78[0] = 0;
  local_68 = 0;
  local_60 = 0;
  local_50 = 0;
  local_e0._0_8_ = 0x1b;
  String::parse_latin1((StrRange *)&local_b8);
  local_80 = CONCAT44(local_80._4_4_,0xc);
  GetTypeInfo<Vector<String>,void>::get_class_info((GetTypeInfo<Vector<String>,void> *)&local_e8);
  PropertyInfo::operator=((PropertyInfo *)&local_b0,(PropertyInfo *)&local_e8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_e8);
  local_60 = local_60 & 0xffffffff00000000;
  local_100 = 0;
  local_e8 = "ScriptLanguageExtension";
  local_e0._0_8_ = 0x17;
  String::parse_latin1((StrRange *)&local_100);
  StringName::StringName((StringName *)&local_e8,(String *)&local_100,false);
  ClassDB::add_virtual_method
            ((StringName *)&local_e8,(MethodInfo *)&local_b8,true,(Vector *)&local_f8,false);
  if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  MethodInfo::~MethodInfo((MethodInfo *)&local_b8);
  CowData<String>::_unref((CowData<String> *)&local_f0);
  local_a8 = (undefined1  [16])0x0;
  local_e8 = "_get_string_delimiters";
  local_f0 = 0;
  local_b8 = (char *)0x0;
  local_b0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 6;
  local_80 = 1;
  local_78[0] = 0;
  local_68 = 0;
  local_60 = 0;
  local_50 = 0;
  local_e0._0_8_ = 0x16;
  String::parse_latin1((StrRange *)&local_b8);
  local_80 = CONCAT44(local_80._4_4_,0x8c);
  GetTypeInfo<Vector<String>,void>::get_class_info((GetTypeInfo<Vector<String>,void> *)&local_e8);
  PropertyInfo::operator=((PropertyInfo *)&local_b0,(PropertyInfo *)&local_e8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_e8);
  local_60 = local_60 & 0xffffffff00000000;
  local_100 = 0;
  local_e8 = "ScriptLanguageExtension";
  local_e0._0_8_ = 0x17;
  String::parse_latin1((StrRange *)&local_100);
  StringName::StringName((StringName *)&local_e8,(String *)&local_100,false);
  ClassDB::add_virtual_method
            ((StringName *)&local_e8,(MethodInfo *)&local_b8,true,(Vector *)&local_f8,false);
  if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  MethodInfo::~MethodInfo((MethodInfo *)&local_b8);
  CowData<String>::_unref((CowData<String> *)&local_f0);
  local_f0 = 0;
  local_e8 = (char *)0x0;
  local_b8 = "template";
  local_b0 = 8;
  String::parse_latin1((StrRange *)&local_e8);
  local_b8 = (char *)0x0;
  if (local_e8 != (char *)0x0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_b8,(CowData *)&local_e8);
  }
  Vector<String>::push_back((Vector<String> *)&local_f8,(StrRange *)&local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  local_108 = 0;
  local_b8 = "class_name";
  local_b0 = 10;
  String::parse_latin1((StrRange *)&local_108);
  local_b8 = (char *)0x0;
  if (local_108 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_b8,(CowData *)&local_108);
  }
  Vector<String>::push_back((Vector<String> *)&local_f8,(StrRange *)&local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  local_100 = 0;
  local_b8 = "base_class_name";
  local_b0 = 0xf;
  String::parse_latin1((StrRange *)&local_100);
  local_b8 = (char *)0x0;
  if (local_100 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_b8,(CowData *)&local_100);
  }
  Vector<String>::push_back((Vector<String> *)&local_f8,(StrRange *)&local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
  local_a8 = (undefined1  [16])0x0;
  local_e8 = "_make_template";
  local_b8 = (char *)0x0;
  local_b0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 6;
  local_80 = 1;
  local_78[0] = 0;
  local_68 = 0;
  local_60 = 0;
  local_50 = 0;
  local_e0._0_8_ = 0xe;
  String::parse_latin1((StrRange *)&local_b8);
  local_80 = CONCAT44(local_80._4_4_,0x8c);
  local_e8 = "Script";
  local_108 = 0;
  local_110 = 0;
  local_e0._0_8_ = 6;
  String::parse_latin1((StrRange *)&local_110);
  local_118 = 0;
  local_e8 = (char *)CONCAT44(local_e8._4_4_,0x18);
  local_d0 = 0x11;
  local_c8 = 0;
  local_e0 = (undefined1  [16])0x0;
  if (local_110 == 0) {
LAB_0010a868:
    local_130 = (CowData<char32_t> *)&local_c8;
    local_c0 = 6;
    StringName::StringName((StringName *)&local_100,(String *)local_130,false);
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
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_c8,(CowData *)&local_110);
    local_c0 = 6;
    if (local_d0 == 0x11) goto LAB_0010a868;
    StringName::operator=((StringName *)(local_e0 + 8),(StrRange *)&local_108);
  }
  local_138 = (StringName *)(local_e0 + 8);
  local_130 = (CowData<char32_t> *)&local_c8;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_118);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_110);
  if ((StringName::configured != '\0') && (local_108 != 0)) {
    StringName::unref();
  }
  PropertyInfo::operator=((PropertyInfo *)&local_b0,(PropertyInfo *)&local_e8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_e8);
  local_60 = local_60 & 0xffffffff00000000;
  GetTypeInfo<String_const&,void>::get_class_info((GetTypeInfo<String_const&,void> *)&local_e8);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_78,(PropertyInfo *)&local_e8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_e8);
  Vector<int>::push_back(local_58,0);
  GetTypeInfo<String_const&,void>::get_class_info((GetTypeInfo<String_const&,void> *)&local_e8);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_78,(PropertyInfo *)&local_e8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_e8);
  Vector<int>::push_back(local_58,0);
  GetTypeInfo<String_const&,void>::get_class_info((GetTypeInfo<String_const&,void> *)&local_e8);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_78,(PropertyInfo *)&local_e8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_e8);
  Vector<int>::push_back(local_58,0);
  local_100 = 0;
  local_e8 = "ScriptLanguageExtension";
  local_e0._0_8_ = 0x17;
  String::parse_latin1((StrRange *)&local_100);
  StringName::StringName((StringName *)&local_e8,(String *)&local_100,false);
  ClassDB::add_virtual_method
            ((StringName *)&local_e8,(MethodInfo *)&local_b8,true,(Vector *)&local_f8,false);
  if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  MethodInfo::~MethodInfo((MethodInfo *)&local_b8);
  CowData<String>::_unref((CowData<String> *)&local_f0);
  local_f0 = 0;
  local_e8 = (char *)0x0;
  local_b8 = "object";
  local_b0 = 6;
  String::parse_latin1((StrRange *)&local_e8);
  local_b8 = (char *)0x0;
  if (local_e8 != (char *)0x0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_b8,(CowData *)&local_e8);
  }
  Vector<String>::push_back((Vector<String> *)&local_f8,(StrRange *)&local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
  local_a8 = (undefined1  [16])0x0;
  local_e8 = "_get_built_in_templates";
  local_b8 = (char *)0x0;
  local_b0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 6;
  local_80 = 1;
  local_78[0] = 0;
  local_68 = 0;
  local_60 = 0;
  local_50 = 0;
  local_e0._0_8_ = 0x17;
  String::parse_latin1((StrRange *)&local_b8);
  local_80 = CONCAT44(local_80._4_4_,0x8c);
  GetTypeInfo<TypedArray<Dictionary>,void>::get_class_info
            ((GetTypeInfo<TypedArray<Dictionary>,void> *)&local_e8);
  PropertyInfo::operator=((PropertyInfo *)&local_b0,(PropertyInfo *)&local_e8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_e8);
  local_60 = local_60 & 0xffffffff00000000;
  GetTypeInfo<StringName,void>::get_class_info((GetTypeInfo<StringName,void> *)&local_e8);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_78,(PropertyInfo *)&local_e8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_e8);
  Vector<int>::push_back(local_58,0);
  local_100 = 0;
  local_e8 = "ScriptLanguageExtension";
  local_e0._0_8_ = 0x17;
  String::parse_latin1((StrRange *)&local_100);
  StringName::StringName((StringName *)&local_e8,(String *)&local_100,false);
  ClassDB::add_virtual_method
            ((StringName *)&local_e8,(MethodInfo *)&local_b8,true,(Vector *)&local_f8,false);
  if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  MethodInfo::~MethodInfo((MethodInfo *)&local_b8);
  CowData<String>::_unref((CowData<String> *)&local_f0);
  local_a8 = (undefined1  [16])0x0;
  local_e8 = "_is_using_templates";
  local_f0 = 0;
  local_b8 = (char *)0x0;
  local_b0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 6;
  local_80 = 1;
  local_78[0] = 0;
  local_68 = 0;
  local_60 = 0;
  local_50 = 0;
  local_e0._0_8_ = 0x13;
  String::parse_latin1((StrRange *)&local_b8);
  local_80 = CONCAT44(local_80._4_4_,0x88);
  GetTypeInfo<bool,void>::get_class_info((GetTypeInfo<bool,void> *)&local_e8);
  PropertyInfo::operator=((PropertyInfo *)&local_b0,(PropertyInfo *)&local_e8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_e8);
  local_60 = local_60 & 0xffffffff00000000;
  local_100 = 0;
  local_e8 = "ScriptLanguageExtension";
  local_e0._0_8_ = 0x17;
  String::parse_latin1((StrRange *)&local_100);
  StringName::StringName((StringName *)&local_e8,(String *)&local_100,false);
  ClassDB::add_virtual_method
            ((StringName *)&local_e8,(MethodInfo *)&local_b8,true,(Vector *)&local_f8,false);
  if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  MethodInfo::~MethodInfo((MethodInfo *)&local_b8);
  CowData<String>::_unref((CowData<String> *)&local_f0);
  local_f0 = 0;
  local_e8 = (char *)0x0;
  local_b8 = "script";
  local_b0 = 6;
  String::parse_latin1((StrRange *)&local_e8);
  local_b8 = (char *)0x0;
  if (local_e8 != (char *)0x0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_b8,(CowData *)&local_e8);
  }
  Vector<String>::push_back((Vector<String> *)&local_f8,(StrRange *)&local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  local_120 = 0;
  local_b8 = "path";
  local_b0 = 4;
  String::parse_latin1((StrRange *)&local_120);
  local_b8 = (char *)0x0;
  if (local_120 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_b8,(CowData *)&local_120);
  }
  Vector<String>::push_back((Vector<String> *)&local_f8,(StrRange *)&local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  local_100 = 0;
  local_b8 = "validate_functions";
  local_b0 = 0x12;
  String::parse_latin1((StrRange *)&local_100);
  local_b8 = (char *)0x0;
  if (local_100 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_b8,(CowData *)&local_100);
  }
  Vector<String>::push_back((Vector<String> *)&local_f8,(StrRange *)&local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  local_118 = 0;
  local_b8 = "validate_errors";
  local_b0 = 0xf;
  String::parse_latin1((StrRange *)&local_118);
  local_b8 = (char *)0x0;
  if (local_118 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_b8,(CowData *)&local_118);
  }
  Vector<String>::push_back((Vector<String> *)&local_f8,(StrRange *)&local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  local_108 = 0;
  local_b8 = "validate_warnings";
  local_b0 = 0x11;
  String::parse_latin1((StrRange *)&local_108);
  local_b8 = (char *)0x0;
  if (local_108 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_b8,(CowData *)&local_108);
  }
  Vector<String>::push_back((Vector<String> *)&local_f8,(StrRange *)&local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  local_110 = 0;
  local_b8 = "validate_safe_lines";
  local_b0 = 0x13;
  String::parse_latin1((StrRange *)&local_110);
  local_b8 = (char *)0x0;
  if (local_110 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_b8,(CowData *)&local_110);
  }
  Vector<String>::push_back((Vector<String> *)&local_f8,(StrRange *)&local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_110);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_118);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_120);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
  local_a8 = (undefined1  [16])0x0;
  local_e8 = "_validate";
  local_b8 = (char *)0x0;
  local_b0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 6;
  local_80 = 1;
  local_78[0] = 0;
  local_68 = 0;
  local_60 = 0;
  local_50 = 0;
  local_e0._0_8_ = 9;
  String::parse_latin1((StrRange *)&local_b8);
  local_80 = CONCAT44(local_80._4_4_,0x8c);
  GetTypeInfo<Dictionary,void>::get_class_info((GetTypeInfo<Dictionary,void> *)&local_e8);
  PropertyInfo::operator=((PropertyInfo *)&local_b0,(PropertyInfo *)&local_e8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_e8);
  local_60 = local_60 & 0xffffffff00000000;
  GetTypeInfo<String_const&,void>::get_class_info((GetTypeInfo<String_const&,void> *)&local_e8);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_78,(PropertyInfo *)&local_e8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_e8);
  Vector<int>::push_back(local_58,0);
  GetTypeInfo<String_const&,void>::get_class_info((GetTypeInfo<String_const&,void> *)&local_e8);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_78,(PropertyInfo *)&local_e8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_e8);
  Vector<int>::push_back(local_58,0);
  GetTypeInfo<bool,void>::get_class_info((GetTypeInfo<bool,void> *)&local_e8);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_78,(PropertyInfo *)&local_e8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_e8);
  Vector<int>::push_back(local_58,0);
  GetTypeInfo<bool,void>::get_class_info((GetTypeInfo<bool,void> *)&local_e8);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_78,(PropertyInfo *)&local_e8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_e8);
  Vector<int>::push_back(local_58,0);
  GetTypeInfo<bool,void>::get_class_info((GetTypeInfo<bool,void> *)&local_e8);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_78,(PropertyInfo *)&local_e8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_e8);
  Vector<int>::push_back(local_58,0);
  GetTypeInfo<bool,void>::get_class_info((GetTypeInfo<bool,void> *)&local_e8);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_78,(PropertyInfo *)&local_e8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_e8);
  Vector<int>::push_back(local_58,0);
  local_100 = 0;
  local_e8 = "ScriptLanguageExtension";
  local_e0._0_8_ = 0x17;
  String::parse_latin1((StrRange *)&local_100);
  StringName::StringName((StringName *)&local_e8,(String *)&local_100,false);
  ClassDB::add_virtual_method
            ((StringName *)&local_e8,(MethodInfo *)&local_b8,true,(Vector *)&local_f8,false);
  if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  MethodInfo::~MethodInfo((MethodInfo *)&local_b8);
  CowData<String>::_unref((CowData<String> *)&local_f0);
  local_f0 = 0;
  local_e8 = (char *)0x0;
  local_b8 = "path";
  local_b0 = 4;
  String::parse_latin1((StrRange *)&local_e8);
  local_b8 = (char *)0x0;
  if (local_e8 != (char *)0x0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_b8,(CowData *)&local_e8);
  }
  Vector<String>::push_back((Vector<String> *)&local_f8,(StrRange *)&local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
  local_a8 = (undefined1  [16])0x0;
  local_e8 = "_validate_path";
  local_b8 = (char *)0x0;
  local_b0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 6;
  local_80 = 1;
  local_78[0] = 0;
  local_68 = 0;
  local_60 = 0;
  local_50 = 0;
  local_e0._0_8_ = 0xe;
  String::parse_latin1((StrRange *)&local_b8);
  local_80 = CONCAT44(local_80._4_4_,0x8c);
  GetTypeInfo<String,void>::get_class_info((GetTypeInfo<String,void> *)&local_e8);
  PropertyInfo::operator=((PropertyInfo *)&local_b0,(PropertyInfo *)&local_e8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_e8);
  local_60 = local_60 & 0xffffffff00000000;
  GetTypeInfo<String_const&,void>::get_class_info((GetTypeInfo<String_const&,void> *)&local_e8);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_78,(PropertyInfo *)&local_e8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_e8);
  Vector<int>::push_back(local_58,0);
  local_100 = 0;
  local_e8 = "ScriptLanguageExtension";
  local_e0._0_8_ = 0x17;
  String::parse_latin1((StrRange *)&local_100);
  StringName::StringName((StringName *)&local_e8,(String *)&local_100,false);
  ClassDB::add_virtual_method
            ((StringName *)&local_e8,(MethodInfo *)&local_b8,true,(Vector *)&local_f8,false);
  if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  MethodInfo::~MethodInfo((MethodInfo *)&local_b8);
  CowData<String>::_unref((CowData<String> *)&local_f0);
  local_a8 = (undefined1  [16])0x0;
  local_e8 = "_create_script";
  local_f0 = 0;
  local_b8 = (char *)0x0;
  local_b0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 6;
  local_80 = 1;
  local_78[0] = 0;
  local_68 = 0;
  local_60 = 0;
  local_50 = 0;
  local_e0._0_8_ = 0xe;
  String::parse_latin1((StrRange *)&local_b8);
  local_e8 = "Object";
  local_80 = CONCAT44(local_80._4_4_,0x8c);
  local_108 = 0;
  local_e0._0_8_ = 6;
  String::parse_latin1((StrRange *)&local_108);
  StringName::StringName((StringName *)&local_100,(String *)&local_108,false);
  local_e8 = (char *)CONCAT44(local_e8._4_4_,0x18);
  auVar6._8_8_ = 0;
  auVar6._0_8_ = local_e0._8_8_;
  local_e0 = auVar6 << 0x40;
  StringName::StringName(local_138,(StringName *)&local_100);
  local_d0 = 0;
  local_c8 = 0;
  local_c0 = 6;
  if ((StringName::configured != '\0') && (local_100 != 0)) {
    StringName::unref();
  }
  lVar11 = local_108;
  if (local_108 != 0) {
    LOCK();
    plVar1 = (long *)(local_108 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_108 = 0;
      Memory::free_static((void *)(lVar11 + -0x10),false);
    }
  }
  PropertyInfo::operator=((PropertyInfo *)&local_b0,(PropertyInfo *)&local_e8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_e8);
  local_60 = local_60 & 0xffffffff00000000;
  local_100 = 0;
  local_e8 = "ScriptLanguageExtension";
  local_e0._0_8_ = 0x17;
  String::parse_latin1((StrRange *)&local_100);
  StringName::StringName((StringName *)&local_e8,(String *)&local_100,false);
  ClassDB::add_virtual_method
            ((StringName *)&local_e8,(MethodInfo *)&local_b8,true,(Vector *)&local_f8,false);
  if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  MethodInfo::~MethodInfo((MethodInfo *)&local_b8);
  CowData<String>::_unref((CowData<String> *)&local_f0);
  local_a8 = (undefined1  [16])0x0;
  local_e8 = "_has_named_classes";
  local_f0 = 0;
  local_b8 = (char *)0x0;
  local_b0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 6;
  local_80 = 1;
  local_78[0] = 0;
  local_68 = 0;
  local_60 = 0;
  local_50 = 0;
  local_e0._0_8_ = 0x12;
  String::parse_latin1((StrRange *)&local_b8);
  local_80 = CONCAT44(local_80._4_4_,0x8c);
  GetTypeInfo<bool,void>::get_class_info((GetTypeInfo<bool,void> *)&local_e8);
  PropertyInfo::operator=((PropertyInfo *)&local_b0,(PropertyInfo *)&local_e8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_e8);
  local_60 = local_60 & 0xffffffff00000000;
  local_100 = 0;
  local_e8 = "ScriptLanguageExtension";
  local_e0._0_8_ = 0x17;
  String::parse_latin1((StrRange *)&local_100);
  StringName::StringName((StringName *)&local_e8,(String *)&local_100,false);
  ClassDB::add_virtual_method
            ((StringName *)&local_e8,(MethodInfo *)&local_b8,true,(Vector *)&local_f8,false);
  if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  MethodInfo::~MethodInfo((MethodInfo *)&local_b8);
  CowData<String>::_unref((CowData<String> *)&local_f0);
  local_a8 = (undefined1  [16])0x0;
  local_e8 = "_supports_builtin_mode";
  local_f0 = 0;
  local_b8 = (char *)0x0;
  local_b0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 6;
  local_80 = 1;
  local_78[0] = 0;
  local_68 = 0;
  local_60 = 0;
  local_50 = 0;
  local_e0._0_8_ = 0x16;
  String::parse_latin1((StrRange *)&local_b8);
  local_80 = CONCAT44(local_80._4_4_,0x8c);
  GetTypeInfo<bool,void>::get_class_info((GetTypeInfo<bool,void> *)&local_e8);
  PropertyInfo::operator=((PropertyInfo *)&local_b0,(PropertyInfo *)&local_e8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_e8);
  local_60 = local_60 & 0xffffffff00000000;
  local_100 = 0;
  local_e8 = "ScriptLanguageExtension";
  local_e0._0_8_ = 0x17;
  String::parse_latin1((StrRange *)&local_100);
  StringName::StringName((StringName *)&local_e8,(String *)&local_100,false);
  ClassDB::add_virtual_method
            ((StringName *)&local_e8,(MethodInfo *)&local_b8,true,(Vector *)&local_f8,false);
  if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  MethodInfo::~MethodInfo((MethodInfo *)&local_b8);
  CowData<String>::_unref((CowData<String> *)&local_f0);
  local_a8 = (undefined1  [16])0x0;
  local_e8 = "_supports_documentation";
  local_f0 = 0;
  local_b8 = (char *)0x0;
  local_b0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 6;
  local_80 = 1;
  local_78[0] = 0;
  local_68 = 0;
  local_60 = 0;
  local_50 = 0;
  local_e0._0_8_ = 0x17;
  String::parse_latin1((StrRange *)&local_b8);
  local_80 = CONCAT44(local_80._4_4_,0x8c);
  GetTypeInfo<bool,void>::get_class_info((GetTypeInfo<bool,void> *)&local_e8);
  PropertyInfo::operator=((PropertyInfo *)&local_b0,(PropertyInfo *)&local_e8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_e8);
  local_60 = local_60 & 0xffffffff00000000;
  local_100 = 0;
  local_e8 = "ScriptLanguageExtension";
  local_e0._0_8_ = 0x17;
  String::parse_latin1((StrRange *)&local_100);
  StringName::StringName((StringName *)&local_e8,(String *)&local_100,false);
  ClassDB::add_virtual_method
            ((StringName *)&local_e8,(MethodInfo *)&local_b8,true,(Vector *)&local_f8,false);
  if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  MethodInfo::~MethodInfo((MethodInfo *)&local_b8);
  CowData<String>::_unref((CowData<String> *)&local_f0);
  local_a8 = (undefined1  [16])0x0;
  local_e8 = "_can_inherit_from_file";
  local_f0 = 0;
  local_b8 = (char *)0x0;
  local_b0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 6;
  local_80 = 1;
  local_78[0] = 0;
  local_68 = 0;
  local_60 = 0;
  local_50 = 0;
  local_e0._0_8_ = 0x16;
  String::parse_latin1((StrRange *)&local_b8);
  local_80 = CONCAT44(local_80._4_4_,0x8c);
  GetTypeInfo<bool,void>::get_class_info((GetTypeInfo<bool,void> *)&local_e8);
  PropertyInfo::operator=((PropertyInfo *)&local_b0,(PropertyInfo *)&local_e8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_e8);
  local_60 = local_60 & 0xffffffff00000000;
  local_100 = 0;
  local_e8 = "ScriptLanguageExtension";
  local_e0._0_8_ = 0x17;
  String::parse_latin1((StrRange *)&local_100);
  StringName::StringName((StringName *)&local_e8,(String *)&local_100,false);
  ClassDB::add_virtual_method
            ((StringName *)&local_e8,(MethodInfo *)&local_b8,true,(Vector *)&local_f8,false);
  if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  MethodInfo::~MethodInfo((MethodInfo *)&local_b8);
  CowData<String>::_unref((CowData<String> *)&local_f0);
  local_f0 = 0;
  local_e8 = (char *)0x0;
  local_b8 = "function";
  local_b0 = 8;
  String::parse_latin1((StrRange *)&local_e8);
  local_b8 = (char *)0x0;
  if (local_e8 != (char *)0x0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_b8,(CowData *)&local_e8);
  }
  Vector<String>::push_back((Vector<String> *)&local_f8,(StrRange *)&local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  local_100 = 0;
  local_b8 = "code";
  local_b0 = 4;
  String::parse_latin1((StrRange *)&local_100);
  local_b8 = (char *)0x0;
  if (local_100 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_b8,(CowData *)&local_100);
  }
  Vector<String>::push_back((Vector<String> *)&local_f8,(StrRange *)&local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
  local_a8 = (undefined1  [16])0x0;
  local_e8 = "_find_function";
  local_b8 = (char *)0x0;
  local_b0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 6;
  local_80 = 1;
  local_78[0] = 0;
  local_68 = 0;
  local_60 = 0;
  local_50 = 0;
  local_e0._0_8_ = 0xe;
  String::parse_latin1((StrRange *)&local_b8);
  local_80 = CONCAT44(local_80._4_4_,0x8c);
  GetTypeInfo<int,void>::get_class_info((GetTypeInfo<int,void> *)&local_e8);
  PropertyInfo::operator=((PropertyInfo *)&local_b0,(PropertyInfo *)&local_e8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_e8);
  local_60 = CONCAT44(local_60._4_4_,3);
  GetTypeInfo<String_const&,void>::get_class_info((GetTypeInfo<String_const&,void> *)&local_e8);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_78,(PropertyInfo *)&local_e8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_e8);
  Vector<int>::push_back(local_58,0);
  GetTypeInfo<String_const&,void>::get_class_info((GetTypeInfo<String_const&,void> *)&local_e8);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_78,(PropertyInfo *)&local_e8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_e8);
  Vector<int>::push_back(local_58,0);
  local_100 = 0;
  local_e8 = "ScriptLanguageExtension";
  local_e0._0_8_ = 0x17;
  String::parse_latin1((StrRange *)&local_100);
  StringName::StringName((StringName *)&local_e8,(String *)&local_100,false);
  ClassDB::add_virtual_method
            ((StringName *)&local_e8,(MethodInfo *)&local_b8,true,(Vector *)&local_f8,false);
  if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  MethodInfo::~MethodInfo((MethodInfo *)&local_b8);
  CowData<String>::_unref((CowData<String> *)&local_f0);
  local_f0 = 0;
  local_e8 = (char *)0x0;
  local_b8 = "class_name";
  local_b0 = 10;
  String::parse_latin1((StrRange *)&local_e8);
  local_b8 = (char *)0x0;
  if (local_e8 != (char *)0x0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_b8,(CowData *)&local_e8);
  }
  Vector<String>::push_back((Vector<String> *)&local_f8,(StrRange *)&local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  local_108 = 0;
  local_b8 = "function_name";
  local_b0 = 0xd;
  String::parse_latin1((StrRange *)&local_108);
  local_b8 = (char *)0x0;
  if (local_108 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_b8,(CowData *)&local_108);
  }
  Vector<String>::push_back((Vector<String> *)&local_f8,(StrRange *)&local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  local_100 = 0;
  local_b8 = "function_args";
  local_b0 = 0xd;
  String::parse_latin1((StrRange *)&local_100);
  local_b8 = (char *)0x0;
  if (local_100 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_b8,(CowData *)&local_100);
  }
  Vector<String>::push_back((Vector<String> *)&local_f8,(StrRange *)&local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
  local_a8 = (undefined1  [16])0x0;
  local_e8 = "_make_function";
  local_b8 = (char *)0x0;
  local_b0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 6;
  local_80 = 1;
  local_78[0] = 0;
  local_68 = 0;
  local_60 = 0;
  local_50 = 0;
  local_e0._0_8_ = 0xe;
  String::parse_latin1((StrRange *)&local_b8);
  local_80 = CONCAT44(local_80._4_4_,0x8c);
  GetTypeInfo<String,void>::get_class_info((GetTypeInfo<String,void> *)&local_e8);
  PropertyInfo::operator=((PropertyInfo *)&local_b0,(PropertyInfo *)&local_e8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_e8);
  local_60 = local_60 & 0xffffffff00000000;
  GetTypeInfo<String_const&,void>::get_class_info((GetTypeInfo<String_const&,void> *)&local_e8);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_78,(PropertyInfo *)&local_e8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_e8);
  Vector<int>::push_back(local_58,0);
  GetTypeInfo<String_const&,void>::get_class_info((GetTypeInfo<String_const&,void> *)&local_e8);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_78,(PropertyInfo *)&local_e8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_e8);
  Vector<int>::push_back(local_58,0);
  local_100 = 0;
  local_108 = 0;
  local_e8 = "";
  auVar7._8_8_ = 0;
  auVar7._0_8_ = local_e0._8_8_;
  local_e0 = auVar7 << 0x40;
  String::parse_latin1((StrRange *)&local_108);
  local_110 = 0;
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_e8,0x22,(StrRange *)&local_110,0,(StrRange *)&local_108,6,
             (StrRange *)&local_100);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_110);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
  if ((StringName::configured != '\0') && (local_100 != 0)) {
    StringName::unref();
  }
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_78,(PropertyInfo *)&local_e8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_e8);
  Vector<int>::push_back(local_58,0);
  local_100 = 0;
  local_e8 = "ScriptLanguageExtension";
  local_e0._0_8_ = 0x17;
  String::parse_latin1((StrRange *)&local_100);
  StringName::StringName((StringName *)&local_e8,(String *)&local_100,false);
  ClassDB::add_virtual_method
            ((StringName *)&local_e8,(MethodInfo *)&local_b8,true,(Vector *)&local_f8,false);
  if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  MethodInfo::~MethodInfo((MethodInfo *)&local_b8);
  CowData<String>::_unref((CowData<String> *)&local_f0);
  local_a8 = (undefined1  [16])0x0;
  local_e8 = "_can_make_function";
  local_f0 = 0;
  local_b8 = (char *)0x0;
  local_b0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 6;
  local_80 = 1;
  local_78[0] = 0;
  local_68 = 0;
  local_60 = 0;
  local_50 = 0;
  local_e0._0_8_ = 0x12;
  String::parse_latin1((StrRange *)&local_b8);
  local_80 = CONCAT44(local_80._4_4_,0x8c);
  GetTypeInfo<bool,void>::get_class_info((GetTypeInfo<bool,void> *)&local_e8);
  PropertyInfo::operator=((PropertyInfo *)&local_b0,(PropertyInfo *)&local_e8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_e8);
  local_60 = local_60 & 0xffffffff00000000;
  local_100 = 0;
  local_e8 = "ScriptLanguageExtension";
  local_e0._0_8_ = 0x17;
  String::parse_latin1((StrRange *)&local_100);
  StringName::StringName((StringName *)&local_e8,(String *)&local_100,false);
  ClassDB::add_virtual_method
            ((StringName *)&local_e8,(MethodInfo *)&local_b8,true,(Vector *)&local_f8,false);
  if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  MethodInfo::~MethodInfo((MethodInfo *)&local_b8);
  CowData<String>::_unref((CowData<String> *)&local_f0);
  local_f0 = 0;
  local_e8 = (char *)0x0;
  local_b8 = "script";
  local_b0 = 6;
  String::parse_latin1((StrRange *)&local_e8);
  local_b8 = (char *)0x0;
  if (local_e8 != (char *)0x0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_b8,(CowData *)&local_e8);
  }
  Vector<String>::push_back((Vector<String> *)&local_f8,(StrRange *)&local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  local_108 = 0;
  local_b8 = "line";
  local_b0 = 4;
  String::parse_latin1((StrRange *)&local_108);
  local_b8 = (char *)0x0;
  if (local_108 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_b8,(CowData *)&local_108);
  }
  Vector<String>::push_back((Vector<String> *)&local_f8,(StrRange *)&local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  local_100 = 0;
  local_b8 = "column";
  local_b0 = 6;
  String::parse_latin1((StrRange *)&local_100);
  local_b8 = (char *)0x0;
  if (local_100 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_b8,(CowData *)&local_100);
  }
  Vector<String>::push_back((Vector<String> *)&local_f8,(StrRange *)&local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
  local_a8 = (undefined1  [16])0x0;
  local_e8 = "_open_in_external_editor";
  local_b8 = (char *)0x0;
  local_b0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 6;
  local_80 = 1;
  local_78[0] = 0;
  local_68 = 0;
  local_60 = 0;
  local_50 = 0;
  local_e0._0_8_ = 0x18;
  String::parse_latin1((StrRange *)&local_b8);
  local_80 = CONCAT44(local_80._4_4_,0x88);
  GetTypeInfo<Error,void>::get_class_info((GetTypeInfo<Error,void> *)&local_e8);
  PropertyInfo::operator=((PropertyInfo *)&local_b0,(PropertyInfo *)&local_e8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_e8);
  local_60 = local_60 & 0xffffffff00000000;
  GetTypeInfo<Ref<Script>const&,void>::get_class_info
            ((GetTypeInfo<Ref<Script>const&,void> *)&local_e8);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_78,(PropertyInfo *)&local_e8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_e8);
  Vector<int>::push_back(local_58,0);
  GetTypeInfo<int,void>::get_class_info((GetTypeInfo<int,void> *)&local_e8);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_78,(PropertyInfo *)&local_e8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_e8);
  Vector<int>::push_back(local_58,3);
  GetTypeInfo<int,void>::get_class_info((GetTypeInfo<int,void> *)&local_e8);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_78,(PropertyInfo *)&local_e8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_e8);
  Vector<int>::push_back(local_58,3);
  local_100 = 0;
  local_e8 = "ScriptLanguageExtension";
  local_e0._0_8_ = 0x17;
  String::parse_latin1((StrRange *)&local_100);
  StringName::StringName((StringName *)&local_e8,(String *)&local_100,false);
  ClassDB::add_virtual_method
            ((StringName *)&local_e8,(MethodInfo *)&local_b8,true,(Vector *)&local_f8,false);
  if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  MethodInfo::~MethodInfo((MethodInfo *)&local_b8);
  CowData<String>::_unref((CowData<String> *)&local_f0);
  local_a8 = (undefined1  [16])0x0;
  local_e8 = "_overrides_external_editor";
  local_f0 = 0;
  local_b8 = (char *)0x0;
  local_b0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 6;
  local_80 = 1;
  local_78[0] = 0;
  local_68 = 0;
  local_60 = 0;
  local_50 = 0;
  local_e0._0_8_ = 0x1a;
  String::parse_latin1((StrRange *)&local_b8);
  local_80 = CONCAT44(local_80._4_4_,0x88);
  GetTypeInfo<bool,void>::get_class_info((GetTypeInfo<bool,void> *)&local_e8);
  PropertyInfo::operator=((PropertyInfo *)&local_b0,(PropertyInfo *)&local_e8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_e8);
  local_60 = local_60 & 0xffffffff00000000;
  local_100 = 0;
  local_e8 = "ScriptLanguageExtension";
  local_e0._0_8_ = 0x17;
  String::parse_latin1((StrRange *)&local_100);
  StringName::StringName((StringName *)&local_e8,(String *)&local_100,false);
  ClassDB::add_virtual_method
            ((StringName *)&local_e8,(MethodInfo *)&local_b8,true,(Vector *)&local_f8,false);
  if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  MethodInfo::~MethodInfo((MethodInfo *)&local_b8);
  CowData<String>::_unref((CowData<String> *)&local_f0);
  local_a8 = (undefined1  [16])0x0;
  local_e8 = "_preferred_file_name_casing";
  local_f0 = 0;
  local_b8 = (char *)0x0;
  local_b0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 6;
  local_80 = 1;
  local_78[0] = 0;
  local_68 = 0;
  local_60 = 0;
  local_50 = 0;
  local_e0._0_8_ = 0x1b;
  String::parse_latin1((StrRange *)&local_b8);
  local_e8 = "ScriptLanguage::ScriptNameCasing";
  local_80 = CONCAT44(local_80._4_4_,0xc);
  local_110 = 0;
  local_e0._0_8_ = 0x20;
  String::parse_latin1((StrRange *)&local_110);
  godot::details::enum_qualified_name_to_class_info_name((details *)&local_108,(String *)&local_110)
  ;
  StringName::StringName((StringName *)&local_100,(String *)&local_108,false);
  local_118 = 0;
  local_120 = 0;
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_e8,2,(StrRange *)&local_120,0,(CowData<char32_t> *)&local_118,
             0x10006,(StrRange *)&local_100);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_120);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_118);
  if ((StringName::configured != '\0') && (local_100 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_110);
  PropertyInfo::operator=((PropertyInfo *)&local_b0,(PropertyInfo *)&local_e8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_e8);
  local_60 = local_60 & 0xffffffff00000000;
  local_100 = 0;
  local_e8 = "ScriptLanguageExtension";
  local_e0._0_8_ = 0x17;
  String::parse_latin1((StrRange *)&local_100);
  StringName::StringName((StringName *)&local_e8,(String *)&local_100,false);
  ClassDB::add_virtual_method
            ((StringName *)&local_e8,(MethodInfo *)&local_b8,true,(Vector *)&local_f8,false);
  if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  MethodInfo::~MethodInfo((MethodInfo *)&local_b8);
  CowData<String>::_unref((CowData<String> *)&local_f0);
  local_f0 = 0;
  local_e8 = (char *)0x0;
  local_b8 = "code";
  local_b0 = 4;
  String::parse_latin1((StrRange *)&local_e8);
  local_b8 = (char *)0x0;
  if (local_e8 != (char *)0x0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_b8,(CowData *)&local_e8);
  }
  Vector<String>::push_back((Vector<String> *)&local_f8,(StrRange *)&local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  local_108 = 0;
  local_b8 = "path";
  local_b0 = 4;
  String::parse_latin1((StrRange *)&local_108);
  local_b8 = (char *)0x0;
  if (local_108 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_b8,(CowData *)&local_108);
  }
  Vector<String>::push_back((Vector<String> *)&local_f8,(StrRange *)&local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  local_100 = 0;
  local_b8 = "owner";
  local_b0 = 5;
  String::parse_latin1((StrRange *)&local_100);
  local_b8 = (char *)0x0;
  if (local_100 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_b8,(CowData *)&local_100);
  }
  Vector<String>::push_back((Vector<String> *)&local_f8,(StrRange *)&local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
  local_a8 = (undefined1  [16])0x0;
  local_e8 = "_complete_code";
  local_b8 = (char *)0x0;
  local_b0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 6;
  local_80 = 1;
  local_78[0] = 0;
  local_68 = 0;
  local_60 = 0;
  local_50 = 0;
  local_e0._0_8_ = 0xe;
  String::parse_latin1((StrRange *)&local_b8);
  local_80 = CONCAT44(local_80._4_4_,0x8c);
  GetTypeInfo<Dictionary,void>::get_class_info((GetTypeInfo<Dictionary,void> *)&local_e8);
  PropertyInfo::operator=((PropertyInfo *)&local_b0,(PropertyInfo *)&local_e8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_e8);
  local_60 = local_60 & 0xffffffff00000000;
  GetTypeInfo<String_const&,void>::get_class_info((GetTypeInfo<String_const&,void> *)&local_e8);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_78,(PropertyInfo *)&local_e8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_e8);
  Vector<int>::push_back(local_58,0);
  GetTypeInfo<String_const&,void>::get_class_info((GetTypeInfo<String_const&,void> *)&local_e8);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_78,(PropertyInfo *)&local_e8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_e8);
  Vector<int>::push_back(local_58,0);
  local_e8 = "Object";
  local_108 = 0;
  local_e0._0_8_ = 6;
  String::parse_latin1((StrRange *)&local_108);
  StringName::StringName((StringName *)&local_100,(String *)&local_108,false);
  local_e8 = (char *)CONCAT44(local_e8._4_4_,0x18);
  auVar8._8_8_ = 0;
  auVar8._0_8_ = local_e0._8_8_;
  local_e0 = auVar8 << 0x40;
  StringName::StringName(local_138,(StringName *)&local_100);
  local_d0 = 0;
  local_c8 = 0;
  local_c0 = 6;
  if ((StringName::configured != '\0') && (local_100 != 0)) {
    StringName::unref();
  }
  lVar11 = local_108;
  if (local_108 != 0) {
    LOCK();
    plVar1 = (long *)(local_108 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_108 = 0;
      Memory::free_static((void *)(lVar11 + -0x10),false);
    }
  }
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_78,(PropertyInfo *)&local_e8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_e8);
  Vector<int>::push_back(local_58,0);
  local_100 = 0;
  local_e8 = "ScriptLanguageExtension";
  local_e0._0_8_ = 0x17;
  String::parse_latin1((StrRange *)&local_100);
  StringName::StringName((StringName *)&local_e8,(String *)&local_100,false);
  ClassDB::add_virtual_method
            ((StringName *)&local_e8,(MethodInfo *)&local_b8,true,(Vector *)&local_f8,false);
  if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  MethodInfo::~MethodInfo((MethodInfo *)&local_b8);
  CowData<String>::_unref((CowData<String> *)&local_f0);
  local_f0 = 0;
  local_e8 = (char *)0x0;
  local_b8 = "code";
  local_b0 = 4;
  String::parse_latin1((StrRange *)&local_e8);
  local_b8 = (char *)0x0;
  if (local_e8 != (char *)0x0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_b8,(CowData *)&local_e8);
  }
  Vector<String>::push_back((Vector<String> *)&local_f8,(StrRange *)&local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  local_110 = 0;
  local_b8 = "symbol";
  local_b0 = 6;
  String::parse_latin1((StrRange *)&local_110);
  local_b8 = (char *)0x0;
  if (local_110 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_b8,(CowData *)&local_110);
  }
  Vector<String>::push_back((Vector<String> *)&local_f8,(StrRange *)&local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  local_100 = 0;
  local_b8 = "path";
  local_b0 = 4;
  String::parse_latin1((StrRange *)&local_100);
  local_b8 = (char *)0x0;
  if (local_100 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_b8,(CowData *)&local_100);
  }
  Vector<String>::push_back((Vector<String> *)&local_f8,(StrRange *)&local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  local_108 = 0;
  local_b8 = "owner";
  local_b0 = 5;
  String::parse_latin1((StrRange *)&local_108);
  local_b8 = (char *)0x0;
  if (local_108 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_b8,(CowData *)&local_108);
  }
  Vector<String>::push_back((Vector<String> *)&local_f8,(StrRange *)&local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_110);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
  local_a8 = (undefined1  [16])0x0;
  local_e8 = "_lookup_code";
  local_b8 = (char *)0x0;
  local_b0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 6;
  local_80 = 1;
  local_78[0] = 0;
  local_68 = 0;
  local_60 = 0;
  local_50 = 0;
  local_e0._0_8_ = 0xc;
  String::parse_latin1((StrRange *)&local_b8);
  local_80 = CONCAT44(local_80._4_4_,0x8c);
  GetTypeInfo<Dictionary,void>::get_class_info((GetTypeInfo<Dictionary,void> *)&local_e8);
  PropertyInfo::operator=((PropertyInfo *)&local_b0,(PropertyInfo *)&local_e8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_e8);
  local_60 = local_60 & 0xffffffff00000000;
  GetTypeInfo<String_const&,void>::get_class_info((GetTypeInfo<String_const&,void> *)&local_e8);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_78,(PropertyInfo *)&local_e8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_e8);
  Vector<int>::push_back(local_58,0);
  GetTypeInfo<String_const&,void>::get_class_info((GetTypeInfo<String_const&,void> *)&local_e8);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_78,(PropertyInfo *)&local_e8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_e8);
  Vector<int>::push_back(local_58,0);
  GetTypeInfo<String_const&,void>::get_class_info((GetTypeInfo<String_const&,void> *)&local_e8);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_78,(PropertyInfo *)&local_e8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_e8);
  Vector<int>::push_back(local_58,0);
  local_e8 = "Object";
  local_108 = 0;
  local_e0._0_8_ = 6;
  String::parse_latin1((StrRange *)&local_108);
  StringName::StringName((StringName *)&local_100,(String *)&local_108,false);
  local_e8 = (char *)CONCAT44(local_e8._4_4_,0x18);
  auVar9._8_8_ = 0;
  auVar9._0_8_ = local_e0._8_8_;
  local_e0 = auVar9 << 0x40;
  StringName::StringName(local_138,(StringName *)&local_100);
  local_d0 = 0;
  local_c8 = 0;
  local_c0 = 6;
  if ((StringName::configured != '\0') && (local_100 != 0)) {
    StringName::unref();
  }
  lVar11 = local_108;
  if (local_108 != 0) {
    LOCK();
    plVar1 = (long *)(local_108 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_108 = 0;
      Memory::free_static((void *)(lVar11 + -0x10),false);
    }
  }
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_78,(PropertyInfo *)&local_e8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_e8);
  Vector<int>::push_back(local_58,0);
  local_100 = 0;
  local_e8 = "ScriptLanguageExtension";
  local_e0._0_8_ = 0x17;
  String::parse_latin1((StrRange *)&local_100);
  StringName::StringName((StringName *)&local_e8,(String *)&local_100,false);
  ClassDB::add_virtual_method
            ((StringName *)&local_e8,(MethodInfo *)&local_b8,true,(Vector *)&local_f8,false);
  if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  MethodInfo::~MethodInfo((MethodInfo *)&local_b8);
  CowData<String>::_unref((CowData<String> *)&local_f0);
  local_f0 = 0;
  local_e8 = (char *)0x0;
  local_b8 = "code";
  local_b0 = 4;
  String::parse_latin1((StrRange *)&local_e8);
  local_b8 = (char *)0x0;
  if (local_e8 != (char *)0x0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_b8,(CowData *)&local_e8);
  }
  Vector<String>::push_back((Vector<String> *)&local_f8,(StrRange *)&local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  local_108 = 0;
  local_b8 = "from_line";
  local_b0 = 9;
  String::parse_latin1((StrRange *)&local_108);
  local_b8 = (char *)0x0;
  if (local_108 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_b8,(CowData *)&local_108);
  }
  Vector<String>::push_back((Vector<String> *)&local_f8,(StrRange *)&local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  local_100 = 0;
  local_b8 = "to_line";
  local_b0 = 7;
  String::parse_latin1((StrRange *)&local_100);
  local_b8 = (char *)0x0;
  if (local_100 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_b8,(CowData *)&local_100);
  }
  Vector<String>::push_back((Vector<String> *)&local_f8,(StrRange *)&local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
  local_a8 = (undefined1  [16])0x0;
  local_e8 = "_auto_indent_code";
  local_b8 = (char *)0x0;
  local_b0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 6;
  local_80 = 1;
  local_78[0] = 0;
  local_68 = 0;
  local_60 = 0;
  local_50 = 0;
  local_e0._0_8_ = 0x11;
  String::parse_latin1((StrRange *)&local_b8);
  local_80 = CONCAT44(local_80._4_4_,0x8c);
  GetTypeInfo<String,void>::get_class_info((GetTypeInfo<String,void> *)&local_e8);
  PropertyInfo::operator=((PropertyInfo *)&local_b0,(PropertyInfo *)&local_e8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_e8);
  local_60 = local_60 & 0xffffffff00000000;
  GetTypeInfo<String_const&,void>::get_class_info((GetTypeInfo<String_const&,void> *)&local_e8);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_78,(PropertyInfo *)&local_e8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_e8);
  Vector<int>::push_back(local_58,0);
  GetTypeInfo<int,void>::get_class_info((GetTypeInfo<int,void> *)&local_e8);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_78,(PropertyInfo *)&local_e8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_e8);
  Vector<int>::push_back(local_58,3);
  GetTypeInfo<int,void>::get_class_info((GetTypeInfo<int,void> *)&local_e8);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_78,(PropertyInfo *)&local_e8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_e8);
  Vector<int>::push_back(local_58,3);
  local_100 = 0;
  local_e8 = "ScriptLanguageExtension";
  local_e0._0_8_ = 0x17;
  String::parse_latin1((StrRange *)&local_100);
  StringName::StringName((StringName *)&local_e8,(String *)&local_100,false);
  ClassDB::add_virtual_method
            ((StringName *)&local_e8,(MethodInfo *)&local_b8,true,(Vector *)&local_f8,false);
  if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  MethodInfo::~MethodInfo((MethodInfo *)&local_b8);
  CowData<String>::_unref((CowData<String> *)&local_f0);
  local_f0 = 0;
  local_e8 = (char *)0x0;
  local_b8 = "name";
  local_b0 = 4;
  String::parse_latin1((StrRange *)&local_e8);
  local_b8 = (char *)0x0;
  if (local_e8 != (char *)0x0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_b8,(CowData *)&local_e8);
  }
  Vector<String>::push_back((Vector<String> *)&local_f8,(StrRange *)&local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  local_100 = 0;
  local_b8 = "value";
  local_b0 = 5;
  String::parse_latin1((StrRange *)&local_100);
  local_b8 = (char *)0x0;
  if (local_100 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_b8,(CowData *)&local_100);
  }
  Vector<String>::push_back((Vector<String> *)&local_f8,(StrRange *)&local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
  local_a8 = (undefined1  [16])0x0;
  local_e8 = "_add_global_constant";
  local_b8 = (char *)0x0;
  local_b0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 6;
  local_80 = 1;
  local_78[0] = 0;
  local_68 = 0;
  local_60 = 0;
  local_50 = 0;
  local_e0._0_8_ = 0x14;
  String::parse_latin1((StrRange *)&local_b8);
  local_80 = CONCAT44(local_80._4_4_,0x88);
  GetTypeInfo<StringName_const&,void>::get_class_info
            ((GetTypeInfo<StringName_const&,void> *)&local_e8);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_78,(PropertyInfo *)&local_e8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_e8);
  Vector<int>::push_back(local_58,0);
  local_100 = 0;
  local_108 = 0;
  local_110 = 0;
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_e8,0,(StrRange *)&local_110,0,(StrRange *)&local_108,0x20006,
             (StrRange *)&local_100);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_110);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
  if ((StringName::configured != '\0') && (local_100 != 0)) {
    StringName::unref();
  }
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_78,(PropertyInfo *)&local_e8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_e8);
  Vector<int>::push_back(local_58,0);
  local_100 = 0;
  local_e8 = "ScriptLanguageExtension";
  local_e0._0_8_ = 0x17;
  String::parse_latin1((StrRange *)&local_100);
  StringName::StringName((StringName *)&local_e8,(String *)&local_100,false);
  ClassDB::add_virtual_method
            ((StringName *)&local_e8,(MethodInfo *)&local_b8,true,(Vector *)&local_f8,false);
  if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  MethodInfo::~MethodInfo((MethodInfo *)&local_b8);
  CowData<String>::_unref((CowData<String> *)&local_f0);
  local_f0 = 0;
  local_e8 = (char *)0x0;
  local_b8 = "name";
  local_b0 = 4;
  String::parse_latin1((StrRange *)&local_e8);
  local_b8 = (char *)0x0;
  if (local_e8 != (char *)0x0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_b8,(CowData *)&local_e8);
  }
  Vector<String>::push_back((Vector<String> *)&local_f8,(StrRange *)&local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  local_100 = 0;
  local_b8 = "value";
  local_b0 = 5;
  String::parse_latin1((StrRange *)&local_100);
  local_b8 = (char *)0x0;
  if (local_100 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_b8,(CowData *)&local_100);
  }
  Vector<String>::push_back((Vector<String> *)&local_f8,(StrRange *)&local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
  local_a8 = (undefined1  [16])0x0;
  local_e8 = "_add_named_global_constant";
  local_b8 = (char *)0x0;
  local_b0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 6;
  local_80 = 1;
  local_78[0] = 0;
  local_68 = 0;
  local_60 = 0;
  local_50 = 0;
  local_e0._0_8_ = 0x1a;
  String::parse_latin1((StrRange *)&local_b8);
  local_80 = CONCAT44(local_80._4_4_,0x88);
  GetTypeInfo<StringName_const&,void>::get_class_info
            ((GetTypeInfo<StringName_const&,void> *)&local_e8);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_78,(PropertyInfo *)&local_e8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_e8);
  Vector<int>::push_back(local_58,0);
  local_100 = 0;
  local_108 = 0;
  local_110 = 0;
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_e8,0,(StrRange *)&local_110,0,(StrRange *)&local_108,0x20006,
             (StrRange *)&local_100);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_110);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
  if ((StringName::configured != '\0') && (local_100 != 0)) {
    StringName::unref();
  }
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_78,(PropertyInfo *)&local_e8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_e8);
  Vector<int>::push_back(local_58,0);
  local_100 = 0;
  local_e8 = "ScriptLanguageExtension";
  local_e0._0_8_ = 0x17;
  String::parse_latin1((StrRange *)&local_100);
  StringName::StringName((StringName *)&local_e8,(String *)&local_100,false);
  ClassDB::add_virtual_method
            ((StringName *)&local_e8,(MethodInfo *)&local_b8,true,(Vector *)&local_f8,false);
  if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  MethodInfo::~MethodInfo((MethodInfo *)&local_b8);
  CowData<String>::_unref((CowData<String> *)&local_f0);
  local_f0 = 0;
  local_e8 = (char *)0x0;
  local_b8 = "name";
  local_b0 = 4;
  String::parse_latin1((StrRange *)&local_e8);
  local_b8 = (char *)0x0;
  if (local_e8 != (char *)0x0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_b8,(CowData *)&local_e8);
  }
  Vector<String>::push_back((Vector<String> *)&local_f8,(StrRange *)&local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
  local_a8 = (undefined1  [16])0x0;
  local_e8 = "_remove_named_global_constant";
  local_b8 = (char *)0x0;
  local_b0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 6;
  local_80 = 1;
  local_78[0] = 0;
  local_68 = 0;
  local_60 = 0;
  local_50 = 0;
  local_e0._0_8_ = 0x1d;
  String::parse_latin1((StrRange *)&local_b8);
  local_80 = CONCAT44(local_80._4_4_,0x88);
  GetTypeInfo<StringName_const&,void>::get_class_info
            ((GetTypeInfo<StringName_const&,void> *)&local_e8);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_78,(PropertyInfo *)&local_e8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_e8);
  Vector<int>::push_back(local_58,0);
  local_100 = 0;
  local_e8 = "ScriptLanguageExtension";
  local_e0._0_8_ = 0x17;
  String::parse_latin1((StrRange *)&local_100);
  StringName::StringName((StringName *)&local_e8,(String *)&local_100,false);
  ClassDB::add_virtual_method
            ((StringName *)&local_e8,(MethodInfo *)&local_b8,true,(Vector *)&local_f8,false);
  if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  MethodInfo::~MethodInfo((MethodInfo *)&local_b8);
  CowData<String>::_unref((CowData<String> *)&local_f0);
  local_a8 = (undefined1  [16])0x0;
  local_e8 = "_thread_enter";
  local_f0 = 0;
  local_b8 = (char *)0x0;
  local_b0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 6;
  local_80 = 1;
  local_78[0] = 0;
  local_68 = 0;
  local_60 = 0;
  local_50 = 0;
  local_e0._0_8_ = 0xd;
  String::parse_latin1((StrRange *)&local_b8);
  local_80 = CONCAT44(local_80._4_4_,0x88);
  local_100 = 0;
  local_e8 = "ScriptLanguageExtension";
  local_e0._0_8_ = 0x17;
  String::parse_latin1((StrRange *)&local_100);
  StringName::StringName((StringName *)&local_e8,(String *)&local_100,false);
  ClassDB::add_virtual_method
            ((StringName *)&local_e8,(MethodInfo *)&local_b8,true,(Vector *)&local_f8,false);
  if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  MethodInfo::~MethodInfo((MethodInfo *)&local_b8);
  CowData<String>::_unref((CowData<String> *)&local_f0);
  local_a8 = (undefined1  [16])0x0;
  local_e8 = "_thread_exit";
  local_f0 = 0;
  local_b8 = (char *)0x0;
  local_b0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 6;
  local_80 = 1;
  local_78[0] = 0;
  local_68 = 0;
  local_60 = 0;
  local_50 = 0;
  local_e0._0_8_ = 0xc;
  String::parse_latin1((StrRange *)&local_b8);
  local_80 = CONCAT44(local_80._4_4_,0x88);
  local_100 = 0;
  local_e8 = "ScriptLanguageExtension";
  local_e0._0_8_ = 0x17;
  String::parse_latin1((StrRange *)&local_100);
  StringName::StringName((StringName *)&local_e8,(String *)&local_100,false);
  ClassDB::add_virtual_method
            ((StringName *)&local_e8,(MethodInfo *)&local_b8,true,(Vector *)&local_f8,false);
  if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  MethodInfo::~MethodInfo((MethodInfo *)&local_b8);
  CowData<String>::_unref((CowData<String> *)&local_f0);
  local_a8 = (undefined1  [16])0x0;
  local_e8 = "_debug_get_error";
  local_f0 = 0;
  local_b8 = (char *)0x0;
  local_b0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 6;
  local_80 = 1;
  local_78[0] = 0;
  local_68 = 0;
  local_60 = 0;
  local_50 = 0;
  local_e0._0_8_ = 0x10;
  String::parse_latin1((StrRange *)&local_b8);
  local_80 = CONCAT44(local_80._4_4_,0x8c);
  GetTypeInfo<String,void>::get_class_info((GetTypeInfo<String,void> *)&local_e8);
  PropertyInfo::operator=((PropertyInfo *)&local_b0,(PropertyInfo *)&local_e8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_e8);
  local_60 = local_60 & 0xffffffff00000000;
  local_100 = 0;
  local_e8 = "ScriptLanguageExtension";
  local_e0._0_8_ = 0x17;
  String::parse_latin1((StrRange *)&local_100);
  StringName::StringName((StringName *)&local_e8,(String *)&local_100,false);
  ClassDB::add_virtual_method
            ((StringName *)&local_e8,(MethodInfo *)&local_b8,true,(Vector *)&local_f8,false);
  if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  MethodInfo::~MethodInfo((MethodInfo *)&local_b8);
  CowData<String>::_unref((CowData<String> *)&local_f0);
  local_a8 = (undefined1  [16])0x0;
  local_e8 = "_debug_get_stack_level_count";
  local_f0 = 0;
  local_b8 = (char *)0x0;
  local_b0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 6;
  local_80 = 1;
  local_78[0] = 0;
  local_68 = 0;
  local_60 = 0;
  local_50 = 0;
  local_e0._0_8_ = 0x1c;
  String::parse_latin1((StrRange *)&local_b8);
  local_80 = CONCAT44(local_80._4_4_,0x8c);
  GetTypeInfo<int,void>::get_class_info((GetTypeInfo<int,void> *)&local_e8);
  PropertyInfo::operator=((PropertyInfo *)&local_b0,(PropertyInfo *)&local_e8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_e8);
  local_60 = CONCAT44(local_60._4_4_,3);
  local_100 = 0;
  local_e8 = "ScriptLanguageExtension";
  local_e0._0_8_ = 0x17;
  String::parse_latin1((StrRange *)&local_100);
  StringName::StringName((StringName *)&local_e8,(String *)&local_100,false);
  ClassDB::add_virtual_method
            ((StringName *)&local_e8,(MethodInfo *)&local_b8,true,(Vector *)&local_f8,false);
  if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  MethodInfo::~MethodInfo((MethodInfo *)&local_b8);
  CowData<String>::_unref((CowData<String> *)&local_f0);
  local_f0 = 0;
  local_e8 = (char *)0x0;
  local_b8 = "level";
  local_b0 = 5;
  String::parse_latin1((StrRange *)&local_e8);
  local_b8 = (char *)0x0;
  if (local_e8 != (char *)0x0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_b8,(CowData *)&local_e8);
  }
  Vector<String>::push_back((Vector<String> *)&local_f8,(StrRange *)&local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
  local_a8 = (undefined1  [16])0x0;
  local_e8 = "_debug_get_stack_level_line";
  local_b8 = (char *)0x0;
  local_b0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 6;
  local_80 = 1;
  local_78[0] = 0;
  local_68 = 0;
  local_60 = 0;
  local_50 = 0;
  local_e0._0_8_ = 0x1b;
  String::parse_latin1((StrRange *)&local_b8);
  local_80 = CONCAT44(local_80._4_4_,0x8c);
  GetTypeInfo<int,void>::get_class_info((GetTypeInfo<int,void> *)&local_e8);
  PropertyInfo::operator=((PropertyInfo *)&local_b0,(PropertyInfo *)&local_e8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_e8);
  local_60 = CONCAT44(local_60._4_4_,3);
  GetTypeInfo<int,void>::get_class_info((GetTypeInfo<int,void> *)&local_e8);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_78,(PropertyInfo *)&local_e8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_e8);
  Vector<int>::push_back(local_58,3);
  local_100 = 0;
  local_e8 = "ScriptLanguageExtension";
  local_e0._0_8_ = 0x17;
  String::parse_latin1((StrRange *)&local_100);
  StringName::StringName((StringName *)&local_e8,(String *)&local_100,false);
  ClassDB::add_virtual_method
            ((StringName *)&local_e8,(MethodInfo *)&local_b8,true,(Vector *)&local_f8,false);
  if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  MethodInfo::~MethodInfo((MethodInfo *)&local_b8);
  CowData<String>::_unref((CowData<String> *)&local_f0);
  local_f0 = 0;
  local_e8 = (char *)0x0;
  local_b8 = "level";
  local_b0 = 5;
  String::parse_latin1((StrRange *)&local_e8);
  local_b8 = (char *)0x0;
  if (local_e8 != (char *)0x0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_b8,(CowData *)&local_e8);
  }
  Vector<String>::push_back((Vector<String> *)&local_f8,(StrRange *)&local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
  local_a8 = (undefined1  [16])0x0;
  local_e8 = "_debug_get_stack_level_function";
  local_b8 = (char *)0x0;
  local_b0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 6;
  local_80 = 1;
  local_78[0] = 0;
  local_68 = 0;
  local_60 = 0;
  local_50 = 0;
  local_e0._0_8_ = 0x1f;
  String::parse_latin1((StrRange *)&local_b8);
  local_80 = CONCAT44(local_80._4_4_,0x8c);
  GetTypeInfo<String,void>::get_class_info((GetTypeInfo<String,void> *)&local_e8);
  PropertyInfo::operator=((PropertyInfo *)&local_b0,(PropertyInfo *)&local_e8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_e8);
  local_60 = local_60 & 0xffffffff00000000;
  GetTypeInfo<int,void>::get_class_info((GetTypeInfo<int,void> *)&local_e8);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_78,(PropertyInfo *)&local_e8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_e8);
  Vector<int>::push_back(local_58,3);
  local_100 = 0;
  local_e8 = "ScriptLanguageExtension";
  local_e0._0_8_ = 0x17;
  String::parse_latin1((StrRange *)&local_100);
  StringName::StringName((StringName *)&local_e8,(String *)&local_100,false);
  ClassDB::add_virtual_method
            ((StringName *)&local_e8,(MethodInfo *)&local_b8,true,(Vector *)&local_f8,false);
  if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  MethodInfo::~MethodInfo((MethodInfo *)&local_b8);
  CowData<String>::_unref((CowData<String> *)&local_f0);
  local_f0 = 0;
  local_e8 = (char *)0x0;
  local_b8 = "level";
  local_b0 = 5;
  String::parse_latin1((StrRange *)&local_e8);
  local_b8 = (char *)0x0;
  if (local_e8 != (char *)0x0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_b8,(CowData *)&local_e8);
  }
  Vector<String>::push_back((Vector<String> *)&local_f8,(StrRange *)&local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
  local_a8 = (undefined1  [16])0x0;
  local_e8 = "_debug_get_stack_level_source";
  local_b8 = (char *)0x0;
  local_b0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 6;
  local_80 = 1;
  local_78[0] = 0;
  local_68 = 0;
  local_60 = 0;
  local_50 = 0;
  local_e0._0_8_ = 0x1d;
  String::parse_latin1((StrRange *)&local_b8);
  local_80 = CONCAT44(local_80._4_4_,0x8c);
  GetTypeInfo<String,void>::get_class_info((GetTypeInfo<String,void> *)&local_e8);
  PropertyInfo::operator=((PropertyInfo *)&local_b0,(PropertyInfo *)&local_e8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_e8);
  local_60 = local_60 & 0xffffffff00000000;
  GetTypeInfo<int,void>::get_class_info((GetTypeInfo<int,void> *)&local_e8);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_78,(PropertyInfo *)&local_e8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_e8);
  Vector<int>::push_back(local_58,3);
  local_100 = 0;
  local_e8 = "ScriptLanguageExtension";
  local_e0._0_8_ = 0x17;
  String::parse_latin1((StrRange *)&local_100);
  StringName::StringName((StringName *)&local_e8,(String *)&local_100,false);
  ClassDB::add_virtual_method
            ((StringName *)&local_e8,(MethodInfo *)&local_b8,true,(Vector *)&local_f8,false);
  if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  MethodInfo::~MethodInfo((MethodInfo *)&local_b8);
  CowData<String>::_unref((CowData<String> *)&local_f0);
  local_f0 = 0;
  local_e8 = (char *)0x0;
  local_b8 = "level";
  local_b0 = 5;
  String::parse_latin1((StrRange *)&local_e8);
  local_b8 = (char *)0x0;
  if (local_e8 != (char *)0x0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_b8,(CowData *)&local_e8);
  }
  Vector<String>::push_back((Vector<String> *)&local_f8,(StrRange *)&local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  local_108 = 0;
  local_b8 = "max_subitems";
  local_b0 = 0xc;
  String::parse_latin1((StrRange *)&local_108);
  local_b8 = (char *)0x0;
  if (local_108 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_b8,(CowData *)&local_108);
  }
  Vector<String>::push_back((Vector<String> *)&local_f8,(StrRange *)&local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  local_100 = 0;
  local_b8 = "max_depth";
  local_b0 = 9;
  String::parse_latin1((StrRange *)&local_100);
  local_b8 = (char *)0x0;
  if (local_100 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_b8,(CowData *)&local_100);
  }
  Vector<String>::push_back((Vector<String> *)&local_f8,(StrRange *)&local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
  local_a8 = (undefined1  [16])0x0;
  local_e8 = "_debug_get_stack_level_locals";
  local_b8 = (char *)0x0;
  local_b0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 6;
  local_80 = 1;
  local_78[0] = 0;
  local_68 = 0;
  local_60 = 0;
  local_50 = 0;
  local_e0._0_8_ = 0x1d;
  String::parse_latin1((StrRange *)&local_b8);
  local_80 = CONCAT44(local_80._4_4_,0x88);
  GetTypeInfo<Dictionary,void>::get_class_info((GetTypeInfo<Dictionary,void> *)&local_e8);
  PropertyInfo::operator=((PropertyInfo *)&local_b0,(PropertyInfo *)&local_e8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_e8);
  local_60 = local_60 & 0xffffffff00000000;
  GetTypeInfo<int,void>::get_class_info((GetTypeInfo<int,void> *)&local_e8);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_78,(PropertyInfo *)&local_e8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_e8);
  Vector<int>::push_back(local_58,3);
  GetTypeInfo<int,void>::get_class_info((GetTypeInfo<int,void> *)&local_e8);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_78,(PropertyInfo *)&local_e8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_e8);
  Vector<int>::push_back(local_58,3);
  GetTypeInfo<int,void>::get_class_info((GetTypeInfo<int,void> *)&local_e8);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_78,(PropertyInfo *)&local_e8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_e8);
  Vector<int>::push_back(local_58,3);
  local_100 = 0;
  local_e8 = "ScriptLanguageExtension";
  local_e0._0_8_ = 0x17;
  String::parse_latin1((StrRange *)&local_100);
  StringName::StringName((StringName *)&local_e8,(String *)&local_100,false);
  ClassDB::add_virtual_method
            ((StringName *)&local_e8,(MethodInfo *)&local_b8,true,(Vector *)&local_f8,false);
  if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  MethodInfo::~MethodInfo((MethodInfo *)&local_b8);
  CowData<String>::_unref((CowData<String> *)&local_f0);
  local_f0 = 0;
  local_e8 = (char *)0x0;
  local_b8 = "level";
  local_b0 = 5;
  String::parse_latin1((StrRange *)&local_e8);
  local_b8 = (char *)0x0;
  if (local_e8 != (char *)0x0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_b8,(CowData *)&local_e8);
  }
  Vector<String>::push_back((Vector<String> *)&local_f8,(StrRange *)&local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  local_108 = 0;
  local_b8 = "max_subitems";
  local_b0 = 0xc;
  String::parse_latin1((StrRange *)&local_108);
  local_b8 = (char *)0x0;
  if (local_108 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_b8,(CowData *)&local_108);
  }
  Vector<String>::push_back((Vector<String> *)&local_f8,(StrRange *)&local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  local_100 = 0;
  local_b8 = "max_depth";
  local_b0 = 9;
  String::parse_latin1((StrRange *)&local_100);
  local_b8 = (char *)0x0;
  if (local_100 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_b8,(CowData *)&local_100);
  }
  Vector<String>::push_back((Vector<String> *)&local_f8,(StrRange *)&local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
  local_a8 = (undefined1  [16])0x0;
  local_e8 = "_debug_get_stack_level_members";
  local_b8 = (char *)0x0;
  local_b0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 6;
  local_80 = 1;
  local_78[0] = 0;
  local_68 = 0;
  local_60 = 0;
  local_50 = 0;
  local_e0._0_8_ = 0x1e;
  String::parse_latin1((StrRange *)&local_b8);
  local_80 = CONCAT44(local_80._4_4_,0x88);
  GetTypeInfo<Dictionary,void>::get_class_info((GetTypeInfo<Dictionary,void> *)&local_e8);
  PropertyInfo::operator=((PropertyInfo *)&local_b0,(PropertyInfo *)&local_e8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_e8);
  local_60 = local_60 & 0xffffffff00000000;
  GetTypeInfo<int,void>::get_class_info((GetTypeInfo<int,void> *)&local_e8);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_78,(PropertyInfo *)&local_e8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_e8);
  Vector<int>::push_back(local_58,3);
  GetTypeInfo<int,void>::get_class_info((GetTypeInfo<int,void> *)&local_e8);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_78,(PropertyInfo *)&local_e8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_e8);
  Vector<int>::push_back(local_58,3);
  GetTypeInfo<int,void>::get_class_info((GetTypeInfo<int,void> *)&local_e8);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_78,(PropertyInfo *)&local_e8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_e8);
  Vector<int>::push_back(local_58,3);
  local_100 = 0;
  local_e8 = "ScriptLanguageExtension";
  local_e0._0_8_ = 0x17;
  String::parse_latin1((StrRange *)&local_100);
  StringName::StringName((StringName *)&local_e8,(String *)&local_100,false);
  ClassDB::add_virtual_method
            ((StringName *)&local_e8,(MethodInfo *)&local_b8,true,(Vector *)&local_f8,false);
  if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  MethodInfo::~MethodInfo((MethodInfo *)&local_b8);
  CowData<String>::_unref((CowData<String> *)&local_f0);
  local_f0 = 0;
  local_e8 = (char *)0x0;
  local_b8 = "level";
  local_b0 = 5;
  String::parse_latin1((StrRange *)&local_e8);
  local_b8 = (char *)0x0;
  if (local_e8 != (char *)0x0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_b8,(CowData *)&local_e8);
  }
  Vector<String>::push_back((Vector<String> *)&local_f8,(StrRange *)&local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
  local_a8 = (undefined1  [16])0x0;
  local_e8 = "_debug_get_stack_level_instance";
  local_b8 = (char *)0x0;
  local_b0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 6;
  local_80 = 1;
  local_78[0] = 0;
  local_68 = 0;
  local_60 = 0;
  local_50 = 0;
  local_e0._0_8_ = 0x1f;
  String::parse_latin1((StrRange *)&local_b8);
  local_80 = CONCAT44(local_80._4_4_,0x88);
  GetTypeInfo<GDExtensionPtr<void>,void>::get_class_info
            ((GetTypeInfo<GDExtensionPtr<void>,void> *)&local_e8);
  PropertyInfo::operator=((PropertyInfo *)&local_b0,(PropertyInfo *)&local_e8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_e8);
  local_60 = local_60 & 0xffffffff00000000;
  GetTypeInfo<int,void>::get_class_info((GetTypeInfo<int,void> *)&local_e8);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_78,(PropertyInfo *)&local_e8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_e8);
  Vector<int>::push_back(local_58,3);
  local_100 = 0;
  local_e8 = "ScriptLanguageExtension";
  local_e0._0_8_ = 0x17;
  String::parse_latin1((StrRange *)&local_100);
  StringName::StringName((StringName *)&local_e8,(String *)&local_100,false);
  ClassDB::add_virtual_method
            ((StringName *)&local_e8,(MethodInfo *)&local_b8,true,(Vector *)&local_f8,false);
  if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  MethodInfo::~MethodInfo((MethodInfo *)&local_b8);
  CowData<String>::_unref((CowData<String> *)&local_f0);
  local_f0 = 0;
  local_e8 = (char *)0x0;
  local_b8 = "max_subitems";
  local_b0 = 0xc;
  String::parse_latin1((StrRange *)&local_e8);
  local_b8 = (char *)0x0;
  if (local_e8 != (char *)0x0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_b8,(CowData *)&local_e8);
  }
  Vector<String>::push_back((Vector<String> *)&local_f8,(StrRange *)&local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  local_100 = 0;
  local_b8 = "max_depth";
  local_b0 = 9;
  String::parse_latin1((StrRange *)&local_100);
  local_b8 = (char *)0x0;
  if (local_100 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_b8,(CowData *)&local_100);
  }
  Vector<String>::push_back((Vector<String> *)&local_f8,(StrRange *)&local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
  local_a8 = (undefined1  [16])0x0;
  local_e8 = "_debug_get_globals";
  local_b8 = (char *)0x0;
  local_b0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 6;
  local_80 = 1;
  local_78[0] = 0;
  local_68 = 0;
  local_60 = 0;
  local_50 = 0;
  local_e0._0_8_ = 0x12;
  String::parse_latin1((StrRange *)&local_b8);
  local_80 = CONCAT44(local_80._4_4_,0x88);
  GetTypeInfo<Dictionary,void>::get_class_info((GetTypeInfo<Dictionary,void> *)&local_e8);
  PropertyInfo::operator=((PropertyInfo *)&local_b0,(PropertyInfo *)&local_e8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_e8);
  local_60 = local_60 & 0xffffffff00000000;
  GetTypeInfo<int,void>::get_class_info((GetTypeInfo<int,void> *)&local_e8);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_78,(PropertyInfo *)&local_e8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_e8);
  Vector<int>::push_back(local_58,3);
  GetTypeInfo<int,void>::get_class_info((GetTypeInfo<int,void> *)&local_e8);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_78,(PropertyInfo *)&local_e8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_e8);
  Vector<int>::push_back(local_58,3);
  local_100 = 0;
  local_e8 = "ScriptLanguageExtension";
  local_e0._0_8_ = 0x17;
  String::parse_latin1((StrRange *)&local_100);
  StringName::StringName((StringName *)&local_e8,(String *)&local_100,false);
  ClassDB::add_virtual_method
            ((StringName *)&local_e8,(MethodInfo *)&local_b8,true,(Vector *)&local_f8,false);
  if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  MethodInfo::~MethodInfo((MethodInfo *)&local_b8);
  CowData<String>::_unref((CowData<String> *)&local_f0);
  local_f0 = 0;
  local_e8 = (char *)0x0;
  local_b8 = "level";
  local_b0 = 5;
  String::parse_latin1((StrRange *)&local_e8);
  local_b8 = (char *)0x0;
  if (local_e8 != (char *)0x0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_b8,(CowData *)&local_e8);
  }
  Vector<String>::push_back((Vector<String> *)&local_f8,(StrRange *)&local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  local_110 = 0;
  local_b8 = "expression";
  local_b0 = 10;
  String::parse_latin1((StrRange *)&local_110);
  local_b8 = (char *)0x0;
  if (local_110 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_b8,(CowData *)&local_110);
  }
  Vector<String>::push_back((Vector<String> *)&local_f8,(StrRange *)&local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  local_100 = 0;
  local_b8 = "max_subitems";
  local_b0 = 0xc;
  String::parse_latin1((StrRange *)&local_100);
  local_b8 = (char *)0x0;
  if (local_100 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_b8,(CowData *)&local_100);
  }
  Vector<String>::push_back((Vector<String> *)&local_f8,(StrRange *)&local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  local_108 = 0;
  local_b8 = "max_depth";
  local_b0 = 9;
  String::parse_latin1((StrRange *)&local_108);
  local_b8 = (char *)0x0;
  if (local_108 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_b8,(CowData *)&local_108);
  }
  Vector<String>::push_back((Vector<String> *)&local_f8,(StrRange *)&local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_110);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
  local_a8 = (undefined1  [16])0x0;
  local_e8 = "_debug_parse_stack_level_expression";
  local_b8 = (char *)0x0;
  local_b0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 6;
  local_80 = 1;
  local_78[0] = 0;
  local_68 = 0;
  local_60 = 0;
  local_50 = 0;
  local_e0._0_8_ = 0x23;
  String::parse_latin1((StrRange *)&local_b8);
  local_80 = CONCAT44(local_80._4_4_,0x88);
  GetTypeInfo<String,void>::get_class_info((GetTypeInfo<String,void> *)&local_e8);
  PropertyInfo::operator=((PropertyInfo *)&local_b0,(PropertyInfo *)&local_e8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_e8);
  local_60 = local_60 & 0xffffffff00000000;
  GetTypeInfo<int,void>::get_class_info((GetTypeInfo<int,void> *)&local_e8);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_78,(PropertyInfo *)&local_e8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_e8);
  Vector<int>::push_back(local_58,3);
  GetTypeInfo<String_const&,void>::get_class_info((GetTypeInfo<String_const&,void> *)&local_e8);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_78,(PropertyInfo *)&local_e8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_e8);
  Vector<int>::push_back(local_58,0);
  GetTypeInfo<int,void>::get_class_info((GetTypeInfo<int,void> *)&local_e8);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_78,(PropertyInfo *)&local_e8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_e8);
  Vector<int>::push_back(local_58,3);
  GetTypeInfo<int,void>::get_class_info((GetTypeInfo<int,void> *)&local_e8);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_78,(PropertyInfo *)&local_e8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_e8);
  Vector<int>::push_back(local_58,3);
  local_100 = 0;
  local_e8 = "ScriptLanguageExtension";
  local_e0._0_8_ = 0x17;
  String::parse_latin1((StrRange *)&local_100);
  StringName::StringName((StringName *)&local_e8,(String *)&local_100,false);
  ClassDB::add_virtual_method
            ((StringName *)&local_e8,(MethodInfo *)&local_b8,true,(Vector *)&local_f8,false);
  if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  MethodInfo::~MethodInfo((MethodInfo *)&local_b8);
  CowData<String>::_unref((CowData<String> *)&local_f0);
  local_a8 = (undefined1  [16])0x0;
  local_e8 = "_debug_get_current_stack_info";
  local_f0 = 0;
  local_b8 = (char *)0x0;
  local_b0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 6;
  local_80 = 1;
  local_78[0] = 0;
  local_68 = 0;
  local_60 = 0;
  local_50 = 0;
  local_e0._0_8_ = 0x1d;
  String::parse_latin1((StrRange *)&local_b8);
  local_80 = CONCAT44(local_80._4_4_,0x88);
  GetTypeInfo<TypedArray<Dictionary>,void>::get_class_info
            ((GetTypeInfo<TypedArray<Dictionary>,void> *)&local_e8);
  PropertyInfo::operator=((PropertyInfo *)&local_b0,(PropertyInfo *)&local_e8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_e8);
  local_60 = local_60 & 0xffffffff00000000;
  local_100 = 0;
  local_e8 = "ScriptLanguageExtension";
  local_e0._0_8_ = 0x17;
  String::parse_latin1((StrRange *)&local_100);
  StringName::StringName((StringName *)&local_e8,(String *)&local_100,false);
  ClassDB::add_virtual_method
            ((StringName *)&local_e8,(MethodInfo *)&local_b8,true,(Vector *)&local_f8,false);
  if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  MethodInfo::~MethodInfo((MethodInfo *)&local_b8);
  CowData<String>::_unref((CowData<String> *)&local_f0);
  local_a8 = (undefined1  [16])0x0;
  local_e8 = "_reload_all_scripts";
  local_f0 = 0;
  local_b8 = (char *)0x0;
  local_b0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 6;
  local_80 = 1;
  local_78[0] = 0;
  local_68 = 0;
  local_60 = 0;
  local_50 = 0;
  local_e0._0_8_ = 0x13;
  String::parse_latin1((StrRange *)&local_b8);
  local_80 = CONCAT44(local_80._4_4_,0x88);
  local_100 = 0;
  local_e8 = "ScriptLanguageExtension";
  local_e0._0_8_ = 0x17;
  String::parse_latin1((StrRange *)&local_100);
  StringName::StringName((StringName *)&local_e8,(String *)&local_100,false);
  ClassDB::add_virtual_method
            ((StringName *)&local_e8,(MethodInfo *)&local_b8,true,(Vector *)&local_f8,false);
  if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  MethodInfo::~MethodInfo((MethodInfo *)&local_b8);
  CowData<String>::_unref((CowData<String> *)&local_f0);
  local_f0 = 0;
  local_e8 = (char *)0x0;
  local_b8 = "scripts";
  local_b0 = 7;
  String::parse_latin1((StrRange *)&local_e8);
  local_b8 = (char *)0x0;
  if (local_e8 != (char *)0x0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_b8,(CowData *)&local_e8);
  }
  Vector<String>::push_back((Vector<String> *)&local_f8,(StrRange *)&local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  local_100 = 0;
  local_b8 = "soft_reload";
  local_b0 = 0xb;
  String::parse_latin1((StrRange *)&local_100);
  local_b8 = (char *)0x0;
  if (local_100 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_b8,(CowData *)&local_100);
  }
  Vector<String>::push_back((Vector<String> *)&local_f8,(StrRange *)&local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
  local_a8 = (undefined1  [16])0x0;
  local_e8 = "_reload_scripts";
  local_b8 = (char *)0x0;
  local_b0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 6;
  local_80 = 1;
  local_78[0] = 0;
  local_68 = 0;
  local_60 = 0;
  local_50 = 0;
  local_e0._0_8_ = 0xf;
  String::parse_latin1((StrRange *)&local_b8);
  local_80 = CONCAT44(local_80._4_4_,0x88);
  local_100 = 0;
  local_108 = 0;
  local_e8 = "";
  auVar10._8_8_ = 0;
  auVar10._0_8_ = local_e0._8_8_;
  local_e0 = auVar10 << 0x40;
  String::parse_latin1((StrRange *)&local_108);
  local_110 = 0;
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_e8,0x1c,(StrRange *)&local_110,0,(StrRange *)&local_108,6,
             (StrRange *)&local_100);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_110);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
  if ((StringName::configured != '\0') && (local_100 != 0)) {
    StringName::unref();
  }
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_78,(PropertyInfo *)&local_e8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_e8);
  Vector<int>::push_back(local_58,0);
  GetTypeInfo<bool,void>::get_class_info((GetTypeInfo<bool,void> *)&local_e8);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_78,(PropertyInfo *)&local_e8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_e8);
  Vector<int>::push_back(local_58,0);
  local_100 = 0;
  local_e8 = "ScriptLanguageExtension";
  local_e0._0_8_ = 0x17;
  String::parse_latin1((StrRange *)&local_100);
  StringName::StringName((StringName *)&local_e8,(String *)&local_100,false);
  ClassDB::add_virtual_method
            ((StringName *)&local_e8,(MethodInfo *)&local_b8,true,(Vector *)&local_f8,false);
  if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  MethodInfo::~MethodInfo((MethodInfo *)&local_b8);
  CowData<String>::_unref((CowData<String> *)&local_f0);
  local_f0 = 0;
  local_e8 = (char *)0x0;
  local_b8 = "script";
  local_b0 = 6;
  String::parse_latin1((StrRange *)&local_e8);
  local_b8 = (char *)0x0;
  if (local_e8 != (char *)0x0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_b8,(CowData *)&local_e8);
  }
  Vector<String>::push_back((Vector<String> *)&local_f8,(StrRange *)&local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  local_100 = 0;
  local_b8 = "soft_reload";
  local_b0 = 0xb;
  String::parse_latin1((StrRange *)&local_100);
  local_b8 = (char *)0x0;
  if (local_100 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_b8,(CowData *)&local_100);
  }
  Vector<String>::push_back((Vector<String> *)&local_f8,(StrRange *)&local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
  local_a8 = (undefined1  [16])0x0;
  local_e8 = "_reload_tool_script";
  local_b8 = (char *)0x0;
  local_b0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 6;
  local_80 = 1;
  local_78[0] = 0;
  local_68 = 0;
  local_60 = 0;
  local_50 = 0;
  local_e0._0_8_ = 0x13;
  String::parse_latin1((StrRange *)&local_b8);
  local_80 = CONCAT44(local_80._4_4_,0x88);
  GetTypeInfo<Ref<Script>const&,void>::get_class_info
            ((GetTypeInfo<Ref<Script>const&,void> *)&local_e8);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_78,(PropertyInfo *)&local_e8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_e8);
  Vector<int>::push_back(local_58,0);
  GetTypeInfo<bool,void>::get_class_info((GetTypeInfo<bool,void> *)&local_e8);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_78,(PropertyInfo *)&local_e8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_e8);
  Vector<int>::push_back(local_58,0);
  local_100 = 0;
  local_e8 = "ScriptLanguageExtension";
  local_e0._0_8_ = 0x17;
  String::parse_latin1((StrRange *)&local_100);
  StringName::StringName((StringName *)&local_e8,(String *)&local_100,false);
  ClassDB::add_virtual_method
            ((StringName *)&local_e8,(MethodInfo *)&local_b8,true,(Vector *)&local_f8,false);
  if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  MethodInfo::~MethodInfo((MethodInfo *)&local_b8);
  CowData<String>::_unref((CowData<String> *)&local_f0);
  local_a8 = (undefined1  [16])0x0;
  local_e8 = "_get_recognized_extensions";
  local_f0 = 0;
  local_b8 = (char *)0x0;
  local_b0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 6;
  local_80 = 1;
  local_78[0] = 0;
  local_68 = 0;
  local_60 = 0;
  local_50 = 0;
  local_e0._0_8_ = 0x1a;
  String::parse_latin1((StrRange *)&local_b8);
  local_80 = CONCAT44(local_80._4_4_,0x8c);
  GetTypeInfo<Vector<String>,void>::get_class_info((GetTypeInfo<Vector<String>,void> *)&local_e8);
  PropertyInfo::operator=((PropertyInfo *)&local_b0,(PropertyInfo *)&local_e8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_e8);
  local_60 = local_60 & 0xffffffff00000000;
  local_100 = 0;
  local_e8 = "ScriptLanguageExtension";
  local_e0._0_8_ = 0x17;
  String::parse_latin1((StrRange *)&local_100);
  StringName::StringName((StringName *)&local_e8,(String *)&local_100,false);
  ClassDB::add_virtual_method
            ((StringName *)&local_e8,(MethodInfo *)&local_b8,true,(Vector *)&local_f8,false);
  if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  MethodInfo::~MethodInfo((MethodInfo *)&local_b8);
  CowData<String>::_unref((CowData<String> *)&local_f0);
  local_a8 = (undefined1  [16])0x0;
  local_e8 = "_get_public_functions";
  local_f0 = 0;
  local_b8 = (char *)0x0;
  local_b0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 6;
  local_80 = 1;
  local_78[0] = 0;
  local_68 = 0;
  local_60 = 0;
  local_50 = 0;
  local_e0._0_8_ = 0x15;
  String::parse_latin1((StrRange *)&local_b8);
  local_80 = CONCAT44(local_80._4_4_,0x8c);
  GetTypeInfo<TypedArray<Dictionary>,void>::get_class_info
            ((GetTypeInfo<TypedArray<Dictionary>,void> *)&local_e8);
  PropertyInfo::operator=((PropertyInfo *)&local_b0,(PropertyInfo *)&local_e8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_e8);
  local_60 = local_60 & 0xffffffff00000000;
  local_100 = 0;
  local_e8 = "ScriptLanguageExtension";
  local_e0._0_8_ = 0x17;
  String::parse_latin1((StrRange *)&local_100);
  StringName::StringName((StringName *)&local_e8,(String *)&local_100,false);
  ClassDB::add_virtual_method
            ((StringName *)&local_e8,(MethodInfo *)&local_b8,true,(Vector *)&local_f8,false);
  if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  MethodInfo::~MethodInfo((MethodInfo *)&local_b8);
  CowData<String>::_unref((CowData<String> *)&local_f0);
  local_a8 = (undefined1  [16])0x0;
  local_e8 = "_get_public_constants";
  local_f0 = 0;
  local_b8 = (char *)0x0;
  local_b0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 6;
  local_80 = 1;
  local_78[0] = 0;
  local_68 = 0;
  local_60 = 0;
  local_50 = 0;
  local_e0._0_8_ = 0x15;
  String::parse_latin1((StrRange *)&local_b8);
  local_80 = CONCAT44(local_80._4_4_,0x8c);
  GetTypeInfo<Dictionary,void>::get_class_info((GetTypeInfo<Dictionary,void> *)&local_e8);
  PropertyInfo::operator=((PropertyInfo *)&local_b0,(PropertyInfo *)&local_e8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_e8);
  local_60 = local_60 & 0xffffffff00000000;
  local_100 = 0;
  local_e8 = "ScriptLanguageExtension";
  local_e0._0_8_ = 0x17;
  String::parse_latin1((StrRange *)&local_100);
  StringName::StringName((StringName *)&local_e8,(String *)&local_100,false);
  ClassDB::add_virtual_method
            ((StringName *)&local_e8,(MethodInfo *)&local_b8,true,(Vector *)&local_f8,false);
  if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  MethodInfo::~MethodInfo((MethodInfo *)&local_b8);
  CowData<String>::_unref((CowData<String> *)&local_f0);
  local_a8 = (undefined1  [16])0x0;
  local_e8 = "_get_public_annotations";
  local_f0 = 0;
  local_b8 = (char *)0x0;
  local_b0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 6;
  local_80 = 1;
  local_78[0] = 0;
  local_68 = 0;
  local_60 = 0;
  local_50 = 0;
  local_e0._0_8_ = 0x17;
  String::parse_latin1((StrRange *)&local_b8);
  local_80 = CONCAT44(local_80._4_4_,0x8c);
  GetTypeInfo<TypedArray<Dictionary>,void>::get_class_info
            ((GetTypeInfo<TypedArray<Dictionary>,void> *)&local_e8);
  PropertyInfo::operator=((PropertyInfo *)&local_b0,(PropertyInfo *)&local_e8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_e8);
  local_60 = local_60 & 0xffffffff00000000;
  local_100 = 0;
  local_e8 = "ScriptLanguageExtension";
  local_e0._0_8_ = 0x17;
  String::parse_latin1((StrRange *)&local_100);
  StringName::StringName((StringName *)&local_e8,(String *)&local_100,false);
  ClassDB::add_virtual_method
            ((StringName *)&local_e8,(MethodInfo *)&local_b8,true,(Vector *)&local_f8,false);
  if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  MethodInfo::~MethodInfo((MethodInfo *)&local_b8);
  CowData<String>::_unref((CowData<String> *)&local_f0);
  local_a8 = (undefined1  [16])0x0;
  local_e8 = "_profiling_start";
  local_f0 = 0;
  local_b8 = (char *)0x0;
  local_b0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 6;
  local_80 = 1;
  local_78[0] = 0;
  local_68 = 0;
  local_60 = 0;
  local_50 = 0;
  local_e0._0_8_ = 0x10;
  String::parse_latin1((StrRange *)&local_b8);
  local_80 = CONCAT44(local_80._4_4_,0x88);
  local_100 = 0;
  local_e8 = "ScriptLanguageExtension";
  local_e0._0_8_ = 0x17;
  String::parse_latin1((StrRange *)&local_100);
  StringName::StringName((StringName *)&local_e8,(String *)&local_100,false);
  ClassDB::add_virtual_method
            ((StringName *)&local_e8,(MethodInfo *)&local_b8,true,(Vector *)&local_f8,false);
  if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  MethodInfo::~MethodInfo((MethodInfo *)&local_b8);
  CowData<String>::_unref((CowData<String> *)&local_f0);
  local_a8 = (undefined1  [16])0x0;
  local_e8 = "_profiling_stop";
  local_f0 = 0;
  local_b8 = (char *)0x0;
  local_b0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 6;
  local_80 = 1;
  local_78[0] = 0;
  local_68 = 0;
  local_60 = 0;
  local_50 = 0;
  local_e0._0_8_ = 0xf;
  String::parse_latin1((StrRange *)&local_b8);
  local_80 = CONCAT44(local_80._4_4_,0x88);
  local_100 = 0;
  local_e8 = "ScriptLanguageExtension";
  local_e0._0_8_ = 0x17;
  String::parse_latin1((StrRange *)&local_100);
  StringName::StringName((StringName *)&local_e8,(String *)&local_100,false);
  ClassDB::add_virtual_method
            ((StringName *)&local_e8,(MethodInfo *)&local_b8,true,(Vector *)&local_f8,false);
  if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  MethodInfo::~MethodInfo((MethodInfo *)&local_b8);
  CowData<String>::_unref((CowData<String> *)&local_f0);
  local_f0 = 0;
  local_e8 = (char *)0x0;
  local_b8 = "enable";
  local_b0 = 6;
  String::parse_latin1((StrRange *)&local_e8);
  local_b8 = (char *)0x0;
  if (local_e8 != (char *)0x0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_b8,(CowData *)&local_e8);
  }
  Vector<String>::push_back((Vector<String> *)&local_f8,(StrRange *)&local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
  local_a8 = (undefined1  [16])0x0;
  local_e8 = "_profiling_set_save_native_calls";
  local_b8 = (char *)0x0;
  local_b0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 6;
  local_80 = 1;
  local_78[0] = 0;
  local_68 = 0;
  local_60 = 0;
  local_50 = 0;
  local_e0._0_8_ = 0x20;
  String::parse_latin1((StrRange *)&local_b8);
  local_80 = CONCAT44(local_80._4_4_,0x88);
  GetTypeInfo<bool,void>::get_class_info((GetTypeInfo<bool,void> *)&local_e8);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_78,(PropertyInfo *)&local_e8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_e8);
  Vector<int>::push_back(local_58,0);
  local_100 = 0;
  local_e8 = "ScriptLanguageExtension";
  local_e0._0_8_ = 0x17;
  String::parse_latin1((StrRange *)&local_100);
  StringName::StringName((StringName *)&local_e8,(String *)&local_100,false);
  ClassDB::add_virtual_method
            ((StringName *)&local_e8,(MethodInfo *)&local_b8,true,(Vector *)&local_f8,false);
  if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  MethodInfo::~MethodInfo((MethodInfo *)&local_b8);
  CowData<String>::_unref((CowData<String> *)&local_f0);
  local_f0 = 0;
  local_e8 = (char *)0x0;
  local_b8 = "info_array";
  local_b0 = 10;
  String::parse_latin1((StrRange *)&local_e8);
  local_b8 = (char *)0x0;
  if (local_e8 != (char *)0x0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_b8,(CowData *)&local_e8);
  }
  Vector<String>::push_back((Vector<String> *)&local_f8,(StrRange *)&local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  local_100 = 0;
  local_b8 = "info_max";
  local_b0 = 8;
  String::parse_latin1((StrRange *)&local_100);
  local_b8 = (char *)0x0;
  if (local_100 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_b8,(CowData *)&local_100);
  }
  Vector<String>::push_back((Vector<String> *)&local_f8,(StrRange *)&local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
  local_a8 = (undefined1  [16])0x0;
  local_e8 = "_profiling_get_accumulated_data";
  local_b8 = (char *)0x0;
  local_b0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 6;
  local_80 = 1;
  local_78[0] = 0;
  local_68 = 0;
  local_60 = 0;
  local_50 = 0;
  local_e0._0_8_ = 0x1f;
  String::parse_latin1((StrRange *)&local_b8);
  local_80 = CONCAT44(local_80._4_4_,0x88);
  GetTypeInfo<int,void>::get_class_info((GetTypeInfo<int,void> *)&local_e8);
  PropertyInfo::operator=((PropertyInfo *)&local_b0,(PropertyInfo *)&local_e8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_e8);
  local_60 = CONCAT44(local_60._4_4_,3);
  local_108 = 0;
  local_110 = 0;
  local_e8 = "ScriptLanguageExtensionProfilingInfo";
  local_e0._0_8_ = 0x24;
  String::parse_latin1((StrRange *)&local_110);
  local_118 = 0;
  local_e8 = (char *)CONCAT44(local_e8._4_4_,2);
  local_d0 = 0x1e;
  local_c8 = 0;
  local_e0 = (undefined1  [16])0x0;
  if (local_110 == 0) {
LAB_00107ffb:
    local_c0 = 6;
    StringName::operator=(local_138,(StrRange *)&local_108);
  }
  else {
    CowData<char32_t>::_ref(local_130,(CowData *)&local_110);
    local_c0 = 6;
    if (local_d0 != 0x11) goto LAB_00107ffb;
    StringName::StringName((StringName *)&local_100,(String *)local_130,false);
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
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_118);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_110);
  if ((StringName::configured != '\0') && (local_108 != 0)) {
    StringName::unref();
  }
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_78,(PropertyInfo *)&local_e8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_e8);
  Vector<int>::push_back(local_58,0);
  GetTypeInfo<int,void>::get_class_info((GetTypeInfo<int,void> *)&local_e8);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_78,(PropertyInfo *)&local_e8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_e8);
  Vector<int>::push_back(local_58,3);
  local_100 = 0;
  local_e8 = "ScriptLanguageExtension";
  local_e0._0_8_ = 0x17;
  String::parse_latin1((StrRange *)&local_100);
  StringName::StringName((StringName *)&local_e8,(String *)&local_100,false);
  ClassDB::add_virtual_method
            ((StringName *)&local_e8,(MethodInfo *)&local_b8,true,(Vector *)&local_f8,false);
  if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  MethodInfo::~MethodInfo((MethodInfo *)&local_b8);
  CowData<String>::_unref((CowData<String> *)&local_f0);
  local_f0 = 0;
  local_e8 = (char *)0x0;
  local_b8 = "info_array";
  local_b0 = 10;
  String::parse_latin1((StrRange *)&local_e8);
  local_b8 = (char *)0x0;
  if (local_e8 != (char *)0x0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_b8,(CowData *)&local_e8);
  }
  Vector<String>::push_back((Vector<String> *)&local_f8,(StrRange *)&local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  local_100 = 0;
  local_b8 = "info_max";
  local_b0 = 8;
  String::parse_latin1((StrRange *)&local_100);
  local_b8 = (char *)0x0;
  if (local_100 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_b8,(CowData *)&local_100);
  }
  Vector<String>::push_back((Vector<String> *)&local_f8,(StrRange *)&local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
  local_a8 = (undefined1  [16])0x0;
  local_e8 = "_profiling_get_frame_data";
  local_b8 = (char *)0x0;
  local_b0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 6;
  local_80 = 1;
  local_78[0] = 0;
  local_68 = 0;
  local_60 = 0;
  local_50 = 0;
  local_e0._0_8_ = 0x19;
  String::parse_latin1((StrRange *)&local_b8);
  local_80 = CONCAT44(local_80._4_4_,0x88);
  GetTypeInfo<int,void>::get_class_info((GetTypeInfo<int,void> *)&local_e8);
  PropertyInfo::operator=((PropertyInfo *)&local_b0,(PropertyInfo *)&local_e8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_e8);
  local_60 = CONCAT44(local_60._4_4_,3);
  local_108 = 0;
  local_110 = 0;
  local_e8 = "ScriptLanguageExtensionProfilingInfo";
  local_e0._0_8_ = 0x24;
  String::parse_latin1((StrRange *)&local_110);
  local_118 = 0;
  local_e8 = (char *)CONCAT44(local_e8._4_4_,2);
  local_d0 = 0x1e;
  local_c8 = 0;
  local_e0 = (undefined1  [16])0x0;
  if (local_110 != 0) {
    CowData<char32_t>::_ref(local_130,(CowData *)&local_110);
    local_c0 = 6;
    if (local_d0 == 0x11) {
      StringName::StringName((StringName *)&local_100,(String *)local_130,false);
      if (local_e0._8_8_ == local_100) {
        if ((StringName::configured != '\0') && (local_100 != 0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        local_e0._8_8_ = local_100;
      }
      goto LAB_001083ba;
    }
  }
  local_c0 = 6;
  StringName::operator=(local_138,(StrRange *)&local_108);
LAB_001083ba:
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_118);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_110);
  if ((StringName::configured != '\0') && (local_108 != 0)) {
    StringName::unref();
  }
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_78,(PropertyInfo *)&local_e8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_e8);
  Vector<int>::push_back(local_58,0);
  GetTypeInfo<int,void>::get_class_info((GetTypeInfo<int,void> *)&local_e8);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_78,(PropertyInfo *)&local_e8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_e8);
  Vector<int>::push_back(local_58,3);
  local_100 = 0;
  local_e8 = "ScriptLanguageExtension";
  local_e0._0_8_ = 0x17;
  String::parse_latin1((StrRange *)&local_100);
  StringName::StringName((StringName *)&local_e8,(String *)&local_100,false);
  ClassDB::add_virtual_method
            ((StringName *)&local_e8,(MethodInfo *)&local_b8,true,(Vector *)&local_f8,false);
  if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  MethodInfo::~MethodInfo((MethodInfo *)&local_b8);
  CowData<String>::_unref((CowData<String> *)&local_f0);
  local_a8 = (undefined1  [16])0x0;
  local_e8 = "_frame";
  local_f0 = 0;
  local_b8 = (char *)0x0;
  local_b0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 6;
  local_80 = 1;
  local_78[0] = 0;
  local_68 = 0;
  local_60 = 0;
  local_50 = 0;
  local_e0._0_8_ = 6;
  String::parse_latin1((StrRange *)&local_b8);
  local_80 = CONCAT44(local_80._4_4_,0x88);
  local_100 = 0;
  local_e8 = "ScriptLanguageExtension";
  local_e0._0_8_ = 0x17;
  String::parse_latin1((StrRange *)&local_100);
  StringName::StringName((StringName *)&local_e8,(String *)&local_100,false);
  ClassDB::add_virtual_method
            ((StringName *)&local_e8,(MethodInfo *)&local_b8,true,(Vector *)&local_f8,false);
  if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  MethodInfo::~MethodInfo((MethodInfo *)&local_b8);
  CowData<String>::_unref((CowData<String> *)&local_f0);
  local_f0 = 0;
  local_e8 = (char *)0x0;
  local_b8 = "type";
  local_b0 = 4;
  String::parse_latin1((StrRange *)&local_e8);
  local_b8 = (char *)0x0;
  if (local_e8 != (char *)0x0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_b8,(CowData *)&local_e8);
  }
  Vector<String>::push_back((Vector<String> *)&local_f8,(StrRange *)&local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
  local_a8 = (undefined1  [16])0x0;
  local_e8 = "_handles_global_class_type";
  local_b8 = (char *)0x0;
  local_b0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 6;
  local_80 = 1;
  local_78[0] = 0;
  local_68 = 0;
  local_60 = 0;
  local_50 = 0;
  local_e0._0_8_ = 0x1a;
  String::parse_latin1((StrRange *)&local_b8);
  local_80 = CONCAT44(local_80._4_4_,0x8c);
  GetTypeInfo<bool,void>::get_class_info((GetTypeInfo<bool,void> *)&local_e8);
  PropertyInfo::operator=((PropertyInfo *)&local_b0,(PropertyInfo *)&local_e8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_e8);
  local_60 = local_60 & 0xffffffff00000000;
  GetTypeInfo<String_const&,void>::get_class_info((GetTypeInfo<String_const&,void> *)&local_e8);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_78,(PropertyInfo *)&local_e8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_e8);
  Vector<int>::push_back(local_58,0);
  local_100 = 0;
  local_e8 = "ScriptLanguageExtension";
  local_e0._0_8_ = 0x17;
  String::parse_latin1((StrRange *)&local_100);
  StringName::StringName((StringName *)&local_e8,(String *)&local_100,false);
  ClassDB::add_virtual_method
            ((StringName *)&local_e8,(MethodInfo *)&local_b8,true,(Vector *)&local_f8,false);
  if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  MethodInfo::~MethodInfo((MethodInfo *)&local_b8);
  CowData<String>::_unref((CowData<String> *)&local_f0);
  local_f0 = 0;
  local_e8 = (char *)0x0;
  local_b8 = "path";
  local_b0 = 4;
  String::parse_latin1((StrRange *)&local_e8);
  local_b8 = (char *)0x0;
  if (local_e8 != (char *)0x0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_b8,(CowData *)&local_e8);
  }
  Vector<String>::push_back((Vector<String> *)&local_f8,(StrRange *)&local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
  local_a8 = (undefined1  [16])0x0;
  local_e8 = "_get_global_class_name";
  local_b8 = (char *)0x0;
  local_b0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 6;
  local_80 = 1;
  local_78[0] = 0;
  local_68 = 0;
  local_60 = 0;
  local_50 = 0;
  local_e0._0_8_ = 0x16;
  String::parse_latin1((StrRange *)&local_b8);
  local_80 = CONCAT44(local_80._4_4_,0x8c);
  GetTypeInfo<Dictionary,void>::get_class_info((GetTypeInfo<Dictionary,void> *)&local_e8);
  PropertyInfo::operator=((PropertyInfo *)&local_b0,(PropertyInfo *)&local_e8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_e8);
  local_60 = local_60 & 0xffffffff00000000;
  GetTypeInfo<String_const&,void>::get_class_info((GetTypeInfo<String_const&,void> *)&local_e8);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_78,(PropertyInfo *)&local_e8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_e8);
  Vector<int>::push_back(local_58,0);
  local_100 = 0;
  local_e8 = "ScriptLanguageExtension";
  local_e0._0_8_ = 0x17;
  String::parse_latin1((StrRange *)&local_100);
  StringName::StringName((StringName *)&local_e8,(String *)&local_100,false);
  ClassDB::add_virtual_method
            ((StringName *)&local_e8,(MethodInfo *)&local_b8,true,(Vector *)&local_f8,false);
  if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  MethodInfo::~MethodInfo((MethodInfo *)&local_b8);
  CowData<String>::_unref((CowData<String> *)&local_f0);
  StringName::StringName((StringName *)&local_e8,"LOOKUP_RESULT_SCRIPT_LOCATION",false);
  local_b8 = "LOOKUP_RESULT_SCRIPT_LOCATION";
  local_100 = 0;
  local_b0 = 0x1d;
  String::parse_latin1((StrRange *)&local_100);
  __constant_get_enum_name<ScriptLanguage::LookupResultType>((details *)&local_f8);
  local_108 = 0;
  local_b8 = "ScriptLanguageExtension";
  local_b0 = 0x17;
  String::parse_latin1((StrRange *)&local_108);
  StringName::StringName((StringName *)&local_b8,(String *)&local_108,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_b8,(StringName *)&local_f8,(StringName *)&local_e8,0,false);
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
  if ((StringName::configured != '\0') && (local_f8 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_e8,"LOOKUP_RESULT_CLASS",false);
  local_b8 = "LOOKUP_RESULT_CLASS";
  local_100 = 0;
  local_b0 = 0x13;
  String::parse_latin1((StrRange *)&local_100);
  __constant_get_enum_name<ScriptLanguage::LookupResultType>((details *)&local_f8);
  local_108 = 0;
  local_b8 = "ScriptLanguageExtension";
  local_b0 = 0x17;
  String::parse_latin1((StrRange *)&local_108);
  StringName::StringName((StringName *)&local_b8,(String *)&local_108,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_b8,(StringName *)&local_f8,(StringName *)&local_e8,1,false);
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
  if ((StringName::configured != '\0') && (local_f8 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_e8,"LOOKUP_RESULT_CLASS_CONSTANT",false);
  local_b8 = "LOOKUP_RESULT_CLASS_CONSTANT";
  local_100 = 0;
  local_b0 = 0x1c;
  String::parse_latin1((StrRange *)&local_100);
  __constant_get_enum_name<ScriptLanguage::LookupResultType>((details *)&local_f8);
  local_108 = 0;
  local_b8 = "ScriptLanguageExtension";
  local_b0 = 0x17;
  String::parse_latin1((StrRange *)&local_108);
  StringName::StringName((StringName *)&local_b8,(String *)&local_108,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_b8,(StringName *)&local_f8,(StringName *)&local_e8,2,false);
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
  if ((StringName::configured != '\0') && (local_f8 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_e8,"LOOKUP_RESULT_CLASS_PROPERTY",false);
  local_b8 = "LOOKUP_RESULT_CLASS_PROPERTY";
  local_100 = 0;
  local_b0 = 0x1c;
  String::parse_latin1((StrRange *)&local_100);
  __constant_get_enum_name<ScriptLanguage::LookupResultType>((details *)&local_f8);
  local_108 = 0;
  local_b8 = "ScriptLanguageExtension";
  local_b0 = 0x17;
  String::parse_latin1((StrRange *)&local_108);
  StringName::StringName((StringName *)&local_b8,(String *)&local_108,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_b8,(StringName *)&local_f8,(StringName *)&local_e8,3,false);
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
  if ((StringName::configured != '\0') && (local_f8 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_e8,"LOOKUP_RESULT_CLASS_METHOD",false);
  local_b8 = "LOOKUP_RESULT_CLASS_METHOD";
  local_100 = 0;
  local_b0 = 0x1a;
  String::parse_latin1((StrRange *)&local_100);
  __constant_get_enum_name<ScriptLanguage::LookupResultType>((details *)&local_f8);
  local_108 = 0;
  local_b8 = "ScriptLanguageExtension";
  local_b0 = 0x17;
  String::parse_latin1((StrRange *)&local_108);
  StringName::StringName((StringName *)&local_b8,(String *)&local_108,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_b8,(StringName *)&local_f8,(StringName *)&local_e8,4,false);
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
  if ((StringName::configured != '\0') && (local_f8 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_e8,"LOOKUP_RESULT_CLASS_SIGNAL",false);
  local_b8 = "LOOKUP_RESULT_CLASS_SIGNAL";
  local_100 = 0;
  local_b0 = 0x1a;
  String::parse_latin1((StrRange *)&local_100);
  __constant_get_enum_name<ScriptLanguage::LookupResultType>((details *)&local_f8);
  local_108 = 0;
  local_b8 = "ScriptLanguageExtension";
  local_b0 = 0x17;
  String::parse_latin1((StrRange *)&local_108);
  StringName::StringName((StringName *)&local_b8,(String *)&local_108,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_b8,(StringName *)&local_f8,(StringName *)&local_e8,5,false);
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
  if ((StringName::configured != '\0') && (local_f8 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_e8,"LOOKUP_RESULT_CLASS_ENUM",false);
  local_b8 = "LOOKUP_RESULT_CLASS_ENUM";
  local_100 = 0;
  local_b0 = 0x18;
  String::parse_latin1((StrRange *)&local_100);
  __constant_get_enum_name<ScriptLanguage::LookupResultType>((details *)&local_f8);
  local_108 = 0;
  local_b8 = "ScriptLanguageExtension";
  local_b0 = 0x17;
  String::parse_latin1((StrRange *)&local_108);
  StringName::StringName((StringName *)&local_b8,(String *)&local_108,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_b8,(StringName *)&local_f8,(StringName *)&local_e8,6,false);
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
  if ((StringName::configured != '\0') && (local_f8 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_e8,"LOOKUP_RESULT_CLASS_TBD_GLOBALSCOPE",false);
  local_b8 = "LOOKUP_RESULT_CLASS_TBD_GLOBALSCOPE";
  local_100 = 0;
  local_b0 = 0x23;
  String::parse_latin1((StrRange *)&local_100);
  __constant_get_enum_name<ScriptLanguage::LookupResultType>((details *)&local_f8);
  local_108 = 0;
  local_b8 = "ScriptLanguageExtension";
  local_b0 = 0x17;
  String::parse_latin1((StrRange *)&local_108);
  StringName::StringName((StringName *)&local_b8,(String *)&local_108,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_b8,(StringName *)&local_f8,(StringName *)&local_e8,7,false);
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
  if ((StringName::configured != '\0') && (local_f8 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_e8,"LOOKUP_RESULT_CLASS_ANNOTATION",false);
  local_b8 = "LOOKUP_RESULT_CLASS_ANNOTATION";
  local_100 = 0;
  local_b0 = 0x1e;
  String::parse_latin1((StrRange *)&local_100);
  __constant_get_enum_name<ScriptLanguage::LookupResultType>((details *)&local_f8);
  local_108 = 0;
  local_b8 = "ScriptLanguageExtension";
  local_b0 = 0x17;
  String::parse_latin1((StrRange *)&local_108);
  StringName::StringName((StringName *)&local_b8,(String *)&local_108,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_b8,(StringName *)&local_f8,(StringName *)&local_e8,8,false);
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
  if ((StringName::configured != '\0') && (local_f8 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_e8,"LOOKUP_RESULT_LOCAL_CONSTANT",false);
  local_b8 = "LOOKUP_RESULT_LOCAL_CONSTANT";
  local_100 = 0;
  local_b0 = 0x1c;
  String::parse_latin1((StrRange *)&local_100);
  __constant_get_enum_name<ScriptLanguage::LookupResultType>((details *)&local_f8);
  local_108 = 0;
  local_b8 = "ScriptLanguageExtension";
  local_b0 = 0x17;
  String::parse_latin1((StrRange *)&local_108);
  StringName::StringName((StringName *)&local_b8,(String *)&local_108,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_b8,(StringName *)&local_f8,(StringName *)&local_e8,9,false);
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
  if ((StringName::configured != '\0') && (local_f8 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_e8,"LOOKUP_RESULT_LOCAL_VARIABLE",false);
  local_b8 = "LOOKUP_RESULT_LOCAL_VARIABLE";
  local_100 = 0;
  local_b0 = 0x1c;
  String::parse_latin1((StrRange *)&local_100);
  __constant_get_enum_name<ScriptLanguage::LookupResultType>((details *)&local_f8);
  local_108 = 0;
  local_b8 = "ScriptLanguageExtension";
  local_b0 = 0x17;
  String::parse_latin1((StrRange *)&local_108);
  StringName::StringName((StringName *)&local_b8,(String *)&local_108,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_b8,(StringName *)&local_f8,(StringName *)&local_e8,10,false);
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
  if ((StringName::configured != '\0') && (local_f8 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_e8,"LOOKUP_RESULT_MAX",false);
  local_b8 = "LOOKUP_RESULT_MAX";
  local_100 = 0;
  local_b0 = 0x11;
  String::parse_latin1((StrRange *)&local_100);
  __constant_get_enum_name<ScriptLanguage::LookupResultType>((details *)&local_f8);
  local_108 = 0;
  local_b8 = "ScriptLanguageExtension";
  local_b0 = 0x17;
  String::parse_latin1((StrRange *)&local_108);
  StringName::StringName((StringName *)&local_b8,(String *)&local_108,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_b8,(StringName *)&local_f8,(StringName *)&local_e8,0xb,false);
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
  if ((StringName::configured != '\0') && (local_f8 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_118,"LOCATION_LOCAL",false);
  local_b8 = "LOCATION_LOCAL";
  local_120 = 0;
  local_b0 = 0xe;
  String::parse_latin1((StrRange *)&local_120);
  local_100 = 0;
  local_b8 = "ScriptLanguageExtension::CodeCompletionLocation";
  local_b0 = 0x2f;
  String::parse_latin1((StrRange *)&local_100);
  godot::details::enum_qualified_name_to_class_info_name((details *)&local_f8,(String *)&local_100);
  StringName::StringName((StringName *)&local_e8,(String *)&local_f8,false);
  local_108 = 0;
  local_110 = 0;
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_b8,2,(StrRange *)&local_110,0,(StrRange *)&local_108,0x10006,
             (GetTypeInfo<String,void> *)&local_e8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_110);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
  if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  local_e8 = (char *)local_a8._0_8_;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = local_a8._8_8_;
  local_a8 = auVar2 << 0x40;
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_b8);
  local_f8 = 0;
  local_b8 = "ScriptLanguageExtension";
  local_b0 = 0x17;
  String::parse_latin1((StrRange *)&local_f8);
  StringName::StringName((StringName *)&local_b8,(String *)&local_f8,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_b8,(StringName *)&local_e8,(StringName *)&local_118,0,false);
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
  if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_120);
  if ((StringName::configured != '\0') && (local_118 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_118,"LOCATION_PARENT_MASK",false);
  local_b8 = "LOCATION_PARENT_MASK";
  local_120 = 0;
  local_b0 = 0x14;
  String::parse_latin1((StrRange *)&local_120);
  local_100 = 0;
  local_b8 = "ScriptLanguageExtension::CodeCompletionLocation";
  local_b0 = 0x2f;
  String::parse_latin1((StrRange *)&local_100);
  godot::details::enum_qualified_name_to_class_info_name((details *)&local_f8,(String *)&local_100);
  StringName::StringName((StringName *)&local_e8,(String *)&local_f8,false);
  local_108 = 0;
  local_110 = 0;
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_b8,2,(StrRange *)&local_110,0,(StrRange *)&local_108,0x10006,
             (GetTypeInfo<String,void> *)&local_e8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_110);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
  if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  local_e8 = (char *)local_a8._0_8_;
  auVar3._8_8_ = 0;
  auVar3._0_8_ = local_a8._8_8_;
  local_a8 = auVar3 << 0x40;
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_b8);
  local_f8 = 0;
  local_b8 = "ScriptLanguageExtension";
  local_b0 = 0x17;
  String::parse_latin1((StrRange *)&local_f8);
  StringName::StringName((StringName *)&local_b8,(String *)&local_f8,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_b8,(StringName *)&local_e8,(StringName *)&local_118,0x100,false);
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
  if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_120);
  if ((StringName::configured != '\0') && (local_118 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_118,"LOCATION_OTHER_USER_CODE",false);
  local_b8 = "LOCATION_OTHER_USER_CODE";
  local_120 = 0;
  local_b0 = 0x18;
  String::parse_latin1((StrRange *)&local_120);
  local_100 = 0;
  local_b8 = "ScriptLanguageExtension::CodeCompletionLocation";
  local_b0 = 0x2f;
  String::parse_latin1((StrRange *)&local_100);
  godot::details::enum_qualified_name_to_class_info_name((details *)&local_f8,(String *)&local_100);
  StringName::StringName((StringName *)&local_e8,(String *)&local_f8,false);
  local_108 = 0;
  local_110 = 0;
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_b8,2,(StrRange *)&local_110,0,(StrRange *)&local_108,0x10006,
             (GetTypeInfo<String,void> *)&local_e8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_110);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
  if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  local_e8 = (char *)local_a8._0_8_;
  auVar4._8_8_ = 0;
  auVar4._0_8_ = local_a8._8_8_;
  local_a8 = auVar4 << 0x40;
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_b8);
  local_f8 = 0;
  local_b8 = "ScriptLanguageExtension";
  local_b0 = 0x17;
  String::parse_latin1((StrRange *)&local_f8);
  StringName::StringName((StringName *)&local_b8,(String *)&local_f8,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_b8,(StringName *)&local_e8,(StringName *)&local_118,0x200,false);
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
  if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_120);
  if ((StringName::configured != '\0') && (local_118 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_118,"LOCATION_OTHER",false);
  local_b8 = "LOCATION_OTHER";
  local_120 = 0;
  local_b0 = 0xe;
  String::parse_latin1((StrRange *)&local_120);
  local_100 = 0;
  local_b8 = "ScriptLanguageExtension::CodeCompletionLocation";
  local_b0 = 0x2f;
  String::parse_latin1((StrRange *)&local_100);
  godot::details::enum_qualified_name_to_class_info_name((details *)&local_f8,(String *)&local_100);
  StringName::StringName((StringName *)&local_e8,(String *)&local_f8,false);
  local_108 = 0;
  local_110 = 0;
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_b8,2,(StrRange *)&local_110,0,(StrRange *)&local_108,0x10006,
             (GetTypeInfo<String,void> *)&local_e8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_110);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
  if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  local_e8 = (char *)local_a8._0_8_;
  auVar5._8_8_ = 0;
  auVar5._0_8_ = local_a8._8_8_;
  local_a8 = auVar5 << 0x40;
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_b8);
  local_f8 = 0;
  local_b8 = "ScriptLanguageExtension";
  local_b0 = 0x17;
  String::parse_latin1((StrRange *)&local_f8);
  StringName::StringName((StringName *)&local_b8,(String *)&local_f8,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_b8,(StringName *)&local_e8,(StringName *)&local_118,0x400,false);
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
  if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_120);
  if ((StringName::configured != '\0') && (local_118 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_e8,"CODE_COMPLETION_KIND_CLASS",false);
  local_b8 = "CODE_COMPLETION_KIND_CLASS";
  local_100 = 0;
  local_b0 = 0x1a;
  String::parse_latin1((StrRange *)&local_100);
  __constant_get_enum_name<ScriptLanguage::CodeCompletionKind>((details *)&local_f8);
  local_108 = 0;
  local_b8 = "ScriptLanguageExtension";
  local_b0 = 0x17;
  String::parse_latin1((StrRange *)&local_108);
  StringName::StringName((StringName *)&local_b8,(String *)&local_108,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_b8,(StringName *)&local_f8,(StringName *)&local_e8,0,false);
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
  if ((StringName::configured != '\0') && (local_f8 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_e8,"CODE_COMPLETION_KIND_FUNCTION",false);
  local_b8 = "CODE_COMPLETION_KIND_FUNCTION";
  local_100 = 0;
  local_b0 = 0x1d;
  String::parse_latin1((StrRange *)&local_100);
  __constant_get_enum_name<ScriptLanguage::CodeCompletionKind>((details *)&local_f8);
  local_108 = 0;
  local_b8 = "ScriptLanguageExtension";
  local_b0 = 0x17;
  String::parse_latin1((StrRange *)&local_108);
  StringName::StringName((StringName *)&local_b8,(String *)&local_108,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_b8,(StringName *)&local_f8,(StringName *)&local_e8,1,false);
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
  if ((StringName::configured != '\0') && (local_f8 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_e8,"CODE_COMPLETION_KIND_SIGNAL",false);
  local_b8 = "CODE_COMPLETION_KIND_SIGNAL";
  local_100 = 0;
  local_b0 = 0x1b;
  String::parse_latin1((StrRange *)&local_100);
  __constant_get_enum_name<ScriptLanguage::CodeCompletionKind>((details *)&local_f8);
  local_108 = 0;
  local_b8 = "ScriptLanguageExtension";
  local_b0 = 0x17;
  String::parse_latin1((StrRange *)&local_108);
  StringName::StringName((StringName *)&local_b8,(String *)&local_108,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_b8,(StringName *)&local_f8,(StringName *)&local_e8,2,false);
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
  if ((StringName::configured != '\0') && (local_f8 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_e8,"CODE_COMPLETION_KIND_VARIABLE",false);
  local_b8 = "CODE_COMPLETION_KIND_VARIABLE";
  local_100 = 0;
  local_b0 = 0x1d;
  String::parse_latin1((StrRange *)&local_100);
  __constant_get_enum_name<ScriptLanguage::CodeCompletionKind>((details *)&local_f8);
  local_108 = 0;
  local_b8 = "ScriptLanguageExtension";
  local_b0 = 0x17;
  String::parse_latin1((StrRange *)&local_108);
  StringName::StringName((StringName *)&local_b8,(String *)&local_108,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_b8,(StringName *)&local_f8,(StringName *)&local_e8,3,false);
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
  if ((StringName::configured != '\0') && (local_f8 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_e8,"CODE_COMPLETION_KIND_MEMBER",false);
  local_b8 = "CODE_COMPLETION_KIND_MEMBER";
  local_100 = 0;
  local_b0 = 0x1b;
  String::parse_latin1((StrRange *)&local_100);
  __constant_get_enum_name<ScriptLanguage::CodeCompletionKind>((details *)&local_f8);
  local_108 = 0;
  local_b8 = "ScriptLanguageExtension";
  local_b0 = 0x17;
  String::parse_latin1((StrRange *)&local_108);
  StringName::StringName((StringName *)&local_b8,(String *)&local_108,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_b8,(StringName *)&local_f8,(StringName *)&local_e8,4,false);
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
  if ((StringName::configured != '\0') && (local_f8 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_e8,"CODE_COMPLETION_KIND_ENUM",false);
  local_b8 = "CODE_COMPLETION_KIND_ENUM";
  local_100 = 0;
  local_b0 = 0x19;
  String::parse_latin1((StrRange *)&local_100);
  __constant_get_enum_name<ScriptLanguage::CodeCompletionKind>((details *)&local_f8);
  local_108 = 0;
  local_b8 = "ScriptLanguageExtension";
  local_b0 = 0x17;
  String::parse_latin1((StrRange *)&local_108);
  StringName::StringName((StringName *)&local_b8,(String *)&local_108,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_b8,(StringName *)&local_f8,(StringName *)&local_e8,5,false);
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
  if ((StringName::configured != '\0') && (local_f8 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_e8,"CODE_COMPLETION_KIND_CONSTANT",false);
  local_b8 = "CODE_COMPLETION_KIND_CONSTANT";
  local_100 = 0;
  local_b0 = 0x1d;
  String::parse_latin1((StrRange *)&local_100);
  __constant_get_enum_name<ScriptLanguage::CodeCompletionKind>((details *)&local_f8);
  local_108 = 0;
  local_b8 = "ScriptLanguageExtension";
  local_b0 = 0x17;
  String::parse_latin1((StrRange *)&local_108);
  StringName::StringName((StringName *)&local_b8,(String *)&local_108,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_b8,(StringName *)&local_f8,(StringName *)&local_e8,6,false);
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
  if ((StringName::configured != '\0') && (local_f8 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_e8,"CODE_COMPLETION_KIND_NODE_PATH",false);
  local_b8 = "CODE_COMPLETION_KIND_NODE_PATH";
  local_100 = 0;
  local_b0 = 0x1e;
  String::parse_latin1((StrRange *)&local_100);
  __constant_get_enum_name<ScriptLanguage::CodeCompletionKind>((details *)&local_f8);
  local_108 = 0;
  local_b8 = "ScriptLanguageExtension";
  local_b0 = 0x17;
  String::parse_latin1((StrRange *)&local_108);
  StringName::StringName((StringName *)&local_b8,(String *)&local_108,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_b8,(StringName *)&local_f8,(StringName *)&local_e8,7,false);
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
  if ((StringName::configured != '\0') && (local_f8 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_e8,"CODE_COMPLETION_KIND_FILE_PATH",false);
  local_b8 = "CODE_COMPLETION_KIND_FILE_PATH";
  local_100 = 0;
  local_b0 = 0x1e;
  String::parse_latin1((StrRange *)&local_100);
  __constant_get_enum_name<ScriptLanguage::CodeCompletionKind>((details *)&local_f8);
  local_108 = 0;
  local_b8 = "ScriptLanguageExtension";
  local_b0 = 0x17;
  String::parse_latin1((StrRange *)&local_108);
  StringName::StringName((StringName *)&local_b8,(String *)&local_108,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_b8,(StringName *)&local_f8,(StringName *)&local_e8,8,false);
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
  if ((StringName::configured != '\0') && (local_f8 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_e8,"CODE_COMPLETION_KIND_PLAIN_TEXT",false);
  local_b8 = "CODE_COMPLETION_KIND_PLAIN_TEXT";
  local_100 = 0;
  local_b0 = 0x1f;
  String::parse_latin1((StrRange *)&local_100);
  __constant_get_enum_name<ScriptLanguage::CodeCompletionKind>((details *)&local_f8);
  local_108 = 0;
  local_b8 = "ScriptLanguageExtension";
  local_b0 = 0x17;
  String::parse_latin1((StrRange *)&local_108);
  StringName::StringName((StringName *)&local_b8,(String *)&local_108,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_b8,(StringName *)&local_f8,(StringName *)&local_e8,9,false);
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
  if ((StringName::configured != '\0') && (local_f8 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_e8,"CODE_COMPLETION_KIND_MAX",false);
  local_100 = 0;
  local_b8 = "CODE_COMPLETION_KIND_MAX";
  local_b0 = 0x18;
  String::parse_latin1((StrRange *)&local_100);
  __constant_get_enum_name<ScriptLanguage::CodeCompletionKind>((details *)&local_f8);
  local_b8 = "ScriptLanguageExtension";
  local_108 = 0;
  local_b0 = 0x17;
  String::parse_latin1((StrRange *)&local_108);
  StringName::StringName((StringName *)&local_b8,(String *)&local_108,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_b8,(StringName *)&local_f8,(StringName *)&local_e8,10,false);
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
  if ((StringName::configured != '\0') && (local_f8 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
    StringName::unref();
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* ScriptExtension::_bind_methods() */

void ScriptExtension::_bind_methods(void)

{
  long *plVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  long lVar6;
  long in_FS_OFFSET;
  CowData<char32_t> *local_150;
  StringName *local_130;
  CowData<char32_t> *local_128;
  long local_118;
  long local_110;
  long local_108;
  long local_100;
  Vector local_f8 [8];
  undefined8 local_f0;
  char *local_e8;
  undefined1 local_e0 [16];
  ulong local_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  char *local_b8;
  undefined8 local_b0;
  undefined1 local_a8 [16];
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78 [2];
  undefined8 local_68;
  ulong local_60;
  Vector<int> local_58 [8];
  undefined8 local_50;
  long local_40;
  
  local_e0._8_8_ = local_e0._0_8_;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_a8 = (undefined1  [16])0x0;
  local_f0 = 0;
  local_e8 = "_editor_can_reload_from_file";
  local_b8 = (char *)0x0;
  local_b0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 6;
  local_80 = 1;
  local_78[0] = 0;
  local_68 = 0;
  local_60 = 0;
  local_50 = 0;
  local_e0._0_8_ = 0x1c;
  String::parse_latin1((StrRange *)&local_b8);
  local_80 = CONCAT44(local_80._4_4_,0x88);
  GetTypeInfo<bool,void>::get_class_info((GetTypeInfo<bool,void> *)&local_e8);
  PropertyInfo::operator=((PropertyInfo *)&local_b0,(PropertyInfo *)&local_e8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_e8);
  local_e8 = "ScriptExtension";
  local_60 = local_60 & 0xffffffff00000000;
  local_100 = 0;
  local_e0._0_8_ = 0xf;
  String::parse_latin1((StrRange *)&local_100);
  StringName::StringName((StringName *)&local_e8,(String *)&local_100,false);
  ClassDB::add_virtual_method((StringName *)&local_e8,(MethodInfo *)&local_b8,true,local_f8,false);
  if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  MethodInfo::~MethodInfo((MethodInfo *)&local_b8);
  CowData<String>::_unref((CowData<String> *)&local_f0);
  local_f0 = 0;
  local_e8 = (char *)0x0;
  local_b8 = "placeholder";
  local_b0 = 0xb;
  String::parse_latin1((StrRange *)&local_e8);
  local_b8 = (char *)0x0;
  if (local_e8 != (char *)0x0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_b8,(CowData *)&local_e8);
  }
  Vector<String>::push_back((Vector<String> *)local_f8,(StrRange *)&local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
  local_a8 = (undefined1  [16])0x0;
  local_e8 = "_placeholder_erased";
  local_b8 = (char *)0x0;
  local_b0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 6;
  local_80 = 1;
  local_78[0] = 0;
  local_68 = 0;
  local_60 = 0;
  local_50 = 0;
  local_e0._0_8_ = 0x13;
  String::parse_latin1((StrRange *)&local_b8);
  local_80 = CONCAT44(local_80._4_4_,8);
  GetTypeInfo<GDExtensionPtr<void>,void>::get_class_info
            ((GetTypeInfo<GDExtensionPtr<void>,void> *)&local_e8);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_78,(PropertyInfo *)&local_e8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_e8);
  Vector<int>::push_back(local_58,0);
  local_e8 = "ScriptExtension";
  local_100 = 0;
  local_e0._0_8_ = 0xf;
  String::parse_latin1((StrRange *)&local_100);
  StringName::StringName((StringName *)&local_e8,(String *)&local_100,false);
  ClassDB::add_virtual_method((StringName *)&local_e8,(MethodInfo *)&local_b8,true,local_f8,false);
  if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  MethodInfo::~MethodInfo((MethodInfo *)&local_b8);
  CowData<String>::_unref((CowData<String> *)&local_f0);
  local_a8 = (undefined1  [16])0x0;
  local_e8 = "_can_instantiate";
  local_f0 = 0;
  local_b8 = (char *)0x0;
  local_b0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 6;
  local_80 = 1;
  local_78[0] = 0;
  local_68 = 0;
  local_60 = 0;
  local_50 = 0;
  local_e0._0_8_ = 0x10;
  String::parse_latin1((StrRange *)&local_b8);
  local_80 = CONCAT44(local_80._4_4_,0x8c);
  GetTypeInfo<bool,void>::get_class_info((GetTypeInfo<bool,void> *)&local_e8);
  PropertyInfo::operator=((PropertyInfo *)&local_b0,(PropertyInfo *)&local_e8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_e8);
  local_e8 = "ScriptExtension";
  local_60 = local_60 & 0xffffffff00000000;
  local_100 = 0;
  local_e0._0_8_ = 0xf;
  String::parse_latin1((StrRange *)&local_100);
  StringName::StringName((StringName *)&local_e8,(String *)&local_100,false);
  ClassDB::add_virtual_method((StringName *)&local_e8,(MethodInfo *)&local_b8,true,local_f8,false);
  if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  MethodInfo::~MethodInfo((MethodInfo *)&local_b8);
  CowData<String>::_unref((CowData<String> *)&local_f0);
  local_a8 = (undefined1  [16])0x0;
  local_e8 = "_get_base_script";
  local_f0 = 0;
  local_b8 = (char *)0x0;
  local_b0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 6;
  local_80 = 1;
  local_78[0] = 0;
  local_68 = 0;
  local_60 = 0;
  local_50 = 0;
  local_e0._0_8_ = 0x10;
  String::parse_latin1((StrRange *)&local_b8);
  local_80 = CONCAT44(local_80._4_4_,0x8c);
  local_e8 = "Script";
  local_108 = 0;
  local_110 = 0;
  local_e0._0_8_ = 6;
  String::parse_latin1((StrRange *)&local_110);
  local_118 = 0;
  local_e8 = (char *)CONCAT44(local_e8._4_4_,0x18);
  local_d0 = CONCAT44(local_d0._4_4_,0x11);
  local_c8 = 0;
  local_e0 = (undefined1  [16])0x0;
  if (local_110 == 0) {
LAB_0010eab8:
    local_128 = (CowData<char32_t> *)&local_c8;
    local_c0 = 6;
    StringName::StringName((StringName *)&local_100,(String *)local_128,false);
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
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_c8,(CowData *)&local_110);
    local_c0 = 6;
    if ((int)local_d0 == 0x11) goto LAB_0010eab8;
    StringName::operator=((StringName *)(local_e0 + 8),(StringName *)&local_108);
  }
  local_130 = (StringName *)(local_e0 + 8);
  local_150 = (CowData<char32_t> *)&local_108;
  local_128 = (CowData<char32_t> *)&local_c8;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_118);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_110);
  if ((StringName::configured != '\0') && (local_108 != 0)) {
    StringName::unref();
  }
  PropertyInfo::operator=((PropertyInfo *)&local_b0,(PropertyInfo *)&local_e8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_e8);
  local_e8 = "ScriptExtension";
  local_60 = local_60 & 0xffffffff00000000;
  local_100 = 0;
  local_e0._0_8_ = 0xf;
  String::parse_latin1((StrRange *)&local_100);
  StringName::StringName((StringName *)&local_e8,(String *)&local_100,false);
  ClassDB::add_virtual_method((StringName *)&local_e8,(MethodInfo *)&local_b8,true,local_f8,false);
  if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
    StringName::unref();
  }
  lVar6 = local_100;
  if (local_100 != 0) {
    LOCK();
    plVar1 = (long *)(local_100 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_100 = 0;
      Memory::free_static((void *)(lVar6 + -0x10),false);
    }
  }
  MethodInfo::~MethodInfo((MethodInfo *)&local_b8);
  CowData<String>::_unref((CowData<String> *)&local_f0);
  local_a8 = (undefined1  [16])0x0;
  local_e8 = "_get_global_name";
  local_f0 = 0;
  local_b8 = (char *)0x0;
  local_b0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 6;
  local_80 = 1;
  local_78[0] = 0;
  local_68 = 0;
  local_60 = 0;
  local_50 = 0;
  local_e0._0_8_ = 0x10;
  String::parse_latin1((StrRange *)&local_b8);
  local_80 = CONCAT44(local_80._4_4_,0x8c);
  GetTypeInfo<StringName,void>::get_class_info((GetTypeInfo<StringName,void> *)&local_e8);
  PropertyInfo::operator=((PropertyInfo *)&local_b0,(PropertyInfo *)&local_e8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_e8);
  local_e8 = "ScriptExtension";
  local_60 = local_60 & 0xffffffff00000000;
  local_100 = 0;
  local_e0._0_8_ = 0xf;
  String::parse_latin1((StrRange *)&local_100);
  StringName::StringName((StringName *)&local_e8,(String *)&local_100,false);
  ClassDB::add_virtual_method((StringName *)&local_e8,(MethodInfo *)&local_b8,true,local_f8,false);
  if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  MethodInfo::~MethodInfo((MethodInfo *)&local_b8);
  CowData<String>::_unref((CowData<String> *)&local_f0);
  local_f0 = 0;
  local_e8 = (char *)0x0;
  local_b8 = "script";
  local_b0 = 6;
  String::parse_latin1((StrRange *)&local_e8);
  local_b8 = (char *)0x0;
  if (local_e8 != (char *)0x0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_b8,(CowData *)&local_e8);
  }
  Vector<String>::push_back((Vector<String> *)local_f8,(StrRange *)&local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
  local_a8 = (undefined1  [16])0x0;
  local_e8 = "_inherits_script";
  local_b8 = (char *)0x0;
  local_b0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 6;
  local_80 = 1;
  local_78[0] = 0;
  local_68 = 0;
  local_60 = 0;
  local_50 = 0;
  local_e0._0_8_ = 0x10;
  String::parse_latin1((StrRange *)&local_b8);
  local_80 = CONCAT44(local_80._4_4_,0x8c);
  GetTypeInfo<bool,void>::get_class_info((GetTypeInfo<bool,void> *)&local_e8);
  PropertyInfo::operator=((PropertyInfo *)&local_b0,(PropertyInfo *)&local_e8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_e8);
  local_60 = local_60 & 0xffffffff00000000;
  local_118 = 0;
  local_110 = 0;
  local_e8 = "Script";
  local_e0._0_8_ = 6;
  String::parse_latin1((StrRange *)&local_110);
  local_108 = 0;
  local_e8 = (char *)CONCAT44(local_e8._4_4_,0x18);
  local_d0 = CONCAT44(local_d0._4_4_,0x11);
  local_c8 = 0;
  local_e0 = (undefined1  [16])0x0;
  if (local_110 == 0) {
LAB_0010ea5b:
    local_c0 = 6;
    StringName::StringName((StringName *)&local_100,(String *)local_128,false);
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
    CowData<char32_t>::_ref(local_128,(CowData *)&local_110);
    local_c0 = 6;
    if ((int)local_d0 == 0x11) goto LAB_0010ea5b;
    StringName::operator=(local_130,(CowData<char32_t> *)&local_118);
  }
  CowData<char32_t>::_unref(local_150);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_110);
  if ((StringName::configured != '\0') && (local_118 != 0)) {
    StringName::unref();
  }
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_78,(PropertyInfo *)&local_e8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_e8);
  Vector<int>::push_back(local_58,0);
  local_e8 = "ScriptExtension";
  local_100 = 0;
  local_e0._0_8_ = 0xf;
  String::parse_latin1((StrRange *)&local_100);
  StringName::StringName((StringName *)&local_e8,(String *)&local_100,false);
  ClassDB::add_virtual_method((StringName *)&local_e8,(MethodInfo *)&local_b8,true,local_f8,false);
  if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  MethodInfo::~MethodInfo((MethodInfo *)&local_b8);
  CowData<String>::_unref((CowData<String> *)&local_f0);
  local_a8 = (undefined1  [16])0x0;
  local_e8 = "_get_instance_base_type";
  local_f0 = 0;
  local_b8 = (char *)0x0;
  local_b0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 6;
  local_80 = 1;
  local_78[0] = 0;
  local_68 = 0;
  local_60 = 0;
  local_50 = 0;
  local_e0._0_8_ = 0x17;
  String::parse_latin1((StrRange *)&local_b8);
  local_80 = CONCAT44(local_80._4_4_,0x8c);
  GetTypeInfo<StringName,void>::get_class_info((GetTypeInfo<StringName,void> *)&local_e8);
  PropertyInfo::operator=((PropertyInfo *)&local_b0,(PropertyInfo *)&local_e8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_e8);
  local_e8 = "ScriptExtension";
  local_60 = local_60 & 0xffffffff00000000;
  local_100 = 0;
  local_e0._0_8_ = 0xf;
  String::parse_latin1((StrRange *)&local_100);
  StringName::StringName((StringName *)&local_e8,(String *)&local_100,false);
  ClassDB::add_virtual_method((StringName *)&local_e8,(MethodInfo *)&local_b8,true,local_f8,false);
  if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  MethodInfo::~MethodInfo((MethodInfo *)&local_b8);
  CowData<String>::_unref((CowData<String> *)&local_f0);
  local_f0 = 0;
  local_e8 = (char *)0x0;
  local_b8 = "for_object";
  local_b0 = 10;
  String::parse_latin1((StrRange *)&local_e8);
  local_b8 = (char *)0x0;
  if (local_e8 != (char *)0x0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_b8,(CowData *)&local_e8);
  }
  Vector<String>::push_back((Vector<String> *)local_f8,(StrRange *)&local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
  local_a8 = (undefined1  [16])0x0;
  local_e8 = "_instance_create";
  local_b8 = (char *)0x0;
  local_b0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 6;
  local_80 = 1;
  local_78[0] = 0;
  local_68 = 0;
  local_60 = 0;
  local_50 = 0;
  local_e0._0_8_ = 0x10;
  String::parse_latin1((StrRange *)&local_b8);
  local_80 = CONCAT44(local_80._4_4_,0x8c);
  GetTypeInfo<GDExtensionPtr<void>,void>::get_class_info
            ((GetTypeInfo<GDExtensionPtr<void>,void> *)&local_e8);
  PropertyInfo::operator=((PropertyInfo *)&local_b0,(PropertyInfo *)&local_e8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_e8);
  local_e8 = "Object";
  local_60 = local_60 & 0xffffffff00000000;
  local_108 = 0;
  local_e0._0_8_ = 6;
  String::parse_latin1((StrRange *)local_150);
  StringName::StringName((StringName *)&local_100,(String *)local_150,false);
  local_e8 = (char *)CONCAT44(local_e8._4_4_,0x18);
  auVar2._8_8_ = 0;
  auVar2._0_8_ = local_e0._8_8_;
  local_e0 = auVar2 << 0x40;
  StringName::StringName(local_130,(StringName *)&local_100);
  local_d0 = local_d0 & 0xffffffff00000000;
  local_c8 = 0;
  local_c0 = 6;
  if ((StringName::configured != '\0') && (local_100 != 0)) {
    StringName::unref();
  }
  lVar6 = local_108;
  if (local_108 != 0) {
    LOCK();
    plVar1 = (long *)(local_108 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_108 = 0;
      Memory::free_static((void *)(lVar6 + -0x10),false);
    }
  }
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_78,(PropertyInfo *)&local_e8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_e8);
  Vector<int>::push_back(local_58,0);
  local_e8 = "ScriptExtension";
  local_100 = 0;
  local_e0._0_8_ = 0xf;
  String::parse_latin1((StrRange *)&local_100);
  StringName::StringName((StringName *)&local_e8,(String *)&local_100,false);
  ClassDB::add_virtual_method((StringName *)&local_e8,(MethodInfo *)&local_b8,true,local_f8,false);
  if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  MethodInfo::~MethodInfo((MethodInfo *)&local_b8);
  CowData<String>::_unref((CowData<String> *)&local_f0);
  local_f0 = 0;
  local_e8 = (char *)0x0;
  local_b8 = "for_object";
  local_b0 = 10;
  String::parse_latin1((StrRange *)&local_e8);
  local_b8 = (char *)0x0;
  if (local_e8 != (char *)0x0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_b8,(CowData *)&local_e8);
  }
  Vector<String>::push_back((Vector<String> *)local_f8,(StrRange *)&local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
  local_a8 = (undefined1  [16])0x0;
  local_e8 = "_placeholder_instance_create";
  local_b8 = (char *)0x0;
  local_b0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 6;
  local_80 = 1;
  local_78[0] = 0;
  local_68 = 0;
  local_60 = 0;
  local_50 = 0;
  local_e0._0_8_ = 0x1c;
  String::parse_latin1((StrRange *)&local_b8);
  local_80 = CONCAT44(local_80._4_4_,0x8c);
  GetTypeInfo<GDExtensionPtr<void>,void>::get_class_info
            ((GetTypeInfo<GDExtensionPtr<void>,void> *)&local_e8);
  PropertyInfo::operator=((PropertyInfo *)&local_b0,(PropertyInfo *)&local_e8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_e8);
  local_e8 = "Object";
  local_60 = local_60 & 0xffffffff00000000;
  local_108 = 0;
  local_e0._0_8_ = 6;
  String::parse_latin1((StrRange *)local_150);
  StringName::StringName((StringName *)&local_100,(String *)local_150,false);
  local_e8 = (char *)CONCAT44(local_e8._4_4_,0x18);
  auVar3._8_8_ = 0;
  auVar3._0_8_ = local_e0._8_8_;
  local_e0 = auVar3 << 0x40;
  StringName::StringName(local_130,(StringName *)&local_100);
  local_d0 = local_d0 & 0xffffffff00000000;
  local_c8 = 0;
  local_c0 = 6;
  if ((StringName::configured != '\0') && (local_100 != 0)) {
    StringName::unref();
  }
  lVar6 = local_108;
  if (local_108 != 0) {
    LOCK();
    plVar1 = (long *)(local_108 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_108 = 0;
      Memory::free_static((void *)(lVar6 + -0x10),false);
    }
  }
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_78,(PropertyInfo *)&local_e8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_e8);
  Vector<int>::push_back(local_58,0);
  local_e8 = "ScriptExtension";
  local_100 = 0;
  local_e0._0_8_ = 0xf;
  String::parse_latin1((StrRange *)&local_100);
  StringName::StringName((StringName *)&local_e8,(String *)&local_100,false);
  ClassDB::add_virtual_method((StringName *)&local_e8,(MethodInfo *)&local_b8,true,local_f8,false);
  if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  MethodInfo::~MethodInfo((MethodInfo *)&local_b8);
  CowData<String>::_unref((CowData<String> *)&local_f0);
  local_f0 = 0;
  local_e8 = (char *)0x0;
  local_b8 = "object";
  local_b0 = 6;
  String::parse_latin1((StrRange *)&local_e8);
  local_b8 = (char *)0x0;
  if (local_e8 != (char *)0x0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_b8,(CowData *)&local_e8);
  }
  Vector<String>::push_back((Vector<String> *)local_f8,(StrRange *)&local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
  local_a8 = (undefined1  [16])0x0;
  local_e8 = "_instance_has";
  local_b8 = (char *)0x0;
  local_b0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 6;
  local_80 = 1;
  local_78[0] = 0;
  local_68 = 0;
  local_60 = 0;
  local_50 = 0;
  local_e0._0_8_ = 0xd;
  String::parse_latin1((StrRange *)&local_b8);
  local_80 = CONCAT44(local_80._4_4_,0x8c);
  GetTypeInfo<bool,void>::get_class_info((GetTypeInfo<bool,void> *)&local_e8);
  PropertyInfo::operator=((PropertyInfo *)&local_b0,(PropertyInfo *)&local_e8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_e8);
  local_e8 = "Object";
  local_60 = local_60 & 0xffffffff00000000;
  local_108 = 0;
  local_e0._0_8_ = 6;
  String::parse_latin1((StrRange *)local_150);
  StringName::StringName((StringName *)&local_100,(String *)local_150,false);
  local_e8 = (char *)CONCAT44(local_e8._4_4_,0x18);
  auVar4._8_8_ = 0;
  auVar4._0_8_ = local_e0._8_8_;
  local_e0 = auVar4 << 0x40;
  StringName::StringName(local_130,(StringName *)&local_100);
  local_d0 = local_d0 & 0xffffffff00000000;
  local_c8 = 0;
  local_c0 = 6;
  if ((StringName::configured != '\0') && (local_100 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref(local_150);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_78,(PropertyInfo *)&local_e8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_e8);
  Vector<int>::push_back(local_58,0);
  local_e8 = "ScriptExtension";
  local_100 = 0;
  local_e0._0_8_ = 0xf;
  String::parse_latin1((StrRange *)&local_100);
  StringName::StringName((StringName *)&local_e8,(String *)&local_100,false);
  ClassDB::add_virtual_method((StringName *)&local_e8,(MethodInfo *)&local_b8,true,local_f8,false);
  if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  MethodInfo::~MethodInfo((MethodInfo *)&local_b8);
  CowData<String>::_unref((CowData<String> *)&local_f0);
  local_a8 = (undefined1  [16])0x0;
  local_e8 = "_has_source_code";
  local_f0 = 0;
  local_b8 = (char *)0x0;
  local_b0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 6;
  local_80 = 1;
  local_78[0] = 0;
  local_68 = 0;
  local_60 = 0;
  local_50 = 0;
  local_e0._0_8_ = 0x10;
  String::parse_latin1((StrRange *)&local_b8);
  local_80 = CONCAT44(local_80._4_4_,0x8c);
  GetTypeInfo<bool,void>::get_class_info((GetTypeInfo<bool,void> *)&local_e8);
  PropertyInfo::operator=((PropertyInfo *)&local_b0,(PropertyInfo *)&local_e8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_e8);
  local_e8 = "ScriptExtension";
  local_60 = local_60 & 0xffffffff00000000;
  local_100 = 0;
  local_e0._0_8_ = 0xf;
  String::parse_latin1((StrRange *)&local_100);
  StringName::StringName((StringName *)&local_e8,(String *)&local_100,false);
  ClassDB::add_virtual_method((StringName *)&local_e8,(MethodInfo *)&local_b8,true,local_f8,false);
  if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  MethodInfo::~MethodInfo((MethodInfo *)&local_b8);
  CowData<String>::_unref((CowData<String> *)&local_f0);
  local_a8 = (undefined1  [16])0x0;
  local_e8 = "_get_source_code";
  local_f0 = 0;
  local_b8 = (char *)0x0;
  local_b0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 6;
  local_80 = 1;
  local_78[0] = 0;
  local_68 = 0;
  local_60 = 0;
  local_50 = 0;
  local_e0._0_8_ = 0x10;
  String::parse_latin1((StrRange *)&local_b8);
  local_80 = CONCAT44(local_80._4_4_,0x8c);
  GetTypeInfo<String,void>::get_class_info((GetTypeInfo<String,void> *)&local_e8);
  PropertyInfo::operator=((PropertyInfo *)&local_b0,(PropertyInfo *)&local_e8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_e8);
  local_e8 = "ScriptExtension";
  local_60 = local_60 & 0xffffffff00000000;
  local_100 = 0;
  local_e0._0_8_ = 0xf;
  String::parse_latin1((StrRange *)&local_100);
  StringName::StringName((StringName *)&local_e8,(String *)&local_100,false);
  ClassDB::add_virtual_method((StringName *)&local_e8,(MethodInfo *)&local_b8,true,local_f8,false);
  if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  MethodInfo::~MethodInfo((MethodInfo *)&local_b8);
  CowData<String>::_unref((CowData<String> *)&local_f0);
  local_f0 = 0;
  local_e8 = (char *)0x0;
  local_b8 = "code";
  local_b0 = 4;
  String::parse_latin1((StrRange *)&local_e8);
  local_b8 = (char *)0x0;
  if (local_e8 != (char *)0x0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_b8,(CowData *)&local_e8);
  }
  Vector<String>::push_back((Vector<String> *)local_f8,(StrRange *)&local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
  local_a8 = (undefined1  [16])0x0;
  local_e8 = "_set_source_code";
  local_b8 = (char *)0x0;
  local_b0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 6;
  local_80 = 1;
  local_78[0] = 0;
  local_68 = 0;
  local_60 = 0;
  local_50 = 0;
  local_e0._0_8_ = 0x10;
  String::parse_latin1((StrRange *)&local_b8);
  local_80 = CONCAT44(local_80._4_4_,0x88);
  GetTypeInfo<String_const&,void>::get_class_info((GetTypeInfo<String_const&,void> *)&local_e8);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_78,(PropertyInfo *)&local_e8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_e8);
  Vector<int>::push_back(local_58,0);
  local_e8 = "ScriptExtension";
  local_100 = 0;
  local_e0._0_8_ = 0xf;
  String::parse_latin1((StrRange *)&local_100);
  StringName::StringName((StringName *)&local_e8,(String *)&local_100,false);
  ClassDB::add_virtual_method((StringName *)&local_e8,(MethodInfo *)&local_b8,true,local_f8,false);
  if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  MethodInfo::~MethodInfo((MethodInfo *)&local_b8);
  CowData<String>::_unref((CowData<String> *)&local_f0);
  local_f0 = 0;
  local_e8 = (char *)0x0;
  local_b8 = "keep_state";
  local_b0 = 10;
  String::parse_latin1((StrRange *)&local_e8);
  local_b8 = (char *)0x0;
  if (local_e8 != (char *)0x0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_b8,(CowData *)&local_e8);
  }
  Vector<String>::push_back((Vector<String> *)local_f8,(StrRange *)&local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
  local_a8 = (undefined1  [16])0x0;
  local_e8 = "_reload";
  local_b8 = (char *)0x0;
  local_b0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 6;
  local_80 = 1;
  local_78[0] = 0;
  local_68 = 0;
  local_60 = 0;
  local_50 = 0;
  local_e0._0_8_ = 7;
  String::parse_latin1((StrRange *)&local_b8);
  local_80 = CONCAT44(local_80._4_4_,0x88);
  GetTypeInfo<Error,void>::get_class_info((GetTypeInfo<Error,void> *)&local_e8);
  PropertyInfo::operator=((PropertyInfo *)&local_b0,(PropertyInfo *)&local_e8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_e8);
  local_60 = local_60 & 0xffffffff00000000;
  GetTypeInfo<bool,void>::get_class_info((GetTypeInfo<bool,void> *)&local_e8);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_78,(PropertyInfo *)&local_e8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_e8);
  Vector<int>::push_back(local_58,0);
  local_e8 = "ScriptExtension";
  local_100 = 0;
  local_e0._0_8_ = 0xf;
  String::parse_latin1((StrRange *)&local_100);
  StringName::StringName((StringName *)&local_e8,(String *)&local_100,false);
  ClassDB::add_virtual_method((StringName *)&local_e8,(MethodInfo *)&local_b8,true,local_f8,false);
  if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  MethodInfo::~MethodInfo((MethodInfo *)&local_b8);
  CowData<String>::_unref((CowData<String> *)&local_f0);
  local_a8 = (undefined1  [16])0x0;
  local_e8 = "_get_doc_class_name";
  local_f0 = 0;
  local_b8 = (char *)0x0;
  local_b0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 6;
  local_80 = 1;
  local_78[0] = 0;
  local_68 = 0;
  local_60 = 0;
  local_50 = 0;
  local_e0._0_8_ = 0x13;
  String::parse_latin1((StrRange *)&local_b8);
  local_80 = CONCAT44(local_80._4_4_,0x8c);
  GetTypeInfo<StringName,void>::get_class_info((GetTypeInfo<StringName,void> *)&local_e8);
  PropertyInfo::operator=((PropertyInfo *)&local_b0,(PropertyInfo *)&local_e8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_e8);
  local_e8 = "ScriptExtension";
  local_60 = local_60 & 0xffffffff00000000;
  local_100 = 0;
  local_e0._0_8_ = 0xf;
  String::parse_latin1((StrRange *)&local_100);
  StringName::StringName((StringName *)&local_e8,(String *)&local_100,false);
  ClassDB::add_virtual_method((StringName *)&local_e8,(MethodInfo *)&local_b8,true,local_f8,false);
  if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  MethodInfo::~MethodInfo((MethodInfo *)&local_b8);
  CowData<String>::_unref((CowData<String> *)&local_f0);
  local_a8 = (undefined1  [16])0x0;
  local_e8 = "_get_documentation";
  local_f0 = 0;
  local_b8 = (char *)0x0;
  local_b0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 6;
  local_80 = 1;
  local_78[0] = 0;
  local_68 = 0;
  local_60 = 0;
  local_50 = 0;
  local_e0._0_8_ = 0x12;
  String::parse_latin1((StrRange *)&local_b8);
  local_80 = CONCAT44(local_80._4_4_,0x8c);
  GetTypeInfo<TypedArray<Dictionary>,void>::get_class_info
            ((GetTypeInfo<TypedArray<Dictionary>,void> *)&local_e8);
  PropertyInfo::operator=((PropertyInfo *)&local_b0,(PropertyInfo *)&local_e8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_e8);
  local_e8 = "ScriptExtension";
  local_60 = local_60 & 0xffffffff00000000;
  local_100 = 0;
  local_e0._0_8_ = 0xf;
  String::parse_latin1((StrRange *)&local_100);
  StringName::StringName((StringName *)&local_e8,(String *)&local_100,false);
  ClassDB::add_virtual_method((StringName *)&local_e8,(MethodInfo *)&local_b8,true,local_f8,false);
  if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  MethodInfo::~MethodInfo((MethodInfo *)&local_b8);
  CowData<String>::_unref((CowData<String> *)&local_f0);
  local_a8 = (undefined1  [16])0x0;
  local_e8 = "_get_class_icon_path";
  local_f0 = 0;
  local_b8 = (char *)0x0;
  local_b0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 6;
  local_80 = 1;
  local_78[0] = 0;
  local_68 = 0;
  local_60 = 0;
  local_50 = 0;
  local_e0._0_8_ = 0x14;
  String::parse_latin1((StrRange *)&local_b8);
  local_80 = CONCAT44(local_80._4_4_,0xc);
  GetTypeInfo<String,void>::get_class_info((GetTypeInfo<String,void> *)&local_e8);
  PropertyInfo::operator=((PropertyInfo *)&local_b0,(PropertyInfo *)&local_e8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_e8);
  local_e8 = "ScriptExtension";
  local_60 = local_60 & 0xffffffff00000000;
  local_100 = 0;
  local_e0._0_8_ = 0xf;
  String::parse_latin1((StrRange *)&local_100);
  StringName::StringName((StringName *)&local_e8,(String *)&local_100,false);
  ClassDB::add_virtual_method((StringName *)&local_e8,(MethodInfo *)&local_b8,true,local_f8,false);
  if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  MethodInfo::~MethodInfo((MethodInfo *)&local_b8);
  CowData<String>::_unref((CowData<String> *)&local_f0);
  local_f0 = 0;
  local_e8 = (char *)0x0;
  local_b8 = "method";
  local_b0 = 6;
  String::parse_latin1((StrRange *)&local_e8);
  local_b8 = (char *)0x0;
  if (local_e8 != (char *)0x0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_b8,(CowData *)&local_e8);
  }
  Vector<String>::push_back((Vector<String> *)local_f8,(StrRange *)&local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
  local_a8 = (undefined1  [16])0x0;
  local_e8 = "_has_method";
  local_b8 = (char *)0x0;
  local_b0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 6;
  local_80 = 1;
  local_78[0] = 0;
  local_68 = 0;
  local_60 = 0;
  local_50 = 0;
  local_e0._0_8_ = 0xb;
  String::parse_latin1((StrRange *)&local_b8);
  local_80 = CONCAT44(local_80._4_4_,0x8c);
  GetTypeInfo<bool,void>::get_class_info((GetTypeInfo<bool,void> *)&local_e8);
  PropertyInfo::operator=((PropertyInfo *)&local_b0,(PropertyInfo *)&local_e8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_e8);
  local_60 = local_60 & 0xffffffff00000000;
  GetTypeInfo<StringName_const&,void>::get_class_info
            ((GetTypeInfo<StringName_const&,void> *)&local_e8);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_78,(PropertyInfo *)&local_e8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_e8);
  Vector<int>::push_back(local_58,0);
  local_e8 = "ScriptExtension";
  local_100 = 0;
  local_e0._0_8_ = 0xf;
  String::parse_latin1((StrRange *)&local_100);
  StringName::StringName((StringName *)&local_e8,(String *)&local_100,false);
  ClassDB::add_virtual_method((StringName *)&local_e8,(MethodInfo *)&local_b8,true,local_f8,false);
  if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  MethodInfo::~MethodInfo((MethodInfo *)&local_b8);
  CowData<String>::_unref((CowData<String> *)&local_f0);
  local_f0 = 0;
  local_e8 = (char *)0x0;
  local_b8 = "method";
  local_b0 = 6;
  String::parse_latin1((StrRange *)&local_e8);
  local_b8 = (char *)0x0;
  if (local_e8 != (char *)0x0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_b8,(CowData *)&local_e8);
  }
  Vector<String>::push_back((Vector<String> *)local_f8,(StrRange *)&local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
  local_a8 = (undefined1  [16])0x0;
  local_e8 = "_has_static_method";
  local_b8 = (char *)0x0;
  local_b0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 6;
  local_80 = 1;
  local_78[0] = 0;
  local_68 = 0;
  local_60 = 0;
  local_50 = 0;
  local_e0._0_8_ = 0x12;
  String::parse_latin1((StrRange *)&local_b8);
  local_80 = CONCAT44(local_80._4_4_,0x8c);
  GetTypeInfo<bool,void>::get_class_info((GetTypeInfo<bool,void> *)&local_e8);
  PropertyInfo::operator=((PropertyInfo *)&local_b0,(PropertyInfo *)&local_e8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_e8);
  local_60 = local_60 & 0xffffffff00000000;
  GetTypeInfo<StringName_const&,void>::get_class_info
            ((GetTypeInfo<StringName_const&,void> *)&local_e8);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_78,(PropertyInfo *)&local_e8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_e8);
  Vector<int>::push_back(local_58,0);
  local_e8 = "ScriptExtension";
  local_100 = 0;
  local_e0._0_8_ = 0xf;
  String::parse_latin1((StrRange *)&local_100);
  StringName::StringName((StringName *)&local_e8,(String *)&local_100,false);
  ClassDB::add_virtual_method((StringName *)&local_e8,(MethodInfo *)&local_b8,true,local_f8,false);
  if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  MethodInfo::~MethodInfo((MethodInfo *)&local_b8);
  CowData<String>::_unref((CowData<String> *)&local_f0);
  local_f0 = 0;
  local_e8 = (char *)0x0;
  local_b8 = "method";
  local_b0 = 6;
  String::parse_latin1((StrRange *)&local_e8);
  local_b8 = (char *)0x0;
  if (local_e8 != (char *)0x0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_b8,(CowData *)&local_e8);
  }
  Vector<String>::push_back((Vector<String> *)local_f8,(StrRange *)&local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
  local_a8 = (undefined1  [16])0x0;
  local_e8 = "_get_script_method_argument_count";
  local_b8 = (char *)0x0;
  local_b0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 6;
  local_80 = 1;
  local_78[0] = 0;
  local_68 = 0;
  local_60 = 0;
  local_50 = 0;
  local_e0._0_8_ = 0x21;
  String::parse_latin1((StrRange *)&local_b8);
  local_e0 = (undefined1  [16])0x0;
  local_80 = CONCAT44(local_80._4_4_,0xc);
  local_100 = 0;
  local_108 = 0;
  local_110 = 0;
  local_e8 = (char *)0x0;
  local_d0 = 0;
  local_c8 = 0;
  local_c0 = 0x20006;
  StringName::operator=(local_130,(StrRange *)&local_100);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_110);
  CowData<char32_t>::_unref(local_150);
  if ((StringName::configured != '\0') && (local_100 != 0)) {
    StringName::unref();
  }
  PropertyInfo::operator=((PropertyInfo *)&local_b0,(PropertyInfo *)&local_e8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_e8);
  local_60 = local_60 & 0xffffffff00000000;
  GetTypeInfo<StringName_const&,void>::get_class_info
            ((GetTypeInfo<StringName_const&,void> *)&local_e8);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_78,(PropertyInfo *)&local_e8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_e8);
  Vector<int>::push_back(local_58,0);
  local_e8 = "ScriptExtension";
  local_100 = 0;
  local_e0._0_8_ = 0xf;
  String::parse_latin1((StrRange *)&local_100);
  StringName::StringName((StringName *)&local_e8,(String *)&local_100,false);
  ClassDB::add_virtual_method((StringName *)&local_e8,(MethodInfo *)&local_b8,true,local_f8,false);
  if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  MethodInfo::~MethodInfo((MethodInfo *)&local_b8);
  CowData<String>::_unref((CowData<String> *)&local_f0);
  local_f0 = 0;
  local_e8 = (char *)0x0;
  local_b8 = "method";
  local_b0 = 6;
  String::parse_latin1((StrRange *)&local_e8);
  local_b8 = (char *)0x0;
  if (local_e8 != (char *)0x0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_b8,(CowData *)&local_e8);
  }
  Vector<String>::push_back((Vector<String> *)local_f8,(StrRange *)&local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
  local_a8 = (undefined1  [16])0x0;
  local_e8 = "_get_method_info";
  local_b8 = (char *)0x0;
  local_b0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 6;
  local_80 = 1;
  local_78[0] = 0;
  local_68 = 0;
  local_60 = 0;
  local_50 = 0;
  local_e0._0_8_ = 0x10;
  String::parse_latin1((StrRange *)&local_b8);
  local_80 = CONCAT44(local_80._4_4_,0x8c);
  GetTypeInfo<Dictionary,void>::get_class_info((GetTypeInfo<Dictionary,void> *)&local_e8);
  PropertyInfo::operator=((PropertyInfo *)&local_b0,(PropertyInfo *)&local_e8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_e8);
  local_60 = local_60 & 0xffffffff00000000;
  GetTypeInfo<StringName_const&,void>::get_class_info
            ((GetTypeInfo<StringName_const&,void> *)&local_e8);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_78,(PropertyInfo *)&local_e8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_e8);
  Vector<int>::push_back(local_58,0);
  local_e8 = "ScriptExtension";
  local_100 = 0;
  local_e0._0_8_ = 0xf;
  String::parse_latin1((StrRange *)&local_100);
  StringName::StringName((StringName *)&local_e8,(String *)&local_100,false);
  ClassDB::add_virtual_method((StringName *)&local_e8,(MethodInfo *)&local_b8,true,local_f8,false);
  if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  MethodInfo::~MethodInfo((MethodInfo *)&local_b8);
  CowData<String>::_unref((CowData<String> *)&local_f0);
  local_a8 = (undefined1  [16])0x0;
  local_e8 = "_is_tool";
  local_f0 = 0;
  local_b8 = (char *)0x0;
  local_b0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 6;
  local_80 = 1;
  local_78[0] = 0;
  local_68 = 0;
  local_60 = 0;
  local_50 = 0;
  local_e0._0_8_ = 8;
  String::parse_latin1((StrRange *)&local_b8);
  local_80 = CONCAT44(local_80._4_4_,0x8c);
  GetTypeInfo<bool,void>::get_class_info((GetTypeInfo<bool,void> *)&local_e8);
  PropertyInfo::operator=((PropertyInfo *)&local_b0,(PropertyInfo *)&local_e8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_e8);
  local_e8 = "ScriptExtension";
  local_60 = local_60 & 0xffffffff00000000;
  local_100 = 0;
  local_e0._0_8_ = 0xf;
  String::parse_latin1((StrRange *)&local_100);
  StringName::StringName((StringName *)&local_e8,(String *)&local_100,false);
  ClassDB::add_virtual_method((StringName *)&local_e8,(MethodInfo *)&local_b8,true,local_f8,false);
  if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  MethodInfo::~MethodInfo((MethodInfo *)&local_b8);
  CowData<String>::_unref((CowData<String> *)&local_f0);
  local_a8 = (undefined1  [16])0x0;
  local_e8 = "_is_valid";
  local_f0 = 0;
  local_b8 = (char *)0x0;
  local_b0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 6;
  local_80 = 1;
  local_78[0] = 0;
  local_68 = 0;
  local_60 = 0;
  local_50 = 0;
  local_e0._0_8_ = 9;
  String::parse_latin1((StrRange *)&local_b8);
  local_80 = CONCAT44(local_80._4_4_,0x8c);
  GetTypeInfo<bool,void>::get_class_info((GetTypeInfo<bool,void> *)&local_e8);
  PropertyInfo::operator=((PropertyInfo *)&local_b0,(PropertyInfo *)&local_e8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_e8);
  local_e8 = "ScriptExtension";
  local_60 = local_60 & 0xffffffff00000000;
  local_100 = 0;
  local_e0._0_8_ = 0xf;
  String::parse_latin1((StrRange *)&local_100);
  StringName::StringName((StringName *)&local_e8,(String *)&local_100,false);
  ClassDB::add_virtual_method((StringName *)&local_e8,(MethodInfo *)&local_b8,true,local_f8,false);
  if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  MethodInfo::~MethodInfo((MethodInfo *)&local_b8);
  CowData<String>::_unref((CowData<String> *)&local_f0);
  local_a8 = (undefined1  [16])0x0;
  local_e8 = "_is_abstract";
  local_f0 = 0;
  local_b8 = (char *)0x0;
  local_b0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 6;
  local_80 = 1;
  local_78[0] = 0;
  local_68 = 0;
  local_60 = 0;
  local_50 = 0;
  local_e0._0_8_ = 0xc;
  String::parse_latin1((StrRange *)&local_b8);
  local_80 = CONCAT44(local_80._4_4_,0xc);
  GetTypeInfo<bool,void>::get_class_info((GetTypeInfo<bool,void> *)&local_e8);
  PropertyInfo::operator=((PropertyInfo *)&local_b0,(PropertyInfo *)&local_e8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_e8);
  local_e8 = "ScriptExtension";
  local_60 = local_60 & 0xffffffff00000000;
  local_100 = 0;
  local_e0._0_8_ = 0xf;
  String::parse_latin1((StrRange *)&local_100);
  StringName::StringName((StringName *)&local_e8,(String *)&local_100,false);
  ClassDB::add_virtual_method((StringName *)&local_e8,(MethodInfo *)&local_b8,true,local_f8,false);
  if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  MethodInfo::~MethodInfo((MethodInfo *)&local_b8);
  CowData<String>::_unref((CowData<String> *)&local_f0);
  local_a8 = (undefined1  [16])0x0;
  local_e8 = "_get_language";
  local_f0 = 0;
  local_b8 = (char *)0x0;
  local_b0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 6;
  local_80 = 1;
  local_78[0] = 0;
  local_68 = 0;
  local_60 = 0;
  local_50 = 0;
  local_e0._0_8_ = 0xd;
  String::parse_latin1((StrRange *)&local_b8);
  local_e8 = "ScriptLanguage";
  local_80 = CONCAT44(local_80._4_4_,0x8c);
  local_108 = 0;
  local_e0._0_8_ = 0xe;
  String::parse_latin1((StrRange *)local_150);
  StringName::StringName((StringName *)&local_100,(String *)local_150,false);
  local_e8 = (char *)CONCAT44(local_e8._4_4_,0x18);
  auVar5._8_8_ = 0;
  auVar5._0_8_ = local_e0._8_8_;
  local_e0 = auVar5 << 0x40;
  StringName::StringName(local_130,(StringName *)&local_100);
  local_d0 = local_d0 & 0xffffffff00000000;
  local_c8 = 0;
  local_c0 = 6;
  if ((StringName::configured != '\0') && (local_100 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref(local_150);
  PropertyInfo::operator=((PropertyInfo *)&local_b0,(PropertyInfo *)&local_e8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_e8);
  local_e8 = "ScriptExtension";
  local_60 = local_60 & 0xffffffff00000000;
  local_100 = 0;
  local_e0._0_8_ = 0xf;
  String::parse_latin1((StrRange *)&local_100);
  StringName::StringName((StringName *)&local_e8,(String *)&local_100,false);
  ClassDB::add_virtual_method((StringName *)&local_e8,(MethodInfo *)&local_b8,true,local_f8,false);
  if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  MethodInfo::~MethodInfo((MethodInfo *)&local_b8);
  CowData<String>::_unref((CowData<String> *)&local_f0);
  local_f0 = 0;
  local_e8 = (char *)0x0;
  local_b8 = "signal";
  local_b0 = 6;
  String::parse_latin1((StrRange *)&local_e8);
  local_b8 = (char *)0x0;
  if (local_e8 != (char *)0x0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_b8,(CowData *)&local_e8);
  }
  Vector<String>::push_back((Vector<String> *)local_f8,(StrRange *)&local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
  local_a8 = (undefined1  [16])0x0;
  local_e8 = "_has_script_signal";
  local_b8 = (char *)0x0;
  local_b0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 6;
  local_80 = 1;
  local_78[0] = 0;
  local_68 = 0;
  local_60 = 0;
  local_50 = 0;
  local_e0._0_8_ = 0x12;
  String::parse_latin1((StrRange *)&local_b8);
  local_80 = CONCAT44(local_80._4_4_,0x8c);
  GetTypeInfo<bool,void>::get_class_info((GetTypeInfo<bool,void> *)&local_e8);
  PropertyInfo::operator=((PropertyInfo *)&local_b0,(PropertyInfo *)&local_e8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_e8);
  local_60 = local_60 & 0xffffffff00000000;
  GetTypeInfo<StringName_const&,void>::get_class_info
            ((GetTypeInfo<StringName_const&,void> *)&local_e8);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_78,(PropertyInfo *)&local_e8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_e8);
  Vector<int>::push_back(local_58,0);
  local_e8 = "ScriptExtension";
  local_100 = 0;
  local_e0._0_8_ = 0xf;
  String::parse_latin1((StrRange *)&local_100);
  StringName::StringName((StringName *)&local_e8,(String *)&local_100,false);
  ClassDB::add_virtual_method((StringName *)&local_e8,(MethodInfo *)&local_b8,true,local_f8,false);
  if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  MethodInfo::~MethodInfo((MethodInfo *)&local_b8);
  CowData<String>::_unref((CowData<String> *)&local_f0);
  local_a8 = (undefined1  [16])0x0;
  local_e8 = "_get_script_signal_list";
  local_f0 = 0;
  local_b8 = (char *)0x0;
  local_b0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 6;
  local_80 = 1;
  local_78[0] = 0;
  local_68 = 0;
  local_60 = 0;
  local_50 = 0;
  local_e0._0_8_ = 0x17;
  String::parse_latin1((StrRange *)&local_b8);
  local_80 = CONCAT44(local_80._4_4_,0x8c);
  GetTypeInfo<TypedArray<Dictionary>,void>::get_class_info
            ((GetTypeInfo<TypedArray<Dictionary>,void> *)&local_e8);
  PropertyInfo::operator=((PropertyInfo *)&local_b0,(PropertyInfo *)&local_e8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_e8);
  local_e8 = "ScriptExtension";
  local_60 = local_60 & 0xffffffff00000000;
  local_100 = 0;
  local_e0._0_8_ = 0xf;
  String::parse_latin1((StrRange *)&local_100);
  StringName::StringName((StringName *)&local_e8,(String *)&local_100,false);
  ClassDB::add_virtual_method((StringName *)&local_e8,(MethodInfo *)&local_b8,true,local_f8,false);
  if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  MethodInfo::~MethodInfo((MethodInfo *)&local_b8);
  CowData<String>::_unref((CowData<String> *)&local_f0);
  local_f0 = 0;
  local_e8 = (char *)0x0;
  local_b8 = "property";
  local_b0 = 8;
  String::parse_latin1((StrRange *)&local_e8);
  local_b8 = (char *)0x0;
  if (local_e8 != (char *)0x0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_b8,(CowData *)&local_e8);
  }
  Vector<String>::push_back((Vector<String> *)local_f8,(StrRange *)&local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
  local_a8 = (undefined1  [16])0x0;
  local_e8 = "_has_property_default_value";
  local_b8 = (char *)0x0;
  local_b0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 6;
  local_80 = 1;
  local_78[0] = 0;
  local_68 = 0;
  local_60 = 0;
  local_50 = 0;
  local_e0._0_8_ = 0x1b;
  String::parse_latin1((StrRange *)&local_b8);
  local_80 = CONCAT44(local_80._4_4_,0x8c);
  GetTypeInfo<bool,void>::get_class_info((GetTypeInfo<bool,void> *)&local_e8);
  PropertyInfo::operator=((PropertyInfo *)&local_b0,(PropertyInfo *)&local_e8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_e8);
  local_60 = local_60 & 0xffffffff00000000;
  GetTypeInfo<StringName_const&,void>::get_class_info
            ((GetTypeInfo<StringName_const&,void> *)&local_e8);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_78,(PropertyInfo *)&local_e8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_e8);
  Vector<int>::push_back(local_58,0);
  local_e8 = "ScriptExtension";
  local_100 = 0;
  local_e0._0_8_ = 0xf;
  String::parse_latin1((StrRange *)&local_100);
  StringName::StringName((StringName *)&local_e8,(String *)&local_100,false);
  ClassDB::add_virtual_method((StringName *)&local_e8,(MethodInfo *)&local_b8,true,local_f8,false);
  if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  MethodInfo::~MethodInfo((MethodInfo *)&local_b8);
  CowData<String>::_unref((CowData<String> *)&local_f0);
  local_f0 = 0;
  local_e8 = (char *)0x0;
  local_b8 = "property";
  local_b0 = 8;
  String::parse_latin1((StrRange *)&local_e8);
  local_b8 = (char *)0x0;
  if (local_e8 != (char *)0x0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_b8,(CowData *)&local_e8);
  }
  Vector<String>::push_back((Vector<String> *)local_f8,(StrRange *)&local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
  local_a8 = (undefined1  [16])0x0;
  local_e8 = "_get_property_default_value";
  local_b8 = (char *)0x0;
  local_b0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 6;
  local_80 = 1;
  local_78[0] = 0;
  local_68 = 0;
  local_60 = 0;
  local_50 = 0;
  local_e0._0_8_ = 0x1b;
  String::parse_latin1((StrRange *)&local_b8);
  local_e0 = (undefined1  [16])0x0;
  local_80 = CONCAT44(local_80._4_4_,0x8c);
  local_100 = 0;
  local_108 = 0;
  local_110 = 0;
  local_e8 = (char *)0x0;
  local_d0 = 0;
  local_c8 = 0;
  local_c0 = 0x20006;
  StringName::operator=(local_130,(StrRange *)&local_100);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_110);
  CowData<char32_t>::_unref(local_150);
  if ((StringName::configured != '\0') && (local_100 != 0)) {
    StringName::unref();
  }
  PropertyInfo::operator=((PropertyInfo *)&local_b0,(PropertyInfo *)&local_e8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_e8);
  local_60 = local_60 & 0xffffffff00000000;
  GetTypeInfo<StringName_const&,void>::get_class_info
            ((GetTypeInfo<StringName_const&,void> *)&local_e8);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_78,(PropertyInfo *)&local_e8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_e8);
  Vector<int>::push_back(local_58,0);
  local_e8 = "ScriptExtension";
  local_100 = 0;
  local_e0._0_8_ = 0xf;
  String::parse_latin1((StrRange *)&local_100);
  StringName::StringName((StringName *)&local_e8,(String *)&local_100,false);
  ClassDB::add_virtual_method((StringName *)&local_e8,(MethodInfo *)&local_b8,true,local_f8,false);
  if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  MethodInfo::~MethodInfo((MethodInfo *)&local_b8);
  CowData<String>::_unref((CowData<String> *)&local_f0);
  local_a8 = (undefined1  [16])0x0;
  local_e8 = "_update_exports";
  local_f0 = 0;
  local_b8 = (char *)0x0;
  local_b0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 6;
  local_80 = 1;
  local_78[0] = 0;
  local_68 = 0;
  local_60 = 0;
  local_50 = 0;
  local_e0._0_8_ = 0xf;
  String::parse_latin1((StrRange *)&local_b8);
  local_e8 = "ScriptExtension";
  local_80 = CONCAT44(local_80._4_4_,0x88);
  local_100 = 0;
  local_e0._0_8_ = 0xf;
  String::parse_latin1((StrRange *)&local_100);
  StringName::StringName((StringName *)&local_e8,(String *)&local_100,false);
  ClassDB::add_virtual_method((StringName *)&local_e8,(MethodInfo *)&local_b8,true,local_f8,false);
  if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  MethodInfo::~MethodInfo((MethodInfo *)&local_b8);
  CowData<String>::_unref((CowData<String> *)&local_f0);
  local_a8 = (undefined1  [16])0x0;
  local_e8 = "_get_script_method_list";
  local_f0 = 0;
  local_b8 = (char *)0x0;
  local_b0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 6;
  local_80 = 1;
  local_78[0] = 0;
  local_68 = 0;
  local_60 = 0;
  local_50 = 0;
  local_e0._0_8_ = 0x17;
  String::parse_latin1((StrRange *)&local_b8);
  local_80 = CONCAT44(local_80._4_4_,0x8c);
  GetTypeInfo<TypedArray<Dictionary>,void>::get_class_info
            ((GetTypeInfo<TypedArray<Dictionary>,void> *)&local_e8);
  PropertyInfo::operator=((PropertyInfo *)&local_b0,(PropertyInfo *)&local_e8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_e8);
  local_e8 = "ScriptExtension";
  local_60 = local_60 & 0xffffffff00000000;
  local_100 = 0;
  local_e0._0_8_ = 0xf;
  String::parse_latin1((StrRange *)&local_100);
  StringName::StringName((StringName *)&local_e8,(String *)&local_100,false);
  ClassDB::add_virtual_method((StringName *)&local_e8,(MethodInfo *)&local_b8,true,local_f8,false);
  if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  MethodInfo::~MethodInfo((MethodInfo *)&local_b8);
  CowData<String>::_unref((CowData<String> *)&local_f0);
  local_a8 = (undefined1  [16])0x0;
  local_e8 = "_get_script_property_list";
  local_f0 = 0;
  local_b8 = (char *)0x0;
  local_b0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 6;
  local_80 = 1;
  local_78[0] = 0;
  local_68 = 0;
  local_60 = 0;
  local_50 = 0;
  local_e0._0_8_ = 0x19;
  String::parse_latin1((StrRange *)&local_b8);
  local_80 = CONCAT44(local_80._4_4_,0x8c);
  GetTypeInfo<TypedArray<Dictionary>,void>::get_class_info
            ((GetTypeInfo<TypedArray<Dictionary>,void> *)&local_e8);
  PropertyInfo::operator=((PropertyInfo *)&local_b0,(PropertyInfo *)&local_e8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_e8);
  local_e8 = "ScriptExtension";
  local_60 = local_60 & 0xffffffff00000000;
  local_100 = 0;
  local_e0._0_8_ = 0xf;
  String::parse_latin1((StrRange *)&local_100);
  StringName::StringName((StringName *)&local_e8,(String *)&local_100,false);
  ClassDB::add_virtual_method((StringName *)&local_e8,(MethodInfo *)&local_b8,true,local_f8,false);
  if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  MethodInfo::~MethodInfo((MethodInfo *)&local_b8);
  CowData<String>::_unref((CowData<String> *)&local_f0);
  local_f0 = 0;
  local_e8 = (char *)0x0;
  local_b8 = "member";
  local_b0 = 6;
  String::parse_latin1((StrRange *)&local_e8);
  local_b8 = (char *)0x0;
  if (local_e8 != (char *)0x0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_b8,(CowData *)&local_e8);
  }
  Vector<String>::push_back((Vector<String> *)local_f8,(StrRange *)&local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
  local_a8 = (undefined1  [16])0x0;
  local_e8 = "_get_member_line";
  local_b8 = (char *)0x0;
  local_b0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 6;
  local_80 = 1;
  local_78[0] = 0;
  local_68 = 0;
  local_60 = 0;
  local_50 = 0;
  local_e0._0_8_ = 0x10;
  String::parse_latin1((StrRange *)&local_b8);
  local_80 = CONCAT44(local_80._4_4_,0x8c);
  GetTypeInfo<int,void>::get_class_info((GetTypeInfo<int,void> *)&local_e8);
  PropertyInfo::operator=((PropertyInfo *)&local_b0,(PropertyInfo *)&local_e8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_e8);
  local_60 = CONCAT44(local_60._4_4_,3);
  GetTypeInfo<StringName_const&,void>::get_class_info
            ((GetTypeInfo<StringName_const&,void> *)&local_e8);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_78,(PropertyInfo *)&local_e8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_e8);
  Vector<int>::push_back(local_58,0);
  local_e8 = "ScriptExtension";
  local_100 = 0;
  local_e0._0_8_ = 0xf;
  String::parse_latin1((StrRange *)&local_100);
  StringName::StringName((StringName *)&local_e8,(String *)&local_100,false);
  ClassDB::add_virtual_method((StringName *)&local_e8,(MethodInfo *)&local_b8,true,local_f8,false);
  if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  MethodInfo::~MethodInfo((MethodInfo *)&local_b8);
  CowData<String>::_unref((CowData<String> *)&local_f0);
  local_a8 = (undefined1  [16])0x0;
  local_e8 = "_get_constants";
  local_f0 = 0;
  local_b8 = (char *)0x0;
  local_b0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 6;
  local_80 = 1;
  local_78[0] = 0;
  local_68 = 0;
  local_60 = 0;
  local_50 = 0;
  local_e0._0_8_ = 0xe;
  String::parse_latin1((StrRange *)&local_b8);
  local_80 = CONCAT44(local_80._4_4_,0x8c);
  GetTypeInfo<Dictionary,void>::get_class_info((GetTypeInfo<Dictionary,void> *)&local_e8);
  PropertyInfo::operator=((PropertyInfo *)&local_b0,(PropertyInfo *)&local_e8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_e8);
  local_e8 = "ScriptExtension";
  local_60 = local_60 & 0xffffffff00000000;
  local_100 = 0;
  local_e0._0_8_ = 0xf;
  String::parse_latin1((StrRange *)&local_100);
  StringName::StringName((StringName *)&local_e8,(String *)&local_100,false);
  ClassDB::add_virtual_method((StringName *)&local_e8,(MethodInfo *)&local_b8,true,local_f8,false);
  if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  MethodInfo::~MethodInfo((MethodInfo *)&local_b8);
  CowData<String>::_unref((CowData<String> *)&local_f0);
  local_a8 = (undefined1  [16])0x0;
  local_e8 = "_get_members";
  local_f0 = 0;
  local_b8 = (char *)0x0;
  local_b0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 6;
  local_80 = 1;
  local_78[0] = 0;
  local_68 = 0;
  local_60 = 0;
  local_50 = 0;
  local_e0._0_8_ = 0xc;
  String::parse_latin1((StrRange *)&local_b8);
  local_80 = CONCAT44(local_80._4_4_,0x8c);
  local_108 = 0;
  Variant::get_type_name((StrRange *)&local_110,0x15);
  local_118 = 0;
  local_e8 = (char *)CONCAT44(local_e8._4_4_,0x1c);
  local_d0 = CONCAT44(local_d0._4_4_,0x1f);
  local_c8 = 0;
  local_e0 = (undefined1  [16])0x0;
  if (local_110 != 0) {
    CowData<char32_t>::_ref(local_128,(CowData *)&local_110);
    local_c0 = 6;
    if ((int)local_d0 == 0x11) {
      StringName::StringName((StringName *)&local_100,(String *)local_128,false);
      if (local_e0._8_8_ == local_100) {
        if ((StringName::configured != '\0') && (local_100 != 0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        local_e0._8_8_ = local_100;
      }
      goto LAB_0010e5ca;
    }
  }
  local_c0 = 6;
  StringName::operator=(local_130,local_150);
LAB_0010e5ca:
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_118);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_110);
  if ((StringName::configured != '\0') && (local_108 != 0)) {
    StringName::unref();
  }
  PropertyInfo::operator=((PropertyInfo *)&local_b0,(PropertyInfo *)&local_e8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_e8);
  local_e8 = "ScriptExtension";
  local_60 = local_60 & 0xffffffff00000000;
  local_100 = 0;
  local_e0._0_8_ = 0xf;
  String::parse_latin1((StrRange *)&local_100);
  StringName::StringName((StringName *)&local_e8,(String *)&local_100,false);
  ClassDB::add_virtual_method((StringName *)&local_e8,(MethodInfo *)&local_b8,true,local_f8,false);
  if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  MethodInfo::~MethodInfo((MethodInfo *)&local_b8);
  CowData<String>::_unref((CowData<String> *)&local_f0);
  local_a8 = (undefined1  [16])0x0;
  local_e8 = "_is_placeholder_fallback_enabled";
  local_f0 = 0;
  local_b8 = (char *)0x0;
  local_b0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 6;
  local_80 = 1;
  local_78[0] = 0;
  local_68 = 0;
  local_60 = 0;
  local_50 = 0;
  local_e0._0_8_ = 0x20;
  String::parse_latin1((StrRange *)&local_b8);
  local_80 = CONCAT44(local_80._4_4_,0x8c);
  GetTypeInfo<bool,void>::get_class_info((GetTypeInfo<bool,void> *)&local_e8);
  PropertyInfo::operator=((PropertyInfo *)&local_b0,(PropertyInfo *)&local_e8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_e8);
  local_e8 = "ScriptExtension";
  local_60 = local_60 & 0xffffffff00000000;
  local_100 = 0;
  local_e0._0_8_ = 0xf;
  String::parse_latin1((StrRange *)&local_100);
  StringName::StringName((StringName *)&local_e8,(String *)&local_100,false);
  ClassDB::add_virtual_method((StringName *)&local_e8,(MethodInfo *)&local_b8,true,local_f8,false);
  if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  MethodInfo::~MethodInfo((MethodInfo *)&local_b8);
  CowData<String>::_unref((CowData<String> *)&local_f0);
  local_a8 = (undefined1  [16])0x0;
  local_e8 = "_get_rpc_config";
  local_f0 = 0;
  local_b8 = (char *)0x0;
  local_b0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 6;
  local_80 = 1;
  local_78[0] = 0;
  local_68 = 0;
  local_60 = 0;
  local_50 = 0;
  local_e0._0_8_ = 0xf;
  String::parse_latin1((StrRange *)&local_b8);
  local_e0 = (undefined1  [16])0x0;
  local_80 = CONCAT44(local_80._4_4_,0x8c);
  local_100 = 0;
  local_108 = 0;
  local_110 = 0;
  local_e8 = (char *)0x0;
  local_d0 = 0;
  local_c8 = 0;
  local_c0 = 0x20006;
  StringName::operator=(local_130,(StrRange *)&local_100);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_110);
  CowData<char32_t>::_unref(local_150);
  if ((StringName::configured != '\0') && (local_100 != 0)) {
    StringName::unref();
  }
  PropertyInfo::operator=((PropertyInfo *)&local_b0,(PropertyInfo *)&local_e8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_e8);
  local_e8 = "ScriptExtension";
  local_60 = local_60 & 0xffffffff00000000;
  local_100 = 0;
  local_e0._0_8_ = 0xf;
  String::parse_latin1((StrRange *)&local_100);
  StringName::StringName((StringName *)&local_e8,(String *)&local_100,false);
  ClassDB::add_virtual_method((StringName *)&local_e8,(MethodInfo *)&local_b8,true,local_f8,false);
  if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  MethodInfo::~MethodInfo((MethodInfo *)&local_b8);
  CowData<String>::_unref((CowData<String> *)&local_f0);
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



/* PropertyInfo::PropertyInfo(Variant::Type, String const&, PropertyHint, String const&, unsigned
   int, StringName const&) */

void __thiscall
PropertyInfo::PropertyInfo
          (PropertyInfo *this,undefined4 param_2,CowData *param_3,int param_4,CowData *param_5,
          undefined4 param_6,StringName *param_7)

{
  long lVar1;
  long in_FS_OFFSET;
  long local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined8 *)(this + 8) = 0;
  lVar1 = *(long *)param_3;
  *(undefined4 *)this = param_2;
  if (lVar1 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(this + 8),param_3);
  }
  *(undefined8 *)(this + 0x20) = 0;
  lVar1 = *(long *)param_5;
  *(undefined8 *)(this + 0x10) = 0;
  *(int *)(this + 0x18) = param_4;
  if (lVar1 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(this + 0x20),param_5);
    param_4 = *(int *)(this + 0x18);
  }
  *(undefined4 *)(this + 0x28) = param_6;
  if (param_4 == 0x11) {
    StringName::StringName((StringName *)&local_48,(String *)(this + 0x20),false);
    if (*(long *)(this + 0x10) == local_48) {
      if ((StringName::configured != '\0') && (local_48 != 0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      *(long *)(this + 0x10) = local_48;
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    StringName::operator=((StringName *)(this + 0x10),param_7);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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
  local_48 = &_LC4;
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
      goto joined_r0x0010f9dc;
    }
  }
  StringName::operator=((StringName *)(this + 0x10),(StringName *)&local_50);
  lVar2 = local_58;
joined_r0x0010f9dc:
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
  local_48 = &_LC4;
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
      goto joined_r0x0010fb5c;
    }
  }
  StringName::operator=((StringName *)(this + 0x10),(StringName *)&local_50);
  lVar2 = local_58;
joined_r0x0010fb5c:
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
  local_48 = &_LC4;
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
      goto joined_r0x0010fcdc;
    }
  }
  StringName::operator=((StringName *)(this + 0x10),(StringName *)&local_50);
  lVar2 = local_58;
joined_r0x0010fcdc:
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



/* GetTypeInfo<String const&, void>::get_class_info() */

GetTypeInfo<String_const&,void> * __thiscall
GetTypeInfo<String_const&,void>::get_class_info(GetTypeInfo<String_const&,void> *this)

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
  local_48 = &_LC4;
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
      goto joined_r0x0010fe5c;
    }
  }
  StringName::operator=((StringName *)(this + 0x10),(StringName *)&local_50);
  lVar2 = local_58;
joined_r0x0010fe5c:
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



/* GetTypeInfo<StringName, void>::get_class_info() */

GetTypeInfo<StringName,void> * __thiscall
GetTypeInfo<StringName,void>::get_class_info(GetTypeInfo<StringName,void> *this)

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
  local_48 = &_LC4;
  local_40 = 0;
  String::parse_latin1((StrRange *)&local_58);
  *(undefined4 *)this = 0x15;
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
      goto joined_r0x0010ffdc;
    }
  }
  StringName::operator=((StringName *)(this + 0x10),(StringName *)&local_50);
  lVar2 = local_58;
joined_r0x0010ffdc:
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



/* GetTypeInfo<StringName const&, void>::get_class_info() */

GetTypeInfo<StringName_const&,void> * __thiscall
GetTypeInfo<StringName_const&,void>::get_class_info(GetTypeInfo<StringName_const&,void> *this)

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
  local_48 = &_LC4;
  local_40 = 0;
  String::parse_latin1((StrRange *)&local_58);
  *(undefined4 *)this = 0x15;
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
      goto joined_r0x0011015c;
    }
  }
  StringName::operator=((StringName *)(this + 0x10),(StringName *)&local_50);
  lVar2 = local_58;
joined_r0x0011015c:
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



/* GetTypeInfo<Dictionary, void>::get_class_info() */

GetTypeInfo<Dictionary,void> * __thiscall
GetTypeInfo<Dictionary,void>::get_class_info(GetTypeInfo<Dictionary,void> *this)

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
  local_48 = &_LC4;
  local_40 = 0;
  String::parse_latin1((StrRange *)&local_58);
  *(undefined4 *)this = 0x1b;
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
      goto joined_r0x001102dc;
    }
  }
  StringName::operator=((StringName *)(this + 0x10),(StringName *)&local_50);
  lVar2 = local_58;
joined_r0x001102dc:
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



/* GetTypeInfo<Vector<String>, void>::get_class_info() */

GetTypeInfo<Vector<String>,void> * __thiscall
GetTypeInfo<Vector<String>,void>::get_class_info(GetTypeInfo<Vector<String>,void> *this)

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
  local_48 = &_LC4;
  local_40 = 0;
  String::parse_latin1((StrRange *)&local_58);
  *(undefined4 *)this = 0x22;
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
      goto joined_r0x0011045c;
    }
  }
  StringName::operator=((StringName *)(this + 0x10),(StringName *)&local_50);
  lVar2 = local_58;
joined_r0x0011045c:
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



/* GetTypeInfo<TypedArray<Dictionary>, void>::get_class_info() */

GetTypeInfo<TypedArray<Dictionary>,void> * __thiscall
GetTypeInfo<TypedArray<Dictionary>,void>::get_class_info
          (GetTypeInfo<TypedArray<Dictionary>,void> *this)

{
  long *plVar1;
  long lVar2;
  long in_FS_OFFSET;
  long local_38;
  long local_30;
  long local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_30 = 0;
  Variant::get_type_name(&local_38,0x1b);
  *(undefined4 *)this = 0x1c;
  *(undefined4 *)(this + 0x18) = 0x1f;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined1 (*) [16])(this + 8) = (undefined1  [16])0x0;
  if (local_38 == 0) {
    *(undefined4 *)(this + 0x28) = 6;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(this + 0x20),(CowData *)&local_38);
    *(undefined4 *)(this + 0x28) = 6;
    if (*(int *)(this + 0x18) == 0x11) {
      StringName::StringName((StringName *)&local_28,(String *)(this + 0x20),false);
      if (*(long *)(this + 0x10) == local_28) {
        lVar2 = local_38;
        if ((StringName::configured != '\0') && (local_28 != 0)) {
          StringName::unref();
          lVar2 = local_38;
        }
      }
      else {
        StringName::unref();
        *(long *)(this + 0x10) = local_28;
        lVar2 = local_38;
      }
      goto joined_r0x001105bc;
    }
  }
  StringName::operator=((StringName *)(this + 0x10),(StringName *)&local_30);
  lVar2 = local_38;
joined_r0x001105bc:
  local_38 = lVar2;
  if (lVar2 != 0) {
    LOCK();
    plVar1 = (long *)(lVar2 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_38 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_30 != 0)) {
    StringName::unref();
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
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



/* GetTypeInfo<GDExtensionPtr<void>, void>::get_class_info() */

GetTypeInfo<GDExtensionPtr<void>,void> * __thiscall
GetTypeInfo<GDExtensionPtr<void>,void>::get_class_info(GetTypeInfo<GDExtensionPtr<void>,void> *this)

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
  local_48 = &_LC10;
  local_40 = 4;
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
      goto joined_r0x00110afc;
    }
  }
  StringName::operator=((StringName *)(this + 0x10),(StringName *)&local_50);
  lVar2 = local_58;
joined_r0x00110afc:
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



/* GetTypeInfo<Ref<Script> const&, void>::get_class_info() */

GetTypeInfo<Ref<Script>const&,void> * __thiscall
GetTypeInfo<Ref<Script>const&,void>::get_class_info(GetTypeInfo<Ref<Script>const&,void> *this)

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
  local_48 = "Script";
  local_40 = 6;
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
      goto LAB_00110c00;
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
LAB_00110c00:
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
  String::split(local_58,SUB81(param_1,0),0x110dca);
  if ((local_50 != 0) && (2 < *(long *)(local_50 + -8))) {
    local_60 = 0;
    local_48 = &_LC13;
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
        goto joined_r0x00110e88;
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
  local_48 = &_LC13;
  local_40 = 1;
  String::parse_latin1((StrRange *)&local_60);
  String::join((Vector *)this);
  lVar5 = local_60;
joined_r0x00110e88:
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
LAB_001117a0:
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
  if (lVar10 == 0) goto LAB_001117a0;
  if (param_1 <= lVar6) {
    lVar6 = *(long *)this;
    uVar8 = param_1;
    while (lVar6 != 0) {
      if (*(ulong *)(lVar6 + -8) <= uVar8) {
LAB_00111679:
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
        if (*(ulong *)(lVar6 + -8) <= uVar8) goto LAB_00111679;
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
    goto LAB_001117f6;
  }
  if (lVar10 == lVar7) {
LAB_0011171f:
    puVar9 = *(undefined8 **)this;
    if (puVar9 == (undefined8 *)0x0) {
LAB_001117f6:
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    lVar6 = puVar9[-1];
    if (param_1 <= lVar6) goto LAB_0011170a;
  }
  else {
    if (lVar6 != 0) {
      uVar4 = _realloc(this,lVar10);
      if ((int)uVar4 != 0) {
        return uVar4;
      }
      goto LAB_0011171f;
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
LAB_0011170a:
  puVar9[-1] = param_1;
  return 0;
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
LAB_00111a80:
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
  if (lVar8 == 0) goto LAB_00111a80;
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
        goto LAB_00111991;
      }
      uVar6 = _realloc(this,lVar8);
      if ((int)uVar6 != 0) {
        return uVar6;
      }
    }
    puVar7 = *(undefined8 **)this;
    if (puVar7 != (undefined8 *)0x0) {
LAB_00111991:
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
/* PropertyInfo::PropertyInfo(Variant::Type, String const&, PropertyHint, String const&, unsigned
   int, StringName const&) */

void __thiscall PropertyInfo::PropertyInfo(void)

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



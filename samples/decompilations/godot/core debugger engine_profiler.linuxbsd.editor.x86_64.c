
/* _FUN(void*, bool, Array const&) */

void EngineProfiler::bind(String_const&)::{lambda(void*,bool,Array_const&)#1}::_FUN
               (void *param_1,bool param_2,Array *param_3)

{
                    /* WARNING: Load size is inaccurate */
                    /* WARNING: Could not recover jumptable at 0x0010000b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x150))(param_1,param_2);
  return;
}



/* _FUN(void*, Array const&) */

void EngineProfiler::bind(String_const&)::{lambda(void*,Array_const&)#1}::_FUN
               (void *param_1,Array *param_2)

{
                    /* WARNING: Load size is inaccurate */
                    /* WARNING: Could not recover jumptable at 0x00100027. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x158))();
  return;
}



/* _FUN(void*, double, double, double, double) */

void EngineProfiler::bind(String_const&)::{lambda(void*,double,double,double,double)#1}::_FUN
               (void *param_1,double param_2,double param_3,double param_4,double param_5)

{
                    /* WARNING: Load size is inaccurate */
                    /* WARNING: Could not recover jumptable at 0x00100037. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x160))();
  return;
}



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



/* EngineProfiler::bind(String const&) */

undefined8 __thiscall EngineProfiler::bind(EngineProfiler *this,String *param_1)

{
  long lVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  long local_50;
  undefined8 local_48;
  code *pcStack_40;
  code *local_38;
  EngineProfiler *local_30;
  undefined1 local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  lVar1 = *(long *)(this + 0x180);
  if ((lVar1 == 0) || (*(int *)(lVar1 + -8) < 2)) {
    local_28 = 0;
    local_38 = bind(String_const&)::{lambda(void*,double,double,double,double)#1}::_FUN;
    local_48 = 0x100000;
    pcStack_40 = bind(String_const&)::{lambda(void*,Array_const&)#1}::_FUN;
    local_30 = this;
    if (lVar1 != *(long *)param_1) {
      CowData<char32_t>::_ref((CowData<char32_t> *)(this + 0x180),(CowData *)param_1);
    }
    StringName::StringName((StringName *)&local_50,param_1,false);
    EngineDebugger::register_profiler((StringName *)&local_50,(Profiler *)&local_48);
    if ((StringName::configured != '\0') && (local_50 != 0)) {
      StringName::unref();
    }
    uVar2 = 0;
  }
  else {
    _err_print_error(&_LC10,"core/debugger/engine_profiler.cpp",0x36,
                     "Condition \"is_bound()\" is true. Returning: ERR_ALREADY_IN_USE",0,0);
    uVar2 = 0x16;
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EngineProfiler::unbind() */

undefined8 __thiscall EngineProfiler::unbind(EngineProfiler *this)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  long local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if ((*(long *)(this + 0x180) == 0) || (*(int *)(*(long *)(this + 0x180) + -8) < 2)) {
    _err_print_error("unbind","core/debugger/engine_profiler.cpp",0x48,
                     "Condition \"!is_bound()\" is true. Returning: ERR_UNCONFIGURED",0,0);
    uVar3 = 3;
  }
  else {
    StringName::StringName((StringName *)&local_28,(String *)(this + 0x180),false);
    EngineDebugger::unregister_profiler((StringName *)&local_28);
    if ((StringName::configured != '\0') && (local_28 != 0)) {
      StringName::unref();
    }
    lVar2 = *(long *)(this + 0x180);
    if ((lVar2 != 0) && (*(long *)(lVar2 + -8) != 0)) {
      LOCK();
      plVar1 = (long *)(lVar2 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        lVar2 = *(long *)(this + 0x180);
        *(undefined8 *)(this + 0x180) = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
        uVar3 = 0;
        goto LAB_00100344;
      }
      *(undefined8 *)(this + 0x180) = 0;
    }
    uVar3 = 0;
  }
LAB_00100344:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EngineProfiler::~EngineProfiler() */

void __thiscall EngineProfiler::~EngineProfiler(EngineProfiler *this)

{
  long *plVar1;
  long lVar2;
  
  *(undefined ***)this = &PTR__initialize_classv_00106e30;
  if ((*(long *)(this + 0x180) != 0) && (1 < *(int *)(*(long *)(this + 0x180) + -8))) {
    unbind(this);
  }
  if (StringName::configured != '\0') {
    if (*(long *)(this + 0x1b8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00100485;
    }
    if (*(long *)(this + 0x1a0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00100485;
    }
    if (*(long *)(this + 0x188) != 0) {
      StringName::unref();
    }
  }
LAB_00100485:
  if (*(long *)(this + 0x180) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x180) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x180);
      *(undefined8 *)(this + 0x180) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  *(undefined ***)this = &PTR__initialize_classv_00106cd0;
  Object::~Object((Object *)this);
  return;
}



/* EngineProfiler::~EngineProfiler() */

void __thiscall EngineProfiler::~EngineProfiler(EngineProfiler *this)

{
  ~EngineProfiler(this);
  operator_delete(this,0x1d0);
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



/* EngineProfiler::_bind_methods() */

void EngineProfiler::_bind_methods(void)

{
  long *plVar1;
  long lVar2;
  code *pcVar3;
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
  char *pcVar17;
  undefined8 uVar18;
  int *piVar19;
  undefined4 *puVar20;
  int *piVar21;
  long lVar22;
  StringName *this;
  long in_FS_OFFSET;
  bool bVar23;
  long local_110;
  long local_108;
  long local_100;
  Vector<String> local_f8 [8];
  undefined8 local_f0;
  char *local_e8;
  undefined1 local_e0 [16];
  int local_d0;
  long local_c8;
  undefined4 local_c0;
  char *local_b8;
  undefined8 local_b0;
  undefined1 local_a8 [16];
  undefined8 local_98;
  long local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined1 (*local_78 [2]) [16];
  int *local_68;
  undefined8 local_60;
  Vector<int> local_58 [8];
  long local_50;
  long local_40;
  
  local_e0._8_8_ = local_e0._0_8_;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_b8 = "enable";
  local_f0 = 0;
  local_e8 = (char *)0x0;
  local_b0 = 6;
  String::parse_latin1((StrRange *)&local_e8);
  local_b8 = (char *)0x0;
  plVar1 = (long *)((long)local_e8 + -0x10);
  if (local_e8 == (char *)0x0) {
    Vector<String>::push_back(local_f8,(StrRange *)&local_b8);
  }
  else {
    do {
      lVar2 = *plVar1;
      if (lVar2 == 0) goto LAB_001008f5;
      LOCK();
      lVar22 = *plVar1;
      bVar23 = lVar2 == lVar22;
      if (bVar23) {
        *plVar1 = lVar2 + 1;
        lVar22 = lVar2;
      }
      UNLOCK();
    } while (!bVar23);
    if (lVar22 != -1) {
      local_b8 = local_e8;
    }
LAB_001008f5:
    pcVar17 = local_b8;
    Vector<String>::push_back(local_f8);
    if (pcVar17 != (char *)0x0) {
      LOCK();
      plVar1 = (long *)((long)pcVar17 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        Memory::free_static((void *)((long)local_b8 + -0x10),false);
      }
    }
  }
  local_100 = 0;
  local_b8 = "options";
  local_b0 = 7;
  String::parse_latin1((StrRange *)&local_100);
  local_b8 = (char *)0x0;
  plVar1 = (long *)(local_100 + -0x10);
  if (local_100 == 0) {
    Vector<String>::push_back(local_f8);
  }
  else {
    do {
      lVar2 = *plVar1;
      if (lVar2 == 0) goto LAB_001009ab;
      LOCK();
      lVar22 = *plVar1;
      bVar23 = lVar2 == lVar22;
      if (bVar23) {
        *plVar1 = lVar2 + 1;
        lVar22 = lVar2;
      }
      UNLOCK();
    } while (!bVar23);
    if (lVar22 != -1) {
      local_b8 = (char *)local_100;
    }
LAB_001009ab:
    pcVar17 = local_b8;
    Vector<String>::push_back(local_f8);
    if (pcVar17 != (char *)0x0) {
      LOCK();
      plVar1 = (long *)((long)pcVar17 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        Memory::free_static((void *)((long)local_b8 + -0x10),false);
      }
    }
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
  pcVar17 = local_e8;
  if (local_e8 != (char *)0x0) {
    LOCK();
    plVar1 = (long *)((long)local_e8 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_e8 = (char *)0x0;
      Memory::free_static((void *)((long)pcVar17 + -0x10),false);
    }
  }
  local_a8 = (undefined1  [16])0x0;
  local_e8 = "_toggle";
  local_b8 = (char *)0x0;
  local_b0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 6;
  local_80 = 1;
  local_78[0] = (undefined1 (*) [16])0x0;
  local_68 = (int *)0x0;
  local_60 = 0;
  local_50 = 0;
  local_e0._0_8_ = 7;
  String::parse_latin1((StrRange *)&local_b8);
  local_80 = CONCAT44(local_80._4_4_,8);
  local_e8 = "";
  local_110 = 0;
  local_108 = 0;
  auVar15._8_8_ = 0;
  auVar15._0_8_ = local_e0._8_8_;
  local_e0 = auVar15 << 0x40;
  String::parse_latin1((StrRange *)&local_108);
  local_e8 = (char *)CONCAT44(local_e8._4_4_,1);
  local_d0 = 0;
  local_c8 = 0;
  local_e0 = (undefined1  [16])0x0;
  if (local_108 == 0) {
LAB_001025cb:
    local_c0 = 6;
    StringName::operator=((StringName *)(local_e0 + 8),(StringName *)&local_110);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_c8,(CowData *)&local_108);
    local_c0 = 6;
    if (local_d0 != 0x11) goto LAB_001025cb;
    StringName::StringName((StringName *)&local_100,(String *)&local_c8,false);
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
  lVar2 = local_108;
  this = (StringName *)(local_e0 + 8);
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
  if (local_78[0] == (undefined1 (*) [16])0x0) {
    local_78[0] = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined4 *)local_78[0][1] = 0;
    *local_78[0] = (undefined1  [16])0x0;
  }
  puVar20 = (undefined4 *)operator_new(0x48,DefaultAllocator::alloc);
  *(undefined8 *)(puVar20 + 8) = 0;
  *(undefined1 (*) [16])(puVar20 + 2) = (undefined1  [16])0x0;
  *puVar20 = 0;
  puVar20[6] = 0;
  puVar20[10] = 6;
  *(undefined8 *)(puVar20 + 0x10) = 0;
  *(undefined1 (*) [16])(puVar20 + 0xc) = (undefined1  [16])0x0;
  *puVar20 = local_e8._0_4_;
  if (local_e0._0_8_ != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar20 + 2),(CowData *)local_e0);
  }
  StringName::operator=((StringName *)(puVar20 + 4),this);
  puVar20[6] = local_d0;
  if (*(long *)(puVar20 + 8) != local_c8) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar20 + 8),(CowData *)&local_c8);
  }
  lVar22 = local_c8;
  puVar20[10] = local_c0;
  lVar2 = *(long *)(*local_78[0] + 8);
  *(undefined8 *)(puVar20 + 0xc) = 0;
  *(undefined1 (**) [16])(puVar20 + 0x10) = local_78[0];
  *(long *)(puVar20 + 0xe) = lVar2;
  if (lVar2 != 0) {
    *(undefined4 **)(lVar2 + 0x30) = puVar20;
  }
  lVar2 = *(long *)*local_78[0];
  *(undefined4 **)(*local_78[0] + 8) = puVar20;
  if (lVar2 == 0) {
    *(undefined4 **)*local_78[0] = puVar20;
  }
  *(int *)local_78[0][1] = *(int *)local_78[0][1] + 1;
  if (local_c8 != 0) {
    LOCK();
    plVar1 = (long *)(local_c8 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_c8 = 0;
      Memory::free_static((void *)(lVar22 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_e0._8_8_ != 0)) {
    StringName::unref();
  }
  uVar18 = local_e0._0_8_;
  if (local_e0._0_8_ != 0) {
    LOCK();
    plVar1 = (long *)(local_e0._0_8_ + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      auVar4._8_8_ = 0;
      auVar4._0_8_ = local_e0._8_8_;
      local_e0 = auVar4 << 0x40;
      Memory::free_static((void *)(uVar18 + -0x10),false);
    }
  }
  Vector<int>::push_back(local_58,0);
  local_110 = 0;
  local_108 = 0;
  local_e8 = "";
  auVar5._8_8_ = 0;
  auVar5._0_8_ = local_e0._8_8_;
  local_e0 = auVar5 << 0x40;
  String::parse_latin1((StrRange *)&local_108);
  local_e8 = (char *)CONCAT44(local_e8._4_4_,0x1c);
  local_d0 = 0;
  local_c8 = 0;
  local_e0 = (undefined1  [16])0x0;
  if (local_108 == 0) {
LAB_00102613:
    local_c0 = 6;
    StringName::operator=(this,(StringName *)&local_110);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_c8,(CowData *)&local_108);
    local_c0 = 6;
    if (local_d0 != 0x11) goto LAB_00102613;
    StringName::StringName((StringName *)&local_100,(String *)&local_c8,false);
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
  if ((StringName::configured != '\0') && (local_110 != 0)) {
    StringName::unref();
  }
  if (local_78[0] == (undefined1 (*) [16])0x0) {
    local_78[0] = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined4 *)local_78[0][1] = 0;
    *local_78[0] = (undefined1  [16])0x0;
  }
  puVar20 = (undefined4 *)operator_new(0x48,DefaultAllocator::alloc);
  *(undefined8 *)(puVar20 + 8) = 0;
  *(undefined1 (*) [16])(puVar20 + 2) = (undefined1  [16])0x0;
  *puVar20 = 0;
  puVar20[6] = 0;
  puVar20[10] = 6;
  *(undefined8 *)(puVar20 + 0x10) = 0;
  *(undefined1 (*) [16])(puVar20 + 0xc) = (undefined1  [16])0x0;
  *puVar20 = local_e8._0_4_;
  if (local_e0._0_8_ != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar20 + 2),(CowData *)local_e0);
  }
  StringName::operator=((StringName *)(puVar20 + 4),this);
  puVar20[6] = local_d0;
  if (*(long *)(puVar20 + 8) != local_c8) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar20 + 8),(CowData *)&local_c8);
  }
  lVar22 = local_c8;
  puVar20[10] = local_c0;
  lVar2 = *(long *)(*local_78[0] + 8);
  *(undefined8 *)(puVar20 + 0xc) = 0;
  *(undefined1 (**) [16])(puVar20 + 0x10) = local_78[0];
  *(long *)(puVar20 + 0xe) = lVar2;
  if (lVar2 != 0) {
    *(undefined4 **)(lVar2 + 0x30) = puVar20;
  }
  lVar2 = *(long *)*local_78[0];
  *(undefined4 **)(*local_78[0] + 8) = puVar20;
  if (lVar2 == 0) {
    *(undefined4 **)*local_78[0] = puVar20;
  }
  *(int *)local_78[0][1] = *(int *)local_78[0][1] + 1;
  if (local_c8 != 0) {
    LOCK();
    plVar1 = (long *)(local_c8 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_c8 = 0;
      Memory::free_static((void *)(lVar22 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_e0._8_8_ != 0)) {
    StringName::unref();
  }
  uVar18 = local_e0._0_8_;
  if (local_e0._0_8_ != 0) {
    LOCK();
    plVar1 = (long *)(local_e0._0_8_ + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      auVar6._8_8_ = 0;
      auVar6._0_8_ = local_e0._8_8_;
      local_e0 = auVar6 << 0x40;
      Memory::free_static((void *)(uVar18 + -0x10),false);
    }
  }
  Vector<int>::push_back(local_58,0);
  local_100 = 0;
  local_e8 = "EngineProfiler";
  local_e0._0_8_ = 0xe;
  String::parse_latin1((StrRange *)&local_100);
  StringName::StringName((StringName *)&local_e8,(String *)&local_100,false);
  ClassDB::add_virtual_method
            ((StringName *)&local_e8,(MethodInfo *)&local_b8,true,(Vector *)local_f8,false);
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
  piVar19 = local_68;
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
      lVar22 = 0;
      local_68 = (int *)0x0;
      piVar21 = piVar19;
      if (lVar2 != 0) {
        do {
          if (Variant::needs_deinit[*piVar21] != '\0') {
            Variant::_clear_internal();
          }
          lVar22 = lVar22 + 1;
          piVar21 = piVar21 + 6;
        } while (lVar2 != lVar22);
      }
      Memory::free_static(piVar19 + -4,false);
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
  if ((StringName::configured != '\0') && (local_a8._8_8_ != 0)) {
    StringName::unref();
  }
  uVar18 = local_a8._0_8_;
  if (local_a8._0_8_ != 0) {
    LOCK();
    plVar1 = (long *)(local_a8._0_8_ + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      auVar7._8_8_ = 0;
      auVar7._0_8_ = local_a8._8_8_;
      local_a8 = auVar7 << 0x40;
      Memory::free_static((void *)(uVar18 + -0x10),false);
    }
  }
  pcVar17 = local_b8;
  if (local_b8 != (char *)0x0) {
    LOCK();
    plVar1 = (long *)((long)local_b8 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_b8 = (char *)0x0;
      Memory::free_static((void *)((long)pcVar17 + -0x10),false);
    }
  }
  CowData<String>::_unref((CowData<String> *)&local_f0);
  local_b8 = "data";
  local_f0 = 0;
  local_e8 = (char *)0x0;
  local_b0 = 4;
  String::parse_latin1((StrRange *)&local_e8);
  local_b8 = (char *)0x0;
  plVar1 = (long *)((long)local_e8 + -0x10);
  if (local_e8 == (char *)0x0) {
    Vector<String>::push_back(local_f8);
  }
  else {
    do {
      lVar2 = *plVar1;
      if (lVar2 == 0) goto LAB_0010132c;
      LOCK();
      lVar22 = *plVar1;
      bVar23 = lVar2 == lVar22;
      if (bVar23) {
        *plVar1 = lVar2 + 1;
        lVar22 = lVar2;
      }
      UNLOCK();
    } while (!bVar23);
    if (lVar22 != -1) {
      local_b8 = local_e8;
    }
LAB_0010132c:
    pcVar17 = local_b8;
    Vector<String>::push_back(local_f8);
    if (pcVar17 != (char *)0x0) {
      LOCK();
      plVar1 = (long *)((long)pcVar17 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        Memory::free_static((void *)((long)local_b8 + -0x10),false);
      }
    }
  }
  pcVar17 = local_e8;
  if (local_e8 != (char *)0x0) {
    LOCK();
    plVar1 = (long *)((long)local_e8 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_e8 = (char *)0x0;
      Memory::free_static((void *)((long)pcVar17 + -0x10),false);
    }
  }
  local_a8 = (undefined1  [16])0x0;
  local_e8 = "_add_frame";
  local_b8 = (char *)0x0;
  local_b0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 6;
  local_80 = 1;
  local_78[0] = (undefined1 (*) [16])0x0;
  local_68 = (int *)0x0;
  local_60 = 0;
  local_50 = 0;
  local_e0._0_8_ = 10;
  String::parse_latin1((StrRange *)&local_b8);
  local_80 = CONCAT44(local_80._4_4_,8);
  local_110 = 0;
  local_108 = 0;
  local_e8 = "";
  auVar16._8_8_ = 0;
  auVar16._0_8_ = local_e0._8_8_;
  local_e0 = auVar16 << 0x40;
  String::parse_latin1((StrRange *)&local_108);
  local_e8 = (char *)CONCAT44(local_e8._4_4_,0x1c);
  local_d0 = 0;
  local_c8 = 0;
  local_e0 = (undefined1  [16])0x0;
  if (local_108 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_c8,(CowData *)&local_108);
    local_c0 = 6;
    if (local_d0 == 0x11) {
      StringName::StringName((StringName *)&local_100,(String *)&local_c8,false);
      if (local_e0._8_8_ == local_100) {
        if ((StringName::configured != '\0') && (local_100 != 0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        local_e0._8_8_ = local_100;
      }
      goto LAB_0010151c;
    }
  }
  local_c0 = 6;
  StringName::operator=(this,(StringName *)&local_110);
LAB_0010151c:
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
  if ((StringName::configured != '\0') && (local_110 != 0)) {
    StringName::unref();
  }
  if (local_78[0] == (undefined1 (*) [16])0x0) {
    local_78[0] = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined4 *)local_78[0][1] = 0;
    *local_78[0] = (undefined1  [16])0x0;
  }
  puVar20 = (undefined4 *)operator_new(0x48,DefaultAllocator::alloc);
  *(undefined8 *)(puVar20 + 8) = 0;
  *(undefined1 (*) [16])(puVar20 + 2) = (undefined1  [16])0x0;
  *puVar20 = 0;
  puVar20[6] = 0;
  puVar20[10] = 6;
  *(undefined8 *)(puVar20 + 0x10) = 0;
  *(undefined1 (*) [16])(puVar20 + 0xc) = (undefined1  [16])0x0;
  *puVar20 = local_e8._0_4_;
  if (local_e0._0_8_ != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar20 + 2),(CowData *)local_e0);
  }
  StringName::operator=((StringName *)(puVar20 + 4),this);
  puVar20[6] = local_d0;
  if (*(long *)(puVar20 + 8) != local_c8) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar20 + 8),(CowData *)&local_c8);
  }
  lVar22 = local_c8;
  puVar20[10] = local_c0;
  lVar2 = *(long *)(*local_78[0] + 8);
  *(undefined8 *)(puVar20 + 0xc) = 0;
  *(undefined1 (**) [16])(puVar20 + 0x10) = local_78[0];
  *(long *)(puVar20 + 0xe) = lVar2;
  if (lVar2 != 0) {
    *(undefined4 **)(lVar2 + 0x30) = puVar20;
  }
  lVar2 = *(long *)*local_78[0];
  *(undefined4 **)(*local_78[0] + 8) = puVar20;
  if (lVar2 == 0) {
    *(undefined4 **)*local_78[0] = puVar20;
  }
  *(int *)local_78[0][1] = *(int *)local_78[0][1] + 1;
  if (local_c8 != 0) {
    LOCK();
    plVar1 = (long *)(local_c8 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_c8 = 0;
      Memory::free_static((void *)(lVar22 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_e0._8_8_ != 0)) {
    StringName::unref();
  }
  uVar18 = local_e0._0_8_;
  if (local_e0._0_8_ != 0) {
    LOCK();
    plVar1 = (long *)(local_e0._0_8_ + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      auVar8._8_8_ = 0;
      auVar8._0_8_ = local_e0._8_8_;
      local_e0 = auVar8 << 0x40;
      Memory::free_static((void *)(uVar18 + -0x10),false);
    }
  }
  Vector<int>::push_back(local_58,0);
  local_100 = 0;
  local_e8 = "EngineProfiler";
  local_e0._0_8_ = 0xe;
  String::parse_latin1((StrRange *)&local_100);
  StringName::StringName((StringName *)&local_e8,(String *)&local_100,false);
  ClassDB::add_virtual_method
            ((StringName *)&local_e8,(MethodInfo *)&local_b8,true,(Vector *)local_f8,false);
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
  piVar19 = local_68;
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
      lVar22 = 0;
      local_68 = (int *)0x0;
      piVar21 = piVar19;
      if (lVar2 != 0) {
        do {
          if (Variant::needs_deinit[*piVar21] != '\0') {
            Variant::_clear_internal();
          }
          lVar22 = lVar22 + 1;
          piVar21 = piVar21 + 6;
        } while (lVar2 != lVar22);
      }
      Memory::free_static(piVar19 + -4,false);
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
  if ((StringName::configured != '\0') && (local_a8._8_8_ != 0)) {
    StringName::unref();
  }
  uVar18 = local_a8._0_8_;
  if (local_a8._0_8_ != 0) {
    LOCK();
    plVar1 = (long *)(local_a8._0_8_ + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      auVar9._8_8_ = 0;
      auVar9._0_8_ = local_a8._8_8_;
      local_a8 = auVar9 << 0x40;
      Memory::free_static((void *)(uVar18 + -0x10),false);
    }
  }
  pcVar17 = local_b8;
  if (local_b8 != (char *)0x0) {
    LOCK();
    plVar1 = (long *)((long)local_b8 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_b8 = (char *)0x0;
      Memory::free_static((void *)((long)pcVar17 + -0x10),false);
    }
  }
  CowData<String>::_unref((CowData<String> *)&local_f0);
  local_b8 = "frame_time";
  local_f0 = 0;
  local_e8 = (char *)0x0;
  local_b0 = 10;
  String::parse_latin1((StrRange *)&local_e8);
  local_b8 = (char *)0x0;
  plVar1 = (long *)((long)local_e8 + -0x10);
  if (local_e8 == (char *)0x0) {
    Vector<String>::push_back(local_f8,(StrRange *)&local_b8);
  }
  else {
    do {
      lVar2 = *plVar1;
      if (lVar2 == 0) goto LAB_001019bb;
      LOCK();
      lVar22 = *plVar1;
      bVar23 = lVar2 == lVar22;
      if (bVar23) {
        *plVar1 = lVar2 + 1;
        lVar22 = lVar2;
      }
      UNLOCK();
    } while (!bVar23);
    if (lVar22 != -1) {
      local_b8 = local_e8;
    }
LAB_001019bb:
    pcVar17 = local_b8;
    Vector<String>::push_back(local_f8);
    if (pcVar17 != (char *)0x0) {
      LOCK();
      plVar1 = (long *)((long)pcVar17 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        Memory::free_static((void *)((long)local_b8 + -0x10),false);
      }
    }
  }
  local_110 = 0;
  local_b8 = "process_time";
  local_b0 = 0xc;
  String::parse_latin1((StrRange *)&local_110);
  local_b8 = (char *)0x0;
  plVar1 = (long *)(local_110 + -0x10);
  if (local_110 == 0) {
    Vector<String>::push_back(local_f8,(StrRange *)&local_b8);
  }
  else {
    do {
      lVar2 = *plVar1;
      if (lVar2 == 0) goto LAB_00101a63;
      LOCK();
      lVar22 = *plVar1;
      bVar23 = lVar2 == lVar22;
      if (bVar23) {
        *plVar1 = lVar2 + 1;
        lVar22 = lVar2;
      }
      UNLOCK();
    } while (!bVar23);
    if (lVar22 != -1) {
      local_b8 = (char *)local_110;
    }
LAB_00101a63:
    pcVar17 = local_b8;
    Vector<String>::push_back(local_f8);
    if (pcVar17 != (char *)0x0) {
      LOCK();
      plVar1 = (long *)((long)pcVar17 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        Memory::free_static((void *)((long)local_b8 + -0x10),false);
      }
    }
  }
  local_100 = 0;
  local_b8 = "physics_time";
  local_b0 = 0xc;
  String::parse_latin1((StrRange *)&local_100);
  local_b8 = (char *)0x0;
  plVar1 = (long *)(local_100 + -0x10);
  if (local_100 == 0) {
    Vector<String>::push_back(local_f8,(StrRange *)&local_b8);
  }
  else {
    do {
      lVar2 = *plVar1;
      if (lVar2 == 0) goto LAB_00101b0b;
      LOCK();
      lVar22 = *plVar1;
      bVar23 = lVar2 == lVar22;
      if (bVar23) {
        *plVar1 = lVar2 + 1;
        lVar22 = lVar2;
      }
      UNLOCK();
    } while (!bVar23);
    if (lVar22 != -1) {
      local_b8 = (char *)local_100;
    }
LAB_00101b0b:
    pcVar17 = local_b8;
    Vector<String>::push_back(local_f8);
    if (pcVar17 != (char *)0x0) {
      LOCK();
      plVar1 = (long *)((long)pcVar17 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        Memory::free_static((void *)((long)local_b8 + -0x10),false);
      }
    }
  }
  local_108 = 0;
  local_b8 = "physics_frame_time";
  local_b0 = 0x12;
  String::parse_latin1((StrRange *)&local_108);
  local_b8 = (char *)0x0;
  plVar1 = (long *)(local_108 + -0x10);
  if (local_108 == 0) {
    Vector<String>::push_back(local_f8);
  }
  else {
    do {
      lVar2 = *plVar1;
      if (lVar2 == 0) goto LAB_00101bb3;
      LOCK();
      lVar22 = *plVar1;
      bVar23 = lVar2 == lVar22;
      if (bVar23) {
        *plVar1 = lVar2 + 1;
        lVar22 = lVar2;
      }
      UNLOCK();
    } while (!bVar23);
    if (lVar22 != -1) {
      local_b8 = (char *)local_108;
    }
LAB_00101bb3:
    pcVar17 = local_b8;
    Vector<String>::push_back(local_f8);
    if (pcVar17 != (char *)0x0) {
      LOCK();
      plVar1 = (long *)((long)pcVar17 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        Memory::free_static((void *)((long)local_b8 + -0x10),false);
      }
    }
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
  pcVar17 = local_e8;
  if (local_e8 != (char *)0x0) {
    LOCK();
    plVar1 = (long *)((long)local_e8 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_e8 = (char *)0x0;
      Memory::free_static((void *)((long)pcVar17 + -0x10),false);
    }
  }
  local_e8 = "_tick";
  local_a8 = (undefined1  [16])0x0;
  local_b8 = (char *)0x0;
  local_b0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 6;
  local_80 = 1;
  local_78[0] = (undefined1 (*) [16])0x0;
  local_68 = (int *)0x0;
  local_60 = 0;
  local_50 = 0;
  local_e0._0_8_ = 5;
  String::parse_latin1((StrRange *)&local_b8);
  local_80 = CONCAT44(local_80._4_4_,8);
  GetTypeInfo<double,void>::get_class_info((GetTypeInfo<double,void> *)&local_e8);
  if (local_78[0] == (undefined1 (*) [16])0x0) {
    local_78[0] = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined4 *)local_78[0][1] = 0;
    *local_78[0] = (undefined1  [16])0x0;
  }
  puVar20 = (undefined4 *)operator_new(0x48,DefaultAllocator::alloc);
  *(undefined8 *)(puVar20 + 8) = 0;
  *(undefined1 (*) [16])(puVar20 + 2) = (undefined1  [16])0x0;
  *puVar20 = 0;
  puVar20[6] = 0;
  puVar20[10] = 6;
  *(undefined8 *)(puVar20 + 0x10) = 0;
  *(undefined1 (*) [16])(puVar20 + 0xc) = (undefined1  [16])0x0;
  *puVar20 = local_e8._0_4_;
  if (local_e0._0_8_ != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar20 + 2),(CowData *)local_e0);
  }
  StringName::operator=((StringName *)(puVar20 + 4),this);
  puVar20[6] = local_d0;
  if (*(long *)(puVar20 + 8) != local_c8) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar20 + 8),(CowData *)&local_c8);
  }
  lVar22 = local_c8;
  puVar20[10] = local_c0;
  lVar2 = *(long *)(*local_78[0] + 8);
  *(undefined8 *)(puVar20 + 0xc) = 0;
  *(undefined1 (**) [16])(puVar20 + 0x10) = local_78[0];
  *(long *)(puVar20 + 0xe) = lVar2;
  if (lVar2 != 0) {
    *(undefined4 **)(lVar2 + 0x30) = puVar20;
  }
  lVar2 = *(long *)*local_78[0];
  *(undefined4 **)(*local_78[0] + 8) = puVar20;
  if (lVar2 == 0) {
    *(undefined4 **)*local_78[0] = puVar20;
  }
  *(int *)local_78[0][1] = *(int *)local_78[0][1] + 1;
  if (local_c8 != 0) {
    LOCK();
    plVar1 = (long *)(local_c8 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_c8 = 0;
      Memory::free_static((void *)(lVar22 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_e0._8_8_ != 0)) {
    StringName::unref();
  }
  uVar18 = local_e0._0_8_;
  if (local_e0._0_8_ != 0) {
    LOCK();
    plVar1 = (long *)(local_e0._0_8_ + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      auVar10._8_8_ = 0;
      auVar10._0_8_ = local_e0._8_8_;
      local_e0 = auVar10 << 0x40;
      Memory::free_static((void *)(uVar18 + -0x10),false);
    }
  }
  Vector<int>::push_back(local_58,10);
  GetTypeInfo<double,void>::get_class_info((GetTypeInfo<double,void> *)&local_e8);
  if (local_78[0] == (undefined1 (*) [16])0x0) {
    local_78[0] = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined4 *)local_78[0][1] = 0;
    *local_78[0] = (undefined1  [16])0x0;
  }
  puVar20 = (undefined4 *)operator_new(0x48,DefaultAllocator::alloc);
  *(undefined8 *)(puVar20 + 8) = 0;
  *(undefined1 (*) [16])(puVar20 + 2) = (undefined1  [16])0x0;
  *puVar20 = 0;
  puVar20[6] = 0;
  puVar20[10] = 6;
  *(undefined8 *)(puVar20 + 0x10) = 0;
  *(undefined1 (*) [16])(puVar20 + 0xc) = (undefined1  [16])0x0;
  *puVar20 = local_e8._0_4_;
  if (local_e0._0_8_ != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar20 + 2),(CowData *)local_e0);
  }
  StringName::operator=((StringName *)(puVar20 + 4),this);
  puVar20[6] = local_d0;
  if (*(long *)(puVar20 + 8) != local_c8) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar20 + 8),(CowData *)&local_c8);
  }
  lVar22 = local_c8;
  puVar20[10] = local_c0;
  lVar2 = *(long *)(*local_78[0] + 8);
  *(undefined8 *)(puVar20 + 0xc) = 0;
  *(undefined1 (**) [16])(puVar20 + 0x10) = local_78[0];
  *(long *)(puVar20 + 0xe) = lVar2;
  if (lVar2 != 0) {
    *(undefined4 **)(lVar2 + 0x30) = puVar20;
  }
  lVar2 = *(long *)*local_78[0];
  *(undefined4 **)(*local_78[0] + 8) = puVar20;
  if (lVar2 == 0) {
    *(undefined4 **)*local_78[0] = puVar20;
  }
  *(int *)local_78[0][1] = *(int *)local_78[0][1] + 1;
  if (local_c8 != 0) {
    LOCK();
    plVar1 = (long *)(local_c8 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_c8 = 0;
      Memory::free_static((void *)(lVar22 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_e0._8_8_ != 0)) {
    StringName::unref();
  }
  uVar18 = local_e0._0_8_;
  if (local_e0._0_8_ != 0) {
    LOCK();
    plVar1 = (long *)(local_e0._0_8_ + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      auVar11._8_8_ = 0;
      auVar11._0_8_ = local_e0._8_8_;
      local_e0 = auVar11 << 0x40;
      Memory::free_static((void *)(uVar18 + -0x10),false);
    }
  }
  Vector<int>::push_back(local_58,10);
  GetTypeInfo<double,void>::get_class_info((GetTypeInfo<double,void> *)&local_e8);
  if (local_78[0] == (undefined1 (*) [16])0x0) {
    local_78[0] = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined4 *)local_78[0][1] = 0;
    *local_78[0] = (undefined1  [16])0x0;
  }
  puVar20 = (undefined4 *)operator_new(0x48,DefaultAllocator::alloc);
  *(undefined8 *)(puVar20 + 8) = 0;
  *(undefined1 (*) [16])(puVar20 + 2) = (undefined1  [16])0x0;
  *puVar20 = 0;
  puVar20[6] = 0;
  puVar20[10] = 6;
  *(undefined8 *)(puVar20 + 0x10) = 0;
  *(undefined1 (*) [16])(puVar20 + 0xc) = (undefined1  [16])0x0;
  *puVar20 = local_e8._0_4_;
  if (local_e0._0_8_ != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar20 + 2),(CowData *)local_e0);
  }
  StringName::operator=((StringName *)(puVar20 + 4),this);
  puVar20[6] = local_d0;
  if (*(long *)(puVar20 + 8) != local_c8) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar20 + 8),(CowData *)&local_c8);
  }
  lVar22 = local_c8;
  puVar20[10] = local_c0;
  lVar2 = *(long *)(*local_78[0] + 8);
  *(undefined8 *)(puVar20 + 0xc) = 0;
  *(undefined1 (**) [16])(puVar20 + 0x10) = local_78[0];
  *(long *)(puVar20 + 0xe) = lVar2;
  if (lVar2 != 0) {
    *(undefined4 **)(lVar2 + 0x30) = puVar20;
  }
  lVar2 = *(long *)*local_78[0];
  *(undefined4 **)(*local_78[0] + 8) = puVar20;
  if (lVar2 == 0) {
    *(undefined4 **)*local_78[0] = puVar20;
  }
  *(int *)local_78[0][1] = *(int *)local_78[0][1] + 1;
  if (local_c8 != 0) {
    LOCK();
    plVar1 = (long *)(local_c8 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_c8 = 0;
      Memory::free_static((void *)(lVar22 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_e0._8_8_ != 0)) {
    StringName::unref();
  }
  uVar18 = local_e0._0_8_;
  if (local_e0._0_8_ != 0) {
    LOCK();
    plVar1 = (long *)(local_e0._0_8_ + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      auVar12._8_8_ = 0;
      auVar12._0_8_ = local_e0._8_8_;
      local_e0 = auVar12 << 0x40;
      Memory::free_static((void *)(uVar18 + -0x10),false);
    }
  }
  Vector<int>::push_back(local_58,10);
  GetTypeInfo<double,void>::get_class_info((GetTypeInfo<double,void> *)&local_e8);
  if (local_78[0] == (undefined1 (*) [16])0x0) {
    local_78[0] = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined4 *)local_78[0][1] = 0;
    *local_78[0] = (undefined1  [16])0x0;
  }
  puVar20 = (undefined4 *)operator_new(0x48,DefaultAllocator::alloc);
  *(undefined8 *)(puVar20 + 8) = 0;
  *(undefined1 (*) [16])(puVar20 + 2) = (undefined1  [16])0x0;
  *puVar20 = 0;
  puVar20[6] = 0;
  puVar20[10] = 6;
  *(undefined8 *)(puVar20 + 0x10) = 0;
  *(undefined1 (*) [16])(puVar20 + 0xc) = (undefined1  [16])0x0;
  *puVar20 = local_e8._0_4_;
  if (local_e0._0_8_ != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar20 + 2),(CowData *)local_e0);
  }
  StringName::operator=((StringName *)(puVar20 + 4),this);
  puVar20[6] = local_d0;
  if (*(long *)(puVar20 + 8) != local_c8) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar20 + 8),(CowData *)&local_c8);
  }
  lVar22 = local_c8;
  puVar20[10] = local_c0;
  lVar2 = *(long *)(*local_78[0] + 8);
  *(undefined8 *)(puVar20 + 0xc) = 0;
  *(undefined1 (**) [16])(puVar20 + 0x10) = local_78[0];
  *(long *)(puVar20 + 0xe) = lVar2;
  if (lVar2 != 0) {
    *(undefined4 **)(lVar2 + 0x30) = puVar20;
  }
  lVar2 = *(long *)*local_78[0];
  *(undefined4 **)(*local_78[0] + 8) = puVar20;
  if (lVar2 == 0) {
    *(undefined4 **)*local_78[0] = puVar20;
  }
  *(int *)local_78[0][1] = *(int *)local_78[0][1] + 1;
  if (local_c8 != 0) {
    LOCK();
    plVar1 = (long *)(local_c8 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_c8 = 0;
      Memory::free_static((void *)(lVar22 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_e0._8_8_ != 0)) {
    StringName::unref();
  }
  uVar18 = local_e0._0_8_;
  if (local_e0._0_8_ != 0) {
    LOCK();
    plVar1 = (long *)(local_e0._0_8_ + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      auVar13._8_8_ = 0;
      auVar13._0_8_ = local_e0._8_8_;
      local_e0 = auVar13 << 0x40;
      Memory::free_static((void *)(uVar18 + -0x10),false);
    }
  }
  Vector<int>::push_back(local_58,10);
  local_e8 = "EngineProfiler";
  local_100 = 0;
  local_e0._0_8_ = 0xe;
  String::parse_latin1((StrRange *)&local_100);
  StringName::StringName((StringName *)&local_e8,(String *)&local_100,false);
  ClassDB::add_virtual_method
            ((StringName *)&local_e8,(MethodInfo *)&local_b8,true,(Vector *)local_f8,false);
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
  piVar19 = local_68;
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
      lVar22 = 0;
      local_68 = (int *)0x0;
      piVar21 = piVar19;
      if (lVar2 != 0) {
        do {
          if (Variant::needs_deinit[*piVar21] != '\0') {
            Variant::_clear_internal();
          }
          lVar22 = lVar22 + 1;
          piVar21 = piVar21 + 6;
        } while (lVar2 != lVar22);
      }
      Memory::free_static(piVar19 + -4,false);
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
  if ((StringName::configured != '\0') && (local_a8._8_8_ != 0)) {
    StringName::unref();
  }
  uVar18 = local_a8._0_8_;
  if (local_a8._0_8_ != 0) {
    LOCK();
    plVar1 = (long *)(local_a8._0_8_ + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      auVar14._8_8_ = 0;
      auVar14._0_8_ = local_a8._8_8_;
      local_a8 = auVar14 << 0x40;
      Memory::free_static((void *)(uVar18 + -0x10),false);
    }
  }
  pcVar17 = local_b8;
  if (local_b8 != (char *)0x0) {
    LOCK();
    plVar1 = (long *)((long)local_b8 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_b8 = (char *)0x0;
      Memory::free_static((void *)((long)pcVar17 + -0x10),false);
    }
  }
  CowData<String>::_unref((CowData<String> *)&local_f0);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* EngineProfiler::tick(double, double, double, double) */

void __thiscall
EngineProfiler::tick
          (EngineProfiler *this,double param_1,double param_2,double param_3,double param_4)

{
  Variant *pVVar1;
  long lVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  code *pcVar8;
  Variant *pVVar9;
  long in_FS_OFFSET;
  double local_198;
  double local_190;
  char *local_188;
  long local_180;
  long local_178;
  undefined4 local_170;
  long local_168;
  undefined4 local_160;
  undefined8 local_158;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined1 local_148 [16];
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined1 (*local_118) [16];
  undefined8 local_108;
  undefined8 local_100;
  Vector<int> local_f8 [8];
  undefined8 local_f0;
  int local_e8 [8];
  Variant *local_c8;
  Variant *pVStack_c0;
  Variant *local_b8;
  Variant *pVStack_b0;
  double *local_a8;
  double *pdStack_a0;
  char **local_98;
  undefined8 *apuStack_90 [3];
  Variant local_78 [24];
  Variant local_60 [24];
  Variant local_48 [8];
  long local_40;
  
  plVar7 = *(long **)(this + 0x98);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (plVar7 != (long *)0x0) {
    local_158._0_4_ = 0;
    local_158._4_4_ = 0;
    uStack_150 = 0;
    Variant::Variant((Variant *)&local_a8,param_1);
    Variant::Variant((Variant *)apuStack_90,param_2);
    Variant::Variant(local_78,param_3);
    Variant::Variant(local_60,param_4);
    local_c8 = (Variant *)&local_a8;
    pVStack_c0 = (Variant *)apuStack_90;
    local_b8 = local_78;
    pVStack_b0 = local_60;
    (**(code **)(*plVar7 + 0x60))(local_e8,plVar7,this + 0x1b8,&local_c8,4,&local_158);
    if (Variant::needs_deinit[local_e8[0]] != '\0') {
      Variant::_clear_internal();
    }
    pVVar9 = local_48;
    if ((int)local_158 == 0) {
      do {
        pVVar1 = pVVar9 + -0x18;
        pVVar9 = pVVar9 + -0x18;
        if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
          Variant::_clear_internal();
        }
      } while (pVVar9 != (Variant *)&local_a8);
      goto LAB_00102b91;
    }
    do {
      pVVar1 = pVVar9 + -0x18;
      pVVar9 = pVVar9 + -0x18;
      if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
        Variant::_clear_internal();
      }
    } while (pVVar9 != (Variant *)&local_a8);
  }
  if ((*(long *)(this + 8) != 0) && (this[0x1c0] == (EngineProfiler)0x0)) {
    local_158._0_4_ = 0;
    local_158._4_4_ = 0;
    local_188 = "_tick";
    local_148 = (undefined1  [16])0x0;
    uStack_150 = 0;
    uStack_14c = 0;
    local_138 = 0;
    local_130 = 0;
    local_128 = 6;
    local_120 = 1;
    local_118 = (undefined1 (*) [16])0x0;
    local_108 = 0;
    local_100 = 0;
    local_f0 = 0;
    local_180 = 5;
    String::parse_latin1((StrRange *)&local_158);
    local_120 = CONCAT44(local_120._4_4_,8);
    GetTypeInfo<double,void>::get_class_info((GetTypeInfo<double,void> *)&local_188);
    if (local_118 == (undefined1 (*) [16])0x0) {
      local_118 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
      *(undefined4 *)local_118[1] = 0;
      *local_118 = (undefined1  [16])0x0;
    }
    puVar4 = (undefined4 *)operator_new(0x48,DefaultAllocator::alloc);
    *(undefined8 *)(puVar4 + 8) = 0;
    *(undefined1 (*) [16])(puVar4 + 2) = (undefined1  [16])0x0;
    *puVar4 = 0;
    puVar4[6] = 0;
    puVar4[10] = 6;
    *(undefined8 *)(puVar4 + 0x10) = 0;
    *(undefined1 (*) [16])(puVar4 + 0xc) = (undefined1  [16])0x0;
    *puVar4 = local_188._0_4_;
    if (local_180 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)(puVar4 + 2),(CowData *)&local_180);
    }
    StringName::operator=((StringName *)(puVar4 + 4),(StringName *)&local_178);
    puVar4[6] = local_170;
    if (*(long *)(puVar4 + 8) != local_168) {
      CowData<char32_t>::_ref((CowData<char32_t> *)(puVar4 + 8),(CowData *)&local_168);
    }
    lVar2 = local_168;
    puVar4[10] = local_160;
    lVar6 = *(long *)(*local_118 + 8);
    *(undefined8 *)(puVar4 + 0xc) = 0;
    *(undefined1 (**) [16])(puVar4 + 0x10) = local_118;
    *(long *)(puVar4 + 0xe) = lVar6;
    if (lVar6 != 0) {
      *(undefined4 **)(lVar6 + 0x30) = puVar4;
    }
    lVar6 = *(long *)*local_118;
    *(undefined4 **)(*local_118 + 8) = puVar4;
    if (lVar6 == 0) {
      *(undefined4 **)*local_118 = puVar4;
    }
    *(int *)local_118[1] = *(int *)local_118[1] + 1;
    if (local_168 != 0) {
      LOCK();
      plVar7 = (long *)(local_168 + -0x10);
      *plVar7 = *plVar7 + -1;
      UNLOCK();
      if (*plVar7 == 0) {
        local_168 = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
    if ((StringName::configured != '\0') && (local_178 != 0)) {
      StringName::unref();
    }
    lVar6 = local_180;
    if (local_180 != 0) {
      LOCK();
      plVar7 = (long *)(local_180 + -0x10);
      *plVar7 = *plVar7 + -1;
      UNLOCK();
      if (*plVar7 == 0) {
        local_180 = 0;
        Memory::free_static((void *)(lVar6 + -0x10),false);
      }
    }
    Vector<int>::push_back(local_f8,10);
    GetTypeInfo<double,void>::get_class_info((GetTypeInfo<double,void> *)&local_188);
    if (local_118 == (undefined1 (*) [16])0x0) {
      local_118 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
      *(undefined4 *)local_118[1] = 0;
      *local_118 = (undefined1  [16])0x0;
    }
    puVar4 = (undefined4 *)operator_new(0x48,DefaultAllocator::alloc);
    *(undefined8 *)(puVar4 + 8) = 0;
    *(undefined1 (*) [16])(puVar4 + 2) = (undefined1  [16])0x0;
    *puVar4 = 0;
    puVar4[6] = 0;
    puVar4[10] = 6;
    *(undefined8 *)(puVar4 + 0x10) = 0;
    *(undefined1 (*) [16])(puVar4 + 0xc) = (undefined1  [16])0x0;
    *puVar4 = local_188._0_4_;
    if (local_180 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)(puVar4 + 2),(CowData *)&local_180);
    }
    StringName::operator=((StringName *)(puVar4 + 4),(StringName *)&local_178);
    puVar4[6] = local_170;
    if (*(long *)(puVar4 + 8) != local_168) {
      CowData<char32_t>::_ref((CowData<char32_t> *)(puVar4 + 8),(CowData *)&local_168);
    }
    lVar2 = local_168;
    puVar4[10] = local_160;
    lVar6 = *(long *)(*local_118 + 8);
    *(undefined8 *)(puVar4 + 0xc) = 0;
    *(undefined1 (**) [16])(puVar4 + 0x10) = local_118;
    *(long *)(puVar4 + 0xe) = lVar6;
    if (lVar6 != 0) {
      *(undefined4 **)(lVar6 + 0x30) = puVar4;
    }
    lVar6 = *(long *)*local_118;
    *(undefined4 **)(*local_118 + 8) = puVar4;
    if (lVar6 == 0) {
      *(undefined4 **)*local_118 = puVar4;
    }
    *(int *)local_118[1] = *(int *)local_118[1] + 1;
    if (local_168 != 0) {
      LOCK();
      plVar7 = (long *)(local_168 + -0x10);
      *plVar7 = *plVar7 + -1;
      UNLOCK();
      if (*plVar7 == 0) {
        local_168 = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
    if ((StringName::configured != '\0') && (local_178 != 0)) {
      StringName::unref();
    }
    lVar6 = local_180;
    if (local_180 != 0) {
      LOCK();
      plVar7 = (long *)(local_180 + -0x10);
      *plVar7 = *plVar7 + -1;
      UNLOCK();
      if (*plVar7 == 0) {
        local_180 = 0;
        Memory::free_static((void *)(lVar6 + -0x10),false);
      }
    }
    Vector<int>::push_back(local_f8,10);
    GetTypeInfo<double,void>::get_class_info((GetTypeInfo<double,void> *)&local_188);
    if (local_118 == (undefined1 (*) [16])0x0) {
      local_118 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
      *(undefined4 *)local_118[1] = 0;
      *local_118 = (undefined1  [16])0x0;
    }
    puVar4 = (undefined4 *)operator_new(0x48,DefaultAllocator::alloc);
    *(undefined8 *)(puVar4 + 8) = 0;
    *(undefined1 (*) [16])(puVar4 + 2) = (undefined1  [16])0x0;
    *puVar4 = 0;
    puVar4[6] = 0;
    puVar4[10] = 6;
    *(undefined8 *)(puVar4 + 0x10) = 0;
    *(undefined1 (*) [16])(puVar4 + 0xc) = (undefined1  [16])0x0;
    *puVar4 = local_188._0_4_;
    if (local_180 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)(puVar4 + 2),(CowData *)&local_180);
    }
    StringName::operator=((StringName *)(puVar4 + 4),(StringName *)&local_178);
    puVar4[6] = local_170;
    if (*(long *)(puVar4 + 8) != local_168) {
      CowData<char32_t>::_ref((CowData<char32_t> *)(puVar4 + 8),(CowData *)&local_168);
    }
    lVar2 = local_168;
    puVar4[10] = local_160;
    lVar6 = *(long *)(*local_118 + 8);
    *(undefined8 *)(puVar4 + 0xc) = 0;
    *(undefined1 (**) [16])(puVar4 + 0x10) = local_118;
    *(long *)(puVar4 + 0xe) = lVar6;
    if (lVar6 != 0) {
      *(undefined4 **)(lVar6 + 0x30) = puVar4;
    }
    lVar6 = *(long *)*local_118;
    *(undefined4 **)(*local_118 + 8) = puVar4;
    if (lVar6 == 0) {
      *(undefined4 **)*local_118 = puVar4;
    }
    *(int *)local_118[1] = *(int *)local_118[1] + 1;
    if (local_168 != 0) {
      LOCK();
      plVar7 = (long *)(local_168 + -0x10);
      *plVar7 = *plVar7 + -1;
      UNLOCK();
      if (*plVar7 == 0) {
        local_168 = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
    if ((StringName::configured != '\0') && (local_178 != 0)) {
      StringName::unref();
    }
    lVar6 = local_180;
    if (local_180 != 0) {
      LOCK();
      plVar7 = (long *)(local_180 + -0x10);
      *plVar7 = *plVar7 + -1;
      UNLOCK();
      if (*plVar7 == 0) {
        local_180 = 0;
        Memory::free_static((void *)(lVar6 + -0x10),false);
      }
    }
    Vector<int>::push_back(local_f8,10);
    GetTypeInfo<double,void>::get_class_info((GetTypeInfo<double,void> *)&local_188);
    if (local_118 == (undefined1 (*) [16])0x0) {
      local_118 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
      *(undefined4 *)local_118[1] = 0;
      *local_118 = (undefined1  [16])0x0;
    }
    puVar4 = (undefined4 *)operator_new(0x48,DefaultAllocator::alloc);
    *(undefined8 *)(puVar4 + 8) = 0;
    *(undefined1 (*) [16])(puVar4 + 2) = (undefined1  [16])0x0;
    *puVar4 = 0;
    puVar4[6] = 0;
    puVar4[10] = 6;
    *(undefined8 *)(puVar4 + 0x10) = 0;
    *(undefined1 (*) [16])(puVar4 + 0xc) = (undefined1  [16])0x0;
    *puVar4 = local_188._0_4_;
    if (local_180 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)(puVar4 + 2),(CowData *)&local_180);
    }
    StringName::operator=((StringName *)(puVar4 + 4),(StringName *)&local_178);
    puVar4[6] = local_170;
    if (*(long *)(puVar4 + 8) != local_168) {
      CowData<char32_t>::_ref((CowData<char32_t> *)(puVar4 + 8),(CowData *)&local_168);
    }
    lVar2 = local_168;
    puVar4[10] = local_160;
    lVar6 = *(long *)(*local_118 + 8);
    *(undefined1 (**) [16])(puVar4 + 0x10) = local_118;
    *(undefined8 *)(puVar4 + 0xc) = 0;
    *(long *)(puVar4 + 0xe) = lVar6;
    if (lVar6 != 0) {
      *(undefined4 **)(lVar6 + 0x30) = puVar4;
    }
    lVar6 = *(long *)*local_118;
    *(undefined4 **)(*local_118 + 8) = puVar4;
    if (lVar6 == 0) {
      *(undefined4 **)*local_118 = puVar4;
    }
    *(int *)local_118[1] = *(int *)local_118[1] + 1;
    if (local_168 != 0) {
      LOCK();
      plVar7 = (long *)(local_168 + -0x10);
      *plVar7 = *plVar7 + -1;
      UNLOCK();
      if (*plVar7 == 0) {
        local_168 = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
    if ((StringName::configured != '\0') && (local_178 != 0)) {
      StringName::unref();
    }
    lVar6 = local_180;
    if (local_180 != 0) {
      LOCK();
      plVar7 = (long *)(local_180 + -0x10);
      *plVar7 = *plVar7 + -1;
      UNLOCK();
      if (*plVar7 == 0) {
        local_180 = 0;
        Memory::free_static((void *)(lVar6 + -0x10),false);
      }
    }
    Vector<int>::push_back(local_f8,10);
    uVar3 = MethodInfo::get_compatibility_hash();
    lVar6 = *(long *)(this + 8);
    *(undefined8 *)(this + 0x1c8) = 0;
    pcVar8 = *(code **)(lVar6 + 0xd8);
    if (((pcVar8 == (code *)0x0) || (*(long *)(lVar6 + 0xe0) == 0)) &&
       (pcVar8 = *(code **)(lVar6 + 0xd0), pcVar8 == (code *)0x0)) {
      local_198 = 0.0;
      String::parse_latin1((String *)&local_198,"EngineProfiler");
      StringName::StringName((StringName *)&local_190,(String *)&local_198,false);
      ClassDB::get_virtual_method_compatibility_hashes
                ((StringName *)&local_188,(StringName *)&local_190);
      if (local_180 == 0) {
        lVar6 = 0;
        CowData<unsigned_int>::_unref((CowData<unsigned_int> *)&local_180);
        if (StringName::configured != '\0') goto LAB_00103360;
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_198);
LAB_0010337d:
        lVar6 = *(long *)(this + 8);
        pcVar8 = *(code **)(lVar6 + 200);
        if (((pcVar8 == (code *)0x0) || (*(long *)(lVar6 + 0xe0) == 0)) &&
           (pcVar8 = *(code **)(lVar6 + 0xc0), pcVar8 == (code *)0x0)) goto LAB_001032b9;
        uVar5 = (*pcVar8)(*(undefined8 *)(lVar6 + 0xa0),this + 0x1b8);
        *(undefined8 *)(this + 0x1c8) = uVar5;
      }
      else {
        lVar6 = *(long *)(local_180 + -8);
        CowData<unsigned_int>::_unref((CowData<unsigned_int> *)&local_180);
        if (StringName::configured != '\0') {
LAB_00103360:
          if (local_190 != 0.0) {
            StringName::unref();
          }
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_198);
        if (lVar6 == 0) goto LAB_0010337d;
      }
      lVar6 = *(long *)(this + 8);
    }
    else {
      uVar5 = (*pcVar8)(*(undefined8 *)(lVar6 + 0xa0),this + 0x1b8,uVar3);
      *(undefined8 *)(this + 0x1c8) = uVar5;
      lVar6 = *(long *)(this + 8);
    }
LAB_001032b9:
    if (*(char *)(lVar6 + 0x29) != '\0') {
      plVar7 = (long *)operator_new(0x18,"");
      *plVar7 = (long)(this + 0x1c8);
      plVar7[1] = (long)(this + 0x1c0);
      plVar7[2] = *(long *)(this + 0x168);
      *(long **)(this + 0x168) = plVar7;
    }
    this[0x1c0] = (EngineProfiler)0x1;
    MethodInfo::~MethodInfo((MethodInfo *)&local_158);
  }
  pcVar8 = *(code **)(this + 0x1c8);
  if (pcVar8 != (code *)0x0) {
    pdStack_a0 = &local_190;
    local_a8 = &local_198;
    apuStack_90[0] = &local_158;
    local_98 = &local_188;
    local_198 = param_1;
    local_190 = param_2;
    local_188 = (char *)param_3;
    local_158 = param_4;
    if (*(code **)(*(long *)(this + 8) + 0xe0) == (code *)0x0) {
      (*pcVar8)(*(undefined8 *)(this + 0x10),&local_a8,0);
    }
    else {
      (**(code **)(*(long *)(this + 8) + 0xe0))
                (*(undefined8 *)(this + 0x10),this + 0x1b8,pcVar8,&local_a8,0);
    }
  }
LAB_00102b91:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* EngineProfiler::add(Array const&) */

void __thiscall EngineProfiler::add(EngineProfiler *this,Array *param_1)

{
  long lVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  code *pcVar7;
  long in_FS_OFFSET;
  Array local_140 [8];
  undefined8 local_138;
  long local_130;
  char *local_128;
  long local_120;
  long local_118;
  undefined4 local_110;
  long local_108;
  undefined4 local_100;
  int local_f8 [4];
  undefined1 local_e8 [16];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined1 (*local_b8) [16];
  undefined8 local_a8;
  undefined8 local_a0;
  Vector<int> local_98 [8];
  undefined8 local_90;
  Variant *local_80;
  int local_78 [8];
  Array *local_58 [3];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Array::Array(local_140,param_1);
  plVar6 = *(long **)(this + 0x98);
  if (plVar6 != (long *)0x0) {
    local_f8[0] = 0;
    local_f8[1] = 0;
    local_f8[2] = 0;
    Variant::Variant((Variant *)local_78,local_140);
    local_80 = (Variant *)local_78;
    (**(code **)(*plVar6 + 0x60))(local_58,plVar6,this + 0x1a0,&local_80,1,local_f8);
    if (Variant::needs_deinit[(int)local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (local_f8[0] == 0) {
      if (Variant::needs_deinit[local_78[0]] != '\0') {
        Variant::_clear_internal();
      }
      goto LAB_001035f3;
    }
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
  }
  if ((*(long *)(this + 8) != 0) && (this[0x1a8] == (EngineProfiler)0x0)) {
    local_f8[0] = 0;
    local_f8[1] = 0;
    local_e8 = (undefined1  [16])0x0;
    local_128 = "_add_frame";
    local_f8[2] = 0;
    local_f8[3] = 0;
    local_d8 = 0;
    local_d0 = 0;
    local_c8 = 6;
    local_c0 = 1;
    local_b8 = (undefined1 (*) [16])0x0;
    local_a8 = 0;
    local_a0 = 0;
    local_90 = 0;
    local_120 = 10;
    String::parse_latin1((StrRange *)local_f8);
    local_c0 = CONCAT44(local_c0._4_4_,8);
    GetTypeInfo<Array,void>::get_class_info((GetTypeInfo<Array,void> *)&local_128);
    if (local_b8 == (undefined1 (*) [16])0x0) {
      local_b8 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
      *(undefined4 *)local_b8[1] = 0;
      *local_b8 = (undefined1  [16])0x0;
    }
    puVar3 = (undefined4 *)operator_new(0x48,DefaultAllocator::alloc);
    *(undefined8 *)(puVar3 + 8) = 0;
    *(undefined1 (*) [16])(puVar3 + 2) = (undefined1  [16])0x0;
    *puVar3 = 0;
    puVar3[6] = 0;
    puVar3[10] = 6;
    *(undefined8 *)(puVar3 + 0x10) = 0;
    *(undefined1 (*) [16])(puVar3 + 0xc) = (undefined1  [16])0x0;
    *puVar3 = local_128._0_4_;
    if (local_120 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)(puVar3 + 2),(CowData *)&local_120);
    }
    StringName::operator=((StringName *)(puVar3 + 4),(StringName *)&local_118);
    puVar3[6] = local_110;
    if (*(long *)(puVar3 + 8) != local_108) {
      CowData<char32_t>::_ref((CowData<char32_t> *)(puVar3 + 8),(CowData *)&local_108);
    }
    lVar1 = local_108;
    puVar3[10] = local_100;
    lVar5 = *(long *)(*local_b8 + 8);
    *(undefined8 *)(puVar3 + 0xc) = 0;
    *(undefined1 (**) [16])(puVar3 + 0x10) = local_b8;
    *(long *)(puVar3 + 0xe) = lVar5;
    if (lVar5 != 0) {
      *(undefined4 **)(lVar5 + 0x30) = puVar3;
    }
    lVar5 = *(long *)*local_b8;
    *(undefined4 **)(*local_b8 + 8) = puVar3;
    if (lVar5 == 0) {
      *(undefined4 **)*local_b8 = puVar3;
    }
    *(int *)local_b8[1] = *(int *)local_b8[1] + 1;
    if (local_108 != 0) {
      LOCK();
      plVar6 = (long *)(local_108 + -0x10);
      *plVar6 = *plVar6 + -1;
      UNLOCK();
      if (*plVar6 == 0) {
        local_108 = 0;
        Memory::free_static((void *)(lVar1 + -0x10),false);
      }
    }
    if ((StringName::configured != '\0') && (local_118 != 0)) {
      StringName::unref();
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
    Vector<int>::push_back(local_98,0);
    uVar2 = MethodInfo::get_compatibility_hash();
    lVar5 = *(long *)(this + 8);
    *(undefined8 *)(this + 0x1b0) = 0;
    pcVar7 = *(code **)(lVar5 + 0xd8);
    if (((pcVar7 == (code *)0x0) || (*(long *)(lVar5 + 0xe0) == 0)) &&
       (pcVar7 = *(code **)(lVar5 + 0xd0), pcVar7 == (code *)0x0)) {
      local_138 = 0;
      String::parse_latin1((String *)&local_138,"EngineProfiler");
      StringName::StringName((StringName *)&local_130,(String *)&local_138,false);
      ClassDB::get_virtual_method_compatibility_hashes
                ((StringName *)&local_128,(StringName *)&local_130);
      if (local_120 == 0) {
        lVar5 = 0;
        CowData<unsigned_int>::_unref((CowData<unsigned_int> *)&local_120);
        if (StringName::configured != '\0') goto LAB_001039d7;
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_138);
LAB_001039f6:
        lVar5 = *(long *)(this + 8);
        pcVar7 = *(code **)(lVar5 + 200);
        if (((pcVar7 == (code *)0x0) || (*(long *)(lVar5 + 0xe0) == 0)) &&
           (pcVar7 = *(code **)(lVar5 + 0xc0), pcVar7 == (code *)0x0)) goto LAB_00103930;
        uVar4 = (*pcVar7)(*(undefined8 *)(lVar5 + 0xa0),this + 0x1a0);
        *(undefined8 *)(this + 0x1b0) = uVar4;
      }
      else {
        lVar5 = *(long *)(local_120 + -8);
        CowData<unsigned_int>::_unref((CowData<unsigned_int> *)&local_120);
        if (StringName::configured != '\0') {
LAB_001039d7:
          if (local_130 != 0) {
            StringName::unref();
          }
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_138);
        if (lVar5 == 0) goto LAB_001039f6;
      }
      lVar5 = *(long *)(this + 8);
    }
    else {
      uVar4 = (*pcVar7)(*(undefined8 *)(lVar5 + 0xa0),this + 0x1a0,uVar2);
      *(undefined8 *)(this + 0x1b0) = uVar4;
      lVar5 = *(long *)(this + 8);
    }
LAB_00103930:
    if (*(char *)(lVar5 + 0x29) != '\0') {
      plVar6 = (long *)operator_new(0x18,"");
      *plVar6 = (long)(this + 0x1b0);
      plVar6[1] = (long)(this + 0x1a8);
      plVar6[2] = *(long *)(this + 0x168);
      *(long **)(this + 0x168) = plVar6;
    }
    this[0x1a8] = (EngineProfiler)0x1;
    MethodInfo::~MethodInfo((MethodInfo *)local_f8);
  }
  if (*(long *)(this + 0x1b0) != 0) {
    Array::Array((Array *)local_f8,local_140);
    local_58[0] = (Array *)local_f8;
    if (*(code **)(*(long *)(this + 8) + 0xe0) == (code *)0x0) {
      (**(code **)(this + 0x1b0))(*(undefined8 *)(this + 0x10),local_58,0);
    }
    else {
      (**(code **)(*(long *)(this + 8) + 0xe0))
                (*(undefined8 *)(this + 0x10),this + 0x1a0,*(undefined8 *)(this + 0x1b0),local_58,0)
      ;
    }
    Array::~Array((Array *)local_f8);
  }
LAB_001035f3:
  Array::~Array(local_140);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* EngineProfiler::toggle(bool, Array const&) */

void __thiscall EngineProfiler::toggle(EngineProfiler *this,bool param_1,Array *param_2)

{
  long lVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  code *pcVar7;
  long in_FS_OFFSET;
  long local_178;
  Array local_160 [8];
  undefined8 local_158;
  long local_150;
  char *local_148;
  long local_140;
  long local_138;
  undefined4 local_130;
  long local_128;
  undefined4 local_120;
  int local_118 [4];
  undefined1 local_108 [16];
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined1 (*local_d8) [16];
  undefined8 local_c8;
  undefined8 local_c0;
  Vector<int> local_b8 [8];
  undefined8 local_b0;
  Variant *local_a8;
  Variant *pVStack_a0;
  int local_98 [8];
  char **local_78;
  Array *pAStack_70;
  int local_60 [8];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Array::Array(local_160,param_2);
  plVar6 = *(long **)(this + 0x98);
  if (plVar6 != (long *)0x0) {
    local_118[0] = 0;
    local_118[1] = 0;
    local_118[2] = 0;
    Variant::Variant((Variant *)&local_78,param_1);
    Variant::Variant((Variant *)local_60,local_160);
    local_a8 = (Variant *)&local_78;
    pVStack_a0 = (Variant *)local_60;
    (**(code **)(*plVar6 + 0x60))(local_98,plVar6,this + 0x188,&local_a8,2,local_118);
    if (Variant::needs_deinit[local_98[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (local_118[0] == 0) {
      if (Variant::needs_deinit[local_60[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[(int)local_78] != '\0') {
        Variant::_clear_internal();
      }
      goto LAB_00103c1a;
    }
    if (Variant::needs_deinit[local_60[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
    }
  }
  if ((*(long *)(this + 8) != 0) && (this[400] == (EngineProfiler)0x0)) {
    local_118[0] = 0;
    local_118[1] = 0;
    local_148 = "_toggle";
    local_108 = (undefined1  [16])0x0;
    local_118[2] = 0;
    local_118[3] = 0;
    local_f8 = 0;
    local_f0 = 0;
    local_e8 = 6;
    local_e0 = 1;
    local_d8 = (undefined1 (*) [16])0x0;
    local_c8 = 0;
    local_c0 = 0;
    local_b0 = 0;
    local_140 = 7;
    String::parse_latin1((StrRange *)local_118);
    local_e0 = CONCAT44(local_e0._4_4_,8);
    GetTypeInfo<bool,void>::get_class_info((GetTypeInfo<bool,void> *)&local_148);
    if (local_d8 == (undefined1 (*) [16])0x0) {
      local_d8 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
      *(undefined4 *)local_d8[1] = 0;
      *local_d8 = (undefined1  [16])0x0;
    }
    puVar3 = (undefined4 *)operator_new(0x48,DefaultAllocator::alloc);
    *(undefined8 *)(puVar3 + 8) = 0;
    *(undefined1 (*) [16])(puVar3 + 2) = (undefined1  [16])0x0;
    *puVar3 = 0;
    puVar3[6] = 0;
    puVar3[10] = 6;
    *(undefined8 *)(puVar3 + 0x10) = 0;
    *(undefined1 (*) [16])(puVar3 + 0xc) = (undefined1  [16])0x0;
    *puVar3 = local_148._0_4_;
    if (local_140 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)(puVar3 + 2),(CowData *)&local_140);
    }
    StringName::operator=((StringName *)(puVar3 + 4),(StringName *)&local_138);
    puVar3[6] = local_130;
    if (*(long *)(puVar3 + 8) != local_128) {
      CowData<char32_t>::_ref((CowData<char32_t> *)(puVar3 + 8),(CowData *)&local_128);
    }
    lVar1 = local_128;
    puVar3[10] = local_120;
    lVar5 = *(long *)(*local_d8 + 8);
    *(undefined8 *)(puVar3 + 0xc) = 0;
    *(undefined1 (**) [16])(puVar3 + 0x10) = local_d8;
    *(long *)(puVar3 + 0xe) = lVar5;
    if (lVar5 != 0) {
      *(undefined4 **)(lVar5 + 0x30) = puVar3;
    }
    lVar5 = *(long *)*local_d8;
    *(undefined4 **)(*local_d8 + 8) = puVar3;
    if (lVar5 == 0) {
      *(undefined4 **)*local_d8 = puVar3;
    }
    *(int *)local_d8[1] = *(int *)local_d8[1] + 1;
    if (local_128 != 0) {
      LOCK();
      plVar6 = (long *)(local_128 + -0x10);
      *plVar6 = *plVar6 + -1;
      UNLOCK();
      if (*plVar6 == 0) {
        local_128 = 0;
        Memory::free_static((void *)(lVar1 + -0x10),false);
      }
    }
    if ((StringName::configured != '\0') && (local_138 != 0)) {
      StringName::unref();
    }
    lVar5 = local_140;
    if (local_140 != 0) {
      LOCK();
      plVar6 = (long *)(local_140 + -0x10);
      *plVar6 = *plVar6 + -1;
      UNLOCK();
      if (*plVar6 == 0) {
        local_140 = 0;
        Memory::free_static((void *)(lVar5 + -0x10),false);
      }
    }
    Vector<int>::push_back(local_b8,0);
    GetTypeInfo<Array,void>::get_class_info((GetTypeInfo<Array,void> *)&local_148);
    if (local_d8 == (undefined1 (*) [16])0x0) {
      local_d8 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
      *(undefined4 *)local_d8[1] = 0;
      *local_d8 = (undefined1  [16])0x0;
    }
    puVar3 = (undefined4 *)operator_new(0x48,DefaultAllocator::alloc);
    *(undefined8 *)(puVar3 + 8) = 0;
    *(undefined1 (*) [16])(puVar3 + 2) = (undefined1  [16])0x0;
    *puVar3 = 0;
    puVar3[6] = 0;
    puVar3[10] = 6;
    *(undefined8 *)(puVar3 + 0x10) = 0;
    *(undefined1 (*) [16])(puVar3 + 0xc) = (undefined1  [16])0x0;
    *puVar3 = local_148._0_4_;
    if (local_140 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)(puVar3 + 2),(CowData *)&local_140);
    }
    StringName::operator=((StringName *)(puVar3 + 4),(StringName *)&local_138);
    puVar3[6] = local_130;
    if (*(long *)(puVar3 + 8) != local_128) {
      CowData<char32_t>::_ref((CowData<char32_t> *)(puVar3 + 8),(CowData *)&local_128);
    }
    lVar1 = local_128;
    puVar3[10] = local_120;
    lVar5 = *(long *)(*local_d8 + 8);
    *(undefined8 *)(puVar3 + 0xc) = 0;
    *(undefined1 (**) [16])(puVar3 + 0x10) = local_d8;
    *(long *)(puVar3 + 0xe) = lVar5;
    if (lVar5 != 0) {
      *(undefined4 **)(lVar5 + 0x30) = puVar3;
    }
    lVar5 = *(long *)*local_d8;
    *(undefined4 **)(*local_d8 + 8) = puVar3;
    if (lVar5 == 0) {
      *(undefined4 **)*local_d8 = puVar3;
    }
    *(int *)local_d8[1] = *(int *)local_d8[1] + 1;
    if (local_128 != 0) {
      LOCK();
      plVar6 = (long *)(local_128 + -0x10);
      *plVar6 = *plVar6 + -1;
      UNLOCK();
      if (*plVar6 == 0) {
        local_128 = 0;
        Memory::free_static((void *)(lVar1 + -0x10),false);
      }
    }
    if ((StringName::configured != '\0') && (local_138 != 0)) {
      StringName::unref();
    }
    lVar5 = local_140;
    if (local_140 != 0) {
      LOCK();
      plVar6 = (long *)(local_140 + -0x10);
      *plVar6 = *plVar6 + -1;
      UNLOCK();
      if (*plVar6 == 0) {
        local_140 = 0;
        Memory::free_static((void *)(lVar5 + -0x10),false);
      }
    }
    Vector<int>::push_back(local_b8,0);
    uVar2 = MethodInfo::get_compatibility_hash();
    lVar5 = *(long *)(this + 8);
    *(undefined8 *)(this + 0x198) = 0;
    pcVar7 = *(code **)(lVar5 + 0xd8);
    if (((pcVar7 == (code *)0x0) || (*(long *)(lVar5 + 0xe0) == 0)) &&
       (pcVar7 = *(code **)(lVar5 + 0xd0), pcVar7 == (code *)0x0)) {
      local_158 = 0;
      String::parse_latin1((String *)&local_158,"EngineProfiler");
      StringName::StringName((StringName *)&local_150,(String *)&local_158,false);
      ClassDB::get_virtual_method_compatibility_hashes
                ((StringName *)&local_148,(StringName *)&local_150);
      if (local_140 == 0) {
        CowData<unsigned_int>::_unref((CowData<unsigned_int> *)&local_140);
        local_178 = 0;
        if (StringName::configured != '\0') goto LAB_001041cd;
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_158);
LAB_001041ec:
        lVar5 = *(long *)(this + 8);
        pcVar7 = *(code **)(lVar5 + 200);
        if (((pcVar7 == (code *)0x0) || (*(long *)(lVar5 + 0xe0) == 0)) &&
           (pcVar7 = *(code **)(lVar5 + 0xc0), pcVar7 == (code *)0x0)) goto LAB_001040fe;
        uVar4 = (*pcVar7)(*(undefined8 *)(lVar5 + 0xa0),this + 0x188);
        *(undefined8 *)(this + 0x198) = uVar4;
      }
      else {
        local_178 = *(long *)(local_140 + -8);
        CowData<unsigned_int>::_unref((CowData<unsigned_int> *)&local_140);
        if (StringName::configured != '\0') {
LAB_001041cd:
          if (local_150 != 0) {
            StringName::unref();
          }
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_158);
        if (local_178 == 0) goto LAB_001041ec;
      }
      lVar5 = *(long *)(this + 8);
    }
    else {
      uVar4 = (*pcVar7)(*(undefined8 *)(lVar5 + 0xa0),this + 0x188,uVar2);
      *(undefined8 *)(this + 0x198) = uVar4;
      lVar5 = *(long *)(this + 8);
    }
LAB_001040fe:
    if (*(char *)(lVar5 + 0x29) != '\0') {
      plVar6 = (long *)operator_new(0x18,"");
      *plVar6 = (long)(this + 0x198);
      plVar6[1] = (long)(this + 400);
      plVar6[2] = *(long *)(this + 0x168);
      *(long **)(this + 0x168) = plVar6;
    }
    this[400] = (EngineProfiler)0x1;
    MethodInfo::~MethodInfo((MethodInfo *)local_118);
  }
  if (*(long *)(this + 0x198) != 0) {
    local_148 = (char *)CONCAT71(local_148._1_7_,param_1);
    Array::Array((Array *)local_118,local_160);
    local_78 = &local_148;
    pAStack_70 = (Array *)local_118;
    if (*(code **)(*(long *)(this + 8) + 0xe0) == (code *)0x0) {
      (**(code **)(this + 0x198))(*(undefined8 *)(this + 0x10),&local_78,0);
    }
    else {
      (**(code **)(*(long *)(this + 8) + 0xe0))
                (*(undefined8 *)(this + 0x10),this + 0x188,*(undefined8 *)(this + 0x198),&local_78,0
                );
    }
    Array::~Array((Array *)local_118);
  }
LAB_00103c1a:
  Array::~Array(local_160);
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



/* RefCounted::is_class_ptr(void*) const */

uint __thiscall RefCounted::is_class_ptr(RefCounted *this,void *param_1)

{
  return (uint)CONCAT71(0x106f,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x106f,(undefined4 *)param_1 == &get_class_ptr_static()::ptr);
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



/* EngineProfiler::is_class_ptr(void*) const */

uint __thiscall EngineProfiler::is_class_ptr(EngineProfiler *this,void *param_1)

{
  return (uint)CONCAT71(0x106f,(undefined4 *)param_1 == &RefCounted::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x106f,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x106f,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* EngineProfiler::_getv(StringName const&, Variant&) const */

undefined8 EngineProfiler::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* EngineProfiler::_setv(StringName const&, Variant const&) */

undefined8 EngineProfiler::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* EngineProfiler::_validate_propertyv(PropertyInfo&) const */

void EngineProfiler::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* EngineProfiler::_property_can_revertv(StringName const&) const */

undefined8 EngineProfiler::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* EngineProfiler::_property_get_revertv(StringName const&, Variant&) const */

undefined8 EngineProfiler::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* EngineProfiler::_notificationv(int, bool) */

void EngineProfiler::_notificationv(int param_1,bool param_2)

{
  return;
}



/* RefCounted::~RefCounted() */

void __thiscall RefCounted::~RefCounted(RefCounted *this)

{
  *(undefined ***)this = &PTR__initialize_classv_00106cd0;
  Object::~Object((Object *)this);
  return;
}



/* RefCounted::~RefCounted() */

void __thiscall RefCounted::~RefCounted(RefCounted *this)

{
  *(undefined ***)this = &PTR__initialize_classv_00106cd0;
  Object::~Object((Object *)this);
  operator_delete(this,0x180);
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



/* EngineProfiler::_bind_methods() [clone .cold] */

void EngineProfiler::_bind_methods(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* EngineProfiler::_get_class_namev() const */

undefined8 * EngineProfiler::_get_class_namev(void)

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
LAB_00104673:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00104673;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"EngineProfiler");
      goto LAB_001046de;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"EngineProfiler");
LAB_001046de:
  return &_get_class_namev()::_class_name_static;
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
LAB_00104753:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00104753;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"RefCounted");
      goto LAB_001047be;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"RefCounted");
LAB_001047be:
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



/* EngineProfiler::get_class() const */

void EngineProfiler::get_class(void)

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
            if (lVar5 == 0) goto LAB_00104a1f;
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
LAB_00104a1f:
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
    if (cVar6 != '\0') goto LAB_00104ad3;
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
              if (lVar5 == 0) goto LAB_00104b83;
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
LAB_00104b83:
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
      if (cVar6 != '\0') goto LAB_00104ad3;
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = String::operator==(param_1,"Object");
      return uVar7;
    }
  }
  else {
LAB_00104ad3:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EngineProfiler::is_class(String const&) const */

undefined8 __thiscall EngineProfiler::is_class(EngineProfiler *this,String *param_1)

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
            if (lVar4 == 0) goto LAB_00104caf;
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
LAB_00104caf:
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
    if (cVar5 != '\0') goto LAB_00104d63;
  }
  cVar5 = String::operator==(param_1,"EngineProfiler");
  if (cVar5 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = RefCounted::is_class((RefCounted *)this,param_1);
      return uVar7;
    }
  }
  else {
LAB_00104d63:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
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
LAB_001050c8:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_001050c8;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)pLVar6;
      local_68 = local_80;
      goto joined_r0x001050e6;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)pLVar6;
joined_r0x001050e6:
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



/* EngineProfiler::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall EngineProfiler::_get_property_listv(EngineProfiler *this,List *param_1,bool param_2)

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
  local_78 = "EngineProfiler";
  local_70 = 0xe;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "EngineProfiler";
  local_98 = 0;
  local_70 = 0xe;
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
LAB_001054c8:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_001054c8;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x001054e5;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x001054e5:
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
  StringName::StringName((StringName *)&local_78,"EngineProfiler",false);
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
  local_48 = &_LC7;
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
      goto joined_r0x0010593c;
    }
  }
  StringName::operator=((StringName *)(this + 0x10),(StringName *)&local_50);
  lVar2 = local_58;
joined_r0x0010593c:
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



/* GetTypeInfo<double, void>::get_class_info() */

GetTypeInfo<double,void> * __thiscall
GetTypeInfo<double,void>::get_class_info(GetTypeInfo<double,void> *this)

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
  local_48 = &_LC7;
  local_40 = 0;
  String::parse_latin1((StrRange *)&local_58);
  *(undefined4 *)this = 3;
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
      goto joined_r0x00105abc;
    }
  }
  StringName::operator=((StringName *)(this + 0x10),(StringName *)&local_50);
  lVar2 = local_58;
joined_r0x00105abc:
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



/* GetTypeInfo<Array, void>::get_class_info() */

GetTypeInfo<Array,void> * __thiscall
GetTypeInfo<Array,void>::get_class_info(GetTypeInfo<Array,void> *this)

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
  local_48 = &_LC7;
  local_40 = 0;
  String::parse_latin1((StrRange *)&local_58);
  *(undefined4 *)this = 0x1c;
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
      goto joined_r0x00105c3c;
    }
  }
  StringName::operator=((StringName *)(this + 0x10),(StringName *)&local_50);
  lVar2 = local_58;
joined_r0x00105c3c:
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



/* CowData<char32_t>::_realloc(long) */

undefined8 __thiscall CowData<char32_t>::_realloc(CowData<char32_t> *this,long param_1)

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
LAB_00106600:
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
  if (lVar10 == 0) goto LAB_00106600;
  if (param_1 <= lVar6) {
    lVar6 = *(long *)this;
    uVar8 = param_1;
    while (lVar6 != 0) {
      if (*(ulong *)(lVar6 + -8) <= uVar8) {
LAB_001064d9:
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
        if (*(ulong *)(lVar6 + -8) <= uVar8) goto LAB_001064d9;
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
    goto LAB_00106656;
  }
  if (lVar10 == lVar7) {
LAB_0010657f:
    puVar9 = *(undefined8 **)this;
    if (puVar9 == (undefined8 *)0x0) {
LAB_00106656:
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    lVar6 = puVar9[-1];
    if (param_1 <= lVar6) goto LAB_0010656a;
  }
  else {
    if (lVar6 != 0) {
      uVar4 = _realloc(this,lVar10);
      if ((int)uVar4 != 0) {
        return uVar4;
      }
      goto LAB_0010657f;
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
LAB_0010656a:
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
LAB_00106920:
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
  if (lVar8 == 0) goto LAB_00106920;
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
        goto LAB_00106831;
      }
      uVar6 = _realloc(this,lVar8);
      if ((int)uVar6 != 0) {
        return uVar6;
      }
    }
    puVar7 = *(undefined8 **)this;
    if (puVar7 != (undefined8 *)0x0) {
LAB_00106831:
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



/* EngineProfiler::_initialize_classv() */

void EngineProfiler::_initialize_classv(void)

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
  if (initialize_class()::initialized != '\0') goto LAB_00106ad9;
  if (RefCounted::initialize_class()::initialized == '\0') {
    Object::initialize_class();
    local_58 = 0;
    local_40 = 6;
    local_48 = "Object";
    String::parse_latin1((StrRange *)&local_58);
    StringName::StringName((StringName *)&local_50,(String *)&local_58,false);
    local_48 = "RefCounted";
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
    if (local_58 == 0) {
LAB_00106bea:
      if ((code *)_GLOBAL_OFFSET_TABLE_ != Object::_bind_methods) {
LAB_00106bfa:
        RefCounted::_bind_methods();
      }
    }
    else {
      LOCK();
      plVar1 = (long *)(local_58 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 != 0) goto LAB_00106bea;
      local_58 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
      if ((code *)_GLOBAL_OFFSET_TABLE_ != Object::_bind_methods) goto LAB_00106bfa;
    }
    RefCounted::initialize_class()::initialized = '\x01';
  }
  local_48 = "RefCounted";
  local_58 = 0;
  local_40 = 10;
  String::parse_latin1((StrRange *)&local_58);
  StringName::StringName((StringName *)&local_50,(String *)&local_58,false);
  local_48 = "EngineProfiler";
  local_60 = 0;
  local_40 = 0xe;
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
LAB_00106ad9:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
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
/* RefCounted::~RefCounted() */

void __thiscall RefCounted::~RefCounted(RefCounted *this)

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



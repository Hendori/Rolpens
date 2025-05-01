
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



/* AnimationNodeExtension::is_looping(Vector<float> const&) */

undefined8 AnimationNodeExtension::is_looping(Vector *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  if ((lVar1 != 0) && (*(long *)(lVar1 + -8) == 6)) {
    return CONCAT71((int7)(CONCAT44((int)((ulong)lVar1 >> 0x20),(int)*(float *)(lVar1 + 0xc)) >> 8),
                    (char)(int)*(float *)(lVar1 + 0xc) != '\0');
  }
  _err_print_error("_array_to_node_time_info","scene/animation/animation_node_extension.cpp",0x3c,
                   "Condition \"p_node_info.size() != 6\" is true. Returning: AnimationNode::NodeTimeInfo()"
                   ,"Invalid node info.",0,0);
  return 0;
}



/* AnimationNodeExtension::get_remaining_time(Vector<float> const&, bool) */

double AnimationNodeExtension::get_remaining_time(Vector *param_1,bool param_2)

{
  float *pfVar1;
  
  pfVar1 = *(float **)(param_1 + 8);
  if ((pfVar1 == (float *)0x0) || (*(long *)(pfVar1 + -2) != 6)) {
    _err_print_error("_array_to_node_time_info","scene/animation/animation_node_extension.cpp",0x3c,
                     "Condition \"p_node_info.size() != 6\" is true. Returning: AnimationNode::NodeTimeInfo()"
                     ,"Invalid node info.",0,0);
    return 0.0;
  }
  if ((char)(int)pfVar1[3] == '\0') {
    if (0.0 < pfVar1[5]) {
      return _LC10;
    }
  }
  else {
    if ((!param_2) || (0.0 < pfVar1[5])) {
      return _LC10;
    }
    if (0.0 < pfVar1[4]) {
      return 0.0;
    }
  }
  if (ABS((double)*pfVar1 - (double)pfVar1[1]) < _LC13) {
    return 0.0;
  }
  return (double)*pfVar1 - (double)pfVar1[1];
}



/* CowData<double>::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<double>::_copy_on_write(CowData<double> *this)

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
  __n = lVar2 * 8;
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



/* AnimationNodeExtension::_array_to_node_time_info(Vector<float> const&) */

void __thiscall
AnimationNodeExtension::_array_to_node_time_info(AnimationNodeExtension *this,Vector *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  puVar5 = *(undefined8 **)(param_1 + 8);
  if ((puVar5 != (undefined8 *)0x0) && (puVar5[-1] == 6)) {
    fVar1 = *(float *)(puVar5 + 2);
    fVar2 = *(float *)((long)puVar5 + 0xc);
    *(double *)(this + 0x10) = (double)*(float *)(puVar5 + 1);
    fVar3 = *(float *)((long)puVar5 + 0x14);
    this[0x18] = SUB41((int)fVar2,0);
    uVar4 = *puVar5;
    *(double *)this = (double)(float)uVar4;
    *(double *)(this + 8) = (double)(float)((ulong)uVar4 >> 0x20);
    this[0x19] = (AnimationNodeExtension)(0.0 < fVar1);
    this[0x1a] = (AnimationNodeExtension)(0.0 < fVar3);
    return;
  }
  _err_print_error("_array_to_node_time_info","scene/animation/animation_node_extension.cpp",0x3c,
                   "Condition \"p_node_info.size() != 6\" is true. Returning: AnimationNode::NodeTimeInfo()"
                   ,"Invalid node info.",0,0);
  *(undefined8 *)(this + 0x10) = 0;
  this[0x18] = (AnimationNodeExtension)0x0;
  *(undefined2 *)(this + 0x19) = 0;
  *(undefined1 (*) [16])this = (undefined1  [16])0x0;
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



/* AnimationNodeExtension::_bind_methods() */

void AnimationNodeExtension::_bind_methods(void)

{
  long *plVar1;
  long lVar2;
  code *pcVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  ulong uVar9;
  char *pcVar10;
  undefined8 uVar11;
  int *piVar12;
  MethodBind *pMVar13;
  undefined4 *puVar14;
  int *piVar15;
  long lVar16;
  StringName *this;
  long in_FS_OFFSET;
  bool bVar17;
  Vector<String> *local_168;
  long local_150;
  long local_148;
  ulong local_140;
  Vector<String> local_138 [8];
  undefined8 local_130;
  char *local_128;
  undefined1 local_120 [16];
  int local_110;
  long local_108;
  undefined4 local_100;
  char *local_f8;
  undefined8 local_f0;
  long local_e8;
  ulong uStack_e0;
  undefined8 local_d8;
  long local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined1 (*local_b8 [2]) [16];
  int *local_a8;
  ulong local_a0;
  Vector<int> local_98 [8];
  long local_90;
  char *local_88;
  undefined8 local_80;
  char *local_78;
  char *pcStack_70;
  undefined8 local_68;
  char **local_58;
  undefined1 auStack_50 [16];
  long local_40;
  
  local_120._8_8_ = local_120._0_8_;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_80 = 0;
  local_88 = "node_info";
  local_58 = &local_88;
  D_METHODP((char *)&local_f8,(char ***)"is_looping",(uint)&local_58);
  StringName::StringName((StringName *)&local_128,"AnimationNodeExtension",false);
  auStack_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar13 = (MethodBind *)operator_new(0x60,"");
  MethodBind::MethodBind(pMVar13);
  *(undefined ***)pMVar13 = &PTR__gen_argument_type_001079b8;
  *(code **)(pMVar13 + 0x58) = is_looping;
  MethodBind::_generate_argument_types((int)pMVar13);
  *(undefined4 *)(pMVar13 + 0x34) = 1;
  MethodBind::_set_static(SUB81(pMVar13,0));
  MethodBind::_set_returns(SUB81(pMVar13,0));
  StringName::operator=((StringName *)(pMVar13 + 0x18),(StringName *)&local_128);
  ClassDB::bind_methodfi(1,pMVar13,false,(MethodDefinition *)&local_f8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_128 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<StringName>::_unref((CowData<StringName> *)&local_e8);
  if ((StringName::configured != '\0') && (local_f8 != (char *)0x0)) {
    StringName::unref();
  }
  local_68 = 0;
  auStack_50._0_8_ = &pcStack_70;
  local_78 = "node_info";
  pcStack_70 = "break_loop";
  local_58 = &local_78;
  D_METHODP((char *)&local_f8,(char ***)"get_remaining_time",(uint)&local_58);
  StringName::StringName((StringName *)&local_128,"AnimationNodeExtension",false);
  auStack_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar13 = (MethodBind *)operator_new(0x60,"");
  MethodBind::MethodBind(pMVar13);
  *(undefined ***)pMVar13 = &PTR__gen_argument_type_00107a18;
  *(code **)(pMVar13 + 0x58) = get_remaining_time;
  MethodBind::_generate_argument_types((int)pMVar13);
  *(undefined4 *)(pMVar13 + 0x34) = 2;
  MethodBind::_set_static(SUB81(pMVar13,0));
  MethodBind::_set_returns(SUB81(pMVar13,0));
  StringName::operator=((StringName *)(pMVar13 + 0x18),(StringName *)&local_128);
  ClassDB::bind_methodfi(1,pMVar13,false,(MethodDefinition *)&local_f8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_128 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<StringName>::_unref((CowData<StringName> *)&local_e8);
  if ((StringName::configured != '\0') && (local_f8 != (char *)0x0)) {
    StringName::unref();
  }
  local_130 = 0;
  local_f8 = "playback_info";
  local_128 = (char *)0x0;
  local_f0 = 0xd;
  String::parse_latin1((StrRange *)&local_128);
  local_f8 = (char *)0x0;
  plVar1 = (long *)((long)local_128 + -0x10);
  if (local_128 == (char *)0x0) {
    Vector<String>::push_back(local_138,(StrRange *)&local_f8);
  }
  else {
    do {
      lVar2 = *plVar1;
      if (lVar2 == 0) goto LAB_00100b86;
      LOCK();
      lVar16 = *plVar1;
      bVar17 = lVar2 == lVar16;
      if (bVar17) {
        *plVar1 = lVar2 + 1;
        lVar16 = lVar2;
      }
      UNLOCK();
    } while (!bVar17);
    if (lVar16 != -1) {
      local_f8 = local_128;
    }
LAB_00100b86:
    pcVar10 = local_f8;
    Vector<String>::push_back(local_138);
    if (pcVar10 != (char *)0x0) {
      LOCK();
      plVar1 = (long *)((long)pcVar10 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        Memory::free_static((void *)((long)local_f8 + -0x10),false);
      }
    }
  }
  local_168 = local_138;
  local_140 = 0;
  local_f8 = "test_only";
  local_f0 = 9;
  String::parse_latin1((StrRange *)&local_140);
  local_f8 = (char *)0x0;
  plVar1 = (long *)(local_140 - 0x10);
  if (local_140 == 0) {
    Vector<String>::push_back(local_168);
  }
  else {
    do {
      lVar2 = *plVar1;
      if (lVar2 == 0) goto LAB_00100c41;
      LOCK();
      lVar16 = *plVar1;
      bVar17 = lVar2 == lVar16;
      if (bVar17) {
        *plVar1 = lVar2 + 1;
        lVar16 = lVar2;
      }
      UNLOCK();
    } while (!bVar17);
    if (lVar16 != -1) {
      local_f8 = (char *)local_140;
    }
LAB_00100c41:
    pcVar10 = local_f8;
    Vector<String>::push_back(local_168);
    if (pcVar10 != (char *)0x0) {
      LOCK();
      plVar1 = (long *)((long)pcVar10 - 0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        Memory::free_static((void *)((long)local_f8 - 0x10),false);
      }
    }
  }
  uVar9 = local_140;
  if (local_140 != 0) {
    LOCK();
    plVar1 = (long *)(local_140 - 0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_140 = 0;
      Memory::free_static((void *)(uVar9 - 0x10),false);
    }
  }
  pcVar10 = local_128;
  if (local_128 != (char *)0x0) {
    LOCK();
    plVar1 = (long *)((long)local_128 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_128 = (char *)0x0;
      Memory::free_static((void *)((long)pcVar10 + -0x10),false);
    }
  }
  local_e8 = 0;
  uStack_e0 = 0;
  local_128 = "_process_animation_node";
  local_f8 = (char *)0x0;
  local_f0 = 0;
  local_d8 = 0;
  local_d0 = 0;
  local_c8 = 6;
  local_c0 = 1;
  local_b8[0] = (undefined1 (*) [16])0x0;
  local_a8 = (int *)0x0;
  local_a0 = 0;
  local_90 = 0;
  local_120._0_8_ = 0x17;
  String::parse_latin1((StrRange *)&local_f8);
  local_c0 = CONCAT44(local_c0._4_4_,0x88);
  local_128 = "";
  local_150 = 0;
  local_148 = 0;
  auVar7._8_8_ = 0;
  auVar7._0_8_ = local_120._8_8_;
  local_120 = auVar7 << 0x40;
  String::parse_latin1((StrRange *)&local_148);
  local_128 = (char *)CONCAT44(local_128._4_4_,0x20);
  local_110 = 0;
  local_108 = 0;
  local_120._0_8_ = 0;
  local_120._8_8_ = 0;
  if (local_148 == 0) {
LAB_001016fb:
    local_100 = 6;
    StringName::operator=((StringName *)(local_120 + 8),(StringName *)&local_150);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_108,(CowData *)&local_148);
    local_100 = 6;
    if (local_110 != 0x11) goto LAB_001016fb;
    StringName::StringName((StringName *)&local_140,(String *)&local_108,false);
    if (local_120._8_8_ == local_140) {
      if ((StringName::configured != '\0') && (local_140 != 0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_120._8_8_ = local_140;
    }
  }
  lVar2 = local_148;
  this = (StringName *)(local_120 + 8);
  if (local_148 != 0) {
    LOCK();
    plVar1 = (long *)(local_148 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_148 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_150 != 0)) {
    StringName::unref();
  }
  lVar2 = local_e8;
  local_f0 = CONCAT44(local_f0._4_4_,local_128._0_4_);
  if (local_e8 != local_120._0_8_) {
    if (local_e8 != 0) {
      LOCK();
      plVar1 = (long *)(local_e8 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_e8 = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
    local_e8 = local_120._0_8_;
    local_120._0_8_ = 0;
  }
  if (uStack_e0 != local_120._8_8_) {
    StringName::unref();
    uStack_e0 = local_120._8_8_;
    local_120._8_8_ = 0;
  }
  lVar16 = local_d0;
  lVar2 = local_108;
  local_d8 = CONCAT44(local_d8._4_4_,local_110);
  if (local_d0 == local_108) {
    local_c8 = CONCAT44(local_c8._4_4_,local_100);
    if (local_d0 != 0) {
      LOCK();
      plVar1 = (long *)(local_d0 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_108 = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
  }
  else {
    if (local_d0 != 0) {
      LOCK();
      plVar1 = (long *)(local_d0 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_d0 = 0;
        Memory::free_static((void *)(lVar16 + -0x10),false);
      }
    }
    local_d0 = local_108;
    local_c8 = CONCAT44(local_c8._4_4_,local_100);
  }
  if ((StringName::configured != '\0') && (local_120._8_8_ != 0)) {
    StringName::unref();
  }
  uVar11 = local_120._0_8_;
  if (local_120._0_8_ != 0) {
    LOCK();
    plVar1 = (long *)(local_120._0_8_ + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_120._0_8_ = 0;
      Memory::free_static((void *)(uVar11 + -0x10),false);
    }
  }
  local_a0 = local_a0 & 0xffffffff00000000;
  local_150 = 0;
  local_148 = 0;
  local_128 = "";
  auVar8._8_8_ = 0;
  auVar8._0_8_ = local_120._8_8_;
  local_120 = auVar8 << 0x40;
  String::parse_latin1((StrRange *)&local_148);
  local_128 = (char *)CONCAT44(local_128._4_4_,0x21);
  local_110 = 0;
  local_108 = 0;
  local_120 = (undefined1  [16])0x0;
  if (local_148 == 0) {
LAB_00101723:
    local_100 = 6;
    StringName::operator=(this,(StringName *)&local_150);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_108,(CowData *)&local_148);
    local_100 = 6;
    if (local_110 != 0x11) goto LAB_00101723;
    StringName::StringName((StringName *)&local_140,(String *)&local_108,false);
    if (local_120._8_8_ == local_140) {
      if ((StringName::configured != '\0') && (local_140 != 0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_120._8_8_ = local_140;
    }
  }
  lVar2 = local_148;
  if (local_148 != 0) {
    LOCK();
    plVar1 = (long *)(local_148 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_148 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_150 != 0)) {
    StringName::unref();
  }
  if (local_b8[0] == (undefined1 (*) [16])0x0) {
    local_b8[0] = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined4 *)local_b8[0][1] = 0;
    *local_b8[0] = (undefined1  [16])0x0;
  }
  puVar14 = (undefined4 *)operator_new(0x48,DefaultAllocator::alloc);
  *(undefined8 *)(puVar14 + 8) = 0;
  *(undefined1 (*) [16])(puVar14 + 2) = (undefined1  [16])0x0;
  *puVar14 = 0;
  puVar14[6] = 0;
  puVar14[10] = 6;
  *(undefined8 *)(puVar14 + 0x10) = 0;
  *(undefined1 (*) [16])(puVar14 + 0xc) = (undefined1  [16])0x0;
  *puVar14 = local_128._0_4_;
  if (local_120._0_8_ != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar14 + 2),(CowData *)local_120);
  }
  StringName::operator=((StringName *)(puVar14 + 4),this);
  puVar14[6] = local_110;
  if (*(long *)(puVar14 + 8) != local_108) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar14 + 8),(CowData *)&local_108);
  }
  lVar16 = local_108;
  puVar14[10] = local_100;
  lVar2 = *(long *)(*local_b8[0] + 8);
  *(undefined8 *)(puVar14 + 0xc) = 0;
  *(undefined1 (**) [16])(puVar14 + 0x10) = local_b8[0];
  *(long *)(puVar14 + 0xe) = lVar2;
  if (lVar2 != 0) {
    *(undefined4 **)(lVar2 + 0x30) = puVar14;
  }
  lVar2 = *(long *)*local_b8[0];
  *(undefined4 **)(*local_b8[0] + 8) = puVar14;
  if (lVar2 == 0) {
    *(undefined4 **)*local_b8[0] = puVar14;
  }
  *(int *)local_b8[0][1] = *(int *)local_b8[0][1] + 1;
  if (local_108 != 0) {
    LOCK();
    plVar1 = (long *)(local_108 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_108 = 0;
      Memory::free_static((void *)(lVar16 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_120._8_8_ != 0)) {
    StringName::unref();
  }
  uVar11 = local_120._0_8_;
  if (local_120._0_8_ != 0) {
    LOCK();
    plVar1 = (long *)(local_120._0_8_ + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      auVar4._8_8_ = 0;
      auVar4._0_8_ = local_120._8_8_;
      local_120 = auVar4 << 0x40;
      Memory::free_static((void *)(uVar11 + -0x10),false);
    }
  }
  Vector<int>::push_back(local_98,0);
  local_150 = 0;
  local_148 = 0;
  local_128 = "";
  auVar5._8_8_ = 0;
  auVar5._0_8_ = local_120._8_8_;
  local_120 = auVar5 << 0x40;
  String::parse_latin1((StrRange *)&local_148);
  local_128 = (char *)CONCAT44(local_128._4_4_,1);
  local_110 = 0;
  local_108 = 0;
  local_120 = (undefined1  [16])0x0;
  if (local_148 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_108,(CowData *)&local_148);
    local_100 = 6;
    if (local_110 == 0x11) {
      StringName::StringName((StringName *)&local_140,(String *)&local_108,false);
      if (local_120._8_8_ == local_140) {
        if ((StringName::configured != '\0') && (local_140 != 0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        local_120._8_8_ = local_140;
      }
      goto LAB_001012f7;
    }
  }
  local_100 = 6;
  StringName::operator=(this,(StringName *)&local_150);
LAB_001012f7:
  lVar2 = local_148;
  if (local_148 != 0) {
    LOCK();
    plVar1 = (long *)(local_148 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_148 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_150 != 0)) {
    StringName::unref();
  }
  if (local_b8[0] == (undefined1 (*) [16])0x0) {
    local_b8[0] = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined4 *)local_b8[0][1] = 0;
    *local_b8[0] = (undefined1  [16])0x0;
  }
  puVar14 = (undefined4 *)operator_new(0x48,DefaultAllocator::alloc);
  *(undefined8 *)(puVar14 + 8) = 0;
  *(undefined1 (*) [16])(puVar14 + 2) = (undefined1  [16])0x0;
  *puVar14 = 0;
  puVar14[6] = 0;
  puVar14[10] = 6;
  *(undefined8 *)(puVar14 + 0x10) = 0;
  *(undefined1 (*) [16])(puVar14 + 0xc) = (undefined1  [16])0x0;
  *puVar14 = local_128._0_4_;
  if (local_120._0_8_ != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar14 + 2),(CowData *)local_120);
  }
  StringName::operator=((StringName *)(puVar14 + 4),this);
  puVar14[6] = local_110;
  if (*(long *)(puVar14 + 8) != local_108) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar14 + 8),(CowData *)&local_108);
  }
  lVar16 = local_108;
  puVar14[10] = local_100;
  lVar2 = *(long *)(*local_b8[0] + 8);
  *(undefined8 *)(puVar14 + 0xc) = 0;
  *(undefined1 (**) [16])(puVar14 + 0x10) = local_b8[0];
  *(long *)(puVar14 + 0xe) = lVar2;
  if (lVar2 != 0) {
    *(undefined4 **)(lVar2 + 0x30) = puVar14;
  }
  lVar2 = *(long *)*local_b8[0];
  *(undefined4 **)(*local_b8[0] + 8) = puVar14;
  if (lVar2 == 0) {
    *(undefined4 **)*local_b8[0] = puVar14;
  }
  *(int *)local_b8[0][1] = *(int *)local_b8[0][1] + 1;
  if (local_108 != 0) {
    LOCK();
    plVar1 = (long *)(local_108 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_108 = 0;
      Memory::free_static((void *)(lVar16 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_120._8_8_ != 0)) {
    StringName::unref();
  }
  uVar11 = local_120._0_8_;
  if (local_120._0_8_ != 0) {
    LOCK();
    plVar1 = (long *)(local_120._0_8_ + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      auVar6._8_8_ = 0;
      auVar6._0_8_ = local_120._8_8_;
      local_120 = auVar6 << 0x40;
      Memory::free_static((void *)(uVar11 + -0x10),false);
    }
  }
  Vector<int>::push_back(local_98,0);
  local_128 = "AnimationNodeExtension";
  local_140 = 0;
  local_120._0_8_ = 0x16;
  String::parse_latin1((StrRange *)&local_140);
  StringName::StringName((StringName *)&local_128,(String *)&local_140,false);
  ClassDB::add_virtual_method
            ((StringName *)&local_128,(MethodInfo *)&local_f8,true,(Vector *)local_168,false);
  if ((StringName::configured != '\0') && (local_128 != (char *)0x0)) {
    StringName::unref();
  }
  uVar9 = local_140;
  if (local_140 != 0) {
    LOCK();
    plVar1 = (long *)(local_140 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_140 = 0;
      Memory::free_static((void *)(uVar9 + -0x10),false);
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
  piVar12 = local_a8;
  if (local_a8 != (int *)0x0) {
    LOCK();
    plVar1 = (long *)(local_a8 + -4);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      if (local_a8 == (int *)0x0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      lVar2 = *(long *)(local_a8 + -2);
      lVar16 = 0;
      local_a8 = (int *)0x0;
      piVar15 = piVar12;
      if (lVar2 != 0) {
        do {
          if (Variant::needs_deinit[*piVar15] != '\0') {
            Variant::_clear_internal();
          }
          lVar16 = lVar16 + 1;
          piVar15 = piVar15 + 6;
        } while (lVar2 != lVar16);
      }
      Memory::free_static(piVar12 + -4,false);
    }
  }
  List<PropertyInfo,DefaultAllocator>::~List((List<PropertyInfo,DefaultAllocator> *)local_b8);
  lVar2 = local_d0;
  if (local_d0 != 0) {
    LOCK();
    plVar1 = (long *)(local_d0 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_d0 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (uStack_e0 != 0)) {
    StringName::unref();
  }
  lVar2 = local_e8;
  if (local_e8 != 0) {
    LOCK();
    plVar1 = (long *)(local_e8 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_e8 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  pcVar10 = local_f8;
  if (local_f8 != (char *)0x0) {
    LOCK();
    plVar1 = (long *)((long)local_f8 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_f8 = (char *)0x0;
      Memory::free_static((void *)((long)pcVar10 + -0x10),false);
    }
  }
  CowData<String>::_unref((CowData<String> *)&local_130);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* Vector<double>::push_back(double) [clone .isra.0] */

void __thiscall Vector<double>::push_back(Vector<double> *this,double param_1)

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
  iVar1 = CowData<double>::resize<false>((CowData<double> *)(this + 8),lVar2);
  if (iVar1 == 0) {
    if (*(long *)(this + 8) == 0) {
      lVar3 = -1;
      lVar2 = 0;
    }
    else {
      lVar2 = *(long *)(*(long *)(this + 8) + -8);
      lVar3 = lVar2 + -1;
      if (-1 < lVar3) {
        CowData<double>::_copy_on_write((CowData<double> *)(this + 8));
        *(double *)(*(long *)(this + 8) + lVar3 * 8) = param_1;
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



/* AnimationNodeExtension::_playback_info_to_array(AnimationMixer::PlaybackInfo const&) */

AnimationNodeExtension * __thiscall
AnimationNodeExtension::_playback_info_to_array(AnimationNodeExtension *this,PlaybackInfo *param_1)

{
  *(undefined8 *)(this + 8) = 0;
  Vector<double>::push_back((Vector<double> *)this,*(double *)param_1);
  Vector<double>::push_back((Vector<double> *)this,*(double *)(param_1 + 8));
  Vector<double>::push_back((Vector<double> *)this,*(double *)(param_1 + 0x10));
  Vector<double>::push_back((Vector<double> *)this,*(double *)(param_1 + 0x18));
  Vector<double>::push_back((Vector<double> *)this,(double)(byte)param_1[0x20]);
  Vector<double>::push_back((Vector<double> *)this,(double)(byte)param_1[0x21]);
  Vector<double>::push_back((Vector<double> *)this,(double)(byte)param_1[0x22]);
  Vector<double>::push_back((Vector<double> *)this,(double)*(float *)(param_1 + 0x24));
  return this;
}



/* AnimationNodeExtension::_process(AnimationMixer::PlaybackInfo, bool) */

AnimationNodeExtension *
AnimationNodeExtension::_process
          (AnimationNodeExtension *param_1,long *param_2,PlaybackInfo *param_3,bool param_4)

{
  char *pcVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined8 uVar4;
  size_t sVar5;
  undefined4 uVar6;
  code *pcVar7;
  int *piVar8;
  long lVar9;
  long *plVar10;
  size_t sVar11;
  int *piVar12;
  long lVar13;
  long in_FS_OFFSET;
  bool bVar14;
  StringName *pSVar15;
  StrRange *pSVar16;
  long local_198;
  long local_190;
  long local_188;
  long local_180;
  long local_178;
  long local_170;
  Vector local_168 [8];
  size_t local_160;
  AnimationNodeExtension local_158 [8];
  long local_150;
  int local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  long local_138;
  int local_130;
  long local_128;
  int local_120;
  char *local_118;
  size_t local_110;
  undefined1 local_108 [16];
  undefined8 local_f8;
  long local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined1 (*local_d8 [2]) [16];
  int *local_c8;
  ulong local_c0;
  Vector<int> local_b8 [8];
  long local_b0;
  Variant *local_a8;
  Variant *pVStack_a0;
  int local_98 [8];
  int *local_78;
  long *plStack_70;
  int local_60 [8];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_160 = 0;
  _playback_info_to_array(local_158,param_3);
  plVar10 = (long *)param_2[0x13];
  if (plVar10 != (long *)0x0) {
    local_148 = 0;
    uStack_144 = 0;
    uStack_140 = 0;
    Variant::Variant((Variant *)&local_78,(Vector *)local_158);
    Variant::Variant((Variant *)local_60,param_4);
    local_a8 = (Variant *)&local_78;
    pVStack_a0 = (Variant *)local_60;
    (**(code **)(*plVar10 + 0x60))(local_98,plVar10,param_2 + 0x74,&local_a8,2,&local_148,local_98);
    if (local_148 == 0) {
      Variant::operator_cast_to_Vector((Variant *)&local_118);
      if (local_110 != 0) {
        local_160 = local_110;
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
      goto LAB_00101c0d;
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
  if ((param_2[1] != 0) && ((char)param_2[0x75] == '\0')) {
    local_118 = (char *)0x0;
    local_108 = (undefined1  [16])0x0;
    local_148 = 0x1030b7;
    uStack_144 = 0;
    local_110 = 0;
    local_f8 = 0;
    local_f0 = 0;
    local_e8 = 6;
    local_e0 = 1;
    local_d8[0] = (undefined1 (*) [16])0x0;
    local_c8 = (int *)0x0;
    local_c0 = 0;
    local_b0 = 0;
    uStack_140 = 0x17;
    uStack_13c = 0;
    String::parse_latin1((StrRange *)&local_118);
    local_e0 = CONCAT44(local_e0._4_4_,0x88);
    GetTypeInfo<Vector<float>,void>::get_class_info((GetTypeInfo<Vector<float>,void> *)&local_148);
    lVar9 = CONCAT44(uStack_13c,uStack_140);
    local_110 = CONCAT44(local_110._4_4_,local_148);
    uVar4 = local_108._0_8_;
    if (local_108._0_8_ != lVar9) {
      if (local_108._0_8_ != 0) {
        LOCK();
        plVar10 = (long *)(local_108._0_8_ + -0x10);
        *plVar10 = *plVar10 + -1;
        UNLOCK();
        if (*plVar10 == 0) {
          auVar2._8_8_ = 0;
          auVar2._0_8_ = local_108._8_8_;
          local_108 = auVar2 << 0x40;
          Memory::free_static((void *)(uVar4 + -0x10),false);
        }
        lVar9 = CONCAT44(uStack_13c,uStack_140);
      }
      local_108._0_8_ = lVar9;
      uStack_140 = 0;
      uStack_13c = 0;
    }
    if (local_108._8_8_ != local_138) {
      StringName::unref();
      lVar9 = local_138;
      local_138 = 0;
      local_108._8_8_ = lVar9;
    }
    lVar13 = local_f0;
    lVar9 = local_128;
    local_f8 = CONCAT44(local_f8._4_4_,local_130);
    if (local_f0 == local_128) {
      local_e8 = CONCAT44(local_e8._4_4_,local_120);
      if (local_f0 != 0) {
        LOCK();
        plVar10 = (long *)(local_f0 + -0x10);
        *plVar10 = *plVar10 + -1;
        UNLOCK();
        if (*plVar10 == 0) {
          local_128 = 0;
          Memory::free_static((void *)(lVar9 + -0x10),false);
        }
      }
    }
    else {
      if (local_f0 != 0) {
        LOCK();
        plVar10 = (long *)(local_f0 + -0x10);
        *plVar10 = *plVar10 + -1;
        UNLOCK();
        if (*plVar10 == 0) {
          local_f0 = 0;
          Memory::free_static((void *)(lVar13 + -0x10),false);
        }
      }
      local_f0 = local_128;
      local_e8 = CONCAT44(local_e8._4_4_,local_120);
    }
    pSVar15 = (StringName *)&local_138;
    if ((StringName::configured != '\0') && (local_138 != 0)) {
      StringName::unref();
    }
    if (CONCAT44(uStack_13c,uStack_140) != 0) {
      LOCK();
      plVar10 = (long *)(CONCAT44(uStack_13c,uStack_140) + -0x10);
      *plVar10 = *plVar10 + -1;
      UNLOCK();
      if (*plVar10 == 0) {
        lVar9 = CONCAT44(uStack_13c,uStack_140);
        uStack_140 = 0;
        uStack_13c = 0;
        Memory::free_static((void *)(lVar9 + -0x10),false);
      }
    }
    local_c0 = local_c0 & 0xffffffff00000000;
    GetTypeInfo<Vector<double>,void>::get_class_info((GetTypeInfo<Vector<double>,void> *)&local_148)
    ;
    if (local_d8[0] == (undefined1 (*) [16])0x0) {
      local_d8[0] = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
      *(undefined4 *)local_d8[0][1] = 0;
      *local_d8[0] = (undefined1  [16])0x0;
    }
    piVar8 = (int *)operator_new(0x48,DefaultAllocator::alloc);
    piVar8[8] = 0;
    piVar8[9] = 0;
    *(undefined1 (*) [16])(piVar8 + 2) = (undefined1  [16])0x0;
    *piVar8 = 0;
    piVar8[6] = 0;
    piVar8[10] = 6;
    piVar8[0x10] = 0;
    piVar8[0x11] = 0;
    *(undefined1 (*) [16])(piVar8 + 0xc) = (undefined1  [16])0x0;
    *piVar8 = local_148;
    if (CONCAT44(uStack_13c,uStack_140) != 0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)(piVar8 + 2),(CowData *)&uStack_140);
    }
    StringName::operator=((StringName *)(piVar8 + 4),pSVar15);
    piVar8[6] = local_130;
    if (*(long *)(piVar8 + 8) != local_128) {
      CowData<char32_t>::_ref((CowData<char32_t> *)(piVar8 + 8),(CowData *)&local_128);
    }
    lVar13 = local_128;
    piVar8[10] = local_120;
    lVar9 = *(long *)(*local_d8[0] + 8);
    piVar8[0xc] = 0;
    piVar8[0xd] = 0;
    *(undefined1 (**) [16])(piVar8 + 0x10) = local_d8[0];
    *(long *)(piVar8 + 0xe) = lVar9;
    if (lVar9 != 0) {
      *(int **)(lVar9 + 0x30) = piVar8;
    }
    lVar9 = *(long *)*local_d8[0];
    *(int **)(*local_d8[0] + 8) = piVar8;
    if (lVar9 == 0) {
      *(int **)*local_d8[0] = piVar8;
    }
    *(int *)local_d8[0][1] = *(int *)local_d8[0][1] + 1;
    if (local_128 != 0) {
      LOCK();
      plVar10 = (long *)(local_128 + -0x10);
      *plVar10 = *plVar10 + -1;
      UNLOCK();
      if (*plVar10 == 0) {
        local_128 = 0;
        Memory::free_static((void *)(lVar13 + -0x10),false);
      }
    }
    if ((StringName::configured != '\0') && (local_138 != 0)) {
      StringName::unref();
    }
    if (CONCAT44(uStack_13c,uStack_140) != 0) {
      LOCK();
      plVar10 = (long *)(CONCAT44(uStack_13c,uStack_140) + -0x10);
      *plVar10 = *plVar10 + -1;
      UNLOCK();
      if (*plVar10 == 0) {
        lVar9 = CONCAT44(uStack_13c,uStack_140);
        uStack_140 = 0;
        uStack_13c = 0;
        Memory::free_static((void *)(lVar9 + -0x10),false);
      }
    }
    Vector<int>::push_back(local_b8,0);
    GetTypeInfo<bool,void>::get_class_info((GetTypeInfo<bool,void> *)&local_148);
    if (local_d8[0] == (undefined1 (*) [16])0x0) {
      local_d8[0] = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
      *(undefined4 *)local_d8[0][1] = 0;
      *local_d8[0] = (undefined1  [16])0x0;
    }
    piVar8 = (int *)operator_new(0x48,DefaultAllocator::alloc);
    piVar8[8] = 0;
    piVar8[9] = 0;
    *(undefined1 (*) [16])(piVar8 + 2) = (undefined1  [16])0x0;
    *piVar8 = 0;
    piVar8[6] = 0;
    piVar8[10] = 6;
    piVar8[0x10] = 0;
    piVar8[0x11] = 0;
    *(undefined1 (*) [16])(piVar8 + 0xc) = (undefined1  [16])0x0;
    *piVar8 = local_148;
    if (CONCAT44(uStack_13c,uStack_140) != 0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)(piVar8 + 2),(CowData *)&uStack_140);
    }
    StringName::operator=((StringName *)(piVar8 + 4),pSVar15);
    piVar8[6] = local_130;
    if (*(long *)(piVar8 + 8) != local_128) {
      CowData<char32_t>::_ref((CowData<char32_t> *)(piVar8 + 8),(CowData *)&local_128);
    }
    lVar13 = local_128;
    piVar8[10] = local_120;
    lVar9 = *(long *)(*local_d8[0] + 8);
    piVar8[0xc] = 0;
    piVar8[0xd] = 0;
    *(undefined1 (**) [16])(piVar8 + 0x10) = local_d8[0];
    *(long *)(piVar8 + 0xe) = lVar9;
    if (lVar9 != 0) {
      *(int **)(lVar9 + 0x30) = piVar8;
    }
    lVar9 = *(long *)*local_d8[0];
    *(int **)(*local_d8[0] + 8) = piVar8;
    if (lVar9 == 0) {
      *(int **)*local_d8[0] = piVar8;
    }
    *(int *)local_d8[0][1] = *(int *)local_d8[0][1] + 1;
    if (local_128 != 0) {
      LOCK();
      plVar10 = (long *)(local_128 + -0x10);
      *plVar10 = *plVar10 + -1;
      UNLOCK();
      if (*plVar10 == 0) {
        local_128 = 0;
        Memory::free_static((void *)(lVar13 + -0x10),false);
      }
    }
    if ((StringName::configured != '\0') && (local_138 != 0)) {
      StringName::unref();
    }
    if (CONCAT44(uStack_13c,uStack_140) != 0) {
      LOCK();
      plVar10 = (long *)(CONCAT44(uStack_13c,uStack_140) + -0x10);
      *plVar10 = *plVar10 + -1;
      UNLOCK();
      if (*plVar10 == 0) {
        lVar9 = CONCAT44(uStack_13c,uStack_140);
        uStack_140 = 0;
        uStack_13c = 0;
        Memory::free_static((void *)(lVar9 + -0x10),false);
      }
    }
    Vector<int>::push_back(local_b8,0);
    uVar6 = MethodInfo::get_compatibility_hash();
    param_2[0x76] = 0;
    lVar9 = param_2[1];
    pcVar7 = *(code **)(lVar9 + 0xd8);
    if (((pcVar7 == (code *)0x0) || (*(long *)(lVar9 + 0xe0) == 0)) &&
       (pcVar7 = *(code **)(lVar9 + 0xd0), pcVar7 == (code *)0x0)) {
      local_148 = 0x10312a;
      uStack_144 = 0;
      pSVar16 = (StrRange *)&local_178;
      local_178 = 0;
      uStack_140 = 0x16;
      uStack_13c = 0;
      String::parse_latin1(pSVar16);
      StringName::StringName((StringName *)&local_170,(String *)pSVar16,false);
      ClassDB::get_virtual_method_compatibility_hashes
                ((StringName *)&local_148,(StringName *)&local_170);
      lVar9 = CONCAT44(uStack_13c,uStack_140);
      if (lVar9 == 0) {
        lVar13 = 0;
      }
      else {
        lVar13 = *(long *)(lVar9 + -8);
        LOCK();
        plVar10 = (long *)(lVar9 + -0x10);
        *plVar10 = *plVar10 + -1;
        UNLOCK();
        if (*plVar10 == 0) {
          lVar9 = CONCAT44(uStack_13c,uStack_140);
          uStack_140 = 0;
          uStack_13c = 0;
          Memory::free_static((void *)(lVar9 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_170 != 0)) {
        StringName::unref();
      }
      lVar9 = local_178;
      if (local_178 != 0) {
        LOCK();
        plVar10 = (long *)(local_178 + -0x10);
        *plVar10 = *plVar10 + -1;
        UNLOCK();
        if (*plVar10 == 0) {
          local_178 = 0;
          Memory::free_static((void *)(lVar9 + -0x10),false);
        }
      }
      lVar9 = param_2[1];
      if ((lVar13 == 0) &&
         (((pcVar7 = *(code **)(lVar9 + 200), pcVar7 != (code *)0x0 &&
           (*(long *)(lVar9 + 0xe0) != 0)) ||
          (pcVar7 = *(code **)(lVar9 + 0xc0), pcVar7 != (code *)0x0)))) {
        lVar9 = (*pcVar7)(*(undefined8 *)(lVar9 + 0xa0));
        param_2[0x76] = lVar9;
        lVar9 = param_2[1];
      }
    }
    else {
      lVar9 = (*pcVar7)(*(undefined8 *)(lVar9 + 0xa0),param_2 + 0x74,uVar6);
      param_2[0x76] = lVar9;
      lVar9 = param_2[1];
    }
    if (*(char *)(lVar9 + 0x29) != '\0') {
      plVar10 = (long *)operator_new(0x18,"");
      *plVar10 = (long)(param_2 + 0x76);
      plVar10[1] = (long)(param_2 + 0x75);
      plVar10[2] = param_2[0x2d];
      param_2[0x2d] = (long)plVar10;
    }
    lVar9 = local_b0;
    *(undefined1 *)(param_2 + 0x75) = 1;
    if (local_b0 != 0) {
      LOCK();
      plVar10 = (long *)(local_b0 + -0x10);
      *plVar10 = *plVar10 + -1;
      UNLOCK();
      if (*plVar10 == 0) {
        local_b0 = 0;
        Memory::free_static((void *)(lVar9 + -0x10),false);
      }
    }
    piVar8 = local_c8;
    if (local_c8 != (int *)0x0) {
      LOCK();
      plVar10 = (long *)(local_c8 + -4);
      *plVar10 = *plVar10 + -1;
      UNLOCK();
      if (*plVar10 == 0) {
        if (local_c8 == (int *)0x0) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)invalidInstructionException();
          (*pcVar7)();
        }
        lVar9 = *(long *)(local_c8 + -2);
        local_c8 = (int *)0x0;
        lVar13 = 0;
        piVar12 = piVar8;
        if (lVar9 != 0) {
          do {
            if (Variant::needs_deinit[*piVar12] != '\0') {
              Variant::_clear_internal();
            }
            lVar13 = lVar13 + 1;
            piVar12 = piVar12 + 6;
          } while (lVar9 != lVar13);
        }
        Memory::free_static(piVar8 + -4,false);
      }
    }
    List<PropertyInfo,DefaultAllocator>::~List((List<PropertyInfo,DefaultAllocator> *)local_d8);
    lVar9 = local_f0;
    if (local_f0 != 0) {
      LOCK();
      plVar10 = (long *)(local_f0 + -0x10);
      *plVar10 = *plVar10 + -1;
      UNLOCK();
      if (*plVar10 == 0) {
        local_f0 = 0;
        Memory::free_static((void *)(lVar9 + -0x10),false);
      }
    }
    if ((StringName::configured != '\0') && (local_108._8_8_ != 0)) {
      StringName::unref();
    }
    uVar4 = local_108._0_8_;
    if (local_108._0_8_ != 0) {
      LOCK();
      plVar10 = (long *)(local_108._0_8_ + -0x10);
      *plVar10 = *plVar10 + -1;
      UNLOCK();
      if (*plVar10 == 0) {
        auVar3._8_8_ = 0;
        auVar3._0_8_ = local_108._8_8_;
        local_108 = auVar3 << 0x40;
        Memory::free_static((void *)(uVar4 + -0x10),false);
      }
    }
    pcVar1 = local_118;
    if (local_118 != (char *)0x0) {
      LOCK();
      plVar10 = (long *)(local_118 + -0x10);
      *plVar10 = *plVar10 + -1;
      UNLOCK();
      if (*plVar10 == 0) {
        local_118 = (char *)0x0;
        Memory::free_static(pcVar1 + -0x10,false);
      }
    }
  }
  pcVar7 = (code *)param_2[0x76];
  if (pcVar7 == (code *)0x0) {
    if (_gdvirtual__process_animation_node_call(Vector<double>,bool,Vector<float>&)::first_print !=
        '\0') {
      local_148 = 0;
      uStack_144 = 0;
      local_110 = 0x23;
      local_118 = " must be overridden before calling.";
      String::parse_latin1((StrRange *)&local_148);
      local_178 = 0;
      local_118 = "_process_animation_node";
      local_110 = 0x17;
      String::parse_latin1((StrRange *)&local_178);
      local_118 = "::";
      local_188 = 0;
      local_110 = 2;
      String::parse_latin1((StrRange *)&local_188);
      if (*(code **)(*param_2 + 0x48) == get_class) {
        if (param_2[1] == 0) {
          local_198 = 0;
          local_118 = "AnimationNodeExtension";
          local_110 = 0x16;
          String::parse_latin1((StrRange *)&local_198);
        }
        else {
          lVar9 = *(long *)(param_2[1] + 0x20);
          if (lVar9 == 0) {
            local_198 = 0;
          }
          else {
            pcVar1 = *(char **)(lVar9 + 8);
            local_198 = 0;
            if (pcVar1 == (char *)0x0) {
              if (*(long *)(lVar9 + 0x10) != 0) {
                CowData<char32_t>::_ref((CowData<char32_t> *)&local_198,(CowData *)(lVar9 + 0x10));
              }
            }
            else {
              local_110 = strlen(pcVar1);
              local_118 = pcVar1;
              String::parse_latin1((StrRange *)&local_198);
            }
          }
        }
      }
      else {
        (**(code **)(*param_2 + 0x48))(&local_198,param_2);
      }
      operator+((char *)&local_190,(String *)"Required virtual method ");
      String::operator+((String *)&local_180,(String *)&local_190);
      String::operator+((String *)&local_170,(String *)&local_180);
      String::operator+((String *)&local_118,(String *)&local_170);
      _err_print_error("_gdvirtual__process_animation_node_call",
                       "scene/animation/animation_node_extension.h",0x30,(String *)&local_118,0,0);
      pcVar1 = local_118;
      if (local_118 != (char *)0x0) {
        LOCK();
        plVar10 = (long *)(local_118 + -0x10);
        *plVar10 = *plVar10 + -1;
        UNLOCK();
        if (*plVar10 == 0) {
          local_118 = (char *)0x0;
          Memory::free_static(pcVar1 + -0x10,false);
        }
      }
      lVar9 = local_170;
      if (local_170 != 0) {
        LOCK();
        plVar10 = (long *)(local_170 + -0x10);
        *plVar10 = *plVar10 + -1;
        UNLOCK();
        if (*plVar10 == 0) {
          local_170 = 0;
          Memory::free_static((void *)(lVar9 + -0x10),false);
        }
      }
      lVar9 = local_180;
      if (local_180 != 0) {
        LOCK();
        plVar10 = (long *)(local_180 + -0x10);
        *plVar10 = *plVar10 + -1;
        UNLOCK();
        if (*plVar10 == 0) {
          local_180 = 0;
          Memory::free_static((void *)(lVar9 + -0x10),false);
        }
      }
      lVar9 = local_190;
      if (local_190 != 0) {
        LOCK();
        plVar10 = (long *)(local_190 + -0x10);
        *plVar10 = *plVar10 + -1;
        UNLOCK();
        if (*plVar10 == 0) {
          local_190 = 0;
          Memory::free_static((void *)(lVar9 + -0x10),false);
        }
      }
      lVar9 = local_198;
      if (local_198 != 0) {
        LOCK();
        plVar10 = (long *)(local_198 + -0x10);
        *plVar10 = *plVar10 + -1;
        UNLOCK();
        if (*plVar10 == 0) {
          local_198 = 0;
          Memory::free_static((void *)(lVar9 + -0x10),false);
        }
      }
      lVar9 = local_188;
      if (local_188 != 0) {
        LOCK();
        plVar10 = (long *)(local_188 + -0x10);
        *plVar10 = *plVar10 + -1;
        UNLOCK();
        if (*plVar10 == 0) {
          local_188 = 0;
          Memory::free_static((void *)(lVar9 + -0x10),false);
        }
      }
      lVar9 = local_178;
      if (local_178 != 0) {
        LOCK();
        plVar10 = (long *)(local_178 + -0x10);
        *plVar10 = *plVar10 + -1;
        UNLOCK();
        if (*plVar10 == 0) {
          local_178 = 0;
          Memory::free_static((void *)(lVar9 + -0x10),false);
        }
      }
      if (CONCAT44(uStack_144,local_148) != 0) {
        LOCK();
        plVar10 = (long *)(CONCAT44(uStack_144,local_148) + -0x10);
        *plVar10 = *plVar10 + -1;
        UNLOCK();
        if (*plVar10 == 0) {
          lVar9 = CONCAT44(uStack_144,local_148);
          local_148 = 0;
          uStack_144 = 0;
          Memory::free_static((void *)(lVar9 + -0x10),false);
        }
      }
      _gdvirtual__process_animation_node_call(Vector<double>,bool,Vector<float>&)::first_print =
           '\0';
    }
    goto LAB_00101c0d;
  }
  uStack_140 = 0;
  uStack_13c = 0;
  if (local_150 != 0) {
    plVar10 = (long *)(local_150 + -0x10);
    do {
      lVar9 = *plVar10;
      if (lVar9 == 0) goto LAB_00101cea;
      LOCK();
      lVar13 = *plVar10;
      bVar14 = lVar9 == lVar13;
      if (bVar14) {
        *plVar10 = lVar9 + 1;
        lVar13 = lVar9;
      }
      UNLOCK();
    } while (!bVar14);
    if (lVar13 != -1) {
      uStack_140 = (undefined4)local_150;
      uStack_13c = (undefined4)((ulong)local_150 >> 0x20);
    }
LAB_00101cea:
    pcVar7 = (code *)param_2[0x76];
  }
  plStack_70 = &local_170;
  local_78 = &local_148;
  local_170 = CONCAT71(local_170._1_7_,param_4);
  local_110 = 0;
  if (*(code **)(param_2[1] + 0xe0) == (code *)0x0) {
    (*pcVar7)(param_2[2],&local_78,&local_118);
    plVar10 = (long *)(local_110 - 0x10);
    if (local_110 == 0) {
LAB_00102120:
      sVar11 = local_110;
      if (local_160 == 0) goto LAB_0010217b;
LAB_0010212a:
      LOCK();
      plVar10 = (long *)(local_160 - 0x10);
      *plVar10 = *plVar10 + -1;
      UNLOCK();
      sVar5 = sVar11;
      if (*plVar10 == 0) {
        Memory::free_static((void *)(local_160 - 0x10),false);
      }
    }
    else {
      do {
        lVar9 = *plVar10;
        if (lVar9 == 0) goto LAB_00102240;
        LOCK();
        lVar13 = *plVar10;
        bVar14 = lVar9 == lVar13;
        if (bVar14) {
          *plVar10 = lVar9 + 1;
          lVar13 = lVar9;
        }
        UNLOCK();
      } while (!bVar14);
      if (lVar13 == -1) {
LAB_00102240:
        sVar11 = 0;
        sVar5 = local_160;
joined_r0x00102245:
        if (local_160 != 0) goto LAB_0010212a;
      }
      else {
        sVar11 = local_110;
        sVar5 = local_110;
        if (local_110 != local_160) goto joined_r0x00102245;
        if (local_110 == 0) goto LAB_0010217b;
        plVar10 = (long *)(local_110 - 0x10);
        LOCK();
        *plVar10 = *plVar10 + -1;
        lVar9 = *plVar10;
        UNLOCK();
joined_r0x00102962:
        sVar5 = local_160;
        if (lVar9 == 0) {
          Memory::free_static(plVar10,false);
          sVar5 = local_160;
        }
      }
    }
    local_160 = sVar5;
    sVar11 = local_110;
    if (local_110 != 0) {
      LOCK();
      plVar10 = (long *)(local_110 - 0x10);
      *plVar10 = *plVar10 + -1;
      UNLOCK();
      if (*plVar10 == 0) {
        local_110 = 0;
        Memory::free_static((void *)(sVar11 - 0x10),false);
      }
    }
  }
  else {
    (**(code **)(param_2[1] + 0xe0))(param_2[2],param_2 + 0x74,pcVar7,&local_78,&local_118);
    plVar10 = (long *)(local_110 - 0x10);
    if (local_110 == 0) goto LAB_00102120;
    do {
      lVar9 = *plVar10;
      if (lVar9 == 0) goto LAB_00102240;
      LOCK();
      lVar13 = *plVar10;
      bVar14 = lVar9 == lVar13;
      if (bVar14) {
        *plVar10 = lVar9 + 1;
        lVar13 = lVar9;
      }
      UNLOCK();
    } while (!bVar14);
    if (lVar13 == -1) goto LAB_00102240;
    sVar11 = local_110;
    sVar5 = local_110;
    if (local_160 != local_110) goto joined_r0x00102245;
    if (local_160 != 0) {
      plVar10 = (long *)(local_160 - 0x10);
      LOCK();
      *plVar10 = *plVar10 + -1;
      lVar9 = *plVar10;
      UNLOCK();
      goto joined_r0x00102962;
    }
  }
LAB_0010217b:
  if (CONCAT44(uStack_13c,uStack_140) != 0) {
    LOCK();
    plVar10 = (long *)(CONCAT44(uStack_13c,uStack_140) + -0x10);
    *plVar10 = *plVar10 + -1;
    UNLOCK();
    if (*plVar10 == 0) {
      lVar9 = CONCAT44(uStack_13c,uStack_140);
      uStack_140 = 0;
      uStack_13c = 0;
      Memory::free_static((void *)(lVar9 + -0x10),false);
    }
  }
LAB_00101c0d:
  lVar9 = local_150;
  if (local_150 != 0) {
    LOCK();
    plVar10 = (long *)(local_150 + -0x10);
    *plVar10 = *plVar10 + -1;
    UNLOCK();
    if (*plVar10 == 0) {
      local_150 = 0;
      Memory::free_static((void *)(lVar9 + -0x10),false);
    }
  }
  _array_to_node_time_info(param_1,local_168);
  if (local_160 != 0) {
    LOCK();
    plVar10 = (long *)(local_160 - 0x10);
    *plVar10 = *plVar10 + -1;
    UNLOCK();
    if (*plVar10 == 0) {
      Memory::free_static((void *)(local_160 - 0x10),false);
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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



/* Object::_validate_property(PropertyInfo&) const */

void Object::_validate_property(PropertyInfo *param_1)

{
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



/* AnimationNodeExtension::is_class_ptr(void*) const */

uint __thiscall AnimationNodeExtension::is_class_ptr(AnimationNodeExtension *this,void *param_1)

{
  return (uint)CONCAT71(0x107a,(undefined4 *)param_1 == &AnimationNode::get_class_ptr_static()::ptr)
         | (uint)CONCAT71(0x107a,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x107a,(undefined4 *)param_1 == &Resource::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x107a,(undefined4 *)param_1 == &RefCounted::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x107b,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* AnimationNodeExtension::_getv(StringName const&, Variant&) const */

undefined8 AnimationNodeExtension::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* AnimationNodeExtension::_setv(StringName const&, Variant const&) */

undefined8 AnimationNodeExtension::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* AnimationNodeExtension::_property_can_revertv(StringName const&) const */

undefined8 AnimationNodeExtension::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* AnimationNodeExtension::_property_get_revertv(StringName const&, Variant&) const */

undefined8 AnimationNodeExtension::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* AnimationNodeExtension::_notificationv(int, bool) */

void AnimationNodeExtension::_notificationv(int param_1,bool param_2)

{
  return;
}



/* MethodBindTRS<double, Vector<float> const&, bool>::_gen_argument_type(int) const */

char __thiscall
MethodBindTRS<double,Vector<float>const&,bool>::_gen_argument_type
          (MethodBindTRS<double,Vector<float>const&,bool> *this,int param_1)

{
  char cVar1;
  
  cVar1 = '\x03';
  if ((uint)param_1 < 2) {
    cVar1 = (-(param_1 == 0) & 0x1fU) + 1;
  }
  return cVar1;
}



/* MethodBindTRS<double, Vector<float> const&, bool>::get_argument_meta(int) const */

uint __thiscall
MethodBindTRS<double,Vector<float>const&,bool>::get_argument_meta
          (MethodBindTRS<double,Vector<float>const&,bool> *this,int param_1)

{
  return param_1 >> 0x1f & 10;
}



/* MethodBindTRS<double, Vector<float> const&, bool>::validated_call(Object*, Variant const**,
   Variant*) const */

void __thiscall
MethodBindTRS<double,Vector<float>const&,bool>::validated_call
          (MethodBindTRS<double,Vector<float>const&,bool> *this,Object *param_1,Variant **param_2,
          Variant *param_3)

{
  undefined8 uVar1;
  
  uVar1 = (**(code **)(this + 0x58))(*(long *)(*param_2 + 8) + 0x10,param_2[1][8]);
  *(undefined8 *)(param_3 + 8) = uVar1;
  return;
}



/* MethodBindTRS<double, Vector<float> const&, bool>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRS<double,Vector<float>const&,bool>::ptrcall
          (MethodBindTRS<double,Vector<float>const&,bool> *this,Object *param_1,void **param_2,
          void *param_3)

{
  undefined8 uVar1;
  
                    /* WARNING: Load size is inaccurate */
  uVar1 = (**(code **)(this + 0x58))(*param_2,*param_2[1] != '\0');
  *(undefined8 *)param_3 = uVar1;
  return;
}



/* MethodBindTRS<bool, Vector<float> const&>::_gen_argument_type(int) const */

char __thiscall
MethodBindTRS<bool,Vector<float>const&>::_gen_argument_type
          (MethodBindTRS<bool,Vector<float>const&> *this,int param_1)

{
  return (-(param_1 == 0) & 0x1fU) + 1;
}



/* MethodBindTRS<bool, Vector<float> const&>::get_argument_meta(int) const */

undefined8 MethodBindTRS<bool,Vector<float>const&>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindTRS<bool, Vector<float> const&>::validated_call(Object*, Variant const**, Variant*)
   const */

void __thiscall
MethodBindTRS<bool,Vector<float>const&>::validated_call
          (MethodBindTRS<bool,Vector<float>const&> *this,Object *param_1,Variant **param_2,
          Variant *param_3)

{
  Variant VVar1;
  
  VVar1 = (Variant)(**(code **)(this + 0x58))(*(long *)(*param_2 + 8) + 0x10);
  param_3[8] = VVar1;
  return;
}



/* MethodBindTRS<bool, Vector<float> const&>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRS<bool,Vector<float>const&>::ptrcall
          (MethodBindTRS<bool,Vector<float>const&> *this,Object *param_1,void **param_2,
          void *param_3)

{
  undefined1 uVar1;
  
  uVar1 = (**(code **)(this + 0x58))(*param_2);
  *(undefined1 *)param_3 = uVar1;
  return;
}



/* MethodBindTRS<bool, Vector<float> const&>::~MethodBindTRS() */

void __thiscall
MethodBindTRS<bool,Vector<float>const&>::~MethodBindTRS
          (MethodBindTRS<bool,Vector<float>const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001079b8;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRS<bool, Vector<float> const&>::~MethodBindTRS() */

void __thiscall
MethodBindTRS<bool,Vector<float>const&>::~MethodBindTRS
          (MethodBindTRS<bool,Vector<float>const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001079b8;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x60);
  return;
}



/* MethodBindTRS<double, Vector<float> const&, bool>::~MethodBindTRS() */

void __thiscall
MethodBindTRS<double,Vector<float>const&,bool>::~MethodBindTRS
          (MethodBindTRS<double,Vector<float>const&,bool> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00107a18;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRS<double, Vector<float> const&, bool>::~MethodBindTRS() */

void __thiscall
MethodBindTRS<double,Vector<float>const&,bool>::~MethodBindTRS
          (MethodBindTRS<double,Vector<float>const&,bool> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00107a18;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x60);
  return;
}



/* AnimationNodeExtension::_validate_propertyv(PropertyInfo&) const */

void AnimationNodeExtension::_validate_propertyv(PropertyInfo *param_1)

{
  if ((code *)_GLOBAL_OFFSET_TABLE_ != Object::_validate_property) {
    AnimationNode::_validate_property(param_1);
    return;
  }
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



/* CowData<double>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<double>::_copy_on_write(void)

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



/* AnimationNodeExtension::_bind_methods() [clone .cold] */

void AnimationNodeExtension::_bind_methods(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* AnimationNodeExtension::_process(AnimationMixer::PlaybackInfo, bool) [clone .cold] */

void AnimationNodeExtension::_process(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* AnimationNodeExtension::_get_class_namev() const */

undefined8 * AnimationNodeExtension::_get_class_namev(void)

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
LAB_00103183:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00103183;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"AnimationNodeExtension");
      goto LAB_001031ee;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"AnimationNodeExtension");
LAB_001031ee:
  return &_get_class_namev()::_class_name_static;
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



/* String::~String() */

void __thiscall String::~String(String *this)

{
  long *plVar1;
  long lVar2;
  
  if (*(long *)this != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)this + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)this;
      *(undefined8 *)this = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
      return;
    }
  }
  return;
}



/* MethodBindTRS<double, Vector<float> const&, bool>::call(Object*, Variant const**, int,
   Callable::CallError&) const */

Object * MethodBindTRS<double,Vector<float>const&,bool>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  long *plVar1;
  Variant *pVVar2;
  long lVar3;
  code *pcVar4;
  undefined8 uVar5;
  char cVar6;
  undefined4 uVar7;
  long lVar8;
  int iVar9;
  uint in_R8D;
  undefined4 *in_R9;
  int iVar10;
  Variant *pVVar11;
  Variant *pVVar12;
  long in_FS_OFFSET;
  double dVar13;
  Variant aVStack_58 [8];
  long local_50;
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  pVVar2 = param_2[0xb];
  *(undefined4 *)param_1 = 0;
  if (in_R8D < 3) {
    pVVar12 = param_2[5];
    iVar9 = 2 - in_R8D;
    if (pVVar12 == (Variant *)0x0) {
      if (iVar9 != 0) goto LAB_001035a8;
      pVVar11 = *(Variant **)param_4;
LAB_001035fd:
      pVVar12 = *(Variant **)(param_4 + 8);
    }
    else {
      lVar3 = *(long *)(pVVar12 + -8);
      iVar10 = (int)lVar3;
      if (iVar10 < iVar9) {
LAB_001035a8:
        uVar7 = 4;
        goto LAB_001035ad;
      }
      if (in_R8D == 0) {
        lVar8 = (long)(iVar10 + -2);
        if (lVar3 <= lVar8) goto LAB_00103618;
        pVVar11 = pVVar12 + lVar8 * 0x18;
      }
      else {
        pVVar11 = *(Variant **)param_4;
        if (in_R8D == 2) goto LAB_001035fd;
      }
      lVar8 = (long)(int)((iVar10 - iVar9) + (in_R8D ^ 1));
      if (lVar3 <= lVar8) {
LAB_00103618:
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar8,lVar3,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      pVVar12 = pVVar12 + lVar8 * 0x18;
    }
    *in_R9 = 0;
    cVar6 = Variant::can_convert_strict(*(undefined4 *)pVVar12,1);
    uVar5 = _LC18;
    if (cVar6 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar5;
    }
    Variant::operator_cast_to_bool(pVVar12);
    cVar6 = Variant::can_convert_strict(*(undefined4 *)pVVar11,0x20);
    uVar5 = _LC19;
    if (cVar6 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar5;
    }
    Variant::operator_cast_to_Vector(aVStack_58);
    dVar13 = (double)(*(code *)pVVar2)(aVStack_58);
    Variant::Variant((Variant *)local_48,dVar13);
    if (Variant::needs_deinit[*(int *)param_1] != '\0') {
      Variant::_clear_internal();
    }
    lVar3 = local_50;
    *(undefined4 *)param_1 = local_48[0];
    *(undefined8 *)(param_1 + 8) = local_40;
    *(undefined8 *)(param_1 + 0x10) = uStack_38;
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
  }
  else {
    uVar7 = 3;
LAB_001035ad:
    *in_R9 = uVar7;
    in_R9[2] = 2;
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* AnimationNodeExtension::get_class() const */

void AnimationNodeExtension::get_class(void)

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



/* MethodBindTRS<bool, Vector<float> const&>::call(Object*, Variant const**, int,
   Callable::CallError&) const */

Object * MethodBindTRS<bool,Vector<float>const&>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  long *plVar1;
  Variant *pVVar2;
  long lVar3;
  code *pcVar4;
  undefined8 uVar5;
  char cVar6;
  bool bVar7;
  undefined4 uVar8;
  long lVar9;
  uint in_R8D;
  undefined4 *in_R9;
  Variant *pVVar10;
  long in_FS_OFFSET;
  Variant aVStack_58 [8];
  long local_50;
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  pVVar2 = param_2[0xb];
  *(undefined4 *)param_1 = 0;
  if (in_R8D < 2) {
    pVVar10 = param_2[5];
    if (pVVar10 == (Variant *)0x0) {
      if (in_R8D != 1) goto LAB_00103908;
LAB_00103888:
      pVVar10 = *(Variant **)param_4;
    }
    else {
      lVar3 = *(long *)(pVVar10 + -8);
      if ((int)lVar3 < (int)(in_R8D ^ 1)) {
LAB_00103908:
        uVar8 = 4;
        goto LAB_00103895;
      }
      if (in_R8D == 1) goto LAB_00103888;
      lVar9 = (long)((int)lVar3 + -1);
      if (lVar3 <= lVar9) {
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar9,lVar3,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      pVVar10 = pVVar10 + lVar9 * 0x18;
    }
    *in_R9 = 0;
    cVar6 = Variant::can_convert_strict(*(undefined4 *)pVVar10,0x20);
    uVar5 = _LC19;
    if (cVar6 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar5;
    }
    Variant::operator_cast_to_Vector(aVStack_58);
    bVar7 = (bool)(*(code *)pVVar2)(aVStack_58);
    Variant::Variant((Variant *)local_48,bVar7);
    if (Variant::needs_deinit[*(int *)param_1] != '\0') {
      Variant::_clear_internal();
    }
    lVar3 = local_50;
    *(undefined4 *)param_1 = local_48[0];
    *(undefined8 *)(param_1 + 8) = local_40;
    *(undefined8 *)(param_1 + 0x10) = uStack_38;
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
  }
  else {
    uVar8 = 3;
LAB_00103895:
    *in_R9 = uVar8;
    in_R9[2] = 1;
  }
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* PropertyListHelper::~PropertyListHelper() */

void __thiscall PropertyListHelper::~PropertyListHelper(PropertyListHelper *this)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  void *pvVar5;
  
  pvVar5 = *(void **)(this + 0x18);
  if (pvVar5 != (void *)0x0) {
    if (*(int *)(this + 0x3c) != 0) {
      uVar2 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x38) * 4);
      if (uVar2 == 0) {
        *(undefined4 *)(this + 0x3c) = 0;
        *(undefined1 (*) [16])(this + 0x28) = (undefined1  [16])0x0;
      }
      else {
        lVar4 = 0;
        do {
          if (*(int *)(*(long *)(this + 0x20) + lVar4) != 0) {
            pvVar5 = *(void **)((long)pvVar5 + lVar4 * 2);
            *(int *)(*(long *)(this + 0x20) + lVar4) = 0;
            if (Variant::needs_deinit[*(int *)((long)pvVar5 + 0x48)] != '\0') {
              Variant::_clear_internal();
            }
            if (*(long *)((long)pvVar5 + 0x38) != 0) {
              LOCK();
              plVar1 = (long *)(*(long *)((long)pvVar5 + 0x38) + -0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                lVar3 = *(long *)((long)pvVar5 + 0x38);
                *(undefined8 *)((long)pvVar5 + 0x38) = 0;
                Memory::free_static((void *)(lVar3 + -0x10),false);
              }
            }
            if ((StringName::configured != '\0') && (*(long *)((long)pvVar5 + 0x28) != 0)) {
              StringName::unref();
            }
            if (*(long *)((long)pvVar5 + 0x20) != 0) {
              LOCK();
              plVar1 = (long *)(*(long *)((long)pvVar5 + 0x20) + -0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                lVar3 = *(long *)((long)pvVar5 + 0x20);
                *(undefined8 *)((long)pvVar5 + 0x20) = 0;
                Memory::free_static((void *)(lVar3 + -0x10),false);
              }
            }
            if (*(long *)((long)pvVar5 + 0x10) != 0) {
              LOCK();
              plVar1 = (long *)(*(long *)((long)pvVar5 + 0x10) + -0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                lVar3 = *(long *)((long)pvVar5 + 0x10);
                *(undefined8 *)((long)pvVar5 + 0x10) = 0;
                Memory::free_static((void *)(lVar3 + -0x10),false);
              }
            }
            Memory::free_static(pvVar5,false);
            pvVar5 = *(void **)(this + 0x18);
            *(undefined8 *)((long)pvVar5 + lVar4 * 2) = 0;
          }
          lVar4 = lVar4 + 4;
        } while (lVar4 != (ulong)uVar2 << 2);
        *(undefined4 *)(this + 0x3c) = 0;
        *(undefined1 (*) [16])(this + 0x28) = (undefined1  [16])0x0;
        if (pvVar5 == (void *)0x0) goto LAB_00103a84;
      }
    }
    Memory::free_static(pvVar5,false);
    Memory::free_static(*(void **)(this + 0x20),false);
  }
LAB_00103a84:
  if (*(long *)this != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)this + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar4 = *(long *)this;
      *(undefined8 *)this = 0;
      Memory::free_static((void *)(lVar4 + -0x10),false);
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
  local_48 = &_LC16;
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
      goto joined_r0x00103c4c;
    }
  }
  StringName::operator=((StringName *)(this + 0x10),(StringName *)&local_50);
  lVar2 = local_58;
joined_r0x00103c4c:
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



/* GetTypeInfo<Vector<float>, void>::get_class_info() */

GetTypeInfo<Vector<float>,void> * __thiscall
GetTypeInfo<Vector<float>,void>::get_class_info(GetTypeInfo<Vector<float>,void> *this)

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
  local_48 = &_LC16;
  local_40 = 0;
  String::parse_latin1((StrRange *)&local_58);
  *(undefined4 *)this = 0x20;
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
      goto joined_r0x00103dcc;
    }
  }
  StringName::operator=((StringName *)(this + 0x10),(StringName *)&local_50);
  lVar2 = local_58;
joined_r0x00103dcc:
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



/* GetTypeInfo<Vector<double>, void>::get_class_info() */

GetTypeInfo<Vector<double>,void> * __thiscall
GetTypeInfo<Vector<double>,void>::get_class_info(GetTypeInfo<Vector<double>,void> *this)

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
  local_48 = &_LC16;
  local_40 = 0;
  String::parse_latin1((StrRange *)&local_58);
  *(undefined4 *)this = 0x21;
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
      goto joined_r0x00103f4c;
    }
  }
  StringName::operator=((StringName *)(this + 0x10),(StringName *)&local_50);
  lVar2 = local_58;
joined_r0x00103f4c:
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
LAB_00104108:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00104108;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)pLVar6;
      local_68 = local_80;
      goto joined_r0x00104126;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)pLVar6;
joined_r0x00104126:
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
LAB_00104508:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00104508;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x00104525;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x00104525:
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



/* AnimationNode::is_class(String const&) const */

undefined8 __thiscall AnimationNode::is_class(AnimationNode *this,String *param_1)

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
            if (lVar5 == 0) goto LAB_0010485f;
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
LAB_0010485f:
    cVar6 = String::operator==((String *)param_1,(String *)&local_60);
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
    if (cVar6 != '\0') goto LAB_00104913;
  }
  cVar6 = String::operator==((String *)param_1,"AnimationNode");
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
LAB_00104a83:
      cVar6 = String::operator==((String *)param_1,(String *)&local_60);
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
      if (cVar6 != '\0') goto LAB_00104913;
    }
    cVar6 = String::operator==((String *)param_1,"Resource");
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
                if (lVar5 == 0) goto LAB_00104b63;
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
LAB_00104b63:
        cVar6 = String::operator==((String *)param_1,(String *)&local_60);
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
        if (cVar6 != '\0') goto LAB_00104913;
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
              plVar1 = (long *)(*(long *)(lVar4 + 0x10) + -0x10);
              if (*(long *)(lVar4 + 0x10) != 0) {
                do {
                  lVar5 = *plVar1;
                  if (lVar5 == 0) goto LAB_001049eb;
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
LAB_001049eb:
          cVar6 = String::operator==((String *)param_1,(String *)&local_60);
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
          if (cVar6 != '\0') goto LAB_00104913;
        }
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          uVar8 = String::operator==((String *)param_1,"Object");
          return uVar8;
        }
        goto LAB_00104c79;
      }
    }
  }
LAB_00104913:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_00104c79:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* AnimationNodeExtension::is_class(String const&) const */

undefined8 __thiscall AnimationNodeExtension::is_class(AnimationNodeExtension *this,String *param_1)

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
            if (lVar4 == 0) goto LAB_00104cef;
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
LAB_00104cef:
    cVar5 = String::operator==((String *)param_1,(String *)&local_60);
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
    if (cVar5 != '\0') goto LAB_00104da3;
  }
  cVar5 = String::operator==((String *)param_1,"AnimationNodeExtension");
  if (cVar5 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = AnimationNode::is_class((AnimationNode *)this,param_1);
      return uVar7;
    }
  }
  else {
LAB_00104da3:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* AnimationNode::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall AnimationNode::_get_property_listv(AnimationNode *this,List *param_1,bool param_2)

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
  local_78 = "AnimationNode";
  local_70 = 0xd;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "AnimationNode";
  local_98 = 0;
  local_70 = 0xd;
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
LAB_00104f78:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00104f78;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x00104f95;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x00104f95:
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
  StringName::StringName((StringName *)&local_78,"AnimationNode",false);
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



/* AnimationNodeExtension::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall
AnimationNodeExtension::_get_property_listv(AnimationNodeExtension *this,List *param_1,bool param_2)

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
    AnimationNode::_get_property_listv((AnimationNode *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "AnimationNodeExtension";
  local_70 = 0x16;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "AnimationNodeExtension";
  local_98 = 0;
  local_70 = 0x16;
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
LAB_001053c8:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_001053c8;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x001053e5;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x001053e5:
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
  StringName::StringName((StringName *)&local_78,"AnimationNodeExtension",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      AnimationNode::_get_property_listv((AnimationNode *)this,param_1,true);
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



/* CowData<StringName>::_unref() */

void __thiscall CowData<StringName>::_unref(CowData<StringName> *this)

{
  long *plVar1;
  long lVar2;
  code *pcVar3;
  long *plVar4;
  long lVar5;
  
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
      lVar2 = plVar1[-1];
      *(undefined8 *)this = 0;
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
      return;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  *(undefined8 *)this = 0;
  return;
}



/* AnimationNode::~AnimationNode() */

void __thiscall AnimationNode::~AnimationNode(AnimationNode *this)

{
  long *plVar1;
  long *plVar2;
  void *pvVar3;
  long lVar4;
  long lVar5;
  bool bVar6;
  
  bVar6 = StringName::configured != '\0';
  *(code **)this = Resource::~Resource;
  if (bVar6) {
    if (*(long *)(this + 0x388) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00105b78;
    }
    if (*(long *)(this + 0x370) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00105b78;
    }
    if (*(long *)(this + 0x358) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00105b78;
    }
    if (*(long *)(this + 0x340) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00105b78;
    }
    if (*(long *)(this + 0x328) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00105b78;
    }
    if (*(long *)(this + 0x310) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00105b78;
    }
    if (*(long *)(this + 0x2f8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00105b78;
    }
    if (*(long *)(this + 0x2e0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00105b78;
    }
    if (*(long *)(this + 0x2d8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00105b78;
    }
    if (*(long *)(this + 0x2d0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00105b78;
    }
    if (*(long *)(this + 0x2c8) != 0) {
      StringName::unref();
    }
  }
LAB_00105b78:
  pvVar3 = *(void **)(this + 0x2b0);
  if (pvVar3 != (void *)0x0) {
    if (*(int *)(this + 0x2c4) != 0) {
      lVar4 = 0;
      do {
        if ((StringName::configured != '\0') && (*(long *)(lVar4 * 0x10 + (long)pvVar3) != 0)) {
          StringName::unref();
          pvVar3 = *(void **)(this + 0x2b0);
        }
        lVar4 = lVar4 + 1;
      } while ((uint)lVar4 < *(uint *)(this + 0x2c4));
    }
    Memory::free_static(pvVar3,false);
    Memory::free_static(*(void **)(this + 0x2b8),false);
  }
  if (*(void **)(this + 0x2a0) != (void *)0x0) {
    if (*(int *)(this + 0x298) != 0) {
      *(undefined4 *)(this + 0x298) = 0;
    }
    Memory::free_static(*(void **)(this + 0x2a0),false);
  }
  CowData<StringName>::_unref((CowData<StringName> *)(this + 0x290));
  if ((StringName::configured != '\0') && (*(long *)(this + 0x278) != 0)) {
    StringName::unref();
  }
  pvVar3 = *(void **)(this + 600);
  if (pvVar3 != (void *)0x0) {
    if (*(int *)(this + 0x26c) != 0) {
      lVar4 = 0;
      do {
        lVar5 = lVar4 + 1;
        NodePath::~NodePath((NodePath *)((long)pvVar3 + lVar4 * 0x10));
        pvVar3 = *(void **)(this + 600);
        lVar4 = lVar5;
      } while ((uint)lVar5 < *(uint *)(this + 0x26c));
    }
    Memory::free_static(pvVar3,false);
    Memory::free_static(*(void **)(this + 0x260),false);
  }
  pvVar3 = *(void **)(this + 0x250);
  if (pvVar3 != (void *)0x0) {
    if (*(int *)(this + 0x248) != 0) {
      lVar4 = 0;
      do {
        plVar2 = (long *)((long)pvVar3 + lVar4 * 8);
        if (*plVar2 != 0) {
          LOCK();
          plVar1 = (long *)(*plVar2 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            lVar5 = *plVar2;
            *plVar2 = 0;
            Memory::free_static((void *)(lVar5 + -0x10),false);
          }
          pvVar3 = *(void **)(this + 0x250);
        }
        lVar4 = lVar4 + 1;
      } while ((uint)lVar4 < *(uint *)(this + 0x248));
      *(undefined4 *)(this + 0x248) = 0;
      if (pvVar3 == (void *)0x0) goto LAB_00105cdb;
    }
    Memory::free_static(pvVar3,false);
    Resource::~Resource((Resource *)this);
    return;
  }
LAB_00105cdb:
  Resource::~Resource((Resource *)this);
  return;
}



/* AnimationNode::~AnimationNode() */

void __thiscall AnimationNode::~AnimationNode(AnimationNode *this)

{
  ~AnimationNode(this);
  operator_delete(this,0x3a0);
  return;
}



/* AnimationNodeExtension::~AnimationNodeExtension() */

void __thiscall AnimationNodeExtension::~AnimationNodeExtension(AnimationNodeExtension *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(undefined ***)this = &PTR__initialize_classv_00107770;
  if ((bVar1) && (*(long *)(this + 0x3a0) != 0)) {
    StringName::unref();
  }
  AnimationNode::~AnimationNode((AnimationNode *)this);
  return;
}



/* AnimationNodeExtension::~AnimationNodeExtension() */

void __thiscall AnimationNodeExtension::~AnimationNodeExtension(AnimationNodeExtension *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(undefined ***)this = &PTR__initialize_classv_00107770;
  if ((bVar1) && (*(long *)(this + 0x3a0) != 0)) {
    StringName::unref();
  }
  AnimationNode::~AnimationNode((AnimationNode *)this);
  operator_delete(this,0x3b8);
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
LAB_00106160:
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
  if (lVar10 == 0) goto LAB_00106160;
  if (param_1 <= lVar6) {
    lVar6 = *(long *)this;
    uVar8 = param_1;
    while (lVar6 != 0) {
      if (*(ulong *)(lVar6 + -8) <= uVar8) {
LAB_00106039:
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
        if (*(ulong *)(lVar6 + -8) <= uVar8) goto LAB_00106039;
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
    goto LAB_001061b6;
  }
  if (lVar10 == lVar7) {
LAB_001060df:
    puVar9 = *(undefined8 **)this;
    if (puVar9 == (undefined8 *)0x0) {
LAB_001061b6:
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    lVar6 = puVar9[-1];
    if (param_1 <= lVar6) goto LAB_001060ca;
  }
  else {
    if (lVar6 != 0) {
      uVar4 = _realloc(this,lVar10);
      if ((int)uVar4 != 0) {
        return uVar4;
      }
      goto LAB_001060df;
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
LAB_001060ca:
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
LAB_00106440:
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
  if (lVar8 == 0) goto LAB_00106440;
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
        goto LAB_00106351;
      }
      uVar6 = _realloc(this,lVar8);
      if ((int)uVar6 != 0) {
        return uVar6;
      }
    }
    puVar7 = *(undefined8 **)this;
    if (puVar7 != (undefined8 *)0x0) {
LAB_00106351:
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



/* AnimationNodeExtension::_initialize_classv() */

void AnimationNodeExtension::_initialize_classv(void)

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
    if (AnimationNode::initialize_class()::initialized == '\0') {
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
          if ((code *)PTR__bind_methods_0010a010 != RefCounted::_bind_methods) {
            RefCounted::_bind_methods();
          }
          RefCounted::initialize_class()::initialized = '\x01';
        }
        local_68 = 0;
        local_58 = "RefCounted";
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
        Resource::_bind_methods();
        Resource::initialize_class()::initialized = '\x01';
      }
      local_58 = "Resource";
      local_68 = 0;
      local_50 = 8;
      String::parse_latin1((StrRange *)&local_68);
      StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
      local_58 = "AnimationNode";
      local_70 = 0;
      local_50 = 0xd;
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
      if ((code *)PTR__bind_methods_0010a008 != Resource::_bind_methods) {
        AnimationNode::_bind_methods();
      }
      AnimationNode::initialize_class()::initialized = '\x01';
    }
    local_58 = "AnimationNode";
    local_68 = 0;
    local_50 = 0xd;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "AnimationNodeExtension";
    local_70 = 0;
    local_50 = 0x16;
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
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CowData<double>::_realloc(long) */

undefined8 __thiscall CowData<double>::_realloc(CowData<double> *this,long param_1)

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
/* Error CowData<double>::resize<false>(long) */

undefined8 __thiscall CowData<double>::resize<false>(CowData<double> *this,long param_1)

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
    lVar3 = lVar9 * 8;
    if (lVar3 != 0) {
      uVar4 = lVar3 - 1U | lVar3 - 1U >> 1;
      uVar4 = uVar4 | uVar4 >> 2;
      uVar4 = uVar4 | uVar4 >> 4;
      uVar4 = uVar4 | uVar4 >> 8;
      uVar4 = uVar4 | uVar4 >> 0x10;
      lVar3 = (uVar4 | uVar4 >> 0x20) + 1;
    }
  }
  if (param_1 * 8 == 0) {
LAB_00106ca0:
    _err_print_error("resize","./core/templates/cowdata.h",0x16a,
                     "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                     ,0,0);
    return 6;
  }
  uVar4 = param_1 * 8 - 1;
  uVar4 = uVar4 | uVar4 >> 1;
  uVar4 = uVar4 | uVar4 >> 2;
  uVar4 = uVar4 | uVar4 >> 4;
  uVar4 = uVar4 | uVar4 >> 8;
  uVar4 = uVar4 | uVar4 >> 0x10;
  uVar4 = uVar4 | uVar4 >> 0x20;
  lVar8 = uVar4 + 1;
  if (lVar8 == 0) goto LAB_00106ca0;
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
        goto LAB_00106bb1;
      }
      uVar6 = _realloc(this,lVar8);
      if ((int)uVar6 != 0) {
        return uVar6;
      }
    }
    puVar7 = *(undefined8 **)this;
    if (puVar7 != (undefined8 *)0x0) {
LAB_00106bb1:
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



/* void call_get_argument_type_info_helper<Vector<float> const&>(int, int&, PropertyInfo&) */

void call_get_argument_type_info_helper<Vector<float>const&>
               (int param_1,int *param_2,PropertyInfo *param_3)

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
  if (iVar8 != param_1) goto LAB_00106d25;
  local_78 = 0;
  local_68 = &_LC16;
  local_80 = 0;
  auVar3._8_8_ = 0;
  auVar3._0_8_ = local_60._8_8_;
  local_60 = auVar3 << 0x40;
  String::parse_latin1((StrRange *)&local_80);
  local_68 = (undefined *)CONCAT44(local_68._4_4_,0x20);
  local_50 = 0;
  local_48 = 0;
  local_60 = (undefined1  [16])0x0;
  if (local_80 == 0) {
LAB_00106e18:
    local_40 = 6;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_78);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_80);
    local_40 = 6;
    if (local_50 != 0x11) goto LAB_00106e18;
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
LAB_00106d25:
  *param_2 = iVar8 + 1;
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* MethodBindTRS<bool, Vector<float> const&>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRS<bool,Vector<float>const&>::_gen_argument_type_info(int param_1)

{
  long *plVar1;
  undefined1 auVar2 [16];
  ulong uVar3;
  int in_EDX;
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
  if (in_EDX == 0) {
    local_68 = (undefined *)0x0;
    local_50 = 0;
    local_48 = 0;
    local_40 = 6;
    local_70 = local_70 & 0xffffffff00000000;
    local_60 = (undefined1  [16])0x0;
    call_get_argument_type_info_helper<Vector<float>const&>
              (0,(int *)&local_70,(PropertyInfo *)&local_68);
    *puVar4 = local_68._0_4_;
    *(undefined8 *)(puVar4 + 2) = local_60._0_8_;
    *(undefined8 *)(puVar4 + 4) = local_60._8_8_;
    puVar4[6] = (undefined4)local_50;
    *(undefined8 *)(puVar4 + 8) = local_48;
    puVar4[10] = local_40;
    goto LAB_00107085;
  }
  local_78 = 0;
  local_70 = 0;
  local_68 = &_LC16;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = local_60._0_8_;
  local_60 = auVar2 << 0x40;
  String::parse_latin1((StrRange *)&local_70);
  *puVar4 = 1;
  puVar4[6] = 0;
  *(undefined8 *)(puVar4 + 8) = 0;
  *(undefined1 (*) [16])(puVar4 + 2) = (undefined1  [16])0x0;
  if (local_70 == 0) {
    puVar4[10] = 6;
LAB_0010719f:
    StringName::operator=((StringName *)(puVar4 + 4),(StringName *)&local_78);
    uVar3 = local_70;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar4 + 8),(CowData *)&local_70);
    puVar4[10] = 6;
    if (puVar4[6] != 0x11) goto LAB_0010719f;
    StringName::StringName((StringName *)&local_68,(String *)(puVar4 + 8),false);
    if (*(undefined **)(puVar4 + 4) == local_68) {
      uVar3 = local_70;
      if ((StringName::configured != '\0') && (local_68 != (undefined *)0x0)) {
        StringName::unref();
        uVar3 = local_70;
      }
    }
    else {
      StringName::unref();
      *(undefined **)(puVar4 + 4) = local_68;
      uVar3 = local_70;
    }
  }
  local_70 = uVar3;
  if (uVar3 != 0) {
    LOCK();
    plVar1 = (long *)(uVar3 - 0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_70 = 0;
      Memory::free_static((void *)(uVar3 - 0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_78 != 0)) {
    StringName::unref();
  }
LAB_00107085:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar4;
}



/* MethodBindTRS<double, Vector<float> const&, bool>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRS<double,Vector<float>const&,bool>::_gen_argument_type_info(int param_1)

{
  long *plVar1;
  undefined1 auVar2 [16];
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  uint in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar7;
  long in_FS_OFFSET;
  ulong local_a0;
  long local_98;
  undefined1 local_90 [16];
  undefined8 local_80;
  long local_78;
  undefined4 local_70;
  undefined *local_68;
  long local_60;
  long local_58;
  undefined4 local_50;
  long local_48;
  undefined4 local_40;
  long local_30;
  
  puVar7 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (in_EDX < 2) {
    local_98 = 0;
    local_90 = (undefined1  [16])0x0;
    local_80 = 0;
    local_78 = 0;
    local_70 = 6;
    local_a0 = local_a0 & 0xffffffff00000000;
    call_get_argument_type_info_helper<Vector<float>const&>
              (in_EDX,(int *)&local_a0,(PropertyInfo *)&local_98);
    if (in_EDX == (uint)local_a0) {
      GetTypeInfo<bool,void>::get_class_info((GetTypeInfo<bool,void> *)&local_68);
      local_98 = CONCAT44(local_98._4_4_,local_68._0_4_);
      uVar4 = local_90._0_8_;
      if (local_90._0_8_ != local_60) {
        if (local_90._0_8_ != 0) {
          LOCK();
          plVar1 = (long *)(local_90._0_8_ + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            auVar2._8_8_ = 0;
            auVar2._0_8_ = local_90._8_8_;
            local_90 = auVar2 << 0x40;
            Memory::free_static((void *)(uVar4 + -0x10),false);
          }
        }
        local_90._0_8_ = local_60;
        local_60 = 0;
      }
      if (local_90._8_8_ != local_58) {
        StringName::unref();
        lVar5 = local_58;
        local_58 = 0;
        local_90._8_8_ = lVar5;
      }
      lVar6 = local_48;
      lVar5 = local_78;
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
            Memory::free_static((void *)(lVar6 + -0x10),false);
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
            Memory::free_static((void *)(lVar5 + -0x10),false);
          }
        }
        local_78 = local_48;
        local_70 = local_40;
      }
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      lVar5 = local_60;
      if (local_60 != 0) {
        LOCK();
        plVar1 = (long *)(local_60 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_60 = 0;
          Memory::free_static((void *)(lVar5 + -0x10),false);
        }
      }
    }
    *puVar7 = (undefined4)local_98;
    *(undefined8 *)(puVar7 + 2) = local_90._0_8_;
    *(undefined8 *)(puVar7 + 4) = local_90._8_8_;
    puVar7[6] = (undefined4)local_80;
    *(long *)(puVar7 + 8) = local_78;
    puVar7[10] = local_70;
    goto LAB_00107360;
  }
  local_98 = 0;
  local_a0 = 0;
  local_68 = &_LC16;
  local_60 = 0;
  String::parse_latin1((StrRange *)&local_a0);
  *puVar7 = 3;
  puVar7[6] = 0;
  *(undefined8 *)(puVar7 + 8) = 0;
  *(undefined1 (*) [16])(puVar7 + 2) = (undefined1  [16])0x0;
  if (local_a0 == 0) {
    puVar7[10] = 6;
LAB_0010738f:
    StringName::operator=((StringName *)(puVar7 + 4),(StringName *)&local_98);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar7 + 8),(CowData *)&local_a0);
    puVar7[10] = 6;
    if (puVar7[6] != 0x11) goto LAB_0010738f;
    StringName::StringName((StringName *)&local_68,(String *)(puVar7 + 8),false);
    if (*(undefined **)(puVar7 + 4) == local_68) {
      if ((StringName::configured != '\0') && (local_68 != (undefined *)0x0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      *(undefined **)(puVar7 + 4) = local_68;
    }
  }
  uVar3 = local_a0;
  if (local_a0 != 0) {
    LOCK();
    plVar1 = (long *)(local_a0 - 0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_a0 = 0;
      Memory::free_static((void *)(uVar3 - 0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_98 != 0)) {
    StringName::unref();
  }
LAB_00107360:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar7;
}



/* AnimationNodeExtension::_process(AnimationMixer::PlaybackInfo, bool) */

void AnimationNodeExtension::_GLOBAL__sub_I__process(void)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (Animation::PARAMETERS_BASE_PATH == '\0') {
    Animation::PARAMETERS_BASE_PATH = 0;
    Animation::PARAMETERS_BASE_PATH = '\x01';
    String::parse_latin1((StrRange *)&Animation::PARAMETERS_BASE_PATH);
    __cxa_atexit(String::~String,&Animation::PARAMETERS_BASE_PATH,&__dso_handle);
  }
  if (AudioStreamRandomizer::base_property_helper == '\0') {
    AudioStreamRandomizer::base_property_helper = '\x01';
    AudioStreamRandomizer::base_property_helper._56_8_ = 2;
    AudioStreamRandomizer::base_property_helper._64_8_ = 0;
    AudioStreamRandomizer::base_property_helper._0_16_ = (undefined1  [16])0x0;
    AudioStreamRandomizer::base_property_helper._24_16_ = (undefined1  [16])0x0;
    AudioStreamRandomizer::base_property_helper._40_16_ = (undefined1  [16])0x0;
    if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
      __cxa_atexit(PropertyListHelper::~PropertyListHelper,
                   AudioStreamRandomizer::base_property_helper,&__dso_handle);
      return;
    }
  }
  else if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Control flow encountered bad instruction data */
/* AnimationNodeExtension::~AnimationNodeExtension() */

void __thiscall AnimationNodeExtension::~AnimationNodeExtension(AnimationNodeExtension *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* AnimationNode::~AnimationNode() */

void __thiscall AnimationNode::~AnimationNode(AnimationNode *this)

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
/* PropertyListHelper::~PropertyListHelper() */

void __thiscall PropertyListHelper::~PropertyListHelper(PropertyListHelper *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* String::~String() */

void __thiscall String::~String(String *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRS<double, Vector<float> const&, bool>::~MethodBindTRS() */

void __thiscall
MethodBindTRS<double,Vector<float>const&,bool>::~MethodBindTRS
          (MethodBindTRS<double,Vector<float>const&,bool> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRS<bool, Vector<float> const&>::~MethodBindTRS() */

void __thiscall
MethodBindTRS<bool,Vector<float>const&>::~MethodBindTRS
          (MethodBindTRS<bool,Vector<float>const&> *this)

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



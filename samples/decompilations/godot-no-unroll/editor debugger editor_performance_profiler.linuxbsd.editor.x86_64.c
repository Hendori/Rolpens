
/* EditorPerformanceProfiler::_monitor_select() */

void EditorPerformanceProfiler::_monitor_select(void)

{
  CanvasItem::queue_redraw();
  return;
}



/* EditorPerformanceProfiler::Monitor::Monitor() */

void __thiscall EditorPerformanceProfiler::Monitor::Monitor(Monitor *this)

{
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined1 (*) [16])this = (undefined1  [16])0x0;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EditorPerformanceProfiler::_create_label(float, Performance::MonitorType) */

EditorPerformanceProfiler * __thiscall
EditorPerformanceProfiler::_create_label(float param_1,EditorPerformanceProfiler *this,int param_3)

{
  char cVar1;
  Object *pOVar2;
  code *pcVar3;
  long in_FS_OFFSET;
  CowData<char32_t> local_88 [8];
  CowData<char32_t> local_80 [8];
  undefined8 local_78;
  String local_70 [8];
  undefined8 local_68;
  String local_60 [8];
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_3 == 1) {
    String::humanize_size((ulong)this);
  }
  else if (param_3 == 2) {
    local_50 = 0;
    String::parse_latin1((String *)&local_50,"");
    local_58 = 0;
    String::parse_latin1((String *)&local_58,"ms");
    TTR((String *)&local_48,(String *)&local_58);
    local_68 = 0;
    String::parse_latin1((String *)&local_68," ");
    pOVar2 = *(Object **)(TextServerManager::singleton + 0x178);
    if (pOVar2 == (Object *)0x0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    cVar1 = RefCounted::reference();
    if (cVar1 == '\0') {
      pOVar2 = (Object *)0x0;
    }
    local_78 = 0;
    pcVar3 = *(code **)(*(long *)pOVar2 + 0x7c0);
    String::parse_latin1((String *)&local_78,"");
    rtos((double)(param_1 * __LC22));
    String::pad_decimals((int)local_80);
    (*pcVar3)(local_70,pOVar2,local_80,(String *)&local_78);
    String::operator+(local_60,local_70);
    String::operator+((String *)this,local_60);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_60);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_70);
    CowData<char32_t>::_unref(local_80);
    CowData<char32_t>::_unref(local_88);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
    cVar1 = RefCounted::unreference();
    if ((cVar1 != '\0') && (cVar1 = predelete_handler(pOVar2), cVar1 != '\0')) {
      (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
      Memory::free_static(pOVar2,false);
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
  }
  else {
    pOVar2 = *(Object **)(TextServerManager::singleton + 0x178);
    if (param_3 == 0) {
      if (pOVar2 == (Object *)0x0) {
LAB_00106d0e:
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      cVar1 = RefCounted::reference();
      if (cVar1 == '\0') {
        pOVar2 = (Object *)0x0;
      }
      pcVar3 = *(code **)(*(long *)pOVar2 + 0x7c0);
      local_48 = 0;
      String::parse_latin1((String *)&local_48,"");
      itos((long)&local_50);
    }
    else {
      if (pOVar2 == (Object *)0x0) goto LAB_00106d0e;
      cVar1 = RefCounted::reference();
      if (cVar1 == '\0') {
        pOVar2 = (Object *)0x0;
      }
      pcVar3 = *(code **)(*(long *)pOVar2 + 0x7c0);
      local_48 = 0;
      String::parse_latin1((String *)&local_48,"");
      rtos((double)param_1);
    }
    (*pcVar3)(this,pOVar2,(CowData<char32_t> *)&local_50,(CowData<char32_t> *)&local_48);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
    cVar1 = RefCounted::unreference();
    if ((cVar1 != '\0') && (cVar1 = predelete_handler(pOVar2), cVar1 != '\0')) {
      (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
      Memory::free_static(pOVar2,false);
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CowData<char32_t>::_ref(CowData<char32_t> const&) [clone .part.0] */

void __thiscall CowData<char32_t>::_ref(CowData<char32_t> *this,CowData *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  bool bVar4;
  
  _unref(this);
  if (*(long *)param_1 != 0) {
    plVar1 = (long *)(*(long *)param_1 + -0x10);
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



/* EditorPerformanceProfiler::_create_monitor_item(StringName const&, TreeItem*) */

undefined8 __thiscall
EditorPerformanceProfiler::_create_monitor_item
          (EditorPerformanceProfiler *this,StringName *param_1,TreeItem *param_2)

{
  long lVar1;
  char *__s;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  int iVar5;
  long in_FS_OFFSET;
  undefined8 local_70;
  undefined8 local_68;
  long local_60;
  char *local_58;
  size_t local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar4 = Tree::create_item(*(TreeItem **)(this + 0xad0),(int)param_2);
  TreeItem::set_cell_mode(uVar4,0,1);
  iVar5 = (int)uVar4;
  TreeItem::set_editable(iVar5,false);
  TreeItem::set_selectable(iVar5,false);
  TreeItem::set_selectable(iVar5,true);
  uVar2 = EditorPropertyNameProcessor::singleton;
  StringName::StringName((StringName *)&local_60,"",false);
  local_58 = "";
  local_68 = 0;
  local_50 = 0;
  String::parse_latin1((StrRange *)&local_68);
  uVar3 = EditorPropertyNameProcessor::get_settings_style();
  lVar1 = *(long *)param_1;
  if (lVar1 == 0) {
    local_70 = 0;
  }
  else {
    __s = *(char **)(lVar1 + 8);
    local_70 = 0;
    if (__s == (char *)0x0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)(lVar1 + 0x10));
    }
    else {
      local_50 = strlen(__s);
      local_58 = __s;
      String::parse_latin1((StrRange *)&local_70);
    }
  }
  EditorPropertyNameProcessor::process_name
            ((CowData<char32_t> *)&local_58,uVar2,(CowData<char32_t> *)&local_70,uVar3,
             (StrRange *)&local_68,(StringName *)&local_60);
  TreeItem::set_text(uVar4,0,(CowData<char32_t> *)&local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  if ((StringName::configured != '\0') && (local_60 != 0)) {
    StringName::unref();
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorPerformanceProfiler::Monitor::update_value(float) */

void __thiscall EditorPerformanceProfiler::Monitor::update_value(Monitor *this,float param_1)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  CowData<char32_t> local_60 [8];
  undefined8 local_58;
  CowData<char32_t> local_50 [8];
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(this + 0x20) == 0) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      _err_print_error("update_value","editor/debugger/editor_performance_profiler.cpp",0x33,
                       "Parameter \"item\" is null.",0,0);
      return;
    }
  }
  else {
    _create_label((EditorPerformanceProfiler *)local_60,*(undefined4 *)(this + 0x28));
    local_58 = 0;
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)local_60);
    if (*(int *)(this + 0x28) - 1U < 2) {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)local_60);
    }
    else {
      TreeItem::get_text((int)local_50);
      operator+((char *)&local_48,(String *)&_LC21);
      String::operator+=((String *)&local_58,(String *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref(local_50);
    }
    uVar1 = *(undefined8 *)(this + 0x20);
    local_48 = 0;
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)local_60);
    TreeItem::set_text(uVar1,1,(CowData<char32_t> *)&local_48);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
    TreeItem::set_tooltip_text((int)*(undefined8 *)(this + 0x20),(String *)0x1);
    if (*(float *)(this + 0x18) <= param_1 && param_1 != *(float *)(this + 0x18)) {
      *(float *)(this + 0x18) = param_1;
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
    CowData<char32_t>::_unref(local_60);
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorPerformanceProfiler::add_profile_frame(Vector<float> const&) */

void __thiscall
EditorPerformanceProfiler::add_profile_frame(EditorPerformanceProfiler *this,Vector *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  long *plVar4;
  float *pfVar5;
  undefined1 (*pauVar6) [16];
  float fVar7;
  
  for (puVar2 = *(undefined8 **)(this + 0xa88); puVar2 != (undefined8 *)0x0;
      puVar2 = (undefined8 *)*puVar2) {
    iVar1 = *(int *)((long)puVar2 + 0x44);
    fVar7 = 0.0;
    if (((-1 < iVar1) && (lVar3 = *(long *)(param_1 + 8), lVar3 != 0)) &&
       ((long)iVar1 < *(long *)(lVar3 + -8))) {
      fVar7 = *(float *)(lVar3 + (long)iVar1 * 4);
    }
    if (puVar2[5] == 0) {
      pauVar6 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
      puVar2[5] = pauVar6;
      *(undefined4 *)pauVar6[1] = 0;
      *pauVar6 = (undefined1  [16])0x0;
    }
    pfVar5 = (float *)operator_new(0x20,DefaultAllocator::alloc);
    plVar4 = (long *)puVar2[5];
    pfVar5[4] = 0.0;
    pfVar5[5] = 0.0;
    lVar3 = *plVar4;
    *pfVar5 = fVar7;
    *(long **)(pfVar5 + 6) = plVar4;
    *(long *)(pfVar5 + 2) = lVar3;
    if (lVar3 != 0) {
      *(float **)(lVar3 + 0x10) = pfVar5;
    }
    *plVar4 = (long)pfVar5;
    if (plVar4[1] == 0) {
      plVar4[1] = (long)pfVar5;
    }
    *(int *)(plVar4 + 2) = (int)plVar4[2] + 1;
    Monitor::update_value((Monitor *)(puVar2 + 3),fVar7);
  }
  *(int *)(this + 0xaf0) = *(int *)(this + 0xaf0) + 1;
  CanvasItem::queue_redraw();
  return;
}



/* EditorPerformanceProfiler::Monitor::Monitor(String const&, String const&, int,
   Performance::MonitorType, TreeItem*) */

void __thiscall
EditorPerformanceProfiler::Monitor::Monitor
          (Monitor *this,CowData *param_1,CowData *param_2,undefined4 param_3,undefined4 param_5,
          undefined8 param_6)

{
  long lVar1;
  
  *(undefined1 (*) [16])this = (undefined1  [16])0x0;
  lVar1 = *(long *)param_1;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x28) = param_5;
  *(undefined8 *)(this + 0x20) = param_6;
  *(undefined4 *)(this + 0x2c) = param_3;
  if (lVar1 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)this,param_1);
    lVar1 = *(long *)(this + 8);
  }
  if (lVar1 != *(long *)param_2) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(this + 8),param_2);
    return;
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



/* EditorPerformanceProfiler::Monitor::reset() */

void __thiscall EditorPerformanceProfiler::Monitor::reset(Monitor *this)

{
  void *pvVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  long in_FS_OFFSET;
  undefined8 local_50;
  undefined *local_48;
  undefined8 local_40;
  long local_30;
  
  plVar5 = *(long **)(this + 0x10);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (plVar5 != (long *)0x0) {
    do {
      pvVar1 = (void *)*plVar5;
      if (pvVar1 == (void *)0x0) goto LAB_00100b21;
      if (*(long **)((long)pvVar1 + 0x18) == plVar5) {
        lVar4 = *(long *)((long)pvVar1 + 8);
        lVar2 = *(long *)((long)pvVar1 + 0x10);
        *plVar5 = lVar4;
        if (pvVar1 == (void *)plVar5[1]) {
          plVar5[1] = lVar2;
        }
        if (lVar2 != 0) {
          *(long *)(lVar2 + 8) = lVar4;
          lVar4 = *(long *)((long)pvVar1 + 8);
        }
        if (lVar4 != 0) {
          *(long *)(lVar4 + 0x10) = lVar2;
        }
        Memory::free_static(pvVar1,false);
        *(int *)(plVar5 + 2) = (int)plVar5[2] + -1;
      }
      else {
        _err_print_error("erase","./core/templates/list.h",0xe7,
                         "Condition \"p_I->data != this\" is true. Returning: false",0,0);
      }
      plVar5 = *(long **)(this + 0x10);
    } while ((int)plVar5[2] != 0);
    Memory::free_static(plVar5,false);
    *(undefined8 *)(this + 0x10) = 0;
  }
LAB_00100b21:
  lVar4 = *(long *)(this + 0x20);
  *(undefined4 *)(this + 0x18) = 0;
  if (lVar4 != 0) {
    local_50 = 0;
    local_40 = 0;
    local_48 = &_LC12;
    String::parse_latin1((StrRange *)&local_50);
    TreeItem::set_text(lVar4,1,(StrRange *)&local_50);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
    uVar3 = *(undefined8 *)(this + 0x20);
    local_50 = 0;
    local_48 = &_LC12;
    local_40 = 0;
    String::parse_latin1((StrRange *)&local_50);
    TreeItem::set_tooltip_text((int)uVar3,(String *)0x1);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* HashMap<StringName, EditorPerformanceProfiler::Monitor, HashMapHasherDefault,
   HashMapComparatorDefault<StringName>, DefaultTypedAllocator<HashMapElement<StringName,
   EditorPerformanceProfiler::Monitor> > >::erase(StringName const&) [clone .isra.0] */

void __thiscall
HashMap<StringName,EditorPerformanceProfiler::Monitor,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorPerformanceProfiler::Monitor>>>
::erase(HashMap<StringName,EditorPerformanceProfiler::Monitor,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorPerformanceProfiler::Monitor>>>
        *this,StringName *param_1)

{
  uint *puVar1;
  uint *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long *plVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  long *plVar12;
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
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  uint uVar25;
  char cVar26;
  uint uVar27;
  int iVar28;
  long lVar29;
  ulong uVar30;
  long *plVar31;
  long in_FS_OFFSET;
  uint local_44;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_44 = 0;
  cVar26 = _lookup_pos(this,param_1,&local_44);
  if (cVar26 == '\0') goto LAB_00100db7;
  lVar8 = *(long *)(this + 0x10);
  lVar9 = *(long *)(this + 8);
  uVar6 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  uVar30 = CONCAT44(0,uVar6);
  lVar10 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
  auVar13._8_8_ = 0;
  auVar13._0_8_ = (ulong)(local_44 + 1) * lVar10;
  auVar19._8_8_ = 0;
  auVar19._0_8_ = uVar30;
  lVar29 = SUB168(auVar13 * auVar19,8);
  puVar1 = (uint *)(lVar8 + lVar29 * 4);
  uVar27 = SUB164(auVar13 * auVar19,8);
  uVar7 = *puVar1;
  if (uVar7 != 0) {
    auVar14._8_8_ = 0;
    auVar14._0_8_ = (ulong)uVar7 * lVar10;
    auVar20._8_8_ = 0;
    auVar20._0_8_ = uVar30;
    auVar15._8_8_ = 0;
    auVar15._0_8_ = (ulong)((uVar6 + uVar27) - SUB164(auVar14 * auVar20,8)) * lVar10;
    auVar21._8_8_ = 0;
    auVar21._0_8_ = uVar30;
    iVar28 = SUB164(auVar15 * auVar21,8);
    while (uVar25 = uVar27, iVar28 != 0) {
      puVar2 = (uint *)(lVar8 + (ulong)local_44 * 4);
      *puVar1 = *puVar2;
      puVar3 = (undefined8 *)(lVar9 + lVar29 * 8);
      *puVar2 = uVar7;
      puVar4 = (undefined8 *)(lVar9 + (ulong)local_44 * 8);
      uVar11 = *puVar3;
      *puVar3 = *puVar4;
      *puVar4 = uVar11;
      auVar18._8_8_ = 0;
      auVar18._0_8_ = (ulong)(uVar25 + 1) * lVar10;
      auVar24._8_8_ = 0;
      auVar24._0_8_ = uVar30;
      lVar29 = SUB168(auVar18 * auVar24,8);
      puVar1 = (uint *)(lVar8 + lVar29 * 4);
      uVar27 = SUB164(auVar18 * auVar24,8);
      uVar7 = *puVar1;
      local_44 = uVar25;
      if (uVar7 == 0) break;
      auVar16._8_8_ = 0;
      auVar16._0_8_ = (ulong)uVar7 * lVar10;
      auVar22._8_8_ = 0;
      auVar22._0_8_ = uVar30;
      auVar17._8_8_ = 0;
      auVar17._0_8_ = (ulong)((uVar27 + uVar6) - SUB164(auVar16 * auVar22,8)) * lVar10;
      auVar23._8_8_ = 0;
      auVar23._0_8_ = uVar30;
      iVar28 = SUB164(auVar17 * auVar23,8);
    }
  }
  uVar30 = (ulong)local_44;
  plVar5 = (long *)(lVar9 + uVar30 * 8);
  *(undefined4 *)(lVar8 + uVar30 * 4) = 0;
  plVar31 = (long *)*plVar5;
  if (*(long **)(this + 0x18) == plVar31) {
    *(long *)(this + 0x18) = *plVar31;
    plVar31 = (long *)*plVar5;
    if (*(long **)(this + 0x20) != plVar31) goto LAB_00100d6e;
LAB_00100de0:
    *(long *)(this + 0x20) = plVar31[1];
    plVar31 = (long *)*plVar5;
    plVar12 = (long *)plVar31[1];
  }
  else {
    if (*(long **)(this + 0x20) == plVar31) goto LAB_00100de0;
LAB_00100d6e:
    plVar12 = (long *)plVar31[1];
  }
  if (plVar12 != (long *)0x0) {
    *plVar12 = *plVar31;
    plVar31 = (long *)*plVar5;
  }
  if (*plVar31 != 0) {
    *(long *)(*plVar31 + 8) = plVar31[1];
    plVar31 = (long *)*plVar5;
  }
  KeyValue<StringName,EditorPerformanceProfiler::Monitor>::~KeyValue
            ((KeyValue<StringName,EditorPerformanceProfiler::Monitor> *)(plVar31 + 2));
  Memory::free_static(plVar31,false);
  *(undefined8 *)(*(long *)(this + 8) + uVar30 * 8) = 0;
  *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + -1;
LAB_00100db7:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* CowData<StringName>::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<StringName>::_copy_on_write(CowData<StringName> *this)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  StringName *this_00;
  
  if ((*(long *)this == 0) || (*(ulong *)(*(long *)this + -0x10) < 2)) {
    return;
  }
  if (*(long *)this == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  lVar2 = *(long *)(*(long *)this + -8);
  uVar6 = 0x10;
  if (lVar2 * 8 != 0) {
    uVar6 = lVar2 * 8 - 1;
    uVar6 = uVar6 | uVar6 >> 1;
    uVar6 = uVar6 | uVar6 >> 2;
    uVar6 = uVar6 | uVar6 >> 4;
    uVar6 = uVar6 | uVar6 >> 8;
    uVar6 = uVar6 | uVar6 >> 0x10;
    uVar6 = (uVar6 | uVar6 >> 0x20) + 0x11;
  }
  puVar4 = (undefined8 *)Memory::alloc_static(uVar6,false);
  if (puVar4 != (undefined8 *)0x0) {
    lVar5 = 0;
    *puVar4 = 1;
    puVar4[1] = lVar2;
    this_00 = (StringName *)(puVar4 + 2);
    if (lVar2 != 0) {
      do {
        lVar1 = lVar5 * 8;
        lVar5 = lVar5 + 1;
        StringName::StringName(this_00,(StringName *)(*(long *)this + lVar1));
        this_00 = this_00 + 8;
      } while (lVar2 != lVar5);
    }
    _unref(this);
    *(StringName **)this = (StringName *)(puVar4 + 2);
    return;
  }
  _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                   "Parameter \"mem_new\" is null.",0,0);
  return;
}



/* Vector<StringName>::push_back(StringName) [clone .isra.0] */

void __thiscall Vector<StringName>::push_back(Vector<StringName> *this,StringName *param_2)

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
  iVar1 = CowData<StringName>::resize<false>((CowData<StringName> *)(this + 8),lVar2);
  if (iVar1 == 0) {
    if (*(long *)(this + 8) == 0) {
      lVar3 = -1;
      lVar2 = 0;
    }
    else {
      lVar2 = *(long *)(*(long *)(this + 8) + -8);
      lVar3 = lVar2 + -1;
      if (-1 < lVar3) {
        CowData<StringName>::_copy_on_write((CowData<StringName> *)(this + 8));
        StringName::operator=((StringName *)(*(long *)(this + 8) + lVar3 * 8),param_2);
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



/* EditorPerformanceProfiler::_marker_input(Ref<InputEvent> const&) */

void __thiscall
EditorPerformanceProfiler::_marker_input(EditorPerformanceProfiler *this,Ref *param_1)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  char cVar4;
  int iVar5;
  Object *pOVar6;
  long lVar7;
  long *plVar8;
  int iVar9;
  long in_FS_OFFSET;
  float fVar10;
  undefined8 uVar11;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar12 [16];
  float fVar13;
  undefined1 auVar14 [16];
  Object *local_a0;
  Vector<StringName> local_98 [8];
  long local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (((*(long *)param_1 != 0) &&
      (pOVar6 = (Object *)
                __dynamic_cast(*(long *)param_1,&Object::typeinfo,&InputEventMouseButton::typeinfo,0
                              ), pOVar6 != (Object *)0x0)) &&
     (cVar4 = RefCounted::reference(), cVar4 != '\0')) {
    cVar4 = InputEvent::is_pressed();
    if ((cVar4 != '\0') && (iVar5 = InputEventMouseButton::get_button_index(), iVar5 == 1)) {
      plVar8 = *(long **)(this + 0xa88);
      local_90 = 0;
      if (plVar8 == (long *)0x0) {
LAB_001011c3:
        StringName::StringName((StringName *)&local_a0,"",false);
        if (*(Object **)(this + 0xae8) == local_a0) {
          if ((StringName::configured != '\0') && (local_a0 != (Object *)0x0)) {
            StringName::unref();
          }
        }
        else {
          StringName::unref();
          *(Object **)(this + 0xae8) = local_a0;
        }
        CanvasItem::queue_redraw();
      }
      else {
        do {
          cVar4 = TreeItem::is_checked((int)plVar8[7]);
          if (cVar4 != '\0') {
            StringName::StringName((StringName *)&local_a0,(StringName *)(plVar8 + 2));
            Vector<StringName>::push_back(local_98,(StringName *)&local_a0);
            if ((StringName::configured != '\0') && (local_a0 != (Object *)0x0)) {
              StringName::unref();
            }
          }
          lVar3 = local_90;
          plVar8 = (long *)*plVar8;
        } while (plVar8 != (long *)0x0);
        if ((local_90 == 0) || (lVar1 = *(long *)(local_90 + -8), lVar1 < 1)) goto LAB_001011c3;
        fVar13 = (float)lVar1;
        if (fVar13 < 0.0) {
          fVar10 = sqrtf(fVar13);
        }
        else {
          fVar10 = SQRT(fVar13);
        }
        if ((float)((uint)fVar10 & _LC53) < _LC52) {
          fVar10 = (float)((uint)((float)(int)fVar10 +
                                 (float)(-(uint)((float)(int)fVar10 < fVar10) & _LC54)) |
                          ~_LC53 & (uint)fVar10);
        }
        iVar9 = (int)fVar10;
        iVar5 = 1;
        if (lVar1 != 1) {
          fVar13 = fVar13 / (float)iVar9;
          if ((float)((uint)fVar13 & _LC53) < _LC52) {
            fVar13 = (float)((uint)((float)(int)fVar13 +
                                   (float)(-(uint)((float)(int)fVar13 < fVar13) & _LC54)) |
                            ~_LC53 & (uint)fVar13);
          }
          iVar5 = (int)fVar13;
        }
        local_58 = CONCAT44(iVar5,iVar9);
        local_68 = Control::get_size();
        local_60 = Vector2::operator_cast_to_Vector2i((Vector2 *)&local_68);
        local_78 = Vector2i::operator/((Vector2i *)&local_60,(Vector2 *)&local_58);
        uVar11 = Vector2i::operator_cast_to_Vector2((Vector2i *)&local_78);
        auVar12._0_8_ = InputEventMouse::get_position();
        auVar12._8_8_ = extraout_XMM0_Qb;
        auVar14._8_8_ = _LC55;
        auVar14._0_8_ = uVar11;
        auVar12 = divps(auVar12,auVar14);
        local_58 = auVar12._0_8_;
        local_70 = Vector2::operator_cast_to_Vector2i((Vector2 *)&local_58);
        local_80 = CONCAT44(*(undefined4 *)(this + 0xaf4),*(undefined4 *)(this + 0xaf4));
        local_60 = Vector2i::operator*((Vector2i *)&local_80,2);
        uVar11 = Vector2i::operator-((Vector2i *)&local_78,(Vector2i *)&local_60);
        local_88 = CONCAT44(*(undefined4 *)(this + 0xaf4),*(undefined4 *)(this + 0xaf4));
        local_68 = Vector2i::operator*((Vector2i *)&local_70,(Vector2i *)&local_78);
        local_58 = Vector2i::operator+((Vector2i *)&local_68,(Vector2i *)&local_88);
        local_50 = uVar11;
        local_60 = InputEventMouse::get_position();
        uVar11 = Vector2::operator_cast_to_Vector2i((Vector2 *)&local_60);
        if ((int)((uint)local_50 | local_50._4_4_) < 0) {
          _err_print_error("has_point","./core/math/rect2i.h",0x7f,
                           "Rect2i size is negative, this is not supported. Use Rect2i.abs() to get a Rect2i with a positive size."
                           ,0,0);
        }
        if ((int)uVar11 < (int)local_58) goto LAB_001011c3;
        iVar5 = (int)((ulong)uVar11 >> 0x20);
        if (((iVar5 < local_58._4_4_) || ((int)((int)local_58 + (uint)local_50) <= (int)uVar11)) ||
           ((int)(local_58._4_4_ + local_50._4_4_) <= iVar5)) goto LAB_001011c3;
        lVar1 = *(long *)(lVar3 + -8);
        lVar7 = (long)(iVar9 * local_70._4_4_ + (int)local_70);
        if (lVar7 < lVar1) {
          if (lVar7 < 0) {
            _err_print_index_error
                      ("get","./core/templates/cowdata.h",0xdb,lVar7,lVar1,"p_index","size()","",
                       false,true);
            _err_flush_stdout();
                    /* WARNING: Does not return */
            pcVar2 = (code *)invalidInstructionException();
            (*pcVar2)();
          }
          StringName::operator=((StringName *)(this + 0xae8),(StringName *)(lVar3 + lVar7 * 8));
        }
        else {
          StringName::StringName((StringName *)&local_a0,"",false);
          if (*(Object **)(this + 0xae8) == local_a0) {
            if ((StringName::configured != '\0') && (local_a0 != (Object *)0x0)) {
              StringName::unref();
            }
          }
          else {
            StringName::unref();
            *(Object **)(this + 0xae8) = local_a0;
          }
        }
        if ((_marker_input(Ref<InputEvent>const&)::{lambda()#1}::operator()()::sname == '\0') &&
           (iVar5 = __cxa_guard_acquire(&_marker_input(Ref<InputEvent>const&)::{lambda()#1}::
                                         operator()()::sname), iVar5 != 0)) {
          _scs_create((char *)&_marker_input(Ref<InputEvent>const&)::{lambda()#1}::operator()()::
                               sname,true);
          __cxa_atexit(StringName::~StringName,
                       &_marker_input(Ref<InputEvent>const&)::{lambda()#1}::operator()()::sname,
                       &__dso_handle);
          __cxa_guard_release(&_marker_input(Ref<InputEvent>const&)::{lambda()#1}::operator()()::
                               sname);
        }
        Control::get_theme_stylebox((StringName *)&local_a0,(StringName *)this);
        local_68 = StyleBox::get_offset();
        local_60 = Vector2::operator_cast_to_Vector2i((Vector2 *)&local_68);
        Vector2i::operator+=((Vector2i *)&local_58,(Vector2i *)&local_60);
        local_68 = (**(code **)(*(long *)local_a0 + 0x1d0))();
        local_60 = Vector2::operator_cast_to_Vector2i((Vector2 *)&local_68);
        Vector2i::operator-=((Vector2i *)&local_50,(Vector2i *)&local_60);
        fVar13 = (float)Vector2i::operator_cast_to_Vector2((Vector2i *)&local_58);
        fVar10 = (float)InputEventMouse::get_position();
        iVar5 = 0;
        if (fVar10 - fVar13 < (float)(int)(uint)local_50) {
          iVar5 = (int)(((float)(int)(uint)local_50 - (fVar10 - fVar13)) / (_LC61 / (float)iVar9));
        }
        *(int *)(this + 0xaf0) = iVar5;
        CanvasItem::queue_redraw();
        if (((local_a0 != (Object *)0x0) && (cVar4 = RefCounted::unreference(), cVar4 != '\0')) &&
           (cVar4 = predelete_handler(local_a0), cVar4 != '\0')) {
          (**(code **)(*(long *)local_a0 + 0x140))(local_a0);
          Memory::free_static(local_a0,false);
        }
      }
      CowData<StringName>::_unref((CowData<StringName> *)&local_90);
    }
    cVar4 = RefCounted::unreference();
    if ((cVar4 != '\0') && (cVar4 = predelete_handler(pOVar6), cVar4 != '\0')) {
      (**(code **)(*(long *)pOVar6 + 0x140))(pOVar6);
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        Memory::free_static(pOVar6,false);
        return;
      }
      goto LAB_00101726;
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00101726:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EditorPerformanceProfiler::_monitor_draw() */

void __thiscall EditorPerformanceProfiler::_monitor_draw(EditorPerformanceProfiler *this)

{
  Ref *pRVar1;
  code *pcVar2;
  Vector2 *pVVar3;
  long lVar4;
  Object *pOVar5;
  long lVar6;
  char cVar7;
  undefined4 uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  bool bVar12;
  int iVar13;
  long *plVar14;
  float *pfVar15;
  int iVar16;
  int iVar17;
  long in_FS_OFFSET;
  ushort in_FPUStatusWord;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  uint uVar22;
  undefined4 uVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined8 uVar28;
  float local_1b0;
  long local_168;
  Object *local_100;
  Object *local_f8;
  long local_f0;
  Vector<StringName> local_e8 [8];
  long local_e0 [2];
  undefined8 local_d0;
  undefined4 local_c8;
  float local_c4;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  long local_a8;
  ulong local_a0;
  long local_98;
  long local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  long local_40;
  
  plVar14 = *(long **)(this + 0xa88);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_e0[0] = 0;
  if (plVar14 != (long *)0x0) {
    do {
      while (cVar7 = TreeItem::is_checked((int)plVar14[7]), cVar7 == '\0') {
LAB_001017a0:
        plVar14 = (long *)*plVar14;
        if (plVar14 == (long *)0x0) goto LAB_00101800;
      }
      StringName::StringName((StringName *)&local_f0,(StringName *)(plVar14 + 2));
      Vector<StringName>::push_back(local_e8,(StringName *)&local_f0);
      if ((StringName::configured == '\0') || (local_f0 == 0)) goto LAB_001017a0;
      StringName::unref();
      plVar14 = (long *)*plVar14;
    } while (plVar14 != (long *)0x0);
LAB_00101800:
    lVar6 = local_e0[0];
    if (local_e0[0] != 0) {
      CanvasItem::hide();
      if ((_monitor_draw()::{lambda()#1}::operator()()::sname == '\0') &&
         (iVar13 = __cxa_guard_acquire(&_monitor_draw()::{lambda()#1}::operator()()::sname),
         iVar13 != 0)) {
        _scs_create((char *)&_monitor_draw()::{lambda()#1}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,&_monitor_draw()::{lambda()#1}::operator()()::sname,
                     &__dso_handle);
        __cxa_guard_release(&_monitor_draw()::{lambda()#1}::operator()()::sname);
      }
      Control::get_theme_stylebox((StringName *)&local_100,(StringName *)this);
      if ((_monitor_draw()::{lambda()#2}::operator()()::sname == '\0') &&
         (iVar13 = __cxa_guard_acquire(&_monitor_draw()::{lambda()#2}::operator()()::sname),
         iVar13 != 0)) {
        _scs_create((char *)&_monitor_draw()::{lambda()#2}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,&_monitor_draw()::{lambda()#2}::operator()()::sname,
                     &__dso_handle);
        __cxa_guard_release(&_monitor_draw()::{lambda()#2}::operator()()::sname);
      }
      Control::get_theme_font((StringName *)&local_f8,(StringName *)this);
      if ((_monitor_draw()::{lambda()#3}::operator()()::sname == '\0') &&
         (iVar13 = __cxa_guard_acquire(&_monitor_draw()::{lambda()#3}::operator()()::sname),
         iVar13 != 0)) {
        _scs_create((char *)&_monitor_draw()::{lambda()#3}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,&_monitor_draw()::{lambda()#3}::operator()()::sname,
                     &__dso_handle);
        __cxa_guard_release(&_monitor_draw()::{lambda()#3}::operator()()::sname);
      }
      uVar8 = Control::get_theme_font_size
                        ((StringName *)this,(StringName *)(SceneStringNames::singleton + 0xa8));
      lVar9 = *(long *)(lVar6 + -8);
      fVar25 = (float)lVar9;
      if (fVar25 < 0.0) {
        fVar18 = sqrtf(fVar25);
      }
      else {
        fVar18 = SQRT(fVar25);
      }
      if ((float)((uint)fVar18 & _LC53) < _LC52) {
        fVar18 = (float)((uint)((float)(int)fVar18 +
                               (float)(-(uint)((float)(int)fVar18 < fVar18) & (uint)_LC54)) |
                        ~_LC53 & (uint)fVar18);
      }
      iVar13 = (int)fVar18;
      local_58._4_4_ = 1;
      if (lVar9 != 1) {
        fVar25 = fVar25 / (float)iVar13;
        if ((float)((uint)fVar25 & _LC53) < _LC52) {
          fVar25 = (float)((uint)((float)(int)fVar25 +
                                 (float)(-(uint)((float)(int)fVar25 < fVar25) & (uint)_LC54)) |
                          ~_LC53 & (uint)fVar25);
        }
        local_58._4_4_ = (undefined4)fVar25;
      }
      local_58._0_4_ = iVar13;
      local_78 = Control::get_size();
      local_68._0_8_ = Vector2::operator_cast_to_Vector2i((Vector2 *)&local_78);
      local_d0 = Vector2i::operator/((Vector2i *)local_68,(Vector2i *)local_58);
      fVar18 = (float)*(int *)(this + 0xaf8) / (float)iVar13;
      cVar7 = EditorThemeManager::is_dark_theme();
      fVar25 = _LC66;
      if (cVar7 != '\0') {
        fVar25 = _LC65;
      }
      fVar26 = _LC54 / (float)*(uint *)(this + 0xa9c);
      if (0 < *(long *)(lVar6 + -8)) {
        local_168 = 0;
        do {
          lVar9 = HashMap<StringName,EditorPerformanceProfiler::Monitor,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorPerformanceProfiler::Monitor>>>
                  ::operator[]((HashMap<StringName,EditorPerformanceProfiler::Monitor,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorPerformanceProfiler::Monitor>>>
                                *)(this + 0xa70),(StringName *)(lVar6 + local_168 * 8));
          local_88 = CONCAT44(*(undefined4 *)(this + 0xaf4),*(undefined4 *)(this + 0xaf4));
          local_58._0_8_ = Vector2i::operator*((Vector2i *)&local_88,2);
          uVar10 = Vector2i::operator-((Vector2i *)&local_d0,(Vector2i *)local_58);
          local_90 = CONCAT44(*(undefined4 *)(this + 0xaf4),*(undefined4 *)(this + 0xaf4));
          local_80 = CONCAT44((int)local_168 / iVar13,(int)local_168 % iVar13);
          local_68._0_8_ = Vector2i::operator*((Vector2i *)&local_80,(Vector2i *)&local_d0);
          local_78 = Vector2i::operator+((Vector2i *)local_68,(Vector2i *)&local_90);
          pRVar1 = *(Ref **)(this + 0xad8);
          local_70 = uVar10;
          local_58 = Rect2i::operator_cast_to_Rect2((Rect2i *)&local_78);
          CanvasItem::draw_style_box(pRVar1,(StringName *)&local_100);
          local_68._0_8_ = StyleBox::get_offset();
          uVar10 = Vector2::operator_cast_to_Vector2i((Vector2 *)local_68);
          local_58._0_8_ = uVar10;
          Vector2i::operator+=((Vector2i *)&local_78,(Vector2i *)local_58);
          local_68._0_8_ = (**(code **)(*(long *)local_100 + 0x1d0))();
          local_58._0_8_ = Vector2::operator_cast_to_Vector2i((Vector2 *)local_68);
          Vector2i::operator-=((Vector2i *)&local_70,(Vector2i *)local_58);
          if ((_monitor_draw()::{lambda()#4}::operator()()::sname == '\0') &&
             (iVar17 = __cxa_guard_acquire(&_monitor_draw()::{lambda()#4}::operator()()::sname),
             iVar17 != 0)) {
            _scs_create((char *)&_monitor_draw()::{lambda()#4}::operator()()::sname,true);
            __cxa_atexit(StringName::~StringName,&_monitor_draw()::{lambda()#4}::operator()()::sname
                         ,&__dso_handle);
            __cxa_guard_release(&_monitor_draw()::{lambda()#4}::operator()()::sname);
          }
          local_68 = Control::get_theme_color
                               ((StringName *)this,
                                (StringName *)&_monitor_draw()::{lambda()#4}::operator()()::sname);
          fVar19 = (float)Color::get_v();
          fVar20 = (float)Color::get_s();
          fVar20 = _LC69 * fVar20;
          fVar21 = (float)*(int *)(lVar9 + 0x2c) * fVar26;
          fVar27 = fVar21;
          do {
            fVar27 = fVar27 - (fVar27 / _LC69) * _LC69;
          } while ((in_FPUStatusWord & 0x400) != 0);
          if (NAN(fVar27)) {
            fmodf(fVar21,_LC69);
          }
          Color::set_hsv(fVar27,fVar20,fVar25 * fVar19,_LC70);
          fVar27 = (float)(int)local_70;
          uVar10 = *(undefined8 *)(this + 0xad8);
          iVar17 = (int)(CowData<char32_t> *)&local_f0;
          TreeItem::get_text(iVar17);
          uVar22 = (**(code **)(*(long *)local_f8 + 0x220))(local_f8,uVar8);
          local_90 = (ulong)uVar22 << 0x20;
          local_88 = Vector2::operator_cast_to_Vector2i((Vector2 *)&local_90);
          local_80 = Vector2i::operator+((Vector2i *)&local_78,(Vector2i *)&local_88);
          local_58._0_8_ = Vector2i::operator_cast_to_Vector2((Vector2i *)&local_80);
          CanvasItem::draw_string
                    (fVar27,uVar10,(StringName *)&local_f8,(Vector2i *)local_58,
                     (CowData<char32_t> *)&local_f0,0,uVar8,(Vector2i *)local_68,3,0,0);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_f0);
          pOVar5 = local_f8;
          local_1b0 = (float)(int)local_70;
          local_68._12_4_ = 0x3f666666;
          pcVar2 = *(code **)(*(long *)local_f8 + 0x288);
          TreeItem::get_text(iVar17);
          fVar27 = (float)(*pcVar2)(pOVar5,(CowData<char32_t> *)&local_f0,0,uVar8,3,0,0);
          local_1b0 = local_1b0 - fVar27;
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_f0);
          if (local_1b0 < 0.0) {
            local_1b0 = 0.0;
          }
          fVar27 = (float)(int)local_70;
          uVar10 = *(undefined8 *)(this + 0xad8);
          TreeItem::get_text(iVar17);
          uVar23 = (**(code **)(*(long *)local_f8 + 0x220))(local_f8,uVar8);
          local_90 = CONCAT44(uVar23,local_1b0);
          local_88 = Vector2::operator_cast_to_Vector2i((Vector2 *)&local_90);
          local_80 = Vector2i::operator+((Vector2i *)&local_78,(Vector2i *)&local_88);
          local_58._0_8_ = Vector2i::operator_cast_to_Vector2((Vector2i *)&local_80);
          CanvasItem::draw_string
                    (fVar27,uVar10,(StringName *)&local_f8,(Vector2i *)local_58,
                     (CowData<char32_t> *)&local_f0,0,uVar8,(Vector2i *)local_68,3,0,0);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_f0);
          fVar27 = (float)(**(code **)(*(long *)local_f8 + 0x218))(local_f8,uVar8);
          local_78 = CONCAT44((int)((float)local_78._4_4_ + fVar27),(undefined4)local_78);
          fVar27 = (float)(**(code **)(*(long *)local_f8 + 0x218))(local_f8,uVar8);
          fVar19 = (float)local_70._4_4_;
          local_70 = CONCAT44((int)(fVar19 - fVar27),(int)local_70);
          fVar20 = (float)(**(code **)(*(long *)local_f8 + 0x218))();
          iVar17 = (int)((float)(int)(fVar19 - fVar27) / (fVar20 + fVar20));
          bVar12 = SUB81((Vector2i *)local_58,0);
          if (iVar17 < 6) {
            if (0 < iVar17) goto LAB_00102696;
          }
          else {
            iVar17 = 5;
LAB_00102696:
            local_58._8_8_ = CONCAT44(_LC54,_UNK_0010d2b8);
            local_58._0_8_ = __LC71;
            fVar27 = (float)Color::get_v();
            fVar27 = _LC72 * fVar27;
            fVar19 = (float)Color::get_s();
            fVar19 = _LC72 * fVar19;
            fVar20 = (float)Color::get_h();
            Color::set_hsv(fVar20,fVar19,fVar27,_LC73);
            pVVar3 = *(Vector2 **)(this + 0xad8);
            fVar27 = (float)EditorScale::get_scale();
            fVar27 = roundf(fVar27);
            local_a0 = (ulong)(uint)(float)(int)local_70;
            local_98 = Vector2::operator_cast_to_Vector2i((Vector2 *)&local_a0);
            local_90 = Vector2i::operator+((Vector2i *)&local_78,(Vector2i *)&local_98);
            local_80 = Vector2i::operator_cast_to_Vector2((Vector2i *)&local_90);
            local_88 = Vector2i::operator_cast_to_Vector2((Vector2i *)&local_78);
            CanvasItem::draw_line(pVVar3,(Vector2 *)&local_88,(Color *)&local_80,fVar27,bVar12);
            uVar10 = *(undefined8 *)(this + 0xad8);
            _create_label((EditorPerformanceProfiler *)&local_f0,*(undefined4 *)(lVar9 + 0x28));
            uVar22 = (**(code **)(*(long *)local_f8 + 0x220))(local_f8,uVar8);
            local_98 = (ulong)uVar22 << 0x20;
            local_90 = Vector2::operator_cast_to_Vector2i((Vector2 *)&local_98);
            local_88 = Vector2i::operator+((Vector2i *)&local_78,(Vector2i *)&local_90);
            local_80 = Vector2i::operator_cast_to_Vector2((Vector2i *)&local_88);
            CanvasItem::draw_string
                      (uVar10,(StringName *)&local_f8,(Vector2i *)&local_80,
                       (CowData<char32_t> *)&local_f0,0,uVar8,(Vector2i *)local_58,3,0,0);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_f0);
            iVar16 = 0;
            do {
              pVVar3 = *(Vector2 **)(this + 0xad8);
              local_c8 = 0;
              local_c4 = (float)local_70._4_4_ * (_LC54 - (float)iVar16 / (float)iVar17);
              fVar27 = (float)EditorScale::get_scale();
              fVar27 = roundf(fVar27);
              local_98 = Vector2::operator_cast_to_Vector2i((Vector2 *)&local_c8);
              local_b0 = (ulong)(uint)(float)(int)local_70;
              local_a8 = Vector2::operator_cast_to_Vector2i((Vector2 *)&local_b0);
              local_a0 = Vector2i::operator+((Vector2i *)&local_78,(Vector2i *)&local_a8);
              local_90 = Vector2i::operator+((Vector2i *)&local_a0,(Vector2i *)&local_98);
              local_80 = Vector2i::operator_cast_to_Vector2((Vector2i *)&local_90);
              local_c0 = Vector2::operator_cast_to_Vector2i((Vector2 *)&local_c8);
              local_b8 = Vector2i::operator+((Vector2i *)&local_78,(Vector2i *)&local_c0);
              local_88 = Vector2i::operator_cast_to_Vector2((Vector2i *)&local_b8);
              CanvasItem::draw_line(pVVar3,(Vector2 *)&local_88,(Color *)&local_80,fVar27,bVar12);
              uVar10 = *(undefined8 *)(this + 0xad8);
              _create_label((EditorPerformanceProfiler *)&local_f0,*(undefined4 *)(lVar9 + 0x28));
              local_90 = Vector2::operator_cast_to_Vector2i((Vector2 *)&local_c8);
              uVar22 = (**(code **)(*(long *)local_f8 + 0x228))(local_f8,uVar8);
              local_a8 = (ulong)uVar22 << 0x20;
              local_a0 = Vector2::operator_cast_to_Vector2i((Vector2 *)&local_a8);
              local_98 = Vector2i::operator-((Vector2i *)&local_78,(Vector2i *)&local_a0);
              local_88 = Vector2i::operator+((Vector2i *)&local_98,(Vector2i *)&local_90);
              local_80 = Vector2i::operator_cast_to_Vector2((Vector2i *)&local_88);
              CanvasItem::draw_string
                        (uVar10,(StringName *)&local_f8,(Vector2i *)&local_80,
                         (CowData<char32_t> *)&local_f0,0,uVar8,(Vector2i *)local_58,3,0,0);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_f0);
              iVar16 = iVar16 + 1;
            } while (iVar17 != iVar16);
          }
          puVar11 = *(undefined8 **)(lVar9 + 0x10);
          fVar27 = (float)(int)local_70;
          if (((puVar11 != (undefined8 *)0x0) &&
              (pfVar15 = (float *)*puVar11, pfVar15 != (float *)0x0)) && (0.0 <= fVar27)) {
            iVar17 = 0;
            fVar19 = _LC67;
            while( true ) {
              fVar20 = _LC54;
              if (*(float *)(lVar9 + 0x18) != 0.0) {
                fVar20 = _LC54 - *pfVar15 / *(float *)(lVar9 + 0x18);
              }
              fVar20 = (float)local_70._4_4_ * fVar20;
              if ((puVar11 == (undefined8 *)0x0) || (pfVar15 != (float *)*puVar11)) {
                pVVar3 = *(Vector2 **)(this + 0xad8);
                fVar21 = (float)EditorScale::get_scale();
                fVar21 = roundf(fVar21);
                local_a8 = CONCAT44(fVar19,fVar18 + fVar27);
                local_90 = Vector2::operator_cast_to_Vector2i((Vector2 *)&local_a8);
                local_88 = Vector2i::operator+((Vector2i *)&local_78,(Vector2i *)&local_90);
                local_58._0_8_ = Vector2i::operator_cast_to_Vector2((Vector2i *)&local_88);
                local_b0 = CONCAT44(fVar20,fVar27);
                local_a0 = Vector2::operator_cast_to_Vector2i((Vector2 *)&local_b0);
                local_98 = Vector2i::operator+((Vector2i *)&local_78,(Vector2i *)&local_a0);
                local_80 = Vector2i::operator_cast_to_Vector2((Vector2i *)&local_98);
                CanvasItem::draw_line
                          (pVVar3,(Vector2 *)&local_80,(Color *)local_58,fVar21,
                           SUB81((Vector2i *)local_68,0));
                lVar4 = *(long *)(lVar6 + -8);
              }
              else {
                lVar4 = *(long *)(lVar6 + -8);
              }
              if (lVar4 <= local_168) {
                _err_print_index_error
                          ("get","./core/templates/cowdata.h",0xdb,local_168,lVar4,"p_index",
                           "size()","",false,true);
                _err_flush_stdout();
                    /* WARNING: Does not return */
                pcVar2 = (code *)invalidInstructionException();
                (*pcVar2)();
              }
              if ((*(long *)(this + 0xae8) == *(long *)(lVar6 + local_168 * 8)) &&
                 (*(int *)(this + 0xaf0) == iVar17)) {
                local_58._8_8_ = CONCAT44(_LC54,_UNK_0010d2b8);
                local_58._0_8_ = __LC71;
                fVar19 = (float)Color::get_v();
                fVar21 = (float)Color::get_s();
                fVar21 = _LC74 * fVar21;
                fVar24 = (float)Color::get_h();
                Color::set_hsv(fVar24,fVar21,fVar19,_LC72);
                pVVar3 = *(Vector2 **)(this + 0xad8);
                fVar19 = (float)EditorScale::get_scale();
                fVar19 = roundf(fVar19);
                local_b8 = CONCAT44((float)local_70._4_4_,fVar27);
                local_98 = Vector2::operator_cast_to_Vector2i((Vector2 *)&local_b8);
                local_90 = Vector2i::operator+((Vector2i *)&local_78,(Vector2i *)&local_98);
                local_80 = Vector2i::operator_cast_to_Vector2((Vector2i *)&local_90);
                local_b0 = (ulong)(uint)fVar27;
                local_a8 = Vector2::operator_cast_to_Vector2i((Vector2 *)&local_b0);
                local_a0 = Vector2i::operator+((Vector2i *)&local_78,(Vector2i *)&local_a8);
                local_88 = Vector2i::operator_cast_to_Vector2((Vector2i *)&local_a0);
                CanvasItem::draw_line(pVVar3,(Vector2 *)&local_88,(Color *)&local_80,fVar19,bVar12);
                uVar28 = 0x1023d6;
                _create_label((EditorPerformanceProfiler *)&local_f0,*(undefined4 *)(lVar9 + 0x28));
                uVar10 = (**(code **)(*(long *)local_f8 + 0x288))
                                   (local_f8,(CowData<char32_t> *)&local_f0,0,uVar8,3,0,0);
                fVar24 = (float)*(int *)(this + 0xafc);
                fVar21 = fVar27 - (fVar24 + (float)uVar10);
                fVar19 = fVar20 - (fVar24 + (float)((ulong)uVar10 >> 0x20));
                if (fVar21 < 0.0) {
                  fVar21 = fVar24 + fVar27;
                }
                if (fVar19 < 0.0) {
                  fVar19 = fVar24 + fVar20;
                }
                local_b0 = CONCAT44(fVar19,fVar21);
                uVar10 = *(undefined8 *)(this + 0xad8);
                uVar22 = (**(code **)(*(long *)local_f8 + 0x220))(local_f8,uVar8,uVar28);
                local_98 = (ulong)uVar22 << 0x20;
                local_90 = Vector2::operator_cast_to_Vector2i((Vector2 *)&local_98);
                local_a8 = Vector2::operator_cast_to_Vector2i((Vector2 *)&local_b0);
                local_a0 = Vector2i::operator+((Vector2i *)&local_78,(Vector2i *)&local_a8);
                local_88 = Vector2i::operator+((Vector2i *)&local_a0,(Vector2i *)&local_90);
                local_80 = Vector2i::operator_cast_to_Vector2((Vector2i *)&local_88);
                CanvasItem::draw_string
                          (uVar10,(StringName *)&local_f8,(Vector2i *)&local_80,
                           (CowData<char32_t> *)&local_f0,0,uVar8,(Vector2i *)local_58,3,0,0);
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_f0);
              }
              fVar27 = fVar27 - fVar18;
              iVar17 = iVar17 + 1;
              pfVar15 = *(float **)(pfVar15 + 2);
              if ((fVar27 < 0.0) || (pfVar15 == (float *)0x0)) break;
              puVar11 = *(undefined8 **)(lVar9 + 0x10);
              fVar19 = fVar20;
            }
          }
          local_168 = local_168 + 1;
        } while (local_168 < *(long *)(lVar6 + -8));
      }
      if (((local_f8 != (Object *)0x0) && (cVar7 = RefCounted::unreference(), cVar7 != '\0')) &&
         (cVar7 = predelete_handler(local_f8), cVar7 != '\0')) {
        (**(code **)(*(long *)local_f8 + 0x140))(local_f8);
        Memory::free_static(local_f8,false);
      }
      if (((local_100 != (Object *)0x0) && (cVar7 = RefCounted::unreference(), cVar7 != '\0')) &&
         (cVar7 = predelete_handler(local_100), cVar7 != '\0')) {
        (**(code **)(*(long *)local_100 + 0x140))(local_100);
        Memory::free_static(local_100,false);
      }
      CowData<StringName>::_unref((CowData<StringName> *)local_e0);
      goto LAB_00102664;
    }
  }
  CanvasItem::show();
  CowData<StringName>::_unref((CowData<StringName> *)local_e0);
LAB_00102664:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* EditorPerformanceProfiler::get_monitor_data(StringName const&) */

long __thiscall
EditorPerformanceProfiler::get_monitor_data(EditorPerformanceProfiler *this,StringName *param_1)

{
  uint uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  uint uVar10;
  long lVar11;
  int iVar12;
  long lVar13;
  uint uVar14;
  ulong uVar15;
  uint uVar16;
  
  if (*(long *)(this + 0xa78) == 0) {
    return 0;
  }
  if (*(int *)(this + 0xa9c) != 0) {
    uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0xa98) * 4);
    lVar11 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0xa98) * 8);
    if (*(long *)param_1 == 0) {
      uVar10 = StringName::get_empty_hash();
    }
    else {
      uVar10 = *(uint *)(*(long *)param_1 + 0x20);
    }
    uVar15 = CONCAT44(0,uVar1);
    if (uVar10 == 0) {
      uVar10 = 1;
    }
    auVar2._8_8_ = 0;
    auVar2._0_8_ = (ulong)uVar10 * lVar11;
    auVar6._8_8_ = 0;
    auVar6._0_8_ = uVar15;
    lVar13 = SUB168(auVar2 * auVar6,8);
    uVar14 = *(uint *)(*(long *)(this + 0xa80) + lVar13 * 4);
    iVar12 = SUB164(auVar2 * auVar6,8);
    if (uVar14 != 0) {
      uVar16 = 0;
      do {
        if ((uVar10 == uVar14) &&
           (*(long *)(*(long *)(*(long *)(this + 0xa78) + lVar13 * 8) + 0x10) == *(long *)param_1))
        {
          lVar11 = HashMap<StringName,EditorPerformanceProfiler::Monitor,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorPerformanceProfiler::Monitor>>>
                   ::operator[]((HashMap<StringName,EditorPerformanceProfiler::Monitor,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorPerformanceProfiler::Monitor>>>
                                 *)(this + 0xa70),param_1);
          return lVar11 + 0x10;
        }
        uVar16 = uVar16 + 1;
        auVar3._8_8_ = 0;
        auVar3._0_8_ = (ulong)(iVar12 + 1) * lVar11;
        auVar7._8_8_ = 0;
        auVar7._0_8_ = uVar15;
        lVar13 = SUB168(auVar3 * auVar7,8);
        uVar14 = *(uint *)(*(long *)(this + 0xa80) + lVar13 * 4);
        iVar12 = SUB164(auVar3 * auVar7,8);
      } while ((uVar14 != 0) &&
              (auVar4._8_8_ = 0, auVar4._0_8_ = (ulong)uVar14 * lVar11, auVar8._8_8_ = 0,
              auVar8._0_8_ = uVar15, auVar5._8_8_ = 0,
              auVar5._0_8_ = (ulong)((uVar1 + iVar12) - SUB164(auVar4 * auVar8,8)) * lVar11,
              auVar9._8_8_ = 0, auVar9._0_8_ = uVar15, uVar16 <= SUB164(auVar5 * auVar9,8)));
    }
  }
  return 0;
}



/* EditorPerformanceProfiler::_get_monitor_base(StringName const&) */

undefined8 __thiscall
EditorPerformanceProfiler::_get_monitor_base(EditorPerformanceProfiler *this,StringName *param_1)

{
  HashMap<StringName,TreeItem*,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,TreeItem*>>>
  *this_00;
  TreeItem *pTVar1;
  long lVar2;
  Object *pOVar3;
  char cVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  long in_FS_OFFSET;
  String *this_01;
  StringName *this_02;
  undefined8 uVar10;
  undefined8 local_60;
  undefined8 local_58;
  long local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  long local_40;
  
  this_00 = (HashMap<StringName,TreeItem*,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,TreeItem*>>>
             *)(this + 0xaa0);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = 0;
  cVar4 = HashMap<StringName,TreeItem*,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,TreeItem*>>>
          ::_lookup_pos(this_00,param_1,(uint *)&local_48);
  if (cVar4 == '\0') {
    pTVar1 = *(TreeItem **)(this + 0xad0);
    iVar5 = Tree::get_root();
    uVar9 = Tree::create_item(pTVar1,iVar5);
    this_02 = (StringName *)&local_50;
    uVar10 = EditorPropertyNameProcessor::singleton;
    StringName::StringName(this_02,"",false);
    local_58 = 0;
    String::parse_latin1((String *)&local_58,"");
    uVar6 = EditorPropertyNameProcessor::get_settings_style();
    lVar2 = *(long *)param_1;
    if (lVar2 == 0) {
      local_60 = 0;
      this_01 = (String *)&local_60;
    }
    else if (*(char **)(lVar2 + 8) == (char *)0x0) {
      this_01 = (String *)&local_60;
      local_60 = 0;
      if (*(long *)(lVar2 + 0x10) != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)this_01,(CowData *)(lVar2 + 0x10));
      }
    }
    else {
      this_01 = (String *)&local_60;
      local_60 = 0;
      String::parse_latin1(this_01,*(char **)(lVar2 + 8));
    }
    EditorPropertyNameProcessor::process_name
              ((CowData<char32_t> *)&local_48,uVar10,this_01,uVar6,(String *)&local_58,this_02,
               this_01,this_02,uVar10);
    TreeItem::set_text(uVar9,0,(CowData<char32_t> *)&local_48);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
    CowData<char32_t>::_unref((CowData<char32_t> *)this_01);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
    if ((StringName::configured != '\0') && (local_50 != 0)) {
      StringName::unref();
    }
    iVar5 = (int)uVar9;
    TreeItem::set_editable(iVar5,false);
    TreeItem::set_selectable(iVar5,false);
    TreeItem::set_expand_right(iVar5,false);
    if (((byte)this[0x2fa] & 0x40) != 0) {
      if (_get_monitor_base(StringName_const&)::{lambda()#1}::operator()()::sname == '\0') {
        iVar7 = __cxa_guard_acquire(&_get_monitor_base(StringName_const&)::{lambda()#1}::
                                     operator()()::sname);
        if (iVar7 != 0) {
          puVar8 = &_get_monitor_base(StringName_const&)::{lambda()#1}::operator()()::sname;
          _scs_create((char *)&_get_monitor_base(StringName_const&)::{lambda()#1}::operator()()::
                               sname,true);
          __cxa_atexit(StringName::~StringName,puVar8,&__dso_handle);
          __cxa_guard_release(&_get_monitor_base(StringName_const&)::{lambda()#1}::operator()()::
                               sname);
        }
      }
      Control::get_theme_font((StringName *)&local_48,(StringName *)this);
      TreeItem::set_custom_font(iVar5,(Ref *)0x0);
      if (CONCAT44(uStack_44,local_48) != 0) {
        cVar4 = RefCounted::unreference();
        if (cVar4 != '\0') {
          pOVar3 = (Object *)CONCAT44(uStack_44,local_48);
          cVar4 = predelete_handler(pOVar3);
          if (cVar4 != '\0') {
            (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
            Memory::free_static(pOVar3,false);
          }
        }
      }
    }
    HashMap<StringName,TreeItem*,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,TreeItem*>>>
    ::insert((StringName *)&local_48,(TreeItem **)this_00,SUB81(param_1,0));
  }
  else {
    puVar8 = (undefined8 *)
             HashMap<StringName,TreeItem*,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,TreeItem*>>>
             ::operator[](this_00,param_1);
    uVar9 = *puVar8;
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar9;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorPerformanceProfiler::_build_monitor_tree() */

void __thiscall EditorPerformanceProfiler::_build_monitor_tree(EditorPerformanceProfiler *this)

{
  uint uVar1;
  uint uVar2;
  void *pvVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  char cVar14;
  uint uVar15;
  TreeItem *pTVar16;
  undefined8 uVar17;
  int iVar18;
  long lVar19;
  long lVar20;
  long *plVar21;
  ulong uVar22;
  ulong uVar23;
  uint uVar24;
  long *plVar25;
  long in_FS_OFFSET;
  bool bVar26;
  long local_78 [2];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined8 local_48;
  long local_40;
  
  plVar25 = *(long **)(this + 0xa88);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_68 = (undefined1  [16])0x0;
  local_48 = 2;
  local_58 = (undefined1  [16])0x0;
  if (plVar25 != (long *)0x0) {
    do {
      while ((plVar25[7] != 0 && (cVar14 = TreeItem::is_checked((int)plVar25[7]), cVar14 != '\0')))
      {
        HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::insert
                  ((StringName *)local_78);
        plVar25 = (long *)*plVar25;
        if (plVar25 == (long *)0x0) goto LAB_001032c8;
      }
      plVar25 = (long *)*plVar25;
    } while (plVar25 != (long *)0x0);
LAB_001032c8:
    plVar25 = (long *)local_68._0_8_;
  }
  if ((*(long *)(this + 0xaa8) != 0) && (*(int *)(this + 0xacc) != 0)) {
    lVar20 = 0;
    uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0xac8) * 4);
    if (uVar1 != 0) {
      do {
        if (*(int *)(*(long *)(this + 0xab0) + lVar20) != 0) {
          *(int *)(*(long *)(this + 0xab0) + lVar20) = 0;
          pvVar3 = *(void **)(*(long *)(this + 0xaa8) + lVar20 * 2);
          if ((StringName::configured != '\0') && (*(long *)((long)pvVar3 + 0x10) != 0)) {
            StringName::unref();
          }
          Memory::free_static(pvVar3,false);
          *(undefined8 *)(*(long *)(this + 0xaa8) + lVar20 * 2) = 0;
        }
        lVar20 = lVar20 + 4;
      } while ((ulong)uVar1 << 2 != lVar20);
    }
    *(undefined4 *)(this + 0xacc) = 0;
    *(undefined1 (*) [16])(this + 0xab8) = (undefined1  [16])0x0;
  }
  Tree::get_root();
  TreeItem::clear_children();
  puVar4 = *(undefined8 **)(this + 0xa88);
  uVar23 = local_48;
  do {
    local_48 = uVar23;
    if (puVar4 == (undefined8 *)0x0) {
      if (plVar25 == (long *)0x0) {
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          return;
        }
      }
      else {
        local_48._4_4_ = (uint)(uVar23 >> 0x20);
        uVar22 = (ulong)local_48._4_4_;
        uVar17 = local_58._8_8_;
        bVar26 = local_48._4_4_ != 0;
        if (bVar26) {
          if (*(uint *)(hash_table_size_primes + (uVar23 & 0xffffffff) * 4) != 0) {
            memset((void *)local_58._8_8_,0,
                   (ulong)*(uint *)(hash_table_size_primes + (uVar23 & 0xffffffff) * 4) * 4);
          }
          plVar21 = plVar25;
          do {
            if ((StringName::configured != '\0') && (*plVar21 != 0)) {
              StringName::unref();
            }
            plVar21 = plVar21 + 1;
          } while (plVar21 != plVar25 + uVar22);
        }
        Memory::free_static(plVar25,false);
        Memory::free_static((void *)local_58._0_8_,false);
        Memory::free_static((void *)local_68._8_8_,false);
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          Memory::free_static((void *)uVar17,false);
          return;
        }
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    StringName::StringName((StringName *)local_78,(String *)(puVar4 + 4),false);
    pTVar16 = (TreeItem *)_get_monitor_base(this,(StringName *)local_78);
    if ((StringName::configured != '\0') && (local_78[0] != 0)) {
      StringName::unref();
    }
    StringName::StringName((StringName *)local_78,(String *)(puVar4 + 3),false);
    uVar17 = _create_monitor_item(this,(StringName *)local_78,pTVar16);
    if ((StringName::configured != '\0') && (local_78[0] != 0)) {
      StringName::unref();
    }
    if ((plVar25 != (long *)0x0) && (local_48._4_4_ != 0)) {
      uVar1 = *(uint *)(hash_table_size_primes + (local_48 & 0xffffffff) * 4);
      lVar20 = *(long *)(hash_table_size_primes_inv + (local_48 & 0xffffffff) * 8);
      if (puVar4[2] == 0) {
        uVar15 = StringName::get_empty_hash();
      }
      else {
        uVar15 = *(uint *)(puVar4[2] + 0x20);
      }
      uVar23 = CONCAT44(0,uVar1);
      if (uVar15 == 0) {
        uVar15 = 1;
      }
      auVar6._8_8_ = 0;
      auVar6._0_8_ = (ulong)uVar15 * lVar20;
      auVar10._8_8_ = 0;
      auVar10._0_8_ = uVar23;
      lVar19 = SUB168(auVar6 * auVar10,8);
      uVar24 = *(uint *)(local_58._8_8_ + lVar19 * 4);
      uVar22 = (ulong)uVar24;
      iVar18 = SUB164(auVar6 * auVar10,8);
      if (uVar24 != 0) {
        uVar24 = 0;
        while ((uVar15 != (uint)uVar22 ||
               (plVar25[*(uint *)(local_68._8_8_ + lVar19 * 4)] != puVar4[2]))) {
          uVar24 = uVar24 + 1;
          auVar7._8_8_ = 0;
          auVar7._0_8_ = (ulong)(iVar18 + 1) * lVar20;
          auVar11._8_8_ = 0;
          auVar11._0_8_ = uVar23;
          lVar19 = SUB168(auVar7 * auVar11,8);
          uVar2 = *(uint *)(local_58._8_8_ + lVar19 * 4);
          uVar22 = (ulong)uVar2;
          iVar18 = SUB164(auVar7 * auVar11,8);
          if ((uVar2 == 0) ||
             (auVar8._8_8_ = 0, auVar8._0_8_ = uVar22 * lVar20, auVar12._8_8_ = 0,
             auVar12._0_8_ = uVar23, auVar9._8_8_ = 0,
             auVar9._0_8_ = (ulong)((uVar1 + iVar18) - SUB164(auVar8 * auVar12,8)) * lVar20,
             auVar13._8_8_ = 0, auVar13._0_8_ = uVar23, SUB164(auVar9 * auVar13,8) < uVar24)) break;
        }
      }
    }
    TreeItem::set_checked((int)uVar17,false);
    puVar5 = (undefined8 *)puVar4[5];
    puVar4[7] = uVar17;
    if ((puVar5 != (undefined8 *)0x0) && (*(int *)(puVar5 + 2) != 0)) {
      Monitor::update_value((Monitor *)(puVar4 + 3),*(float *)*puVar5);
    }
    puVar4 = (undefined8 *)*puVar4;
    uVar23 = local_48;
  } while( true );
}



/* EditorPerformanceProfiler::reset() */

void __thiscall EditorPerformanceProfiler::reset(EditorPerformanceProfiler *this)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  char *__s;
  char cVar4;
  long *plVar5;
  long in_FS_OFFSET;
  long local_60;
  char *local_58;
  size_t local_50;
  long local_40;
  
  plVar2 = *(long **)(this + 0xa88);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  while (plVar5 = plVar2, plVar2 != (long *)0x0) {
    while( true ) {
      plVar2 = (long *)*plVar5;
      lVar3 = plVar5[2];
      if (lVar3 == 0) {
        local_60 = 0;
      }
      else {
        __s = *(char **)(lVar3 + 8);
        local_60 = 0;
        if (__s == (char *)0x0) {
          if (*(long *)(lVar3 + 0x10) != 0) {
            CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar3 + 0x10));
          }
        }
        else {
          local_50 = strlen(__s);
          local_58 = __s;
          String::parse_latin1((StrRange *)&local_60);
        }
      }
      cVar4 = String::begins_with((char *)&local_60);
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
      if (cVar4 != '\0') break;
      Monitor::reset((Monitor *)(plVar5 + 3));
      plVar5 = plVar2;
      if (plVar2 == (long *)0x0) goto LAB_00103799;
    }
    HashMap<StringName,EditorPerformanceProfiler::Monitor,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorPerformanceProfiler::Monitor>>>
    ::erase((HashMap<StringName,EditorPerformanceProfiler::Monitor,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorPerformanceProfiler::Monitor>>>
             *)(this + 0xa70),(StringName *)(plVar5 + 2));
  }
LAB_00103799:
  _build_monitor_tree(this);
  StringName::StringName((StringName *)&local_58,"",false);
  if (*(char **)(this + 0xae8) == local_58) {
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
  }
  else {
    StringName::unref();
    *(char **)(this + 0xae8) = local_58;
  }
  *(undefined4 *)(this + 0xaf0) = 0;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    CanvasItem::queue_redraw();
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorPerformanceProfiler::_notification(int) */

void __thiscall
EditorPerformanceProfiler::_notification(EditorPerformanceProfiler *this,int param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  Object *pOVar3;
  char cVar4;
  int iVar5;
  String *pSVar6;
  long in_FS_OFFSET;
  undefined8 local_60;
  Object *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == 0x2d) {
    for (puVar1 = *(undefined8 **)(this + 0xab8); puVar1 != (undefined8 *)0x0;
        puVar1 = (undefined8 *)*puVar1) {
      uVar2 = puVar1[3];
      if ((_notification(int)::{lambda()#1}::operator()()::sname == '\0') &&
         (iVar5 = __cxa_guard_acquire(&_notification(int)::{lambda()#1}::operator()()::sname),
         iVar5 != 0)) {
        _scs_create((char *)&_notification(int)::{lambda()#1}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#1}::operator()()::sname,
                     &__dso_handle);
        __cxa_guard_release(&_notification(int)::{lambda()#1}::operator()()::sname);
      }
      Control::get_theme_font((StringName *)&local_58,(StringName *)this);
      TreeItem::set_custom_font((int)uVar2,(Ref *)0x0);
      if (((local_58 != (Object *)0x0) &&
          (cVar4 = RefCounted::unreference(), pOVar3 = local_58, cVar4 != '\0')) &&
         (cVar4 = predelete_handler(local_58), cVar4 != '\0')) {
        (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
        Memory::free_static(pOVar3,false);
      }
    }
  }
  else if (param_1 == 10000) {
    pSVar6 = (String *)EditorSettings::get_singleton();
    local_60 = 0;
    local_50 = 0x22;
    local_58 = (Object *)0x106fe8;
    String::parse_latin1((StrRange *)&local_60);
    cVar4 = EditorSettings::check_changed_settings_in_group(pSVar6);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    if (cVar4 != '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        _build_monitor_tree(this);
        return;
      }
      goto LAB_00103a51;
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00103a51:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EditorPerformanceProfiler::EditorPerformanceProfiler() */

void __thiscall
EditorPerformanceProfiler::EditorPerformanceProfiler(EditorPerformanceProfiler *this)

{
  long *plVar1;
  undefined8 uVar2;
  long *plVar3;
  code *pcVar4;
  StringName *pSVar5;
  String *pSVar6;
  Vector2 *pVVar7;
  void *pvVar8;
  long lVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined8 uVar13;
  Tree *this_00;
  Control *this_01;
  CallableCustom *this_02;
  Label *this_03;
  long lVar14;
  undefined4 uVar15;
  int iVar16;
  int iVar17;
  long in_FS_OFFSET;
  float fVar18;
  long local_a0;
  long local_98;
  long local_90;
  String local_88 [8];
  long local_80;
  undefined1 local_78 [16];
  long *local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined4 local_50;
  int local_4c;
  ulong local_48;
  long local_40;
  
  local_78._8_8_ = local_78._0_8_;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  SplitContainer::SplitContainer((SplitContainer *)this,false);
  *(undefined1 (*) [16])(this + 0xa78) = (undefined1  [16])0x0;
  *(undefined ***)this = &PTR__initialize_classv_0010cb20;
  uVar2 = _LC78;
  *(undefined1 (*) [16])(this + 0xa88) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0xa98) = uVar2;
  *(undefined8 *)(this + 0xac8) = uVar2;
  *(undefined1 (*) [16])(this + 0xaa8) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xab8) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xad0) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xae0) = (undefined1  [16])0x0;
  uVar13 = _UNK_0010d2c8;
  uVar2 = __LC81;
  this[0xa68] = (EditorPerformanceProfiler)0x1;
  *(undefined8 *)(this + 0xaf0) = uVar2;
  *(undefined8 *)(this + 0xaf8) = uVar13;
  local_78._0_8_ = 0;
  String::parse_latin1((String *)local_78,"");
  local_80 = 0;
  String::parse_latin1((String *)&local_80,"Monitors");
  TTR(local_88,(String *)&local_80);
  Node::set_name((String *)this);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
  EditorScale::get_scale();
  SplitContainer::set_split_offset((int)this);
  this_00 = (Tree *)operator_new(0xdc8,"");
  Tree::Tree(this_00);
  postinitialize_handler((Object *)this_00);
  *(Tree **)(this + 0xad0) = this_00;
  fVar18 = (float)EditorScale::get_scale();
  local_48 = CONCAT44(fVar18 * _LC84._4_4_,fVar18 * (float)_LC84);
  Control::set_custom_minimum_size((Vector2 *)this_00);
  Node::set_auto_translate_mode(*(undefined8 *)(this + 0xad0),2);
  Tree::set_columns((int)*(undefined8 *)(this + 0xad0));
  uVar2 = *(undefined8 *)(this + 0xad0);
  local_78._0_8_ = 0;
  String::parse_latin1((String *)local_78,"");
  local_80 = 0;
  String::parse_latin1((String *)&local_80,"Monitor");
  TTR(local_88,(String *)&local_80);
  Tree::set_column_title((int)uVar2,(String *)0x0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
  Tree::set_column_expand((int)*(undefined8 *)(this + 0xad0),false);
  uVar2 = *(undefined8 *)(this + 0xad0);
  auVar12._8_8_ = 0;
  auVar12._0_8_ = local_78._8_8_;
  local_78 = auVar12 << 0x40;
  String::parse_latin1((String *)local_78,"");
  local_80 = 0;
  String::parse_latin1((String *)&local_80,"Value");
  TTR(local_88,(String *)&local_80);
  Tree::set_column_title((int)uVar2,(String *)0x1);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
  uVar2 = *(undefined8 *)(this + 0xad0);
  EditorScale::get_scale();
  Tree::set_column_custom_minimum_width((int)uVar2,1);
  Tree::set_column_expand((int)*(undefined8 *)(this + 0xad0),true);
  Tree::set_column_titles_visible(SUB81(*(undefined8 *)(this + 0xad0),0));
  plVar3 = *(long **)(this + 0xad0);
  pcVar4 = *(code **)(*plVar3 + 0x108);
  create_custom_callable_function_pointer<EditorPerformanceProfiler>
            ((EditorPerformanceProfiler *)local_78,(char *)this,
             (_func_void *)"&EditorPerformanceProfiler::_monitor_select");
  StringName::StringName((StringName *)&local_80,"item_edited",false);
  (*pcVar4)(plVar3,(String *)&local_80,(String *)local_78,0);
  if ((StringName::configured != '\0') && (local_80 != 0)) {
    StringName::unref();
  }
  Callable::~Callable((Callable *)local_78);
  Tree::create_item(*(TreeItem **)(this + 0xad0),0);
  Tree::set_hide_root(SUB81(*(undefined8 *)(this + 0xad0),0));
  pSVar5 = *(StringName **)(this + 0xad0);
  StringName::StringName((StringName *)local_78,"TreeSecondary",false);
  Control::set_theme_type_variation(pSVar5);
  if ((StringName::configured != '\0') && (local_78._0_8_ != 0)) {
    StringName::unref();
  }
  Node::add_child(this,*(undefined8 *)(this + 0xad0),0,0);
  this_01 = (Control *)operator_new(0x9c8,"");
  Control::Control(this_01);
  postinitialize_handler((Object *)this_01);
  *(Control **)(this + 0xad8) = this_01;
  fVar18 = (float)EditorScale::get_scale();
  local_48 = CONCAT44(fVar18 * _LC84._4_4_,fVar18 * (float)_LC84);
  Control::set_custom_minimum_size((Vector2 *)this_01);
  Control::set_clip_contents(SUB81(*(undefined8 *)(this + 0xad8),0));
  plVar3 = *(long **)(this + 0xad8);
  pcVar4 = *(code **)(*plVar3 + 0x108);
  create_custom_callable_function_pointer<EditorPerformanceProfiler>
            ((EditorPerformanceProfiler *)local_78,(char *)this,
             (_func_void *)"&EditorPerformanceProfiler::_monitor_draw");
  (*pcVar4)(plVar3,SceneStringNames::singleton + 8,(String *)local_78,0);
  Callable::~Callable((Callable *)local_78);
  plVar3 = *(long **)(this + 0xad8);
  pcVar4 = *(code **)(*plVar3 + 0x108);
  this_02 = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(this_02);
  *(undefined **)(this_02 + 0x20) = &_LC12;
  *(undefined1 (*) [16])(this_02 + 0x30) = (undefined1  [16])0x0;
  *(undefined ***)this_02 = &PTR_hash_0010cf28;
  *(undefined8 *)(this_02 + 0x40) = 0;
  uVar2 = *(undefined8 *)(this + 0x60);
  *(EditorPerformanceProfiler **)(this_02 + 0x28) = this;
  *(undefined8 *)(this_02 + 0x30) = uVar2;
  *(code **)(this_02 + 0x38) = _marker_input;
  *(undefined8 *)(this_02 + 0x10) = 0;
  CallableCustomMethodPointerBase::_setup((uint *)this_02,(int)this_02 + 0x28);
  *(char **)(this_02 + 0x20) = "EditorPerformanceProfiler::_marker_input";
  Callable::Callable((Callable *)local_78,this_02);
  (*pcVar4)(plVar3,SceneStringNames::singleton + 0x28,(String *)local_78,0);
  Callable::~Callable((Callable *)local_78);
  uVar15 = 0;
  Node::add_child(this,*(undefined8 *)(this + 0xad8),0,0);
  this_03 = (Label *)operator_new(0xad8,"");
  auVar10._8_8_ = 0;
  auVar10._0_8_ = local_78._8_8_;
  local_78 = auVar10 << 0x40;
  Label::Label(this_03,(String *)local_78);
  postinitialize_handler((Object *)this_03);
  *(Label **)(this + 0xae0) = this_03;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
  pSVar6 = *(String **)(this + 0xae0);
  auVar11._8_8_ = 0;
  auVar11._0_8_ = local_78._8_8_;
  local_78 = auVar11 << 0x40;
  String::parse_latin1((String *)local_78,"");
  local_80 = 0;
  String::parse_latin1
            ((String *)&local_80,"Pick one or more items from the list to display the graph.");
  TTR(local_88,(String *)&local_80);
  Label::set_text(pSVar6);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
  Label::set_vertical_alignment(*(undefined8 *)(this + 0xae0),1);
  Label::set_horizontal_alignment(*(undefined8 *)(this + 0xae0),1);
  Label::set_autowrap_mode(*(undefined8 *)(this + 0xae0),3);
  pVVar7 = *(Vector2 **)(this + 0xae0);
  fVar18 = (float)EditorScale::get_scale();
  local_48 = (ulong)(uint)(fVar18 * __LC87);
  Control::set_custom_minimum_size(pVVar7);
  uVar2 = *(undefined8 *)(this + 0xae0);
  fVar18 = (float)EditorScale::get_scale();
  iVar16 = 0;
  Control::set_anchors_and_offsets_preset(uVar2,0xf,3,CONCAT44(uVar15,(int)(fVar18 * __LC94)));
  Node::add_child(*(undefined8 *)(this + 0xad8),*(undefined8 *)(this + 0xae0),0,0);
  do {
    Performance::get_monitor_name((String *)&local_a0,Performance::singleton,iVar16);
    iVar17 = (int)(String *)&local_a0;
    String::get_slicec((wchar32)(CowData<char32_t> *)&local_98,iVar17);
    String::get_slicec((wchar32)(CowData *)&local_90,iVar17);
    local_50 = Performance::get_monitor_type(Performance::singleton,iVar16);
    local_68 = (long *)0x0;
    local_60 = 0;
    local_58 = 0;
    local_78 = (undefined1  [16])0x0;
    lVar14 = local_90;
    local_4c = iVar16;
    if (local_90 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)local_78,(CowData *)&local_90);
      lVar14 = local_78._8_8_;
    }
    if (lVar14 != local_98) {
      CowData<char32_t>::_ref((CowData<char32_t> *)(local_78 + 8),(CowData *)&local_98);
    }
    StringName::StringName((StringName *)&local_80,(String *)&local_a0,false);
    HashMap<StringName,EditorPerformanceProfiler::Monitor,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorPerformanceProfiler::Monitor>>>
    ::insert((StringName *)local_88,(Monitor *)(this + 0xa70),SUB81((String *)&local_80,0));
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
    plVar3 = local_68;
    if (local_68 != (long *)0x0) {
      do {
        while( true ) {
          pvVar8 = (void *)*plVar3;
          if (pvVar8 == (void *)0x0) {
            if ((int)plVar3[2] != 0) {
              _err_print_error("~List","./core/templates/list.h",0x316,
                               "Condition \"_data->size_cache\" is true.",0,0);
              goto LAB_0010427e;
            }
            goto LAB_00104274;
          }
          if (*(long **)((long)pvVar8 + 0x18) != plVar3) break;
          lVar14 = *(long *)((long)pvVar8 + 8);
          lVar9 = *(long *)((long)pvVar8 + 0x10);
          *plVar3 = lVar14;
          if (pvVar8 == (void *)plVar3[1]) {
            plVar3[1] = lVar9;
          }
          if (lVar9 != 0) {
            *(long *)(lVar9 + 8) = lVar14;
            lVar14 = *(long *)((long)pvVar8 + 8);
          }
          if (lVar14 != 0) {
            *(long *)(lVar14 + 0x10) = lVar9;
          }
          Memory::free_static(pvVar8,false);
          plVar1 = plVar3 + 2;
          *(int *)plVar1 = (int)*plVar1 + -1;
          if ((int)*plVar1 == 0) goto LAB_00104274;
        }
        _err_print_error("erase","./core/templates/list.h",0xe7,
                         "Condition \"p_I->data != this\" is true. Returning: false",0,0);
      } while ((int)plVar3[2] != 0);
LAB_00104274:
      Memory::free_static(plVar3,false);
    }
LAB_0010427e:
    CowData<char32_t>::_unref((CowData<char32_t> *)(local_78 + 8));
    CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
    lVar14 = local_90;
    if (local_90 != 0) {
      LOCK();
      plVar3 = (long *)(local_90 + -0x10);
      *plVar3 = *plVar3 + -1;
      UNLOCK();
      if (*plVar3 == 0) {
        local_90 = 0;
        Memory::free_static((void *)(lVar14 + -0x10),false);
      }
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
    lVar14 = local_a0;
    if (local_a0 != 0) {
      LOCK();
      plVar3 = (long *)(local_a0 + -0x10);
      *plVar3 = *plVar3 + -1;
      UNLOCK();
      if (*plVar3 == 0) {
        local_a0 = 0;
        Memory::free_static((void *)(lVar14 + -0x10),false);
      }
    }
    iVar16 = iVar16 + 1;
    if (iVar16 == 0x27) {
      if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      _build_monitor_tree(this);
      return;
    }
  } while( true );
}



/* EditorPerformanceProfiler::update_monitors(Vector<StringName> const&) */

void __thiscall
EditorPerformanceProfiler::update_monitors(EditorPerformanceProfiler *this,Vector *param_1)

{
  StringName *pSVar1;
  int *piVar2;
  undefined8 *puVar3;
  uint *puVar4;
  uint uVar5;
  long *plVar6;
  void *pvVar7;
  undefined8 uVar8;
  long *plVar9;
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
  undefined1 auVar23 [16];
  undefined8 uVar24;
  char cVar25;
  int iVar26;
  char *pcVar27;
  long lVar28;
  undefined4 *puVar29;
  long *plVar30;
  uint uVar31;
  ulong uVar32;
  long lVar33;
  int *piVar34;
  ulong uVar35;
  long *plVar36;
  undefined8 *puVar37;
  wchar32 wVar38;
  ulong uVar39;
  ulong uVar40;
  ulong uVar41;
  uint *puVar42;
  long in_FS_OFFSET;
  bool bVar43;
  char *local_c0;
  char *local_b8;
  long local_b0;
  HashMap<StringName,int,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,int>>>
  local_a8 [8];
  undefined1 local_a0 [16];
  long *local_90;
  long *plStack_88;
  undefined8 local_80;
  undefined1 local_78 [8];
  char *pcStack_70;
  long *local_68;
  undefined8 local_60;
  undefined8 local_58;
  long local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar28 = *(long *)(param_1 + 8);
  local_a0 = (undefined1  [16])0x0;
  local_80 = 2;
  local_90 = (long *)0x0;
  plStack_88 = (long *)0x0;
  if (lVar28 == 0) {
    plVar30 = *(long **)(this + 0xa88);
    if (plVar30 == (long *)0x0) {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        _build_monitor_tree(this);
        return;
      }
      goto LAB_00104d00;
    }
LAB_00104555:
    do {
      while( true ) {
        plVar6 = (long *)*plVar30;
        lVar28 = plVar30[2];
        if (lVar28 == 0) {
          local_b0 = 0;
        }
        else {
          pcVar27 = *(char **)(lVar28 + 8);
          local_b0 = 0;
          if (pcVar27 == (char *)0x0) {
            if (*(long *)(lVar28 + 0x10) != 0) {
              CowData<char32_t>::_ref((CowData<char32_t> *)&local_b0,(CowData *)(lVar28 + 0x10));
            }
          }
          else {
            pcStack_70 = (char *)strlen(pcVar27);
            local_78 = (undefined1  [8])pcVar27;
            String::parse_latin1((StrRange *)&local_b0);
          }
        }
        cVar25 = String::begins_with((char *)&local_b0);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
        if (cVar25 != '\0') break;
LAB_00104580:
        plVar30 = plVar6;
        if (plVar6 == (long *)0x0) goto LAB_00104648;
      }
      pSVar1 = (StringName *)(plVar30 + 2);
      auVar22._12_4_ = 0;
      auVar22._0_12_ = stack0xffffffffffffff8c;
      _local_78 = auVar22 << 0x20;
      cVar25 = HashMap<StringName,int,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,int>>>
               ::_lookup_pos(local_a8,pSVar1,(uint *)local_78);
      if (cVar25 != '\0') {
        puVar29 = (undefined4 *)
                  HashMap<StringName,int,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,int>>>
                  ::operator[](local_a8,pSVar1);
        *(undefined4 *)((long)plVar30 + 0x44) = *puVar29;
        auVar23._12_4_ = 0;
        auVar23._0_12_ = stack0xffffffffffffff8c;
        _local_78 = auVar23 << 0x20;
        cVar25 = HashMap<StringName,int,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,int>>>
                 ::_lookup_pos(local_a8,pSVar1,(uint *)local_78);
        if (cVar25 != '\0') {
          uVar39 = (ulong)(uint)local_78._0_4_;
          uVar5 = *(uint *)(hash_table_size_primes + (local_80 & 0xffffffff) * 4);
          uVar35 = CONCAT44(0,uVar5);
          lVar28 = *(long *)(hash_table_size_primes_inv + (local_80 & 0xffffffff) * 8);
          auVar10._8_8_ = 0;
          auVar10._0_8_ = (ulong)(local_78._0_4_ + 1) * lVar28;
          auVar16._8_8_ = 0;
          auVar16._0_8_ = uVar35;
          uVar32 = SUB168(auVar10 * auVar16,8);
          puVar42 = (uint *)(local_a0._8_8_ + uVar32 * 4);
          uVar31 = SUB164(auVar10 * auVar16,8);
          uVar41 = (ulong)uVar31;
          uVar40 = (ulong)*puVar42;
          if ((*puVar42 == 0) ||
             (auVar11._8_8_ = 0, auVar11._0_8_ = uVar40 * lVar28, auVar17._8_8_ = 0,
             auVar17._0_8_ = uVar35, auVar12._8_8_ = 0,
             auVar12._0_8_ = (ulong)((uVar5 + uVar31) - SUB164(auVar11 * auVar17,8)) * lVar28,
             auVar18._8_8_ = 0, auVar18._0_8_ = uVar35, SUB164(auVar12 * auVar18,8) == 0)) {
            uVar41 = (ulong)(uint)local_78._0_4_;
          }
          else {
            while( true ) {
              puVar4 = (uint *)(local_a0._8_8_ + uVar39 * 4);
              *puVar42 = *puVar4;
              puVar37 = (undefined8 *)(local_a0._0_8_ + uVar32 * 8);
              *puVar4 = (uint)uVar40;
              puVar3 = (undefined8 *)(local_a0._0_8_ + uVar39 * 8);
              uVar8 = *puVar37;
              *puVar37 = *puVar3;
              *puVar3 = uVar8;
              auVar15._8_8_ = 0;
              auVar15._0_8_ = (ulong)((int)uVar41 + 1) * lVar28;
              auVar21._8_8_ = 0;
              auVar21._0_8_ = uVar35;
              uVar32 = SUB168(auVar15 * auVar21,8);
              puVar42 = (uint *)(local_a0._8_8_ + uVar32 * 4);
              uVar40 = (ulong)*puVar42;
              if ((*puVar42 == 0) ||
                 (auVar13._8_8_ = 0, auVar13._0_8_ = uVar40 * lVar28, auVar19._8_8_ = 0,
                 auVar19._0_8_ = uVar35, auVar14._8_8_ = 0,
                 auVar14._0_8_ =
                      (ulong)((SUB164(auVar15 * auVar21,8) + uVar5) - SUB164(auVar13 * auVar19,8)) *
                      lVar28, auVar20._8_8_ = 0, auVar20._0_8_ = uVar35,
                 SUB164(auVar14 * auVar20,8) == 0)) break;
              uVar39 = uVar41;
              uVar41 = uVar32 & 0xffffffff;
            }
            local_78._0_4_ = (int)uVar41;
          }
          *(undefined4 *)(local_a0._8_8_ + uVar41 * 4) = 0;
          puVar37 = (undefined8 *)(local_a0._0_8_ + uVar41 * 8);
          plVar36 = (long *)*puVar37;
          plVar30 = (long *)*plVar36;
          if (local_90 == plVar36) {
            local_90 = plVar30;
          }
          plVar9 = (long *)plVar36[1];
          if (plVar36 == plStack_88) {
            plStack_88 = plVar9;
          }
          if (plVar9 != (long *)0x0) {
            *plVar9 = (long)plVar30;
            plVar36 = (long *)*puVar37;
            plVar30 = (long *)*plVar36;
          }
          if (plVar30 != (long *)0x0) {
            plVar30[1] = plVar36[1];
            plVar36 = (long *)*puVar37;
          }
          if ((StringName::configured != '\0') && (plVar36[2] != 0)) {
            StringName::unref();
          }
          Memory::free_static(plVar36,false);
          local_80 = CONCAT44(local_80._4_4_ + -1,(undefined4)local_80);
          *puVar37 = 0;
        }
        goto LAB_00104580;
      }
      HashMap<StringName,EditorPerformanceProfiler::Monitor,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorPerformanceProfiler::Monitor>>>
      ::erase((HashMap<StringName,EditorPerformanceProfiler::Monitor,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorPerformanceProfiler::Monitor>>>
               *)(this + 0xa70),pSVar1);
      plVar30 = plVar6;
    } while (plVar6 != (long *)0x0);
  }
  else {
    lVar33 = 0;
    do {
      if (*(long *)(lVar28 + -8) <= lVar33) break;
      lVar28 = *(long *)(lVar28 + lVar33 * 8);
      if (lVar28 == 0) {
LAB_00104500:
        local_c0 = (char *)0x0;
      }
      else {
        pcVar27 = *(char **)(lVar28 + 8);
        local_c0 = (char *)0x0;
        if (pcVar27 == (char *)0x0) {
          if (*(long *)(lVar28 + 0x10) == 0) goto LAB_00104500;
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_c0,(CowData *)(lVar28 + 0x10));
        }
        else {
          pcStack_70 = (char *)strlen(pcVar27);
          local_78 = (undefined1  [8])pcVar27;
          String::parse_latin1((StrRange *)&local_c0);
        }
      }
      operator+((char *)&local_b8,(String *)"custom:");
      StringName::StringName((StringName *)&local_b0,(String *)&local_b8,false);
      HashMap<StringName,int,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,int>>>
      ::insert((StringName *)local_78,(int *)local_a8,SUB81((StringName *)&local_b0,0));
      if ((StringName::configured != '\0') && (local_b0 != 0)) {
        StringName::unref();
      }
      lVar33 = lVar33 + 1;
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
      lVar28 = *(long *)(param_1 + 8);
    } while (lVar28 != 0);
    plVar30 = *(long **)(this + 0xa88);
    if (plVar30 != (long *)0x0) goto LAB_00104555;
  }
LAB_00104648:
  uVar8 = local_a0._0_8_;
  if (local_90 != (long *)0x0) {
    plVar30 = local_90;
    do {
      lVar28 = plVar30[2];
      if (lVar28 == 0) {
        local_b0 = 0;
      }
      else {
        pcVar27 = *(char **)(lVar28 + 8);
        local_b0 = 0;
        if (pcVar27 == (char *)0x0) {
          if (*(long *)(lVar28 + 0x10) != 0) {
            CowData<char32_t>::_ref((CowData<char32_t> *)&local_b0,(CowData *)(lVar28 + 0x10));
          }
        }
        else {
          pcStack_70 = (char *)strlen(pcVar27);
          local_78 = (undefined1  [8])pcVar27;
          String::parse_latin1((StrRange *)&local_b0);
        }
      }
      String::replace_first((char *)&local_c0,(char *)&local_b0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
      local_b8 = (char *)0x0;
      local_78 = (undefined1  [8])0x106cfb;
      pcStack_70 = (char *)0x6;
      String::parse_latin1((StrRange *)&local_b8);
      iVar26 = String::get_slice_count((char *)&local_c0);
      if (iVar26 == 2) {
        iVar26 = (int)(CowData<char32_t> *)&local_c0;
        wVar38 = (wchar32)(CowData<char32_t> *)local_78;
        String::get_slicec(wVar38,iVar26);
        if ((undefined1  [8])local_b8 != local_78) {
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
          local_b8 = (char *)local_78;
          local_78 = (undefined1  [8])0x0;
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
        String::get_slicec(wVar38,iVar26);
        if ((undefined1  [8])local_c0 != local_78) {
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
          local_c0 = (char *)local_78;
          local_78 = (undefined1  [8])0x0;
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
      }
      local_68 = (long *)0x0;
      local_50 = (ulong)*(uint *)(plVar30 + 3) << 0x20;
      local_60 = 0;
      local_58 = 0;
      _local_78 = (undefined1  [16])0x0;
      pcVar27 = local_c0;
      if (local_c0 != (char *)0x0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)local_78,(CowData *)&local_c0);
        pcVar27 = pcStack_70;
      }
      if (local_b8 != pcVar27) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&pcStack_70,(CowData *)&local_b8);
      }
      HashMap<StringName,EditorPerformanceProfiler::Monitor,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorPerformanceProfiler::Monitor>>>
      ::insert((StringName *)&local_b0,(Monitor *)(this + 0xa70),(bool)((char)plVar30 + '\x10'));
      plVar6 = local_68;
      if (local_68 != (long *)0x0) {
        do {
          while( true ) {
            pvVar7 = (void *)*plVar6;
            if (pvVar7 == (void *)0x0) {
              if ((int)plVar6[2] != 0) {
                _err_print_error("~List","./core/templates/list.h",0x316,
                                 "Condition \"_data->size_cache\" is true.",0,0);
                goto LAB_00104843;
              }
              goto LAB_00104839;
            }
            if (*(long **)((long)pvVar7 + 0x18) != plVar6) break;
            lVar28 = *(long *)((long)pvVar7 + 8);
            lVar33 = *(long *)((long)pvVar7 + 0x10);
            *plVar6 = lVar28;
            if (pvVar7 == (void *)plVar6[1]) {
              plVar6[1] = lVar33;
            }
            if (lVar33 != 0) {
              *(long *)(lVar33 + 8) = lVar28;
              lVar28 = *(long *)((long)pvVar7 + 8);
            }
            if (lVar28 != 0) {
              *(long *)(lVar28 + 0x10) = lVar33;
            }
            Memory::free_static(pvVar7,false);
            plVar36 = plVar6 + 2;
            *(int *)plVar36 = (int)*plVar36 + -1;
            if ((int)*plVar36 == 0) goto LAB_00104839;
          }
          _err_print_error("erase","./core/templates/list.h",0xe7,
                           "Condition \"p_I->data != this\" is true. Returning: false",0,0);
        } while ((int)plVar6[2] != 0);
LAB_00104839:
        Memory::free_static(plVar6,false);
      }
LAB_00104843:
      CowData<char32_t>::_unref((CowData<char32_t> *)&pcStack_70);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
      plVar30 = (long *)*plVar30;
    } while (plVar30 != (long *)0x0);
  }
  _build_monitor_tree(this);
  if ((undefined8 *)uVar8 == (undefined8 *)0x0) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
  else {
    uVar24 = local_a0._8_8_;
    if ((local_80._4_4_ != 0) &&
       (*(uint *)(hash_table_size_primes + (local_80 & 0xffffffff) * 4) != 0)) {
      piVar2 = (int *)(local_a0._8_8_ +
                      (ulong)*(uint *)(hash_table_size_primes + (local_80 & 0xffffffff) * 4) * 4);
      piVar34 = (int *)local_a0._8_8_;
      puVar37 = (undefined8 *)uVar8;
      do {
        if (*piVar34 != 0) {
          bVar43 = StringName::configured != '\0';
          pvVar7 = (void *)*puVar37;
          *piVar34 = 0;
          if ((bVar43) && (*(long *)((long)pvVar7 + 0x10) != 0)) {
            StringName::unref();
          }
          Memory::free_static(pvVar7,false);
          *puVar37 = 0;
        }
        piVar34 = piVar34 + 1;
        puVar37 = puVar37 + 1;
      } while (piVar2 != piVar34);
    }
    Memory::free_static((void *)uVar8,false);
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      Memory::free_static((void *)uVar24,false);
      return;
    }
  }
LAB_00104d00:
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



/* Object::_bind_compatibility_methods() */

void Object::_bind_compatibility_methods(void)

{
  return;
}



/* Object::_set(StringName const&, Variant const&) */

undefined8 Object::_set(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* Object::_get(StringName const&, Variant&) const */

undefined8 Object::_get(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* Object::_get_property_list(List<PropertyInfo, DefaultAllocator>*) const */

void Object::_get_property_list(List *param_1)

{
  return;
}



/* Object::_validate_property(PropertyInfo&) const */

void Object::_validate_property(PropertyInfo *param_1)

{
  return;
}



/* Object::_property_can_revert(StringName const&) const */

undefined8 Object::_property_can_revert(StringName *param_1)

{
  return 0;
}



/* Object::_property_get_revert(StringName const&, Variant&) const */

undefined8 Object::_property_get_revert(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* Object::_notification(int) */

void Object::_notification(int param_1)

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



/* Control::_top_level_changed() */

void Control::_top_level_changed(void)

{
  return;
}



/* CallableCustomMethodPointer<EditorPerformanceProfiler, void, Ref<InputEvent>
   const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorPerformanceProfiler,void,Ref<InputEvent>const&>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorPerformanceProfiler,void,Ref<InputEvent>const&> *this)

{
  return;
}



/* CallableCustomMethodPointer<EditorPerformanceProfiler, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorPerformanceProfiler,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorPerformanceProfiler,void> *this)

{
  return;
}



/* CallableCustomMethodPointer<EditorPerformanceProfiler, void, Ref<InputEvent>
   const&>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorPerformanceProfiler,void,Ref<InputEvent>const&>::
get_argument_count(CallableCustomMethodPointer<EditorPerformanceProfiler,void,Ref<InputEvent>const&>
                   *this,bool *param_1)

{
  *param_1 = true;
  return 1;
}



/* CallableCustomMethodPointer<EditorPerformanceProfiler, void>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorPerformanceProfiler,void>::get_argument_count
          (CallableCustomMethodPointer<EditorPerformanceProfiler,void> *this,bool *param_1)

{
  *param_1 = true;
  return 0;
}



/* CallableCustomMethodPointerBase::get_method() const */

void CallableCustomMethodPointerBase::get_method(void)

{
  long in_RSI;
  StringName *in_RDI;
  
  StringName::StringName(in_RDI,*(char **)(in_RSI + 0x20),false);
  return;
}



/* CallableCustomMethodPointer<EditorPerformanceProfiler, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorPerformanceProfiler,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorPerformanceProfiler,void> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<EditorPerformanceProfiler, void, Ref<InputEvent>
   const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorPerformanceProfiler,void,Ref<InputEvent>const&>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorPerformanceProfiler,void,Ref<InputEvent>const&> *this)

{
  operator_delete(this,0x48);
  return;
}



/* HSplitContainer::_property_get_revertv(StringName const&, Variant&) const */

undefined8 HSplitContainer::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)_GLOBAL_OFFSET_TABLE_ != Object::_property_get_revert) {
    uVar1 = Control::_property_get_revert(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* EditorPerformanceProfiler::_property_get_revertv(StringName const&, Variant&) const */

undefined8 EditorPerformanceProfiler::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)_GLOBAL_OFFSET_TABLE_ != Object::_property_get_revert) {
    uVar1 = Control::_property_get_revert(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* HSplitContainer::_property_can_revertv(StringName const&) const */

undefined8 HSplitContainer::_property_can_revertv(StringName *param_1)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_can_revert_00110008 != Object::_property_can_revert) {
    uVar1 = Control::_property_can_revert(param_1);
    return uVar1;
  }
  return 0;
}



/* EditorPerformanceProfiler::_property_can_revertv(StringName const&) const */

undefined8 EditorPerformanceProfiler::_property_can_revertv(StringName *param_1)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_can_revert_00110008 != Object::_property_can_revert) {
    uVar1 = Control::_property_can_revert(param_1);
    return uVar1;
  }
  return 0;
}



/* HSplitContainer::_get_class_namev() const */

undefined8 * HSplitContainer::_get_class_namev(void)

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
LAB_00105013:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00105013;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"HSplitContainer");
      goto LAB_0010507e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"HSplitContainer");
LAB_0010507e:
  return &_get_class_namev()::_class_name_static;
}



/* CallableCustomMethodPointer<EditorPerformanceProfiler, void>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorPerformanceProfiler,void>::get_object
          (CallableCustomMethodPointer<EditorPerformanceProfiler,void> *this)

{
  long lVar1;
  undefined8 uVar2;
  uint uVar3;
  ulong *puVar4;
  long in_FS_OFFSET;
  bool bVar5;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  uVar3 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar3 < (uint)ObjectDB::slot_max) {
    while( true ) {
      LOCK();
      bVar5 = (char)ObjectDB::spin_lock == '\0';
      if (bVar5) {
        ObjectDB::spin_lock._0_1_ = '\x01';
      }
      UNLOCK();
      if (bVar5) break;
      do {
      } while ((char)ObjectDB::spin_lock != '\0');
    }
    puVar4 = (ulong *)((ulong)uVar3 * 0x10 + ObjectDB::object_slots);
    if ((*(ulong *)(this + 0x30) >> 0x18 & 0x7fffffffff) != (*puVar4 & 0x7fffffffff)) {
      uVar2 = 0;
      ObjectDB::spin_lock._0_1_ = '\0';
      goto LAB_001051ad;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_001051ad;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_001051ad:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<EditorPerformanceProfiler, void, Ref<InputEvent>
   const&>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorPerformanceProfiler,void,Ref<InputEvent>const&>::get_object
          (CallableCustomMethodPointer<EditorPerformanceProfiler,void,Ref<InputEvent>const&> *this)

{
  long lVar1;
  undefined8 uVar2;
  uint uVar3;
  ulong *puVar4;
  long in_FS_OFFSET;
  bool bVar5;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  uVar3 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar3 < (uint)ObjectDB::slot_max) {
    while( true ) {
      LOCK();
      bVar5 = (char)ObjectDB::spin_lock == '\0';
      if (bVar5) {
        ObjectDB::spin_lock._0_1_ = '\x01';
      }
      UNLOCK();
      if (bVar5) break;
      do {
      } while ((char)ObjectDB::spin_lock != '\0');
    }
    puVar4 = (ulong *)((ulong)uVar3 * 0x10 + ObjectDB::object_slots);
    if ((*(ulong *)(this + 0x30) >> 0x18 & 0x7fffffffff) != (*puVar4 & 0x7fffffffff)) {
      uVar2 = 0;
      ObjectDB::spin_lock._0_1_ = '\0';
      goto LAB_001052ad;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_001052ad;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_001052ad:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* HSplitContainer::_validate_propertyv(PropertyInfo&) const */

void HSplitContainer::_validate_propertyv(PropertyInfo *param_1)

{
  Node::_validate_property(param_1);
  CanvasItem::_validate_property(param_1);
  Control::_validate_property(param_1);
  if ((code *)PTR__validate_property_00110010 == Control::_validate_property) {
    return;
  }
  SplitContainer::_validate_property(param_1);
  return;
}



/* EditorPerformanceProfiler::_validate_propertyv(PropertyInfo&) const */

void EditorPerformanceProfiler::_validate_propertyv(PropertyInfo *param_1)

{
  Node::_validate_property(param_1);
  CanvasItem::_validate_property(param_1);
  Control::_validate_property(param_1);
  if ((code *)PTR__validate_property_00110010 == Control::_validate_property) {
    return;
  }
  SplitContainer::_validate_property(param_1);
  return;
}



/* HSplitContainer::_setv(StringName const&, Variant const&) */

undefined8 HSplitContainer::_setv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  uVar1 = CanvasItem::_set(param_1,param_2);
  if ((char)uVar1 == '\0') {
    if ((code *)PTR__set_00110018 != CanvasItem::_set) {
      uVar1 = Control::_set(param_1,param_2);
      return uVar1;
    }
    uVar1 = 0;
  }
  return uVar1;
}



/* EditorPerformanceProfiler::_setv(StringName const&, Variant const&) */

undefined8 EditorPerformanceProfiler::_setv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  uVar1 = CanvasItem::_set(param_1,param_2);
  if ((char)uVar1 == '\0') {
    if ((code *)PTR__set_00110018 != CanvasItem::_set) {
      uVar1 = Control::_set(param_1,param_2);
      return uVar1;
    }
    uVar1 = 0;
  }
  return uVar1;
}



/* WARNING: Removing unreachable block (ram,0x00105578) */
/* HSplitContainer::_getv(StringName const&, Variant&) const */

undefined8 HSplitContainer::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if (((code *)PTR__get_00110020 != CanvasItem::_get) &&
     (uVar1 = Control::_get(param_1,param_2), (char)uVar1 != '\0')) {
    return uVar1;
  }
  uVar1 = CanvasItem::_get(param_1,param_2);
  return uVar1;
}



/* WARNING: Removing unreachable block (ram,0x001055e8) */
/* EditorPerformanceProfiler::_getv(StringName const&, Variant&) const */

undefined8 EditorPerformanceProfiler::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if (((code *)PTR__get_00110020 != CanvasItem::_get) &&
     (uVar1 = Control::_get(param_1,param_2), (char)uVar1 != '\0')) {
    return uVar1;
  }
  uVar1 = CanvasItem::_get(param_1,param_2);
  return uVar1;
}



/* HSplitContainer::is_class_ptr(void*) const */

uint HSplitContainer::is_class_ptr(void *param_1)

{
  uint uVar1;
  undefined4 in_EDX;
  undefined4 *in_RSI;
  
  uVar1 = 1;
  if (in_RSI != &get_class_ptr_static()::ptr) {
    uVar1 = (uint)CONCAT71(0x10d0,in_RSI == &Container::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x10d0,in_RSI == &SplitContainer::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x10d0,in_RSI == &Control::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x10d0,in_RSI == &CanvasItem::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x10d0,in_RSI == &Node::get_class_ptr_static()::ptr) |
            CONCAT31((int3)((uint)in_EDX >> 8),in_RSI == &Object::get_class_ptr_static()::ptr);
  }
  return uVar1;
}



/* EditorPerformanceProfiler::is_class_ptr(void*) const */

ulong EditorPerformanceProfiler::is_class_ptr(void *param_1)

{
  undefined4 in_EDX;
  undefined4 *in_RSI;
  
  if (in_RSI == &HSplitContainer::get_class_ptr_static()::ptr ||
      in_RSI == &get_class_ptr_static()::ptr) {
    return CONCAT71(0x10d0,in_RSI == &HSplitContainer::get_class_ptr_static()::ptr ||
                           in_RSI == &get_class_ptr_static()::ptr);
  }
  return (ulong)((uint)CONCAT71(0x10d0,in_RSI == &Container::get_class_ptr_static()::ptr) |
                 (uint)CONCAT71(0x10d0,in_RSI == &SplitContainer::get_class_ptr_static()::ptr) |
                 (uint)CONCAT71(0x10d0,in_RSI == &Control::get_class_ptr_static()::ptr) |
                 (uint)CONCAT71(0x10d0,in_RSI == &CanvasItem::get_class_ptr_static()::ptr) |
                 (uint)CONCAT71(0x10d0,in_RSI == &Node::get_class_ptr_static()::ptr) |
                CONCAT31((int3)((uint)in_EDX >> 8),in_RSI == &Object::get_class_ptr_static()::ptr));
}



/* HSplitContainer::_notificationv(int, bool) */

void __thiscall HSplitContainer::_notificationv(HSplitContainer *this,int param_1,bool param_2)

{
  int iVar1;
  
  iVar1 = (int)this;
  if (param_2) {
    if ((code *)PTR__notification_00110028 != Container::_notification) {
      SplitContainer::_notification(iVar1);
    }
    Container::_notification(iVar1);
    Control::_notification(iVar1);
    CanvasItem::_notification(iVar1);
    Node::_notification(iVar1);
    return;
  }
  Node::_notification(iVar1);
  CanvasItem::_notification(iVar1);
  Control::_notification(iVar1);
  Container::_notification(iVar1);
  if ((code *)PTR__notification_00110028 == Container::_notification) {
    return;
  }
  SplitContainer::_notification(iVar1);
  return;
}



/* HSplitContainer::~HSplitContainer() */

void __thiscall HSplitContainer::~HSplitContainer(HSplitContainer *this)

{
  Object *pOVar1;
  char cVar2;
  bool bVar3;
  
  *(undefined **)this = &Container::vtable;
  if (*(long *)(this + 0xa60) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0xa60);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  if (*(long *)(this + 0xa50) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0xa50);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  if (*(long *)(this + 0xa48) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0xa48);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  if (*(long *)(this + 0xa40) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0xa40);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  bVar3 = StringName::configured != '\0';
  *(code **)this = predelete_handler;
  if (bVar3) {
    if (*(long *)(this + 0x9e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001058df;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_001058df:
  Control::~Control((Control *)this);
  return;
}



/* HSplitContainer::~HSplitContainer() */

void __thiscall HSplitContainer::~HSplitContainer(HSplitContainer *this)

{
  Object *pOVar1;
  char cVar2;
  bool bVar3;
  
  *(undefined **)this = &Container::vtable;
  if (*(long *)(this + 0xa60) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0xa60);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  if (*(long *)(this + 0xa50) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0xa50);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  if (*(long *)(this + 0xa48) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0xa48);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  if (*(long *)(this + 0xa40) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0xa40);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  bVar3 = StringName::configured != '\0';
  *(code **)this = predelete_handler;
  if (bVar3) {
    if (*(long *)(this + 0x9e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00105a8f;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_00105a8f:
  Control::~Control((Control *)this);
  operator_delete(this,0xa70);
  return;
}



/* EditorPerformanceProfiler::_get_class_namev() const */

undefined8 * EditorPerformanceProfiler::_get_class_namev(void)

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
LAB_00105bd3:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00105bd3;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"EditorPerformanceProfiler");
      goto LAB_00105c3e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"EditorPerformanceProfiler");
LAB_00105c3e:
  return &_get_class_namev()::_class_name_static;
}



/* CallableCustomMethodPointerBase::get_as_text() const */

void CallableCustomMethodPointerBase::get_as_text(void)

{
  char *__s;
  long lVar1;
  long in_RSI;
  StrRange *in_RDI;
  long in_FS_OFFSET;
  
  __s = *(char **)(in_RSI + 0x20);
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined8 *)in_RDI = 0;
  if (__s != (char *)0x0) {
    strlen(__s);
  }
  String::parse_latin1(in_RDI);
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



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashSet<StringName, HashMapHasherDefault, HashMapComparatorDefault<StringName>
   >::insert(StringName const&) */

StringName *
HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::insert
          (StringName *param_1)

{
  void *pvVar1;
  void *pvVar2;
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
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  uint uVar27;
  uint uVar28;
  ulong uVar29;
  long lVar30;
  long lVar31;
  long lVar32;
  int iVar33;
  StringName *in_RDX;
  long lVar34;
  ulong uVar35;
  long lVar36;
  long *in_RSI;
  uint uVar37;
  ulong uVar38;
  undefined4 uVar39;
  uint uVar40;
  ulong uVar41;
  uint uVar42;
  uint *puVar43;
  int iVar44;
  uint local_88;
  long local_68;
  
  uVar27 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(in_RSI + 4) * 4);
  if (*in_RSI == 0) {
    uVar29 = (ulong)uVar27 * 4;
    lVar30 = Memory::alloc_static(uVar29,false);
    in_RSI[3] = lVar30;
    lVar30 = Memory::alloc_static((ulong)uVar27 * 8,false);
    *in_RSI = lVar30;
    lVar30 = Memory::alloc_static(uVar29,false);
    in_RSI[2] = lVar30;
    lVar30 = Memory::alloc_static(uVar29,false);
    in_RSI[1] = lVar30;
    if (uVar27 != 0) {
      memset((void *)in_RSI[3],0,uVar29);
    }
    iVar44 = *(int *)((long)in_RSI + 0x24);
    if (*in_RSI != 0) goto LAB_00105e4c;
  }
  else {
    iVar44 = *(int *)((long)in_RSI + 0x24);
LAB_00105e4c:
    if (iVar44 != 0) {
      uVar40 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(in_RSI + 4) * 4);
      uVar29 = CONCAT44(0,uVar40);
      lVar30 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(in_RSI + 4) * 8);
      if (*(long *)in_RDX == 0) {
        uVar28 = StringName::get_empty_hash();
        iVar44 = *(int *)((long)in_RSI + 0x24);
      }
      else {
        uVar28 = *(uint *)(*(long *)in_RDX + 0x20);
      }
      if (uVar28 == 0) {
        uVar28 = 1;
      }
      uVar37 = 0;
      auVar3._8_8_ = 0;
      auVar3._0_8_ = (ulong)uVar28 * lVar30;
      auVar15._8_8_ = 0;
      auVar15._0_8_ = uVar29;
      lVar34 = SUB168(auVar3 * auVar15,8);
      iVar33 = SUB164(auVar3 * auVar15,8);
      uVar42 = *(uint *)(in_RSI[3] + lVar34 * 4);
      if (uVar42 != 0) {
        do {
          if (uVar28 == uVar42) {
            lVar36 = *in_RSI;
            uVar42 = *(uint *)(in_RSI[1] + lVar34 * 4);
            if (*(long *)(lVar36 + (ulong)uVar42 * 8) == *(long *)in_RDX) goto LAB_00106298;
          }
          uVar37 = uVar37 + 1;
          auVar4._8_8_ = 0;
          auVar4._0_8_ = (ulong)(iVar33 + 1) * lVar30;
          auVar16._8_8_ = 0;
          auVar16._0_8_ = uVar29;
          lVar34 = SUB168(auVar4 * auVar16,8);
          uVar42 = *(uint *)(in_RSI[3] + lVar34 * 4);
          iVar33 = SUB164(auVar4 * auVar16,8);
        } while ((uVar42 != 0) &&
                (auVar5._8_8_ = 0, auVar5._0_8_ = (ulong)uVar42 * lVar30, auVar17._8_8_ = 0,
                auVar17._0_8_ = uVar29, auVar6._8_8_ = 0,
                auVar6._0_8_ = (ulong)((uVar40 + iVar33) - SUB164(auVar5 * auVar17,8)) * lVar30,
                auVar18._8_8_ = 0, auVar18._0_8_ = uVar29, uVar37 <= SUB164(auVar6 * auVar18,8)));
      }
    }
  }
  if ((float)(iVar44 + 1) <= (float)uVar27 * __LC7) {
    lVar30 = *(long *)in_RDX;
    if (lVar30 != 0) goto LAB_00106175;
LAB_001062d6:
    uVar27 = StringName::get_empty_hash();
  }
  else {
    if ((int)in_RSI[4] == 0x1c) {
      _err_print_error("_insert","./core/templates/hash_set.h",0xbf,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: -1"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      uVar42 = 0xffffffff;
      iVar44 = *(int *)((long)in_RSI + 0x24);
      lVar36 = *in_RSI;
      goto LAB_00106298;
    }
    uVar27 = (int)in_RSI[4] + 1;
    uVar29 = (ulong)uVar27;
    if (uVar27 < 2) {
      uVar29 = 2;
    }
    uVar27 = *(uint *)(hash_table_size_primes + uVar29 * 4);
    *(int *)(in_RSI + 4) = (int)uVar29;
    pvVar1 = (void *)in_RSI[3];
    uVar29 = (ulong)uVar27 * 4;
    pvVar2 = (void *)in_RSI[2];
    lVar30 = Memory::alloc_static(uVar29,false);
    in_RSI[3] = lVar30;
    lVar30 = Memory::realloc_static((void *)*in_RSI,(ulong)uVar27 * 8,false);
    *in_RSI = lVar30;
    lVar30 = Memory::alloc_static(uVar29,false);
    in_RSI[2] = lVar30;
    lVar30 = Memory::realloc_static((void *)in_RSI[1],uVar29,false);
    in_RSI[1] = lVar30;
    if (uVar27 != 0) {
      memset((void *)in_RSI[3],0,uVar29);
    }
    if (*(int *)((long)in_RSI + 0x24) != 0) {
      uVar29 = 0;
      lVar34 = in_RSI[3];
      lVar36 = in_RSI[2];
      do {
        uVar41 = uVar29 & 0xffffffff;
        uVar39 = (undefined4)uVar29;
        uVar42 = 0;
        uVar27 = *(uint *)((long)pvVar1 + (ulong)*(uint *)((long)pvVar2 + uVar29 * 4) * 4);
        uVar35 = (ulong)uVar27;
        uVar40 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(in_RSI + 4) * 4);
        uVar38 = CONCAT44(0,uVar40);
        lVar31 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(in_RSI + 4) * 8);
        auVar7._8_8_ = 0;
        auVar7._0_8_ = uVar35 * lVar31;
        auVar19._8_8_ = 0;
        auVar19._0_8_ = uVar38;
        lVar32 = SUB168(auVar7 * auVar19,8) * 4;
        iVar44 = SUB164(auVar7 * auVar19,8);
        puVar43 = (uint *)(lVar34 + lVar32);
        uVar28 = *puVar43;
        if (uVar28 == 0) {
          lVar31 = uVar29 * 4;
        }
        else {
          do {
            auVar8._8_8_ = 0;
            auVar8._0_8_ = (ulong)uVar28 * lVar31;
            auVar20._8_8_ = 0;
            auVar20._0_8_ = uVar38;
            auVar9._8_8_ = 0;
            auVar9._0_8_ = (ulong)((uVar40 + iVar44) - SUB164(auVar8 * auVar20,8)) * lVar31;
            auVar21._8_8_ = 0;
            auVar21._0_8_ = uVar38;
            local_88 = SUB164(auVar9 * auVar21,8);
            if (local_88 < uVar42) {
              *(int *)(lVar36 + uVar41 * 4) = iVar44;
              uVar27 = *puVar43;
              *puVar43 = (uint)uVar35;
              uVar28 = *(uint *)(lVar32 + lVar30);
              uVar35 = (ulong)uVar27;
              *(uint *)(lVar32 + lVar30) = (uint)uVar41;
              uVar41 = (ulong)uVar28;
              uVar42 = local_88;
            }
            uVar39 = (undefined4)uVar41;
            uVar27 = (uint)uVar35;
            uVar42 = uVar42 + 1;
            auVar10._8_8_ = 0;
            auVar10._0_8_ = (ulong)(iVar44 + 1) * lVar31;
            auVar22._8_8_ = 0;
            auVar22._0_8_ = uVar38;
            lVar32 = SUB168(auVar10 * auVar22,8) * 4;
            iVar44 = SUB164(auVar10 * auVar22,8);
            puVar43 = (uint *)(lVar34 + lVar32);
            uVar28 = *puVar43;
          } while (uVar28 != 0);
          lVar31 = uVar41 << 2;
        }
        *puVar43 = uVar27;
        uVar29 = uVar29 + 1;
        *(int *)(lVar36 + lVar31) = iVar44;
        *(undefined4 *)(lVar30 + lVar32) = uVar39;
      } while ((uint)uVar29 < *(uint *)((long)in_RSI + 0x24));
    }
    Memory::free_static(pvVar1,false);
    Memory::free_static(pvVar2,false);
    lVar30 = *(long *)in_RDX;
    if (lVar30 == 0) goto LAB_001062d6;
LAB_00106175:
    uVar27 = *(uint *)(lVar30 + 0x20);
  }
  if (uVar27 == 0) {
    uVar27 = 1;
  }
  uVar29 = (ulong)uVar27;
  StringName::StringName((StringName *)(*in_RSI + (ulong)*(uint *)((long)in_RSI + 0x24) * 8),in_RDX)
  ;
  uVar40 = *(uint *)((long)in_RSI + 0x24);
  lVar34 = in_RSI[3];
  uVar28 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(in_RSI + 4) * 4);
  uVar35 = CONCAT44(0,uVar28);
  lVar36 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(in_RSI + 4) * 8);
  auVar11._8_8_ = 0;
  auVar11._0_8_ = uVar29 * lVar36;
  auVar23._8_8_ = 0;
  auVar23._0_8_ = uVar35;
  lVar30 = SUB168(auVar11 * auVar23,8) * 4;
  iVar44 = SUB164(auVar11 * auVar23,8);
  puVar43 = (uint *)(lVar34 + lVar30);
  uVar42 = *puVar43;
  if (uVar42 == 0) {
    local_68 = in_RSI[2];
    lVar32 = in_RSI[1];
  }
  else {
    uVar37 = 0;
    local_68 = in_RSI[2];
    lVar32 = in_RSI[1];
    do {
      auVar12._8_8_ = 0;
      auVar12._0_8_ = (ulong)uVar42 * lVar36;
      auVar24._8_8_ = 0;
      auVar24._0_8_ = uVar35;
      auVar13._8_8_ = 0;
      auVar13._0_8_ = (ulong)((uVar28 + iVar44) - SUB164(auVar12 * auVar24,8)) * lVar36;
      auVar25._8_8_ = 0;
      auVar25._0_8_ = uVar35;
      local_88 = SUB164(auVar13 * auVar25,8);
      if (local_88 < uVar37) {
        *(int *)(local_68 + (ulong)uVar40 * 4) = iVar44;
        uVar27 = *puVar43;
        *puVar43 = (uint)uVar29;
        uVar42 = *(uint *)(lVar30 + lVar32);
        uVar29 = (ulong)uVar27;
        *(uint *)(lVar30 + lVar32) = uVar40;
        uVar40 = uVar42;
        uVar37 = local_88;
      }
      uVar27 = (uint)uVar29;
      uVar37 = uVar37 + 1;
      auVar14._8_8_ = 0;
      auVar14._0_8_ = (ulong)(iVar44 + 1) * lVar36;
      auVar26._8_8_ = 0;
      auVar26._0_8_ = uVar35;
      lVar30 = SUB168(auVar14 * auVar26,8) * 4;
      iVar44 = SUB164(auVar14 * auVar26,8);
      puVar43 = (uint *)(lVar34 + lVar30);
      uVar42 = *puVar43;
    } while (uVar42 != 0);
  }
  *puVar43 = uVar27;
  *(int *)(local_68 + (ulong)uVar40 * 4) = iVar44;
  *(uint *)(lVar32 + lVar30) = uVar40;
  uVar42 = *(uint *)((long)in_RSI + 0x24);
  lVar36 = *in_RSI;
  iVar44 = uVar42 + 1;
  *(int *)((long)in_RSI + 0x24) = iVar44;
LAB_00106298:
  *(uint *)(param_1 + 0xc) = uVar42;
  *(long *)param_1 = lVar36;
  *(int *)(param_1 + 8) = iVar44;
  return param_1;
}



/* Callable
   create_custom_callable_function_pointer<EditorPerformanceProfiler>(EditorPerformanceProfiler*,
   char const*, void (EditorPerformanceProfiler::*)()) */

EditorPerformanceProfiler *
create_custom_callable_function_pointer<EditorPerformanceProfiler>
          (EditorPerformanceProfiler *param_1,char *param_2,_func_void *param_3)

{
  undefined8 uVar1;
  CallableCustom *this;
  undefined8 in_RCX;
  undefined8 in_R8;
  
  this = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(this);
  *(undefined **)(this + 0x20) = &_LC12;
  *(undefined1 (*) [16])(this + 0x30) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined ***)this = &PTR_hash_0010ce98;
  uVar1 = *(undefined8 *)(param_2 + 0x60);
  *(char **)(this + 0x28) = param_2;
  *(undefined8 *)(this + 0x30) = uVar1;
  *(undefined8 *)(this + 0x38) = in_RCX;
  *(undefined8 *)(this + 0x40) = in_R8;
  *(undefined8 *)(this + 0x10) = 0;
  CallableCustomMethodPointerBase::_setup((uint *)this,(int)this + 0x28);
  *(_func_void **)(this + 0x20) = param_3 + 1;
  Callable::Callable((Callable *)param_1,this);
  return param_1;
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



/* EditorPerformanceProfiler::_initialize_classv() */

void EditorPerformanceProfiler::_initialize_classv(void)

{
  long in_FS_OFFSET;
  undefined8 local_60;
  long local_58;
  undefined8 local_50;
  long local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (initialize_class()::initialized == '\0') {
    if (HSplitContainer::initialize_class()::initialized == '\0') {
      if (SplitContainer::initialize_class()::initialized == '\0') {
        if (Container::initialize_class()::initialized == '\0') {
          if (Control::initialize_class()::initialized == '\0') {
            if (CanvasItem::initialize_class()::initialized == '\0') {
              if (Node::initialize_class()::initialized == '\0') {
                Object::initialize_class();
                local_50 = 0;
                String::parse_latin1((String *)&local_50,"Object");
                StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
                local_60 = 0;
                String::parse_latin1((String *)&local_60,"Node");
                StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
                ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_48);
                if ((StringName::configured != '\0') && (local_58 != 0)) {
                  StringName::unref();
                }
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
                if ((StringName::configured != '\0') && (local_48 != 0)) {
                  StringName::unref();
                }
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
                if ((code *)PTR__bind_methods_00110040 != Node::_bind_methods) {
                  Node::_bind_methods();
                }
                Node::initialize_class()::initialized = '\x01';
              }
              local_50 = 0;
              String::parse_latin1((String *)&local_50,"Node");
              StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
              local_60 = 0;
              String::parse_latin1((String *)&local_60,"CanvasItem");
              StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
              ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_48);
              if ((StringName::configured != '\0') && (local_58 != 0)) {
                StringName::unref();
              }
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
              if ((StringName::configured != '\0') && (local_48 != 0)) {
                StringName::unref();
              }
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
              CanvasItem::_bind_methods();
              if ((code *)PTR__bind_compatibility_methods_00110030 !=
                  Object::_bind_compatibility_methods) {
                CanvasItem::_bind_compatibility_methods();
              }
              CanvasItem::initialize_class()::initialized = '\x01';
            }
            local_50 = 0;
            String::parse_latin1((String *)&local_50,"CanvasItem");
            StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
            local_60 = 0;
            String::parse_latin1((String *)&local_60,"Control");
            StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
            ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_48);
            if ((StringName::configured != '\0') && (local_58 != 0)) {
              StringName::unref();
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
            if ((StringName::configured != '\0') && (local_48 != 0)) {
              StringName::unref();
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
            Control::_bind_methods();
            Control::initialize_class()::initialized = '\x01';
          }
          local_50 = 0;
          String::parse_latin1((String *)&local_50,"Control");
          StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
          local_60 = 0;
          String::parse_latin1((String *)&local_60,"Container");
          StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
          ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_48);
          if ((StringName::configured != '\0') && (local_58 != 0)) {
            StringName::unref();
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
          if ((StringName::configured != '\0') && (local_48 != 0)) {
            StringName::unref();
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
          Container::_bind_methods();
          Container::initialize_class()::initialized = '\x01';
        }
        local_50 = 0;
        String::parse_latin1((String *)&local_50,"Container");
        StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
        local_60 = 0;
        String::parse_latin1((String *)&local_60,"SplitContainer");
        StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
        ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_48);
        if ((StringName::configured != '\0') && (local_58 != 0)) {
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
        if ((StringName::configured != '\0') && (local_48 != 0)) {
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
        if ((code *)PTR__bind_methods_00110038 != Container::_bind_methods) {
          SplitContainer::_bind_methods();
        }
        SplitContainer::initialize_class()::initialized = '\x01';
      }
      local_50 = 0;
      String::parse_latin1((String *)&local_50,"SplitContainer");
      StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
      local_60 = 0;
      String::parse_latin1((String *)&local_60,"HSplitContainer");
      StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
      ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_48);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_48 != 0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      HSplitContainer::initialize_class()::initialized = '\x01';
    }
    local_50 = 0;
    String::parse_latin1((String *)&local_50,"HSplitContainer");
    StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
    local_60 = 0;
    String::parse_latin1((String *)&local_60,"EditorPerformanceProfiler");
    StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
    ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_48);
    if ((StringName::configured != '\0') && (local_58 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    if ((StringName::configured != '\0') && (local_48 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
    initialize_class()::initialized = '\x01';
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* EditorPerformanceProfiler::_create_label(float, Performance::MonitorType) [clone .cold] */

void EditorPerformanceProfiler::_create_label(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<StringName>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<StringName>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<char32_t>::_ref(CowData<char32_t> const&) */

void __thiscall CowData<char32_t>::_ref(CowData<char32_t> *this,CowData *param_1)

{
  if (*(long *)this != *(long *)param_1) {
    _ref(this,param_1);
    return;
  }
  return;
}



/* EditorPerformanceProfiler::get_class() const */

void EditorPerformanceProfiler::get_class(void)

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
        CowData<char32_t>::_ref((CowData<char32_t> *)in_RDI,(CowData *)(lVar2 + 0x10));
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



/* HSplitContainer::get_class() const */

void HSplitContainer::get_class(void)

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
        CowData<char32_t>::_ref((CowData<char32_t> *)in_RDI,(CowData *)(lVar2 + 0x10));
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



/* Object::is_class(String const&) const */

ulong __thiscall Object::is_class(Object *this,String *param_1)

{
  long *plVar1;
  long lVar2;
  char *__s;
  long lVar3;
  uint uVar4;
  ulong uVar5;
  long in_FS_OFFSET;
  long local_50;
  char *local_48;
  size_t local_40;
  long local_30;
  
  lVar2 = *(long *)(this + 8);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  do {
    if (lVar2 == 0) {
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar5 = String::operator==(param_1,"Object");
        return uVar5;
      }
LAB_00107217:
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    lVar3 = *(long *)(lVar2 + 0x20);
    if (lVar3 == 0) {
      local_50 = 0;
    }
    else {
      __s = *(char **)(lVar3 + 8);
      local_50 = 0;
      if (__s == (char *)0x0) {
        if (*(long *)(lVar3 + 0x10) != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_50,(CowData *)(lVar3 + 0x10));
        }
      }
      else {
        local_40 = strlen(__s);
        local_48 = __s;
        String::parse_latin1((StrRange *)&local_50);
      }
    }
    uVar4 = String::operator==(param_1,(String *)&local_50);
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
    if ((char)uVar4 != '\0') {
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return (ulong)uVar4;
      }
      goto LAB_00107217;
    }
    lVar2 = *(long *)(lVar2 + 8);
  } while( true );
}



/* CallableCustomMethodPointer<EditorPerformanceProfiler, void>::call(Variant const**, int,
   Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<EditorPerformanceProfiler,void>::call
          (CallableCustomMethodPointer<EditorPerformanceProfiler,void> *this,Variant **param_1,
          int param_2,Variant *param_3,CallError *param_4)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  ulong *puVar4;
  code *UNRECOVERED_JUMPTABLE;
  ulong uVar5;
  long in_FS_OFFSET;
  bool bVar6;
  CowData<char32_t> local_50 [8];
  CowData<char32_t> local_48 [8];
  undefined8 local_40;
  String local_38 [8];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar3 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar3 < (uint)ObjectDB::slot_max) {
    while( true ) {
      local_38[0] = (String)0x0;
      LOCK();
      bVar6 = (char)ObjectDB::spin_lock == '\0';
      if (bVar6) {
        ObjectDB::spin_lock._0_1_ = '\x01';
      }
      UNLOCK();
      if (bVar6) break;
      do {
      } while ((char)ObjectDB::spin_lock != '\0');
    }
    puVar4 = (ulong *)((ulong)uVar3 * 0x10 + ObjectDB::object_slots);
    uVar5 = *(ulong *)(this + 0x30) >> 0x18 & 0x7fffffffff;
    if (uVar5 != (*puVar4 & 0x7fffffffff)) {
      ObjectDB::spin_lock._0_1_ = '\0';
      goto LAB_0010740f;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] == 0) goto LAB_0010740f;
    lVar1 = *(long *)(this + 0x28);
    UNRECOVERED_JUMPTABLE = *(code **)(this + 0x38);
    lVar2 = *(long *)(this + 0x40);
    if (param_2 == 0) {
      *(undefined4 *)param_4 = 0;
      if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
        UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar1 + lVar2) + -1);
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x001073e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),uVar5,UNRECOVERED_JUMPTABLE);
        return;
      }
      goto LAB_001074c0;
    }
    *(undefined4 *)param_4 = 3;
    *(undefined4 *)(param_4 + 8) = 0;
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
LAB_0010740f:
    local_40 = 0;
    String::parse_latin1((String *)&local_40,"\', can\'t call method.");
    uitos((ulong)local_50);
    operator+((char *)local_48,(String *)"Invalid Object id \'");
    String::operator+(local_38,(String *)local_48);
    _err_print_error(&_LC34,"./core/object/callable_method_pointer.h",0x67,
                     "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                     local_38,0,0);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_38);
    CowData<char32_t>::_unref(local_48);
    CowData<char32_t>::_unref(local_50);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_40);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_001074c0:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<EditorPerformanceProfiler, void, Ref<InputEvent>
   const&>::call(Variant const**, int, Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<EditorPerformanceProfiler,void,Ref<InputEvent>const&>::call
          (CallableCustomMethodPointer<EditorPerformanceProfiler,void,Ref<InputEvent>const&> *this,
          Variant **param_1,int param_2,Variant *param_3,CallError *param_4)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  Object *pOVar5;
  char cVar6;
  Object *pOVar7;
  uint uVar8;
  ulong *puVar9;
  code *pcVar10;
  long in_FS_OFFSET;
  bool bVar11;
  CowData<char32_t> local_50 [8];
  CowData<char32_t> local_48 [8];
  undefined8 local_40;
  Object *local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar8 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar8 < (uint)ObjectDB::slot_max) {
    while( true ) {
      uVar3 = (ulong)local_38 >> 8;
      local_38 = (Object *)(uVar3 << 8);
      LOCK();
      bVar11 = (char)ObjectDB::spin_lock == '\0';
      if (bVar11) {
        ObjectDB::spin_lock._0_1_ = '\x01';
      }
      UNLOCK();
      if (bVar11) break;
      local_38 = (Object *)(uVar3 << 8);
      do {
      } while ((char)ObjectDB::spin_lock != '\0');
    }
    puVar9 = (ulong *)((ulong)uVar8 * 0x10 + ObjectDB::object_slots);
    if ((*(ulong *)(this + 0x30) >> 0x18 & 0x7fffffffff) == (*puVar9 & 0x7fffffffff)) {
      ObjectDB::spin_lock._0_1_ = '\0';
      if (puVar9[1] != 0) {
        lVar1 = *(long *)(this + 0x28);
        pcVar10 = *(code **)(this + 0x38);
        lVar2 = *(long *)(this + 0x40);
        if (1 < (uint)param_2) {
          *(undefined4 *)param_4 = 3;
          *(undefined4 *)(param_4 + 8) = 1;
          goto LAB_0010759e;
        }
        if (param_2 == 0) {
          *(undefined4 *)param_4 = 4;
          *(undefined4 *)(param_4 + 8) = 1;
          goto LAB_0010759e;
        }
        *(undefined4 *)param_4 = 0;
        if (((ulong)pcVar10 & 1) != 0) {
          pcVar10 = *(code **)(pcVar10 + *(long *)(lVar1 + lVar2) + -1);
        }
        cVar6 = Variant::can_convert_strict(*(undefined4 *)*param_1);
        uVar4 = _LC35;
        if (cVar6 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar4;
        }
        local_38 = (Object *)0x0;
        pOVar7 = (Object *)Variant::get_validated_object();
        pOVar5 = local_38;
        if (pOVar7 != local_38) {
          if (pOVar7 == (Object *)0x0) {
            if (local_38 != (Object *)0x0) {
              local_38 = (Object *)0x0;
LAB_0010766d:
              cVar6 = RefCounted::unreference();
              if ((cVar6 != '\0') && (cVar6 = predelete_handler(pOVar5), cVar6 != '\0')) {
                (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
                Memory::free_static(pOVar5,false);
              }
            }
          }
          else {
            pOVar7 = (Object *)__dynamic_cast(pOVar7,&Object::typeinfo,&InputEvent::typeinfo,0);
            if (pOVar5 != pOVar7) {
              local_38 = pOVar7;
              if ((pOVar7 != (Object *)0x0) && (cVar6 = RefCounted::reference(), cVar6 == '\0')) {
                local_38 = (Object *)0x0;
              }
              if (pOVar5 != (Object *)0x0) goto LAB_0010766d;
            }
          }
        }
        (*pcVar10)((long *)(lVar1 + lVar2));
        if (((local_38 != (Object *)0x0) &&
            (cVar6 = RefCounted::unreference(), pOVar5 = local_38, cVar6 != '\0')) &&
           (cVar6 = predelete_handler(local_38), cVar6 != '\0')) {
          (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
          Memory::free_static(pOVar5,false);
        }
        goto LAB_0010759e;
      }
    }
    else {
      ObjectDB::spin_lock._0_1_ = '\0';
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  local_40 = 0;
  String::parse_latin1((String *)&local_40,"\', can\'t call method.");
  uitos((ulong)local_50);
  operator+((char *)local_48,(String *)"Invalid Object id \'");
  String::operator+((String *)&local_38,(String *)local_48);
  _err_print_error(&_LC34,"./core/object/callable_method_pointer.h",0x67,
                   "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                   (String *)&local_38,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_38);
  CowData<char32_t>::_unref(local_48);
  CowData<char32_t>::_unref(local_50);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_40);
LAB_0010759e:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* Control::is_class(String const&) const */

undefined8 __thiscall Control::is_class(Control *this,String *param_1)

{
  long lVar1;
  char *pcVar2;
  long lVar3;
  char cVar4;
  undefined8 uVar5;
  long in_FS_OFFSET;
  undefined8 local_60;
  char *local_58;
  size_t local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  for (lVar1 = *(long *)(this + 8); lVar1 != 0; lVar1 = *(long *)(lVar1 + 8)) {
    lVar3 = *(long *)(lVar1 + 0x20);
    if (lVar3 == 0) {
      local_60 = 0;
    }
    else {
      pcVar2 = *(char **)(lVar3 + 8);
      local_60 = 0;
      if (pcVar2 == (char *)0x0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar3 + 0x10));
      }
      else {
        local_50 = strlen(pcVar2);
        local_58 = pcVar2;
        String::parse_latin1((StrRange *)&local_60);
      }
    }
    cVar4 = String::operator==(param_1,(String *)&local_60);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    if (cVar4 != '\0') goto LAB_00107913;
  }
  cVar4 = String::operator==(param_1,"Control");
  if (cVar4 == '\0') {
    for (lVar1 = *(long *)(this + 8); lVar1 != 0; lVar1 = *(long *)(lVar1 + 8)) {
      lVar3 = *(long *)(lVar1 + 0x20);
      if (lVar3 == 0) {
        local_60 = 0;
      }
      else {
        pcVar2 = *(char **)(lVar3 + 8);
        local_60 = 0;
        if (pcVar2 == (char *)0x0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar3 + 0x10));
        }
        else {
          local_50 = strlen(pcVar2);
          local_58 = pcVar2;
          String::parse_latin1((StrRange *)&local_60);
        }
      }
      cVar4 = String::operator==(param_1,(String *)&local_60);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if (cVar4 != '\0') goto LAB_00107913;
    }
    cVar4 = String::operator==(param_1,"CanvasItem");
    if (cVar4 == '\0') {
      for (lVar1 = *(long *)(this + 8); lVar1 != 0; lVar1 = *(long *)(lVar1 + 8)) {
        lVar3 = *(long *)(lVar1 + 0x20);
        if (lVar3 == 0) {
          local_58 = (char *)0x0;
        }
        else {
          local_58 = (char *)0x0;
          if (*(char **)(lVar3 + 8) == (char *)0x0) {
            CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)(lVar3 + 0x10));
          }
          else {
            String::parse_latin1((String *)&local_58,*(char **)(lVar3 + 8));
          }
        }
        cVar4 = String::operator==(param_1,(String *)&local_58);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
        if (cVar4 != '\0') goto LAB_00107913;
      }
      cVar4 = String::operator==(param_1,"Node");
      if (cVar4 == '\0') {
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          uVar5 = Object::is_class((Object *)this,param_1);
          return uVar5;
        }
        goto LAB_00107aae;
      }
    }
  }
LAB_00107913:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_00107aae:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* HSplitContainer::is_class(String const&) const */

undefined8 __thiscall HSplitContainer::is_class(HSplitContainer *this,String *param_1)

{
  long lVar1;
  char *pcVar2;
  long lVar3;
  char cVar4;
  undefined8 uVar5;
  long in_FS_OFFSET;
  undefined8 local_60;
  char *local_58;
  size_t local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  for (lVar1 = *(long *)(this + 8); lVar1 != 0; lVar1 = *(long *)(lVar1 + 8)) {
    lVar3 = *(long *)(lVar1 + 0x20);
    if (lVar3 == 0) {
      local_60 = 0;
    }
    else {
      pcVar2 = *(char **)(lVar3 + 8);
      local_60 = 0;
      if (pcVar2 == (char *)0x0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar3 + 0x10));
      }
      else {
        local_50 = strlen(pcVar2);
        local_58 = pcVar2;
        String::parse_latin1((StrRange *)&local_60);
      }
    }
    cVar4 = String::operator==(param_1,(String *)&local_60);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    if (cVar4 != '\0') goto LAB_00107b93;
  }
  cVar4 = String::operator==(param_1,"HSplitContainer");
  if (cVar4 == '\0') {
    for (lVar1 = *(long *)(this + 8); lVar1 != 0; lVar1 = *(long *)(lVar1 + 8)) {
      lVar3 = *(long *)(lVar1 + 0x20);
      if (lVar3 == 0) {
        local_60 = 0;
      }
      else {
        pcVar2 = *(char **)(lVar3 + 8);
        local_60 = 0;
        if (pcVar2 == (char *)0x0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar3 + 0x10));
        }
        else {
          local_50 = strlen(pcVar2);
          local_58 = pcVar2;
          String::parse_latin1((StrRange *)&local_60);
        }
      }
      cVar4 = String::operator==(param_1,(String *)&local_60);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if (cVar4 != '\0') goto LAB_00107b93;
    }
    cVar4 = String::operator==(param_1,"SplitContainer");
    if (cVar4 == '\0') {
      for (lVar1 = *(long *)(this + 8); lVar1 != 0; lVar1 = *(long *)(lVar1 + 8)) {
        lVar3 = *(long *)(lVar1 + 0x20);
        if (lVar3 == 0) {
          local_58 = (char *)0x0;
        }
        else {
          local_58 = (char *)0x0;
          if (*(char **)(lVar3 + 8) == (char *)0x0) {
            CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)(lVar3 + 0x10));
          }
          else {
            String::parse_latin1((String *)&local_58,*(char **)(lVar3 + 8));
          }
        }
        cVar4 = String::operator==(param_1,(String *)&local_58);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
        if (cVar4 != '\0') goto LAB_00107b93;
      }
      cVar4 = String::operator==(param_1,"Container");
      if (cVar4 == '\0') {
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          uVar5 = Control::is_class((Control *)this,param_1);
          return uVar5;
        }
        goto LAB_00107d2e;
      }
    }
  }
LAB_00107b93:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_00107d2e:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorPerformanceProfiler::is_class(String const&) const */

undefined8 __thiscall
EditorPerformanceProfiler::is_class(EditorPerformanceProfiler *this,String *param_1)

{
  long *plVar1;
  long lVar2;
  char *__s;
  long lVar3;
  char cVar4;
  undefined8 uVar5;
  long in_FS_OFFSET;
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
        if (*(long *)(lVar3 + 0x10) != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar3 + 0x10));
        }
      }
      else {
        local_50 = strlen(__s);
        local_58 = __s;
        String::parse_latin1((StrRange *)&local_60);
      }
    }
    cVar4 = String::operator==(param_1,(String *)&local_60);
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
    if (cVar4 != '\0') goto LAB_00107e3b;
  }
  cVar4 = String::operator==(param_1,"EditorPerformanceProfiler");
  if (cVar4 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar5 = HSplitContainer::is_class((HSplitContainer *)this,param_1);
      return uVar5;
    }
  }
  else {
LAB_00107e3b:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* HSplitContainer::_initialize_classv() */

void HSplitContainer::_initialize_classv(void)

{
  long in_FS_OFFSET;
  undefined8 local_60;
  long local_58;
  undefined8 local_50;
  long local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (initialize_class()::initialized == '\0') {
    if (SplitContainer::initialize_class()::initialized == '\0') {
      if (Container::initialize_class()::initialized == '\0') {
        if (Control::initialize_class()::initialized == '\0') {
          if (CanvasItem::initialize_class()::initialized == '\0') {
            if (Node::initialize_class()::initialized == '\0') {
              Object::initialize_class();
              local_50 = 0;
              String::parse_latin1((String *)&local_50,"Object");
              StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
              local_60 = 0;
              String::parse_latin1((String *)&local_60,"Node");
              StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
              ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_48);
              if ((StringName::configured != '\0') && (local_58 != 0)) {
                StringName::unref();
              }
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
              if ((StringName::configured != '\0') && (local_48 != 0)) {
                StringName::unref();
              }
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
              if ((code *)PTR__bind_methods_00110040 != Node::_bind_methods) {
                Node::_bind_methods();
              }
              Node::initialize_class()::initialized = '\x01';
            }
            local_50 = 0;
            String::parse_latin1((String *)&local_50,"Node");
            StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
            local_60 = 0;
            String::parse_latin1((String *)&local_60,"CanvasItem");
            StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
            ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_48);
            if ((StringName::configured != '\0') && (local_58 != 0)) {
              StringName::unref();
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
            if ((StringName::configured != '\0') && (local_48 != 0)) {
              StringName::unref();
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
            CanvasItem::_bind_methods();
            if ((code *)PTR__bind_compatibility_methods_00110030 !=
                Object::_bind_compatibility_methods) {
              CanvasItem::_bind_compatibility_methods();
            }
            CanvasItem::initialize_class()::initialized = '\x01';
          }
          local_50 = 0;
          String::parse_latin1((String *)&local_50,"CanvasItem");
          StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
          local_60 = 0;
          String::parse_latin1((String *)&local_60,"Control");
          StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
          ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_48);
          if ((StringName::configured != '\0') && (local_58 != 0)) {
            StringName::unref();
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
          if ((StringName::configured != '\0') && (local_48 != 0)) {
            StringName::unref();
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
          Control::_bind_methods();
          Control::initialize_class()::initialized = '\x01';
        }
        local_50 = 0;
        String::parse_latin1((String *)&local_50,"Control");
        StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
        local_60 = 0;
        String::parse_latin1((String *)&local_60,"Container");
        StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
        ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_48);
        if ((StringName::configured != '\0') && (local_58 != 0)) {
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
        if ((StringName::configured != '\0') && (local_48 != 0)) {
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
        Container::_bind_methods();
        Container::initialize_class()::initialized = '\x01';
      }
      local_50 = 0;
      String::parse_latin1((String *)&local_50,"Container");
      StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
      local_60 = 0;
      String::parse_latin1((String *)&local_60,"SplitContainer");
      StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
      ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_48);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_48 != 0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((code *)PTR__bind_methods_00110038 != Container::_bind_methods) {
        SplitContainer::_bind_methods();
      }
      SplitContainer::initialize_class()::initialized = '\x01';
    }
    local_50 = 0;
    String::parse_latin1((String *)&local_50,"SplitContainer");
    StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
    local_60 = 0;
    String::parse_latin1((String *)&local_60,"HSplitContainer");
    StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
    ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_48);
    if ((StringName::configured != '\0') && (local_58 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    if ((StringName::configured != '\0') && (local_48 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
    initialize_class()::initialized = '\x01';
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* PropertyListHelper::~PropertyListHelper() */

void __thiscall PropertyListHelper::~PropertyListHelper(PropertyListHelper *this)

{
  uint uVar1;
  long lVar2;
  void *pvVar3;
  
  pvVar3 = *(void **)(this + 0x18);
  if (pvVar3 != (void *)0x0) {
    if (*(int *)(this + 0x3c) != 0) {
      uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x38) * 4);
      if (uVar1 == 0) {
        *(undefined4 *)(this + 0x3c) = 0;
        *(undefined1 (*) [16])(this + 0x28) = (undefined1  [16])0x0;
      }
      else {
        lVar2 = 0;
        do {
          if (*(int *)(*(long *)(this + 0x20) + lVar2) != 0) {
            pvVar3 = *(void **)((long)pvVar3 + lVar2 * 2);
            *(int *)(*(long *)(this + 0x20) + lVar2) = 0;
            if (Variant::needs_deinit[*(int *)((long)pvVar3 + 0x48)] != '\0') {
              Variant::_clear_internal();
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar3 + 0x38));
            if ((StringName::configured != '\0') && (*(long *)((long)pvVar3 + 0x28) != 0)) {
              StringName::unref();
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar3 + 0x20));
            CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar3 + 0x10));
            Memory::free_static(pvVar3,false);
            pvVar3 = *(void **)(this + 0x18);
            *(undefined8 *)((long)pvVar3 + lVar2 * 2) = 0;
          }
          lVar2 = lVar2 + 4;
        } while (lVar2 != (ulong)uVar1 << 2);
        *(undefined4 *)(this + 0x3c) = 0;
        *(undefined1 (*) [16])(this + 0x28) = (undefined1  [16])0x0;
        if (pvVar3 == (void *)0x0) goto LAB_0010853f;
      }
    }
    Memory::free_static(pvVar3,false);
    Memory::free_static(*(void **)(this + 0x20),false);
  }
LAB_0010853f:
  CowData<char32_t>::_unref((CowData<char32_t> *)this);
  return;
}



/* Node::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void Node::_get_property_listv(List *param_1,bool param_2)

{
  undefined7 in_register_00000031;
  long in_FS_OFFSET;
  undefined8 local_98;
  undefined8 local_90;
  long local_88;
  long local_80;
  undefined *local_78;
  undefined8 local_70;
  long local_68;
  int local_60;
  undefined8 local_58;
  undefined4 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_78 = &_LC14;
  local_88 = 0;
  local_90 = 0;
  local_70 = 4;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = &_LC14;
  local_98 = 0;
  local_70 = 4;
  String::parse_latin1((StrRange *)&local_98);
  local_78 = (undefined *)((ulong)local_78 & 0xffffffff00000000);
  local_70 = 0;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)&local_98);
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
  local_50 = 0x80;
  if (local_60 == 0x11) {
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 == local_80) {
      if ((StringName::configured != '\0') && (local_80 != 0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_68 = local_80;
    }
  }
  else {
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)CONCAT71(in_register_00000031,param_2),
             (PropertyInfo *)&local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"Node",false);
  ClassDB::get_property_list
            ((StringName *)&local_78,(List *)CONCAT71(in_register_00000031,param_2),true,
             (Object *)param_1);
  if ((StringName::configured != '\0') && (local_78 != (undefined *)0x0)) {
    StringName::unref();
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CanvasItem::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall CanvasItem::_get_property_listv(CanvasItem *this,List *param_1,bool param_2)

{
  long in_FS_OFFSET;
  undefined8 local_98;
  undefined8 local_90;
  long local_88;
  long local_80;
  char *local_78;
  undefined8 local_70;
  long local_68;
  int local_60;
  undefined8 local_58;
  undefined4 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (!param_2) {
    Node::_get_property_listv((List *)this,SUB81(param_1,0));
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "CanvasItem";
  local_70 = 10;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "CanvasItem";
  local_98 = 0;
  local_70 = 10;
  String::parse_latin1((StrRange *)&local_98);
  local_78 = (char *)((ulong)local_78 & 0xffffffff00000000);
  local_70 = 0;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)&local_98);
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
  local_50 = 0x80;
  if (local_60 == 0x11) {
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 == local_80) {
      if ((StringName::configured != '\0') && (local_80 != 0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_68 = local_80;
    }
  }
  else {
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"CanvasItem",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if ((code *)PTR__get_property_list_00110048 != Object::_get_property_list) {
    CanvasItem::_get_property_list((List *)this);
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      Node::_get_property_listv((List *)this,SUB81(param_1,0));
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Control::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall Control::_get_property_listv(Control *this,List *param_1,bool param_2)

{
  long in_FS_OFFSET;
  undefined8 local_98;
  undefined8 local_90;
  long local_88;
  long local_80;
  char *local_78;
  undefined8 local_70;
  long local_68;
  int local_60;
  undefined8 local_58;
  undefined4 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (!param_2) {
    CanvasItem::_get_property_listv((CanvasItem *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "Control";
  local_70 = 7;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "Control";
  local_98 = 0;
  local_70 = 7;
  String::parse_latin1((StrRange *)&local_98);
  local_78 = (char *)((ulong)local_78 & 0xffffffff00000000);
  local_70 = 0;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)&local_98);
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
  local_50 = 0x80;
  if (local_60 == 0x11) {
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 == local_80) {
      if ((StringName::configured != '\0') && (local_80 != 0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_68 = local_80;
    }
  }
  else {
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"Control",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if ((code *)PTR__get_property_list_00110050 != CanvasItem::_get_property_list) {
    Control::_get_property_list((List *)this);
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      CanvasItem::_get_property_listv((CanvasItem *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Container::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall Container::_get_property_listv(Container *this,List *param_1,bool param_2)

{
  long in_FS_OFFSET;
  undefined8 local_98;
  undefined8 local_90;
  long local_88;
  long local_80;
  char *local_78;
  undefined8 local_70;
  long local_68;
  int local_60;
  undefined8 local_58;
  undefined4 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (!param_2) {
    Control::_get_property_listv((Control *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "Container";
  local_70 = 9;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "Container";
  local_98 = 0;
  local_70 = 9;
  String::parse_latin1((StrRange *)&local_98);
  local_78 = (char *)((ulong)local_78 & 0xffffffff00000000);
  local_70 = 0;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)&local_98);
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
  local_50 = 0x80;
  if (local_60 == 0x11) {
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 == local_80) {
      if ((StringName::configured != '\0') && (local_80 != 0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_68 = local_80;
    }
  }
  else {
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"Container",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      Control::_get_property_listv((Control *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* SplitContainer::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall SplitContainer::_get_property_listv(SplitContainer *this,List *param_1,bool param_2)

{
  long in_FS_OFFSET;
  undefined8 local_98;
  undefined8 local_90;
  long local_88;
  long local_80;
  char *local_78;
  undefined8 local_70;
  long local_68;
  int local_60;
  undefined8 local_58;
  undefined4 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (!param_2) {
    Container::_get_property_listv((Container *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "SplitContainer";
  local_70 = 0xe;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "SplitContainer";
  local_98 = 0;
  local_70 = 0xe;
  String::parse_latin1((StrRange *)&local_98);
  local_78 = (char *)((ulong)local_78 & 0xffffffff00000000);
  local_70 = 0;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)&local_98);
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
  local_50 = 0x80;
  if (local_60 == 0x11) {
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 == local_80) {
      if ((StringName::configured != '\0') && (local_80 != 0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_68 = local_80;
    }
  }
  else {
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"SplitContainer",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      Container::_get_property_listv((Container *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* HSplitContainer::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall
HSplitContainer::_get_property_listv(HSplitContainer *this,List *param_1,bool param_2)

{
  long in_FS_OFFSET;
  undefined8 local_98;
  undefined8 local_90;
  long local_88;
  long local_80;
  char *local_78;
  undefined8 local_70;
  long local_68;
  int local_60;
  undefined8 local_58;
  undefined4 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (!param_2) {
    SplitContainer::_get_property_listv((SplitContainer *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "HSplitContainer";
  local_70 = 0xf;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "HSplitContainer";
  local_98 = 0;
  local_70 = 0xf;
  String::parse_latin1((StrRange *)&local_98);
  local_78 = (char *)((ulong)local_78 & 0xffffffff00000000);
  local_70 = 0;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)&local_98);
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
  local_50 = 0x80;
  if (local_60 == 0x11) {
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 == local_80) {
      if ((StringName::configured != '\0') && (local_80 != 0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_68 = local_80;
    }
  }
  else {
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"HSplitContainer",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      SplitContainer::_get_property_listv((SplitContainer *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorPerformanceProfiler::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const
    */

void __thiscall
EditorPerformanceProfiler::_get_property_listv
          (EditorPerformanceProfiler *this,List *param_1,bool param_2)

{
  long in_FS_OFFSET;
  undefined8 local_98;
  undefined8 local_90;
  long local_88;
  long local_80;
  char *local_78;
  undefined8 local_70;
  long local_68;
  int local_60;
  undefined8 local_58;
  undefined4 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (!param_2) {
    HSplitContainer::_get_property_listv((HSplitContainer *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "EditorPerformanceProfiler";
  local_70 = 0x19;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "EditorPerformanceProfiler";
  local_98 = 0;
  local_70 = 0x19;
  String::parse_latin1((StrRange *)&local_98);
  local_78 = (char *)((ulong)local_78 & 0xffffffff00000000);
  local_70 = 0;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)&local_98);
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
  local_50 = 0x80;
  if (local_60 == 0x11) {
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 == local_80) {
      if ((StringName::configured != '\0') && (local_80 != 0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_68 = local_80;
    }
  }
  else {
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"EditorPerformanceProfiler",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      HSplitContainer::_get_property_listv((HSplitContainer *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* HashMap<StringName, EditorPerformanceProfiler::Monitor, HashMapHasherDefault,
   HashMapComparatorDefault<StringName>, DefaultTypedAllocator<HashMapElement<StringName,
   EditorPerformanceProfiler::Monitor> > >::_lookup_pos(StringName const&, unsigned int&) const */

undefined8 __thiscall
HashMap<StringName,EditorPerformanceProfiler::Monitor,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorPerformanceProfiler::Monitor>>>
::_lookup_pos(HashMap<StringName,EditorPerformanceProfiler::Monitor,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorPerformanceProfiler::Monitor>>>
              *this,StringName *param_1,uint *param_2)

{
  uint uVar1;
  long lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  uint uVar11;
  uint uVar12;
  long lVar13;
  uint uVar14;
  ulong uVar15;
  uint uVar16;
  
  if (*(long *)(this + 8) == 0) {
    return 0;
  }
  if (*(int *)(this + 0x2c) != 0) {
    uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
    lVar2 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
    if (*(long *)param_1 == 0) {
      uVar11 = StringName::get_empty_hash();
    }
    else {
      uVar11 = *(uint *)(*(long *)param_1 + 0x20);
    }
    uVar15 = CONCAT44(0,uVar1);
    if (uVar11 == 0) {
      uVar11 = 1;
    }
    auVar3._8_8_ = 0;
    auVar3._0_8_ = (ulong)uVar11 * lVar2;
    auVar7._8_8_ = 0;
    auVar7._0_8_ = uVar15;
    lVar13 = SUB168(auVar3 * auVar7,8);
    uVar14 = *(uint *)(*(long *)(this + 0x10) + lVar13 * 4);
    uVar12 = SUB164(auVar3 * auVar7,8);
    if (uVar14 != 0) {
      uVar16 = 0;
      do {
        if ((uVar11 == uVar14) &&
           (*(long *)(*(long *)(*(long *)(this + 8) + lVar13 * 8) + 0x10) == *(long *)param_1)) {
          *param_2 = uVar12;
          return 1;
        }
        uVar16 = uVar16 + 1;
        auVar4._8_8_ = 0;
        auVar4._0_8_ = (ulong)(uVar12 + 1) * lVar2;
        auVar8._8_8_ = 0;
        auVar8._0_8_ = uVar15;
        lVar13 = SUB168(auVar4 * auVar8,8);
        uVar14 = *(uint *)(*(long *)(this + 0x10) + lVar13 * 4);
        uVar12 = SUB164(auVar4 * auVar8,8);
      } while ((uVar14 != 0) &&
              (auVar5._8_8_ = 0, auVar5._0_8_ = (ulong)uVar14 * lVar2, auVar9._8_8_ = 0,
              auVar9._0_8_ = uVar15, auVar6._8_8_ = 0,
              auVar6._0_8_ = (ulong)((uVar1 + uVar12) - SUB164(auVar5 * auVar9,8)) * lVar2,
              auVar10._8_8_ = 0, auVar10._0_8_ = uVar15, uVar16 <= SUB164(auVar6 * auVar10,8)));
    }
  }
  return 0;
}



/* KeyValue<StringName, EditorPerformanceProfiler::Monitor>::~KeyValue() */

void __thiscall
KeyValue<StringName,EditorPerformanceProfiler::Monitor>::~KeyValue
          (KeyValue<StringName,EditorPerformanceProfiler::Monitor> *this)

{
  void *pvVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  plVar4 = *(long **)(this + 0x18);
  if (plVar4 != (long *)0x0) {
    do {
      pvVar1 = (void *)*plVar4;
      if (pvVar1 == (void *)0x0) {
        if ((int)plVar4[2] != 0) {
          _err_print_error("~List","./core/templates/list.h",0x316,
                           "Condition \"_data->size_cache\" is true.",0,0);
          goto LAB_00109957;
        }
        break;
      }
      if (*(long **)((long)pvVar1 + 0x18) == plVar4) {
        lVar3 = *(long *)((long)pvVar1 + 8);
        lVar2 = *(long *)((long)pvVar1 + 0x10);
        *plVar4 = lVar3;
        if (pvVar1 == (void *)plVar4[1]) {
          plVar4[1] = lVar2;
        }
        if (lVar2 != 0) {
          *(long *)(lVar2 + 8) = lVar3;
          lVar3 = *(long *)((long)pvVar1 + 8);
        }
        if (lVar3 != 0) {
          *(long *)(lVar3 + 0x10) = lVar2;
        }
        Memory::free_static(pvVar1,false);
        *(int *)(plVar4 + 2) = (int)plVar4[2] + -1;
      }
      else {
        _err_print_error("erase","./core/templates/list.h",0xe7,
                         "Condition \"p_I->data != this\" is true. Returning: false",0,0);
      }
      plVar4 = *(long **)(this + 0x18);
    } while ((int)plVar4[2] != 0);
    Memory::free_static(plVar4,false);
  }
LAB_00109957:
  CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0x10));
  CowData<char32_t>::_unref((CowData<char32_t> *)(this + 8));
  if ((StringName::configured != '\0') && (*(long *)this != 0)) {
    StringName::unref();
    return;
  }
  return;
}



/* EditorPerformanceProfiler::~EditorPerformanceProfiler() */

void __thiscall
EditorPerformanceProfiler::~EditorPerformanceProfiler(EditorPerformanceProfiler *this)

{
  uint uVar1;
  Object *pOVar2;
  char cVar3;
  long lVar4;
  void *pvVar5;
  bool bVar6;
  
  bVar6 = StringName::configured != '\0';
  *(undefined ***)this = &PTR__initialize_classv_0010cb20;
  if ((bVar6) && (*(long *)(this + 0xae8) != 0)) {
    StringName::unref();
  }
  pvVar5 = *(void **)(this + 0xaa8);
  if (pvVar5 != (void *)0x0) {
    if (*(int *)(this + 0xacc) != 0) {
      uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0xac8) * 4);
      if (uVar1 == 0) {
        *(undefined4 *)(this + 0xacc) = 0;
        *(undefined1 (*) [16])(this + 0xab8) = (undefined1  [16])0x0;
      }
      else {
        lVar4 = 0;
        do {
          if (*(int *)(*(long *)(this + 0xab0) + lVar4) != 0) {
            bVar6 = StringName::configured != '\0';
            *(int *)(*(long *)(this + 0xab0) + lVar4) = 0;
            pvVar5 = *(void **)((long)pvVar5 + lVar4 * 2);
            if ((bVar6) && (*(long *)((long)pvVar5 + 0x10) != 0)) {
              StringName::unref();
            }
            Memory::free_static(pvVar5,false);
            pvVar5 = *(void **)(this + 0xaa8);
            *(undefined8 *)((long)pvVar5 + lVar4 * 2) = 0;
          }
          lVar4 = lVar4 + 4;
        } while ((ulong)uVar1 << 2 != lVar4);
        *(undefined4 *)(this + 0xacc) = 0;
        *(undefined1 (*) [16])(this + 0xab8) = (undefined1  [16])0x0;
        if (pvVar5 == (void *)0x0) goto LAB_00109b0a;
      }
    }
    Memory::free_static(pvVar5,false);
    Memory::free_static(*(void **)(this + 0xab0),false);
  }
LAB_00109b0a:
  pvVar5 = *(void **)(this + 0xa78);
  if (pvVar5 != (void *)0x0) {
    if (*(int *)(this + 0xa9c) != 0) {
      uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0xa98) * 4);
      if (uVar1 == 0) {
        *(undefined4 *)(this + 0xa9c) = 0;
        *(undefined1 (*) [16])(this + 0xa88) = (undefined1  [16])0x0;
      }
      else {
        lVar4 = 0;
        do {
          if (*(int *)(*(long *)(this + 0xa80) + lVar4) != 0) {
            pvVar5 = *(void **)((long)pvVar5 + lVar4 * 2);
            *(int *)(*(long *)(this + 0xa80) + lVar4) = 0;
            KeyValue<StringName,EditorPerformanceProfiler::Monitor>::~KeyValue
                      ((KeyValue<StringName,EditorPerformanceProfiler::Monitor> *)
                       ((long)pvVar5 + 0x10));
            Memory::free_static(pvVar5,false);
            pvVar5 = *(void **)(this + 0xa78);
            *(undefined8 *)((long)pvVar5 + lVar4 * 2) = 0;
          }
          lVar4 = lVar4 + 4;
        } while (lVar4 != (ulong)uVar1 << 2);
        *(undefined4 *)(this + 0xa9c) = 0;
        *(undefined1 (*) [16])(this + 0xa88) = (undefined1  [16])0x0;
        if (pvVar5 == (void *)0x0) goto LAB_00109bb3;
      }
    }
    Memory::free_static(pvVar5,false);
    Memory::free_static(*(void **)(this + 0xa80),false);
  }
LAB_00109bb3:
  *(undefined **)this = &Container::vtable;
  if (*(long *)(this + 0xa60) != 0) {
    cVar3 = RefCounted::unreference();
    if (cVar3 != '\0') {
      pOVar2 = *(Object **)(this + 0xa60);
      cVar3 = predelete_handler(pOVar2);
      if (cVar3 != '\0') {
        (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
        Memory::free_static(pOVar2,false);
      }
    }
  }
  if (*(long *)(this + 0xa50) != 0) {
    cVar3 = RefCounted::unreference();
    if (cVar3 != '\0') {
      pOVar2 = *(Object **)(this + 0xa50);
      cVar3 = predelete_handler(pOVar2);
      if (cVar3 != '\0') {
        (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
        Memory::free_static(pOVar2,false);
      }
    }
  }
  if (*(long *)(this + 0xa48) != 0) {
    cVar3 = RefCounted::unreference();
    if (cVar3 != '\0') {
      pOVar2 = *(Object **)(this + 0xa48);
      cVar3 = predelete_handler(pOVar2);
      if (cVar3 != '\0') {
        (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
        Memory::free_static(pOVar2,false);
      }
    }
  }
  if (*(long *)(this + 0xa40) != 0) {
    cVar3 = RefCounted::unreference();
    if (cVar3 != '\0') {
      pOVar2 = *(Object **)(this + 0xa40);
      cVar3 = predelete_handler(pOVar2);
      if (cVar3 != '\0') {
        (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
        Memory::free_static(pOVar2,false);
      }
    }
  }
  bVar6 = StringName::configured != '\0';
  *(code **)this = predelete_handler;
  if (bVar6) {
    if (*(long *)(this + 0x9e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00109c69;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_00109c69:
  Control::~Control((Control *)this);
  return;
}



/* EditorPerformanceProfiler::~EditorPerformanceProfiler() */

void __thiscall
EditorPerformanceProfiler::~EditorPerformanceProfiler(EditorPerformanceProfiler *this)

{
  ~EditorPerformanceProfiler(this);
  operator_delete(this,0xb00);
  return;
}



/* HashMap<StringName, TreeItem*, HashMapHasherDefault, HashMapComparatorDefault<StringName>,
   DefaultTypedAllocator<HashMapElement<StringName, TreeItem*> > >::_lookup_pos(StringName const&,
   unsigned int&) const */

undefined8 __thiscall
HashMap<StringName,TreeItem*,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,TreeItem*>>>
::_lookup_pos(HashMap<StringName,TreeItem*,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,TreeItem*>>>
              *this,StringName *param_1,uint *param_2)

{
  uint uVar1;
  long lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  uint uVar11;
  uint uVar12;
  long lVar13;
  uint uVar14;
  ulong uVar15;
  uint uVar16;
  
  if (*(long *)(this + 8) == 0) {
    return 0;
  }
  if (*(int *)(this + 0x2c) != 0) {
    uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
    lVar2 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
    if (*(long *)param_1 == 0) {
      uVar11 = StringName::get_empty_hash();
    }
    else {
      uVar11 = *(uint *)(*(long *)param_1 + 0x20);
    }
    uVar15 = CONCAT44(0,uVar1);
    if (uVar11 == 0) {
      uVar11 = 1;
    }
    auVar3._8_8_ = 0;
    auVar3._0_8_ = (ulong)uVar11 * lVar2;
    auVar7._8_8_ = 0;
    auVar7._0_8_ = uVar15;
    lVar13 = SUB168(auVar3 * auVar7,8);
    uVar14 = *(uint *)(*(long *)(this + 0x10) + lVar13 * 4);
    uVar12 = SUB164(auVar3 * auVar7,8);
    if (uVar14 != 0) {
      uVar16 = 0;
      do {
        if ((uVar11 == uVar14) &&
           (*(long *)(*(long *)(*(long *)(this + 8) + lVar13 * 8) + 0x10) == *(long *)param_1)) {
          *param_2 = uVar12;
          return 1;
        }
        uVar16 = uVar16 + 1;
        auVar4._8_8_ = 0;
        auVar4._0_8_ = (ulong)(uVar12 + 1) * lVar2;
        auVar8._8_8_ = 0;
        auVar8._0_8_ = uVar15;
        lVar13 = SUB168(auVar4 * auVar8,8);
        uVar14 = *(uint *)(*(long *)(this + 0x10) + lVar13 * 4);
        uVar12 = SUB164(auVar4 * auVar8,8);
      } while ((uVar14 != 0) &&
              (auVar5._8_8_ = 0, auVar5._0_8_ = (ulong)uVar14 * lVar2, auVar9._8_8_ = 0,
              auVar9._0_8_ = uVar15, auVar6._8_8_ = 0,
              auVar6._0_8_ = (ulong)((uVar1 + uVar12) - SUB164(auVar5 * auVar9,8)) * lVar2,
              auVar10._8_8_ = 0, auVar10._0_8_ = uVar15, uVar16 <= SUB164(auVar6 * auVar10,8)));
    }
  }
  return 0;
}



/* HashMap<StringName, int, HashMapHasherDefault, HashMapComparatorDefault<StringName>,
   DefaultTypedAllocator<HashMapElement<StringName, int> > >::_lookup_pos(StringName const&,
   unsigned int&) const */

undefined8 __thiscall
HashMap<StringName,int,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,int>>>
::_lookup_pos(HashMap<StringName,int,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,int>>>
              *this,StringName *param_1,uint *param_2)

{
  uint uVar1;
  long lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  uint uVar11;
  uint uVar12;
  long lVar13;
  uint uVar14;
  ulong uVar15;
  uint uVar16;
  
  if (*(long *)(this + 8) == 0) {
    return 0;
  }
  if (*(int *)(this + 0x2c) != 0) {
    uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
    lVar2 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
    if (*(long *)param_1 == 0) {
      uVar11 = StringName::get_empty_hash();
    }
    else {
      uVar11 = *(uint *)(*(long *)param_1 + 0x20);
    }
    uVar15 = CONCAT44(0,uVar1);
    if (uVar11 == 0) {
      uVar11 = 1;
    }
    auVar3._8_8_ = 0;
    auVar3._0_8_ = (ulong)uVar11 * lVar2;
    auVar7._8_8_ = 0;
    auVar7._0_8_ = uVar15;
    lVar13 = SUB168(auVar3 * auVar7,8);
    uVar14 = *(uint *)(*(long *)(this + 0x10) + lVar13 * 4);
    uVar12 = SUB164(auVar3 * auVar7,8);
    if (uVar14 != 0) {
      uVar16 = 0;
      do {
        if ((uVar11 == uVar14) &&
           (*(long *)(*(long *)(*(long *)(this + 8) + lVar13 * 8) + 0x10) == *(long *)param_1)) {
          *param_2 = uVar12;
          return 1;
        }
        uVar16 = uVar16 + 1;
        auVar4._8_8_ = 0;
        auVar4._0_8_ = (ulong)(uVar12 + 1) * lVar2;
        auVar8._8_8_ = 0;
        auVar8._0_8_ = uVar15;
        lVar13 = SUB168(auVar4 * auVar8,8);
        uVar14 = *(uint *)(*(long *)(this + 0x10) + lVar13 * 4);
        uVar12 = SUB164(auVar4 * auVar8,8);
      } while ((uVar14 != 0) &&
              (auVar5._8_8_ = 0, auVar5._0_8_ = (ulong)uVar14 * lVar2, auVar9._8_8_ = 0,
              auVar9._0_8_ = uVar15, auVar6._8_8_ = 0,
              auVar6._0_8_ = (ulong)((uVar1 + uVar12) - SUB164(auVar5 * auVar9,8)) * lVar2,
              auVar10._8_8_ = 0, auVar10._0_8_ = uVar15, uVar16 <= SUB164(auVar6 * auVar10,8)));
    }
  }
  return 0;
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



/* CowData<StringName>::_realloc(long) */

undefined8 __thiscall CowData<StringName>::_realloc(CowData<StringName> *this,long param_1)

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
/* Error CowData<StringName>::resize<false>(long) */

undefined8 __thiscall CowData<StringName>::resize<false>(CowData<StringName> *this,long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long lVar8;
  
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
    lVar4 = 0;
    lVar5 = 0;
  }
  else {
    lVar4 = *(long *)(*(long *)this + -8);
    if (param_1 == lVar4) {
      return 0;
    }
    if (param_1 == 0) {
      _unref(this);
      return 0;
    }
    _copy_on_write(this);
    lVar5 = lVar4 * 8;
    if (lVar5 != 0) {
      uVar6 = lVar5 - 1U | lVar5 - 1U >> 1;
      uVar6 = uVar6 | uVar6 >> 2;
      uVar6 = uVar6 | uVar6 >> 4;
      uVar6 = uVar6 | uVar6 >> 8;
      uVar6 = uVar6 | uVar6 >> 0x10;
      lVar5 = (uVar6 | uVar6 >> 0x20) + 1;
    }
  }
  if (param_1 * 8 == 0) {
LAB_0010a4a0:
    _err_print_error("resize","./core/templates/cowdata.h",0x16a,
                     "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                     ,0,0);
    return 6;
  }
  uVar6 = param_1 * 8 - 1;
  uVar6 = uVar6 >> 1 | uVar6;
  uVar6 = uVar6 | uVar6 >> 2;
  uVar6 = uVar6 | uVar6 >> 4;
  uVar6 = uVar6 | uVar6 >> 8;
  uVar6 = uVar6 | uVar6 >> 0x10;
  uVar6 = uVar6 | uVar6 >> 0x20;
  lVar8 = uVar6 + 1;
  if (lVar8 == 0) goto LAB_0010a4a0;
  if (param_1 <= lVar4) {
    lVar4 = *(long *)this;
    uVar6 = param_1;
    while (lVar4 != 0) {
      if (*(ulong *)(lVar4 + -8) <= uVar6) {
LAB_0010a37a:
        if (lVar8 != lVar5) {
          uVar2 = _realloc(this,lVar8);
          if ((int)uVar2 != 0) {
            return uVar2;
          }
          lVar4 = *(long *)this;
          if (lVar4 == 0) {
            _DAT_00000000 = 0;
                    /* WARNING: Does not return */
            pcVar1 = (code *)invalidInstructionException();
            (*pcVar1)();
          }
        }
        *(long *)(lVar4 + -8) = param_1;
        return 0;
      }
      while ((StringName::configured == '\0' || (*(long *)(lVar4 + uVar6 * 8) == 0))) {
        uVar6 = uVar6 + 1;
        if (*(ulong *)(lVar4 + -8) <= uVar6) goto LAB_0010a37a;
      }
      StringName::unref();
      uVar6 = uVar6 + 1;
      lVar4 = *(long *)this;
    }
    goto LAB_0010a347;
  }
  if (lVar8 == lVar5) {
LAB_0010a41b:
    puVar7 = *(undefined8 **)this;
    if (puVar7 == (undefined8 *)0x0) {
LAB_0010a347:
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    lVar4 = puVar7[-1];
    if (param_1 <= lVar4) goto LAB_0010a3fb;
  }
  else {
    if (lVar4 != 0) {
      uVar2 = _realloc(this,lVar8);
      if ((int)uVar2 != 0) {
        return uVar2;
      }
      goto LAB_0010a41b;
    }
    puVar3 = (undefined8 *)Memory::alloc_static(uVar6 + 0x11,false);
    if (puVar3 == (undefined8 *)0x0) {
      _err_print_error("resize","./core/templates/cowdata.h",0x171,"Parameter \"mem_new\" is null.",
                       0,0);
      return 6;
    }
    puVar7 = puVar3 + 2;
    *puVar3 = 1;
    puVar3[1] = 0;
    *(undefined8 **)this = puVar7;
    lVar4 = 0;
  }
  memset(puVar7 + lVar4,0,(param_1 - lVar4) * 8);
LAB_0010a3fb:
  puVar7[-1] = param_1;
  return 0;
}



/* HashMap<StringName, EditorPerformanceProfiler::Monitor, HashMapHasherDefault,
   HashMapComparatorDefault<StringName>, DefaultTypedAllocator<HashMapElement<StringName,
   EditorPerformanceProfiler::Monitor> > >::_resize_and_rehash(unsigned int) */

void __thiscall
HashMap<StringName,EditorPerformanceProfiler::Monitor,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorPerformanceProfiler::Monitor>>>
::_resize_and_rehash
          (HashMap<StringName,EditorPerformanceProfiler::Monitor,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorPerformanceProfiler::Monitor>>>
           *this,uint param_1)

{
  uint *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  void *pvVar6;
  void *pvVar7;
  void *__s;
  long lVar8;
  long lVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined8 uVar18;
  void *__s_00;
  int iVar19;
  long lVar20;
  uint uVar21;
  ulong uVar22;
  undefined8 uVar23;
  uint uVar24;
  ulong uVar25;
  ulong uVar26;
  uint local_78;
  
  *(undefined4 *)(this + 0x2c) = 0;
  uVar3 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  if (param_1 < 2) {
    param_1 = 2;
  }
  *(uint *)(this + 0x28) = param_1;
  uVar21 = *(uint *)(hash_table_size_primes + (ulong)param_1 * 4);
  uVar22 = (ulong)uVar21;
  pvVar6 = *(void **)(this + 8);
  pvVar7 = *(void **)(this + 0x10);
  uVar26 = uVar22 * 4;
  uVar25 = uVar22 * 8;
  uVar18 = Memory::alloc_static(uVar26,false);
  *(undefined8 *)(this + 0x10) = uVar18;
  __s_00 = (void *)Memory::alloc_static(uVar25,false);
  *(void **)(this + 8) = __s_00;
  if (uVar21 != 0) {
    __s = *(void **)(this + 0x10);
    if ((__s < (void *)((long)__s_00 + uVar25)) && (__s_00 < (void *)((long)__s + uVar26))) {
      uVar26 = 0;
      do {
        *(undefined4 *)((long)__s + uVar26 * 4) = 0;
        *(undefined8 *)((long)__s_00 + uVar26 * 8) = 0;
        uVar26 = uVar26 + 1;
      } while (uVar22 != uVar26);
    }
    else {
      memset(__s,0,uVar26);
      memset(__s_00,0,uVar25);
    }
  }
  if (uVar3 != 0) {
    uVar26 = 0;
    do {
      uVar21 = *(uint *)((long)pvVar7 + uVar26 * 4);
      if (uVar21 != 0) {
        uVar24 = 0;
        lVar8 = *(long *)(this + 0x10);
        uVar4 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
        uVar25 = CONCAT44(0,uVar4);
        lVar9 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
        auVar10._8_8_ = 0;
        auVar10._0_8_ = (ulong)uVar21 * lVar9;
        auVar14._8_8_ = 0;
        auVar14._0_8_ = uVar25;
        lVar20 = SUB168(auVar10 * auVar14,8);
        puVar1 = (uint *)(lVar8 + lVar20 * 4);
        iVar19 = SUB164(auVar10 * auVar14,8);
        uVar5 = *puVar1;
        uVar18 = *(undefined8 *)((long)pvVar6 + uVar26 * 8);
        while (uVar5 != 0) {
          auVar11._8_8_ = 0;
          auVar11._0_8_ = (ulong)uVar5 * lVar9;
          auVar15._8_8_ = 0;
          auVar15._0_8_ = uVar25;
          auVar12._8_8_ = 0;
          auVar12._0_8_ = (ulong)((uVar4 + iVar19) - SUB164(auVar11 * auVar15,8)) * lVar9;
          auVar16._8_8_ = 0;
          auVar16._0_8_ = uVar25;
          local_78 = SUB164(auVar12 * auVar16,8);
          uVar23 = uVar18;
          if (local_78 < uVar24) {
            *puVar1 = uVar21;
            puVar2 = (undefined8 *)((long)__s_00 + lVar20 * 8);
            uVar23 = *puVar2;
            *puVar2 = uVar18;
            uVar21 = uVar5;
            uVar24 = local_78;
          }
          uVar24 = uVar24 + 1;
          auVar13._8_8_ = 0;
          auVar13._0_8_ = (ulong)(iVar19 + 1) * lVar9;
          auVar17._8_8_ = 0;
          auVar17._0_8_ = uVar25;
          lVar20 = SUB168(auVar13 * auVar17,8);
          puVar1 = (uint *)(lVar8 + lVar20 * 4);
          iVar19 = SUB164(auVar13 * auVar17,8);
          uVar18 = uVar23;
          uVar5 = *puVar1;
        }
        *(undefined8 *)((long)__s_00 + lVar20 * 8) = uVar18;
        *puVar1 = uVar21;
        *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
      }
      uVar26 = uVar26 + 1;
    } while (uVar26 != uVar3);
    Memory::free_static(pvVar6,false);
    Memory::free_static(pvVar7,false);
    return;
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashMap<StringName, EditorPerformanceProfiler::Monitor, HashMapHasherDefault,
   HashMapComparatorDefault<StringName>, DefaultTypedAllocator<HashMapElement<StringName,
   EditorPerformanceProfiler::Monitor> > >::operator[](StringName const&) */

CowData<char32_t> * __thiscall
HashMap<StringName,EditorPerformanceProfiler::Monitor,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorPerformanceProfiler::Monitor>>>
::operator[](HashMap<StringName,EditorPerformanceProfiler::Monitor,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorPerformanceProfiler::Monitor>>>
             *this,StringName *param_1)

{
  uint *puVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  void *__s;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  char cVar15;
  uint uVar16;
  undefined8 *puVar17;
  undefined1 (*pauVar18) [16];
  undefined4 *puVar19;
  long lVar20;
  long lVar21;
  undefined8 uVar22;
  void *pvVar23;
  int iVar24;
  long lVar25;
  undefined8 *puVar26;
  uint uVar27;
  ulong uVar28;
  ulong uVar29;
  long *plVar30;
  ulong uVar31;
  undefined4 *puVar32;
  long in_FS_OFFSET;
  CowData<char32_t> *local_d0;
  uint local_c0;
  uint local_bc;
  CowData<char32_t> local_b8 [16];
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined1 local_88 [16];
  StringName local_78 [8];
  undefined1 local_70 [16];
  undefined8 *local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_c0 = 0;
  cVar15 = _lookup_pos(this,param_1,&local_c0);
  if (cVar15 != '\0') {
    local_d0 = (CowData<char32_t> *)(*(long *)(*(long *)(this + 8) + (ulong)local_c0 * 8) + 0x18);
    goto LAB_0010ab6a;
  }
  local_a8 = 0;
  local_a0 = 0;
  uVar16 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  local_98 = 0;
  local_90 = 0;
  local_b8[0] = (CowData<char32_t>)0x0;
  local_b8[1] = (CowData<char32_t>)0x0;
  local_b8[2] = (CowData<char32_t>)0x0;
  local_b8[3] = (CowData<char32_t>)0x0;
  local_b8[4] = (CowData<char32_t>)0x0;
  local_b8[5] = (CowData<char32_t>)0x0;
  local_b8[6] = (CowData<char32_t>)0x0;
  local_b8[7] = (CowData<char32_t>)0x0;
  local_b8[8] = (CowData<char32_t>)0x0;
  local_b8[9] = (CowData<char32_t>)0x0;
  local_b8[10] = (CowData<char32_t>)0x0;
  local_b8[0xb] = (CowData<char32_t>)0x0;
  local_b8[0xc] = (CowData<char32_t>)0x0;
  local_b8[0xd] = (CowData<char32_t>)0x0;
  local_b8[0xe] = (CowData<char32_t>)0x0;
  local_b8[0xf] = (CowData<char32_t>)0x0;
  if (*(long *)(this + 8) == 0) {
    uVar31 = (ulong)uVar16;
    uVar29 = uVar31 * 4;
    uVar28 = uVar31 * 8;
    uVar22 = Memory::alloc_static(uVar29,false);
    *(undefined8 *)(this + 0x10) = uVar22;
    pvVar23 = (void *)Memory::alloc_static(uVar28,false);
    *(void **)(this + 8) = pvVar23;
    if (uVar16 != 0) {
      __s = *(void **)(this + 0x10);
      if ((__s < (void *)((long)pvVar23 + uVar28)) && (pvVar23 < (void *)((long)__s + uVar29))) {
        uVar29 = 0;
        do {
          *(undefined4 *)((long)__s + uVar29 * 4) = 0;
          *(undefined8 *)((long)pvVar23 + uVar29 * 8) = 0;
          uVar29 = uVar29 + 1;
        } while (uVar31 != uVar29);
      }
      else {
        memset(__s,0,uVar29);
        memset(pvVar23,0,uVar28);
      }
    }
  }
  local_bc = 0;
  cVar15 = _lookup_pos(this,param_1,&local_bc);
  if (cVar15 == '\0') {
    if ((float)uVar16 * __LC7 < (float)(*(int *)(this + 0x2c) + 1)) {
      if (*(int *)(this + 0x28) == 0x1c) {
        _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                         "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                         ,"Hash table maximum capacity reached, aborting insertion.",0,0);
        local_d0 = (CowData<char32_t> *)0x18;
        goto LAB_0010ab55;
      }
      _resize_and_rehash(this,*(int *)(this + 0x28) + 1);
    }
    local_88 = (undefined1  [16])0x0;
    StringName::StringName(local_78,param_1);
    local_70 = (undefined1  [16])0x0;
    local_60 = (undefined8 *)0x0;
    local_58 = 0;
    local_50 = 0;
    local_48 = 0;
    puVar17 = (undefined8 *)operator_new(0x48,"");
    *puVar17 = local_88._0_8_;
    puVar17[1] = local_88._8_8_;
    StringName::StringName((StringName *)(puVar17 + 2),local_78);
    puVar17[3] = 0;
    local_d0 = (CowData<char32_t> *)(puVar17 + 3);
    if (local_70._0_8_ != 0) {
      CowData<char32_t>::_ref(local_d0,(CowData *)local_70);
    }
    puVar17[4] = 0;
    if (local_70._8_8_ != 0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)(puVar17 + 4),(CowData *)(local_70 + 8));
    }
    puVar17[5] = 0;
    if ((local_60 != (undefined8 *)0x0) &&
       (puVar32 = (undefined4 *)*local_60, puVar32 != (undefined4 *)0x0)) {
      pauVar18 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
      puVar17[5] = pauVar18;
      *(undefined4 *)pauVar18[1] = 0;
      *pauVar18 = (undefined1  [16])0x0;
      do {
        while( true ) {
          puVar19 = (undefined4 *)operator_new(0x20,DefaultAllocator::alloc);
          plVar30 = (long *)puVar17[5];
          uVar3 = *puVar32;
          *(undefined8 *)(puVar19 + 2) = 0;
          lVar20 = plVar30[1];
          *puVar19 = uVar3;
          *(long **)(puVar19 + 6) = plVar30;
          *(long *)(puVar19 + 4) = lVar20;
          if (lVar20 != 0) {
            *(undefined4 **)(lVar20 + 8) = puVar19;
          }
          plVar30[1] = (long)puVar19;
          if (*plVar30 != 0) break;
          puVar32 = *(undefined4 **)(puVar32 + 2);
          *(int *)(plVar30 + 2) = (int)plVar30[2] + 1;
          *plVar30 = (long)puVar19;
          if (puVar32 == (undefined4 *)0x0) goto LAB_0010aa16;
        }
        puVar32 = *(undefined4 **)(puVar32 + 2);
        *(int *)(plVar30 + 2) = (int)plVar30[2] + 1;
      } while (puVar32 != (undefined4 *)0x0);
    }
LAB_0010aa16:
    puVar17[7] = local_50;
    *(undefined4 *)(puVar17 + 6) = (undefined4)local_58;
    puVar17[8] = local_48;
    KeyValue<StringName,EditorPerformanceProfiler::Monitor>::~KeyValue
              ((KeyValue<StringName,EditorPerformanceProfiler::Monitor> *)local_78);
    puVar26 = *(undefined8 **)(this + 0x20);
    if (puVar26 == (undefined8 *)0x0) {
      lVar20 = *(long *)param_1;
      *(undefined8 **)(this + 0x18) = puVar17;
      *(undefined8 **)(this + 0x20) = puVar17;
      if (lVar20 == 0) goto LAB_0010abcd;
LAB_0010aa6b:
      uVar16 = *(uint *)(lVar20 + 0x20);
    }
    else {
      *puVar26 = puVar17;
      puVar17[1] = puVar26;
      lVar20 = *(long *)param_1;
      *(undefined8 **)(this + 0x20) = puVar17;
      if (lVar20 != 0) goto LAB_0010aa6b;
LAB_0010abcd:
      uVar16 = StringName::get_empty_hash();
    }
    lVar20 = *(long *)(this + 0x10);
    if (uVar16 == 0) {
      uVar16 = 1;
    }
    uVar29 = (ulong)uVar16;
    uVar27 = 0;
    lVar21 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
    uVar4 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
    uVar28 = CONCAT44(0,uVar4);
    auVar7._8_8_ = 0;
    auVar7._0_8_ = uVar29 * lVar21;
    auVar11._8_8_ = 0;
    auVar11._0_8_ = uVar28;
    lVar25 = SUB168(auVar7 * auVar11,8);
    lVar6 = *(long *)(this + 8);
    puVar1 = (uint *)(lVar20 + lVar25 * 4);
    iVar24 = SUB164(auVar7 * auVar11,8);
    uVar5 = *puVar1;
    while (uVar5 != 0) {
      auVar8._8_8_ = 0;
      auVar8._0_8_ = (ulong)uVar5 * lVar21;
      auVar12._8_8_ = 0;
      auVar12._0_8_ = uVar28;
      auVar9._8_8_ = 0;
      auVar9._0_8_ = (ulong)((iVar24 + uVar4) - SUB164(auVar8 * auVar12,8)) * lVar21;
      auVar13._8_8_ = 0;
      auVar13._0_8_ = uVar28;
      uVar16 = SUB164(auVar9 * auVar13,8);
      puVar26 = puVar17;
      if (uVar16 < uVar27) {
        *puVar1 = (uint)uVar29;
        uVar29 = (ulong)uVar5;
        puVar2 = (undefined8 *)(lVar6 + lVar25 * 8);
        puVar26 = (undefined8 *)*puVar2;
        *puVar2 = puVar17;
        uVar27 = uVar16;
      }
      uVar16 = (uint)uVar29;
      uVar27 = uVar27 + 1;
      auVar10._8_8_ = 0;
      auVar10._0_8_ = (ulong)(iVar24 + 1) * lVar21;
      auVar14._8_8_ = 0;
      auVar14._0_8_ = uVar28;
      lVar25 = SUB168(auVar10 * auVar14,8);
      puVar1 = (uint *)(lVar20 + lVar25 * 4);
      iVar24 = SUB164(auVar10 * auVar14,8);
      puVar17 = puVar26;
      uVar5 = *puVar1;
    }
    *(undefined8 **)(lVar6 + lVar25 * 8) = puVar17;
    *puVar1 = uVar16;
    *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
  }
  else {
    uVar29 = (ulong)local_bc;
    lVar20 = *(long *)(*(long *)(this + 8) + uVar29 * 8);
    if (*(long *)(lVar20 + 0x18) != 0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)(lVar20 + 0x18),(CowData *)local_b8);
    }
    if (*(long *)(lVar20 + 0x20) != 0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)(lVar20 + 0x20),(CowData *)(local_b8 + 8));
    }
    plVar30 = *(long **)(lVar20 + 0x28);
    if (plVar30 != (long *)0x0) {
      do {
        pvVar23 = (void *)*plVar30;
        if (pvVar23 == (void *)0x0) goto LAB_0010ac8f;
        if (*(long **)((long)pvVar23 + 0x18) == plVar30) {
          lVar21 = *(long *)((long)pvVar23 + 8);
          lVar6 = *(long *)((long)pvVar23 + 0x10);
          *plVar30 = lVar21;
          if (pvVar23 == (void *)plVar30[1]) {
            plVar30[1] = lVar6;
          }
          if (lVar6 != 0) {
            *(long *)(lVar6 + 8) = lVar21;
            lVar21 = *(long *)((long)pvVar23 + 8);
          }
          if (lVar21 != 0) {
            *(long *)(lVar21 + 0x10) = lVar6;
          }
          Memory::free_static(pvVar23,false);
          *(int *)(plVar30 + 2) = (int)plVar30[2] + -1;
        }
        else {
          _err_print_error("erase","./core/templates/list.h",0xe7,
                           "Condition \"p_I->data != this\" is true. Returning: false",0,0);
        }
        plVar30 = *(long **)(lVar20 + 0x28);
      } while ((int)plVar30[2] != 0);
      Memory::free_static(plVar30,false);
      *(undefined8 *)(lVar20 + 0x28) = 0;
    }
LAB_0010ac8f:
    *(undefined8 *)(lVar20 + 0x40) = 0;
    lVar21 = *(long *)(this + 8);
    *(undefined4 *)(lVar20 + 0x30) = 0;
    lVar21 = *(long *)(lVar21 + uVar29 * 8);
    *(undefined8 *)(lVar20 + 0x38) = 0;
    local_d0 = (CowData<char32_t> *)(lVar21 + 0x18);
  }
LAB_0010ab55:
  CowData<char32_t>::_unref(local_b8 + 8);
  CowData<char32_t>::_unref(local_b8);
LAB_0010ab6a:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_d0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashMap<StringName, EditorPerformanceProfiler::Monitor, HashMapHasherDefault,
   HashMapComparatorDefault<StringName>, DefaultTypedAllocator<HashMapElement<StringName,
   EditorPerformanceProfiler::Monitor> > >::insert(StringName const&,
   EditorPerformanceProfiler::Monitor const&, bool) */

StringName *
HashMap<StringName,EditorPerformanceProfiler::Monitor,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorPerformanceProfiler::Monitor>>>
::insert(StringName *param_1,Monitor *param_2,bool param_3)

{
  uint *puVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  long *plVar6;
  undefined8 *puVar7;
  long lVar8;
  void *__s;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  char cVar17;
  uint uVar18;
  undefined4 *puVar19;
  long *plVar20;
  undefined1 (*pauVar21) [16];
  long lVar22;
  long lVar23;
  undefined8 uVar24;
  void *pvVar25;
  CowData *in_RCX;
  int iVar26;
  undefined7 in_register_00000011;
  StringName *pSVar27;
  long lVar28;
  char in_R8B;
  uint uVar29;
  ulong uVar30;
  ulong uVar31;
  undefined4 *puVar32;
  long *plVar33;
  ulong uVar34;
  long in_FS_OFFSET;
  uint local_c8;
  uint local_8c;
  undefined1 local_88 [16];
  StringName local_78 [8];
  long local_70;
  long local_68;
  undefined1 (*local_60) [16];
  undefined4 local_58;
  long local_50;
  long local_48;
  long local_40;
  
  pSVar27 = (StringName *)CONCAT71(in_register_00000011,param_3);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar18 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_2 + 0x28) * 4);
  if (*(long *)(param_2 + 8) == 0) {
    uVar34 = (ulong)uVar18;
    uVar31 = uVar34 * 4;
    uVar24 = Memory::alloc_static(uVar31,false);
    uVar30 = uVar34 * 8;
    *(undefined8 *)(param_2 + 0x10) = uVar24;
    pvVar25 = (void *)Memory::alloc_static(uVar30,false);
    *(void **)(param_2 + 8) = pvVar25;
    if (uVar18 != 0) {
      __s = *(void **)(param_2 + 0x10);
      if ((__s < (void *)((long)pvVar25 + uVar30)) && (pvVar25 < (void *)((long)__s + uVar31))) {
        uVar31 = 0;
        do {
          *(undefined4 *)((long)__s + uVar31 * 4) = 0;
          *(undefined8 *)((long)pvVar25 + uVar31 * 8) = 0;
          uVar31 = uVar31 + 1;
        } while (uVar34 != uVar31);
      }
      else {
        memset(__s,0,uVar31);
        memset(pvVar25,0,uVar30);
      }
    }
  }
  local_8c = 0;
  cVar17 = _lookup_pos((HashMap<StringName,EditorPerformanceProfiler::Monitor,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorPerformanceProfiler::Monitor>>>
                        *)param_2,pSVar27,&local_8c);
  if (cVar17 != '\0') {
    uVar31 = (ulong)local_8c;
    lVar22 = *(long *)(*(long *)(param_2 + 8) + uVar31 * 8);
    if (*(long *)(lVar22 + 0x18) != *(long *)in_RCX) {
      CowData<char32_t>::_ref((CowData<char32_t> *)(lVar22 + 0x18),in_RCX);
    }
    if (*(long *)(lVar22 + 0x20) != *(long *)(in_RCX + 8)) {
      CowData<char32_t>::_ref((CowData<char32_t> *)(lVar22 + 0x20),in_RCX + 8);
    }
    plVar20 = *(long **)(lVar22 + 0x28);
    if (plVar20 != (long *)0x0) {
      do {
        pvVar25 = (void *)*plVar20;
        if (pvVar25 == (void *)0x0) goto LAB_0010b352;
        if (*(long **)((long)pvVar25 + 0x18) == plVar20) {
          lVar23 = *(long *)((long)pvVar25 + 8);
          lVar8 = *(long *)((long)pvVar25 + 0x10);
          *plVar20 = lVar23;
          if (pvVar25 == (void *)plVar20[1]) {
            plVar20[1] = lVar8;
          }
          if (lVar8 != 0) {
            *(long *)(lVar8 + 8) = lVar23;
            lVar23 = *(long *)((long)pvVar25 + 8);
          }
          if (lVar23 != 0) {
            *(long *)(lVar23 + 0x10) = lVar8;
          }
          Memory::free_static(pvVar25,false);
          *(int *)(plVar20 + 2) = (int)plVar20[2] + -1;
        }
        else {
          _err_print_error("erase","./core/templates/list.h",0xe7,
                           "Condition \"p_I->data != this\" is true. Returning: false",0,0);
        }
        plVar20 = *(long **)(lVar22 + 0x28);
      } while ((int)plVar20[2] != 0);
      Memory::free_static(plVar20,false);
      *(undefined8 *)(lVar22 + 0x28) = 0;
    }
    plVar20 = (long *)0x0;
LAB_0010b352:
    if ((*(undefined8 **)(in_RCX + 0x10) != (undefined8 *)0x0) &&
       (puVar32 = (undefined4 *)**(undefined8 **)(in_RCX + 0x10), puVar32 != (undefined4 *)0x0)) {
      if (plVar20 == (long *)0x0) {
        pauVar21 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
        *(undefined1 (**) [16])(lVar22 + 0x28) = pauVar21;
        *(undefined4 *)pauVar21[1] = 0;
        *pauVar21 = (undefined1  [16])0x0;
      }
      do {
        while( true ) {
          puVar19 = (undefined4 *)operator_new(0x20,DefaultAllocator::alloc);
          plVar20 = *(long **)(lVar22 + 0x28);
          uVar2 = *puVar32;
          *(undefined8 *)(puVar19 + 2) = 0;
          lVar23 = plVar20[1];
          *puVar19 = uVar2;
          *(long **)(puVar19 + 6) = plVar20;
          *(long *)(puVar19 + 4) = lVar23;
          if (lVar23 != 0) {
            *(undefined4 **)(lVar23 + 8) = puVar19;
          }
          plVar20[1] = (long)puVar19;
          if (*plVar20 != 0) break;
          puVar32 = *(undefined4 **)(puVar32 + 2);
          *(int *)(plVar20 + 2) = (int)plVar20[2] + 1;
          *plVar20 = (long)puVar19;
          if (puVar32 == (undefined4 *)0x0) goto LAB_0010b3fe;
        }
        puVar32 = *(undefined4 **)(puVar32 + 2);
        *(int *)(plVar20 + 2) = (int)plVar20[2] + 1;
      } while (puVar32 != (undefined4 *)0x0);
    }
LAB_0010b3fe:
    uVar2 = *(undefined4 *)(in_RCX + 0x18);
    *(undefined8 *)(lVar22 + 0x38) = *(undefined8 *)(in_RCX + 0x20);
    uVar5 = *(undefined4 *)(in_RCX + 0x28);
    *(undefined4 *)(lVar22 + 0x30) = uVar2;
    *(undefined4 *)(lVar22 + 0x40) = uVar5;
    *(undefined4 *)(lVar22 + 0x44) = *(undefined4 *)(in_RCX + 0x2c);
    plVar20 = *(long **)(*(long *)(param_2 + 8) + uVar31 * 8);
    goto LAB_0010b216;
  }
  if ((float)uVar18 * __LC7 < (float)(*(int *)(param_2 + 0x2c) + 1)) {
    if (*(int *)(param_2 + 0x28) == 0x1c) {
      plVar20 = (long *)0x0;
      _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      goto LAB_0010b216;
    }
    _resize_and_rehash((HashMap<StringName,EditorPerformanceProfiler::Monitor,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorPerformanceProfiler::Monitor>>>
                        *)param_2,*(int *)(param_2 + 0x28) + 1);
  }
  local_88 = (undefined1  [16])0x0;
  StringName::StringName(local_78,pSVar27);
  local_70 = 0;
  if (*(long *)in_RCX != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,in_RCX);
  }
  local_68 = 0;
  if (*(long *)(in_RCX + 8) != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_68,in_RCX + 8);
  }
  local_60 = (undefined1 (*) [16])0x0;
  if ((*(undefined8 **)(in_RCX + 0x10) != (undefined8 *)0x0) &&
     (puVar32 = (undefined4 *)**(undefined8 **)(in_RCX + 0x10), puVar32 != (undefined4 *)0x0)) {
    local_60 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined4 *)local_60[1] = 0;
    *local_60 = (undefined1  [16])0x0;
    do {
      while( true ) {
        puVar19 = (undefined4 *)operator_new(0x20,DefaultAllocator::alloc);
        uVar2 = *puVar32;
        *(undefined8 *)(puVar19 + 2) = 0;
        lVar22 = *(long *)(*local_60 + 8);
        *puVar19 = uVar2;
        *(undefined1 (**) [16])(puVar19 + 6) = local_60;
        *(long *)(puVar19 + 4) = lVar22;
        if (lVar22 != 0) {
          *(undefined4 **)(lVar22 + 8) = puVar19;
        }
        lVar22 = *(long *)*local_60;
        *(undefined4 **)(*local_60 + 8) = puVar19;
        if (lVar22 != 0) break;
        puVar32 = *(undefined4 **)(puVar32 + 2);
        *(int *)local_60[1] = *(int *)local_60[1] + 1;
        *(undefined4 **)*local_60 = puVar19;
        if (puVar32 == (undefined4 *)0x0) goto LAB_0010afa0;
      }
      puVar32 = *(undefined4 **)(puVar32 + 2);
      *(int *)local_60[1] = *(int *)local_60[1] + 1;
    } while (puVar32 != (undefined4 *)0x0);
  }
LAB_0010afa0:
  local_50 = *(long *)(in_RCX + 0x20);
  local_58 = *(undefined4 *)(in_RCX + 0x18);
  local_48 = *(long *)(in_RCX + 0x28);
  plVar20 = (long *)operator_new(0x48,"");
  *plVar20 = local_88._0_8_;
  plVar20[1] = local_88._8_8_;
  StringName::StringName((StringName *)(plVar20 + 2),local_78);
  plVar20[3] = 0;
  if (local_70 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(plVar20 + 3),(CowData *)&local_70);
  }
  plVar20[4] = 0;
  if (local_68 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(plVar20 + 4),(CowData *)&local_68);
  }
  plVar20[5] = 0;
  if ((local_60 != (undefined1 (*) [16])0x0) &&
     (puVar32 = *(undefined4 **)*local_60, puVar32 != (undefined4 *)0x0)) {
    pauVar21 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    plVar20[5] = (long)pauVar21;
    *(undefined4 *)pauVar21[1] = 0;
    *pauVar21 = (undefined1  [16])0x0;
    do {
      while( true ) {
        puVar19 = (undefined4 *)operator_new(0x20,DefaultAllocator::alloc);
        plVar6 = (long *)plVar20[5];
        uVar2 = *puVar32;
        *(undefined8 *)(puVar19 + 2) = 0;
        lVar22 = plVar6[1];
        *puVar19 = uVar2;
        *(long **)(puVar19 + 6) = plVar6;
        *(long *)(puVar19 + 4) = lVar22;
        if (lVar22 != 0) {
          *(undefined4 **)(lVar22 + 8) = puVar19;
        }
        plVar6[1] = (long)puVar19;
        if (*plVar6 != 0) break;
        puVar32 = *(undefined4 **)(puVar32 + 2);
        *(int *)(plVar6 + 2) = (int)plVar6[2] + 1;
        *plVar6 = (long)puVar19;
        if (puVar32 == (undefined4 *)0x0) goto LAB_0010b0cf;
      }
      puVar32 = *(undefined4 **)(puVar32 + 2);
      *(int *)(plVar6 + 2) = (int)plVar6[2] + 1;
    } while (puVar32 != (undefined4 *)0x0);
  }
LAB_0010b0cf:
  plVar20[7] = local_50;
  *(undefined4 *)(plVar20 + 6) = local_58;
  plVar20[8] = local_48;
  KeyValue<StringName,EditorPerformanceProfiler::Monitor>::~KeyValue
            ((KeyValue<StringName,EditorPerformanceProfiler::Monitor> *)local_78);
  puVar7 = *(undefined8 **)(param_2 + 0x20);
  if (puVar7 == (undefined8 *)0x0) {
    *(long **)(param_2 + 0x18) = plVar20;
    *(long **)(param_2 + 0x20) = plVar20;
LAB_0010b123:
    lVar22 = *(long *)pSVar27;
    if (lVar22 != 0) goto LAB_0010b130;
LAB_0010b272:
    uVar18 = StringName::get_empty_hash();
  }
  else {
    if (in_R8B == '\0') {
      *puVar7 = plVar20;
      plVar20[1] = (long)puVar7;
      *(long **)(param_2 + 0x20) = plVar20;
      goto LAB_0010b123;
    }
    lVar22 = *(long *)(param_2 + 0x18);
    *(long **)(lVar22 + 8) = plVar20;
    *plVar20 = lVar22;
    lVar22 = *(long *)pSVar27;
    *(long **)(param_2 + 0x18) = plVar20;
    if (lVar22 == 0) goto LAB_0010b272;
LAB_0010b130:
    uVar18 = *(uint *)(lVar22 + 0x20);
  }
  if (uVar18 == 0) {
    uVar18 = 1;
  }
  uVar31 = (ulong)uVar18;
  uVar29 = 0;
  lVar22 = *(long *)(param_2 + 0x10);
  lVar23 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(param_2 + 0x28) * 8);
  uVar3 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_2 + 0x28) * 4);
  uVar30 = CONCAT44(0,uVar3);
  auVar9._8_8_ = 0;
  auVar9._0_8_ = uVar31 * lVar23;
  auVar13._8_8_ = 0;
  auVar13._0_8_ = uVar30;
  lVar28 = SUB168(auVar9 * auVar13,8);
  lVar8 = *(long *)(param_2 + 8);
  puVar1 = (uint *)(lVar22 + lVar28 * 4);
  iVar26 = SUB164(auVar9 * auVar13,8);
  uVar4 = *puVar1;
  plVar6 = plVar20;
  while (uVar4 != 0) {
    auVar10._8_8_ = 0;
    auVar10._0_8_ = (ulong)uVar4 * lVar23;
    auVar14._8_8_ = 0;
    auVar14._0_8_ = uVar30;
    auVar11._8_8_ = 0;
    auVar11._0_8_ = (ulong)((iVar26 + uVar3) - SUB164(auVar10 * auVar14,8)) * lVar23;
    auVar15._8_8_ = 0;
    auVar15._0_8_ = uVar30;
    local_c8 = SUB164(auVar11 * auVar15,8);
    plVar33 = plVar6;
    if (local_c8 < uVar29) {
      *puVar1 = (uint)uVar31;
      uVar31 = (ulong)uVar4;
      puVar7 = (undefined8 *)(lVar8 + lVar28 * 8);
      plVar33 = (long *)*puVar7;
      *puVar7 = plVar6;
      uVar29 = local_c8;
    }
    uVar18 = (uint)uVar31;
    uVar29 = uVar29 + 1;
    auVar12._8_8_ = 0;
    auVar12._0_8_ = (ulong)(iVar26 + 1) * lVar23;
    auVar16._8_8_ = 0;
    auVar16._0_8_ = uVar30;
    lVar28 = SUB168(auVar12 * auVar16,8);
    puVar1 = (uint *)(lVar22 + lVar28 * 4);
    iVar26 = SUB164(auVar12 * auVar16,8);
    plVar6 = plVar33;
    uVar4 = *puVar1;
  }
  *(long **)(lVar8 + lVar28 * 8) = plVar6;
  *puVar1 = uVar18;
  *(int *)(param_2 + 0x2c) = *(int *)(param_2 + 0x2c) + 1;
LAB_0010b216:
  *(long **)param_1 = plVar20;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* HashMap<StringName, TreeItem*, HashMapHasherDefault, HashMapComparatorDefault<StringName>,
   DefaultTypedAllocator<HashMapElement<StringName, TreeItem*> > >::_resize_and_rehash(unsigned int)
    */

void __thiscall
HashMap<StringName,TreeItem*,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,TreeItem*>>>
::_resize_and_rehash
          (HashMap<StringName,TreeItem*,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,TreeItem*>>>
           *this,uint param_1)

{
  uint *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  void *pvVar6;
  void *pvVar7;
  void *__s;
  long lVar8;
  long lVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined8 uVar18;
  void *__s_00;
  int iVar19;
  long lVar20;
  uint uVar21;
  ulong uVar22;
  undefined8 uVar23;
  uint uVar24;
  ulong uVar25;
  ulong uVar26;
  uint local_78;
  
  *(undefined4 *)(this + 0x2c) = 0;
  uVar3 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  if (param_1 < 2) {
    param_1 = 2;
  }
  *(uint *)(this + 0x28) = param_1;
  uVar21 = *(uint *)(hash_table_size_primes + (ulong)param_1 * 4);
  uVar22 = (ulong)uVar21;
  pvVar6 = *(void **)(this + 8);
  pvVar7 = *(void **)(this + 0x10);
  uVar26 = uVar22 * 4;
  uVar25 = uVar22 * 8;
  uVar18 = Memory::alloc_static(uVar26,false);
  *(undefined8 *)(this + 0x10) = uVar18;
  __s_00 = (void *)Memory::alloc_static(uVar25,false);
  *(void **)(this + 8) = __s_00;
  if (uVar21 != 0) {
    __s = *(void **)(this + 0x10);
    if ((__s < (void *)((long)__s_00 + uVar25)) && (__s_00 < (void *)((long)__s + uVar26))) {
      uVar26 = 0;
      do {
        *(undefined4 *)((long)__s + uVar26 * 4) = 0;
        *(undefined8 *)((long)__s_00 + uVar26 * 8) = 0;
        uVar26 = uVar26 + 1;
      } while (uVar22 != uVar26);
    }
    else {
      memset(__s,0,uVar26);
      memset(__s_00,0,uVar25);
    }
  }
  if (uVar3 != 0) {
    uVar26 = 0;
    do {
      uVar21 = *(uint *)((long)pvVar7 + uVar26 * 4);
      if (uVar21 != 0) {
        uVar24 = 0;
        lVar8 = *(long *)(this + 0x10);
        uVar4 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
        uVar25 = CONCAT44(0,uVar4);
        lVar9 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
        auVar10._8_8_ = 0;
        auVar10._0_8_ = (ulong)uVar21 * lVar9;
        auVar14._8_8_ = 0;
        auVar14._0_8_ = uVar25;
        lVar20 = SUB168(auVar10 * auVar14,8);
        puVar1 = (uint *)(lVar8 + lVar20 * 4);
        iVar19 = SUB164(auVar10 * auVar14,8);
        uVar5 = *puVar1;
        uVar18 = *(undefined8 *)((long)pvVar6 + uVar26 * 8);
        while (uVar5 != 0) {
          auVar11._8_8_ = 0;
          auVar11._0_8_ = (ulong)uVar5 * lVar9;
          auVar15._8_8_ = 0;
          auVar15._0_8_ = uVar25;
          auVar12._8_8_ = 0;
          auVar12._0_8_ = (ulong)((uVar4 + iVar19) - SUB164(auVar11 * auVar15,8)) * lVar9;
          auVar16._8_8_ = 0;
          auVar16._0_8_ = uVar25;
          local_78 = SUB164(auVar12 * auVar16,8);
          uVar23 = uVar18;
          if (local_78 < uVar24) {
            *puVar1 = uVar21;
            puVar2 = (undefined8 *)((long)__s_00 + lVar20 * 8);
            uVar23 = *puVar2;
            *puVar2 = uVar18;
            uVar21 = uVar5;
            uVar24 = local_78;
          }
          uVar24 = uVar24 + 1;
          auVar13._8_8_ = 0;
          auVar13._0_8_ = (ulong)(iVar19 + 1) * lVar9;
          auVar17._8_8_ = 0;
          auVar17._0_8_ = uVar25;
          lVar20 = SUB168(auVar13 * auVar17,8);
          puVar1 = (uint *)(lVar8 + lVar20 * 4);
          iVar19 = SUB164(auVar13 * auVar17,8);
          uVar18 = uVar23;
          uVar5 = *puVar1;
        }
        *(undefined8 *)((long)__s_00 + lVar20 * 8) = uVar18;
        *puVar1 = uVar21;
        *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
      }
      uVar26 = uVar26 + 1;
    } while (uVar26 != uVar3);
    Memory::free_static(pvVar6,false);
    Memory::free_static(pvVar7,false);
    return;
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashMap<StringName, TreeItem*, HashMapHasherDefault, HashMapComparatorDefault<StringName>,
   DefaultTypedAllocator<HashMapElement<StringName, TreeItem*> > >::operator[](StringName const&) */

undefined8 * __thiscall
HashMap<StringName,TreeItem*,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,TreeItem*>>>
::operator[](HashMap<StringName,TreeItem*,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,TreeItem*>>>
             *this,StringName *param_1)

{
  uint *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  void *__s;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  char cVar16;
  uint uVar17;
  undefined8 *puVar18;
  long lVar19;
  undefined8 uVar20;
  void *__s_00;
  int iVar21;
  long lVar22;
  uint uVar23;
  ulong uVar24;
  ulong uVar25;
  ulong uVar26;
  undefined8 *puVar27;
  long in_FS_OFFSET;
  bool bVar28;
  uint local_98;
  uint local_70;
  uint local_6c;
  undefined1 local_68 [16];
  long local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_70 = 0;
  cVar16 = _lookup_pos(this,param_1,&local_70);
  if (cVar16 != '\0') {
    puVar18 = *(undefined8 **)(*(long *)(this + 8) + (ulong)local_70 * 8);
    goto LAB_0010b9f8;
  }
  uVar17 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  if (*(long *)(this + 8) == 0) {
    uVar26 = (ulong)uVar17;
    uVar25 = uVar26 * 4;
    uVar24 = uVar26 * 8;
    uVar20 = Memory::alloc_static(uVar25,false);
    *(undefined8 *)(this + 0x10) = uVar20;
    __s_00 = (void *)Memory::alloc_static(uVar24,false);
    *(void **)(this + 8) = __s_00;
    if (uVar17 != 0) {
      __s = *(void **)(this + 0x10);
      if ((__s < (void *)((long)__s_00 + uVar24)) && (__s_00 < (void *)((long)__s + uVar25))) {
        uVar25 = 0;
        do {
          *(undefined4 *)((long)__s + uVar25 * 4) = 0;
          *(undefined8 *)((long)__s_00 + uVar25 * 8) = 0;
          uVar25 = uVar25 + 1;
        } while (uVar26 != uVar25);
      }
      else {
        memset(__s,0,uVar25);
        memset(__s_00,0,uVar24);
      }
    }
  }
  local_6c = 0;
  cVar16 = _lookup_pos(this,param_1,&local_6c);
  if (cVar16 != '\0') {
    puVar18 = *(undefined8 **)(*(long *)(this + 8) + (ulong)local_6c * 8);
    puVar18[3] = 0;
    goto LAB_0010b9f8;
  }
  if ((float)uVar17 * __LC7 < (float)(*(int *)(this + 0x2c) + 1)) {
    if (*(int *)(this + 0x28) == 0x1c) {
      puVar18 = (undefined8 *)0x0;
      _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      goto LAB_0010b9f8;
    }
    _resize_and_rehash(this,*(int *)(this + 0x28) + 1);
  }
  local_68 = (undefined1  [16])0x0;
  StringName::StringName((StringName *)&local_58,param_1);
  local_50 = 0;
  puVar18 = (undefined8 *)operator_new(0x20,"");
  *puVar18 = local_68._0_8_;
  puVar18[1] = local_68._8_8_;
  StringName::StringName((StringName *)(puVar18 + 2),(StringName *)&local_58);
  bVar28 = StringName::configured != '\0';
  puVar18[3] = local_50;
  if ((bVar28) && (local_58 != 0)) {
    StringName::unref();
  }
  puVar5 = *(undefined8 **)(this + 0x20);
  if (puVar5 == (undefined8 *)0x0) {
    lVar19 = *(long *)param_1;
    *(undefined8 **)(this + 0x18) = puVar18;
    *(undefined8 **)(this + 0x20) = puVar18;
    if (lVar19 == 0) goto LAB_0010ba4d;
LAB_0010b8ec:
    uVar17 = *(uint *)(lVar19 + 0x20);
  }
  else {
    *puVar5 = puVar18;
    puVar18[1] = puVar5;
    lVar19 = *(long *)param_1;
    *(undefined8 **)(this + 0x20) = puVar18;
    if (lVar19 != 0) goto LAB_0010b8ec;
LAB_0010ba4d:
    uVar17 = StringName::get_empty_hash();
  }
  lVar19 = *(long *)(this + 0x10);
  if (uVar17 == 0) {
    uVar17 = 1;
  }
  uVar25 = (ulong)uVar17;
  uVar23 = 0;
  lVar6 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
  uVar3 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  uVar24 = CONCAT44(0,uVar3);
  auVar8._8_8_ = 0;
  auVar8._0_8_ = uVar25 * lVar6;
  auVar12._8_8_ = 0;
  auVar12._0_8_ = uVar24;
  lVar22 = SUB168(auVar8 * auVar12,8);
  lVar7 = *(long *)(this + 8);
  puVar1 = (uint *)(lVar19 + lVar22 * 4);
  iVar21 = SUB164(auVar8 * auVar12,8);
  uVar4 = *puVar1;
  puVar5 = puVar18;
  while (uVar4 != 0) {
    auVar9._8_8_ = 0;
    auVar9._0_8_ = (ulong)uVar4 * lVar6;
    auVar13._8_8_ = 0;
    auVar13._0_8_ = uVar24;
    auVar10._8_8_ = 0;
    auVar10._0_8_ = (ulong)((uVar3 + iVar21) - SUB164(auVar9 * auVar13,8)) * lVar6;
    auVar14._8_8_ = 0;
    auVar14._0_8_ = uVar24;
    local_98 = SUB164(auVar10 * auVar14,8);
    puVar27 = puVar5;
    if (local_98 < uVar23) {
      *puVar1 = (uint)uVar25;
      uVar25 = (ulong)uVar4;
      puVar2 = (undefined8 *)(lVar7 + lVar22 * 8);
      puVar27 = (undefined8 *)*puVar2;
      *puVar2 = puVar5;
      uVar23 = local_98;
    }
    uVar17 = (uint)uVar25;
    uVar23 = uVar23 + 1;
    auVar11._8_8_ = 0;
    auVar11._0_8_ = (ulong)(iVar21 + 1) * lVar6;
    auVar15._8_8_ = 0;
    auVar15._0_8_ = uVar24;
    lVar22 = SUB168(auVar11 * auVar15,8);
    puVar1 = (uint *)(lVar19 + lVar22 * 4);
    iVar21 = SUB164(auVar11 * auVar15,8);
    puVar5 = puVar27;
    uVar4 = *puVar1;
  }
  *(undefined8 **)(lVar7 + lVar22 * 8) = puVar5;
  *puVar1 = uVar17;
  *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
LAB_0010b9f8:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar18 + 3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashMap<StringName, TreeItem*, HashMapHasherDefault, HashMapComparatorDefault<StringName>,
   DefaultTypedAllocator<HashMapElement<StringName, TreeItem*> > >::insert(StringName const&,
   TreeItem* const&, bool) */

StringName *
HashMap<StringName,TreeItem*,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,TreeItem*>>>
::insert(StringName *param_1,TreeItem **param_2,bool param_3)

{
  uint uVar1;
  uint uVar2;
  TreeItem *pTVar3;
  TreeItem *pTVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  TreeItem *pTVar13;
  char cVar14;
  uint uVar15;
  long lVar16;
  TreeItem *pTVar17;
  long *in_RCX;
  int iVar18;
  undefined7 in_register_00000011;
  StringName *pSVar19;
  long lVar20;
  ulong uVar21;
  char in_R8B;
  uint uVar22;
  ulong uVar23;
  TreeItem *pTVar24;
  ulong uVar25;
  long in_FS_OFFSET;
  bool bVar26;
  uint local_a8;
  TreeItem *local_88;
  uint local_6c;
  undefined1 local_68 [16];
  long local_58;
  long local_50;
  long local_40;
  
  pSVar19 = (StringName *)CONCAT71(in_register_00000011,param_3);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar15 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_2 + 5) * 4);
  if (param_2[1] == (TreeItem *)0x0) {
    uVar25 = (ulong)uVar15;
    uVar21 = uVar25 * 4;
    pTVar17 = (TreeItem *)Memory::alloc_static(uVar21,false);
    param_2[2] = pTVar17;
    uVar23 = uVar25 * 8;
    pTVar17 = (TreeItem *)Memory::alloc_static(uVar23,false);
    param_2[1] = pTVar17;
    if (uVar15 != 0) {
      pTVar3 = param_2[2];
      if ((pTVar3 < pTVar17 + uVar23) && (pTVar17 < pTVar3 + uVar21)) {
        uVar21 = 0;
        do {
          *(undefined4 *)(pTVar3 + uVar21 * 4) = 0;
          *(undefined8 *)(pTVar17 + uVar21 * 8) = 0;
          uVar21 = uVar21 + 1;
        } while (uVar25 != uVar21);
      }
      else {
        memset(pTVar3,0,uVar21);
        memset(pTVar17,0,uVar23);
      }
    }
  }
  local_6c = 0;
  cVar14 = _lookup_pos((HashMap<StringName,TreeItem*,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,TreeItem*>>>
                        *)param_2,pSVar19,&local_6c);
  if (cVar14 != '\0') {
    local_88 = *(TreeItem **)(param_2[1] + (ulong)local_6c * 8);
    *(long *)(local_88 + 0x18) = *in_RCX;
    goto LAB_0010bd90;
  }
  if ((float)uVar15 * __LC7 < (float)(*(int *)((long)param_2 + 0x2c) + 1)) {
    if (*(int *)(param_2 + 5) == 0x1c) {
      _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      local_88 = (TreeItem *)0x0;
      goto LAB_0010bd90;
    }
    _resize_and_rehash((HashMap<StringName,TreeItem*,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,TreeItem*>>>
                        *)param_2,*(int *)(param_2 + 5) + 1);
  }
  local_68 = (undefined1  [16])0x0;
  StringName::StringName((StringName *)&local_58,pSVar19);
  local_50 = *in_RCX;
  local_88 = (TreeItem *)operator_new(0x20,"");
  *(undefined8 *)local_88 = local_68._0_8_;
  *(undefined8 *)(local_88 + 8) = local_68._8_8_;
  StringName::StringName((StringName *)(local_88 + 0x10),(StringName *)&local_58);
  bVar26 = StringName::configured != '\0';
  *(long *)(local_88 + 0x18) = local_50;
  if ((bVar26) && (local_58 != 0)) {
    StringName::unref();
  }
  pTVar17 = param_2[4];
  if (pTVar17 == (TreeItem *)0x0) {
    param_2[3] = local_88;
    param_2[4] = local_88;
LAB_0010bca5:
    lVar16 = *(long *)pSVar19;
    if (lVar16 != 0) goto LAB_0010bcb1;
LAB_0010be04:
    uVar15 = StringName::get_empty_hash();
  }
  else {
    if (in_R8B != '\0') {
      pTVar17 = param_2[3];
      *(TreeItem **)(pTVar17 + 8) = local_88;
      *(TreeItem **)local_88 = pTVar17;
      param_2[3] = local_88;
      goto LAB_0010bca5;
    }
    *(TreeItem **)pTVar17 = local_88;
    *(TreeItem **)(local_88 + 8) = pTVar17;
    lVar16 = *(long *)pSVar19;
    param_2[4] = local_88;
    if (lVar16 == 0) goto LAB_0010be04;
LAB_0010bcb1:
    uVar15 = *(uint *)(lVar16 + 0x20);
  }
  if (uVar15 == 0) {
    uVar15 = 1;
  }
  uVar21 = (ulong)uVar15;
  uVar22 = 0;
  lVar16 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(param_2 + 5) * 8);
  uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_2 + 5) * 4);
  uVar23 = CONCAT44(0,uVar1);
  pTVar3 = param_2[2];
  auVar5._8_8_ = 0;
  auVar5._0_8_ = uVar21 * lVar16;
  auVar9._8_8_ = 0;
  auVar9._0_8_ = uVar23;
  lVar20 = SUB168(auVar5 * auVar9,8);
  pTVar4 = param_2[1];
  pTVar17 = pTVar3 + lVar20 * 4;
  iVar18 = SUB164(auVar5 * auVar9,8);
  uVar2 = *(uint *)pTVar17;
  pTVar13 = local_88;
  while (uVar2 != 0) {
    auVar6._8_8_ = 0;
    auVar6._0_8_ = (ulong)uVar2 * lVar16;
    auVar10._8_8_ = 0;
    auVar10._0_8_ = uVar23;
    auVar7._8_8_ = 0;
    auVar7._0_8_ = (ulong)((uVar1 + iVar18) - SUB164(auVar6 * auVar10,8)) * lVar16;
    auVar11._8_8_ = 0;
    auVar11._0_8_ = uVar23;
    local_a8 = SUB164(auVar7 * auVar11,8);
    pTVar24 = pTVar13;
    if (local_a8 < uVar22) {
      *(uint *)pTVar17 = (uint)uVar21;
      uVar21 = (ulong)uVar2;
      pTVar17 = pTVar4 + lVar20 * 8;
      pTVar24 = *(TreeItem **)pTVar17;
      *(TreeItem **)pTVar17 = pTVar13;
      uVar22 = local_a8;
    }
    uVar15 = (uint)uVar21;
    uVar22 = uVar22 + 1;
    auVar8._8_8_ = 0;
    auVar8._0_8_ = (ulong)(iVar18 + 1) * lVar16;
    auVar12._8_8_ = 0;
    auVar12._0_8_ = uVar23;
    lVar20 = SUB168(auVar8 * auVar12,8);
    pTVar17 = pTVar3 + lVar20 * 4;
    iVar18 = SUB164(auVar8 * auVar12,8);
    pTVar13 = pTVar24;
    uVar2 = *(uint *)pTVar17;
  }
  *(TreeItem **)(pTVar4 + lVar20 * 8) = pTVar13;
  *(uint *)pTVar17 = uVar15;
  *(int *)((long)param_2 + 0x2c) = *(int *)((long)param_2 + 0x2c) + 1;
LAB_0010bd90:
  *(TreeItem **)param_1 = local_88;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorPerformanceProfiler::_notificationv(int, bool) */

void __thiscall
EditorPerformanceProfiler::_notificationv(EditorPerformanceProfiler *this,int param_1,bool param_2)

{
  if (param_2) {
    _notification(this,param_1);
    HSplitContainer::_notificationv((HSplitContainer *)this,param_1,true);
    return;
  }
  HSplitContainer::_notificationv((HSplitContainer *)this,param_1,false);
  _notification(this,param_1);
  return;
}



/* HashMap<StringName, int, HashMapHasherDefault, HashMapComparatorDefault<StringName>,
   DefaultTypedAllocator<HashMapElement<StringName, int> > >::_resize_and_rehash(unsigned int) */

void __thiscall
HashMap<StringName,int,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,int>>>
::_resize_and_rehash
          (HashMap<StringName,int,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,int>>>
           *this,uint param_1)

{
  uint *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  void *pvVar6;
  void *pvVar7;
  void *__s;
  long lVar8;
  long lVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined8 uVar18;
  void *__s_00;
  int iVar19;
  long lVar20;
  uint uVar21;
  ulong uVar22;
  undefined8 uVar23;
  uint uVar24;
  ulong uVar25;
  ulong uVar26;
  uint local_78;
  
  *(undefined4 *)(this + 0x2c) = 0;
  uVar3 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  if (param_1 < 2) {
    param_1 = 2;
  }
  *(uint *)(this + 0x28) = param_1;
  uVar21 = *(uint *)(hash_table_size_primes + (ulong)param_1 * 4);
  uVar22 = (ulong)uVar21;
  pvVar6 = *(void **)(this + 8);
  pvVar7 = *(void **)(this + 0x10);
  uVar26 = uVar22 * 4;
  uVar25 = uVar22 * 8;
  uVar18 = Memory::alloc_static(uVar26,false);
  *(undefined8 *)(this + 0x10) = uVar18;
  __s_00 = (void *)Memory::alloc_static(uVar25,false);
  *(void **)(this + 8) = __s_00;
  if (uVar21 != 0) {
    __s = *(void **)(this + 0x10);
    if ((__s < (void *)((long)__s_00 + uVar25)) && (__s_00 < (void *)((long)__s + uVar26))) {
      uVar26 = 0;
      do {
        *(undefined4 *)((long)__s + uVar26 * 4) = 0;
        *(undefined8 *)((long)__s_00 + uVar26 * 8) = 0;
        uVar26 = uVar26 + 1;
      } while (uVar22 != uVar26);
    }
    else {
      memset(__s,0,uVar26);
      memset(__s_00,0,uVar25);
    }
  }
  if (uVar3 != 0) {
    uVar26 = 0;
    do {
      uVar21 = *(uint *)((long)pvVar7 + uVar26 * 4);
      if (uVar21 != 0) {
        uVar24 = 0;
        lVar8 = *(long *)(this + 0x10);
        uVar4 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
        uVar25 = CONCAT44(0,uVar4);
        lVar9 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
        auVar10._8_8_ = 0;
        auVar10._0_8_ = (ulong)uVar21 * lVar9;
        auVar14._8_8_ = 0;
        auVar14._0_8_ = uVar25;
        lVar20 = SUB168(auVar10 * auVar14,8);
        puVar1 = (uint *)(lVar8 + lVar20 * 4);
        iVar19 = SUB164(auVar10 * auVar14,8);
        uVar5 = *puVar1;
        uVar18 = *(undefined8 *)((long)pvVar6 + uVar26 * 8);
        while (uVar5 != 0) {
          auVar11._8_8_ = 0;
          auVar11._0_8_ = (ulong)uVar5 * lVar9;
          auVar15._8_8_ = 0;
          auVar15._0_8_ = uVar25;
          auVar12._8_8_ = 0;
          auVar12._0_8_ = (ulong)((uVar4 + iVar19) - SUB164(auVar11 * auVar15,8)) * lVar9;
          auVar16._8_8_ = 0;
          auVar16._0_8_ = uVar25;
          local_78 = SUB164(auVar12 * auVar16,8);
          uVar23 = uVar18;
          if (local_78 < uVar24) {
            *puVar1 = uVar21;
            puVar2 = (undefined8 *)((long)__s_00 + lVar20 * 8);
            uVar23 = *puVar2;
            *puVar2 = uVar18;
            uVar21 = uVar5;
            uVar24 = local_78;
          }
          uVar24 = uVar24 + 1;
          auVar13._8_8_ = 0;
          auVar13._0_8_ = (ulong)(iVar19 + 1) * lVar9;
          auVar17._8_8_ = 0;
          auVar17._0_8_ = uVar25;
          lVar20 = SUB168(auVar13 * auVar17,8);
          puVar1 = (uint *)(lVar8 + lVar20 * 4);
          iVar19 = SUB164(auVar13 * auVar17,8);
          uVar18 = uVar23;
          uVar5 = *puVar1;
        }
        *(undefined8 *)((long)__s_00 + lVar20 * 8) = uVar18;
        *puVar1 = uVar21;
        *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
      }
      uVar26 = uVar26 + 1;
    } while (uVar26 != uVar3);
    Memory::free_static(pvVar6,false);
    Memory::free_static(pvVar7,false);
    return;
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashMap<StringName, int, HashMapHasherDefault, HashMapComparatorDefault<StringName>,
   DefaultTypedAllocator<HashMapElement<StringName, int> > >::insert(StringName const&, int const&,
   bool) */

StringName *
HashMap<StringName,int,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,int>>>
::insert(StringName *param_1,int *param_2,bool param_3)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  void *__s;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  long *plVar15;
  char cVar16;
  uint uVar17;
  long lVar18;
  undefined8 uVar19;
  void *__s_00;
  undefined4 *in_RCX;
  int iVar20;
  undefined7 in_register_00000011;
  StringName *pSVar21;
  long lVar22;
  ulong uVar23;
  char in_R8B;
  uint uVar24;
  ulong uVar25;
  long *plVar26;
  ulong uVar27;
  long in_FS_OFFSET;
  bool bVar28;
  uint local_a8;
  long *local_88;
  uint local_6c;
  undefined1 local_68 [16];
  long local_58;
  undefined4 local_50;
  long local_40;
  
  pSVar21 = (StringName *)CONCAT71(in_register_00000011,param_3);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar17 = *(uint *)(hash_table_size_primes + (ulong)(uint)param_2[10] * 4);
  if (*(long *)(param_2 + 2) == 0) {
    uVar27 = (ulong)uVar17;
    uVar23 = uVar27 * 4;
    uVar19 = Memory::alloc_static(uVar23,false);
    *(undefined8 *)(param_2 + 4) = uVar19;
    uVar25 = uVar27 * 8;
    __s_00 = (void *)Memory::alloc_static(uVar25,false);
    *(void **)(param_2 + 2) = __s_00;
    if (uVar17 != 0) {
      __s = *(void **)(param_2 + 4);
      if ((__s < (void *)(uVar25 + (long)__s_00)) && (__s_00 < (void *)((long)__s + uVar23))) {
        uVar23 = 0;
        do {
          *(undefined4 *)((long)__s + uVar23 * 4) = 0;
          *(undefined8 *)((long)__s_00 + uVar23 * 8) = 0;
          uVar23 = uVar23 + 1;
        } while (uVar27 != uVar23);
      }
      else {
        memset(__s,0,uVar23);
        memset(__s_00,0,uVar25);
      }
    }
  }
  local_6c = 0;
  cVar16 = _lookup_pos((HashMap<StringName,int,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,int>>>
                        *)param_2,pSVar21,&local_6c);
  if (cVar16 != '\0') {
    local_88 = *(long **)(*(long *)(param_2 + 2) + (ulong)local_6c * 8);
    *(undefined4 *)(local_88 + 3) = *in_RCX;
    goto LAB_0010c418;
  }
  if ((float)uVar17 * __LC7 < (float)(param_2[0xb] + 1)) {
    if (param_2[10] == 0x1c) {
      _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      local_88 = (long *)0x0;
      goto LAB_0010c418;
    }
    _resize_and_rehash((HashMap<StringName,int,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,int>>>
                        *)param_2,param_2[10] + 1);
  }
  local_68 = (undefined1  [16])0x0;
  StringName::StringName((StringName *)&local_58,pSVar21);
  local_50 = *in_RCX;
  local_88 = (long *)operator_new(0x20,"");
  *local_88 = local_68._0_8_;
  local_88[1] = local_68._8_8_;
  StringName::StringName((StringName *)(local_88 + 2),(StringName *)&local_58);
  bVar28 = StringName::configured != '\0';
  *(undefined4 *)(local_88 + 3) = local_50;
  if ((bVar28) && (local_58 != 0)) {
    StringName::unref();
  }
  puVar4 = *(undefined8 **)(param_2 + 8);
  if (puVar4 == (undefined8 *)0x0) {
    *(long **)(param_2 + 6) = local_88;
    *(long **)(param_2 + 8) = local_88;
LAB_0010c332:
    lVar18 = *(long *)pSVar21;
    if (lVar18 != 0) goto LAB_0010c33e;
LAB_0010c48c:
    uVar17 = StringName::get_empty_hash();
  }
  else {
    if (in_R8B != '\0') {
      lVar18 = *(long *)(param_2 + 6);
      *(long **)(lVar18 + 8) = local_88;
      *local_88 = lVar18;
      *(long **)(param_2 + 6) = local_88;
      goto LAB_0010c332;
    }
    *puVar4 = local_88;
    local_88[1] = (long)puVar4;
    lVar18 = *(long *)pSVar21;
    *(long **)(param_2 + 8) = local_88;
    if (lVar18 == 0) goto LAB_0010c48c;
LAB_0010c33e:
    uVar17 = *(uint *)(lVar18 + 0x20);
  }
  if (uVar17 == 0) {
    uVar17 = 1;
  }
  uVar23 = (ulong)uVar17;
  uVar24 = 0;
  lVar18 = *(long *)(hash_table_size_primes_inv + (ulong)(uint)param_2[10] * 8);
  uVar2 = *(uint *)(hash_table_size_primes + (ulong)(uint)param_2[10] * 4);
  uVar25 = CONCAT44(0,uVar2);
  lVar5 = *(long *)(param_2 + 4);
  auVar7._8_8_ = 0;
  auVar7._0_8_ = uVar23 * lVar18;
  auVar11._8_8_ = 0;
  auVar11._0_8_ = uVar25;
  lVar22 = SUB168(auVar7 * auVar11,8);
  lVar6 = *(long *)(param_2 + 2);
  puVar1 = (uint *)(lVar5 + lVar22 * 4);
  iVar20 = SUB164(auVar7 * auVar11,8);
  uVar3 = *puVar1;
  plVar15 = local_88;
  while (uVar3 != 0) {
    auVar8._8_8_ = 0;
    auVar8._0_8_ = (ulong)uVar3 * lVar18;
    auVar12._8_8_ = 0;
    auVar12._0_8_ = uVar25;
    auVar9._8_8_ = 0;
    auVar9._0_8_ = (ulong)((uVar2 + iVar20) - SUB164(auVar8 * auVar12,8)) * lVar18;
    auVar13._8_8_ = 0;
    auVar13._0_8_ = uVar25;
    local_a8 = SUB164(auVar9 * auVar13,8);
    plVar26 = plVar15;
    if (local_a8 < uVar24) {
      *puVar1 = (uint)uVar23;
      uVar23 = (ulong)uVar3;
      puVar4 = (undefined8 *)(lVar6 + lVar22 * 8);
      plVar26 = (long *)*puVar4;
      *puVar4 = plVar15;
      uVar24 = local_a8;
    }
    uVar17 = (uint)uVar23;
    uVar24 = uVar24 + 1;
    auVar10._8_8_ = 0;
    auVar10._0_8_ = (ulong)(iVar20 + 1) * lVar18;
    auVar14._8_8_ = 0;
    auVar14._0_8_ = uVar25;
    lVar22 = SUB168(auVar10 * auVar14,8);
    puVar1 = (uint *)(lVar5 + lVar22 * 4);
    iVar20 = SUB164(auVar10 * auVar14,8);
    plVar15 = plVar26;
    uVar3 = *puVar1;
  }
  *(long **)(lVar6 + lVar22 * 8) = plVar15;
  *puVar1 = uVar17;
  param_2[0xb] = param_2[0xb] + 1;
LAB_0010c418:
  *(long **)param_1 = local_88;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashMap<StringName, int, HashMapHasherDefault, HashMapComparatorDefault<StringName>,
   DefaultTypedAllocator<HashMapElement<StringName, int> > >::operator[](StringName const&) */

undefined8 * __thiscall
HashMap<StringName,int,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,int>>>
::operator[](HashMap<StringName,int,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,int>>>
             *this,StringName *param_1)

{
  uint *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  void *__s;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  char cVar16;
  uint uVar17;
  undefined8 *puVar18;
  long lVar19;
  undefined8 uVar20;
  void *__s_00;
  int iVar21;
  long lVar22;
  uint uVar23;
  ulong uVar24;
  ulong uVar25;
  ulong uVar26;
  undefined8 *puVar27;
  long in_FS_OFFSET;
  bool bVar28;
  uint local_98;
  uint local_70;
  uint local_6c;
  undefined1 local_68 [16];
  long local_58;
  undefined4 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_70 = 0;
  cVar16 = _lookup_pos(this,param_1,&local_70);
  if (cVar16 != '\0') {
    puVar18 = *(undefined8 **)(*(long *)(this + 8) + (ulong)local_70 * 8);
    goto LAB_0010c817;
  }
  uVar17 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  if (*(long *)(this + 8) == 0) {
    uVar26 = (ulong)uVar17;
    uVar25 = uVar26 * 4;
    uVar24 = uVar26 * 8;
    uVar20 = Memory::alloc_static(uVar25,false);
    *(undefined8 *)(this + 0x10) = uVar20;
    __s_00 = (void *)Memory::alloc_static(uVar24,false);
    *(void **)(this + 8) = __s_00;
    if (uVar17 != 0) {
      __s = *(void **)(this + 0x10);
      if ((__s < (void *)((long)__s_00 + uVar24)) && (__s_00 < (void *)((long)__s + uVar25))) {
        uVar25 = 0;
        do {
          *(undefined4 *)((long)__s + uVar25 * 4) = 0;
          *(undefined8 *)((long)__s_00 + uVar25 * 8) = 0;
          uVar25 = uVar25 + 1;
        } while (uVar26 != uVar25);
      }
      else {
        memset(__s,0,uVar25);
        memset(__s_00,0,uVar24);
      }
    }
  }
  local_6c = 0;
  cVar16 = _lookup_pos(this,param_1,&local_6c);
  if (cVar16 != '\0') {
    puVar18 = *(undefined8 **)(*(long *)(this + 8) + (ulong)local_6c * 8);
    *(undefined4 *)(puVar18 + 3) = 0;
    goto LAB_0010c817;
  }
  if ((float)uVar17 * __LC7 < (float)(*(int *)(this + 0x2c) + 1)) {
    if (*(int *)(this + 0x28) == 0x1c) {
      puVar18 = (undefined8 *)0x0;
      _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      goto LAB_0010c817;
    }
    _resize_and_rehash(this,*(int *)(this + 0x28) + 1);
  }
  local_68 = (undefined1  [16])0x0;
  StringName::StringName((StringName *)&local_58,param_1);
  local_50 = 0;
  puVar18 = (undefined8 *)operator_new(0x20,"");
  *puVar18 = local_68._0_8_;
  puVar18[1] = local_68._8_8_;
  StringName::StringName((StringName *)(puVar18 + 2),(StringName *)&local_58);
  bVar28 = StringName::configured != '\0';
  *(undefined4 *)(puVar18 + 3) = local_50;
  if ((bVar28) && (local_58 != 0)) {
    StringName::unref();
  }
  puVar5 = *(undefined8 **)(this + 0x20);
  if (puVar5 == (undefined8 *)0x0) {
    lVar19 = *(long *)param_1;
    *(undefined8 **)(this + 0x18) = puVar18;
    *(undefined8 **)(this + 0x20) = puVar18;
    if (lVar19 == 0) goto LAB_0010c86d;
LAB_0010c709:
    uVar17 = *(uint *)(lVar19 + 0x20);
  }
  else {
    *puVar5 = puVar18;
    puVar18[1] = puVar5;
    lVar19 = *(long *)param_1;
    *(undefined8 **)(this + 0x20) = puVar18;
    if (lVar19 != 0) goto LAB_0010c709;
LAB_0010c86d:
    uVar17 = StringName::get_empty_hash();
  }
  lVar19 = *(long *)(this + 0x10);
  if (uVar17 == 0) {
    uVar17 = 1;
  }
  uVar25 = (ulong)uVar17;
  uVar23 = 0;
  lVar6 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
  uVar3 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  uVar24 = CONCAT44(0,uVar3);
  auVar8._8_8_ = 0;
  auVar8._0_8_ = uVar25 * lVar6;
  auVar12._8_8_ = 0;
  auVar12._0_8_ = uVar24;
  lVar22 = SUB168(auVar8 * auVar12,8);
  lVar7 = *(long *)(this + 8);
  puVar1 = (uint *)(lVar19 + lVar22 * 4);
  iVar21 = SUB164(auVar8 * auVar12,8);
  uVar4 = *puVar1;
  puVar5 = puVar18;
  while (uVar4 != 0) {
    auVar9._8_8_ = 0;
    auVar9._0_8_ = (ulong)uVar4 * lVar6;
    auVar13._8_8_ = 0;
    auVar13._0_8_ = uVar24;
    auVar10._8_8_ = 0;
    auVar10._0_8_ = (ulong)((uVar3 + iVar21) - SUB164(auVar9 * auVar13,8)) * lVar6;
    auVar14._8_8_ = 0;
    auVar14._0_8_ = uVar24;
    local_98 = SUB164(auVar10 * auVar14,8);
    puVar27 = puVar5;
    if (local_98 < uVar23) {
      *puVar1 = (uint)uVar25;
      uVar25 = (ulong)uVar4;
      puVar2 = (undefined8 *)(lVar7 + lVar22 * 8);
      puVar27 = (undefined8 *)*puVar2;
      *puVar2 = puVar5;
      uVar23 = local_98;
    }
    uVar17 = (uint)uVar25;
    uVar23 = uVar23 + 1;
    auVar11._8_8_ = 0;
    auVar11._0_8_ = (ulong)(iVar21 + 1) * lVar6;
    auVar15._8_8_ = 0;
    auVar15._0_8_ = uVar24;
    lVar22 = SUB168(auVar11 * auVar15,8);
    puVar1 = (uint *)(lVar19 + lVar22 * 4);
    iVar21 = SUB164(auVar11 * auVar15,8);
    puVar5 = puVar27;
    uVar4 = *puVar1;
  }
  *(undefined8 **)(lVar7 + lVar22 * 8) = puVar5;
  *puVar1 = uVar17;
  *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
LAB_0010c817:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar18 + 3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorPerformanceProfiler::Monitor::Monitor() */

void EditorPerformanceProfiler::Monitor::_GLOBAL__sub_I_Monitor(void)

{
  if (PopupMenu::base_property_helper != '\0') {
    return;
  }
  PopupMenu::base_property_helper = 1;
  PopupMenu::base_property_helper._56_8_ = 2;
  PopupMenu::base_property_helper._64_8_ = 0;
  PopupMenu::base_property_helper._0_16_ = (undefined1  [16])0x0;
  PopupMenu::base_property_helper._24_16_ = (undefined1  [16])0x0;
  PopupMenu::base_property_helper._40_16_ = (undefined1  [16])0x0;
  __cxa_atexit(PropertyListHelper::~PropertyListHelper,PopupMenu::base_property_helper,&__dso_handle
              );
  return;
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<EditorPerformanceProfiler, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorPerformanceProfiler,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorPerformanceProfiler,void> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<EditorPerformanceProfiler, void, Ref<InputEvent>
   const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorPerformanceProfiler,void,Ref<InputEvent>const&>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorPerformanceProfiler,void,Ref<InputEvent>const&> *this)

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



/* WARNING: Control flow encountered bad instruction data */
/* EditorPerformanceProfiler::~EditorPerformanceProfiler() */

void __thiscall
EditorPerformanceProfiler::~EditorPerformanceProfiler(EditorPerformanceProfiler *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* KeyValue<StringName, EditorPerformanceProfiler::Monitor>::~KeyValue() */

void __thiscall
KeyValue<StringName,EditorPerformanceProfiler::Monitor>::~KeyValue
          (KeyValue<StringName,EditorPerformanceProfiler::Monitor> *this)

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
/* HSplitContainer::~HSplitContainer() */

void __thiscall HSplitContainer::~HSplitContainer(HSplitContainer *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



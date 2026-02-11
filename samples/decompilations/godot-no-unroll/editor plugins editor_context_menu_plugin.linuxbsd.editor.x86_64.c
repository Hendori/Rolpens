
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



/* EditorContextMenuPluginManager::add_plugin(EditorContextMenuPlugin::ContextMenuSlot,
   Ref<EditorContextMenuPlugin> const&) */

void __thiscall
EditorContextMenuPluginManager::add_plugin
          (EditorContextMenuPluginManager *this,undefined4 param_2,long *param_3)

{
  long *plVar1;
  undefined8 *puVar2;
  uint uVar3;
  code *pcVar4;
  char cVar5;
  long *plVar6;
  void *pvVar7;
  char *pcVar8;
  undefined8 uVar9;
  ulong uVar10;
  Object *pOVar11;
  
  pOVar11 = (Object *)*param_3;
  if (pOVar11 == (Object *)0x0) {
    uVar9 = 0x61;
    pcVar8 = "Condition \"p_plugin.is_null()\" is true.";
LAB_00100170:
    _err_print_error("add_plugin","editor/plugins/editor_context_menu_plugin.cpp",uVar9,pcVar8,0,0);
    return;
  }
  plVar6 = *(long **)(this + 0x180);
  if (*(uint *)(this + 0x178) != 0) {
    plVar1 = plVar6 + *(uint *)(this + 0x178);
    do {
      if (pOVar11 == (Object *)*plVar6) {
        uVar9 = 0x62;
        pcVar8 = "Condition \"plugin_list.has(p_plugin)\" is true.";
        goto LAB_00100170;
      }
      plVar6 = plVar6 + 1;
    } while (plVar1 != plVar6);
  }
  *(undefined4 *)(pOVar11 + 0x17c) = param_2;
  cVar5 = RefCounted::reference();
  uVar3 = *(uint *)(this + 0x178);
  pvVar7 = *(void **)(this + 0x180);
  if (cVar5 == '\0') {
    pOVar11 = (Object *)0x0;
  }
  if (*(uint *)(this + 0x17c) == uVar3) {
    uVar10 = (ulong)(uVar3 * 2);
    if (uVar3 * 2 == 0) {
      uVar10 = 1;
    }
    *(int *)(this + 0x17c) = (int)uVar10;
    pvVar7 = (void *)Memory::realloc_static(pvVar7,uVar10 * 8,false);
    *(void **)(this + 0x180) = pvVar7;
    if (pvVar7 == (void *)0x0) {
      _err_print_error("push_back","./core/templates/local_vector.h",0x41,
                       "FATAL: Condition \"!data\" is true.","Out of memory",0,0);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar4 = (code *)invalidInstructionException();
      (*pcVar4)();
    }
    uVar3 = *(uint *)(this + 0x178);
  }
  *(uint *)(this + 0x178) = uVar3 + 1;
  puVar2 = (undefined8 *)((long)pvVar7 + (ulong)uVar3 * 8);
  if (pOVar11 == (Object *)0x0) {
    *puVar2 = 0;
    return;
  }
  *puVar2 = pOVar11;
  cVar5 = RefCounted::reference();
  if (cVar5 == '\0') {
    *puVar2 = 0;
  }
  cVar5 = RefCounted::unreference();
  if (cVar5 != '\0') {
    cVar5 = predelete_handler(pOVar11);
    if (cVar5 != '\0') {
      (**(code **)(*(long *)pOVar11 + 0x140))(pOVar11);
      Memory::free_static(pOVar11,false);
      return;
    }
  }
  return;
}



/* EditorContextMenuPluginManager::remove_plugin(Ref<EditorContextMenuPlugin> const&) */

void __thiscall
EditorContextMenuPluginManager::remove_plugin(EditorContextMenuPluginManager *this,Ref *param_1)

{
  Object *pOVar1;
  char cVar2;
  long *plVar3;
  ulong uVar4;
  uint uVar5;
  long *plVar6;
  long lVar7;
  Object *pOVar8;
  ulong uVar9;
  uint uVar10;
  
  pOVar1 = *(Object **)param_1;
  if (pOVar1 == (Object *)0x0) {
    _err_print_error("remove_plugin","editor/plugins/editor_context_menu_plugin.cpp",0x69,
                     "Condition \"p_plugin.is_null()\" is true.",0,0);
    return;
  }
  uVar5 = *(uint *)(this + 0x178);
  plVar6 = *(long **)(this + 0x180);
  if (uVar5 != 0) {
    plVar3 = plVar6;
    do {
      if (pOVar1 == (Object *)*plVar3) {
        uVar4 = 0;
        do {
          pOVar8 = (Object *)plVar6[uVar4];
          if (pOVar1 == pOVar8) {
            uVar5 = uVar5 - 1;
            uVar9 = uVar4 & 0xffffffff;
            *(uint *)(this + 0x178) = uVar5;
            if ((uint)uVar4 < uVar5) {
              lVar7 = uVar4 * 8;
              while( true ) {
                uVar10 = (int)uVar9 + 1;
                uVar9 = (ulong)uVar10;
                pOVar1 = (Object *)plVar6[uVar9];
                if (pOVar1 != pOVar8) {
                  *(long *)((long)plVar6 + lVar7) = (long)pOVar1;
                  if ((pOVar1 != (Object *)0x0) && (cVar2 = RefCounted::reference(), cVar2 == '\0'))
                  {
                    *(long *)((long)plVar6 + lVar7) = 0;
                  }
                  if (((pOVar8 != (Object *)0x0) &&
                      (cVar2 = RefCounted::unreference(), cVar2 != '\0')) &&
                     (cVar2 = predelete_handler(pOVar8), cVar2 != '\0')) {
                    (**(code **)(*(long *)pOVar8 + 0x140))(pOVar8);
                    Memory::free_static(pOVar8,false);
                  }
                  plVar6 = *(long **)(this + 0x180);
                }
                uVar5 = *(uint *)(this + 0x178);
                lVar7 = lVar7 + 8;
                if (uVar5 <= uVar10) break;
                pOVar8 = (Object *)plVar6[uVar9];
              }
            }
            if ((plVar6[uVar5] != 0) && (cVar2 = RefCounted::unreference(), cVar2 != '\0')) {
              pOVar1 = (Object *)plVar6[uVar5];
              cVar2 = predelete_handler(pOVar1);
              if (cVar2 != '\0') {
                (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
                Memory::free_static(pOVar1,false);
                return;
              }
            }
            return;
          }
          uVar4 = uVar4 + 1;
        } while (uVar5 != uVar4);
        return;
      }
      plVar3 = plVar3 + 1;
    } while (plVar6 + uVar5 != plVar3);
  }
  _err_print_error("remove_plugin","editor/plugins/editor_context_menu_plugin.cpp",0x6a,
                   "Condition \"!plugin_list.has(p_plugin)\" is true.",0,0);
  return;
}



/* EditorContextMenuPluginManager::has_plugins_for_slot(EditorContextMenuPlugin::ContextMenuSlot) */

undefined8 __thiscall
EditorContextMenuPluginManager::has_plugins_for_slot
          (EditorContextMenuPluginManager *this,int param_2)

{
  long *plVar1;
  long *plVar2;
  
  plVar2 = *(long **)(this + 0x180);
  plVar1 = plVar2 + *(uint *)(this + 0x178);
  while( true ) {
    if (plVar1 == plVar2) {
      return 0;
    }
    if (*(int *)(*plVar2 + 0x17c) == param_2) break;
    plVar2 = plVar2 + 1;
  }
  return 1;
}



/* EditorContextMenuPluginManager::match_custom_shortcut(EditorContextMenuPlugin::ContextMenuSlot,
   Ref<InputEvent> const&) */

EditorContextMenuPluginManager * __thiscall
EditorContextMenuPluginManager::match_custom_shortcut
          (EditorContextMenuPluginManager *this,long param_2,int param_3)

{
  long *plVar1;
  undefined8 *puVar2;
  char cVar3;
  long *plVar4;
  
  plVar4 = *(long **)(param_2 + 0x180);
  plVar1 = plVar4 + *(uint *)(param_2 + 0x178);
  do {
    if (plVar1 == plVar4) {
      *(undefined8 *)this = 0;
      *(undefined8 *)(this + 8) = 0;
      return this;
    }
    if (*(int *)(*plVar4 + 0x17c) == param_3) {
      for (puVar2 = *(undefined8 **)(*plVar4 + 0x1c8); puVar2 != (undefined8 *)0x0;
          puVar2 = (undefined8 *)*puVar2) {
        cVar3 = Shortcut::matches_event((Ref *)puVar2[2]);
        if (cVar3 != '\0') {
          Callable::Callable((Callable *)this,(Callable *)(puVar2 + 3));
          return this;
        }
      }
    }
    plVar4 = plVar4 + 1;
  } while( true );
}



/* EditorContextMenuPluginManager::create() */

void EditorContextMenuPluginManager::create(void)

{
  Object *this;
  
  if (singleton == (Object *)0x0) {
    this = (Object *)operator_new(0x188,"");
    Object::Object(this);
    *(undefined8 *)(this + 0x178) = 0;
    *(undefined ***)this = &PTR__initialize_classv_0010c1c0;
    *(undefined8 *)(this + 0x180) = 0;
    postinitialize_handler(this);
    singleton = this;
    return;
  }
  _err_print_error("create","editor/plugins/editor_context_menu_plugin.cpp",0xcc,
                   "Condition \"singleton != nullptr\" is true.",0,0);
  return;
}



/* EditorContextMenuPluginManager::cleanup() */

void EditorContextMenuPluginManager::cleanup(void)

{
  Object *pOVar1;
  char cVar2;
  
  pOVar1 = singleton;
  if (singleton != (Object *)0x0) {
    cVar2 = predelete_handler(singleton);
    if (cVar2 != '\0') {
      (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
      Memory::free_static(pOVar1,false);
    }
    singleton = (Object *)0x0;
    return;
  }
  _err_print_error("cleanup","editor/plugins/editor_context_menu_plugin.cpp",0xd1,
                   "Parameter \"singleton\" is null.",0,0);
  return;
}



/* EditorContextMenuPlugin::add_menu_shortcut(Ref<Shortcut> const&, Callable const&) */

void EditorContextMenuPlugin::add_menu_shortcut(Ref *param_1,Callable *param_2)

{
  long in_FS_OFFSET;
  Ref aRStack_18 [8];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  HashMap<Ref<Shortcut>,Callable,HashMapHasherDefault,HashMapComparatorDefault<Ref<Shortcut>>,DefaultTypedAllocator<HashMapElement<Ref<Shortcut>,Callable>>>
  ::insert(aRStack_18,(Callable *)(param_1 + 0x1b0),SUB81(param_2,0));
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorContextMenuPluginManager::invoke_callback(Callable const&, Variant const&) */

void __thiscall
EditorContextMenuPluginManager::invoke_callback
          (EditorContextMenuPluginManager *this,Callable *param_1,Variant *param_2)

{
  char cVar1;
  long in_FS_OFFSET;
  Variant *local_98;
  Callable local_90 [8];
  CowData<char32_t> local_88 [8];
  undefined8 local_80;
  int local_78;
  undefined8 local_74;
  undefined *local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined1 local_50 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = (undefined1  [16])0x0;
  local_78 = 0;
  local_74 = 0;
  local_58 = 0;
  local_98 = param_2;
  Callable::callp((Variant **)param_1,(int)&local_98,(Variant *)0x1,(CallError *)&local_58);
  if (local_78 == 0) {
    cVar1 = Variant::needs_deinit[(int)local_58];
  }
  else {
    local_80 = 0;
    local_68 = &_LC28;
    local_60 = 1;
    String::parse_latin1((StrRange *)&local_80);
    Variant::get_callable_error_text(local_90,(Variant **)param_1,(int)&local_98,(CallError *)0x1);
    operator+((char *)local_88,(String *)"Failed to execute context menu callback: ");
    String::operator+((String *)&local_68,(String *)local_88);
    _err_print_error("invoke_callback","editor/plugins/editor_context_menu_plugin.cpp",199,
                     "Method/function failed.",(String *)&local_68,0,0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    CowData<char32_t>::_unref(local_88);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_90);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
    cVar1 = Variant::needs_deinit[(int)local_58];
  }
  if (cVar1 != '\0') {
    Variant::_clear_internal();
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* EditorContextMenuPluginManager::activate_custom_option(EditorContextMenuPlugin::ContextMenuSlot,
   int, Variant const&) */

undefined8 __thiscall
EditorContextMenuPluginManager::activate_custom_option
          (EditorContextMenuPluginManager *this,int param_2,int param_3,Variant *param_4)

{
  long *plVar1;
  undefined8 *puVar2;
  long *plVar3;
  
  plVar3 = *(long **)(this + 0x180);
  plVar1 = plVar3 + *(uint *)(this + 0x178);
  do {
    if (plVar1 == plVar3) {
      return 0;
    }
    if (*(int *)(*plVar3 + 0x17c) == param_2) {
      for (puVar2 = *(undefined8 **)(*plVar3 + 0x198); puVar2 != (undefined8 *)0x0;
          puVar2 = (undefined8 *)*puVar2) {
        if (*(int *)(puVar2 + 3) == param_3) {
          invoke_callback(this,(Callable *)(puVar2 + 5),param_4);
          return 1;
        }
      }
    }
    plVar3 = plVar3 + 1;
  } while( true );
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



/* EditorContextMenuPluginManager::add_options_from_plugins(PopupMenu*,
   EditorContextMenuPlugin::ContextMenuSlot, Vector<String> const&) */

void __thiscall
EditorContextMenuPluginManager::add_options_from_plugins
          (EditorContextMenuPluginManager *this,StringName *param_1,int param_3,undefined8 param_4)

{
  long *plVar1;
  uint uVar2;
  void *pvVar3;
  Object *pOVar4;
  bool bVar5;
  char cVar6;
  long *plVar7;
  int iVar8;
  long *plVar9;
  int iVar10;
  long *plVar11;
  long lVar12;
  long in_FS_OFFSET;
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((add_options_from_plugins(PopupMenu*,EditorContextMenuPlugin::ContextMenuSlot,Vector<String>const&)
       ::{lambda()#1}::operator()()::sname == '\0') &&
     (iVar8 = __cxa_guard_acquire(&add_options_from_plugins(PopupMenu*,EditorContextMenuPlugin::ContextMenuSlot,Vector<String>const&)
                                   ::{lambda()#1}::operator()()::sname), iVar8 != 0)) {
    _scs_create((char *)&add_options_from_plugins(PopupMenu*,EditorContextMenuPlugin::ContextMenuSlot,Vector<String>const&)
                         ::{lambda()#1}::operator()()::sname,true);
    __cxa_atexit(StringName::~StringName,
                 &add_options_from_plugins(PopupMenu*,EditorContextMenuPlugin::ContextMenuSlot,Vector<String>const&)
                  ::{lambda()#1}::operator()()::sname,&__dso_handle);
    __cxa_guard_release(&add_options_from_plugins(PopupMenu*,EditorContextMenuPlugin::ContextMenuSlot,Vector<String>const&)
                         ::{lambda()#1}::operator()()::sname);
  }
  Window::get_theme_constant
            (param_1,(StringName *)
                     &add_options_from_plugins(PopupMenu*,EditorContextMenuPlugin::ContextMenuSlot,Vector<String>const&)
                      ::{lambda()#1}::operator()()::sname);
  plVar11 = *(long **)(this + 0x180);
  iVar8 = 2000;
  plVar1 = plVar11 + *(uint *)(this + 0x178);
  if (plVar11 != plVar1) {
    bVar5 = false;
    do {
      while (plVar9 = (long *)*plVar11, *(int *)((long)plVar9 + 0x17c) != param_3) {
LAB_00100b50:
        plVar11 = plVar11 + 1;
        if (plVar1 == plVar11) goto LAB_00100da0;
      }
      plVar7 = plVar9;
      if ((plVar9[0x31] != 0) && (*(int *)((long)plVar9 + 0x1ac) != 0)) {
        uVar2 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(plVar9 + 0x35) * 4);
        if (uVar2 != 0) {
          lVar12 = 0;
          do {
            if (*(int *)(plVar9[0x32] + lVar12) != 0) {
              *(int *)(plVar9[0x32] + lVar12) = 0;
              pvVar3 = *(void **)(plVar9[0x31] + lVar12 * 2);
              if ((*(long *)((long)pvVar3 + 0x40) != 0) &&
                 (cVar6 = RefCounted::unreference(), cVar6 != '\0')) {
                pOVar4 = *(Object **)((long)pvVar3 + 0x40);
                cVar6 = predelete_handler(pOVar4);
                if (cVar6 != '\0') {
                  (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
                  Memory::free_static(pOVar4,false);
                }
              }
              if ((*(long *)((long)pvVar3 + 0x38) != 0) &&
                 (cVar6 = RefCounted::unreference(), cVar6 != '\0')) {
                pOVar4 = *(Object **)((long)pvVar3 + 0x38);
                cVar6 = predelete_handler(pOVar4);
                if (cVar6 != '\0') {
                  (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
                  Memory::free_static(pOVar4,false);
                }
              }
              Callable::~Callable((Callable *)((long)pvVar3 + 0x28));
              CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar3 + 0x20));
              CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar3 + 0x10));
              Memory::free_static(pvVar3,false);
              *(undefined8 *)(plVar9[0x31] + lVar12 * 2) = 0;
            }
            lVar12 = lVar12 + 4;
          } while (lVar12 != (ulong)uVar2 * 4);
          plVar7 = (long *)*plVar11;
        }
        *(undefined4 *)((long)plVar9 + 0x1ac) = 0;
        *(undefined1 (*) [16])(plVar9 + 0x33) = (undefined1  [16])0x0;
      }
      (**(code **)(*plVar7 + 0x150))(plVar7,param_4);
      lVar12 = *plVar11;
      if (*(int *)(lVar12 + 0x1ac) != 0) {
        if (bVar5) {
          bVar5 = true;
        }
        else {
          local_48 = 0;
          PopupMenu::add_separator((String *)param_1,(int)(CowData<char32_t> *)&local_48);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
          bVar5 = true;
        }
      }
      plVar9 = *(long **)(lVar12 + 0x198);
      if (plVar9 == (long *)0x0) goto LAB_00100b50;
      do {
        *(int *)(plVar9 + 3) = iVar8;
        if (plVar9[9] == 0) {
          PopupMenu::add_item(param_1,(PopupMenu *)(plVar9 + 4),iVar8,0);
        }
        else {
          PopupMenu::add_submenu_node_item
                    ((String *)param_1,(PopupMenu *)(plVar9 + 4),(int)plVar9[9]);
        }
        iVar10 = (int)param_1;
        if (plVar9[7] != 0) {
          PopupMenu::set_item_icon(iVar10,(Ref *)0xffffffff);
          PopupMenu::set_item_icon_max_width(iVar10,-1);
        }
        if (plVar9[8] != 0) {
          PopupMenu::set_item_shortcut(iVar10,(Ref *)0xffffffff,(bool)((char)plVar9 + '@'));
        }
        plVar9 = (long *)*plVar9;
        iVar8 = iVar8 + 1;
      } while (plVar9 != (long *)0x0);
      plVar11 = plVar11 + 1;
    } while (plVar1 != plVar11);
  }
LAB_00100da0:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* EditorContextMenuPlugin::add_context_menu_item(String const&, Callable const&, Ref<Texture2D>
   const&) */

void __thiscall
EditorContextMenuPlugin::add_context_menu_item
          (EditorContextMenuPlugin *this,String *param_1,Callable *param_2,Ref *param_3)

{
  uint uVar1;
  Object *pOVar2;
  long lVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  ulong uVar13;
  undefined8 uVar14;
  char cVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  long lVar19;
  long lVar20;
  uint uVar21;
  long in_FS_OFFSET;
  String local_80 [8];
  undefined4 local_78;
  CowData<char32_t> local_70 [8];
  Callable aCStack_68 [8];
  undefined8 local_60;
  undefined1 local_58 [16];
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(this + 0x188) == 0) {
LAB_00101150:
    if (*(int *)(this + 0x1ac) == 100) {
      _err_print_error("add_context_menu_item","editor/plugins/editor_context_menu_plugin.cpp",0x30,
                       "Condition \"context_menu_items.size() == MAX_ITEMS\" is true.",
                       "Maximum number of context menu items reached.",0,0);
      goto LAB_00101029;
    }
  }
  else if (*(int *)(this + 0x1ac) != 0) {
    uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x1a8) * 4);
    lVar3 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x1a8) * 8);
    uVar16 = String::hash();
    uVar13 = CONCAT44(0,uVar1);
    lVar20 = *(long *)(this + 400);
    uVar17 = 1;
    if (uVar16 != 0) {
      uVar17 = uVar16;
    }
    auVar4._8_8_ = 0;
    auVar4._0_8_ = (ulong)uVar17 * lVar3;
    auVar8._8_8_ = 0;
    auVar8._0_8_ = uVar13;
    lVar19 = SUB168(auVar4 * auVar8,8);
    uVar16 = *(uint *)(lVar20 + lVar19 * 4);
    iVar18 = SUB164(auVar4 * auVar8,8);
    if (uVar16 != 0) {
      uVar21 = 0;
      do {
        if (uVar17 == uVar16) {
          cVar15 = String::operator==((String *)
                                      (*(long *)(*(long *)(this + 0x188) + lVar19 * 8) + 0x10),
                                      param_1);
          if (cVar15 != '\0') {
            _err_print_error("add_context_menu_item","editor/plugins/editor_context_menu_plugin.cpp"
                             ,0x2f,"Condition \"context_menu_items.has(p_name)\" is true.",
                             "Context menu item already registered.",0,0);
            goto LAB_00101029;
          }
          lVar20 = *(long *)(this + 400);
        }
        uVar21 = uVar21 + 1;
        auVar5._8_8_ = 0;
        auVar5._0_8_ = (ulong)(iVar18 + 1) * lVar3;
        auVar9._8_8_ = 0;
        auVar9._0_8_ = uVar13;
        lVar19 = SUB168(auVar5 * auVar9,8);
        uVar16 = *(uint *)(lVar20 + lVar19 * 4);
        iVar18 = SUB164(auVar5 * auVar9,8);
      } while ((uVar16 != 0) &&
              (auVar6._8_8_ = 0, auVar6._0_8_ = (ulong)uVar16 * lVar3, auVar10._8_8_ = 0,
              auVar10._0_8_ = uVar13, auVar7._8_8_ = 0,
              auVar7._0_8_ = (ulong)((uVar1 + iVar18) - SUB164(auVar6 * auVar10,8)) * lVar3,
              auVar11._8_8_ = 0, auVar11._0_8_ = uVar13, uVar21 <= SUB164(auVar7 * auVar11,8)));
    }
    goto LAB_00101150;
  }
  local_78 = 0;
  local_60 = 0;
  local_48 = 0;
  _local_70 = (undefined1  [16])0x0;
  local_58 = (undefined1  [16])0x0;
  if (*(long *)param_1 != 0) {
    CowData<char32_t>::_ref(local_70,(CowData *)param_1);
  }
  Callable::operator=((Callable *)(local_70 + 8),param_2);
  uVar14 = local_58._0_8_;
  pOVar2 = *(Object **)param_3;
  if (pOVar2 != (Object *)local_58._0_8_) {
    local_58._0_8_ = pOVar2;
    if ((pOVar2 != (Object *)0x0) && (cVar15 = RefCounted::reference(), cVar15 == '\0')) {
      auVar12._8_8_ = 0;
      auVar12._0_8_ = local_58._8_8_;
      local_58 = auVar12 << 0x40;
    }
    if ((((Object *)uVar14 != (Object *)0x0) && (cVar15 = RefCounted::unreference(), cVar15 != '\0')
        ) && (cVar15 = predelete_handler((Object *)uVar14), cVar15 != '\0')) {
      (**(code **)(*(long *)uVar14 + 0x140))(uVar14);
      Memory::free_static((void *)uVar14,false);
    }
  }
  HashMap<String,EditorContextMenuPlugin::ContextMenuItem,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,EditorContextMenuPlugin::ContextMenuItem>>>
  ::insert(local_80,(ContextMenuItem *)(this + 0x180),SUB81(param_1,0));
  if ((local_58._8_8_ != 0) && (cVar15 = RefCounted::unreference(), cVar15 != '\0')) {
    uVar14 = local_58._8_8_;
    cVar15 = predelete_handler((Object *)local_58._8_8_);
    if (cVar15 != '\0') {
      (**(code **)(*(long *)uVar14 + 0x140))(uVar14);
      Memory::free_static((void *)uVar14,false);
    }
  }
  if ((local_58._0_8_ != 0) && (cVar15 = RefCounted::unreference(), cVar15 != '\0')) {
    uVar14 = local_58._0_8_;
    cVar15 = predelete_handler((Object *)local_58._0_8_);
    if (cVar15 != '\0') {
      (**(code **)(*(long *)uVar14 + 0x140))(uVar14);
      Memory::free_static((void *)uVar14,false);
    }
  }
  Callable::~Callable((Callable *)(local_70 + 8));
  CowData<char32_t>::_unref(local_70);
LAB_00101029:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* EditorContextMenuPlugin::add_context_submenu_item(String const&, PopupMenu*, Ref<Texture2D>
   const&) */

void __thiscall
EditorContextMenuPlugin::add_context_submenu_item
          (EditorContextMenuPlugin *this,String *param_1,PopupMenu *param_2,Ref *param_3)

{
  Object *pOVar1;
  undefined1 auVar2 [16];
  undefined8 uVar3;
  char cVar4;
  Object *pOVar5;
  long in_FS_OFFSET;
  String local_80 [8];
  undefined4 local_78;
  CowData<char32_t> local_70 [8];
  Callable aCStack_68 [8];
  undefined8 local_60;
  undefined1 local_58 [16];
  PopupMenu *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_2 == (PopupMenu *)0x0) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      _err_print_error("add_context_submenu_item","editor/plugins/editor_context_menu_plugin.cpp",
                       0x46,"Parameter \"p_menu\" is null.",0,0);
      return;
    }
    goto LAB_001014c3;
  }
  local_78 = 0;
  local_60 = 0;
  local_48 = (PopupMenu *)0x0;
  _local_70 = (undefined1  [16])0x0;
  local_58 = (undefined1  [16])0x0;
  if (*(long *)param_1 == 0) {
    if (*(ulong *)param_3 != 0) {
      local_58._8_8_ = 0;
      local_58._0_8_ = *(ulong *)param_3;
      cVar4 = RefCounted::reference();
      if (cVar4 == '\0') {
        pOVar5 = (Object *)0x0;
LAB_00101308:
        auVar2._8_8_ = 0;
        auVar2._0_8_ = local_58._8_8_;
        local_58 = auVar2 << 0x40;
        goto LAB_00101311;
      }
    }
  }
  else {
    CowData<char32_t>::_ref(local_70,(CowData *)param_1);
    pOVar5 = (Object *)local_58._0_8_;
    pOVar1 = *(Object **)param_3;
    if (pOVar1 != (Object *)local_58._0_8_) {
      local_58._0_8_ = pOVar1;
      if (pOVar1 != (Object *)0x0) {
        cVar4 = RefCounted::reference();
        if (cVar4 == '\0') goto LAB_00101308;
      }
LAB_00101311:
      if (((pOVar5 != (Object *)0x0) && (cVar4 = RefCounted::unreference(), cVar4 != '\0')) &&
         (cVar4 = predelete_handler(pOVar5), cVar4 != '\0')) {
        (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
        Memory::free_static(pOVar5,false);
      }
    }
  }
  local_48 = param_2;
  HashMap<String,EditorContextMenuPlugin::ContextMenuItem,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,EditorContextMenuPlugin::ContextMenuItem>>>
  ::insert(local_80,(ContextMenuItem *)(this + 0x180),SUB81(param_1,0));
  if ((local_58._8_8_ == 0) || (cVar4 = RefCounted::unreference(), cVar4 == '\0')) {
LAB_0010135e:
  }
  else {
    uVar3 = local_58._8_8_;
    cVar4 = predelete_handler((Object *)local_58._8_8_);
    if (cVar4 == '\0') goto LAB_0010135e;
    (**(code **)(*(long *)uVar3 + 0x140))(uVar3);
    Memory::free_static((void *)uVar3,false);
  }
  if ((local_58._0_8_ != 0) && (cVar4 = RefCounted::unreference(), cVar4 != '\0')) {
    uVar3 = local_58._0_8_;
    cVar4 = predelete_handler((Object *)local_58._0_8_);
    if (cVar4 != '\0') {
      (**(code **)(*(long *)uVar3 + 0x140))(uVar3);
      Memory::free_static((void *)uVar3,false);
    }
  }
  Callable::~Callable((Callable *)(local_70 + 8));
  CowData<char32_t>::_unref(local_70);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_001014c3:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorContextMenuPlugin::add_context_menu_item_from_shortcut(String const&, Ref<Shortcut> const&,
   Ref<Texture2D> const&) */

void __thiscall
EditorContextMenuPlugin::add_context_menu_item_from_shortcut
          (EditorContextMenuPlugin *this,String *param_1,Ref *param_2,Ref *param_3)

{
  long lVar1;
  long lVar2;
  Object *pOVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined8 uVar13;
  char cVar14;
  ulong uVar15;
  uint uVar16;
  long lVar17;
  ulong uVar18;
  uint uVar19;
  ulong uVar20;
  uint uVar21;
  long in_FS_OFFSET;
  String local_80 [8];
  undefined4 local_78;
  CowData<char32_t> local_70 [8];
  Callable aCStack_68 [8];
  undefined8 local_60;
  undefined1 local_58 [16];
  undefined8 local_48;
  long local_40;
  
  lVar1 = *(long *)(this + 0x1b8);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((lVar1 != 0) && (*(int *)(this + 0x1dc) != 0)) {
    uVar20 = CONCAT44(0,*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x1d8) * 4));
    lVar2 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x1d8) * 8);
    uVar15 = *(long *)param_2 * 0x3ffff - 1;
    uVar15 = (uVar15 ^ uVar15 >> 0x1f) * 0x15;
    uVar15 = (uVar15 ^ uVar15 >> 0xb) * 0x41;
    uVar15 = uVar15 >> 0x16 ^ uVar15;
    uVar18 = uVar15 & 0xffffffff;
    if ((int)uVar15 == 0) {
      uVar18 = 1;
    }
    auVar4._8_8_ = 0;
    auVar4._0_8_ = uVar18 * lVar2;
    auVar8._8_8_ = 0;
    auVar8._0_8_ = uVar20;
    lVar17 = SUB168(auVar4 * auVar8,8);
    uVar19 = *(uint *)(*(long *)(this + 0x1c0) + lVar17 * 4);
    uVar16 = SUB164(auVar4 * auVar8,8);
    if (uVar19 != 0) {
      uVar21 = 0;
      do {
        if ((uVar19 == (uint)uVar18) &&
           (*(long *)param_2 == *(long *)(*(long *)(lVar1 + lVar17 * 8) + 0x10))) {
          lVar1 = *(long *)(lVar1 + (ulong)uVar16 * 8);
          local_78 = 0;
          local_60 = 0;
          _local_70 = (undefined1  [16])0x0;
          local_48 = 0;
          local_58 = (undefined1  [16])0x0;
          if (*(long *)param_1 != 0) {
            CowData<char32_t>::_ref(local_70,(CowData *)param_1);
          }
          Callable::operator=((Callable *)(local_70 + 8),(Callable *)(lVar1 + 0x18));
          uVar13 = local_58._0_8_;
          pOVar3 = *(Object **)param_3;
          if (pOVar3 != (Object *)local_58._0_8_) {
            local_58._0_8_ = pOVar3;
            if ((pOVar3 != (Object *)0x0) && (cVar14 = RefCounted::reference(), cVar14 == '\0')) {
              auVar12._8_8_ = 0;
              auVar12._0_8_ = local_58._8_8_;
              local_58 = auVar12 << 0x40;
            }
            if ((((Object *)uVar13 != (Object *)0x0) &&
                (cVar14 = RefCounted::unreference(), cVar14 != '\0')) &&
               (cVar14 = predelete_handler((Object *)uVar13), cVar14 != '\0')) {
              (**(code **)(*(long *)uVar13 + 0x140))(uVar13);
              Memory::free_static((void *)uVar13,false);
            }
          }
          uVar13 = local_58._8_8_;
          pOVar3 = *(Object **)param_2;
          if (pOVar3 != (Object *)local_58._8_8_) {
            local_58._8_8_ = pOVar3;
            if ((pOVar3 != (Object *)0x0) && (cVar14 = RefCounted::reference(), cVar14 == '\0')) {
              local_58._8_8_ = 0;
            }
            if ((((Object *)uVar13 != (Object *)0x0) &&
                (cVar14 = RefCounted::unreference(), cVar14 != '\0')) &&
               (cVar14 = predelete_handler((Object *)uVar13), cVar14 != '\0')) {
              (**(code **)(*(long *)uVar13 + 0x140))(uVar13);
              Memory::free_static((void *)uVar13,false);
            }
          }
          HashMap<String,EditorContextMenuPlugin::ContextMenuItem,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,EditorContextMenuPlugin::ContextMenuItem>>>
          ::insert(local_80,(ContextMenuItem *)(this + 0x180),SUB81(param_1,0));
          if ((local_58._8_8_ == 0) || (cVar14 = RefCounted::unreference(), cVar14 == '\0')) {
LAB_0010172d:
          }
          else {
            uVar13 = local_58._8_8_;
            cVar14 = predelete_handler((Object *)local_58._8_8_);
            if (cVar14 == '\0') goto LAB_0010172d;
            (**(code **)(*(long *)uVar13 + 0x140))(uVar13);
            Memory::free_static((void *)uVar13,false);
          }
          if ((local_58._0_8_ != 0) && (cVar14 = RefCounted::unreference(), cVar14 != '\0')) {
            uVar13 = local_58._0_8_;
            cVar14 = predelete_handler((Object *)local_58._0_8_);
            if (cVar14 != '\0') {
              (**(code **)(*(long *)uVar13 + 0x140))(uVar13);
              Memory::free_static((void *)uVar13,false);
            }
          }
          Callable::~Callable((Callable *)(local_70 + 8));
          CowData<char32_t>::_unref(local_70);
          goto LAB_00101750;
        }
        uVar21 = uVar21 + 1;
        auVar5._8_8_ = 0;
        auVar5._0_8_ = (ulong)(uVar16 + 1) * lVar2;
        auVar9._8_8_ = 0;
        auVar9._0_8_ = uVar20;
        lVar17 = SUB168(auVar5 * auVar9,8);
        uVar19 = *(uint *)(*(long *)(this + 0x1c0) + lVar17 * 4);
        uVar16 = SUB164(auVar5 * auVar9,8);
      } while ((uVar19 != 0) &&
              (auVar6._8_8_ = 0, auVar6._0_8_ = (ulong)uVar19 * lVar2, auVar10._8_8_ = 0,
              auVar10._0_8_ = uVar20, auVar7._8_8_ = 0,
              auVar7._0_8_ = (ulong)((*(uint *)(hash_table_size_primes +
                                               (ulong)*(uint *)(this + 0x1d8) * 4) + uVar16) -
                                    SUB164(auVar6 * auVar10,8)) * lVar2, auVar11._8_8_ = 0,
              auVar11._0_8_ = uVar20, uVar21 <= SUB164(auVar7 * auVar11,8)));
    }
  }
  _err_print_error("add_context_menu_item_from_shortcut",
                   "editor/plugins/editor_context_menu_plugin.cpp",0x3b,
                   "Parameter \"callback\" is null.",
                   "Shortcut not registered. Use add_menu_shortcut() first.",0,0);
LAB_00101750:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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



/* EditorContextMenuPlugin::_bind_methods() */

void EditorContextMenuPlugin::_bind_methods(void)

{
  CowData<char32_t> *this;
  char cVar1;
  code *pcVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined8 uVar7;
  int *piVar8;
  int iVar9;
  MethodBind *pMVar10;
  long *plVar11;
  int *piVar12;
  uint uVar13;
  long lVar14;
  long lVar15;
  long in_FS_OFFSET;
  long local_1c8;
  long local_1c0;
  undefined8 local_1b8;
  long local_1b0;
  long local_1a8;
  long local_1a0;
  long local_198;
  undefined1 local_190 [16];
  int local_180;
  undefined8 local_178;
  undefined4 local_170;
  long local_168;
  undefined8 local_160;
  undefined1 local_158 [16];
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128 [2];
  int *local_118;
  undefined8 local_110;
  Vector<int> local_108 [8];
  long local_100;
  char *local_f8;
  char *pcStack_f0;
  undefined8 local_e8;
  undefined *local_d8;
  undefined *puStack_d0;
  undefined *local_c8;
  undefined8 local_c0;
  undefined *local_b8;
  char *pcStack_b0;
  undefined *local_a8;
  undefined8 local_a0;
  Variant *local_98;
  char *pcStack_90;
  undefined *local_88;
  undefined8 local_80;
  Variant **local_78;
  undefined1 auStack_70 [16];
  undefined8 local_60;
  undefined1 local_58 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_e8 = 0;
  local_78 = (Variant **)&local_f8;
  local_f8 = "shortcut";
  pcStack_f0 = "callback";
  auStack_70._8_8_ = auStack_70._0_8_;
  auStack_70._0_8_ = &pcStack_f0;
  uVar13 = (uint)(Variant *)&local_78;
  D_METHODP((char *)&local_168,(char ***)"add_menu_shortcut",uVar13);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar10 = create_method_bind<EditorContextMenuPlugin,Ref<Shortcut>const&,Callable_const&>
                      (add_menu_shortcut);
  ClassDB::bind_methodfi(1,pMVar10,false,(MethodDefinition *)&local_168,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  uVar7 = local_158._0_8_;
  if ((long *)local_158._0_8_ != (long *)0x0) {
    LOCK();
    plVar11 = (long *)(local_158._0_8_ + -0x10);
    *plVar11 = *plVar11 + -1;
    UNLOCK();
    if (*plVar11 == 0) {
      if ((long *)local_158._0_8_ == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar14 = *(long *)(local_158._0_8_ + -8);
      lVar15 = 0;
      auVar3._8_8_ = 0;
      auVar3._0_8_ = local_158._8_8_;
      local_158 = auVar3 << 0x40;
      plVar11 = (long *)uVar7;
      if (lVar14 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar11 != 0)) {
            StringName::unref();
          }
          lVar15 = lVar15 + 1;
          plVar11 = plVar11 + 1;
        } while (lVar14 != lVar15);
      }
      Memory::free_static((long *)(uVar7 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_168 != 0)) {
    StringName::unref();
  }
  local_80 = 0;
  local_98 = (Variant *)&_LC62;
  pcStack_90 = "callback";
  auStack_70._8_8_ = &local_88;
  auStack_70._0_8_ = &pcStack_90;
  local_88 = &_LC67;
  local_78 = &local_98;
  D_METHODP((char *)&local_168,(char ***)"add_context_menu_item",uVar13);
  Variant::Variant((Variant *)&local_78,(Object *)0x0);
  local_58 = (undefined1  [16])0x0;
  local_60 = 0;
  local_98 = (Variant *)&local_78;
  pMVar10 = create_method_bind<EditorContextMenuPlugin,String_const&,Callable_const&,Ref<Texture2D>const&>
                      (add_context_menu_item);
  ClassDB::bind_methodfi(1,pMVar10,false,(MethodDefinition *)&local_168,&local_98,1);
  if (Variant::needs_deinit[(int)local_60] == '\0') {
    cVar1 = Variant::needs_deinit[(int)local_78];
  }
  else {
    Variant::_clear_internal();
    cVar1 = Variant::needs_deinit[(int)local_78];
  }
  if (cVar1 != '\0') {
    Variant::_clear_internal();
  }
  uVar7 = local_158._0_8_;
  if ((long *)local_158._0_8_ != (long *)0x0) {
    LOCK();
    plVar11 = (long *)(local_158._0_8_ + -0x10);
    *plVar11 = *plVar11 + -1;
    UNLOCK();
    if (*plVar11 == 0) {
      if ((long *)local_158._0_8_ == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar14 = *(long *)(local_158._0_8_ + -8);
      lVar15 = 0;
      auVar4._8_8_ = 0;
      auVar4._0_8_ = local_158._8_8_;
      local_158 = auVar4 << 0x40;
      plVar11 = (long *)uVar7;
      if (lVar14 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar11 != 0)) {
            StringName::unref();
          }
          lVar15 = lVar15 + 1;
          plVar11 = plVar11 + 1;
        } while (lVar14 != lVar15);
      }
      Memory::free_static((long *)(uVar7 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_168 != 0)) {
    StringName::unref();
  }
  local_a0 = 0;
  local_b8 = &_LC62;
  pcStack_b0 = "shortcut";
  auStack_70._8_8_ = &local_a8;
  auStack_70._0_8_ = &pcStack_b0;
  local_a8 = &_LC67;
  local_78 = (Variant **)&local_b8;
  D_METHODP((char *)&local_168,(char ***)"add_context_menu_item_from_shortcut",uVar13);
  Variant::Variant((Variant *)&local_78,(Object *)0x0);
  local_58 = (undefined1  [16])0x0;
  local_60 = 0;
  local_98 = (Variant *)&local_78;
  pMVar10 = create_method_bind<EditorContextMenuPlugin,String_const&,Ref<Shortcut>const&,Ref<Texture2D>const&>
                      (add_context_menu_item_from_shortcut);
  ClassDB::bind_methodfi(1,pMVar10,false,(MethodDefinition *)&local_168,&local_98,1);
  if (Variant::needs_deinit[(int)local_60] == '\0') {
    cVar1 = Variant::needs_deinit[(int)local_78];
  }
  else {
    Variant::_clear_internal();
    cVar1 = Variant::needs_deinit[(int)local_78];
  }
  if (cVar1 != '\0') {
    Variant::_clear_internal();
  }
  uVar7 = local_158._0_8_;
  if ((long *)local_158._0_8_ != (long *)0x0) {
    LOCK();
    plVar11 = (long *)(local_158._0_8_ + -0x10);
    *plVar11 = *plVar11 + -1;
    UNLOCK();
    if (*plVar11 == 0) {
      if ((long *)local_158._0_8_ == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar14 = *(long *)(local_158._0_8_ + -8);
      lVar15 = 0;
      auVar5._8_8_ = 0;
      auVar5._0_8_ = local_158._8_8_;
      local_158 = auVar5 << 0x40;
      plVar11 = (long *)uVar7;
      if (lVar14 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar11 != 0)) {
            StringName::unref();
          }
          lVar15 = lVar15 + 1;
          plVar11 = plVar11 + 1;
        } while (lVar14 != lVar15);
      }
      Memory::free_static((long *)(uVar7 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_168 != 0)) {
    StringName::unref();
  }
  local_c0 = 0;
  local_d8 = &_LC62;
  puStack_d0 = &_LC63;
  auStack_70._8_8_ = &local_c8;
  auStack_70._0_8_ = &puStack_d0;
  local_c8 = &_LC67;
  local_78 = (Variant **)&local_d8;
  D_METHODP((char *)&local_168,(char ***)"add_context_submenu_item",uVar13);
  Variant::Variant((Variant *)&local_78,(Object *)0x0);
  local_58 = (undefined1  [16])0x0;
  local_60 = 0;
  local_98 = (Variant *)&local_78;
  pMVar10 = create_method_bind<EditorContextMenuPlugin,String_const&,PopupMenu*,Ref<Texture2D>const&>
                      (add_context_submenu_item);
  ClassDB::bind_methodfi(1,pMVar10,false,(MethodDefinition *)&local_168,&local_98,1);
  if (Variant::needs_deinit[(int)local_60] == '\0') {
    cVar1 = Variant::needs_deinit[(int)local_78];
  }
  else {
    Variant::_clear_internal();
    cVar1 = Variant::needs_deinit[(int)local_78];
  }
  if (cVar1 != '\0') {
    Variant::_clear_internal();
  }
  uVar7 = local_158._0_8_;
  if ((long *)local_158._0_8_ != (long *)0x0) {
    LOCK();
    plVar11 = (long *)(local_158._0_8_ + -0x10);
    *plVar11 = *plVar11 + -1;
    UNLOCK();
    if (*plVar11 == 0) {
      if ((long *)local_158._0_8_ == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar14 = *(long *)(local_158._0_8_ + -8);
      lVar15 = 0;
      auVar6._8_8_ = 0;
      auVar6._0_8_ = local_158._8_8_;
      local_158 = auVar6 << 0x40;
      plVar11 = (long *)uVar7;
      if (lVar14 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar11 != 0)) {
            StringName::unref();
          }
          lVar15 = lVar15 + 1;
          plVar11 = plVar11 + 1;
        } while (lVar14 != lVar15);
      }
      Memory::free_static((long *)(uVar7 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_168 != 0)) {
    StringName::unref();
  }
  local_1a0 = 0;
  local_168 = 0;
  String::parse_latin1((String *)&local_168,"paths");
  local_198 = 0;
  if (local_168 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_198,(CowData *)&local_168);
  }
  if (local_1a0 == 0) {
    lVar14 = 1;
  }
  else {
    lVar14 = *(long *)(local_1a0 + -8) + 1;
  }
  iVar9 = CowData<String>::resize<false>((CowData<String> *)&local_1a0,lVar14);
  if (iVar9 == 0) {
    if (local_1a0 == 0) {
      lVar15 = -1;
      lVar14 = 0;
    }
    else {
      lVar14 = *(long *)(local_1a0 + -8);
      lVar15 = lVar14 + -1;
      if (-1 < lVar15) {
        CowData<String>::_copy_on_write((CowData<String> *)&local_1a0);
        this = (CowData<char32_t> *)(local_1a0 + lVar15 * 8);
        if (*(long *)this != local_198) {
          CowData<char32_t>::_ref(this,(CowData *)&local_198);
        }
        goto LAB_00102577;
      }
    }
    _err_print_index_error
              ("set","./core/templates/cowdata.h",0xcf,lVar15,lVar14,"p_index","size()","",false,
               false);
  }
  else {
    _err_print_error("push_back","./core/templates/vector.h",0x142,
                     "Condition \"err\" is true. Returning: true",0,0);
  }
LAB_00102577:
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_198);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_168);
  local_158 = (undefined1  [16])0x0;
  local_168 = 0;
  local_160 = 0;
  local_148 = 0;
  local_140 = 0;
  local_138 = 6;
  local_130 = 1;
  local_128[0] = 0;
  local_118 = (int *)0x0;
  local_110 = 0;
  local_100 = 0;
  String::parse_latin1((String *)&local_168,"_popup_menu");
  local_130 = CONCAT44(local_130._4_4_,8);
  local_1c8 = 0;
  local_1c0 = 0;
  String::parse_latin1((String *)&local_1c0,"");
  local_1b8 = 0;
  local_198 = CONCAT44(local_198._4_4_,0x22);
  local_180 = 0;
  local_178 = 0;
  local_190 = (undefined1  [16])0x0;
  if (local_1c0 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_178,(CowData *)&local_1c0);
    local_170 = 6;
    if (local_180 == 0x11) {
      StringName::StringName((StringName *)&local_1b0,(String *)&local_178,false);
      if (local_190._8_8_ == local_1b0) {
        if ((StringName::configured != '\0') && (local_1b0 != 0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        local_190._8_8_ = local_1b0;
      }
      goto LAB_00102725;
    }
  }
  local_170 = 6;
  StringName::operator=((StringName *)(local_190 + 8),(StringName *)&local_1c8);
LAB_00102725:
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1c0);
  if ((StringName::configured != '\0') && (local_1c8 != 0)) {
    StringName::unref();
  }
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_128,(PropertyInfo *)&local_198);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_198);
  Vector<int>::push_back(local_108,0);
  local_1b0 = 0;
  String::parse_latin1((String *)&local_1b0,"EditorContextMenuPlugin");
  StringName::StringName((StringName *)&local_198,(String *)&local_1b0,false);
  ClassDB::add_virtual_method
            ((StringName *)&local_198,(MethodInfo *)&local_168,true,(Vector *)&local_1a8,false);
  if ((StringName::configured != '\0') && (local_198 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1b0);
  lVar14 = local_100;
  if (local_100 != 0) {
    LOCK();
    plVar11 = (long *)(local_100 + -0x10);
    *plVar11 = *plVar11 + -1;
    UNLOCK();
    if (*plVar11 == 0) {
      local_100 = 0;
      Memory::free_static((void *)(lVar14 + -0x10),false);
    }
  }
  piVar8 = local_118;
  if (local_118 != (int *)0x0) {
    LOCK();
    plVar11 = (long *)(local_118 + -4);
    *plVar11 = *plVar11 + -1;
    UNLOCK();
    if (*plVar11 == 0) {
      if (local_118 == (int *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar14 = *(long *)(local_118 + -2);
      lVar15 = 0;
      local_118 = (int *)0x0;
      piVar12 = piVar8;
      if (lVar14 != 0) {
        do {
          if (Variant::needs_deinit[*piVar12] != '\0') {
            Variant::_clear_internal();
          }
          lVar15 = lVar15 + 1;
          piVar12 = piVar12 + 6;
        } while (lVar14 != lVar15);
      }
      Memory::free_static(piVar8 + -4,false);
    }
  }
  List<PropertyInfo,DefaultAllocator>::~List((List<PropertyInfo,DefaultAllocator> *)local_128);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_160);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_168);
  CowData<String>::_unref((CowData<String> *)&local_1a0);
  StringName::StringName((StringName *)&local_168,"CONTEXT_SLOT_SCENE_TREE",false);
  local_1b0 = 0;
  String::parse_latin1((String *)&local_1b0,"CONTEXT_SLOT_SCENE_TREE");
  __constant_get_enum_name<EditorContextMenuPlugin::ContextMenuSlot>((StringName *)&local_1a8);
  local_1b8 = 0;
  String::parse_latin1((String *)&local_1b8,"EditorContextMenuPlugin");
  StringName::StringName((StringName *)&local_198,(String *)&local_1b8,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_198,(StringName *)&local_1a8,(StringName *)&local_168,0,false);
  if ((StringName::configured != '\0') && (local_198 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1b8);
  if ((StringName::configured != '\0') && (local_1a8 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1b0);
  if ((StringName::configured != '\0') && (local_168 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_168,"CONTEXT_SLOT_FILESYSTEM",false);
  local_1b0 = 0;
  String::parse_latin1((String *)&local_1b0,"CONTEXT_SLOT_FILESYSTEM");
  __constant_get_enum_name<EditorContextMenuPlugin::ContextMenuSlot>((StringName *)&local_1a8);
  local_1b8 = 0;
  String::parse_latin1((String *)&local_1b8,"EditorContextMenuPlugin");
  StringName::StringName((StringName *)&local_198,(String *)&local_1b8,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_198,(StringName *)&local_1a8,(StringName *)&local_168,1,false);
  if ((StringName::configured != '\0') && (local_198 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1b8);
  if ((StringName::configured != '\0') && (local_1a8 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1b0);
  if ((StringName::configured != '\0') && (local_168 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_168,"CONTEXT_SLOT_SCRIPT_EDITOR",false);
  local_1b0 = 0;
  String::parse_latin1((String *)&local_1b0,"CONTEXT_SLOT_SCRIPT_EDITOR");
  __constant_get_enum_name<EditorContextMenuPlugin::ContextMenuSlot>((StringName *)&local_1a8);
  local_1b8 = 0;
  String::parse_latin1((String *)&local_1b8,"EditorContextMenuPlugin");
  StringName::StringName((StringName *)&local_198,(String *)&local_1b8,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_198,(StringName *)&local_1a8,(StringName *)&local_168,2,false);
  if ((StringName::configured != '\0') && (local_198 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1b8);
  if ((StringName::configured != '\0') && (local_1a8 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1b0);
  if ((StringName::configured != '\0') && (local_168 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_168,"CONTEXT_SLOT_FILESYSTEM_CREATE",false);
  local_1b0 = 0;
  String::parse_latin1((String *)&local_1b0,"CONTEXT_SLOT_FILESYSTEM_CREATE");
  __constant_get_enum_name<EditorContextMenuPlugin::ContextMenuSlot>((StringName *)&local_1a8);
  local_1b8 = 0;
  String::parse_latin1((String *)&local_1b8,"EditorContextMenuPlugin");
  StringName::StringName((StringName *)&local_198,(String *)&local_1b8,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_198,(StringName *)&local_1a8,(StringName *)&local_168,3,false);
  if ((StringName::configured != '\0') && (local_198 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1b8);
  if ((StringName::configured != '\0') && (local_1a8 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1b0);
  if ((StringName::configured != '\0') && (local_168 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_168,"CONTEXT_SLOT_SCRIPT_EDITOR_CODE",false);
  local_1b0 = 0;
  String::parse_latin1((String *)&local_1b0,"CONTEXT_SLOT_SCRIPT_EDITOR_CODE");
  __constant_get_enum_name<EditorContextMenuPlugin::ContextMenuSlot>((StringName *)&local_1a8);
  local_1b8 = 0;
  String::parse_latin1((String *)&local_1b8,"EditorContextMenuPlugin");
  StringName::StringName((StringName *)&local_198,(String *)&local_1b8,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_198,(StringName *)&local_1a8,(StringName *)&local_168,4,false);
  if ((StringName::configured != '\0') && (local_198 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1b8);
  if ((StringName::configured != '\0') && (local_1a8 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1b0);
  if ((StringName::configured != '\0') && (local_168 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_168,"CONTEXT_SLOT_SCENE_TABS",false);
  local_1b0 = 0;
  String::parse_latin1((String *)&local_1b0,"CONTEXT_SLOT_SCENE_TABS");
  __constant_get_enum_name<EditorContextMenuPlugin::ContextMenuSlot>((StringName *)&local_1a8);
  local_1b8 = 0;
  String::parse_latin1((String *)&local_1b8,"EditorContextMenuPlugin");
  StringName::StringName((StringName *)&local_198,(String *)&local_1b8,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_198,(StringName *)&local_1a8,(StringName *)&local_168,5,false);
  if ((StringName::configured != '\0') && (local_198 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1b8);
  if ((StringName::configured != '\0') && (local_1a8 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1b0);
  if ((StringName::configured != '\0') && (local_168 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_168,"CONTEXT_SLOT_2D_EDITOR",false);
  local_1b0 = 0;
  String::parse_latin1((String *)&local_1b0,"CONTEXT_SLOT_2D_EDITOR");
  __constant_get_enum_name<EditorContextMenuPlugin::ContextMenuSlot>((StringName *)&local_1a8);
  local_1b8 = 0;
  String::parse_latin1((String *)&local_1b8,"EditorContextMenuPlugin");
  StringName::StringName((StringName *)&local_198,(String *)&local_1b8,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_198,(StringName *)&local_1a8,(StringName *)&local_168,6,false);
  if ((StringName::configured != '\0') && (local_198 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1b8);
  if ((StringName::configured != '\0') && (local_1a8 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1b0);
  if ((StringName::configured != '\0') && (local_168 != 0)) {
    StringName::unref();
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* EditorContextMenuPlugin::get_options(Vector<String> const&) */

void __thiscall EditorContextMenuPlugin::get_options(EditorContextMenuPlugin *this,Vector *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  code *pcVar6;
  long lVar7;
  int *piVar8;
  long in_FS_OFFSET;
  undefined8 local_148;
  long local_140;
  Vector local_138 [8];
  undefined8 local_130;
  GetTypeInfo<Vector<String>,void> local_128 [8];
  long local_120;
  int local_f8 [2];
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  CowData<char32_t> local_e8 [8];
  long lStack_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8 [2];
  int *local_a8;
  undefined8 local_a0;
  Vector<int> local_98 [8];
  long local_90;
  Variant *local_80;
  int local_78 [8];
  int *local_58 [3];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_130 = 0;
  CowData<String>::_ref((CowData<String> *)&local_130,(CowData *)(param_1 + 8));
  plVar5 = *(long **)(this + 0x98);
  if (plVar5 != (long *)0x0) {
    local_f8[0] = 0;
    local_f8[1] = 0;
    uStack_f0 = 0;
    Variant::Variant((Variant *)local_78,local_138);
    local_80 = (Variant *)local_78;
    (**(code **)(*plVar5 + 0x60))(local_58,plVar5,this + 0x1e0,&local_80,1,local_f8);
    if (Variant::needs_deinit[(int)local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (local_f8[0] == 0) {
      if (Variant::needs_deinit[local_78[0]] != '\0') {
        Variant::_clear_internal();
      }
      goto LAB_00103175;
    }
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
  }
  if ((*(long *)(this + 8) != 0) && (this[0x1e8] == (EditorContextMenuPlugin)0x0)) {
    local_f8[0] = 0;
    local_f8[1] = 0;
    _local_e8 = (undefined1  [16])0x0;
    uStack_f0 = 0;
    uStack_ec = 0;
    local_d8 = 0;
    local_d0 = 0;
    local_c8 = 6;
    local_c0 = 1;
    local_b8[0] = 0;
    local_a8 = (int *)0x0;
    local_a0 = 0;
    local_90 = 0;
    String::parse_latin1((String *)local_f8,"_popup_menu");
    local_c0 = CONCAT44(local_c0._4_4_,8);
    GetTypeInfo<Vector<String>,void>::get_class_info(local_128);
    List<PropertyInfo,DefaultAllocator>::push_back
              ((List<PropertyInfo,DefaultAllocator> *)local_b8,(PropertyInfo *)local_128);
    PropertyInfo::~PropertyInfo((PropertyInfo *)local_128);
    Vector<int>::push_back(local_98,0);
    uVar2 = MethodInfo::get_compatibility_hash();
    lVar4 = *(long *)(this + 8);
    *(undefined8 *)(this + 0x1f0) = 0;
    pcVar6 = *(code **)(lVar4 + 0xd8);
    if (((pcVar6 == (code *)0x0) || (*(long *)(lVar4 + 0xe0) == 0)) &&
       (pcVar6 = *(code **)(lVar4 + 0xd0), pcVar6 == (code *)0x0)) {
      local_148 = 0;
      String::parse_latin1((String *)&local_148,"EditorContextMenuPlugin");
      StringName::StringName((StringName *)&local_140,(String *)&local_148,false);
      ClassDB::get_virtual_method_compatibility_hashes
                ((StringName *)local_128,(StringName *)&local_140);
      lVar4 = local_120;
      if (local_120 == 0) {
        lVar7 = 0;
        if (StringName::configured != '\0') goto LAB_00103547;
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_148);
LAB_00103566:
        lVar4 = *(long *)(this + 8);
        pcVar6 = *(code **)(lVar4 + 200);
        if (((pcVar6 == (code *)0x0) || (*(long *)(lVar4 + 0xe0) == 0)) &&
           (pcVar6 = *(code **)(lVar4 + 0xc0), pcVar6 == (code *)0x0)) goto LAB_00103394;
        uVar3 = (*pcVar6)(*(undefined8 *)(lVar4 + 0xa0));
        *(undefined8 *)(this + 0x1f0) = uVar3;
      }
      else {
        lVar7 = *(long *)(local_120 + -8);
        LOCK();
        plVar5 = (long *)(local_120 + -0x10);
        *plVar5 = *plVar5 + -1;
        UNLOCK();
        if (*plVar5 == 0) {
          local_120 = 0;
          Memory::free_static((void *)(lVar4 + -0x10),false);
        }
        if (StringName::configured != '\0') {
LAB_00103547:
          if (local_140 != 0) {
            StringName::unref();
          }
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_148);
        if (lVar7 == 0) goto LAB_00103566;
      }
      lVar4 = *(long *)(this + 8);
    }
    else {
      uVar3 = (*pcVar6)(*(undefined8 *)(lVar4 + 0xa0),this + 0x1e0,uVar2);
      *(undefined8 *)(this + 0x1f0) = uVar3;
      lVar4 = *(long *)(this + 8);
    }
LAB_00103394:
    if (*(char *)(lVar4 + 0x29) != '\0') {
      plVar5 = (long *)operator_new(0x18,"");
      *plVar5 = (long)(this + 0x1f0);
      plVar5[1] = (long)(this + 0x1e8);
      plVar5[2] = *(long *)(this + 0x168);
      *(long **)(this + 0x168) = plVar5;
    }
    lVar4 = local_90;
    this[0x1e8] = (EditorContextMenuPlugin)0x1;
    if (local_90 != 0) {
      LOCK();
      plVar5 = (long *)(local_90 + -0x10);
      *plVar5 = *plVar5 + -1;
      UNLOCK();
      if (*plVar5 == 0) {
        local_90 = 0;
        Memory::free_static((void *)(lVar4 + -0x10),false);
      }
    }
    piVar1 = local_a8;
    if (local_a8 != (int *)0x0) {
      LOCK();
      plVar5 = (long *)(local_a8 + -4);
      *plVar5 = *plVar5 + -1;
      UNLOCK();
      if (*plVar5 == 0) {
        if (local_a8 == (int *)0x0) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)invalidInstructionException();
          (*pcVar6)();
        }
        lVar4 = *(long *)(local_a8 + -2);
        lVar7 = 0;
        local_a8 = (int *)0x0;
        piVar8 = piVar1;
        if (lVar4 != 0) {
          do {
            if (Variant::needs_deinit[*piVar8] != '\0') {
              Variant::_clear_internal();
            }
            lVar7 = lVar7 + 1;
            piVar8 = piVar8 + 6;
          } while (lVar4 != lVar7);
        }
        Memory::free_static(piVar1 + -4,false);
      }
    }
    List<PropertyInfo,DefaultAllocator>::~List((List<PropertyInfo,DefaultAllocator> *)local_b8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
    if ((StringName::configured != '\0') && (lStack_e0 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref(local_e8);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_f8);
  }
  if (*(long *)(this + 0x1f0) != 0) {
    uStack_f0 = 0;
    uStack_ec = 0;
    CowData<String>::_ref((CowData<String> *)&uStack_f0,(CowData *)&local_130);
    local_58[0] = local_f8;
    if (*(code **)(*(long *)(this + 8) + 0xe0) == (code *)0x0) {
      (**(code **)(this + 0x1f0))(*(undefined8 *)(this + 0x10),local_58,0);
    }
    else {
      (**(code **)(*(long *)(this + 8) + 0xe0))
                (*(undefined8 *)(this + 0x10),this + 0x1e0,*(undefined8 *)(this + 0x1f0),local_58,0)
      ;
    }
    CowData<String>::_unref((CowData<String> *)&uStack_f0);
  }
LAB_00103175:
  CowData<String>::_unref((CowData<String> *)&local_130);
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
  return (uint)CONCAT71(0x10c6,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10c6,(undefined4 *)param_1 == &get_class_ptr_static()::ptr);
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



/* EditorContextMenuPlugin::is_class_ptr(void*) const */

uint __thiscall EditorContextMenuPlugin::is_class_ptr(EditorContextMenuPlugin *this,void *param_1)

{
  return (uint)CONCAT71(0x10c6,(undefined4 *)param_1 == &RefCounted::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10c6,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10c6,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* EditorContextMenuPlugin::_getv(StringName const&, Variant&) const */

undefined8 EditorContextMenuPlugin::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* EditorContextMenuPlugin::_setv(StringName const&, Variant const&) */

undefined8 EditorContextMenuPlugin::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* EditorContextMenuPlugin::_validate_propertyv(PropertyInfo&) const */

void EditorContextMenuPlugin::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* EditorContextMenuPlugin::_property_can_revertv(StringName const&) const */

undefined8 EditorContextMenuPlugin::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* EditorContextMenuPlugin::_property_get_revertv(StringName const&, Variant&) const */

undefined8 EditorContextMenuPlugin::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* EditorContextMenuPlugin::_notificationv(int, bool) */

void EditorContextMenuPlugin::_notificationv(int param_1,bool param_2)

{
  return;
}



/* EditorContextMenuPluginManager::is_class_ptr(void*) const */

uint __thiscall
EditorContextMenuPluginManager::is_class_ptr(EditorContextMenuPluginManager *this,void *param_1)

{
  return (uint)CONCAT71(0x10c6,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10c6,(undefined4 *)param_1 == &get_class_ptr_static()::ptr);
}



/* EditorContextMenuPluginManager::_getv(StringName const&, Variant&) const */

undefined8 EditorContextMenuPluginManager::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* EditorContextMenuPluginManager::_setv(StringName const&, Variant const&) */

undefined8 EditorContextMenuPluginManager::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* EditorContextMenuPluginManager::_validate_propertyv(PropertyInfo&) const */

void EditorContextMenuPluginManager::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* EditorContextMenuPluginManager::_property_can_revertv(StringName const&) const */

undefined8 EditorContextMenuPluginManager::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* EditorContextMenuPluginManager::_property_get_revertv(StringName const&, Variant&) const */

undefined8
EditorContextMenuPluginManager::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* EditorContextMenuPluginManager::_notificationv(int, bool) */

void EditorContextMenuPluginManager::_notificationv(int param_1,bool param_2)

{
  return;
}



/* MethodBindT<String const&, PopupMenu*, Ref<Texture2D> const&>::get_argument_meta(int) const */

undefined8
MethodBindT<String_const&,PopupMenu*,Ref<Texture2D>const&>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindT<String const&, Ref<Shortcut> const&, Ref<Texture2D> const&>::get_argument_meta(int)
   const */

undefined8
MethodBindT<String_const&,Ref<Shortcut>const&,Ref<Texture2D>const&>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindT<String const&, Callable const&, Ref<Texture2D> const&>::get_argument_meta(int) const
    */

undefined8
MethodBindT<String_const&,Callable_const&,Ref<Texture2D>const&>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindT<Ref<Shortcut> const&, Callable const&>::_gen_argument_type(int) const */

int __thiscall
MethodBindT<Ref<Shortcut>const&,Callable_const&>::_gen_argument_type
          (MethodBindT<Ref<Shortcut>const&,Callable_const&> *this,int param_1)

{
  int iVar1;
  
  iVar1 = 0x19 - (uint)(param_1 == 0);
  if (1 < (uint)param_1) {
    iVar1 = 0;
  }
  return iVar1;
}



/* MethodBindT<Ref<Shortcut> const&, Callable const&>::get_argument_meta(int) const */

undefined8 MethodBindT<Ref<Shortcut>const&,Callable_const&>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindT<Ref<Shortcut> const&, Callable const&>::~MethodBindT() */

void __thiscall
MethodBindT<Ref<Shortcut>const&,Callable_const&>::~MethodBindT
          (MethodBindT<Ref<Shortcut>const&,Callable_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010c488;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<Ref<Shortcut> const&, Callable const&>::~MethodBindT() */

void __thiscall
MethodBindT<Ref<Shortcut>const&,Callable_const&>::~MethodBindT
          (MethodBindT<Ref<Shortcut>const&,Callable_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010c488;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<String const&, Callable const&, Ref<Texture2D> const&>::~MethodBindT() */

void __thiscall
MethodBindT<String_const&,Callable_const&,Ref<Texture2D>const&>::~MethodBindT
          (MethodBindT<String_const&,Callable_const&,Ref<Texture2D>const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010c4e8;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<String const&, Callable const&, Ref<Texture2D> const&>::~MethodBindT() */

void __thiscall
MethodBindT<String_const&,Callable_const&,Ref<Texture2D>const&>::~MethodBindT
          (MethodBindT<String_const&,Callable_const&,Ref<Texture2D>const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010c4e8;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<String const&, Ref<Shortcut> const&, Ref<Texture2D> const&>::~MethodBindT() */

void __thiscall
MethodBindT<String_const&,Ref<Shortcut>const&,Ref<Texture2D>const&>::~MethodBindT
          (MethodBindT<String_const&,Ref<Shortcut>const&,Ref<Texture2D>const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010c548;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<String const&, Ref<Shortcut> const&, Ref<Texture2D> const&>::~MethodBindT() */

void __thiscall
MethodBindT<String_const&,Ref<Shortcut>const&,Ref<Texture2D>const&>::~MethodBindT
          (MethodBindT<String_const&,Ref<Shortcut>const&,Ref<Texture2D>const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010c548;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<String const&, PopupMenu*, Ref<Texture2D> const&>::~MethodBindT() */

void __thiscall
MethodBindT<String_const&,PopupMenu*,Ref<Texture2D>const&>::~MethodBindT
          (MethodBindT<String_const&,PopupMenu*,Ref<Texture2D>const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010c5a8;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<String const&, PopupMenu*, Ref<Texture2D> const&>::~MethodBindT() */

void __thiscall
MethodBindT<String_const&,PopupMenu*,Ref<Texture2D>const&>::~MethodBindT
          (MethodBindT<String_const&,PopupMenu*,Ref<Texture2D>const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010c5a8;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* RefCounted::~RefCounted() */

void __thiscall RefCounted::~RefCounted(RefCounted *this)

{
  *(undefined ***)this = &PTR__initialize_classv_0010c060;
  Object::~Object((Object *)this);
  return;
}



/* RefCounted::~RefCounted() */

void __thiscall RefCounted::~RefCounted(RefCounted *this)

{
  *(undefined ***)this = &PTR__initialize_classv_0010c060;
  Object::~Object((Object *)this);
  operator_delete(this,0x180);
  return;
}



/* MethodBindT<String const&, Ref<Shortcut> const&, Ref<Texture2D> const&>::_gen_argument_type(int)
   const */

int __thiscall
MethodBindT<String_const&,Ref<Shortcut>const&,Ref<Texture2D>const&>::_gen_argument_type
          (MethodBindT<String_const&,Ref<Shortcut>const&,Ref<Texture2D>const&> *this,int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if ((uint)param_1 < 3) {
    iVar1 = (-(uint)(param_1 == 0) & 0xffffffec) + 0x18;
  }
  return iVar1;
}



/* MethodBindT<String const&, Callable const&, Ref<Texture2D> const&>::_gen_argument_type(int) const
    */

char __thiscall
MethodBindT<String_const&,Callable_const&,Ref<Texture2D>const&>::_gen_argument_type
          (MethodBindT<String_const&,Callable_const&,Ref<Texture2D>const&> *this,int param_1)

{
  char cVar1;
  
  cVar1 = '\0';
  if (((uint)param_1 < 3) && (cVar1 = '\x04', param_1 != 0)) {
    cVar1 = (param_1 == 1) + '\x18';
  }
  return cVar1;
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



/* EditorContextMenuPlugin::_bind_methods() [clone .cold] */

void EditorContextMenuPlugin::_bind_methods(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* EditorContextMenuPlugin::get_options(Vector<String> const&) [clone .cold] */

void EditorContextMenuPlugin::get_options(Vector *param_1)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* MethodBindT<String const&, PopupMenu*, Ref<Texture2D> const&>::_gen_argument_type(int) const */

int __thiscall
MethodBindT<String_const&,PopupMenu*,Ref<Texture2D>const&>::_gen_argument_type
          (MethodBindT<String_const&,PopupMenu*,Ref<Texture2D>const&> *this,int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if ((uint)param_1 < 3) {
    iVar1 = (-(uint)(param_1 == 0) & 0xffffffec) + 0x18;
  }
  return iVar1;
}



/* EditorContextMenuPluginManager::~EditorContextMenuPluginManager() */

void __thiscall
EditorContextMenuPluginManager::~EditorContextMenuPluginManager
          (EditorContextMenuPluginManager *this)

{
  long *plVar1;
  Object *pOVar2;
  char cVar3;
  long lVar4;
  void *pvVar5;
  
  *(undefined ***)this = &PTR__initialize_classv_0010c1c0;
  pvVar5 = *(void **)(this + 0x180);
  if (pvVar5 != (void *)0x0) {
    if (*(int *)(this + 0x178) != 0) {
      lVar4 = 0;
      do {
        plVar1 = (long *)((long)pvVar5 + lVar4 * 8);
        if (*plVar1 != 0) {
          cVar3 = RefCounted::unreference();
          if (cVar3 != '\0') {
            pOVar2 = (Object *)*plVar1;
            cVar3 = predelete_handler(pOVar2);
            if (cVar3 != '\0') {
              (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
              Memory::free_static(pOVar2,false);
            }
          }
          pvVar5 = *(void **)(this + 0x180);
        }
        lVar4 = lVar4 + 1;
      } while ((uint)lVar4 < *(uint *)(this + 0x178));
      *(undefined4 *)(this + 0x178) = 0;
      if (pvVar5 == (void *)0x0) goto LAB_00103e17;
    }
    Memory::free_static(pvVar5,false);
  }
LAB_00103e17:
  Object::~Object((Object *)this);
  return;
}



/* EditorContextMenuPluginManager::~EditorContextMenuPluginManager() */

void __thiscall
EditorContextMenuPluginManager::~EditorContextMenuPluginManager
          (EditorContextMenuPluginManager *this)

{
  ~EditorContextMenuPluginManager(this);
  operator_delete(this,0x188);
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
LAB_00103e93:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00103e93;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"RefCounted");
      goto LAB_00103efe;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"RefCounted");
LAB_00103efe:
  return &_get_class_namev()::_class_name_static;
}



/* EditorContextMenuPluginManager::_get_class_namev() const */

undefined8 * EditorContextMenuPluginManager::_get_class_namev(void)

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
LAB_00103f93:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00103f93;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,
                 "EditorContextMenuPluginManager");
      goto LAB_00103ffe;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"EditorContextMenuPluginManager")
  ;
LAB_00103ffe:
  return &_get_class_namev()::_class_name_static;
}



/* EditorContextMenuPlugin::_get_class_namev() const */

undefined8 * EditorContextMenuPlugin::_get_class_namev(void)

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
LAB_00104083:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00104083;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"EditorContextMenuPlugin");
      goto LAB_001040ee;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"EditorContextMenuPlugin");
LAB_001040ee:
  return &_get_class_namev()::_class_name_static;
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
/* HashMap<Ref<Shortcut>, Callable, HashMapHasherDefault, HashMapComparatorDefault<Ref<Shortcut> >,
   DefaultTypedAllocator<HashMapElement<Ref<Shortcut>, Callable> > >::insert(Ref<Shortcut> const&,
   Callable const&, bool) */

Ref * HashMap<Ref<Shortcut>,Callable,HashMapHasherDefault,HashMapComparatorDefault<Ref<Shortcut>>,DefaultTypedAllocator<HashMapElement<Ref<Shortcut>,Callable>>>
      ::insert(Ref *param_1,Callable *param_2,bool param_3)

{
  uint *puVar1;
  undefined8 *puVar2;
  long lVar3;
  void *pvVar4;
  void *__s;
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
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  char cVar29;
  uint uVar30;
  uint uVar31;
  ulong uVar32;
  undefined8 uVar33;
  void *__s_00;
  long *plVar34;
  Callable *in_RCX;
  int iVar35;
  undefined7 in_register_00000011;
  long *plVar36;
  long lVar37;
  long lVar38;
  long lVar39;
  uint uVar40;
  undefined8 uVar41;
  Object *pOVar42;
  ulong uVar43;
  uint uVar44;
  char in_R8B;
  uint uVar45;
  uint uVar46;
  ulong uVar47;
  long *plVar48;
  long in_FS_OFFSET;
  void *local_a8;
  Object *local_58;
  Callable local_50 [16];
  long local_40;
  
  plVar36 = (long *)CONCAT71(in_register_00000011,param_3);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar40 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_2 + 0x28) * 4);
  local_a8 = *(void **)(param_2 + 8);
  if (local_a8 == (void *)0x0) {
    uVar47 = (ulong)uVar40;
    uVar32 = uVar47 * 4;
    uVar43 = uVar47 * 8;
    uVar33 = Memory::alloc_static(uVar32,false);
    *(undefined8 *)(param_2 + 0x10) = uVar33;
    local_a8 = (void *)Memory::alloc_static(uVar43,false);
    *(void **)(param_2 + 8) = local_a8;
    if (uVar40 != 0) {
      pvVar4 = *(void **)(param_2 + 0x10);
      if ((pvVar4 < (void *)((long)local_a8 + uVar43)) &&
         (local_a8 < (void *)((long)pvVar4 + uVar32))) {
        uVar32 = 0;
        do {
          *(undefined4 *)((long)pvVar4 + uVar32 * 4) = 0;
          *(undefined8 *)((long)local_a8 + uVar32 * 8) = 0;
          uVar32 = uVar32 + 1;
        } while (uVar47 != uVar32);
        goto LAB_00104601;
      }
      memset(pvVar4,0,uVar32);
      memset(local_a8,0,uVar43);
      pOVar42 = (Object *)*plVar36;
      iVar35 = *(int *)(param_2 + 0x2c);
      goto LAB_00104612;
    }
    pOVar42 = (Object *)*plVar36;
    iVar35 = *(int *)(param_2 + 0x2c);
    if (local_a8 != (void *)0x0) goto LAB_00104612;
  }
  else {
LAB_00104601:
    pOVar42 = (Object *)*plVar36;
    iVar35 = *(int *)(param_2 + 0x2c);
LAB_00104612:
    if (iVar35 != 0) {
      uVar43 = CONCAT44(0,*(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_2 + 0x28) * 4));
      lVar3 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(param_2 + 0x28) * 8);
      uVar32 = (long)pOVar42 * 0x3ffff - 1;
      uVar32 = (uVar32 ^ uVar32 >> 0x1f) * 0x15;
      uVar32 = (uVar32 ^ uVar32 >> 0xb) * 0x41;
      uVar32 = uVar32 >> 0x16 ^ uVar32;
      uVar47 = uVar32 & 0xffffffff;
      if ((int)uVar32 == 0) {
        uVar47 = 1;
      }
      uVar46 = 0;
      auVar5._8_8_ = 0;
      auVar5._0_8_ = uVar47 * lVar3;
      auVar17._8_8_ = 0;
      auVar17._0_8_ = uVar43;
      lVar37 = SUB168(auVar5 * auVar17,8);
      uVar44 = *(uint *)(*(long *)(param_2 + 0x10) + lVar37 * 4);
      uVar31 = SUB164(auVar5 * auVar17,8);
      if (uVar44 != 0) {
        do {
          if ((uVar44 == (uint)uVar47) &&
             (*(Object **)(*(long *)((long)local_a8 + lVar37 * 8) + 0x10) == pOVar42)) {
            Callable::operator=((Callable *)(*(long *)((long)local_a8 + (ulong)uVar31 * 8) + 0x18),
                                in_RCX);
            plVar34 = *(long **)(*(long *)(param_2 + 8) + (ulong)uVar31 * 8);
            goto LAB_00104b68;
          }
          uVar46 = uVar46 + 1;
          auVar6._8_8_ = 0;
          auVar6._0_8_ = (ulong)(uVar31 + 1) * lVar3;
          auVar18._8_8_ = 0;
          auVar18._0_8_ = uVar43;
          lVar37 = SUB168(auVar6 * auVar18,8);
          uVar44 = *(uint *)(*(long *)(param_2 + 0x10) + lVar37 * 4);
          uVar31 = SUB164(auVar6 * auVar18,8);
        } while ((uVar44 != 0) &&
                (auVar7._8_8_ = 0, auVar7._0_8_ = (ulong)uVar44 * lVar3, auVar19._8_8_ = 0,
                auVar19._0_8_ = uVar43, auVar8._8_8_ = 0,
                auVar8._0_8_ = (ulong)((*(uint *)(hash_table_size_primes +
                                                 (ulong)*(uint *)(param_2 + 0x28) * 4) + uVar31) -
                                      SUB164(auVar7 * auVar19,8)) * lVar3, auVar20._8_8_ = 0,
                auVar20._0_8_ = uVar43, uVar46 <= SUB164(auVar8 * auVar20,8)));
      }
    }
  }
  if ((float)uVar40 * __LC22 < (float)(iVar35 + 1)) {
    uVar40 = *(uint *)(param_2 + 0x28);
    if (uVar40 == 0x1c) {
      plVar34 = (long *)0x0;
      _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      goto LAB_00104b68;
    }
    uVar32 = (ulong)(uVar40 + 1);
    uVar44 = *(uint *)(hash_table_size_primes + (ulong)uVar40 * 4);
    *(undefined4 *)(param_2 + 0x2c) = 0;
    if (uVar40 + 1 < 2) {
      uVar32 = 2;
    }
    uVar40 = *(uint *)(hash_table_size_primes + uVar32 * 4);
    *(int *)(param_2 + 0x28) = (int)uVar32;
    pvVar4 = *(void **)(param_2 + 0x10);
    uVar47 = (ulong)uVar40;
    uVar32 = uVar47 * 4;
    uVar43 = uVar47 * 8;
    uVar33 = Memory::alloc_static(uVar32,false);
    *(undefined8 *)(param_2 + 0x10) = uVar33;
    __s_00 = (void *)Memory::alloc_static(uVar43,false);
    *(void **)(param_2 + 8) = __s_00;
    if (uVar40 != 0) {
      __s = *(void **)(param_2 + 0x10);
      if ((__s < (void *)((long)__s_00 + uVar43)) && (__s_00 < (void *)((long)__s + uVar32))) {
        uVar32 = 0;
        do {
          *(undefined4 *)((long)__s + uVar32 * 4) = 0;
          *(undefined8 *)((long)__s_00 + uVar32 * 8) = 0;
          uVar32 = uVar32 + 1;
        } while (uVar47 != uVar32);
      }
      else {
        memset(__s,0,uVar32);
        memset(__s_00,0,uVar43);
      }
    }
    if (uVar44 == 0) {
      pOVar42 = (Object *)*plVar36;
    }
    else {
      uVar32 = 0;
      do {
        uVar40 = *(uint *)((long)pvVar4 + uVar32 * 4);
        if (uVar40 != 0) {
          uVar45 = 0;
          lVar3 = *(long *)(param_2 + 0x10);
          uVar31 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_2 + 0x28) * 4);
          uVar43 = CONCAT44(0,uVar31);
          lVar37 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(param_2 + 0x28) * 8);
          auVar9._8_8_ = 0;
          auVar9._0_8_ = (ulong)uVar40 * lVar37;
          auVar21._8_8_ = 0;
          auVar21._0_8_ = uVar43;
          lVar38 = SUB168(auVar9 * auVar21,8);
          puVar1 = (uint *)(lVar3 + lVar38 * 4);
          iVar35 = SUB164(auVar9 * auVar21,8);
          uVar46 = *puVar1;
          uVar33 = *(undefined8 *)((long)local_a8 + uVar32 * 8);
          while (uVar46 != 0) {
            auVar10._8_8_ = 0;
            auVar10._0_8_ = (ulong)uVar46 * lVar37;
            auVar22._8_8_ = 0;
            auVar22._0_8_ = uVar43;
            auVar11._8_8_ = 0;
            auVar11._0_8_ = (ulong)((uVar31 + iVar35) - SUB164(auVar10 * auVar22,8)) * lVar37;
            auVar23._8_8_ = 0;
            auVar23._0_8_ = uVar43;
            uVar30 = SUB164(auVar11 * auVar23,8);
            uVar41 = uVar33;
            if (uVar30 < uVar45) {
              *puVar1 = uVar40;
              puVar2 = (undefined8 *)((long)__s_00 + lVar38 * 8);
              uVar41 = *puVar2;
              *puVar2 = uVar33;
              uVar40 = uVar46;
              uVar45 = uVar30;
            }
            uVar45 = uVar45 + 1;
            auVar12._8_8_ = 0;
            auVar12._0_8_ = (ulong)(iVar35 + 1) * lVar37;
            auVar24._8_8_ = 0;
            auVar24._0_8_ = uVar43;
            lVar38 = SUB168(auVar12 * auVar24,8);
            puVar1 = (uint *)(lVar3 + lVar38 * 4);
            iVar35 = SUB164(auVar12 * auVar24,8);
            uVar33 = uVar41;
            uVar46 = *puVar1;
          }
          *(undefined8 *)((long)__s_00 + lVar38 * 8) = uVar33;
          *puVar1 = uVar40;
          *(int *)(param_2 + 0x2c) = *(int *)(param_2 + 0x2c) + 1;
        }
        uVar32 = uVar32 + 1;
      } while (uVar32 != uVar44);
      Memory::free_static(local_a8,false);
      Memory::free_static(pvVar4,false);
      pOVar42 = (Object *)*plVar36;
    }
  }
  local_58 = (Object *)0x0;
  if ((pOVar42 != (Object *)0x0) &&
     (cVar29 = RefCounted::reference(), local_58 = pOVar42, cVar29 == '\0')) {
    local_58 = (Object *)0x0;
  }
  Callable::Callable(local_50,in_RCX);
  plVar34 = (long *)operator_new(0x28,"");
  plVar34[2] = 0;
  *plVar34 = 0;
  plVar34[1] = 0;
  if (local_58 != (Object *)0x0) {
    plVar34[2] = (long)local_58;
    cVar29 = RefCounted::reference();
    if (cVar29 == '\0') {
      plVar34[2] = 0;
    }
  }
  Callable::Callable((Callable *)(plVar34 + 3),local_50);
  Callable::~Callable(local_50);
  if (((local_58 != (Object *)0x0) && (cVar29 = RefCounted::unreference(), cVar29 != '\0')) &&
     (cVar29 = predelete_handler(local_58), cVar29 != '\0')) {
    (**(code **)(*(long *)local_58 + 0x140))(local_58);
    Memory::free_static(local_58,false);
  }
  puVar2 = *(undefined8 **)(param_2 + 0x20);
  if (puVar2 == (undefined8 *)0x0) {
    *(long **)(param_2 + 0x18) = plVar34;
    *(long **)(param_2 + 0x20) = plVar34;
  }
  else if (in_R8B == '\0') {
    *puVar2 = plVar34;
    plVar34[1] = (long)puVar2;
    *(long **)(param_2 + 0x20) = plVar34;
  }
  else {
    lVar3 = *(long *)(param_2 + 0x18);
    *(long **)(lVar3 + 8) = plVar34;
    *plVar34 = lVar3;
    *(long **)(param_2 + 0x18) = plVar34;
  }
  lVar3 = *(long *)(param_2 + 0x10);
  uVar32 = *plVar36 * 0x3ffff - 1;
  uVar32 = (uVar32 ^ uVar32 >> 0x1f) * 0x15;
  uVar32 = (uVar32 ^ uVar32 >> 0xb) * 0x41;
  uVar32 = uVar32 >> 0x16 ^ uVar32;
  uVar43 = uVar32 & 0xffffffff;
  if ((int)uVar32 == 0) {
    uVar43 = 1;
  }
  uVar46 = 0;
  uVar40 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_2 + 0x28) * 4);
  uVar32 = CONCAT44(0,uVar40);
  uVar31 = (uint)uVar43;
  lVar37 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(param_2 + 0x28) * 8);
  auVar13._8_8_ = 0;
  auVar13._0_8_ = uVar43 * lVar37;
  auVar25._8_8_ = 0;
  auVar25._0_8_ = uVar32;
  lVar39 = SUB168(auVar13 * auVar25,8);
  lVar38 = *(long *)(param_2 + 8);
  puVar1 = (uint *)(lVar3 + lVar39 * 4);
  iVar35 = SUB164(auVar13 * auVar25,8);
  uVar44 = *puVar1;
  plVar36 = plVar34;
  while (uVar44 != 0) {
    auVar14._8_8_ = 0;
    auVar14._0_8_ = (ulong)uVar44 * lVar37;
    auVar26._8_8_ = 0;
    auVar26._0_8_ = uVar32;
    auVar15._8_8_ = 0;
    auVar15._0_8_ = (ulong)((uVar40 + iVar35) - SUB164(auVar14 * auVar26,8)) * lVar37;
    auVar27._8_8_ = 0;
    auVar27._0_8_ = uVar32;
    uVar31 = SUB164(auVar15 * auVar27,8);
    plVar48 = plVar36;
    if (uVar31 < uVar46) {
      *puVar1 = (uint)uVar43;
      uVar43 = (ulong)uVar44;
      puVar2 = (undefined8 *)(lVar38 + lVar39 * 8);
      plVar48 = (long *)*puVar2;
      *puVar2 = plVar36;
      uVar46 = uVar31;
    }
    uVar31 = (uint)uVar43;
    uVar46 = uVar46 + 1;
    auVar16._8_8_ = 0;
    auVar16._0_8_ = (ulong)(iVar35 + 1) * lVar37;
    auVar28._8_8_ = 0;
    auVar28._0_8_ = uVar32;
    lVar39 = SUB168(auVar16 * auVar28,8);
    puVar1 = (uint *)(lVar3 + lVar39 * 4);
    iVar35 = SUB164(auVar16 * auVar28,8);
    plVar36 = plVar48;
    uVar44 = *puVar1;
  }
  *(long **)(lVar38 + lVar39 * 8) = plVar36;
  *puVar1 = uVar31;
  *(int *)(param_2 + 0x2c) = *(int *)(param_2 + 0x2c) + 1;
LAB_00104b68:
  *(long **)param_1 = plVar34;
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
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



/* PropertyInfo::~PropertyInfo() */

void __thiscall PropertyInfo::~PropertyInfo(PropertyInfo *this)

{
  CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0x20));
  if ((StringName::configured != '\0') && (*(long *)(this + 0x10) != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)(this + 8));
  return;
}



/* EditorContextMenuPluginManager::_initialize_classv() */

void EditorContextMenuPluginManager::_initialize_classv(void)

{
  long in_FS_OFFSET;
  undefined8 local_60;
  undefined8 local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (initialize_class()::initialized == '\0') {
    Object::initialize_class();
    local_58 = 0;
    local_40 = 6;
    local_48 = "Object";
    String::parse_latin1((StrRange *)&local_58);
    StringName::StringName((StringName *)&local_50,(String *)&local_58,false);
    local_48 = "EditorContextMenuPluginManager";
    local_60 = 0;
    local_40 = 0x1e;
    String::parse_latin1((StrRange *)&local_60);
    StringName::StringName((StringName *)&local_48,(String *)&local_60,false);
    ClassDB::_add_class2((StringName *)&local_48,(StringName *)&local_50);
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    if ((StringName::configured != '\0') && (local_50 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
    initialize_class()::initialized = '\x01';
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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



/* EditorContextMenuPluginManager::get_class() const */

void EditorContextMenuPluginManager::get_class(void)

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



/* EditorContextMenuPlugin::get_class() const */

void EditorContextMenuPlugin::get_class(void)

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



/* GetTypeInfo<Vector<String>, void>::get_class_info() */

GetTypeInfo<Vector<String>,void> * __thiscall
GetTypeInfo<Vector<String>,void>::get_class_info(GetTypeInfo<Vector<String>,void> *this)

{
  long in_FS_OFFSET;
  undefined8 local_60;
  long local_58;
  long local_50;
  undefined *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = 0;
  local_58 = 0;
  local_48 = &_LC19;
  local_40 = 0;
  String::parse_latin1((StrRange *)&local_58);
  local_60 = 0;
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
        if ((StringName::configured != '\0') && (local_48 != (undefined *)0x0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        *(undefined **)(this + 0x10) = local_48;
      }
      goto LAB_001052b5;
    }
  }
  StringName::operator=((StringName *)(this + 0x10),(StringName *)&local_50);
LAB_001052b5:
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  if ((StringName::configured != '\0') && (local_50 != 0)) {
    StringName::unref();
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RefCounted::_initialize_classv() */

void RefCounted::_initialize_classv(void)

{
  long in_FS_OFFSET;
  undefined8 local_60;
  undefined8 local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (initialize_class()::initialized == '\0') {
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
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    if ((StringName::configured != '\0') && (local_50 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
    if ((code *)_GLOBAL_OFFSET_TABLE_ != Object::_bind_methods) {
      RefCounted::_bind_methods();
    }
    initialize_class()::initialized = '\x01';
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorContextMenuPlugin::~EditorContextMenuPlugin() */

void __thiscall EditorContextMenuPlugin::~EditorContextMenuPlugin(EditorContextMenuPlugin *this)

{
  uint uVar1;
  Object *pOVar2;
  char cVar3;
  long lVar4;
  void *pvVar5;
  bool bVar6;
  
  bVar6 = StringName::configured != '\0';
  *(undefined ***)this = &PTR__initialize_classv_0010c320;
  if ((bVar6) && (*(long *)(this + 0x1e0) != 0)) {
    StringName::unref();
  }
  pvVar5 = *(void **)(this + 0x1b8);
  if (pvVar5 != (void *)0x0) {
    if (*(int *)(this + 0x1dc) != 0) {
      uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x1d8) * 4);
      if (uVar1 == 0) {
        *(undefined4 *)(this + 0x1dc) = 0;
        *(undefined1 (*) [16])(this + 0x1c8) = (undefined1  [16])0x0;
      }
      else {
        lVar4 = 0;
        do {
          if (*(int *)(*(long *)(this + 0x1c0) + lVar4) != 0) {
            pvVar5 = *(void **)((long)pvVar5 + lVar4 * 2);
            *(int *)(*(long *)(this + 0x1c0) + lVar4) = 0;
            Callable::~Callable((Callable *)((long)pvVar5 + 0x18));
            if (*(long *)((long)pvVar5 + 0x10) != 0) {
              cVar3 = RefCounted::unreference();
              if (cVar3 != '\0') {
                pOVar2 = *(Object **)((long)pvVar5 + 0x10);
                cVar3 = predelete_handler(pOVar2);
                if (cVar3 != '\0') {
                  (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
                  Memory::free_static(pOVar2,false);
                }
              }
            }
            Memory::free_static(pvVar5,false);
            pvVar5 = *(void **)(this + 0x1b8);
            *(undefined8 *)((long)pvVar5 + lVar4 * 2) = 0;
          }
          lVar4 = lVar4 + 4;
        } while ((ulong)uVar1 << 2 != lVar4);
        *(undefined4 *)(this + 0x1dc) = 0;
        *(undefined1 (*) [16])(this + 0x1c8) = (undefined1  [16])0x0;
        if (pvVar5 == (void *)0x0) goto LAB_00105570;
      }
    }
    Memory::free_static(pvVar5,false);
    Memory::free_static(*(void **)(this + 0x1c0),false);
  }
LAB_00105570:
  pvVar5 = *(void **)(this + 0x188);
  if (pvVar5 != (void *)0x0) {
    if (*(int *)(this + 0x1ac) != 0) {
      uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x1a8) * 4);
      if (uVar1 == 0) {
        *(undefined4 *)(this + 0x1ac) = 0;
        *(undefined1 (*) [16])(this + 0x198) = (undefined1  [16])0x0;
      }
      else {
        lVar4 = 0;
        do {
          if (*(int *)(*(long *)(this + 400) + lVar4) != 0) {
            pvVar5 = *(void **)((long)pvVar5 + lVar4 * 2);
            *(int *)(*(long *)(this + 400) + lVar4) = 0;
            if (*(long *)((long)pvVar5 + 0x40) != 0) {
              cVar3 = RefCounted::unreference();
              if (cVar3 != '\0') {
                pOVar2 = *(Object **)((long)pvVar5 + 0x40);
                cVar3 = predelete_handler(pOVar2);
                if (cVar3 != '\0') {
                  (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
                  Memory::free_static(pOVar2,false);
                }
              }
            }
            if (*(long *)((long)pvVar5 + 0x38) != 0) {
              cVar3 = RefCounted::unreference();
              if (cVar3 != '\0') {
                pOVar2 = *(Object **)((long)pvVar5 + 0x38);
                cVar3 = predelete_handler(pOVar2);
                if (cVar3 != '\0') {
                  (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
                  Memory::free_static(pOVar2,false);
                }
              }
            }
            Callable::~Callable((Callable *)((long)pvVar5 + 0x28));
            CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar5 + 0x20));
            CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar5 + 0x10));
            Memory::free_static(pvVar5,false);
            pvVar5 = *(void **)(this + 0x188);
            *(undefined8 *)((long)pvVar5 + lVar4 * 2) = 0;
          }
          lVar4 = lVar4 + 4;
        } while (lVar4 != (ulong)uVar1 << 2);
        *(undefined4 *)(this + 0x1ac) = 0;
        *(undefined1 (*) [16])(this + 0x198) = (undefined1  [16])0x0;
        if (pvVar5 == (void *)0x0) goto LAB_0010565b;
      }
    }
    Memory::free_static(pvVar5,false);
    Memory::free_static(*(void **)(this + 400),false);
  }
LAB_0010565b:
  *(undefined ***)this = &PTR__initialize_classv_0010c060;
  Object::~Object((Object *)this);
  return;
}



/* EditorContextMenuPlugin::~EditorContextMenuPlugin() */

void __thiscall EditorContextMenuPlugin::~EditorContextMenuPlugin(EditorContextMenuPlugin *this)

{
  ~EditorContextMenuPlugin(this);
  operator_delete(this,0x1f8);
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
        if (pvVar3 == (void *)0x0) goto LAB_0010588f;
      }
    }
    Memory::free_static(pvVar3,false);
    Memory::free_static(*(void **)(this + 0x20),false);
  }
LAB_0010588f:
  CowData<char32_t>::_unref((CowData<char32_t> *)this);
  return;
}



/* EditorContextMenuPluginManager::is_class(String const&) const */

undefined8 __thiscall
EditorContextMenuPluginManager::is_class(EditorContextMenuPluginManager *this,String *param_1)

{
  long *plVar1;
  long lVar2;
  char *pcVar3;
  long lVar4;
  char cVar5;
  undefined8 uVar6;
  long in_FS_OFFSET;
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
    cVar5 = String::operator==(param_1,(String *)&local_60);
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
    if (cVar5 != '\0') goto LAB_001059eb;
  }
  cVar5 = String::operator==(param_1,"EditorContextMenuPluginManager");
  if (cVar5 == '\0') {
    for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
      lVar4 = *(long *)(lVar2 + 0x20);
      if (lVar4 == 0) {
        local_60 = 0;
      }
      else {
        pcVar3 = *(char **)(lVar4 + 8);
        local_60 = 0;
        if (pcVar3 == (char *)0x0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar4 + 0x10));
        }
        else {
          local_50 = strlen(pcVar3);
          local_58 = pcVar3;
          String::parse_latin1((StrRange *)&local_60);
        }
      }
      cVar5 = String::operator==(param_1,(String *)&local_60);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if (cVar5 != '\0') goto LAB_001059eb;
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar6 = String::operator==(param_1,"Object");
      return uVar6;
    }
  }
  else {
LAB_001059eb:
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
  char cVar5;
  undefined8 uVar6;
  long in_FS_OFFSET;
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
    cVar5 = String::operator==(param_1,(String *)&local_60);
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
    if (cVar5 != '\0') goto LAB_00105beb;
  }
  cVar5 = String::operator==(param_1,"RefCounted");
  if (cVar5 == '\0') {
    for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
      lVar4 = *(long *)(lVar2 + 0x20);
      if (lVar4 == 0) {
        local_60 = 0;
      }
      else {
        pcVar3 = *(char **)(lVar4 + 8);
        local_60 = 0;
        if (pcVar3 == (char *)0x0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar4 + 0x10));
        }
        else {
          local_50 = strlen(pcVar3);
          local_58 = pcVar3;
          String::parse_latin1((StrRange *)&local_60);
        }
      }
      cVar5 = String::operator==(param_1,(String *)&local_60);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if (cVar5 != '\0') goto LAB_00105beb;
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar6 = String::operator==(param_1,"Object");
      return uVar6;
    }
  }
  else {
LAB_00105beb:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorContextMenuPlugin::is_class(String const&) const */

undefined8 __thiscall
EditorContextMenuPlugin::is_class(EditorContextMenuPlugin *this,String *param_1)

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
    if (cVar4 != '\0') goto LAB_00105deb;
  }
  cVar4 = String::operator==(param_1,"EditorContextMenuPlugin");
  if (cVar4 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar5 = RefCounted::is_class((RefCounted *)this,param_1);
      return uVar5;
    }
  }
  else {
LAB_00105deb:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorContextMenuPluginManager::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool)
   const */

void EditorContextMenuPluginManager::_get_property_listv(List *param_1,bool param_2)

{
  undefined7 in_register_00000031;
  long in_FS_OFFSET;
  long local_98;
  long local_90;
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
  local_78 = "EditorContextMenuPluginManager";
  local_88 = 0;
  local_90 = 0;
  local_70 = 0x1e;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "EditorContextMenuPluginManager";
  local_98 = 0;
  local_70 = 0x1e;
  String::parse_latin1((StrRange *)&local_98);
  local_78 = (char *)((ulong)local_78 & 0xffffffff00000000);
  local_70 = 0;
  if (local_98 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)&local_98);
  }
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  if (local_90 != 0) {
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
      goto LAB_00105f9c;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00105f9c:
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
  StringName::StringName((StringName *)&local_78,"EditorContextMenuPluginManager",false);
  ClassDB::get_property_list
            ((StringName *)&local_78,(List *)CONCAT71(in_register_00000031,param_2),true,
             (Object *)param_1);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* RefCounted::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void RefCounted::_get_property_listv(List *param_1,bool param_2)

{
  undefined7 in_register_00000031;
  long in_FS_OFFSET;
  long local_98;
  long local_90;
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
  local_78 = "RefCounted";
  local_88 = 0;
  local_90 = 0;
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
  if (local_90 != 0) {
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
      goto LAB_001061ec;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_001061ec:
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
  StringName::StringName((StringName *)&local_78,"RefCounted",false);
  ClassDB::get_property_list
            ((StringName *)&local_78,(List *)CONCAT71(in_register_00000031,param_2),true,
             (Object *)param_1);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* List<PropertyInfo, DefaultAllocator>::~List() */

void __thiscall
List<PropertyInfo,DefaultAllocator>::~List(List<PropertyInfo,DefaultAllocator> *this)

{
  void *pvVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  plVar4 = *(long **)this;
  if (plVar4 == (long *)0x0) {
    return;
  }
  do {
    pvVar1 = (void *)*plVar4;
    if (pvVar1 == (void *)0x0) {
      if ((int)plVar4[2] != 0) {
        _err_print_error("~List","./core/templates/list.h",0x316,
                         "Condition \"_data->size_cache\" is true.",0,0);
        return;
      }
      break;
    }
    if (*(long **)((long)pvVar1 + 0x40) == plVar4) {
      lVar3 = *(long *)((long)pvVar1 + 0x30);
      lVar2 = *(long *)((long)pvVar1 + 0x38);
      *plVar4 = lVar3;
      if (pvVar1 == (void *)plVar4[1]) {
        plVar4[1] = lVar2;
      }
      if (lVar2 != 0) {
        *(long *)(lVar2 + 0x30) = lVar3;
        lVar3 = *(long *)((long)pvVar1 + 0x30);
      }
      if (lVar3 != 0) {
        *(long *)(lVar3 + 0x38) = lVar2;
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar1 + 0x20));
      if ((StringName::configured != '\0') && (*(long *)((long)pvVar1 + 0x10) != 0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar1 + 8));
      Memory::free_static(pvVar1,false);
      *(int *)(plVar4 + 2) = (int)plVar4[2] + -1;
    }
    else {
      _err_print_error("erase","./core/templates/list.h",0xe7,
                       "Condition \"p_I->data != this\" is true. Returning: false",0,0);
    }
    plVar4 = *(long **)this;
  } while ((int)plVar4[2] != 0);
  Memory::free_static(plVar4,false);
  return;
}



/* EditorContextMenuPlugin::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const
    */

void __thiscall
EditorContextMenuPlugin::_get_property_listv
          (EditorContextMenuPlugin *this,List *param_1,bool param_2)

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
    RefCounted::_get_property_listv((List *)this,SUB81(param_1,0));
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "EditorContextMenuPlugin";
  local_70 = 0x17;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "EditorContextMenuPlugin";
  local_98 = 0;
  local_70 = 0x17;
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
  StringName::StringName((StringName *)&local_78,"EditorContextMenuPlugin",false);
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



/* Ref<Shortcut>::unref() */

void __thiscall Ref<Shortcut>::unref(Ref<Shortcut> *this)

{
  Object *pOVar1;
  char cVar2;
  
  if (*(long *)this != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)this;
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
        *(undefined8 *)this = 0;
        return;
      }
    }
  }
  *(undefined8 *)this = 0;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashMap<String, EditorContextMenuPlugin::ContextMenuItem, HashMapHasherDefault,
   HashMapComparatorDefault<String>, DefaultTypedAllocator<HashMapElement<String,
   EditorContextMenuPlugin::ContextMenuItem> > >::insert(String const&,
   EditorContextMenuPlugin::ContextMenuItem const&, bool) */

String * HashMap<String,EditorContextMenuPlugin::ContextMenuItem,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,EditorContextMenuPlugin::ContextMenuItem>>>
         ::insert(String *param_1,ContextMenuItem *param_2,bool param_3)

{
  uint *puVar1;
  undefined8 *puVar2;
  void *pvVar3;
  void *__s;
  long lVar4;
  Object *pOVar5;
  Object *pOVar6;
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
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  long *plVar31;
  char cVar32;
  uint uVar33;
  ulong uVar34;
  undefined8 uVar35;
  void *__s_00;
  long *plVar36;
  void *pvVar37;
  undefined4 *in_RCX;
  int iVar38;
  uint uVar39;
  undefined7 in_register_00000011;
  String *pSVar40;
  long lVar41;
  long lVar42;
  uint uVar43;
  ulong uVar44;
  undefined8 uVar45;
  char in_R8B;
  uint uVar46;
  uint uVar47;
  ulong uVar48;
  long lVar49;
  uint uVar50;
  long *plVar51;
  long in_FS_OFFSET;
  uint local_108;
  undefined8 local_a0;
  undefined1 local_98 [16];
  long local_88;
  undefined4 local_80;
  long local_78;
  Callable local_70 [16];
  Object *local_60;
  Object *local_58;
  long local_50;
  long local_40;
  
  pSVar40 = (String *)CONCAT71(in_register_00000011,param_3);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar43 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_2 + 0x28) * 4);
  if (*(long *)(param_2 + 8) == 0) {
    uVar44 = (ulong)uVar43;
    uVar34 = uVar44 * 4;
    uVar48 = uVar44 * 8;
    uVar35 = Memory::alloc_static(uVar34,false);
    *(undefined8 *)(param_2 + 0x10) = uVar35;
    pvVar37 = (void *)Memory::alloc_static(uVar48,false);
    *(void **)(param_2 + 8) = pvVar37;
    if (uVar43 != 0) {
      pvVar3 = *(void **)(param_2 + 0x10);
      if ((pvVar3 < (void *)((long)pvVar37 + uVar48)) && (pvVar37 < (void *)((long)pvVar3 + uVar34))
         ) {
        uVar34 = 0;
        do {
          *(undefined4 *)((long)pvVar3 + uVar34 * 4) = 0;
          *(undefined8 *)((long)pvVar37 + uVar34 * 8) = 0;
          uVar34 = uVar34 + 1;
        } while (uVar44 != uVar34);
      }
      else {
        memset(pvVar3,0,uVar34);
        memset(pvVar37,0,uVar48);
      }
      goto LAB_001067d8;
    }
    iVar38 = *(int *)(param_2 + 0x2c);
    if (pvVar37 == (void *)0x0) goto LAB_001067eb;
    if (*(int *)(param_2 + 0x2c) != 0) goto LAB_00106db0;
LAB_00106811:
    uVar43 = *(uint *)(param_2 + 0x28);
    if (uVar43 == 0x1c) {
      plVar36 = (long *)0x0;
      _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      goto LAB_00106d57;
    }
    uVar34 = (ulong)(uVar43 + 1);
    uVar33 = *(uint *)(hash_table_size_primes + (ulong)uVar43 * 4);
    *(undefined4 *)(param_2 + 0x2c) = 0;
    if (uVar43 + 1 < 2) {
      uVar34 = 2;
    }
    uVar43 = *(uint *)(hash_table_size_primes + uVar34 * 4);
    *(int *)(param_2 + 0x28) = (int)uVar34;
    pvVar37 = *(void **)(param_2 + 8);
    uVar44 = (ulong)uVar43;
    uVar34 = uVar44 * 4;
    pvVar3 = *(void **)(param_2 + 0x10);
    uVar35 = Memory::alloc_static(uVar34,false);
    *(undefined8 *)(param_2 + 0x10) = uVar35;
    uVar48 = uVar44 * 8;
    __s_00 = (void *)Memory::alloc_static(uVar48,false);
    *(void **)(param_2 + 8) = __s_00;
    if (uVar43 != 0) {
      __s = *(void **)(param_2 + 0x10);
      if ((__s < (void *)((long)__s_00 + uVar48)) && (__s_00 < (void *)((long)__s + uVar34))) {
        uVar34 = 0;
        do {
          *(undefined4 *)((long)__s + uVar34 * 4) = 0;
          *(undefined8 *)((long)__s_00 + uVar34 * 8) = 0;
          uVar34 = uVar34 + 1;
        } while (uVar34 != uVar44);
      }
      else {
        memset(__s,0,uVar34);
        memset(__s_00,0,uVar48);
      }
    }
    if (uVar33 != 0) {
      uVar34 = 0;
      do {
        uVar43 = *(uint *)((long)pvVar3 + uVar34 * 4);
        if (uVar43 != 0) {
          uVar46 = 0;
          lVar4 = *(long *)(param_2 + 0x10);
          uVar39 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_2 + 0x28) * 4);
          uVar48 = CONCAT44(0,uVar39);
          lVar49 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(param_2 + 0x28) * 8);
          auVar7._8_8_ = 0;
          auVar7._0_8_ = (ulong)uVar43 * lVar49;
          auVar19._8_8_ = 0;
          auVar19._0_8_ = uVar48;
          lVar41 = SUB168(auVar7 * auVar19,8);
          puVar1 = (uint *)(lVar4 + lVar41 * 4);
          iVar38 = SUB164(auVar7 * auVar19,8);
          uVar47 = *puVar1;
          uVar35 = *(undefined8 *)((long)pvVar37 + uVar34 * 8);
          while (uVar47 != 0) {
            auVar8._8_8_ = 0;
            auVar8._0_8_ = (ulong)uVar47 * lVar49;
            auVar20._8_8_ = 0;
            auVar20._0_8_ = uVar48;
            auVar9._8_8_ = 0;
            auVar9._0_8_ = (ulong)((iVar38 + uVar39) - SUB164(auVar8 * auVar20,8)) * lVar49;
            auVar21._8_8_ = 0;
            auVar21._0_8_ = uVar48;
            local_108 = SUB164(auVar9 * auVar21,8);
            uVar45 = uVar35;
            if (local_108 < uVar46) {
              *puVar1 = uVar43;
              puVar2 = (undefined8 *)((long)__s_00 + lVar41 * 8);
              uVar45 = *puVar2;
              *puVar2 = uVar35;
              uVar43 = uVar47;
              uVar46 = local_108;
            }
            uVar46 = uVar46 + 1;
            auVar10._8_8_ = 0;
            auVar10._0_8_ = (ulong)(iVar38 + 1) * lVar49;
            auVar22._8_8_ = 0;
            auVar22._0_8_ = uVar48;
            lVar41 = SUB168(auVar10 * auVar22,8);
            puVar1 = (uint *)(lVar4 + lVar41 * 4);
            iVar38 = SUB164(auVar10 * auVar22,8);
            uVar35 = uVar45;
            uVar47 = *puVar1;
          }
          *(undefined8 *)((long)__s_00 + lVar41 * 8) = uVar35;
          *puVar1 = uVar43;
          *(int *)(param_2 + 0x2c) = *(int *)(param_2 + 0x2c) + 1;
        }
        uVar34 = uVar34 + 1;
      } while (uVar33 != uVar34);
      Memory::free_static(pvVar37,false);
      Memory::free_static(pvVar3,false);
    }
  }
  else {
LAB_001067d8:
    iVar38 = *(int *)(param_2 + 0x2c);
    if (iVar38 != 0) {
LAB_00106db0:
      uVar33 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_2 + 0x28) * 4);
      lVar4 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(param_2 + 0x28) * 8);
      uVar47 = String::hash();
      uVar34 = CONCAT44(0,uVar33);
      lVar49 = *(long *)(param_2 + 0x10);
      uVar39 = 1;
      if (uVar47 != 0) {
        uVar39 = uVar47;
      }
      uVar50 = 0;
      auVar15._8_8_ = 0;
      auVar15._0_8_ = (ulong)uVar39 * lVar4;
      auVar27._8_8_ = 0;
      auVar27._0_8_ = uVar34;
      lVar41 = SUB168(auVar15 * auVar27,8);
      uVar47 = *(uint *)(lVar49 + lVar41 * 4);
      uVar46 = SUB164(auVar15 * auVar27,8);
      if (uVar47 != 0) {
        do {
          if (uVar47 == uVar39) {
            cVar32 = String::operator==((String *)
                                        (*(long *)(*(long *)(param_2 + 8) + lVar41 * 8) + 0x10),
                                        pSVar40);
            if (cVar32 != '\0') {
              lVar4 = *(long *)(*(long *)(param_2 + 8) + (ulong)uVar46 * 8);
              *(undefined4 *)(lVar4 + 0x18) = *in_RCX;
              CowData<char32_t>::_ref((CowData<char32_t> *)(lVar4 + 0x20),(CowData *)(in_RCX + 2));
              Callable::operator=((Callable *)(lVar4 + 0x28),(Callable *)(in_RCX + 4));
              pOVar5 = *(Object **)(in_RCX + 8);
              pOVar6 = *(Object **)(lVar4 + 0x38);
              if (pOVar5 != pOVar6) {
                *(Object **)(lVar4 + 0x38) = pOVar5;
                if ((pOVar5 != (Object *)0x0) && (cVar32 = RefCounted::reference(), cVar32 == '\0'))
                {
                  *(undefined8 *)(lVar4 + 0x38) = 0;
                }
                if (((pOVar6 != (Object *)0x0) &&
                    (cVar32 = RefCounted::unreference(), cVar32 != '\0')) &&
                   (cVar32 = predelete_handler(pOVar6), cVar32 != '\0')) {
                  (**(code **)(*(long *)pOVar6 + 0x140))(pOVar6);
                  Memory::free_static(pOVar6,false);
                }
              }
              pOVar5 = *(Object **)(in_RCX + 10);
              pOVar6 = *(Object **)(lVar4 + 0x40);
              if (pOVar5 != pOVar6) {
                *(Object **)(lVar4 + 0x40) = pOVar5;
                if ((pOVar5 != (Object *)0x0) && (cVar32 = RefCounted::reference(), cVar32 == '\0'))
                {
                  *(undefined8 *)(lVar4 + 0x40) = 0;
                }
                if (((pOVar6 != (Object *)0x0) &&
                    (cVar32 = RefCounted::unreference(), cVar32 != '\0')) &&
                   (cVar32 = predelete_handler(pOVar6), cVar32 != '\0')) {
                  (**(code **)(*(long *)pOVar6 + 0x140))(pOVar6);
                  Memory::free_static(pOVar6,false);
                }
              }
              *(undefined8 *)(lVar4 + 0x48) = *(undefined8 *)(in_RCX + 0xc);
              plVar36 = *(long **)(*(long *)(param_2 + 8) + (ulong)uVar46 * 8);
              goto LAB_00106d57;
            }
            lVar49 = *(long *)(param_2 + 0x10);
          }
          uVar50 = uVar50 + 1;
          auVar16._8_8_ = 0;
          auVar16._0_8_ = (ulong)(uVar46 + 1) * lVar4;
          auVar28._8_8_ = 0;
          auVar28._0_8_ = uVar34;
          lVar41 = SUB168(auVar16 * auVar28,8);
          uVar47 = *(uint *)(lVar49 + lVar41 * 4);
          uVar46 = SUB164(auVar16 * auVar28,8);
        } while ((uVar47 != 0) &&
                (auVar17._8_8_ = 0, auVar17._0_8_ = (ulong)uVar47 * lVar4, auVar29._8_8_ = 0,
                auVar29._0_8_ = uVar34, auVar18._8_8_ = 0,
                auVar18._0_8_ = (ulong)((uVar33 + uVar46) - SUB164(auVar17 * auVar29,8)) * lVar4,
                auVar30._8_8_ = 0, auVar30._0_8_ = uVar34, uVar50 <= SUB164(auVar18 * auVar30,8)));
      }
      iVar38 = *(int *)(param_2 + 0x2c);
    }
LAB_001067eb:
    if ((float)uVar43 * __LC22 < (float)(iVar38 + 1)) goto LAB_00106811;
  }
  local_88 = 0;
  local_98 = (undefined1  [16])0x0;
  if (*(long *)pSVar40 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_88,(CowData *)pSVar40);
  }
  local_80 = *in_RCX;
  local_78 = 0;
  if (*(long *)(in_RCX + 2) != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_78,(CowData *)(in_RCX + 2));
  }
  Callable::Callable(local_70,(Callable *)(in_RCX + 4));
  local_60 = (Object *)0x0;
  if ((*(Object **)(in_RCX + 8) != (Object *)0x0) &&
     (local_60 = *(Object **)(in_RCX + 8), cVar32 = RefCounted::reference(), cVar32 == '\0')) {
    local_60 = (Object *)0x0;
  }
  local_58 = (Object *)0x0;
  if (*(Object **)(in_RCX + 10) != (Object *)0x0) {
    local_a0 = 0;
    local_58 = *(Object **)(in_RCX + 10);
    cVar32 = RefCounted::reference();
    if (cVar32 == '\0') {
      local_58 = (Object *)0x0;
    }
    Ref<Shortcut>::unref((Ref<Shortcut> *)&local_a0);
  }
  local_50 = *(long *)(in_RCX + 0xc);
  plVar36 = (long *)operator_new(0x50,"");
  plVar36[2] = 0;
  *plVar36 = local_98._0_8_;
  plVar36[1] = local_98._8_8_;
  if (local_88 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(plVar36 + 2),(CowData *)&local_88);
  }
  plVar36[4] = 0;
  *(undefined4 *)(plVar36 + 3) = local_80;
  if (local_78 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(plVar36 + 4),(CowData *)&local_78);
  }
  Callable::Callable((Callable *)(plVar36 + 5),local_70);
  plVar36[7] = 0;
  if (local_60 != (Object *)0x0) {
    plVar36[7] = (long)local_60;
    cVar32 = RefCounted::reference();
    if (cVar32 == '\0') {
      plVar36[7] = 0;
    }
  }
  plVar36[8] = 0;
  if (local_58 == (Object *)0x0) {
    plVar36[9] = local_50;
  }
  else {
    plVar36[8] = (long)local_58;
    cVar32 = RefCounted::reference();
    if (cVar32 == '\0') {
      plVar36[8] = 0;
    }
    plVar36[9] = local_50;
    if (((local_58 != (Object *)0x0) &&
        (cVar32 = RefCounted::unreference(), pOVar5 = local_58, cVar32 != '\0')) &&
       (cVar32 = predelete_handler(local_58), cVar32 != '\0')) {
      (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
      Memory::free_static(pOVar5,false);
    }
  }
  if (((local_60 != (Object *)0x0) &&
      (cVar32 = RefCounted::unreference(), pOVar5 = local_60, cVar32 != '\0')) &&
     (cVar32 = predelete_handler(local_60), cVar32 != '\0')) {
    (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
    Memory::free_static(pOVar5,false);
  }
  Callable::~Callable(local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  puVar2 = *(undefined8 **)(param_2 + 0x20);
  if (puVar2 == (undefined8 *)0x0) {
    *(long **)(param_2 + 0x18) = plVar36;
    *(long **)(param_2 + 0x20) = plVar36;
  }
  else if (in_R8B == '\0') {
    *puVar2 = plVar36;
    plVar36[1] = (long)puVar2;
    *(long **)(param_2 + 0x20) = plVar36;
  }
  else {
    lVar4 = *(long *)(param_2 + 0x18);
    *(long **)(lVar4 + 8) = plVar36;
    *plVar36 = lVar4;
    *(long **)(param_2 + 0x18) = plVar36;
  }
  uVar33 = String::hash();
  uVar43 = 1;
  if (uVar33 != 0) {
    uVar43 = uVar33;
  }
  lVar4 = *(long *)(param_2 + 0x10);
  uVar47 = 0;
  uVar33 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_2 + 0x28) * 4);
  uVar34 = CONCAT44(0,uVar33);
  lVar49 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(param_2 + 0x28) * 8);
  auVar11._8_8_ = 0;
  auVar11._0_8_ = (ulong)uVar43 * lVar49;
  auVar23._8_8_ = 0;
  auVar23._0_8_ = uVar34;
  lVar42 = SUB168(auVar11 * auVar23,8);
  lVar41 = *(long *)(param_2 + 8);
  puVar1 = (uint *)(lVar4 + lVar42 * 4);
  iVar38 = SUB164(auVar11 * auVar23,8);
  uVar39 = *puVar1;
  plVar31 = plVar36;
  while (uVar39 != 0) {
    auVar12._8_8_ = 0;
    auVar12._0_8_ = (ulong)uVar39 * lVar49;
    auVar24._8_8_ = 0;
    auVar24._0_8_ = uVar34;
    auVar13._8_8_ = 0;
    auVar13._0_8_ = (ulong)((uVar33 + iVar38) - SUB164(auVar12 * auVar24,8)) * lVar49;
    auVar25._8_8_ = 0;
    auVar25._0_8_ = uVar34;
    local_108 = SUB164(auVar13 * auVar25,8);
    plVar51 = plVar31;
    if (local_108 < uVar47) {
      *puVar1 = uVar43;
      puVar2 = (undefined8 *)(lVar41 + lVar42 * 8);
      plVar51 = (long *)*puVar2;
      *puVar2 = plVar31;
      uVar47 = local_108;
      uVar43 = uVar39;
    }
    uVar47 = uVar47 + 1;
    auVar14._8_8_ = 0;
    auVar14._0_8_ = (ulong)(iVar38 + 1) * lVar49;
    auVar26._8_8_ = 0;
    auVar26._0_8_ = uVar34;
    lVar42 = SUB168(auVar14 * auVar26,8);
    puVar1 = (uint *)(lVar4 + lVar42 * 4);
    iVar38 = SUB164(auVar14 * auVar26,8);
    plVar31 = plVar51;
    uVar39 = *puVar1;
  }
  *(long **)(lVar41 + lVar42 * 8) = plVar31;
  *puVar1 = uVar43;
  *(int *)(param_2 + 0x2c) = *(int *)(param_2 + 0x2c) + 1;
LAB_00106d57:
  *(long **)param_1 = plVar36;
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* MethodBind* create_method_bind<EditorContextMenuPlugin, Ref<Shortcut> const&, Callable
   const&>(void (EditorContextMenuPlugin::*)(Ref<Shortcut> const&, Callable const&)) */

MethodBind *
create_method_bind<EditorContextMenuPlugin,Ref<Shortcut>const&,Callable_const&>
          (_func_void_Ref_ptr_Callable_ptr *param_1)

{
  MethodBind *this;
  undefined8 in_RSI;
  long in_FS_OFFSET;
  undefined8 local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(this);
  *(_func_void_Ref_ptr_Callable_ptr **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0010c488;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 2;
  local_40 = 0;
  local_38 = "EditorContextMenuPlugin";
  local_30 = 0x17;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
  StringName::operator=((StringName *)(this + 0x18),(StringName *)&local_38);
  if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_40);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBind* create_method_bind<EditorContextMenuPlugin, String const&, Callable const&,
   Ref<Texture2D> const&>(void (EditorContextMenuPlugin::*)(String const&, Callable const&,
   Ref<Texture2D> const&)) */

MethodBind *
create_method_bind<EditorContextMenuPlugin,String_const&,Callable_const&,Ref<Texture2D>const&>
          (_func_void_String_ptr_Callable_ptr_Ref_ptr *param_1)

{
  MethodBind *this;
  undefined8 in_RSI;
  long in_FS_OFFSET;
  undefined8 local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(this);
  *(_func_void_String_ptr_Callable_ptr_Ref_ptr **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0010c4e8;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 3;
  local_40 = 0;
  local_38 = "EditorContextMenuPlugin";
  local_30 = 0x17;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
  StringName::operator=((StringName *)(this + 0x18),(StringName *)&local_38);
  if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_40);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBind* create_method_bind<EditorContextMenuPlugin, String const&, Ref<Shortcut> const&,
   Ref<Texture2D> const&>(void (EditorContextMenuPlugin::*)(String const&, Ref<Shortcut> const&,
   Ref<Texture2D> const&)) */

MethodBind *
create_method_bind<EditorContextMenuPlugin,String_const&,Ref<Shortcut>const&,Ref<Texture2D>const&>
          (_func_void_String_ptr_Ref_ptr_Ref_ptr *param_1)

{
  MethodBind *this;
  undefined8 in_RSI;
  long in_FS_OFFSET;
  undefined8 local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(this);
  *(_func_void_String_ptr_Ref_ptr_Ref_ptr **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0010c548;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 3;
  local_40 = 0;
  local_38 = "EditorContextMenuPlugin";
  local_30 = 0x17;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
  StringName::operator=((StringName *)(this + 0x18),(StringName *)&local_38);
  if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_40);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBind* create_method_bind<EditorContextMenuPlugin, String const&, PopupMenu*, Ref<Texture2D>
   const&>(void (EditorContextMenuPlugin::*)(String const&, PopupMenu*, Ref<Texture2D> const&)) */

MethodBind *
create_method_bind<EditorContextMenuPlugin,String_const&,PopupMenu*,Ref<Texture2D>const&>
          (_func_void_String_ptr_PopupMenu_ptr_Ref_ptr *param_1)

{
  MethodBind *this;
  undefined8 in_RSI;
  long in_FS_OFFSET;
  undefined8 local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(this);
  *(_func_void_String_ptr_PopupMenu_ptr_Ref_ptr **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0010c5a8;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 3;
  local_40 = 0;
  local_38 = "EditorContextMenuPlugin";
  local_30 = 0x17;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
  StringName::operator=((StringName *)(this + 0x18),(StringName *)&local_38);
  if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_40);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
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



/* CowData<String>::_ref(CowData<String> const&) */

void __thiscall CowData<String>::_ref(CowData<String> *this,CowData *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  bool bVar4;
  
  if (*(long *)this == *(long *)param_1) {
    return;
  }
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
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long lVar9;
  
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
LAB_00107ab0:
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
  lVar9 = uVar6 + 1;
  if (lVar9 == 0) goto LAB_00107ab0;
  uVar8 = param_1;
  if (param_1 <= lVar4) {
    while (lVar4 = *(long *)this, lVar4 != 0) {
      if (*(ulong *)(lVar4 + -8) <= uVar8) {
        if (lVar9 != lVar5) {
          uVar3 = _realloc(this,lVar9);
          if ((int)uVar3 != 0) {
            return uVar3;
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
      CowData<char32_t>::_unref((CowData<char32_t> *)(lVar4 + uVar8 * 8));
      uVar8 = uVar8 + 1;
    }
    goto LAB_00107b06;
  }
  if (lVar9 == lVar5) {
LAB_00107a2b:
    puVar7 = *(undefined8 **)this;
    if (puVar7 == (undefined8 *)0x0) {
LAB_00107b06:
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    lVar4 = puVar7[-1];
    if (param_1 <= lVar4) goto LAB_0010799f;
  }
  else {
    if (lVar4 != 0) {
      uVar3 = _realloc(this,lVar9);
      if ((int)uVar3 != 0) {
        return uVar3;
      }
      goto LAB_00107a2b;
    }
    puVar2 = (undefined8 *)Memory::alloc_static(uVar6 + 0x11,false);
    if (puVar2 == (undefined8 *)0x0) {
      _err_print_error("resize","./core/templates/cowdata.h",0x171,"Parameter \"mem_new\" is null.",
                       0,0);
      return 6;
    }
    puVar7 = puVar2 + 2;
    *puVar2 = 1;
    puVar2[1] = 0;
    *(undefined8 **)this = puVar7;
    lVar4 = 0;
  }
  memset(puVar7 + lVar4,0,(param_1 - lVar4) * 8);
LAB_0010799f:
  puVar7[-1] = param_1;
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
LAB_00107d90:
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
  if (lVar8 == 0) goto LAB_00107d90;
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
        goto LAB_00107ca1;
      }
      uVar6 = _realloc(this,lVar8);
      if ((int)uVar6 != 0) {
        return uVar6;
      }
    }
    puVar7 = *(undefined8 **)this;
    if (puVar7 != (undefined8 *)0x0) {
LAB_00107ca1:
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



/* EditorContextMenuPlugin::_initialize_classv() */

void EditorContextMenuPlugin::_initialize_classv(void)

{
  long in_FS_OFFSET;
  undefined8 local_60;
  undefined8 local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (initialize_class()::initialized == '\0') {
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
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_50 != 0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      if ((code *)_GLOBAL_OFFSET_TABLE_ != Object::_bind_methods) {
        RefCounted::_bind_methods();
      }
      RefCounted::initialize_class()::initialized = '\x01';
    }
    local_48 = "RefCounted";
    local_58 = 0;
    local_40 = 10;
    String::parse_latin1((StrRange *)&local_58);
    StringName::StringName((StringName *)&local_50,(String *)&local_58,false);
    local_48 = "EditorContextMenuPlugin";
    local_60 = 0;
    local_40 = 0x17;
    String::parse_latin1((StrRange *)&local_60);
    StringName::StringName((StringName *)&local_48,(String *)&local_60,false);
    ClassDB::_add_class2((StringName *)&local_48,(StringName *)&local_50);
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    if ((StringName::configured != '\0') && (local_50 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
    _bind_methods();
    initialize_class()::initialized = '\x01';
  }
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* WARNING: Removing unreachable block (ram,0x001081c8) */
/* String vformat<StringName>(String const&, StringName const) */

undefined8 * vformat<StringName>(undefined8 *param_1,bool *param_2,StringName *param_3)

{
  char cVar1;
  Variant *this;
  int iVar2;
  long in_FS_OFFSET;
  Array local_c0 [8];
  undefined8 local_b8 [8];
  int local_78 [6];
  undefined8 local_60;
  undefined1 local_58 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Variant::Variant((Variant *)local_78,param_3);
  local_60 = 0;
  local_58 = (undefined1  [16])0x0;
  Array::Array(local_c0);
  iVar2 = (int)local_c0;
  Array::resize(iVar2);
  this = (Variant *)Array::operator[](iVar2);
  Variant::operator=(this,(Variant *)local_78);
  String::sprintf((Array *)local_b8,param_2);
  *param_1 = local_b8[0];
  local_b8[0] = 0;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_b8);
  Array::~Array(local_c0);
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



/* MethodBindT<String const&, Callable const&, Ref<Texture2D> const&>::validated_call(Object*,
   Variant const**, Variant*) const */

void MethodBindT<String_const&,Callable_const&,Ref<Texture2D>const&>::validated_call
               (Object *param_1,Variant **param_2,Variant *param_3)

{
  long lVar1;
  Object *pOVar2;
  char cVar3;
  Object *pOVar4;
  Variant *pVVar5;
  code *pcVar6;
  long in_FS_OFFSET;
  long local_70;
  undefined8 local_68;
  Object *local_60;
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (Variant **)0x0) && (param_2[1] != (Variant *)0x0)) &&
     (param_2[1][0x2e] != (Variant)0x0)) {
    StringName::StringName((StringName *)&local_60,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (Variant *)0x0) {
      pVVar5 = param_2[0x23];
      if (pVVar5 == (Variant *)0x0) {
        pVVar5 = (Variant *)(**(code **)(*param_2 + 0x40))(param_2);
      }
    }
    else {
      pVVar5 = param_2[1] + 0x20;
    }
    if (local_60 == *(Object **)pVVar5) {
      if ((StringName::configured != '\0') && (local_60 != (Object *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_68 = 0;
      String::parse_latin1
                ((String *)&local_68,"Cannot call method bind \'%s\' on placeholder instance.");
      vformat<StringName>((StringName *)&local_60,(String *)&local_68,&local_70);
      _err_print_error("validated_call","./core/object/method_bind.h",0x160,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_60,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      if ((StringName::configured != '\0') && (local_70 != 0)) {
        StringName::unref();
      }
      goto LAB_00108541;
    }
    if ((StringName::configured != '\0') && (local_60 != (Object *)0x0)) {
      StringName::unref();
    }
  }
  pcVar6 = *(code **)(param_1 + 0x58);
  lVar1 = *(long *)(param_1 + 0x60);
  if (((ulong)pcVar6 & 1) != 0) {
    pcVar6 = *(code **)(pcVar6 + *(long *)((long)param_2 + lVar1) + -1);
  }
  Variant::Variant((Variant *)local_58,*(Object **)(*(long *)(param_3 + 0x10) + 0x10));
  local_60 = (Object *)0x0;
  pOVar4 = (Object *)Variant::get_validated_object();
  pOVar2 = local_60;
  if (pOVar4 != local_60) {
    if (pOVar4 == (Object *)0x0) {
      if (local_60 != (Object *)0x0) {
        local_60 = (Object *)0x0;
LAB_001084f0:
        cVar3 = RefCounted::unreference();
        if (cVar3 != '\0') {
          cVar3 = predelete_handler(pOVar2);
          if (cVar3 != '\0') {
            (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
            Memory::free_static(pOVar2,false);
          }
        }
      }
    }
    else {
      pOVar4 = (Object *)__dynamic_cast(pOVar4,&Object::typeinfo,&Texture2D::typeinfo,0);
      if (pOVar2 != pOVar4) {
        local_60 = pOVar4;
        if (pOVar4 != (Object *)0x0) {
          cVar3 = RefCounted::reference();
          if (cVar3 == '\0') {
            local_60 = (Object *)0x0;
          }
        }
        if (pOVar2 != (Object *)0x0) goto LAB_001084f0;
      }
    }
  }
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  (*pcVar6)((long *)((long)param_2 + lVar1),*(long *)param_3 + 8,*(long *)(param_3 + 8) + 8,
            (StringName *)&local_60);
  if (local_60 != (Object *)0x0) {
    cVar3 = RefCounted::unreference();
    pOVar2 = local_60;
    if (cVar3 != '\0') {
      cVar3 = predelete_handler(local_60);
      if (cVar3 != '\0') {
        (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
        Memory::free_static(pOVar2,false);
      }
    }
  }
LAB_00108541:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<String const&, PopupMenu*, Ref<Texture2D> const&>::validated_call(Object*, Variant
   const**, Variant*) const */

void MethodBindT<String_const&,PopupMenu*,Ref<Texture2D>const&>::validated_call
               (Object *param_1,Variant **param_2,Variant *param_3)

{
  long lVar1;
  Object *pOVar2;
  char cVar3;
  Object *pOVar4;
  Variant *pVVar5;
  code *pcVar6;
  long in_FS_OFFSET;
  long local_70;
  undefined8 local_68;
  Object *local_60;
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (Variant **)0x0) && (param_2[1] != (Variant *)0x0)) &&
     (param_2[1][0x2e] != (Variant)0x0)) {
    StringName::StringName((StringName *)&local_60,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (Variant *)0x0) {
      pVVar5 = param_2[0x23];
      if (pVVar5 == (Variant *)0x0) {
        pVVar5 = (Variant *)(**(code **)(*param_2 + 0x40))(param_2);
      }
    }
    else {
      pVVar5 = param_2[1] + 0x20;
    }
    if (local_60 == *(Object **)pVVar5) {
      if ((StringName::configured != '\0') && (local_60 != (Object *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_68 = 0;
      String::parse_latin1
                ((String *)&local_68,"Cannot call method bind \'%s\' on placeholder instance.");
      vformat<StringName>((StringName *)&local_60,(String *)&local_68,&local_70);
      _err_print_error("validated_call","./core/object/method_bind.h",0x160,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_60,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      if ((StringName::configured != '\0') && (local_70 != 0)) {
        StringName::unref();
      }
      goto LAB_00108861;
    }
    if ((StringName::configured != '\0') && (local_60 != (Object *)0x0)) {
      StringName::unref();
    }
  }
  pcVar6 = *(code **)(param_1 + 0x58);
  lVar1 = *(long *)(param_1 + 0x60);
  if (((ulong)pcVar6 & 1) != 0) {
    pcVar6 = *(code **)(pcVar6 + *(long *)((long)param_2 + lVar1) + -1);
  }
  Variant::Variant((Variant *)local_58,*(Object **)(*(long *)(param_3 + 0x10) + 0x10));
  local_60 = (Object *)0x0;
  pOVar4 = (Object *)Variant::get_validated_object();
  pOVar2 = local_60;
  if (pOVar4 != local_60) {
    if (pOVar4 == (Object *)0x0) {
      if (local_60 != (Object *)0x0) {
        local_60 = (Object *)0x0;
LAB_00108810:
        cVar3 = RefCounted::unreference();
        if (cVar3 != '\0') {
          cVar3 = predelete_handler(pOVar2);
          if (cVar3 != '\0') {
            (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
            Memory::free_static(pOVar2,false);
          }
        }
      }
    }
    else {
      pOVar4 = (Object *)__dynamic_cast(pOVar4,&Object::typeinfo,&Texture2D::typeinfo,0);
      if (pOVar2 != pOVar4) {
        local_60 = pOVar4;
        if (pOVar4 != (Object *)0x0) {
          cVar3 = RefCounted::reference();
          if (cVar3 == '\0') {
            local_60 = (Object *)0x0;
          }
        }
        if (pOVar2 != (Object *)0x0) goto LAB_00108810;
      }
    }
  }
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  (*pcVar6)((long *)((long)param_2 + lVar1),*(long *)param_3 + 8,
            *(undefined8 *)(*(long *)(param_3 + 8) + 0x10),(StringName *)&local_60);
  if (local_60 != (Object *)0x0) {
    cVar3 = RefCounted::unreference();
    pOVar2 = local_60;
    if (cVar3 != '\0') {
      cVar3 = predelete_handler(local_60);
      if (cVar3 != '\0') {
        (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
        Memory::free_static(pOVar2,false);
      }
    }
  }
LAB_00108861:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<String const&, Callable const&, Ref<Texture2D> const&>::ptrcall(Object*, void
   const**, void*) const */

void MethodBindT<String_const&,Callable_const&,Ref<Texture2D>const&>::ptrcall
               (Object *param_1,void **param_2,void *param_3)

{
  long lVar1;
  Object *pOVar2;
  char cVar3;
  long *plVar4;
  code *pcVar5;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  Object *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (void **)0x0) && (param_2[1] != (void *)0x0)) &&
     (*(char *)((long)param_2[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (void *)0x0) {
      plVar4 = (long *)param_2[0x23];
      if (plVar4 == (long *)0x0) {
        plVar4 = (long *)(**(code **)((long)*param_2 + 0x40))(param_2);
      }
    }
    else {
      plVar4 = (long *)((long)param_2[1] + 0x20);
    }
    if (local_48 == (Object *)*plVar4) {
      if ((StringName::configured != '\0') && (local_48 != (Object *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = (Object *)0x108348;
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x16b,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00108b1b;
    }
    if ((StringName::configured != '\0') && (local_48 != (Object *)0x0)) {
      StringName::unref();
    }
  }
  pcVar5 = *(code **)(param_1 + 0x58);
  lVar1 = *(long *)(param_1 + 0x60);
  if (((ulong)pcVar5 & 1) != 0) {
    pcVar5 = *(code **)(pcVar5 + *(long *)((long)param_2 + lVar1) + -1);
  }
  if ((*(long **)((long)param_3 + 0x10) == (long *)0x0) ||
     (local_48 = (Object *)**(long **)((long)param_3 + 0x10), local_48 == (Object *)0x0)) {
LAB_00108aee:
    local_48 = (Object *)0x0;
  }
  else {
    cVar3 = RefCounted::init_ref();
    if (cVar3 == '\0') goto LAB_00108aee;
  }
                    /* WARNING: Load size is inaccurate */
  (*pcVar5)((long *)((long)param_2 + lVar1),*param_3,*(undefined8 *)((long)param_3 + 8),
            (StringName *)&local_48);
  if (local_48 != (Object *)0x0) {
    cVar3 = RefCounted::unreference();
    pOVar2 = local_48;
    if (cVar3 != '\0') {
      cVar3 = predelete_handler(local_48);
      if (cVar3 != '\0') {
        (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
        Memory::free_static(pOVar2,false);
      }
    }
  }
LAB_00108b1b:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<String const&, PopupMenu*, Ref<Texture2D> const&>::ptrcall(Object*, void const**,
   void*) const */

void MethodBindT<String_const&,PopupMenu*,Ref<Texture2D>const&>::ptrcall
               (Object *param_1,void **param_2,void *param_3)

{
  long lVar1;
  Object *pOVar2;
  char cVar3;
  long *plVar4;
  code *pcVar5;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  Object *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (void **)0x0) && (param_2[1] != (void *)0x0)) &&
     (*(char *)((long)param_2[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (void *)0x0) {
      plVar4 = (long *)param_2[0x23];
      if (plVar4 == (long *)0x0) {
        plVar4 = (long *)(**(code **)((long)*param_2 + 0x40))(param_2);
      }
    }
    else {
      plVar4 = (long *)((long)param_2[1] + 0x20);
    }
    if (local_48 == (Object *)*plVar4) {
      if ((StringName::configured != '\0') && (local_48 != (Object *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = (Object *)0x108348;
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x16b,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00108d53;
    }
    if ((StringName::configured != '\0') && (local_48 != (Object *)0x0)) {
      StringName::unref();
    }
  }
  pcVar5 = *(code **)(param_1 + 0x58);
  lVar1 = *(long *)(param_1 + 0x60);
  if (((ulong)pcVar5 & 1) != 0) {
    pcVar5 = *(code **)(pcVar5 + *(long *)((long)param_2 + lVar1) + -1);
  }
  if ((*(long **)((long)param_3 + 0x10) == (long *)0x0) ||
     (local_48 = (Object *)**(long **)((long)param_3 + 0x10), local_48 == (Object *)0x0)) {
LAB_00108d1e:
    local_48 = (Object *)0x0;
  }
  else {
    cVar3 = RefCounted::init_ref();
    if (cVar3 == '\0') goto LAB_00108d1e;
  }
  plVar4 = *(long **)((long)param_3 + 8);
  if (plVar4 != (long *)0x0) {
    plVar4 = (long *)*plVar4;
  }
                    /* WARNING: Load size is inaccurate */
  (*pcVar5)((long *)((long)param_2 + lVar1),*param_3,plVar4,(StringName *)&local_48);
  if (local_48 != (Object *)0x0) {
    cVar3 = RefCounted::unreference();
    pOVar2 = local_48;
    if (cVar3 != '\0') {
      cVar3 = predelete_handler(local_48);
      if (cVar3 != '\0') {
        (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
        Memory::free_static(pOVar2,false);
      }
    }
  }
LAB_00108d53:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Ref<Shortcut> const&, Callable const&>::validated_call(Object*, Variant const**,
   Variant*) const */

void MethodBindT<Ref<Shortcut>const&,Callable_const&>::validated_call
               (Object *param_1,Variant **param_2,Variant *param_3)

{
  long lVar1;
  long lVar2;
  Object *pOVar3;
  char cVar4;
  Object *pOVar5;
  Variant *pVVar6;
  code *pcVar7;
  long in_FS_OFFSET;
  long local_70;
  undefined8 local_68;
  Object *local_60;
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (Variant **)0x0) && (param_2[1] != (Variant *)0x0)) &&
     (param_2[1][0x2e] != (Variant)0x0)) {
    StringName::StringName((StringName *)&local_60,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (Variant *)0x0) {
      pVVar6 = param_2[0x23];
      if (pVVar6 == (Variant *)0x0) {
        pVVar6 = (Variant *)(**(code **)(*param_2 + 0x40))(param_2);
      }
    }
    else {
      pVVar6 = param_2[1] + 0x20;
    }
    if (local_60 == *(Object **)pVVar6) {
      if ((StringName::configured != '\0') && (local_60 != (Object *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_68 = 0;
      String::parse_latin1
                ((String *)&local_68,"Cannot call method bind \'%s\' on placeholder instance.");
      vformat<StringName>((StringName *)&local_60,(String *)&local_68,&local_70);
      _err_print_error("validated_call","./core/object/method_bind.h",0x160,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_60,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      if ((StringName::configured != '\0') && (local_70 != 0)) {
        StringName::unref();
      }
      goto LAB_00108ff9;
    }
    if ((StringName::configured != '\0') && (local_60 != (Object *)0x0)) {
      StringName::unref();
    }
  }
  pcVar7 = *(code **)(param_1 + 0x58);
  lVar1 = *(long *)(param_1 + 0x60);
  if (((ulong)pcVar7 & 1) != 0) {
    pcVar7 = *(code **)(pcVar7 + *(long *)((long)param_2 + lVar1) + -1);
  }
  lVar2 = *(long *)(param_3 + 8);
  Variant::Variant((Variant *)local_58,*(Object **)(*(long *)param_3 + 0x10));
  local_60 = (Object *)0x0;
  pOVar5 = (Object *)Variant::get_validated_object();
  pOVar3 = local_60;
  if (pOVar5 != local_60) {
    if (pOVar5 == (Object *)0x0) {
      if (local_60 != (Object *)0x0) {
        local_60 = (Object *)0x0;
LAB_00108fb4:
        cVar4 = RefCounted::unreference();
        if (cVar4 != '\0') {
          cVar4 = predelete_handler(pOVar3);
          if (cVar4 != '\0') {
            (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
            Memory::free_static(pOVar3,false);
          }
        }
      }
    }
    else {
      pOVar5 = (Object *)__dynamic_cast(pOVar5,&Object::typeinfo,&Shortcut::typeinfo,0);
      if (pOVar3 != pOVar5) {
        local_60 = pOVar5;
        if (pOVar5 != (Object *)0x0) {
          cVar4 = RefCounted::reference();
          if (cVar4 == '\0') {
            local_60 = (Object *)0x0;
          }
        }
        if (pOVar3 != (Object *)0x0) goto LAB_00108fb4;
      }
    }
  }
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  (*pcVar7)((long *)((long)param_2 + lVar1),(StringName *)&local_60,lVar2 + 8);
  if (local_60 != (Object *)0x0) {
    cVar4 = RefCounted::unreference();
    pOVar3 = local_60;
    if (cVar4 != '\0') {
      cVar4 = predelete_handler(local_60);
      if (cVar4 != '\0') {
        (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
        Memory::free_static(pOVar3,false);
      }
    }
  }
LAB_00108ff9:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<String const&, Ref<Shortcut> const&, Ref<Texture2D> const&>::validated_call(Object*,
   Variant const**, Variant*) const */

void MethodBindT<String_const&,Ref<Shortcut>const&,Ref<Texture2D>const&>::validated_call
               (Object *param_1,Variant **param_2,Variant *param_3)

{
  long lVar1;
  Object *pOVar2;
  char cVar3;
  Object *pOVar4;
  Variant *pVVar5;
  code *pcVar6;
  long in_FS_OFFSET;
  long local_78;
  Object *local_70;
  Object *local_68;
  undefined8 local_60;
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (Variant **)0x0) && (param_2[1] != (Variant *)0x0)) &&
     (param_2[1][0x2e] != (Variant)0x0)) {
    StringName::StringName((StringName *)&local_68,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (Variant *)0x0) {
      pVVar5 = param_2[0x23];
      if (pVVar5 == (Variant *)0x0) {
        pVVar5 = (Variant *)(**(code **)(*param_2 + 0x40))(param_2);
      }
    }
    else {
      pVVar5 = param_2[1] + 0x20;
    }
    if (local_68 == (Object *)*(long *)pVVar5) {
      if ((StringName::configured != '\0') && (local_68 != (Object *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_68 = (Object *)0x108348;
      local_70 = (Object *)0x0;
      local_60 = 0x35;
      String::parse_latin1((StrRange *)&local_70);
      vformat<StringName>((StringName *)&local_68,(StrRange *)&local_70,&local_78);
      _err_print_error("validated_call","./core/object/method_bind.h",0x160,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_68,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      if ((StringName::configured != '\0') && (local_78 != 0)) {
        StringName::unref();
      }
      goto LAB_001093e0;
    }
    if ((StringName::configured != '\0') && (local_68 != (Object *)0x0)) {
      StringName::unref();
    }
  }
  pcVar6 = *(code **)(param_1 + 0x58);
  lVar1 = *(long *)(param_1 + 0x60);
  if (((ulong)pcVar6 & 1) != 0) {
    pcVar6 = *(code **)(pcVar6 + *(long *)((long)param_2 + lVar1) + -1);
  }
  Variant::Variant((Variant *)local_58,*(Object **)(*(long *)(param_3 + 0x10) + 0x10));
  local_70 = (Object *)0x0;
  pOVar4 = (Object *)Variant::get_validated_object();
  pOVar2 = local_70;
  if (pOVar4 != local_70) {
    if (pOVar4 == (Object *)0x0) {
      if (local_70 != (Object *)0x0) {
        local_70 = (Object *)0x0;
LAB_001092e7:
        cVar3 = RefCounted::unreference();
        if (cVar3 != '\0') {
          cVar3 = predelete_handler(pOVar2);
          if (cVar3 != '\0') {
            (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
            Memory::free_static(pOVar2,false);
          }
        }
      }
    }
    else {
      pOVar4 = (Object *)__dynamic_cast(pOVar4,&Object::typeinfo,&Texture2D::typeinfo,0);
      if (pOVar2 != pOVar4) {
        local_70 = pOVar4;
        if (pOVar4 != (Object *)0x0) {
          cVar3 = RefCounted::reference();
          if (cVar3 == '\0') {
            local_70 = (Object *)0x0;
          }
        }
        if (pOVar2 != (Object *)0x0) goto LAB_001092e7;
      }
    }
  }
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_58,*(Object **)(*(long *)(param_3 + 8) + 0x10));
  local_68 = (Object *)0x0;
  pOVar4 = (Object *)Variant::get_validated_object();
  pOVar2 = local_68;
  if (pOVar4 != local_68) {
    if (pOVar4 == (Object *)0x0) {
      if (local_68 != (Object *)0x0) {
        local_68 = (Object *)0x0;
LAB_0010937e:
        cVar3 = RefCounted::unreference();
        if (cVar3 != '\0') {
          cVar3 = predelete_handler(pOVar2);
          if (cVar3 != '\0') {
            (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
            Memory::free_static(pOVar2,false);
          }
        }
      }
    }
    else {
      pOVar4 = (Object *)__dynamic_cast(pOVar4,&Object::typeinfo,&Shortcut::typeinfo,0);
      if (pOVar2 != pOVar4) {
        local_68 = pOVar4;
        if (pOVar4 != (Object *)0x0) {
          cVar3 = RefCounted::reference();
          if (cVar3 == '\0') {
            local_68 = (Object *)0x0;
          }
        }
        if (pOVar2 != (Object *)0x0) goto LAB_0010937e;
      }
    }
  }
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  (*pcVar6)((long *)((long)param_2 + lVar1),*(long *)param_3 + 8,(StringName *)&local_68,&local_70);
  if (local_68 != (Object *)0x0) {
    cVar3 = RefCounted::unreference();
    pOVar2 = local_68;
    if (cVar3 != '\0') {
      cVar3 = predelete_handler(local_68);
      if (cVar3 != '\0') {
        (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
        Memory::free_static(pOVar2,false);
      }
    }
  }
  if (local_70 != (Object *)0x0) {
    cVar3 = RefCounted::unreference();
    pOVar2 = local_70;
    if (cVar3 != '\0') {
      cVar3 = predelete_handler(local_70);
      if (cVar3 != '\0') {
        (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
        Memory::free_static(pOVar2,false);
      }
    }
  }
LAB_001093e0:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Ref<Shortcut> const&, Callable const&>::ptrcall(Object*, void const**, void*) const
    */

void MethodBindT<Ref<Shortcut>const&,Callable_const&>::ptrcall
               (Object *param_1,void **param_2,void *param_3)

{
  long lVar1;
  undefined8 uVar2;
  Object *pOVar3;
  char cVar4;
  long *plVar5;
  code *pcVar6;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  Object *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (void **)0x0) && (param_2[1] != (void *)0x0)) &&
     (*(char *)((long)param_2[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (void *)0x0) {
      plVar5 = (long *)param_2[0x23];
      if (plVar5 == (long *)0x0) {
        plVar5 = (long *)(**(code **)((long)*param_2 + 0x40))(param_2);
      }
    }
    else {
      plVar5 = (long *)((long)param_2[1] + 0x20);
    }
    if (local_48 == (Object *)*plVar5) {
      if ((StringName::configured != '\0') && (local_48 != (Object *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = (Object *)0x108348;
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x16b,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00109733;
    }
    if ((StringName::configured != '\0') && (local_48 != (Object *)0x0)) {
      StringName::unref();
    }
  }
  pcVar6 = *(code **)(param_1 + 0x58);
  lVar1 = *(long *)(param_1 + 0x60);
  if (((ulong)pcVar6 & 1) != 0) {
    pcVar6 = *(code **)(pcVar6 + *(long *)((long)param_2 + lVar1) + -1);
  }
                    /* WARNING: Load size is inaccurate */
  uVar2 = *(undefined8 *)((long)param_3 + 8);
  if ((*param_3 == (long *)0x0) || (local_48 = (Object *)**param_3, local_48 == (Object *)0x0)) {
LAB_0010970c:
    local_48 = (Object *)0x0;
  }
  else {
    cVar4 = RefCounted::init_ref();
    if (cVar4 == '\0') goto LAB_0010970c;
  }
  (*pcVar6)((long *)((long)param_2 + lVar1),(StringName *)&local_48,uVar2);
  if (local_48 != (Object *)0x0) {
    cVar4 = RefCounted::unreference();
    pOVar3 = local_48;
    if (cVar4 != '\0') {
      cVar4 = predelete_handler(local_48);
      if (cVar4 != '\0') {
        (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
        Memory::free_static(pOVar3,false);
      }
    }
  }
LAB_00109733:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<String const&, Ref<Shortcut> const&, Ref<Texture2D> const&>::ptrcall(Object*, void
   const**, void*) const */

void MethodBindT<String_const&,Ref<Shortcut>const&,Ref<Texture2D>const&>::ptrcall
               (Object *param_1,void **param_2,void *param_3)

{
  long lVar1;
  Object *pOVar2;
  char cVar3;
  long *plVar4;
  code *pcVar5;
  long in_FS_OFFSET;
  long local_48;
  Object *local_40;
  Object *local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (void **)0x0) && (param_2[1] != (void *)0x0)) &&
     (*(char *)((long)param_2[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_38,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (void *)0x0) {
      plVar4 = (long *)param_2[0x23];
      if (plVar4 == (long *)0x0) {
        plVar4 = (long *)(**(code **)((long)*param_2 + 0x40))(param_2);
      }
    }
    else {
      plVar4 = (long *)((long)param_2[1] + 0x20);
    }
    if (local_38 == (Object *)*plVar4) {
      if ((StringName::configured != '\0') && (local_38 != (Object *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_40 = (Object *)0x0;
      String::parse_latin1
                ((String *)&local_40,"Cannot call method bind \'%s\' on placeholder instance.");
      vformat<StringName>((StringName *)&local_38,(String *)&local_40,&local_48);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x16b,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_38,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_38);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_40);
      if ((StringName::configured != '\0') && (local_48 != 0)) {
        StringName::unref();
      }
      goto LAB_001099be;
    }
    if ((StringName::configured != '\0') && (local_38 != (Object *)0x0)) {
      StringName::unref();
    }
  }
  pcVar5 = *(code **)(param_1 + 0x58);
  lVar1 = *(long *)(param_1 + 0x60);
  if (((ulong)pcVar5 & 1) != 0) {
    pcVar5 = *(code **)(pcVar5 + *(long *)((long)param_2 + lVar1) + -1);
  }
  if ((*(long **)((long)param_3 + 0x10) == (long *)0x0) ||
     (local_40 = (Object *)**(long **)((long)param_3 + 0x10), local_40 == (Object *)0x0)) {
LAB_0010995e:
    local_40 = (Object *)0x0;
  }
  else {
    cVar3 = RefCounted::init_ref();
    if (cVar3 == '\0') goto LAB_0010995e;
  }
  if ((*(long **)((long)param_3 + 8) == (long *)0x0) ||
     (local_38 = (Object *)**(long **)((long)param_3 + 8), local_38 == (Object *)0x0)) {
LAB_001099e0:
    local_38 = (Object *)0x0;
  }
  else {
    cVar3 = RefCounted::init_ref();
    if (cVar3 == '\0') goto LAB_001099e0;
  }
                    /* WARNING: Load size is inaccurate */
  (*pcVar5)((long *)((long)param_2 + lVar1),*param_3,(StringName *)&local_38,&local_40);
  if (local_38 != (Object *)0x0) {
    cVar3 = RefCounted::unreference();
    pOVar2 = local_38;
    if (cVar3 != '\0') {
      cVar3 = predelete_handler(local_38);
      if (cVar3 != '\0') {
        (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
        Memory::free_static(pOVar2,false);
      }
    }
  }
  if (local_40 != (Object *)0x0) {
    cVar3 = RefCounted::unreference();
    pOVar2 = local_40;
    if (cVar3 != '\0') {
      cVar3 = predelete_handler(local_40);
      if (cVar3 != '\0') {
        (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
        Memory::free_static(pOVar2,false);
      }
    }
  }
LAB_001099be:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<String const&, PopupMenu*, Ref<Texture2D> const&>::call(Object*, Variant const**,
   int, Callable::CallError&) const */

Object * MethodBindT<String_const&,PopupMenu*,Ref<Texture2D>const&>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  Variant *pVVar2;
  code *pcVar3;
  undefined8 uVar4;
  char cVar5;
  undefined4 uVar6;
  long lVar7;
  Object *pOVar8;
  Object *pOVar9;
  long *plVar10;
  long lVar11;
  uint uVar12;
  int iVar13;
  undefined4 in_register_00000014;
  long *plVar14;
  Variant *pVVar15;
  uint in_R8D;
  undefined4 *in_R9;
  Variant *pVVar16;
  long in_FS_OFFSET;
  long local_78;
  Object *local_70;
  char *local_68;
  undefined8 local_60;
  Variant *local_58 [3];
  long local_40;
  
  plVar14 = (long *)CONCAT44(in_register_00000014,param_3);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (((plVar14 != (long *)0x0) && (plVar14[1] != 0)) && (*(char *)(plVar14[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_68,(StringName *)(param_2 + 3));
    if (plVar14[1] == 0) {
      plVar10 = (long *)plVar14[0x23];
      if (plVar10 == (long *)0x0) {
        plVar10 = (long *)(**(code **)(*plVar14 + 0x40))(plVar14);
      }
    }
    else {
      plVar10 = (long *)(plVar14[1] + 0x20);
    }
    if (local_68 == (char *)*plVar10) {
      if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_68 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_70 = (Object *)0x0;
      local_60 = 0x35;
      String::parse_latin1((StrRange *)&local_70);
      vformat<StringName>((StringName *)&local_68,(StrRange *)&local_70,&local_78);
      _err_print_error(&_LC90,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_68,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      if ((StringName::configured != '\0') && (local_78 != 0)) {
        StringName::unref();
      }
      goto LAB_00109e5a;
    }
    if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar16 = param_2[0xb];
  pVVar1 = param_2[0xc];
  uVar6 = 3;
  if (in_R8D < 4) {
    pVVar2 = param_2[5];
    if (pVVar2 == (Variant *)0x0) {
      iVar13 = 0;
      lVar11 = 0;
    }
    else {
      lVar11 = *(long *)(pVVar2 + -8);
      iVar13 = (int)lVar11;
    }
    if ((int)(3 - in_R8D) <= iVar13) {
      lVar7 = 0;
      do {
        if ((int)lVar7 < (int)in_R8D) {
          pVVar15 = *(Variant **)(param_4 + lVar7 * 8);
        }
        else {
          uVar12 = iVar13 + -3 + (int)lVar7;
          if (lVar11 <= (int)uVar12) {
            _err_print_index_error
                      ("get","./core/templates/cowdata.h",0xdb,(long)(int)uVar12,lVar11,"p_index",
                       "size()","",false,true);
            _err_flush_stdout();
                    /* WARNING: Does not return */
            pcVar3 = (code *)invalidInstructionException();
            (*pcVar3)();
          }
          pVVar15 = pVVar2 + (ulong)uVar12 * 0x18;
        }
        local_58[lVar7] = pVVar15;
        lVar7 = lVar7 + 1;
      } while (lVar7 != 3);
      *in_R9 = 0;
      if (((ulong)pVVar16 & 1) != 0) {
        pVVar16 = *(Variant **)(pVVar16 + *(long *)((long)plVar14 + (long)pVVar1) + -1);
      }
      cVar5 = Variant::can_convert_strict(*(undefined4 *)local_58[2]);
      uVar4 = _LC91;
      if (cVar5 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = uVar4;
      }
      local_70 = (Object *)0x0;
      pOVar8 = (Object *)Variant::get_validated_object();
      pOVar9 = local_70;
      if (pOVar8 != local_70) {
        if (pOVar8 == (Object *)0x0) {
          if (local_70 != (Object *)0x0) {
            local_70 = (Object *)0x0;
LAB_00109d48:
            cVar5 = RefCounted::unreference();
            if ((cVar5 != '\0') && (cVar5 = predelete_handler(pOVar9), cVar5 != '\0')) {
              (**(code **)(*(long *)pOVar9 + 0x140))(pOVar9);
              Memory::free_static(pOVar9,false);
            }
          }
        }
        else {
          pOVar8 = (Object *)__dynamic_cast(pOVar8,&Object::typeinfo,&Texture2D::typeinfo,0);
          if (pOVar9 != pOVar8) {
            local_70 = pOVar8;
            if ((pOVar8 != (Object *)0x0) && (cVar5 = RefCounted::reference(), cVar5 == '\0')) {
              local_70 = (Object *)0x0;
            }
            if (pOVar9 != (Object *)0x0) goto LAB_00109d48;
          }
        }
      }
      cVar5 = Variant::can_convert_strict(*(undefined4 *)local_58[1],0x18);
      if (cVar5 == '\0') {
LAB_00109d72:
        uVar4 = _LC92;
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = uVar4;
      }
      else {
        pOVar9 = Variant::operator_cast_to_Object_(local_58[1]);
        pOVar8 = Variant::operator_cast_to_Object_(local_58[1]);
        if (((pOVar8 == (Object *)0x0) ||
            (lVar11 = __dynamic_cast(pOVar8,&Object::typeinfo,&PopupMenu::typeinfo,0), lVar11 == 0))
           && (pOVar9 != (Object *)0x0)) goto LAB_00109d72;
      }
      pOVar9 = Variant::operator_cast_to_Object_(local_58[1]);
      if (pOVar9 != (Object *)0x0) {
        pOVar9 = (Object *)__dynamic_cast(pOVar9,&Object::typeinfo,&PopupMenu::typeinfo,0);
      }
      cVar5 = Variant::can_convert_strict(*(undefined4 *)local_58[0],4);
      uVar4 = _LC93;
      if (cVar5 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = uVar4;
      }
      Variant::operator_cast_to_String((Variant *)&local_68);
      (*(code *)pVVar16)((Variant *)((long)plVar14 + (long)pVVar1),(Variant *)&local_68,pOVar9,
                         &local_70);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      if (((local_70 != (Object *)0x0) &&
          (cVar5 = RefCounted::unreference(), pOVar9 = local_70, cVar5 != '\0')) &&
         (cVar5 = predelete_handler(local_70), cVar5 != '\0')) {
        (**(code **)(*(long *)pOVar9 + 0x140))(pOVar9);
        Memory::free_static(pOVar9,false);
      }
      goto LAB_00109e5a;
    }
    uVar6 = 4;
  }
  *in_R9 = uVar6;
  in_R9[2] = 3;
LAB_00109e5a:
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* MethodBindT<String const&, Ref<Shortcut> const&, Ref<Texture2D> const&>::call(Object*, Variant
   const**, int, Callable::CallError&) const */

Object * MethodBindT<String_const&,Ref<Shortcut>const&,Ref<Texture2D>const&>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  Variant *pVVar2;
  code *pcVar3;
  undefined8 uVar4;
  Object *pOVar5;
  char cVar6;
  undefined4 uVar7;
  long lVar8;
  Object *pOVar9;
  long *plVar10;
  uint uVar11;
  int iVar12;
  undefined4 in_register_00000014;
  long *plVar13;
  Variant *pVVar14;
  long lVar15;
  uint in_R8D;
  undefined4 *in_R9;
  Variant *pVVar16;
  long in_FS_OFFSET;
  Object *local_78;
  Object *local_70;
  char *local_68;
  undefined8 local_60;
  undefined4 *local_58 [3];
  long local_40;
  
  plVar13 = (long *)CONCAT44(in_register_00000014,param_3);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (((plVar13 != (long *)0x0) && (plVar13[1] != 0)) && (*(char *)(plVar13[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_68,(StringName *)(param_2 + 3));
    if (plVar13[1] == 0) {
      plVar10 = (long *)plVar13[0x23];
      if (plVar10 == (long *)0x0) {
        plVar10 = (long *)(**(code **)(*plVar13 + 0x40))(plVar13);
      }
    }
    else {
      plVar10 = (long *)(plVar13[1] + 0x20);
    }
    if (local_68 == (char *)*plVar10) {
      if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_68 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_70 = (Object *)0x0;
      local_60 = 0x35;
      String::parse_latin1((StrRange *)&local_70);
      vformat<StringName>((StringName *)&local_68,(StrRange *)&local_70,&local_78);
      _err_print_error(&_LC90,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_68,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      if ((StringName::configured != '\0') && (local_78 != (Object *)0x0)) {
        StringName::unref();
      }
      goto LAB_0010a3c2;
    }
    if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar16 = param_2[0xb];
  pVVar1 = param_2[0xc];
  uVar7 = 3;
  if (in_R8D < 4) {
    pVVar2 = param_2[5];
    if (pVVar2 == (Variant *)0x0) {
      iVar12 = 0;
      lVar15 = 0;
    }
    else {
      lVar15 = *(long *)(pVVar2 + -8);
      iVar12 = (int)lVar15;
    }
    if ((int)(3 - in_R8D) <= iVar12) {
      lVar8 = 0;
      do {
        if ((int)lVar8 < (int)in_R8D) {
          pVVar14 = *(Variant **)(param_4 + lVar8 * 8);
        }
        else {
          uVar11 = iVar12 + -3 + (int)lVar8;
          if (lVar15 <= (int)uVar11) {
            _err_print_index_error
                      ("get","./core/templates/cowdata.h",0xdb,(long)(int)uVar11,lVar15,"p_index",
                       "size()","",false,true);
            _err_flush_stdout();
                    /* WARNING: Does not return */
            pcVar3 = (code *)invalidInstructionException();
            (*pcVar3)();
          }
          pVVar14 = pVVar2 + (ulong)uVar11 * 0x18;
        }
        local_58[lVar8] = (undefined4 *)pVVar14;
        lVar8 = lVar8 + 1;
      } while (lVar8 != 3);
      *in_R9 = 0;
      if (((ulong)pVVar16 & 1) != 0) {
        pVVar16 = *(Variant **)(pVVar16 + *(long *)((long)plVar13 + (long)pVVar1) + -1);
      }
      cVar6 = Variant::can_convert_strict(*local_58[2]);
      uVar4 = _LC91;
      if (cVar6 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = uVar4;
      }
      local_78 = (Object *)0x0;
      pOVar9 = (Object *)Variant::get_validated_object();
      pOVar5 = local_78;
      if (pOVar9 != local_78) {
        if (pOVar9 == (Object *)0x0) {
          if (local_78 != (Object *)0x0) {
            local_78 = (Object *)0x0;
LAB_0010a25b:
            cVar6 = RefCounted::unreference();
            if (cVar6 != '\0') {
              cVar6 = predelete_handler(pOVar5);
              if (cVar6 != '\0') {
                (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
                Memory::free_static(pOVar5,false);
              }
            }
          }
        }
        else {
          pOVar9 = (Object *)__dynamic_cast(pOVar9,&Object::typeinfo,&Texture2D::typeinfo,0);
          if (pOVar5 != pOVar9) {
            local_78 = pOVar9;
            if (pOVar9 != (Object *)0x0) {
              cVar6 = RefCounted::reference();
              if (cVar6 == '\0') {
                local_78 = (Object *)0x0;
              }
            }
            if (pOVar5 != (Object *)0x0) goto LAB_0010a25b;
          }
        }
      }
      cVar6 = Variant::can_convert_strict(*local_58[1]);
      uVar4 = _LC92;
      if (cVar6 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = uVar4;
      }
      local_70 = (Object *)0x0;
      pOVar9 = (Object *)Variant::get_validated_object();
      pOVar5 = local_70;
      if (pOVar9 != local_70) {
        if (pOVar9 == (Object *)0x0) {
          if (local_70 != (Object *)0x0) {
            local_70 = (Object *)0x0;
LAB_0010a2f6:
            cVar6 = RefCounted::unreference();
            if (cVar6 != '\0') {
              cVar6 = predelete_handler(pOVar5);
              if (cVar6 != '\0') {
                (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
                Memory::free_static(pOVar5,false);
              }
            }
          }
        }
        else {
          pOVar9 = (Object *)__dynamic_cast(pOVar9,&Object::typeinfo,&Shortcut::typeinfo,0);
          if (pOVar5 != pOVar9) {
            local_70 = pOVar9;
            if (pOVar9 != (Object *)0x0) {
              cVar6 = RefCounted::reference();
              if (cVar6 == '\0') {
                local_70 = (Object *)0x0;
              }
            }
            if (pOVar5 != (Object *)0x0) goto LAB_0010a2f6;
          }
        }
      }
      cVar6 = Variant::can_convert_strict(*local_58[0],4);
      uVar4 = _LC93;
      if (cVar6 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = uVar4;
      }
      Variant::operator_cast_to_String((Variant *)&local_68);
      (*(code *)pVVar16)((Variant *)((long)plVar13 + (long)pVVar1),(Variant *)&local_68,&local_70,
                         &local_78);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      if (local_70 != (Object *)0x0) {
        cVar6 = RefCounted::unreference();
        pOVar5 = local_70;
        if (cVar6 != '\0') {
          cVar6 = predelete_handler(local_70);
          if (cVar6 != '\0') {
            (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
            Memory::free_static(pOVar5,false);
          }
        }
      }
      if (local_78 != (Object *)0x0) {
        cVar6 = RefCounted::unreference();
        pOVar5 = local_78;
        if (cVar6 != '\0') {
          cVar6 = predelete_handler(local_78);
          if (cVar6 != '\0') {
            (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
            Memory::free_static(pOVar5,false);
          }
        }
      }
      goto LAB_0010a3c2;
    }
    uVar7 = 4;
  }
  *in_R9 = uVar7;
  in_R9[2] = 3;
LAB_0010a3c2:
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Ref<Shortcut> const&, Callable const&>::call(Object*, Variant const**, int,
   Callable::CallError&) const */

Object * MethodBindT<Ref<Shortcut>const&,Callable_const&>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  char cVar5;
  int iVar6;
  undefined4 uVar7;
  long *plVar8;
  long lVar9;
  undefined4 in_register_00000014;
  long *plVar10;
  Variant *pVVar11;
  int iVar12;
  uint in_R8D;
  undefined4 *in_R9;
  Variant *pVVar13;
  Variant *pVVar14;
  long in_FS_OFFSET;
  long local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  plVar10 = (long *)CONCAT44(in_register_00000014,param_3);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (((plVar10 != (long *)0x0) && (plVar10[1] != 0)) && (*(char *)(plVar10[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(param_2 + 3));
    if (plVar10[1] == 0) {
      plVar8 = (long *)plVar10[0x23];
      if (plVar8 == (long *)0x0) {
        plVar8 = (long *)(**(code **)(*plVar10 + 0x40))(plVar10);
      }
    }
    else {
      plVar8 = (long *)(plVar10[1] + 0x20);
    }
    if (local_58 == (char *)*plVar8) {
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error(&_LC90,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_0010a8b0;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar13 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (2 < in_R8D) {
    uVar7 = 3;
LAB_0010a8a5:
    *in_R9 = uVar7;
    in_R9[2] = 2;
    goto LAB_0010a8b0;
  }
  pVVar14 = param_2[5];
  iVar6 = 2 - in_R8D;
  if (pVVar14 == (Variant *)0x0) {
    if (iVar6 != 0) goto LAB_0010a8e8;
    pVVar11 = *(Variant **)param_4;
LAB_0010a8fd:
    pVVar14 = *(Variant **)(param_4 + 8);
  }
  else {
    lVar2 = *(long *)(pVVar14 + -8);
    iVar12 = (int)lVar2;
    if (iVar12 < iVar6) {
LAB_0010a8e8:
      uVar7 = 4;
      goto LAB_0010a8a5;
    }
    if (in_R8D == 0) {
      lVar9 = (long)(iVar12 + -2);
      if (lVar2 <= lVar9) goto LAB_0010aa00;
      pVVar11 = pVVar14 + lVar9 * 0x18;
    }
    else {
      pVVar11 = *(Variant **)param_4;
      if (in_R8D == 2) goto LAB_0010a8fd;
    }
    lVar9 = (long)(int)((in_R8D ^ 1) + (iVar12 - iVar6));
    if (lVar2 <= lVar9) {
LAB_0010aa00:
      _err_print_index_error
                ("get","./core/templates/cowdata.h",0xdb,lVar9,lVar2,"p_index","size()","",false,
                 true);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    pVVar14 = pVVar14 + lVar9 * 0x18;
  }
  *in_R9 = 0;
  if (((ulong)pVVar13 & 1) != 0) {
    pVVar13 = *(Variant **)(pVVar13 + *(long *)((long)plVar10 + (long)pVVar1) + -1);
  }
  cVar5 = Variant::can_convert_strict(*(undefined4 *)pVVar14,0x19);
  uVar4 = _LC95;
  if (cVar5 == '\0') {
    *in_R9 = 2;
    *(undefined8 *)(in_R9 + 1) = uVar4;
  }
  Variant::operator_cast_to_Callable((Variant *)&local_58);
  cVar5 = Variant::can_convert_strict(*(undefined4 *)pVVar11,0x18);
  uVar4 = _LC96;
  if (cVar5 == '\0') {
    *in_R9 = 2;
    *(undefined8 *)(in_R9 + 1) = uVar4;
  }
  local_68 = 0;
  lVar9 = Variant::get_validated_object();
  lVar2 = local_68;
  if (lVar9 != local_68) {
    if (lVar9 == 0) {
      if (local_68 != 0) {
        local_68 = 0;
        local_60 = lVar2;
        goto LAB_0010a86c;
      }
    }
    else {
      lVar9 = __dynamic_cast(lVar9,&Object::typeinfo,&Shortcut::typeinfo,0);
      if (lVar2 != lVar9) {
        local_60 = lVar2;
        local_68 = lVar9;
        if (lVar9 != 0) {
          cVar5 = RefCounted::reference();
          if (cVar5 == '\0') {
            local_68 = 0;
          }
        }
LAB_0010a86c:
        Ref<Shortcut>::unref((Ref<Shortcut> *)&local_60);
      }
    }
  }
  (*(code *)pVVar13)((Variant *)((long)plVar10 + (long)pVVar1),(Ref<Shortcut> *)&local_68,
                     (Variant *)&local_58);
  Ref<Shortcut>::unref((Ref<Shortcut> *)&local_68);
  Callable::~Callable((Callable *)&local_58);
LAB_0010a8b0:
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<String const&, Callable const&, Ref<Texture2D> const&>::call(Object*, Variant
   const**, int, Callable::CallError&) const */

Object * MethodBindT<String_const&,Callable_const&,Ref<Texture2D>const&>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  Variant *pVVar2;
  code *pcVar3;
  undefined8 uVar4;
  Object *pOVar5;
  char cVar6;
  undefined4 uVar7;
  long lVar8;
  Object *pOVar9;
  long *plVar10;
  int iVar11;
  uint uVar12;
  Variant *pVVar13;
  undefined4 in_register_00000014;
  long *plVar14;
  long lVar15;
  uint in_R8D;
  undefined4 *in_R9;
  Variant *pVVar16;
  long in_FS_OFFSET;
  Object *local_78;
  undefined8 local_70;
  char *local_68;
  undefined8 local_60;
  undefined4 *local_58 [3];
  long local_40;
  
  plVar14 = (long *)CONCAT44(in_register_00000014,param_3);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (((plVar14 != (long *)0x0) && (plVar14[1] != 0)) && (*(char *)(plVar14[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_68,(StringName *)(param_2 + 3));
    if (plVar14[1] == 0) {
      plVar10 = (long *)plVar14[0x23];
      if (plVar10 == (long *)0x0) {
        plVar10 = (long *)(**(code **)(*plVar14 + 0x40))();
      }
    }
    else {
      plVar10 = (long *)(plVar14[1] + 0x20);
    }
    if (local_68 == (char *)*plVar10) {
      if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_68 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_70 = 0;
      local_60 = 0x35;
      String::parse_latin1((StrRange *)&local_70);
      vformat<StringName>((StringName *)&local_68,(StrRange *)&local_70,&local_78);
      _err_print_error(&_LC90,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_68,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      if ((StringName::configured != '\0') && (local_78 != (Object *)0x0)) {
        StringName::unref();
      }
      goto LAB_0010ad82;
    }
    if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar16 = param_2[0xb];
  pVVar1 = param_2[0xc];
  uVar7 = 3;
  if (in_R8D < 4) {
    pVVar2 = param_2[5];
    if (pVVar2 == (Variant *)0x0) {
      iVar11 = 0;
      lVar15 = 0;
    }
    else {
      lVar15 = *(long *)(pVVar2 + -8);
      iVar11 = (int)lVar15;
    }
    if ((int)(3 - in_R8D) <= iVar11) {
      lVar8 = 0;
      do {
        if ((int)lVar8 < (int)in_R8D) {
          pVVar13 = *(Variant **)(param_4 + lVar8 * 8);
        }
        else {
          uVar12 = iVar11 + -3 + (int)lVar8;
          if (lVar15 <= (int)uVar12) {
            _err_print_index_error
                      ("get","./core/templates/cowdata.h",0xdb,(long)(int)uVar12,lVar15,"p_index",
                       "size()","",false,true);
            _err_flush_stdout();
                    /* WARNING: Does not return */
            pcVar3 = (code *)invalidInstructionException();
            (*pcVar3)();
          }
          pVVar13 = pVVar2 + (ulong)uVar12 * 0x18;
        }
        local_58[lVar8] = (undefined4 *)pVVar13;
        lVar8 = lVar8 + 1;
      } while (lVar8 != 3);
      *in_R9 = 0;
      if (((ulong)pVVar16 & 1) != 0) {
        pVVar16 = *(Variant **)(pVVar16 + *(long *)((long)plVar14 + (long)pVVar1) + -1);
      }
      cVar6 = Variant::can_convert_strict(*local_58[2]);
      uVar4 = _LC91;
      if (cVar6 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = uVar4;
      }
      local_78 = (Object *)0x0;
      pOVar9 = (Object *)Variant::get_validated_object();
      pOVar5 = local_78;
      if (pOVar9 != local_78) {
        if (pOVar9 == (Object *)0x0) {
          if (local_78 != (Object *)0x0) {
            local_78 = (Object *)0x0;
LAB_0010ac89:
            cVar6 = RefCounted::unreference();
            if (cVar6 != '\0') {
              cVar6 = predelete_handler(pOVar5);
              if (cVar6 != '\0') {
                (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
                Memory::free_static(pOVar5,false);
              }
            }
          }
        }
        else {
          pOVar9 = (Object *)__dynamic_cast(pOVar9,&Object::typeinfo,&Texture2D::typeinfo,0);
          if (pOVar5 != pOVar9) {
            local_78 = pOVar9;
            if (pOVar9 != (Object *)0x0) {
              cVar6 = RefCounted::reference();
              if (cVar6 == '\0') {
                local_78 = (Object *)0x0;
              }
            }
            if (pOVar5 != (Object *)0x0) goto LAB_0010ac89;
          }
        }
      }
      cVar6 = Variant::can_convert_strict(*local_58[1],0x19);
      uVar4 = _LC95;
      if (cVar6 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = uVar4;
      }
      Variant::operator_cast_to_Callable((Variant *)&local_68);
      cVar6 = Variant::can_convert_strict(*local_58[0],4);
      uVar4 = _LC93;
      if (cVar6 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = uVar4;
      }
      Variant::operator_cast_to_String((Variant *)&local_70);
      (*(code *)pVVar16)((Variant *)((long)plVar14 + (long)pVVar1),(Variant *)&local_70,
                         (Variant *)&local_68,&local_78);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      Callable::~Callable((Callable *)&local_68);
      if (local_78 != (Object *)0x0) {
        cVar6 = RefCounted::unreference();
        pOVar5 = local_78;
        if (cVar6 != '\0') {
          cVar6 = predelete_handler(local_78);
          if (cVar6 != '\0') {
            (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
            Memory::free_static(pOVar5,false);
          }
        }
      }
      goto LAB_0010ad82;
    }
    uVar7 = 4;
  }
  *in_R9 = uVar7;
  in_R9[2] = 3;
LAB_0010ad82:
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_get_argument_type_info_helper<String const&>(int, int&, PropertyInfo&) */

void call_get_argument_type_info_helper<String_const&>
               (int param_1,int *param_2,PropertyInfo *param_3)

{
  long lVar1;
  int iVar2;
  long in_FS_OFFSET;
  undefined8 local_98;
  undefined8 local_90;
  long local_88;
  long local_80;
  undefined4 local_78;
  long local_70;
  long local_68;
  int local_60;
  long local_58;
  undefined4 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar2 = *param_2;
  if (iVar2 == param_1) {
    local_88 = 0;
    local_90 = 0;
    String::parse_latin1((String *)&local_90,"");
    local_98 = 0;
    local_78 = 4;
    local_70 = 0;
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)&local_98);
    local_68 = 0;
    local_60 = 0;
    local_58 = 0;
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 6;
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
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
    if ((StringName::configured != '\0') && (local_88 != 0)) {
      StringName::unref();
    }
    *(undefined4 *)param_3 = local_78;
    if (*(long *)(param_3 + 8) != local_70) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(param_3 + 8));
      lVar1 = local_70;
      local_70 = 0;
      *(long *)(param_3 + 8) = lVar1;
    }
    if (*(long *)(param_3 + 0x10) != local_68) {
      StringName::unref();
      lVar1 = local_68;
      local_68 = 0;
      *(long *)(param_3 + 0x10) = lVar1;
    }
    *(int *)(param_3 + 0x18) = local_60;
    if (*(long *)(param_3 + 0x20) != local_58) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(param_3 + 0x20));
      lVar1 = local_58;
      local_58 = 0;
      *(long *)(param_3 + 0x20) = lVar1;
    }
    *(undefined4 *)(param_3 + 0x28) = local_50;
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
    if ((StringName::configured != '\0') && (local_68 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
    iVar2 = *param_2;
  }
  *param_2 = iVar2 + 1;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_get_argument_type_info_helper<Ref<Texture2D> const&>(int, int&, PropertyInfo&) */

void call_get_argument_type_info_helper<Ref<Texture2D>const&>
               (int param_1,int *param_2,PropertyInfo *param_3)

{
  long lVar1;
  int iVar2;
  long in_FS_OFFSET;
  undefined8 local_98;
  undefined8 local_90;
  long local_88;
  long local_80;
  undefined4 local_78;
  long local_70;
  long local_68;
  int local_60;
  long local_58;
  undefined4 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar2 = *param_2;
  if (iVar2 == param_1) {
    local_88 = 0;
    local_90 = 0;
    String::parse_latin1((String *)&local_90,"Texture2D");
    local_98 = 0;
    local_78 = 0x18;
    local_70 = 0;
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)&local_98);
    local_68 = 0;
    local_60 = 0x11;
    local_58 = 0;
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 6;
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
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
    if ((StringName::configured != '\0') && (local_88 != 0)) {
      StringName::unref();
    }
    *(undefined4 *)param_3 = local_78;
    if (*(long *)(param_3 + 8) != local_70) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(param_3 + 8));
      lVar1 = local_70;
      local_70 = 0;
      *(long *)(param_3 + 8) = lVar1;
    }
    if (*(long *)(param_3 + 0x10) != local_68) {
      StringName::unref();
      lVar1 = local_68;
      local_68 = 0;
      *(long *)(param_3 + 0x10) = lVar1;
    }
    *(int *)(param_3 + 0x18) = local_60;
    if (*(long *)(param_3 + 0x20) != local_58) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(param_3 + 0x20));
      lVar1 = local_58;
      local_58 = 0;
      *(long *)(param_3 + 0x20) = lVar1;
    }
    *(undefined4 *)(param_3 + 0x28) = local_50;
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
    if ((StringName::configured != '\0') && (local_68 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
    iVar2 = *param_2;
  }
  *param_2 = iVar2 + 1;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_get_argument_type_info<String const&, PopupMenu*, Ref<Texture2D> const&>(int,
   PropertyInfo&) */

void call_get_argument_type_info<String_const&,PopupMenu*,Ref<Texture2D>const&>
               (int param_1,PropertyInfo *param_2)

{
  int iVar1;
  long lVar2;
  long in_FS_OFFSET;
  int local_8c;
  undefined8 local_88;
  long local_80;
  char *local_78;
  long local_70;
  long local_68;
  undefined4 local_60;
  long local_58;
  undefined4 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_8c = 0;
  call_get_argument_type_info_helper<String_const&>(param_1,&local_8c,param_2);
  iVar1 = local_8c;
  if (param_1 == local_8c) {
    local_88 = 0;
    local_78 = "PopupMenu";
    local_70 = 9;
    String::parse_latin1((StrRange *)&local_88);
    StringName::StringName((StringName *)&local_80,(String *)&local_88,false);
    local_78 = (char *)CONCAT44(local_78._4_4_,0x18);
    local_70 = 0;
    StringName::StringName((StringName *)&local_68,(StringName *)&local_80);
    local_60 = 0;
    local_58 = 0;
    local_50 = 6;
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
    *(undefined4 *)param_2 = local_78._0_4_;
    if (*(long *)(param_2 + 8) != local_70) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(param_2 + 8));
      lVar2 = local_70;
      local_70 = 0;
      *(long *)(param_2 + 8) = lVar2;
    }
    if (*(long *)(param_2 + 0x10) != local_68) {
      StringName::unref();
      lVar2 = local_68;
      local_68 = 0;
      *(long *)(param_2 + 0x10) = lVar2;
    }
    *(undefined4 *)(param_2 + 0x18) = local_60;
    if (*(long *)(param_2 + 0x20) != local_58) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(param_2 + 0x20));
      lVar2 = local_58;
      local_58 = 0;
      *(long *)(param_2 + 0x20) = lVar2;
    }
    *(undefined4 *)(param_2 + 0x28) = local_50;
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
    if ((StringName::configured != '\0') && (local_68 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  }
  local_8c = iVar1 + 1;
  call_get_argument_type_info_helper<Ref<Texture2D>const&>(param_1,&local_8c,param_2);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<String const&, PopupMenu*, Ref<Texture2D> const&>::_gen_argument_type_info(int) const
    */

PropertyInfo *
MethodBindT<String_const&,PopupMenu*,Ref<Texture2D>const&>::_gen_argument_type_info(int param_1)

{
  int in_EDX;
  undefined4 in_register_0000003c;
  PropertyInfo *pPVar1;
  
  pPVar1 = (PropertyInfo *)CONCAT44(in_register_0000003c,param_1);
  *(undefined4 *)pPVar1 = 0;
  *(undefined4 *)(pPVar1 + 0x18) = 0;
  *(undefined8 *)(pPVar1 + 0x20) = 0;
  *(undefined4 *)(pPVar1 + 0x28) = 6;
  *(undefined1 (*) [16])(pPVar1 + 8) = (undefined1  [16])0x0;
  call_get_argument_type_info<String_const&,PopupMenu*,Ref<Texture2D>const&>(in_EDX,pPVar1);
  return pPVar1;
}



/* void call_get_argument_type_info_helper<Ref<Shortcut> const&>(int, int&, PropertyInfo&) */

void call_get_argument_type_info_helper<Ref<Shortcut>const&>
               (int param_1,int *param_2,PropertyInfo *param_3)

{
  long lVar1;
  int iVar2;
  long in_FS_OFFSET;
  undefined8 local_98;
  undefined8 local_90;
  long local_88;
  long local_80;
  undefined4 local_78;
  long local_70;
  long local_68;
  int local_60;
  long local_58;
  undefined4 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar2 = *param_2;
  if (iVar2 == param_1) {
    local_88 = 0;
    local_90 = 0;
    String::parse_latin1((String *)&local_90,"Shortcut");
    local_98 = 0;
    local_78 = 0x18;
    local_70 = 0;
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)&local_98);
    local_68 = 0;
    local_60 = 0x11;
    local_58 = 0;
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 6;
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
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
    if ((StringName::configured != '\0') && (local_88 != 0)) {
      StringName::unref();
    }
    *(undefined4 *)param_3 = local_78;
    if (*(long *)(param_3 + 8) != local_70) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(param_3 + 8));
      lVar1 = local_70;
      local_70 = 0;
      *(long *)(param_3 + 8) = lVar1;
    }
    if (*(long *)(param_3 + 0x10) != local_68) {
      StringName::unref();
      lVar1 = local_68;
      local_68 = 0;
      *(long *)(param_3 + 0x10) = lVar1;
    }
    *(int *)(param_3 + 0x18) = local_60;
    if (*(long *)(param_3 + 0x20) != local_58) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(param_3 + 0x20));
      lVar1 = local_58;
      local_58 = 0;
      *(long *)(param_3 + 0x20) = lVar1;
    }
    *(undefined4 *)(param_3 + 0x28) = local_50;
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
    if ((StringName::configured != '\0') && (local_68 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
    iVar2 = *param_2;
  }
  *param_2 = iVar2 + 1;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<String const&, Ref<Shortcut> const&, Ref<Texture2D>
   const&>::_gen_argument_type_info(int) const */

PropertyInfo *
MethodBindT<String_const&,Ref<Shortcut>const&,Ref<Texture2D>const&>::_gen_argument_type_info
          (int param_1)

{
  int in_EDX;
  undefined4 in_register_0000003c;
  PropertyInfo *pPVar1;
  long in_FS_OFFSET;
  int local_24;
  long local_20;
  
  pPVar1 = (PropertyInfo *)CONCAT44(in_register_0000003c,param_1);
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)pPVar1 = 0;
  *(undefined4 *)(pPVar1 + 0x18) = 0;
  *(undefined8 *)(pPVar1 + 0x20) = 0;
  *(undefined4 *)(pPVar1 + 0x28) = 6;
  *(undefined1 (*) [16])(pPVar1 + 8) = (undefined1  [16])0x0;
  local_24 = 0;
  call_get_argument_type_info_helper<String_const&>(in_EDX,&local_24,pPVar1);
  call_get_argument_type_info_helper<Ref<Shortcut>const&>(in_EDX,&local_24,pPVar1);
  call_get_argument_type_info_helper<Ref<Texture2D>const&>(in_EDX,&local_24,pPVar1);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pPVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_get_argument_type_info_helper<Callable const&>(int, int&, PropertyInfo&) */

void call_get_argument_type_info_helper<Callable_const&>
               (int param_1,int *param_2,PropertyInfo *param_3)

{
  long lVar1;
  int iVar2;
  long in_FS_OFFSET;
  undefined8 local_98;
  undefined8 local_90;
  long local_88;
  long local_80;
  undefined4 local_78;
  long local_70;
  long local_68;
  int local_60;
  long local_58;
  undefined4 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar2 = *param_2;
  if (iVar2 == param_1) {
    local_88 = 0;
    local_90 = 0;
    String::parse_latin1((String *)&local_90,"");
    local_98 = 0;
    local_78 = 0x19;
    local_70 = 0;
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)&local_98);
    local_68 = 0;
    local_60 = 0;
    local_58 = 0;
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 6;
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
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
    if ((StringName::configured != '\0') && (local_88 != 0)) {
      StringName::unref();
    }
    *(undefined4 *)param_3 = local_78;
    if (*(long *)(param_3 + 8) != local_70) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(param_3 + 8));
      lVar1 = local_70;
      local_70 = 0;
      *(long *)(param_3 + 8) = lVar1;
    }
    if (*(long *)(param_3 + 0x10) != local_68) {
      StringName::unref();
      lVar1 = local_68;
      local_68 = 0;
      *(long *)(param_3 + 0x10) = lVar1;
    }
    *(int *)(param_3 + 0x18) = local_60;
    if (*(long *)(param_3 + 0x20) != local_58) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(param_3 + 0x20));
      lVar1 = local_58;
      local_58 = 0;
      *(long *)(param_3 + 0x20) = lVar1;
    }
    *(undefined4 *)(param_3 + 0x28) = local_50;
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
    if ((StringName::configured != '\0') && (local_68 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
    iVar2 = *param_2;
  }
  *param_2 = iVar2 + 1;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<String const&, Callable const&, Ref<Texture2D> const&>::_gen_argument_type_info(int)
   const */

PropertyInfo *
MethodBindT<String_const&,Callable_const&,Ref<Texture2D>const&>::_gen_argument_type_info
          (int param_1)

{
  int in_EDX;
  undefined4 in_register_0000003c;
  PropertyInfo *pPVar1;
  long in_FS_OFFSET;
  int local_24;
  long local_20;
  
  pPVar1 = (PropertyInfo *)CONCAT44(in_register_0000003c,param_1);
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)pPVar1 = 0;
  *(undefined4 *)(pPVar1 + 0x18) = 0;
  *(undefined8 *)(pPVar1 + 0x20) = 0;
  *(undefined4 *)(pPVar1 + 0x28) = 6;
  *(undefined1 (*) [16])(pPVar1 + 8) = (undefined1  [16])0x0;
  local_24 = 0;
  call_get_argument_type_info_helper<String_const&>(in_EDX,&local_24,pPVar1);
  call_get_argument_type_info_helper<Callable_const&>(in_EDX,&local_24,pPVar1);
  call_get_argument_type_info_helper<Ref<Texture2D>const&>(in_EDX,&local_24,pPVar1);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pPVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Ref<Shortcut> const&, Callable const&>::_gen_argument_type_info(int) const */

PropertyInfo *
MethodBindT<Ref<Shortcut>const&,Callable_const&>::_gen_argument_type_info(int param_1)

{
  int in_EDX;
  undefined4 in_register_0000003c;
  PropertyInfo *pPVar1;
  long in_FS_OFFSET;
  int local_24;
  long local_20;
  
  pPVar1 = (PropertyInfo *)CONCAT44(in_register_0000003c,param_1);
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)pPVar1 = 0;
  *(undefined4 *)(pPVar1 + 0x18) = 0;
  *(undefined8 *)(pPVar1 + 0x20) = 0;
  *(undefined4 *)(pPVar1 + 0x28) = 6;
  *(undefined1 (*) [16])(pPVar1 + 8) = (undefined1  [16])0x0;
  local_24 = 0;
  call_get_argument_type_info_helper<Ref<Shortcut>const&>(in_EDX,&local_24,pPVar1);
  call_get_argument_type_info_helper<Callable_const&>(in_EDX,&local_24,pPVar1);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pPVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorContextMenuPlugin::get_options(Vector<String> const&) */

void EditorContextMenuPlugin::_GLOBAL__sub_I_get_options(void)

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
/* EditorContextMenuPluginManager::~EditorContextMenuPluginManager() */

void __thiscall
EditorContextMenuPluginManager::~EditorContextMenuPluginManager
          (EditorContextMenuPluginManager *this)

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
/* MethodBindT<String const&, PopupMenu*, Ref<Texture2D> const&>::~MethodBindT() */

void __thiscall
MethodBindT<String_const&,PopupMenu*,Ref<Texture2D>const&>::~MethodBindT
          (MethodBindT<String_const&,PopupMenu*,Ref<Texture2D>const&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<String const&, Ref<Shortcut> const&, Ref<Texture2D> const&>::~MethodBindT() */

void __thiscall
MethodBindT<String_const&,Ref<Shortcut>const&,Ref<Texture2D>const&>::~MethodBindT
          (MethodBindT<String_const&,Ref<Shortcut>const&,Ref<Texture2D>const&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<String const&, Callable const&, Ref<Texture2D> const&>::~MethodBindT() */

void __thiscall
MethodBindT<String_const&,Callable_const&,Ref<Texture2D>const&>::~MethodBindT
          (MethodBindT<String_const&,Callable_const&,Ref<Texture2D>const&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<Ref<Shortcut> const&, Callable const&>::~MethodBindT() */

void __thiscall
MethodBindT<Ref<Shortcut>const&,Callable_const&>::~MethodBindT
          (MethodBindT<Ref<Shortcut>const&,Callable_const&> *this)

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
/* EditorContextMenuPlugin::~EditorContextMenuPlugin() */

void __thiscall EditorContextMenuPlugin::~EditorContextMenuPlugin(EditorContextMenuPlugin *this)

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



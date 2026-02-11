
/* NavigationPolygonEditor::_get_node() const */

undefined8 __thiscall NavigationPolygonEditor::_get_node(NavigationPolygonEditor *this)

{
  return *(undefined8 *)(this + 0xaa8);
}



/* NavigationPolygonEditor::_get_polygon_count() const */

undefined4 NavigationPolygonEditor::_get_polygon_count(void)

{
  long lVar1;
  char cVar2;
  undefined4 uVar3;
  long in_FS_OFFSET;
  undefined8 local_28;
  
  uVar3 = 0;
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  NavigationRegion2D::get_navigation_polygon();
  if (local_28 != (Object *)0x0) {
    uVar3 = NavigationPolygon::get_outline_count();
    if (local_28 != (Object *)0x0) {
      cVar2 = RefCounted::unreference();
      if (cVar2 != '\0') {
        cVar2 = predelete_handler(local_28);
        if (cVar2 != '\0') {
          (**(code **)(*(long *)local_28 + 0x140))(local_28);
          Memory::free_static(local_28,false);
        }
      }
    }
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* NavigationPolygonEditor::NavigationPolygonEditor() */

void __thiscall NavigationPolygonEditor::NavigationPolygonEditor(NavigationPolygonEditor *this)

{
  String *pSVar1;
  long *plVar2;
  code *pcVar3;
  BoxContainer *this_00;
  Button *pBVar4;
  Label *this_01;
  Timer *this_02;
  AcceptDialog *this_03;
  long in_FS_OFFSET;
  float fVar5;
  String local_78 [8];
  long local_70;
  undefined8 local_68 [2];
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  AbstractPolygon2DEditor::AbstractPolygon2DEditor((AbstractPolygon2DEditor *)this,true);
  *(undefined8 *)(this + 0xad8) = 0;
  *(undefined ***)this = &PTR__initialize_classv_00109c58;
  *(undefined4 *)(this + 0xae0) = 0x3fc00000;
  *(undefined1 (*) [16])(this + 0xaa8) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xab8) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xac8) = (undefined1  [16])0x0;
  this_00 = (BoxContainer *)operator_new(0xa10,"");
  BoxContainer::BoxContainer(this_00,false);
  this_00[0xa0c] = (BoxContainer)0x1;
  *(undefined ***)this_00 = &PTR__initialize_classv_00109288;
  postinitialize_handler((Object *)this_00);
  *(BoxContainer **)(this + 0xab8) = this_00;
  Node::add_child(this,this_00,0,0);
  pBVar4 = (Button *)operator_new(0xc10,"");
  local_68[0] = 0;
  Button::Button(pBVar4,(String *)local_68);
  postinitialize_handler((Object *)pBVar4);
  *(Button **)(this + 0xac0) = pBVar4;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  Button::set_flat(SUB81(*(undefined8 *)(this + 0xac0),0));
  Node::add_child(*(undefined8 *)(this + 0xab8),*(undefined8 *)(this + 0xac0),0,0);
  BaseButton::set_toggle_mode(SUB81(*(undefined8 *)(this + 0xac0),0));
  pSVar1 = *(String **)(this + 0xac0);
  local_68[0] = 0;
  String::parse_latin1((String *)local_68,"");
  local_70 = 0;
  String::parse_latin1((String *)&local_70,"Bake NavigationPolygon");
  TTR(local_78,(String *)&local_70);
  Button::set_text(pSVar1);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  pSVar1 = *(String **)(this + 0xac0);
  local_68[0] = 0;
  String::parse_latin1((String *)local_68,"");
  local_70 = 0;
  String::parse_latin1
            ((String *)&local_70,
             "Bakes the NavigationPolygon by first parsing the scene for source geometry and then creating the navigation polygon vertices and polygons."
            );
  TTR(local_78,(String *)&local_70);
  Control::set_tooltip_text(pSVar1);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  plVar2 = *(long **)(this + 0xac0);
  pcVar3 = *(code **)(*plVar2 + 0x108);
  create_custom_callable_function_pointer<NavigationPolygonEditor>
            ((NavigationPolygonEditor *)local_68,(char *)this,
             (_func_void *)"&NavigationPolygonEditor::_bake_pressed");
  (*pcVar3)(plVar2,SceneStringNames::singleton + 0x238,(CowData<char32_t> *)local_68,0);
  Callable::~Callable((Callable *)local_68);
  pBVar4 = (Button *)operator_new(0xc10,"");
  local_68[0] = 0;
  Button::Button(pBVar4,(String *)local_68);
  postinitialize_handler((Object *)pBVar4);
  *(Button **)(this + 0xac8) = pBVar4;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  Button::set_flat(SUB81(*(undefined8 *)(this + 0xac8),0));
  Node::add_child(*(undefined8 *)(this + 0xab8),*(undefined8 *)(this + 0xac8),0,0);
  pSVar1 = *(String **)(this + 0xac8);
  local_68[0] = 0;
  String::parse_latin1((String *)local_68,"");
  local_70 = 0;
  String::parse_latin1((String *)&local_70,"Clear NavigationPolygon");
  TTR(local_78,(String *)&local_70);
  Button::set_text(pSVar1);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  pSVar1 = *(String **)(this + 0xac8);
  local_68[0] = 0;
  String::parse_latin1((String *)local_68,"");
  local_70 = 0;
  String::parse_latin1
            ((String *)&local_70,
             "Clears the internal NavigationPolygon outlines, vertices and polygons.");
  TTR(local_78,(String *)&local_70);
  Control::set_tooltip_text(pSVar1);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  plVar2 = *(long **)(this + 0xac8);
  pcVar3 = *(code **)(*plVar2 + 0x108);
  create_custom_callable_function_pointer<NavigationPolygonEditor>
            ((NavigationPolygonEditor *)local_68,(char *)this,
             (_func_void *)"&NavigationPolygonEditor::_clear_pressed");
  (*pcVar3)(plVar2,SceneStringNames::singleton + 0x238,(CowData<char32_t> *)local_68,0);
  Callable::~Callable((Callable *)local_68);
  this_01 = (Label *)operator_new(0xad8,"");
  local_68[0] = 0;
  Label::Label(this_01,(String *)local_68);
  postinitialize_handler((Object *)this_01);
  *(Label **)(this + 0xad0) = this_01;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  Node::add_child(*(undefined8 *)(this + 0xab8),*(undefined8 *)(this + 0xad0),0,0);
  this_02 = (Timer *)operator_new(0x428,"");
  Timer::Timer(this_02);
  postinitialize_handler((Object *)this_02);
  *(Timer **)(this + 0xad8) = this_02;
  Node::add_child(this,this_02,0,0);
  Timer::set_one_shot(SUB81(*(undefined8 *)(this + 0xad8),0));
  local_68[0] = 0;
  String::parse_latin1((String *)local_68,"editors/polygon_editor/auto_bake_delay");
  _EDITOR_GET((String *)local_58);
  fVar5 = Variant::operator_cast_to_float((Variant *)local_58);
  *(float *)(this + 0xae0) = fVar5;
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  if (0.0 <= *(float *)(this + 0xae0)) {
    Timer::set_wait_time((double)*(float *)(this + 0xae0));
  }
  plVar2 = *(long **)(this + 0xad8);
  pcVar3 = *(code **)(*plVar2 + 0x108);
  create_custom_callable_function_pointer<NavigationPolygonEditor>
            ((NavigationPolygonEditor *)local_68,(char *)this,
             (_func_void *)"&NavigationPolygonEditor::_rebake_timer_timeout");
  StringName::StringName((StringName *)&local_70,"timeout",false);
  (*pcVar3)(plVar2,(String *)&local_70,(CowData<char32_t> *)local_68,0);
  if ((StringName::configured != '\0') && (local_70 != 0)) {
    StringName::unref();
  }
  Callable::~Callable((Callable *)local_68);
  this_03 = (AcceptDialog *)operator_new(0xdb0,"");
  AcceptDialog::AcceptDialog(this_03);
  postinitialize_handler((Object *)this_03);
  *(AcceptDialog **)(this + 0xab0) = this_03;
  Node::add_child(this,this_03,0,0);
  *(undefined8 *)(this + 0xaa8) = 0;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* NavigationPolygonEditorPlugin::NavigationPolygonEditorPlugin() */

void __thiscall
NavigationPolygonEditorPlugin::NavigationPolygonEditorPlugin(NavigationPolygonEditorPlugin *this)

{
  NavigationPolygonEditor *this_00;
  long in_FS_OFFSET;
  undefined8 local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_40 = 0;
  local_38 = "NavigationRegion2D";
  local_30 = 0x12;
  String::parse_latin1((StrRange *)&local_40);
  this_00 = (NavigationPolygonEditor *)operator_new(0xae8,"");
  NavigationPolygonEditor::NavigationPolygonEditor(this_00);
  postinitialize_handler((Object *)this_00);
  AbstractPolygon2DEditorPlugin::AbstractPolygon2DEditorPlugin
            ((AbstractPolygon2DEditorPlugin *)this,(AbstractPolygon2DEditor *)this_00,
             (String *)&local_40);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_40);
  *(undefined8 *)(this + 0x670) = 0;
  *(undefined ***)this = &PTR__initialize_classv_00109600;
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* NavigationPolygonEditor::_notification(int) */

void __thiscall NavigationPolygonEditor::_notification(NavigationPolygonEditor *this,int param_1)

{
  Ref *pRVar1;
  Object *pOVar2;
  char cVar3;
  int iVar4;
  long in_FS_OFFSET;
  float fVar5;
  Object *local_50;
  int local_48 [6];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == 10) {
    pRVar1 = *(Ref **)(this + 0xac0);
    if (_notification(int)::{lambda()#1}::operator()()::sname == '\0') {
      iVar4 = __cxa_guard_acquire(&_notification(int)::{lambda()#1}::operator()()::sname);
      if (iVar4 != 0) {
        _scs_create((char *)&_notification(int)::{lambda()#1}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#1}::operator()()::sname,
                     &__dso_handle);
        __cxa_guard_release(&_notification(int)::{lambda()#1}::operator()()::sname);
      }
    }
    Control::get_editor_theme_icon((StringName *)&local_50);
    Button::set_button_icon(pRVar1);
    if (local_50 != (Object *)0x0) {
      cVar3 = RefCounted::unreference();
      pOVar2 = local_50;
      if (cVar3 != '\0') {
        cVar3 = predelete_handler(local_50);
        if (cVar3 != '\0') {
          (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
          Memory::free_static(pOVar2,false);
        }
      }
    }
    pRVar1 = *(Ref **)(this + 0xac8);
    if (_notification(int)::{lambda()#2}::operator()()::sname == '\0') {
      iVar4 = __cxa_guard_acquire(&_notification(int)::{lambda()#2}::operator()()::sname);
      if (iVar4 != 0) {
        _scs_create((char *)&_notification(int)::{lambda()#2}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#2}::operator()()::sname,
                     &__dso_handle);
        __cxa_guard_release(&_notification(int)::{lambda()#2}::operator()()::sname);
      }
    }
    Control::get_editor_theme_icon((StringName *)&local_50);
    Button::set_button_icon(pRVar1);
    if (local_50 != (Object *)0x0) {
      cVar3 = RefCounted::unreference();
      pOVar2 = local_50;
      if (cVar3 != '\0') {
        cVar3 = predelete_handler(local_50);
        if (cVar3 != '\0') {
          (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
          Memory::free_static(pOVar2,false);
        }
      }
    }
  }
  else if ((param_1 == 10000) && (*(long *)(this + 0xad8) != 0)) {
    local_50 = (Object *)0x0;
    String::parse_latin1((String *)&local_50,"editors/polygon_editor/auto_bake_delay");
    _EDITOR_GET((String *)local_48);
    fVar5 = Variant::operator_cast_to_float((Variant *)local_48);
    *(float *)(this + 0xae0) = fVar5;
    if (Variant::needs_deinit[local_48[0]] != '\0') {
      Variant::_clear_internal();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
    if (0.0 <= *(float *)(this + 0xae0)) {
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        Timer::set_wait_time((double)*(float *)(this + 0xae0));
        return;
      }
      goto LAB_001009fd;
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_001009fd:
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
  *(undefined1 (*) [16])(puVar3 + 2) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(puVar3 + 0xc) = (undefined1  [16])0x0;
  *puVar3 = 0;
  puVar3[6] = 0;
  *(undefined8 *)(puVar3 + 8) = 0;
  puVar3[10] = 6;
  *(undefined8 *)(puVar3 + 0x10) = 0;
  *puVar3 = *(undefined4 *)param_1;
  CowData<char32_t>::_ref((CowData<char32_t> *)(puVar3 + 2),(CowData *)(param_1 + 8));
  StringName::operator=((StringName *)(puVar3 + 4),(StringName *)(param_1 + 0x10));
  puVar3[6] = *(undefined4 *)(param_1 + 0x18);
  CowData<char32_t>::_ref((CowData<char32_t> *)(puVar3 + 8),(CowData *)(param_1 + 0x20));
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



/* Resource::initialize_class() [clone .part.0] */

void Resource::initialize_class(void)

{
  long in_FS_OFFSET;
  undefined8 local_70;
  long local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (RefCounted::initialize_class()::initialized == '\0') {
    Object::initialize_class();
    local_60 = 0;
    String::parse_latin1((String *)&local_60,"Object");
    StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
    local_70 = 0;
    String::parse_latin1((String *)&local_70,"RefCounted");
    StringName::StringName((StringName *)&local_68,(String *)&local_70,false);
    ClassDB::_add_class2((StringName *)&local_68,(StringName *)&local_58);
    if ((StringName::configured != '\0') && (local_68 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    if ((code *)PTR__bind_methods_0010e008 != RefCounted::_bind_methods) {
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
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  if ((StringName::configured != '\0') && (local_60 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  if ((code *)_GLOBAL_OFFSET_TABLE_ != RefCounted::_bind_methods) {
    Resource::_bind_methods();
  }
  initialize_class()::initialized = 1;
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NavigationPolygonEditor::_ensure_navpoly() const */

void NavigationPolygonEditor::_ensure_navpoly(void)

{
  Resource *pRVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char cVar4;
  Resource *pRVar5;
  long in_RSI;
  long *in_RDI;
  long in_FS_OFFSET;
  Resource *local_40;
  Resource *local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  NavigationRegion2D::get_navigation_polygon();
  if (*in_RDI != 0) goto LAB_00100db6;
  pRVar5 = (Resource *)operator_new(0x340,"");
  Resource::Resource(pRVar5);
  *(undefined1 (*) [16])(pRVar5 + 0x2e0) = (undefined1  [16])0x0;
  *(undefined ***)pRVar5 = &PTR__initialize_classv_00109a80;
  *(undefined1 (*) [16])(pRVar5 + 0x240) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(pRVar5 + 0x250) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(pRVar5 + 0x260) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(pRVar5 + 0x2d0) = (undefined1  [16])0x0;
  uVar3 = _UNK_0010a1f8;
  uVar2 = __LC43;
  *(undefined8 *)(pRVar5 + 0x270) = 0;
  *(undefined8 *)(pRVar5 + 0x280) = 0;
  *(undefined8 *)(pRVar5 + 0x290) = 0;
  *(undefined8 *)(pRVar5 + 0x2a0) = 0;
  *(undefined8 *)(pRVar5 + 0x2b0) = 0;
  *(undefined8 *)(pRVar5 + 0x2b8) = 0;
  *(undefined8 *)(pRVar5 + 0x2c0) = 0;
  pRVar5[0x2c8] = (Resource)0x1;
  *(undefined8 *)(pRVar5 + 0x2f0) = 0;
  *(undefined4 *)(pRVar5 + 0x2e0) = 1;
  *(undefined8 *)(pRVar5 + 0x2f8) = 0;
  *(undefined8 *)(pRVar5 + 0x300) = 0x3f800000;
  *(undefined8 *)(pRVar5 + 0x308) = 0;
  *(undefined8 *)(pRVar5 + 0x310) = 0;
  *(undefined8 *)(pRVar5 + 0x318) = 0;
  *(undefined4 *)(pRVar5 + 800) = 0x41200000;
  *(undefined8 *)(pRVar5 + 0x324) = uVar2;
  *(undefined8 *)(pRVar5 + 0x32c) = uVar3;
  StringName::StringName
            ((StringName *)(pRVar5 + 0x338),"navigation_polygon_source_geometry_group",false);
  postinitialize_handler((Object *)pRVar5);
  local_38 = (Resource *)0x0;
  local_40 = pRVar5;
  cVar4 = RefCounted::init_ref();
  if (cVar4 == '\0') {
    local_40 = (Resource *)0x0;
    Ref<NavigationPolygon>::unref((Ref<NavigationPolygon> *)&local_38);
    pRVar5 = (Resource *)*in_RDI;
    if (pRVar5 != (Resource *)0x0) {
      *in_RDI = 0;
      local_38 = pRVar5;
LAB_00100f48:
      Ref<NavigationPolygon>::unref((Ref<NavigationPolygon> *)&local_38);
    }
  }
  else {
    Ref<NavigationPolygon>::unref((Ref<NavigationPolygon> *)&local_38);
    pRVar1 = (Resource *)*in_RDI;
    if (pRVar5 != pRVar1) {
      *in_RDI = (long)pRVar5;
      local_38 = pRVar1;
      cVar4 = RefCounted::reference();
      if (cVar4 == '\0') {
        *in_RDI = 0;
      }
      goto LAB_00100f48;
    }
  }
  Ref<NavigationPolygon>::unref((Ref<NavigationPolygon> *)&local_40);
  NavigationRegion2D::set_navigation_polygon(*(Ref **)(in_RSI + 0xaa8));
LAB_00100db6:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* NavigationPolygonEditor::_set_polygon(int, Variant const&) const */

void NavigationPolygonEditor::_set_polygon(int param_1,Variant *param_2)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  undefined4 in_register_0000003c;
  long in_FS_OFFSET;
  NavigationPolygon *local_50;
  Variant local_48 [8];
  long local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  _ensure_navpoly();
  Variant::operator_cast_to_Vector(local_48);
  NavigationPolygon::set_outline((int)local_50,(Vector *)((ulong)param_2 & 0xffffffff));
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
  if ((*(long *)(CONCAT44(in_register_0000003c,param_1) + 0xad8) != 0) &&
     (0.0 <= *(float *)(CONCAT44(in_register_0000003c,param_1) + 0xae0))) {
    Timer::start(_LC46);
  }
  if (local_50 != (NavigationPolygon *)0x0) {
    cVar3 = RefCounted::unreference();
    if (cVar3 != '\0') {
      memdelete<NavigationPolygon>(local_50);
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* NavigationPolygonEditor::_get_polygon(int) const */

Variant * NavigationPolygonEditor::_get_polygon(int param_1)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  undefined4 in_register_0000003c;
  Variant *this;
  long in_FS_OFFSET;
  NavigationPolygon *local_40;
  Vector local_38 [8];
  long local_30 [2];
  long local_20;
  
  this = (Variant *)CONCAT44(in_register_0000003c,param_1);
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  NavigationRegion2D::get_navigation_polygon();
  if (local_40 == (NavigationPolygon *)0x0) {
    local_30[0] = 0;
    Variant::Variant(this,local_38);
    CowData<Vector2>::_unref((CowData<Vector2> *)local_30);
  }
  else {
    NavigationPolygon::get_outline((int)local_38);
    Variant::Variant(this,local_38);
    lVar2 = local_30[0];
    if (local_30[0] != 0) {
      LOCK();
      plVar1 = (long *)(local_30[0] + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_30[0] = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
  }
  if (local_40 != (NavigationPolygon *)0x0) {
    cVar3 = RefCounted::unreference();
    if (cVar3 != '\0') {
      memdelete<NavigationPolygon>(local_40);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* NavigationPolygonEditor::_has_resource() const */

undefined8 __thiscall NavigationPolygonEditor::_has_resource(NavigationPolygonEditor *this)

{
  long lVar1;
  char cVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  NavigationPolygon *local_18;
  
  uVar3 = 0;
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(this + 0xaa8) != 0) {
    NavigationRegion2D::get_navigation_polygon();
    if (local_18 != (NavigationPolygon *)0x0) {
      cVar2 = RefCounted::unreference();
      if (cVar2 != '\0') {
        memdelete<NavigationPolygon>(local_18);
      }
      uVar3 = 1;
    }
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* NavigationPolygonEditor::_rebake_timer_timeout() */

void __thiscall NavigationPolygonEditor::_rebake_timer_timeout(NavigationPolygonEditor *this)

{
  char cVar1;
  long in_FS_OFFSET;
  NavigationPolygon *local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(this + 0xaa8) != 0) {
    NavigationRegion2D::get_navigation_polygon();
    if (local_28 == (NavigationPolygon *)0x0) {
      Ref<NavigationPolygon>::unref((Ref<NavigationPolygon> *)&local_28);
    }
    else {
      NavigationRegion2D::bake_navigation_polygon(SUB81(*(undefined8 *)(this + 0xaa8),0));
      CanvasItem::queue_redraw();
      if (local_28 != (NavigationPolygon *)0x0) {
        cVar1 = RefCounted::unreference();
        if (cVar1 != '\0') {
          memdelete<NavigationPolygon>(local_28);
        }
      }
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* NavigationPolygonEditor::_set_node(Node*) */

void __thiscall NavigationPolygonEditor::_set_node(NavigationPolygonEditor *this,Node *param_1)

{
  long lVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  long in_FS_OFFSET;
  NavigationPolygon *local_18;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == (Node *)0x0) {
    *(undefined8 *)(this + 0xaa8) = 0;
  }
  else {
    lVar4 = __dynamic_cast(param_1,&Object::typeinfo,&NavigationRegion2D::typeinfo,0);
    *(long *)(this + 0xaa8) = lVar4;
    if ((lVar4 != 0) &&
       (NavigationRegion2D::get_navigation_polygon(), local_18 != (NavigationPolygon *)0x0)) {
      iVar3 = NavigationPolygon::get_outline_count();
      if ((0 < iVar3) && (iVar3 = NavigationPolygon::get_polygon_count(), iVar3 == 0)) {
        _rebake_timer_timeout(this);
      }
      if ((local_18 != (NavigationPolygon *)0x0) &&
         (cVar2 = RefCounted::unreference(), cVar2 != '\0')) {
        memdelete<NavigationPolygon>(local_18);
      }
    }
  }
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* NavigationPolygonEditor::_update_polygon_editing_state() */

void __thiscall
NavigationPolygonEditor::_update_polygon_editing_state(NavigationPolygonEditor *this)

{
  long lVar1;
  char cVar2;
  long lVar3;
  long in_FS_OFFSET;
  NavigationPolygon *local_18;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(code **)(*(long *)this + 0x370) == _get_node) {
    lVar3 = *(long *)(this + 0xaa8);
  }
  else {
    lVar3 = (**(code **)(*(long *)this + 0x370))();
  }
  if (lVar3 == 0) {
    if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
  else if ((*(long *)(this + 0xaa8) == 0) ||
          (NavigationRegion2D::get_navigation_polygon(), local_18 == (NavigationPolygon *)0x0)) {
    if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
      CanvasItem::hide();
      return;
    }
  }
  else {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      memdelete<NavigationPolygon>(local_18);
    }
    if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
      CanvasItem::show();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* NavigationPolygonEditor::_bake_pressed() */

void __thiscall NavigationPolygonEditor::_bake_pressed(NavigationPolygonEditor *this)

{
  undefined8 uVar1;
  char cVar2;
  long in_FS_OFFSET;
  NavigationPolygon *local_68;
  undefined8 local_60;
  undefined8 local_58;
  String local_50 [8];
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(this + 0xad8) != 0) {
    Timer::stop();
  }
  BaseButton::set_pressed(SUB81(*(undefined8 *)(this + 0xac0),0));
  if (*(long *)(this + 0xaa8) == 0) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      _err_print_error("_bake_pressed","editor/plugins/navigation_polygon_editor_plugin.cpp",200,
                       "Parameter \"node\" is null.",0,0);
      return;
    }
  }
  else {
    NavigationRegion2D::get_navigation_polygon();
    if (local_68 == (NavigationPolygon *)0x0) {
      uVar1 = *(undefined8 *)(this + 0xab0);
      local_58 = 0;
      String::parse_latin1((String *)&local_58,"");
      local_60 = 0;
      String::parse_latin1
                ((String *)&local_60,
                 "A NavigationPolygon resource must be set or created for this node to work.");
      TTR(local_50,(String *)&local_60);
      AcceptDialog::set_text(uVar1,local_50);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_50);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      local_48 = 0;
      Window::popup_centered(*(Vector2i **)(this + 0xab0));
      Ref<NavigationPolygon>::unref((Ref<NavigationPolygon> *)&local_68);
    }
    else {
      NavigationRegion2D::bake_navigation_polygon(SUB81(*(undefined8 *)(this + 0xaa8),0));
      CanvasItem::queue_redraw();
      if (local_68 != (NavigationPolygon *)0x0) {
        cVar2 = RefCounted::unreference();
        if (cVar2 != '\0') {
          memdelete<NavigationPolygon>(local_68);
        }
      }
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* NavigationPolygonEditor::_action_remove_polygon(int) */

void __thiscall
NavigationPolygonEditor::_action_remove_polygon(NavigationPolygonEditor *this,int param_1)

{
  Variant *pVVar1;
  char cVar2;
  Object *pOVar3;
  Variant *pVVar4;
  long in_FS_OFFSET;
  StringName *local_e8;
  long local_e0;
  long local_d8;
  CowData<Vector2> local_d0 [8];
  Variant *local_c8 [2];
  Variant *local_b8;
  Variant *pVStack_b0;
  undefined8 local_a0;
  undefined1 local_98 [16];
  Variant local_88 [24];
  Variant local_70 [24];
  undefined8 local_58;
  undefined1 local_50 [16];
  long local_40 [2];
  
  local_40[0] = *(long *)(in_FS_OFFSET + 0x28);
  _ensure_navpoly();
  pOVar3 = (Object *)EditorUndoRedoManager::get_singleton();
  StringName::StringName((StringName *)&local_d8,"remove_outline",false);
  Variant::Variant((Variant *)&local_b8,param_1);
  local_a0 = 0;
  local_98 = (undefined1  [16])0x0;
  local_c8[0] = (Variant *)&local_b8;
  EditorUndoRedoManager::add_do_methodp(pOVar3,local_e8,(Variant **)&local_d8,(int)local_c8);
  if (Variant::needs_deinit[(int)local_a0] == '\0') {
    cVar2 = Variant::needs_deinit[(int)local_b8];
  }
  else {
    Variant::_clear_internal();
    cVar2 = Variant::needs_deinit[(int)local_b8];
  }
  if (cVar2 != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_d8 != 0)) {
    StringName::unref();
  }
  NavigationPolygon::get_outline((int)(StringName *)&local_d8);
  StringName::StringName((StringName *)&local_e0,"add_outline_at_index",false);
  Variant::Variant(local_88,(StringName *)&local_d8);
  pVVar4 = (Variant *)local_40;
  Variant::Variant(local_70,param_1);
  local_58 = 0;
  local_50 = (undefined1  [16])0x0;
  local_b8 = local_88;
  pVStack_b0 = local_70;
  EditorUndoRedoManager::add_undo_methodp
            (pOVar3,local_e8,(Variant **)&local_e0,(int)(Variant *)&local_b8);
  do {
    pVVar1 = pVVar4 + -0x18;
    pVVar4 = pVVar4 + -0x18;
    if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
      Variant::_clear_internal();
    }
  } while (pVVar4 != local_88);
  if ((StringName::configured != '\0') && (local_e0 != 0)) {
    StringName::unref();
  }
  CowData<Vector2>::_unref(local_d0);
  if ((*(long *)(this + 0xad8) != 0) && (0.0 <= *(float *)(this + 0xae0))) {
    Timer::start(_LC46);
  }
  if ((local_e8 != (StringName *)0x0) && (cVar2 = RefCounted::unreference(), cVar2 != '\0')) {
    memdelete<NavigationPolygon>((NavigationPolygon *)local_e8);
  }
  if (local_40[0] == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* NavigationPolygonEditor::_action_add_polygon(Variant const&) */

void __thiscall
NavigationPolygonEditor::_action_add_polygon(NavigationPolygonEditor *this,Variant *param_1)

{
  char cVar1;
  int iVar2;
  Object *pOVar3;
  long in_FS_OFFSET;
  StringName *local_b8;
  long local_b0;
  Variant *local_a8 [2];
  Variant *local_98 [4];
  int local_78 [6];
  undefined8 local_60;
  undefined1 local_58 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  _ensure_navpoly();
  pOVar3 = (Object *)EditorUndoRedoManager::get_singleton();
  Variant::Variant((Variant *)local_98,param_1);
  StringName::StringName((StringName *)&local_b0,"add_outline",false);
  Variant::Variant((Variant *)local_78,(Variant *)local_98);
  local_60 = 0;
  local_58 = (undefined1  [16])0x0;
  local_a8[0] = (Variant *)local_78;
  EditorUndoRedoManager::add_do_methodp(pOVar3,local_b8,(Variant **)&local_b0,(int)local_a8);
  if (Variant::needs_deinit[(int)local_60] != '\0') {
    Variant::_clear_internal();
  }
  if (Variant::needs_deinit[local_78[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_b0 != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[(int)local_98[0]] != '\0') {
    Variant::_clear_internal();
  }
  iVar2 = NavigationPolygon::get_outline_count();
  StringName::StringName((StringName *)&local_b0,"remove_outline",false);
  Variant::Variant((Variant *)local_78,iVar2);
  local_60 = 0;
  local_58 = (undefined1  [16])0x0;
  local_98[0] = (Variant *)local_78;
  EditorUndoRedoManager::add_undo_methodp
            (pOVar3,local_b8,(Variant **)&local_b0,(int)(Variant *)local_98);
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
  if ((StringName::configured != '\0') && (local_b0 != 0)) {
    StringName::unref();
  }
  if ((*(long *)(this + 0xad8) != 0) && (0.0 <= *(float *)(this + 0xae0))) {
    Timer::start(_LC46);
  }
  if ((local_b8 != (StringName *)0x0) && (cVar1 = RefCounted::unreference(), cVar1 != '\0')) {
    memdelete<NavigationPolygon>((NavigationPolygon *)local_b8);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* NavigationPolygonEditor::_action_set_polygon(int, Variant const&, Variant const&) */

void __thiscall
NavigationPolygonEditor::_action_set_polygon
          (NavigationPolygonEditor *this,int param_1,Variant *param_2,Variant *param_3)

{
  Variant *pVVar1;
  char cVar2;
  Object *pOVar3;
  Variant *pVVar4;
  long in_FS_OFFSET;
  StringName *local_128;
  long local_120;
  int local_118 [8];
  Variant *local_f8;
  Variant *pVStack_f0;
  Variant *local_d8;
  Variant *pVStack_d0;
  Variant local_c0 [24];
  undefined8 local_a8;
  undefined1 local_a0 [16];
  Variant local_90 [8];
  Variant local_88 [24];
  Variant local_70 [24];
  undefined8 local_58;
  undefined1 local_50 [16];
  long local_40 [2];
  
  local_40[0] = *(long *)(in_FS_OFFSET + 0x28);
  _ensure_navpoly();
  pOVar3 = (Object *)EditorUndoRedoManager::get_singleton();
  Variant::Variant((Variant *)local_118,param_3);
  StringName::StringName((StringName *)&local_120,"set_outline",false);
  Variant::Variant((Variant *)&local_d8,param_1);
  Variant::Variant(local_c0,(Variant *)local_118);
  pVVar4 = local_90;
  local_a8 = 0;
  local_a0 = (undefined1  [16])0x0;
  local_f8 = (Variant *)&local_d8;
  pVStack_f0 = local_c0;
  EditorUndoRedoManager::add_do_methodp
            (pOVar3,local_128,(Variant **)&local_120,(int)(Variant *)&local_f8);
  do {
    pVVar1 = pVVar4 + -0x18;
    pVVar4 = pVVar4 + -0x18;
    if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
      Variant::_clear_internal();
    }
  } while (pVVar4 != (Variant *)&local_d8);
  if ((StringName::configured != '\0') && (local_120 != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_118[0]] != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)&local_f8,param_2);
  StringName::StringName((StringName *)&local_120,"set_outline",false);
  Variant::Variant(local_88,param_1);
  Variant::Variant(local_70,(Variant *)&local_f8);
  local_50 = (undefined1  [16])0x0;
  pVVar4 = (Variant *)local_40;
  local_58 = 0;
  local_d8 = local_88;
  pVStack_d0 = local_70;
  EditorUndoRedoManager::add_undo_methodp
            (pOVar3,local_128,(Variant **)&local_120,(int)(Variant *)&local_d8);
  do {
    pVVar1 = pVVar4 + -0x18;
    pVVar4 = pVVar4 + -0x18;
    if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
      Variant::_clear_internal();
    }
  } while (pVVar4 != local_88);
  if ((StringName::configured != '\0') && (local_120 != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[(int)local_f8] != '\0') {
    Variant::_clear_internal();
  }
  if ((*(long *)(this + 0xad8) != 0) && (0.0 <= *(float *)(this + 0xae0))) {
    Timer::start(_LC46);
  }
  if (local_128 != (StringName *)0x0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      memdelete<NavigationPolygon>((NavigationPolygon *)local_128);
    }
  }
  if (local_40[0] == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NavigationPolygonEditor::_create_resource() */

void __thiscall NavigationPolygonEditor::_create_resource(NavigationPolygonEditor *this)

{
  StringName *pSVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char cVar4;
  Object *pOVar5;
  Resource *this_00;
  long in_FS_OFFSET;
  String local_c0 [8];
  undefined8 local_b8;
  long local_b0;
  Variant *local_a8 [2];
  Variant *local_98 [4];
  int local_78 [6];
  undefined8 local_60;
  undefined1 local_58 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(this + 0xaa8) == 0) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
  else {
    pOVar5 = (Object *)EditorUndoRedoManager::get_singleton();
    local_b8 = 0;
    String::parse_latin1((String *)&local_b8,"");
    local_b0 = 0;
    String::parse_latin1((String *)&local_b0,"Create Navigation Polygon");
    TTR(local_c0,(String *)&local_b0);
    EditorUndoRedoManager::create_action(pOVar5,local_c0,0,0,0);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_c0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
    this_00 = (Resource *)operator_new(0x340,"");
    Resource::Resource(this_00);
    *(undefined ***)this_00 = &PTR__initialize_classv_00109a80;
    *(undefined1 (*) [16])(this_00 + 0x2e0) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(this_00 + 0x240) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(this_00 + 0x250) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(this_00 + 0x260) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(this_00 + 0x2d0) = (undefined1  [16])0x0;
    uVar3 = _UNK_0010a1f8;
    uVar2 = __LC43;
    *(undefined8 *)(this_00 + 0x270) = 0;
    *(undefined8 *)(this_00 + 0x280) = 0;
    *(undefined8 *)(this_00 + 0x290) = 0;
    *(undefined8 *)(this_00 + 0x2a0) = 0;
    *(undefined8 *)(this_00 + 0x2b0) = 0;
    *(undefined8 *)(this_00 + 0x2b8) = 0;
    *(undefined8 *)(this_00 + 0x2c0) = 0;
    this_00[0x2c8] = (Resource)0x1;
    *(undefined8 *)(this_00 + 0x2f0) = 0;
    *(undefined4 *)(this_00 + 0x2e0) = 1;
    *(undefined8 *)(this_00 + 0x2f8) = 0;
    *(undefined8 *)(this_00 + 0x300) = 0x3f800000;
    *(undefined8 *)(this_00 + 0x308) = 0;
    *(undefined8 *)(this_00 + 0x310) = 0;
    *(undefined8 *)(this_00 + 0x318) = 0;
    *(undefined4 *)(this_00 + 800) = 0x41200000;
    *(undefined8 *)(this_00 + 0x324) = uVar2;
    *(undefined8 *)(this_00 + 0x32c) = uVar3;
    StringName::StringName
              ((StringName *)(this_00 + 0x338),"navigation_polygon_source_geometry_group",false);
    postinitialize_handler((Object *)this_00);
    cVar4 = RefCounted::init_ref();
    if (cVar4 == '\0') {
      this_00 = (Resource *)0x0;
    }
    StringName::StringName((StringName *)&local_b0,"set_navigation_polygon",false);
    pSVar1 = *(StringName **)(this + 0xaa8);
    Variant::Variant((Variant *)local_78,(Object *)this_00);
    local_60 = 0;
    local_58 = (undefined1  [16])0x0;
    local_98[0] = (Variant *)local_78;
    EditorUndoRedoManager::add_do_methodp
              (pOVar5,pSVar1,(Variant **)&local_b0,(int)(Variant *)local_98);
    if (Variant::needs_deinit[(int)local_60] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
    if ((StringName::configured != '\0') && (local_b0 != 0)) {
      StringName::unref();
    }
    if (this_00 != (Resource *)0x0) {
      cVar4 = RefCounted::unreference();
      if (cVar4 != '\0') {
        memdelete<NavigationPolygon>((NavigationPolygon *)this_00);
      }
    }
    Variant::Variant((Variant *)local_98,(Object *)0x0);
    StringName::StringName((StringName *)&local_b0,"set_navigation_polygon",false);
    pSVar1 = *(StringName **)(this + 0xaa8);
    Variant::Variant((Variant *)local_78,(Variant *)local_98);
    local_60 = 0;
    local_58 = (undefined1  [16])0x0;
    local_a8[0] = (Variant *)local_78;
    EditorUndoRedoManager::add_undo_methodp(pOVar5,pSVar1,(Variant **)&local_b0,(int)local_a8);
    if (Variant::needs_deinit[(int)local_60] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
    if ((StringName::configured != '\0') && (local_b0 != 0)) {
      StringName::unref();
    }
    if (Variant::needs_deinit[(int)local_98[0]] != '\0') {
      Variant::_clear_internal();
    }
    EditorUndoRedoManager::commit_action(SUB81(pOVar5,0));
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0010225a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)this + 0x368))(this,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* NavigationPolygonEditor::_clear_pressed() */

void __thiscall NavigationPolygonEditor::_clear_pressed(NavigationPolygonEditor *this)

{
  Ref *pRVar1;
  String *pSVar2;
  char cVar3;
  long in_FS_OFFSET;
  undefined8 local_50;
  NavigationPolygon *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(this + 0xad8) != 0) {
    Timer::stop();
  }
  if (*(long *)(this + 0xaa8) != 0) {
    NavigationRegion2D::get_navigation_polygon();
    if (local_48 != (NavigationPolygon *)0x0) {
      cVar3 = RefCounted::unreference();
      if (cVar3 != '\0') {
        memdelete<NavigationPolygon>(local_48);
      }
      NavigationRegion2D::get_navigation_polygon();
      NavigationPolygon::clear();
      Ref<NavigationPolygon>::unref((Ref<NavigationPolygon> *)&local_48);
      pRVar1 = *(Ref **)(this + 0xaa8);
      NavigationRegion2D::get_navigation_polygon();
      NavigationRegion2D::set_navigation_polygon(pRVar1);
      if (local_48 != (NavigationPolygon *)0x0) {
        cVar3 = RefCounted::unreference();
        if (cVar3 != '\0') {
          memdelete<NavigationPolygon>(local_48);
        }
      }
    }
  }
  BaseButton::set_pressed(SUB81(*(undefined8 *)(this + 0xac0),0));
  pSVar2 = *(String **)(this + 0xad0);
  local_50 = 0;
  local_48 = (NavigationPolygon *)&_LC9;
  local_40 = 0;
  String::parse_latin1((StrRange *)&local_50);
  Label::set_text(pSVar2);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
  if (*(long *)(this + 0xaa8) == 0) {
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
  else if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    CanvasItem::queue_redraw();
    return;
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



/* Control::_top_level_changed() */

void Control::_top_level_changed(void)

{
  return;
}



/* EditorPlugin::selected_notify() */

void EditorPlugin::selected_notify(void)

{
  return;
}



/* EditorPlugin::edited_scene_changed() */

void EditorPlugin::edited_scene_changed(void)

{
  return;
}



/* AbstractPolygon2DEditorPlugin::has_main_screen() const */

undefined8 AbstractPolygon2DEditorPlugin::has_main_screen(void)

{
  return 0;
}



/* NavigationPolygonEditorPlugin::is_class_ptr(void*) const */

uint __thiscall
NavigationPolygonEditorPlugin::is_class_ptr(NavigationPolygonEditorPlugin *this,void *param_1)

{
  return (uint)CONCAT71(0x10a1,(undefined4 *)param_1 ==
                               &AbstractPolygon2DEditorPlugin::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10a1,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10a1,(undefined4 *)param_1 == &EditorPlugin::get_class_ptr_static()::ptr)
         | (uint)CONCAT71(0x10a1,(undefined4 *)param_1 == &Node::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10a1,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* NavigationPolygonEditorPlugin::_getv(StringName const&, Variant&) const */

undefined8 NavigationPolygonEditorPlugin::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* NavigationPolygonEditorPlugin::_setv(StringName const&, Variant const&) */

undefined8 NavigationPolygonEditorPlugin::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* NavigationPolygonEditorPlugin::_property_can_revertv(StringName const&) const */

undefined8 NavigationPolygonEditorPlugin::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* NavigationPolygonEditorPlugin::_property_get_revertv(StringName const&, Variant&) const */

undefined8
NavigationPolygonEditorPlugin::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* NavigationMesh::is_class_ptr(void*) const */

uint __thiscall NavigationMesh::is_class_ptr(NavigationMesh *this,void *param_1)

{
  return (uint)CONCAT71(0x10a1,(undefined4 *)param_1 == &Resource::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10a0,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10a1,(undefined4 *)param_1 == &RefCounted::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10a1,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* NavigationMesh::_property_can_revertv(StringName const&) const */

undefined8 NavigationMesh::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* NavigationMesh::_property_get_revertv(StringName const&, Variant&) const */

undefined8 NavigationMesh::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* NavigationMesh::_notificationv(int, bool) */

void NavigationMesh::_notificationv(int param_1,bool param_2)

{
  return;
}



/* NavigationPolygon::is_class_ptr(void*) const */

uint __thiscall NavigationPolygon::is_class_ptr(NavigationPolygon *this,void *param_1)

{
  return (uint)CONCAT71(0x10a1,(undefined4 *)param_1 == &Resource::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10a0,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10a1,(undefined4 *)param_1 == &RefCounted::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10a1,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* NavigationPolygon::_getv(StringName const&, Variant&) const */

undefined8 NavigationPolygon::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* NavigationPolygon::_setv(StringName const&, Variant const&) */

undefined8 NavigationPolygon::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* NavigationPolygon::_property_can_revertv(StringName const&) const */

undefined8 NavigationPolygon::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* NavigationPolygon::_property_get_revertv(StringName const&, Variant&) const */

undefined8 NavigationPolygon::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* NavigationPolygon::_notificationv(int, bool) */

void NavigationPolygon::_notificationv(int param_1,bool param_2)

{
  return;
}



/* CallableCustomMethodPointer<NavigationPolygonEditor, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<NavigationPolygonEditor,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<NavigationPolygonEditor,void> *this)

{
  return;
}



/* CallableCustomMethodPointer<NavigationPolygonEditor, void>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<NavigationPolygonEditor,void>::get_argument_count
          (CallableCustomMethodPointer<NavigationPolygonEditor,void> *this,bool *param_1)

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



/* CallableCustomMethodPointer<NavigationPolygonEditor, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<NavigationPolygonEditor,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<NavigationPolygonEditor,void> *this)

{
  operator_delete(this,0x48);
  return;
}



/* NavigationMesh::_validate_propertyv(PropertyInfo&) const */

void NavigationMesh::_validate_propertyv(PropertyInfo *param_1)

{
  if ((code *)PTR__validate_property_0010e010 != Object::_validate_property) {
    NavigationMesh::_validate_property(param_1);
    return;
  }
  return;
}



/* NavigationMesh::_getv(StringName const&, Variant&) const */

undefined8 NavigationMesh::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)PTR__get_0010e018 != Object::_get) {
    uVar1 = NavigationMesh::_get(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* NavigationMesh::_setv(StringName const&, Variant const&) */

undefined8 NavigationMesh::_setv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)PTR__set_0010e020 != Object::_set) {
    uVar1 = NavigationMesh::_set(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* NavigationPolygon::_validate_propertyv(PropertyInfo&) const */

void NavigationPolygon::_validate_propertyv(PropertyInfo *param_1)

{
  if ((code *)PTR__validate_property_0010e028 != Object::_validate_property) {
    NavigationPolygon::_validate_property(param_1);
    return;
  }
  return;
}



/* HBoxContainer::_property_get_revertv(StringName const&, Variant&) const */

undefined8 HBoxContainer::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_get_revert_0010e030 != Object::_property_get_revert) {
    uVar1 = Control::_property_get_revert(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* NavigationPolygonEditor::_property_get_revertv(StringName const&, Variant&) const */

undefined8 NavigationPolygonEditor::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_get_revert_0010e030 != Object::_property_get_revert) {
    uVar1 = Control::_property_get_revert(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* HBoxContainer::_property_can_revertv(StringName const&) const */

undefined8 HBoxContainer::_property_can_revertv(StringName *param_1)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_can_revert_0010e038 != Object::_property_can_revert) {
    uVar1 = Control::_property_can_revert(param_1);
    return uVar1;
  }
  return 0;
}



/* NavigationPolygonEditor::_property_can_revertv(StringName const&) const */

undefined8 NavigationPolygonEditor::_property_can_revertv(StringName *param_1)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_can_revert_0010e038 != Object::_property_can_revert) {
    uVar1 = Control::_property_can_revert(param_1);
    return uVar1;
  }
  return 0;
}



/* NavigationPolygonEditorPlugin::_validate_propertyv(PropertyInfo&) const */

void NavigationPolygonEditorPlugin::_validate_propertyv(PropertyInfo *param_1)

{
  if ((code *)PTR__validate_property_0010e040 != Object::_validate_property) {
    Node::_validate_property(param_1);
    return;
  }
  return;
}



/* AbstractPolygon2DEditorPlugin::forward_canvas_draw_over_viewport(Control*) */

void AbstractPolygon2DEditorPlugin::forward_canvas_draw_over_viewport(Control *param_1)

{
  AbstractPolygon2DEditor::forward_canvas_draw_over_viewport(*(Control **)(param_1 + 0x660));
  return;
}



/* AbstractPolygon2DEditorPlugin::forward_canvas_gui_input(Ref<InputEvent> const&) */

void AbstractPolygon2DEditorPlugin::forward_canvas_gui_input(Ref *param_1)

{
  AbstractPolygon2DEditor::forward_gui_input(*(Ref **)(param_1 + 0x660));
  return;
}



/* NavigationPolygonEditorPlugin::~NavigationPolygonEditorPlugin() */

void __thiscall
NavigationPolygonEditorPlugin::~NavigationPolygonEditorPlugin(NavigationPolygonEditorPlugin *this)

{
  *(undefined ***)this = &PTR__initialize_classv_00109600;
  AbstractPolygon2DEditorPlugin::~AbstractPolygon2DEditorPlugin
            ((AbstractPolygon2DEditorPlugin *)this);
  return;
}



/* NavigationPolygonEditorPlugin::~NavigationPolygonEditorPlugin() */

void __thiscall
NavigationPolygonEditorPlugin::~NavigationPolygonEditorPlugin(NavigationPolygonEditorPlugin *this)

{
  *(undefined ***)this = &PTR__initialize_classv_00109600;
  AbstractPolygon2DEditorPlugin::~AbstractPolygon2DEditorPlugin
            ((AbstractPolygon2DEditorPlugin *)this);
  operator_delete(this,0x678);
  return;
}



/* NavigationPolygonEditor::_get_class_namev() const */

undefined8 * NavigationPolygonEditor::_get_class_namev(void)

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
LAB_00102a43:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00102a43;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"NavigationPolygonEditor");
      goto LAB_00102aae;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"NavigationPolygonEditor");
LAB_00102aae:
  return &_get_class_namev()::_class_name_static;
}



/* CallableCustomMethodPointer<NavigationPolygonEditor, void>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<NavigationPolygonEditor,void>::get_object
          (CallableCustomMethodPointer<NavigationPolygonEditor,void> *this)

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
      goto LAB_00102bdd;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_00102bdd;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_00102bdd:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* NavigationPolygonEditor::_validate_propertyv(PropertyInfo&) const */

void NavigationPolygonEditor::_validate_propertyv(PropertyInfo *param_1)

{
  Node::_validate_property(param_1);
  CanvasItem::_validate_property(param_1);
  Control::_validate_property(param_1);
  if ((code *)PTR__validate_property_0010e048 == Control::_validate_property) {
    return;
  }
  BoxContainer::_validate_property(param_1);
  return;
}



/* HBoxContainer::_validate_propertyv(PropertyInfo&) const */

void HBoxContainer::_validate_propertyv(PropertyInfo *param_1)

{
  Node::_validate_property(param_1);
  CanvasItem::_validate_property(param_1);
  Control::_validate_property(param_1);
  if ((code *)PTR__validate_property_0010e048 == Control::_validate_property) {
    return;
  }
  BoxContainer::_validate_property(param_1);
  return;
}



/* NavigationPolygonEditorPlugin::_notificationv(int, bool) */

void __thiscall
NavigationPolygonEditorPlugin::_notificationv
          (NavigationPolygonEditorPlugin *this,int param_1,bool param_2)

{
  int iVar1;
  
  iVar1 = (int)this;
  if (param_2) {
    if ((code *)PTR__notification_0010e050 != Node::_notification) {
      EditorPlugin::_notification(iVar1);
    }
    Node::_notification(iVar1);
    return;
  }
  Node::_notification(iVar1);
  if ((code *)PTR__notification_0010e050 == Node::_notification) {
    return;
  }
  EditorPlugin::_notification(iVar1);
  return;
}



/* NavigationPolygonEditor::_setv(StringName const&, Variant const&) */

undefined8 NavigationPolygonEditor::_setv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  uVar1 = CanvasItem::_set(param_1,param_2);
  if ((char)uVar1 == '\0') {
    if ((code *)PTR__set_0010e058 != CanvasItem::_set) {
      uVar1 = Control::_set(param_1,param_2);
      return uVar1;
    }
    uVar1 = 0;
  }
  return uVar1;
}



/* HBoxContainer::_setv(StringName const&, Variant const&) */

undefined8 HBoxContainer::_setv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  uVar1 = CanvasItem::_set(param_1,param_2);
  if ((char)uVar1 == '\0') {
    if ((code *)PTR__set_0010e058 != CanvasItem::_set) {
      uVar1 = Control::_set(param_1,param_2);
      return uVar1;
    }
    uVar1 = 0;
  }
  return uVar1;
}



/* WARNING: Removing unreachable block (ram,0x00102f18) */
/* HBoxContainer::_getv(StringName const&, Variant&) const */

undefined8 HBoxContainer::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if (((code *)PTR__get_0010e060 != CanvasItem::_get) &&
     (uVar1 = Control::_get(param_1,param_2), (char)uVar1 != '\0')) {
    return uVar1;
  }
  uVar1 = CanvasItem::_get(param_1,param_2);
  return uVar1;
}



/* WARNING: Removing unreachable block (ram,0x00102f88) */
/* NavigationPolygonEditor::_getv(StringName const&, Variant&) const */

undefined8 NavigationPolygonEditor::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if (((code *)PTR__get_0010e060 != CanvasItem::_get) &&
     (uVar1 = Control::_get(param_1,param_2), (char)uVar1 != '\0')) {
    return uVar1;
  }
  uVar1 = CanvasItem::_get(param_1,param_2);
  return uVar1;
}



/* HBoxContainer::is_class_ptr(void*) const */

uint HBoxContainer::is_class_ptr(void *param_1)

{
  uint uVar1;
  undefined4 in_EDX;
  undefined4 *in_RSI;
  
  uVar1 = 1;
  if (in_RSI != &get_class_ptr_static()::ptr) {
    uVar1 = (uint)CONCAT71(0x10a1,in_RSI == &Container::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x10a1,in_RSI == &BoxContainer::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x10a1,in_RSI == &Control::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x10a1,in_RSI == &CanvasItem::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x10a1,in_RSI == &Node::get_class_ptr_static()::ptr) |
            CONCAT31((int3)((uint)in_EDX >> 8),in_RSI == &Object::get_class_ptr_static()::ptr);
  }
  return uVar1;
}



/* HBoxContainer::_notificationv(int, bool) */

void __thiscall HBoxContainer::_notificationv(HBoxContainer *this,int param_1,bool param_2)

{
  int iVar1;
  
  iVar1 = (int)this;
  if (param_2) {
    if ((code *)PTR__notification_0010e068 != Container::_notification) {
      BoxContainer::_notification(iVar1);
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
  if ((code *)PTR__notification_0010e068 == Container::_notification) {
    return;
  }
  BoxContainer::_notification(iVar1);
  return;
}



/* NavigationPolygonEditor::is_class_ptr(void*) const */

uint NavigationPolygonEditor::is_class_ptr(void *param_1)

{
  byte bVar1;
  uint uVar2;
  undefined4 in_EDX;
  undefined4 *in_RSI;
  
  uVar2 = (uint)CONCAT71(0x10a1,in_RSI == &AbstractPolygon2DEditor::get_class_ptr_static()::ptr) |
          (uint)CONCAT71(0x10a1,in_RSI == &get_class_ptr_static()::ptr);
  bVar1 = (byte)uVar2 | in_RSI == &HBoxContainer::get_class_ptr_static()::ptr;
  if (bVar1 != 0) {
    return CONCAT31((int3)(uVar2 >> 8),bVar1);
  }
  return (uint)CONCAT71(0x10a1,in_RSI == &Container::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10a1,in_RSI == &BoxContainer::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10a1,in_RSI == &Control::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10a1,in_RSI == &CanvasItem::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10a1,in_RSI == &Node::get_class_ptr_static()::ptr) |
         CONCAT31((int3)((uint)in_EDX >> 8),in_RSI == &Object::get_class_ptr_static()::ptr);
}



/* HBoxContainer::~HBoxContainer() */

void __thiscall HBoxContainer::~HBoxContainer(HBoxContainer *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(code **)this = String::parse_latin1;
  if (bVar1) {
    if (*(long *)(this + 0x9e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00103220;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_00103220:
  Control::~Control((Control *)this);
  return;
}



/* HBoxContainer::~HBoxContainer() */

void __thiscall HBoxContainer::~HBoxContainer(HBoxContainer *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(code **)this = String::parse_latin1;
  if (bVar1) {
    if (*(long *)(this + 0x9e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00103280;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_00103280:
  Control::~Control((Control *)this);
  operator_delete(this,0xa10);
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



/* HBoxContainer::_get_class_namev() const */

undefined8 * HBoxContainer::_get_class_namev(void)

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
LAB_00103343:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00103343;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"HBoxContainer");
      goto LAB_001033ae;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"HBoxContainer");
LAB_001033ae:
  return &_get_class_namev()::_class_name_static;
}



/* NavigationPolygonEditorPlugin::_get_class_namev() const */

undefined8 * NavigationPolygonEditorPlugin::_get_class_namev(void)

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
LAB_00103443:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00103443;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,
                 "NavigationPolygonEditorPlugin");
      goto LAB_001034ae;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"NavigationPolygonEditorPlugin");
LAB_001034ae:
  return &_get_class_namev()::_class_name_static;
}



/* NavigationMesh::_get_class_namev() const */

undefined8 * NavigationMesh::_get_class_namev(void)

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
LAB_00103533:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00103533;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"NavigationMesh");
      goto LAB_0010359e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"NavigationMesh");
LAB_0010359e:
  return &_get_class_namev()::_class_name_static;
}



/* NavigationPolygon::_get_class_namev() const */

undefined8 * NavigationPolygon::_get_class_namev(void)

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
LAB_00103623:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00103623;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"NavigationPolygon");
      goto LAB_0010368e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"NavigationPolygon");
LAB_0010368e:
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



/* NavigationPolygonEditor::~NavigationPolygonEditor() */

void __thiscall NavigationPolygonEditor::~NavigationPolygonEditor(NavigationPolygonEditor *this)

{
  long *plVar1;
  long lVar2;
  bool bVar3;
  
  *(code **)this = CallableCustom::CallableCustom;
  if (*(long *)(this + 0xa78) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0xa78) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0xa78);
      *(undefined8 *)(this + 0xa78) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (*(long *)(this + 0xa68) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0xa68) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0xa68);
      *(undefined8 *)(this + 0xa68) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  bVar3 = StringName::configured != '\0';
  *(code **)this = String::parse_latin1;
  if (bVar3) {
    if (*(long *)(this + 0x9e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001037c6;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_001037c6:
  Control::~Control((Control *)this);
  return;
}



/* NavigationPolygonEditor::~NavigationPolygonEditor() */

void __thiscall NavigationPolygonEditor::~NavigationPolygonEditor(NavigationPolygonEditor *this)

{
  long *plVar1;
  long lVar2;
  bool bVar3;
  
  *(code **)this = CallableCustom::CallableCustom;
  if (*(long *)(this + 0xa78) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0xa78) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0xa78);
      *(undefined8 *)(this + 0xa78) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (*(long *)(this + 0xa68) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0xa68) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0xa68);
      *(undefined8 *)(this + 0xa68) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  bVar3 = StringName::configured != '\0';
  *(code **)this = String::parse_latin1;
  if (bVar3) {
    if (*(long *)(this + 0x9e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001038a6;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_001038a6:
  Control::~Control((Control *)this);
  operator_delete(this,0xae8);
  return;
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



/* Callable
   create_custom_callable_function_pointer<NavigationPolygonEditor>(NavigationPolygonEditor*, char
   const*, void (NavigationPolygonEditor::*)()) */

NavigationPolygonEditor *
create_custom_callable_function_pointer<NavigationPolygonEditor>
          (NavigationPolygonEditor *param_1,char *param_2,_func_void *param_3)

{
  undefined8 uVar1;
  CallableCustom *this;
  undefined8 in_RCX;
  undefined8 in_R8;
  
  this = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(this);
  *(undefined **)(this + 0x20) = &_LC9;
  *(undefined1 (*) [16])(this + 0x30) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined ***)this = &PTR_hash_0010a050;
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



/* NavigationPolygonEditor::_initialize_classv() */

void NavigationPolygonEditor::_initialize_classv(void)

{
  long in_FS_OFFSET;
  undefined8 local_60;
  long local_58;
  undefined8 local_50;
  long local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (initialize_class()::initialized == '\0') {
    if (AbstractPolygon2DEditor::initialize_class()::initialized == '\0') {
      if (HBoxContainer::initialize_class()::initialized == '\0') {
        if (BoxContainer::initialize_class()::initialized == '\0') {
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
                  if ((code *)PTR__bind_methods_0010e008 != Node::_bind_methods) {
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
                if ((code *)PTR__bind_compatibility_methods_0010e070 !=
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
          String::parse_latin1((String *)&local_60,"BoxContainer");
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
          if ((code *)PTR__bind_methods_0010e078 != Container::_bind_methods) {
            BoxContainer::_bind_methods();
          }
          BoxContainer::initialize_class()::initialized = '\x01';
        }
        local_50 = 0;
        String::parse_latin1((String *)&local_50,"BoxContainer");
        StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
        local_60 = 0;
        String::parse_latin1((String *)&local_60,"HBoxContainer");
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
        HBoxContainer::initialize_class()::initialized = '\x01';
      }
      local_50 = 0;
      String::parse_latin1((String *)&local_50,"HBoxContainer");
      StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
      local_60 = 0;
      String::parse_latin1((String *)&local_60,"AbstractPolygon2DEditor");
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
      AbstractPolygon2DEditor::initialize_class()::initialized = '\x01';
    }
    local_50 = 0;
    String::parse_latin1((String *)&local_50,"AbstractPolygon2DEditor");
    StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
    local_60 = 0;
    String::parse_latin1((String *)&local_60,"NavigationPolygonEditor");
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



/* NavigationPolygonEditor::_notificationv(int, bool) */

void __thiscall
NavigationPolygonEditor::_notificationv(NavigationPolygonEditor *this,int param_1,bool param_2)

{
  if (param_2) {
    _notification(this,param_1);
    if ((code *)PTR__notification_0010e080 != BoxContainer::_notification) {
      AbstractPolygon2DEditor::_notification((int)this);
    }
    HBoxContainer::_notificationv((HBoxContainer *)this,param_1,true);
    return;
  }
  HBoxContainer::_notificationv((HBoxContainer *)this,param_1,false);
  if ((code *)PTR__notification_0010e080 != BoxContainer::_notification) {
    AbstractPolygon2DEditor::_notification((int)this);
  }
  _notification(this,param_1);
  return;
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



/* PropertyInfo::PropertyInfo(Variant::Type, String const&, PropertyHint, String const&, unsigned
   int, StringName const&) */

void __thiscall
PropertyInfo::PropertyInfo
          (PropertyInfo *this,undefined4 param_2,CowData *param_3,undefined4 param_4,
          CowData *param_5,undefined4 param_6,StringName *param_7)

{
  long in_FS_OFFSET;
  long local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)this = param_2;
  *(undefined8 *)(this + 8) = 0;
  CowData<char32_t>::_ref((CowData<char32_t> *)(this + 8),param_3);
  *(undefined4 *)(this + 0x18) = param_4;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  CowData<char32_t>::_ref((CowData<char32_t> *)(this + 0x20),param_5);
  *(undefined4 *)(this + 0x28) = param_6;
  if (*(int *)(this + 0x18) == 0x11) {
    StringName::StringName((StringName *)&local_38,(String *)(this + 0x20),false);
    if (*(long *)(this + 0x10) == local_38) {
      if ((StringName::configured != '\0') && (local_38 != 0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      *(long *)(this + 0x10) = local_38;
    }
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
  else if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    StringName::operator=((StringName *)(this + 0x10),param_7);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* NavigationMesh::get_class() const */

void NavigationMesh::get_class(void)

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



/* NavigationPolygonEditorPlugin::get_class() const */

void NavigationPolygonEditorPlugin::get_class(void)

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



/* NavigationPolygonEditor::get_class() const */

void NavigationPolygonEditor::get_class(void)

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



/* HBoxContainer::get_class() const */

void HBoxContainer::get_class(void)

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



/* NavigationPolygon::get_class() const */

void NavigationPolygon::get_class(void)

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



/* AbstractPolygon2DEditorPlugin::get_plugin_name() const */

void AbstractPolygon2DEditorPlugin::get_plugin_name(void)

{
  long in_RSI;
  CowData<char32_t> *in_RDI;
  
  *(undefined8 *)in_RDI = 0;
  if (*(long *)(in_RSI + 0x668) != 0) {
    CowData<char32_t>::_ref(in_RDI,(CowData *)(in_RSI + 0x668));
  }
  return;
}



/* CallableCustomMethodPointer<NavigationPolygonEditor, void>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<NavigationPolygonEditor,void>::call
          (CallableCustomMethodPointer<NavigationPolygonEditor,void> *this,Variant **param_1,
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
      goto LAB_00104d4f;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] == 0) goto LAB_00104d4f;
    lVar1 = *(long *)(this + 0x28);
    UNRECOVERED_JUMPTABLE = *(code **)(this + 0x38);
    lVar2 = *(long *)(this + 0x40);
    if (param_2 == 0) {
      *(undefined4 *)param_4 = 0;
      if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
        UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar1 + lVar2) + -1);
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00104d28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),uVar5,UNRECOVERED_JUMPTABLE);
        return;
      }
      goto LAB_00104e00;
    }
    *(undefined4 *)param_4 = 3;
    *(undefined4 *)(param_4 + 8) = 0;
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
LAB_00104d4f:
    local_40 = 0;
    String::parse_latin1((String *)&local_40,"\', can\'t call method.");
    uitos((ulong)local_50);
    operator+((char *)local_48,(String *)"Invalid Object id \'");
    String::operator+(local_38,(String *)local_48);
    _err_print_error(&_LC36,"./core/object/callable_method_pointer.h",0x67,
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
LAB_00104e00:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* NavigationMesh::_initialize_classv() */

void NavigationMesh::_initialize_classv(void)

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
    if (Resource::initialize_class()::initialized == '\0') {
      Resource::initialize_class();
    }
    local_58 = 0;
    local_40 = 8;
    local_48 = "Resource";
    String::parse_latin1((StrRange *)&local_58);
    StringName::StringName((StringName *)&local_50,(String *)&local_58,false);
    local_48 = "NavigationMesh";
    local_60 = 0;
    local_40 = 0xe;
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
    if ((code *)PTR__bind_methods_0010e088 != Resource::_bind_methods) {
      NavigationMesh::_bind_methods();
    }
    initialize_class()::initialized = '\x01';
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* NavigationPolygon::_initialize_classv() */

void NavigationPolygon::_initialize_classv(void)

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
    if (Resource::initialize_class()::initialized == '\0') {
      Resource::initialize_class();
    }
    local_58 = 0;
    local_40 = 8;
    local_48 = "Resource";
    String::parse_latin1((StrRange *)&local_58);
    StringName::StringName((StringName *)&local_50,(String *)&local_58,false);
    local_48 = "NavigationPolygon";
    local_60 = 0;
    local_40 = 0x11;
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
    if ((code *)PTR__bind_methods_0010e090 != Resource::_bind_methods) {
      NavigationPolygon::_bind_methods();
    }
    initialize_class()::initialized = '\x01';
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* NavigationPolygonEditorPlugin::_initialize_classv() */

void NavigationPolygonEditorPlugin::_initialize_classv(void)

{
  long in_FS_OFFSET;
  undefined8 local_60;
  long local_58;
  undefined8 local_50;
  long local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (initialize_class()::initialized == '\0') {
    if (AbstractPolygon2DEditorPlugin::initialize_class()::initialized == '\0') {
      if (EditorPlugin::initialize_class()::initialized == '\0') {
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
          if ((code *)PTR__bind_methods_0010e008 != Node::_bind_methods) {
            Node::_bind_methods();
          }
          Node::initialize_class()::initialized = '\x01';
        }
        local_50 = 0;
        String::parse_latin1((String *)&local_50,"Node");
        StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
        local_60 = 0;
        String::parse_latin1((String *)&local_60,"EditorPlugin");
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
        if ((code *)PTR__bind_methods_0010e098 != Node::_bind_methods) {
          EditorPlugin::_bind_methods();
        }
        if ((code *)PTR__bind_compatibility_methods_0010e0a0 != Object::_bind_compatibility_methods)
        {
          EditorPlugin::_bind_compatibility_methods();
        }
        EditorPlugin::initialize_class()::initialized = '\x01';
      }
      local_50 = 0;
      String::parse_latin1((String *)&local_50,"EditorPlugin");
      StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
      local_60 = 0;
      String::parse_latin1((String *)&local_60,"AbstractPolygon2DEditorPlugin");
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
      AbstractPolygon2DEditorPlugin::initialize_class()::initialized = '\x01';
    }
    local_50 = 0;
    String::parse_latin1((String *)&local_50,"AbstractPolygon2DEditorPlugin");
    StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
    local_60 = 0;
    String::parse_latin1((String *)&local_60,"NavigationPolygonEditorPlugin");
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



/* HBoxContainer::_initialize_classv() */

void HBoxContainer::_initialize_classv(void)

{
  long in_FS_OFFSET;
  undefined8 local_60;
  long local_58;
  undefined8 local_50;
  long local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (initialize_class()::initialized == '\0') {
    if (BoxContainer::initialize_class()::initialized == '\0') {
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
              if ((code *)PTR__bind_methods_0010e008 != Node::_bind_methods) {
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
            if ((code *)PTR__bind_compatibility_methods_0010e070 !=
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
      String::parse_latin1((String *)&local_60,"BoxContainer");
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
      if ((code *)PTR__bind_methods_0010e078 != Container::_bind_methods) {
        BoxContainer::_bind_methods();
      }
      BoxContainer::initialize_class()::initialized = '\x01';
    }
    local_50 = 0;
    String::parse_latin1((String *)&local_50,"BoxContainer");
    StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
    local_60 = 0;
    String::parse_latin1((String *)&local_60,"HBoxContainer");
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



/* Node::is_class(String const&) const */

undefined8 __thiscall Node::is_class(Node *this,String *param_1)

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
    if (cVar4 != '\0') goto LAB_00105b23;
  }
  cVar4 = String::operator==(param_1,"Node");
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
      if (cVar4 != '\0') goto LAB_00105b23;
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar5 = String::operator==(param_1,"Object");
      return uVar5;
    }
  }
  else {
LAB_00105b23:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* AbstractPolygon2DEditorPlugin::is_class(String const&) const */

undefined8 __thiscall
AbstractPolygon2DEditorPlugin::is_class(AbstractPolygon2DEditorPlugin *this,String *param_1)

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
    if (cVar4 != '\0') goto LAB_00105d03;
  }
  cVar4 = String::operator==(param_1,"AbstractPolygon2DEditorPlugin");
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
      if (cVar4 != '\0') goto LAB_00105d03;
    }
    cVar4 = String::operator==(param_1,"EditorPlugin");
    if (cVar4 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar5 = Node::is_class((Node *)this,param_1);
        return uVar5;
      }
      goto LAB_00105e0e;
    }
  }
LAB_00105d03:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_00105e0e:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* NavigationPolygonEditorPlugin::is_class(String const&) const */

undefined8 __thiscall
NavigationPolygonEditorPlugin::is_class(NavigationPolygonEditorPlugin *this,String *param_1)

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
    if (cVar4 != '\0') goto LAB_00105f1b;
  }
  cVar4 = String::operator==(param_1,"NavigationPolygonEditorPlugin");
  if (cVar4 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar5 = AbstractPolygon2DEditorPlugin::is_class((AbstractPolygon2DEditorPlugin *)this,param_1)
      ;
      return uVar5;
    }
  }
  else {
LAB_00105f1b:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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
    if (cVar4 != '\0') goto LAB_00106043;
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
      if (cVar4 != '\0') goto LAB_00106043;
    }
    cVar4 = String::operator==(param_1,"CanvasItem");
    if (cVar4 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar5 = Node::is_class((Node *)this,param_1);
        return uVar5;
      }
      goto LAB_0010614e;
    }
  }
LAB_00106043:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0010614e:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* BoxContainer::is_class(String const&) const */

undefined8 __thiscall BoxContainer::is_class(BoxContainer *this,String *param_1)

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
    if (cVar4 != '\0') goto LAB_00106233;
  }
  cVar4 = String::operator==(param_1,"BoxContainer");
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
      if (cVar4 != '\0') goto LAB_00106233;
    }
    cVar4 = String::operator==(param_1,"Container");
    if (cVar4 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar5 = Control::is_class((Control *)this,param_1);
        return uVar5;
      }
      goto LAB_0010633e;
    }
  }
LAB_00106233:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0010633e:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* HBoxContainer::is_class(String const&) const */

undefined8 __thiscall HBoxContainer::is_class(HBoxContainer *this,String *param_1)

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
    if (cVar4 != '\0') goto LAB_0010644b;
  }
  cVar4 = String::operator==(param_1,"HBoxContainer");
  if (cVar4 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar5 = BoxContainer::is_class((BoxContainer *)this,param_1);
      return uVar5;
    }
  }
  else {
LAB_0010644b:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* NavigationPolygonEditor::is_class(String const&) const */

undefined8 __thiscall
NavigationPolygonEditor::is_class(NavigationPolygonEditor *this,String *param_1)

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
    if (cVar4 != '\0') goto LAB_00106573;
  }
  cVar4 = String::operator==(param_1,"NavigationPolygonEditor");
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
      if (cVar4 != '\0') goto LAB_00106573;
    }
    cVar4 = String::operator==(param_1,"AbstractPolygon2DEditor");
    if (cVar4 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar5 = HBoxContainer::is_class((HBoxContainer *)this,param_1);
        return uVar5;
      }
      goto LAB_0010667e;
    }
  }
LAB_00106573:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0010667e:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RefCounted::is_class(String const&) const */

undefined8 __thiscall RefCounted::is_class(RefCounted *this,String *param_1)

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
    if (cVar4 != '\0') goto LAB_00106763;
  }
  cVar4 = String::operator==(param_1,"RefCounted");
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
      if (cVar4 != '\0') goto LAB_00106763;
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar5 = String::operator==(param_1,"Object");
      return uVar5;
    }
  }
  else {
LAB_00106763:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Resource::is_class(String const&) const */

undefined8 __thiscall Resource::is_class(Resource *this,String *param_1)

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
    if (cVar4 != '\0') goto LAB_0010696b;
  }
  cVar4 = String::operator==(param_1,"Resource");
  if (cVar4 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar5 = RefCounted::is_class((RefCounted *)this,param_1);
      return uVar5;
    }
  }
  else {
LAB_0010696b:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* NavigationMesh::is_class(String const&) const */

undefined8 __thiscall NavigationMesh::is_class(NavigationMesh *this,String *param_1)

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
    if (cVar4 != '\0') goto LAB_00106abb;
  }
  cVar4 = String::operator==(param_1,"NavigationMesh");
  if (cVar4 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar5 = Resource::is_class((Resource *)this,param_1);
      return uVar5;
    }
  }
  else {
LAB_00106abb:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* NavigationPolygon::is_class(String const&) const */

undefined8 __thiscall NavigationPolygon::is_class(NavigationPolygon *this,String *param_1)

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
    if (cVar4 != '\0') goto LAB_00106c0b;
  }
  cVar4 = String::operator==(param_1,"NavigationPolygon");
  if (cVar4 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar5 = Resource::is_class((Resource *)this,param_1);
      return uVar5;
    }
  }
  else {
LAB_00106c0b:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RefCounted::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void RefCounted::_get_property_listv(List *param_1,bool param_2)

{
  undefined7 in_register_00000031;
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
  StringName::StringName((StringName *)&local_78,"RefCounted",false);
  ClassDB::get_property_list
            ((StringName *)&local_78,(List *)CONCAT71(in_register_00000031,param_2),true,
             (Object *)param_1);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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
  local_78 = &_LC11;
  local_88 = 0;
  local_90 = 0;
  local_70 = 4;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = &_LC11;
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
  undefined8 local_90;
  undefined8 local_88;
  long local_80;
  char *local_78;
  undefined8 local_70;
  long local_68;
  CowData<char32_t> local_58 [24];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (!param_2) {
    Node::_get_property_listv((List *)this,SUB81(param_1,0));
  }
  local_80 = 0;
  local_88 = 0;
  local_78 = "CanvasItem";
  local_70 = 10;
  String::parse_latin1((StrRange *)&local_88);
  local_78 = "CanvasItem";
  local_90 = 0;
  local_70 = 10;
  String::parse_latin1((StrRange *)&local_90);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_78,0,(StrRange *)&local_90,0,(StrRange *)&local_88,0x80,
             &local_80);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
  CowData<char32_t>::_unref(local_58);
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  if ((StringName::configured != '\0') && (local_80 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"CanvasItem",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if ((code *)PTR__get_property_list_0010e0a8 != Object::_get_property_list) {
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



/* Resource::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall Resource::_get_property_listv(Resource *this,List *param_1,bool param_2)

{
  long in_FS_OFFSET;
  undefined8 local_90;
  undefined8 local_88;
  long local_80;
  char *local_78;
  undefined8 local_70;
  long local_68;
  CowData<char32_t> local_58 [24];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (!param_2) {
    RefCounted::_get_property_listv((List *)this,SUB81(param_1,0));
  }
  local_80 = 0;
  local_88 = 0;
  local_78 = "Resource";
  local_70 = 8;
  String::parse_latin1((StrRange *)&local_88);
  local_78 = "Resource";
  local_90 = 0;
  local_70 = 8;
  String::parse_latin1((StrRange *)&local_90);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_78,0,(StrRange *)&local_90,0,(StrRange *)&local_88,0x80,
             &local_80);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
  CowData<char32_t>::_unref(local_58);
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  if ((StringName::configured != '\0') && (local_80 != 0)) {
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



/* NavigationPolygon::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall
NavigationPolygon::_get_property_listv(NavigationPolygon *this,List *param_1,bool param_2)

{
  long in_FS_OFFSET;
  undefined8 local_90;
  undefined8 local_88;
  long local_80;
  char *local_78;
  undefined8 local_70;
  long local_68;
  CowData<char32_t> local_58 [24];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (!param_2) {
    Resource::_get_property_listv((Resource *)this,param_1,false);
  }
  local_80 = 0;
  local_88 = 0;
  local_78 = "NavigationPolygon";
  local_70 = 0x11;
  String::parse_latin1((StrRange *)&local_88);
  local_78 = "NavigationPolygon";
  local_90 = 0;
  local_70 = 0x11;
  String::parse_latin1((StrRange *)&local_90);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_78,0,(StrRange *)&local_90,0,(StrRange *)&local_88,0x80,
             &local_80);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
  CowData<char32_t>::_unref(local_58);
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  if ((StringName::configured != '\0') && (local_80 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"NavigationPolygon",false);
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



/* NavigationMesh::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall NavigationMesh::_get_property_listv(NavigationMesh *this,List *param_1,bool param_2)

{
  long in_FS_OFFSET;
  undefined8 local_90;
  undefined8 local_88;
  long local_80;
  char *local_78;
  undefined8 local_70;
  long local_68;
  CowData<char32_t> local_58 [24];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (!param_2) {
    Resource::_get_property_listv((Resource *)this,param_1,false);
  }
  local_80 = 0;
  local_88 = 0;
  local_78 = "NavigationMesh";
  local_70 = 0xe;
  String::parse_latin1((StrRange *)&local_88);
  local_78 = "NavigationMesh";
  local_90 = 0;
  local_70 = 0xe;
  String::parse_latin1((StrRange *)&local_90);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_78,0,(StrRange *)&local_90,0,(StrRange *)&local_88,0x80,
             &local_80);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
  CowData<char32_t>::_unref(local_58);
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  if ((StringName::configured != '\0') && (local_80 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"NavigationMesh",false);
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



/* EditorPlugin::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall EditorPlugin::_get_property_listv(EditorPlugin *this,List *param_1,bool param_2)

{
  long in_FS_OFFSET;
  undefined8 local_90;
  undefined8 local_88;
  long local_80;
  char *local_78;
  undefined8 local_70;
  long local_68;
  CowData<char32_t> local_58 [24];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (!param_2) {
    Node::_get_property_listv((List *)this,SUB81(param_1,0));
  }
  local_80 = 0;
  local_88 = 0;
  local_78 = "EditorPlugin";
  local_70 = 0xc;
  String::parse_latin1((StrRange *)&local_88);
  local_78 = "EditorPlugin";
  local_90 = 0;
  local_70 = 0xc;
  String::parse_latin1((StrRange *)&local_90);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_78,0,(StrRange *)&local_90,0,(StrRange *)&local_88,0x80,
             &local_80);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
  CowData<char32_t>::_unref(local_58);
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  if ((StringName::configured != '\0') && (local_80 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"EditorPlugin",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
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



/* AbstractPolygon2DEditorPlugin::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool)
   const */

void __thiscall
AbstractPolygon2DEditorPlugin::_get_property_listv
          (AbstractPolygon2DEditorPlugin *this,List *param_1,bool param_2)

{
  long in_FS_OFFSET;
  undefined8 local_90;
  undefined8 local_88;
  long local_80;
  char *local_78;
  undefined8 local_70;
  long local_68;
  CowData<char32_t> local_58 [24];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (!param_2) {
    EditorPlugin::_get_property_listv((EditorPlugin *)this,param_1,false);
  }
  local_80 = 0;
  local_88 = 0;
  local_78 = "AbstractPolygon2DEditorPlugin";
  local_70 = 0x1d;
  String::parse_latin1((StrRange *)&local_88);
  local_78 = "AbstractPolygon2DEditorPlugin";
  local_90 = 0;
  local_70 = 0x1d;
  String::parse_latin1((StrRange *)&local_90);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_78,0,(StrRange *)&local_90,0,(StrRange *)&local_88,0x80,
             &local_80);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
  CowData<char32_t>::_unref(local_58);
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  if ((StringName::configured != '\0') && (local_80 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"AbstractPolygon2DEditorPlugin",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      EditorPlugin::_get_property_listv((EditorPlugin *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* NavigationPolygonEditorPlugin::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool)
   const */

void __thiscall
NavigationPolygonEditorPlugin::_get_property_listv
          (NavigationPolygonEditorPlugin *this,List *param_1,bool param_2)

{
  long in_FS_OFFSET;
  undefined8 local_90;
  undefined8 local_88;
  long local_80;
  char *local_78;
  undefined8 local_70;
  long local_68;
  CowData<char32_t> local_58 [24];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (!param_2) {
    AbstractPolygon2DEditorPlugin::_get_property_listv
              ((AbstractPolygon2DEditorPlugin *)this,param_1,false);
  }
  local_80 = 0;
  local_88 = 0;
  local_78 = "NavigationPolygonEditorPlugin";
  local_70 = 0x1d;
  String::parse_latin1((StrRange *)&local_88);
  local_78 = "NavigationPolygonEditorPlugin";
  local_90 = 0;
  local_70 = 0x1d;
  String::parse_latin1((StrRange *)&local_90);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_78,0,(StrRange *)&local_90,0,(StrRange *)&local_88,0x80,
             &local_80);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
  CowData<char32_t>::_unref(local_58);
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  if ((StringName::configured != '\0') && (local_80 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"NavigationPolygonEditorPlugin",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      AbstractPolygon2DEditorPlugin::_get_property_listv
                ((AbstractPolygon2DEditorPlugin *)this,param_1,true);
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
  undefined8 local_90;
  undefined8 local_88;
  long local_80;
  char *local_78;
  undefined8 local_70;
  long local_68;
  CowData<char32_t> local_58 [24];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (!param_2) {
    CanvasItem::_get_property_listv((CanvasItem *)this,param_1,false);
  }
  local_80 = 0;
  local_88 = 0;
  local_78 = "Control";
  local_70 = 7;
  String::parse_latin1((StrRange *)&local_88);
  local_78 = "Control";
  local_90 = 0;
  local_70 = 7;
  String::parse_latin1((StrRange *)&local_90);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_78,0,(StrRange *)&local_90,0,(StrRange *)&local_88,0x80,
             &local_80);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
  CowData<char32_t>::_unref(local_58);
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  if ((StringName::configured != '\0') && (local_80 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"Control",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if ((code *)PTR__get_property_list_0010e0b0 != CanvasItem::_get_property_list) {
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
  undefined8 local_90;
  undefined8 local_88;
  long local_80;
  char *local_78;
  undefined8 local_70;
  long local_68;
  CowData<char32_t> local_58 [24];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (!param_2) {
    Control::_get_property_listv((Control *)this,param_1,false);
  }
  local_80 = 0;
  local_88 = 0;
  local_78 = "Container";
  local_70 = 9;
  String::parse_latin1((StrRange *)&local_88);
  local_78 = "Container";
  local_90 = 0;
  local_70 = 9;
  String::parse_latin1((StrRange *)&local_90);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_78,0,(StrRange *)&local_90,0,(StrRange *)&local_88,0x80,
             &local_80);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
  CowData<char32_t>::_unref(local_58);
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  if ((StringName::configured != '\0') && (local_80 != 0)) {
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



/* BoxContainer::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall BoxContainer::_get_property_listv(BoxContainer *this,List *param_1,bool param_2)

{
  long in_FS_OFFSET;
  undefined8 local_90;
  undefined8 local_88;
  long local_80;
  char *local_78;
  undefined8 local_70;
  long local_68;
  CowData<char32_t> local_58 [24];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (!param_2) {
    Container::_get_property_listv((Container *)this,param_1,false);
  }
  local_80 = 0;
  local_88 = 0;
  local_78 = "BoxContainer";
  local_70 = 0xc;
  String::parse_latin1((StrRange *)&local_88);
  local_78 = "BoxContainer";
  local_90 = 0;
  local_70 = 0xc;
  String::parse_latin1((StrRange *)&local_90);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_78,0,(StrRange *)&local_90,0,(StrRange *)&local_88,0x80,
             &local_80);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
  CowData<char32_t>::_unref(local_58);
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  if ((StringName::configured != '\0') && (local_80 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"BoxContainer",false);
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



/* HBoxContainer::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall HBoxContainer::_get_property_listv(HBoxContainer *this,List *param_1,bool param_2)

{
  long in_FS_OFFSET;
  undefined8 local_90;
  undefined8 local_88;
  long local_80;
  char *local_78;
  undefined8 local_70;
  long local_68;
  CowData<char32_t> local_58 [24];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (!param_2) {
    BoxContainer::_get_property_listv((BoxContainer *)this,param_1,false);
  }
  local_80 = 0;
  local_88 = 0;
  local_78 = "HBoxContainer";
  local_70 = 0xd;
  String::parse_latin1((StrRange *)&local_88);
  local_78 = "HBoxContainer";
  local_90 = 0;
  local_70 = 0xd;
  String::parse_latin1((StrRange *)&local_90);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_78,0,(StrRange *)&local_90,0,(StrRange *)&local_88,0x80,
             &local_80);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
  CowData<char32_t>::_unref(local_58);
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  if ((StringName::configured != '\0') && (local_80 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"HBoxContainer",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      BoxContainer::_get_property_listv((BoxContainer *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* AbstractPolygon2DEditor::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const
    */

void __thiscall
AbstractPolygon2DEditor::_get_property_listv
          (AbstractPolygon2DEditor *this,List *param_1,bool param_2)

{
  long in_FS_OFFSET;
  undefined8 local_90;
  undefined8 local_88;
  long local_80;
  char *local_78;
  undefined8 local_70;
  long local_68;
  CowData<char32_t> local_58 [24];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (!param_2) {
    HBoxContainer::_get_property_listv((HBoxContainer *)this,param_1,false);
  }
  local_80 = 0;
  local_88 = 0;
  local_78 = "AbstractPolygon2DEditor";
  local_70 = 0x17;
  String::parse_latin1((StrRange *)&local_88);
  local_78 = "AbstractPolygon2DEditor";
  local_90 = 0;
  local_70 = 0x17;
  String::parse_latin1((StrRange *)&local_90);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_78,0,(StrRange *)&local_90,0,(StrRange *)&local_88,0x80,
             &local_80);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
  CowData<char32_t>::_unref(local_58);
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  if ((StringName::configured != '\0') && (local_80 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"AbstractPolygon2DEditor",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      HBoxContainer::_get_property_listv((HBoxContainer *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* NavigationPolygonEditor::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const
    */

void __thiscall
NavigationPolygonEditor::_get_property_listv
          (NavigationPolygonEditor *this,List *param_1,bool param_2)

{
  long in_FS_OFFSET;
  undefined8 local_90;
  undefined8 local_88;
  long local_80;
  char *local_78;
  undefined8 local_70;
  long local_68;
  CowData<char32_t> local_58 [24];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (!param_2) {
    AbstractPolygon2DEditor::_get_property_listv((AbstractPolygon2DEditor *)this,param_1,false);
  }
  local_80 = 0;
  local_88 = 0;
  local_78 = "NavigationPolygonEditor";
  local_70 = 0x17;
  String::parse_latin1((StrRange *)&local_88);
  local_78 = "NavigationPolygonEditor";
  local_90 = 0;
  local_70 = 0x17;
  String::parse_latin1((StrRange *)&local_90);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_78,0,(StrRange *)&local_90,0,(StrRange *)&local_88,0x80,
             &local_80);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
  CowData<char32_t>::_unref(local_58);
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  if ((StringName::configured != '\0') && (local_80 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"NavigationPolygonEditor",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      AbstractPolygon2DEditor::_get_property_listv((AbstractPolygon2DEditor *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CowData<Vector2>::_unref() */

void __thiscall CowData<Vector2>::_unref(CowData<Vector2> *this)

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



/* CowData<Vector<int> >::_unref() */

void __thiscall CowData<Vector<int>>::_unref(CowData<Vector<int>> *this)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  long lVar6;
  long lVar7;
  
  if (*(long *)this == 0) {
    return;
  }
  LOCK();
  plVar1 = (long *)(*(long *)this + -0x10);
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    lVar2 = *(long *)this;
    if (lVar2 != 0) {
      lVar3 = *(long *)(lVar2 + -8);
      *(undefined8 *)this = 0;
      if (lVar3 != 0) {
        lVar7 = 0;
        lVar6 = lVar2;
        do {
          if (*(long *)(lVar6 + 8) != 0) {
            LOCK();
            plVar1 = (long *)(*(long *)(lVar6 + 8) + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              lVar4 = *(long *)(lVar6 + 8);
              *(undefined8 *)(lVar6 + 8) = 0;
              Memory::free_static((void *)(lVar4 + -0x10),false);
            }
          }
          lVar7 = lVar7 + 1;
          lVar6 = lVar6 + 0x10;
        } while (lVar3 != lVar7);
      }
      Memory::free_static((void *)(lVar2 + -0x10),false);
      return;
    }
                    /* WARNING: Does not return */
    pcVar5 = (code *)invalidInstructionException();
    (*pcVar5)();
  }
  *(undefined8 *)this = 0;
  return;
}



/* NavigationMesh::~NavigationMesh() */

void __thiscall NavigationMesh::~NavigationMesh(NavigationMesh *this)

{
  long *plVar1;
  long lVar2;
  Object *pOVar3;
  char cVar4;
  bool bVar5;
  
  bVar5 = StringName::configured != '\0';
  *(undefined ***)this = &PTR__initialize_classv_001098a8;
  if ((bVar5) && (*(long *)(this + 0x2e8) != 0)) {
    StringName::unref();
  }
  if (*(long *)(this + 0x298) != 0) {
    cVar4 = RefCounted::unreference();
    if (cVar4 != '\0') {
      pOVar3 = *(Object **)(this + 0x298);
      cVar4 = predelete_handler(pOVar3);
      if (cVar4 != '\0') {
        (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
        Memory::free_static(pOVar3,false);
      }
    }
  }
  CowData<Vector<int>>::_unref((CowData<Vector<int>> *)(this + 0x290));
  if (*(long *)(this + 0x280) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x280) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x280);
      *(undefined8 *)(this + 0x280) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
      Resource::~Resource((Resource *)this);
      return;
    }
  }
  Resource::~Resource((Resource *)this);
  return;
}



/* NavigationMesh::~NavigationMesh() */

void __thiscall NavigationMesh::~NavigationMesh(NavigationMesh *this)

{
  long *plVar1;
  long lVar2;
  Object *pOVar3;
  char cVar4;
  bool bVar5;
  
  bVar5 = StringName::configured != '\0';
  *(undefined ***)this = &PTR__initialize_classv_001098a8;
  if ((bVar5) && (*(long *)(this + 0x2e8) != 0)) {
    StringName::unref();
  }
  if (*(long *)(this + 0x298) != 0) {
    cVar4 = RefCounted::unreference();
    if (cVar4 != '\0') {
      pOVar3 = *(Object **)(this + 0x298);
      cVar4 = predelete_handler(pOVar3);
      if (cVar4 != '\0') {
        (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
        Memory::free_static(pOVar3,false);
      }
    }
  }
  CowData<Vector<int>>::_unref((CowData<Vector<int>> *)(this + 0x290));
  if (*(long *)(this + 0x280) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x280) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x280);
      *(undefined8 *)(this + 0x280) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  Resource::~Resource((Resource *)this);
  operator_delete(this,0x318);
  return;
}



/* CowData<Vector<Vector2> >::_unref() */

void __thiscall CowData<Vector<Vector2>>::_unref(CowData<Vector<Vector2>> *this)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  long lVar6;
  long lVar7;
  
  if (*(long *)this == 0) {
    return;
  }
  LOCK();
  plVar1 = (long *)(*(long *)this + -0x10);
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    lVar2 = *(long *)this;
    if (lVar2 != 0) {
      lVar3 = *(long *)(lVar2 + -8);
      *(undefined8 *)this = 0;
      if (lVar3 != 0) {
        lVar7 = 0;
        lVar6 = lVar2;
        do {
          if (*(long *)(lVar6 + 8) != 0) {
            LOCK();
            plVar1 = (long *)(*(long *)(lVar6 + 8) + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              lVar4 = *(long *)(lVar6 + 8);
              *(undefined8 *)(lVar6 + 8) = 0;
              Memory::free_static((void *)(lVar4 + -0x10),false);
            }
          }
          lVar7 = lVar7 + 1;
          lVar6 = lVar6 + 0x10;
        } while (lVar3 != lVar7);
      }
      Memory::free_static((void *)(lVar2 + -0x10),false);
      return;
    }
                    /* WARNING: Does not return */
    pcVar5 = (code *)invalidInstructionException();
    (*pcVar5)();
  }
  *(undefined8 *)this = 0;
  return;
}



/* NavigationPolygon::~NavigationPolygon() */

void __thiscall NavigationPolygon::~NavigationPolygon(NavigationPolygon *this)

{
  long *plVar1;
  long lVar2;
  Object *this_00;
  Object *pOVar3;
  char cVar4;
  bool bVar5;
  
  bVar5 = StringName::configured != '\0';
  *(undefined ***)this = &PTR__initialize_classv_00109a80;
  if ((bVar5) && (*(long *)(this + 0x338) != 0)) {
    StringName::unref();
  }
  if (*(long *)(this + 0x2f8) != 0) {
    cVar4 = RefCounted::unreference();
    if (cVar4 != '\0') {
      this_00 = *(Object **)(this + 0x2f8);
      cVar4 = predelete_handler(this_00);
      if (cVar4 != '\0') {
        if (*(code **)(*(long *)this_00 + 0x140) == NavigationMesh::~NavigationMesh) {
          bVar5 = StringName::configured != '\0';
          *(undefined ***)this_00 = &PTR__initialize_classv_001098a8;
          if ((bVar5) && (*(long *)(this_00 + 0x2e8) != 0)) {
            StringName::unref();
          }
          if (*(long *)(this_00 + 0x298) != 0) {
            cVar4 = RefCounted::unreference();
            if (cVar4 != '\0') {
              pOVar3 = *(Object **)(this_00 + 0x298);
              cVar4 = predelete_handler(pOVar3);
              if (cVar4 != '\0') {
                (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
                Memory::free_static(pOVar3,false);
              }
            }
          }
          CowData<Vector<int>>::_unref((CowData<Vector<int>> *)(this_00 + 0x290));
          if (*(long *)(this_00 + 0x280) != 0) {
            LOCK();
            plVar1 = (long *)(*(long *)(this_00 + 0x280) + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              lVar2 = *(long *)(this_00 + 0x280);
              *(undefined8 *)(this_00 + 0x280) = 0;
              Memory::free_static((void *)(lVar2 + -0x10),false);
            }
          }
          Resource::~Resource((Resource *)this_00);
        }
        else {
          (**(code **)(*(long *)this_00 + 0x140))(this_00);
        }
        Memory::free_static(this_00,false);
      }
    }
  }
  CowData<Vector<Vector2>>::_unref((CowData<Vector<Vector2>> *)(this + 0x2b0));
  CowData<Vector<Vector2>>::_unref((CowData<Vector<Vector2>> *)(this + 0x2a0));
  CowData<Vector<int>>::_unref((CowData<Vector<int>> *)(this + 0x290));
  if (*(long *)(this + 0x280) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x280) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x280);
      *(undefined8 *)(this + 0x280) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
      Resource::~Resource((Resource *)this);
      return;
    }
  }
  Resource::~Resource((Resource *)this);
  return;
}



/* NavigationPolygon::~NavigationPolygon() */

void __thiscall NavigationPolygon::~NavigationPolygon(NavigationPolygon *this)

{
  long *plVar1;
  Object *this_00;
  Object *pOVar2;
  long lVar3;
  char cVar4;
  bool bVar5;
  
  bVar5 = StringName::configured != '\0';
  *(undefined ***)this = &PTR__initialize_classv_00109a80;
  if ((bVar5) && (*(long *)(this + 0x338) != 0)) {
    StringName::unref();
  }
  if (*(long *)(this + 0x2f8) != 0) {
    cVar4 = RefCounted::unreference();
    if (cVar4 != '\0') {
      this_00 = *(Object **)(this + 0x2f8);
      cVar4 = predelete_handler(this_00);
      if (cVar4 != '\0') {
        if (*(code **)(*(long *)this_00 + 0x140) == NavigationMesh::~NavigationMesh) {
          bVar5 = StringName::configured != '\0';
          *(undefined ***)this_00 = &PTR__initialize_classv_001098a8;
          if ((bVar5) && (*(long *)(this_00 + 0x2e8) != 0)) {
            StringName::unref();
          }
          if (*(long *)(this_00 + 0x298) != 0) {
            cVar4 = RefCounted::unreference();
            if (cVar4 != '\0') {
              pOVar2 = *(Object **)(this_00 + 0x298);
              cVar4 = predelete_handler(pOVar2);
              if (cVar4 != '\0') {
                (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
                Memory::free_static(pOVar2,false);
              }
            }
          }
          CowData<Vector<int>>::_unref((CowData<Vector<int>> *)(this_00 + 0x290));
          if (*(long *)(this_00 + 0x280) != 0) {
            LOCK();
            plVar1 = (long *)(*(long *)(this_00 + 0x280) + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              lVar3 = *(long *)(this_00 + 0x280);
              *(undefined8 *)(this_00 + 0x280) = 0;
              Memory::free_static((void *)(lVar3 + -0x10),false);
            }
          }
          Resource::~Resource((Resource *)this_00);
        }
        else {
          (**(code **)(*(long *)this_00 + 0x140))(this_00);
        }
        Memory::free_static(this_00,false);
      }
    }
  }
  CowData<Vector<Vector2>>::_unref((CowData<Vector<Vector2>> *)(this + 0x2b0));
  CowData<Vector<Vector2>>::_unref((CowData<Vector<Vector2>> *)(this + 0x2a0));
  CowData<Vector<int>>::_unref((CowData<Vector<int>> *)(this + 0x290));
  CowData<Vector2>::_unref((CowData<Vector2> *)(this + 0x280));
  Resource::~Resource((Resource *)this);
  operator_delete(this,0x340);
  return;
}



/* void memdelete<NavigationPolygon>(NavigationPolygon*) */

void memdelete<NavigationPolygon>(NavigationPolygon *param_1)

{
  Object *pOVar1;
  char cVar2;
  bool bVar3;
  
  cVar2 = predelete_handler((Object *)param_1);
  if (cVar2 == '\0') {
    return;
  }
  if (*(code **)(*(long *)param_1 + 0x140) == NavigationPolygon::~NavigationPolygon) {
    bVar3 = StringName::configured != '\0';
    *(undefined ***)param_1 = &PTR__initialize_classv_00109a80;
    if ((bVar3) && (*(long *)(param_1 + 0x338) != 0)) {
      StringName::unref();
    }
    if (*(long *)(param_1 + 0x2f8) != 0) {
      cVar2 = RefCounted::unreference();
      if (cVar2 != '\0') {
        pOVar1 = *(Object **)(param_1 + 0x2f8);
        cVar2 = predelete_handler(pOVar1);
        if (cVar2 != '\0') {
          (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
          Memory::free_static(pOVar1,false);
        }
      }
    }
    CowData<Vector<Vector2>>::_unref((CowData<Vector<Vector2>> *)(param_1 + 0x2b0));
    CowData<Vector<Vector2>>::_unref((CowData<Vector<Vector2>> *)(param_1 + 0x2a0));
    CowData<Vector<int>>::_unref((CowData<Vector<int>> *)(param_1 + 0x290));
    CowData<Vector2>::_unref((CowData<Vector2> *)(param_1 + 0x280));
    Resource::~Resource((Resource *)param_1);
    Memory::free_static(param_1,false);
    return;
  }
  (**(code **)(*(long *)param_1 + 0x140))(param_1);
  Memory::free_static(param_1,false);
  return;
}



/* Ref<NavigationPolygon>::unref() */

void __thiscall Ref<NavigationPolygon>::unref(Ref<NavigationPolygon> *this)

{
  char cVar1;
  
  if (*(long *)this != 0) {
    cVar1 = RefCounted::unreference();
    if (cVar1 != '\0') {
      memdelete<NavigationPolygon>(*(NavigationPolygon **)this);
      *(undefined8 *)this = 0;
      return;
    }
  }
  *(undefined8 *)this = 0;
  return;
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
/* NavigationPolygonEditor::~NavigationPolygonEditor() */

void __thiscall NavigationPolygonEditor::~NavigationPolygonEditor(NavigationPolygonEditor *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* HBoxContainer::~HBoxContainer() */

void __thiscall HBoxContainer::~HBoxContainer(HBoxContainer *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* NavigationPolygonEditorPlugin::~NavigationPolygonEditorPlugin() */

void __thiscall
NavigationPolygonEditorPlugin::~NavigationPolygonEditorPlugin(NavigationPolygonEditorPlugin *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<NavigationPolygonEditor, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<NavigationPolygonEditor,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<NavigationPolygonEditor,void> *this)

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
/* NavigationPolygon::~NavigationPolygon() */

void __thiscall NavigationPolygon::~NavigationPolygon(NavigationPolygon *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* NavigationMesh::~NavigationMesh() */

void __thiscall NavigationMesh::~NavigationMesh(NavigationMesh *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



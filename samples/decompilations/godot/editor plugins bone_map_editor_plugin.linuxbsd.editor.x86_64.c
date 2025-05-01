
/* BoneMapper::get_current_group_idx() const */

undefined4 __thiscall BoneMapper::get_current_group_idx(BoneMapper *this)

{
  return *(undefined4 *)(this + 0xa48);
}



/* BoneMapper::get_current_bone_idx() const */

undefined4 __thiscall BoneMapper::get_current_bone_idx(BoneMapper *this)

{
  return *(undefined4 *)(this + 0xa4c);
}



/* BoneMapperItem::_value_changed(String const&, Variant const&, String const&, bool) */

void BoneMapperItem::_value_changed(String *param_1,Variant *param_2,String *param_3,bool param_4)

{
  StringName *pSVar1;
  long in_FS_OFFSET;
  long local_28;
  long local_20;
  
  pSVar1 = *(StringName **)(param_1 + 0xa20);
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  StringName::StringName((StringName *)&local_28,(String *)param_2,false);
  Object::set(pSVar1,(Variant *)&local_28,(bool *)param_3);
  if ((StringName::configured != '\0') && (local_28 != 0)) {
    StringName::unref();
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* BonePicker::_confirm() */

void BonePicker::_confirm(void)

{
  AcceptDialog::_ok_pressed();
  return;
}



/* BonePicker::~BonePicker() */

void __thiscall BonePicker::~BonePicker(BonePicker *this)

{
  *(undefined ***)this = &PTR__initialize_classv_001233b0;
  AcceptDialog::~AcceptDialog((AcceptDialog *)this);
  return;
}



/* BonePicker::~BonePicker() */

void __thiscall BonePicker::~BonePicker(BonePicker *this)

{
  *(undefined ***)this = &PTR__initialize_classv_001233b0;
  AcceptDialog::~AcceptDialog((AcceptDialog *)this);
  operator_delete(this,0xdc0);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BoneMapper::_pick_bone(StringName const&) */

void __thiscall BoneMapper::_pick_bone(BoneMapper *this,StringName *param_1)

{
  Vector2i *pVVar1;
  long in_FS_OFFSET;
  float fVar2;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  StringName::operator=((StringName *)(this + 0xa88),param_1);
  pVVar1 = *(Vector2i **)(this + 0xa80);
  fVar2 = (float)EditorScale::get_scale();
  local_20 = CONCAT44(fVar2 * __LC0,fVar2 * __LC0);
  local_18 = Vector2::operator_cast_to_Vector2i((Vector2 *)&local_20);
  Window::popup_centered(pVVar1);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CowData<BoneMapperItem*>::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<BoneMapperItem*>::_copy_on_write(CowData<BoneMapperItem*> *this)

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



/* CowData<BoneMapperButton*>::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<BoneMapperButton*>::_copy_on_write(CowData<BoneMapperButton*> *this)

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



/* CowData<int>::find(int const&, long) const [clone .isra.0] */

long __thiscall CowData<int>::find(CowData<int> *this,int *param_1,long param_2)

{
  long lVar1;
  
  if ((((this != (CowData<int> *)0x0) && (-1 < param_2)) &&
      (lVar1 = *(long *)(this + -8), lVar1 != 0)) && (param_2 < lVar1)) {
    do {
      if (*(int *)(this + param_2 * 4) == (int)param_1) {
        return param_2;
      }
      param_2 = param_2 + 1;
    } while (lVar1 != param_2);
  }
  return -1;
}



/* BoneMapperItem::_open_picker() */

void __thiscall BoneMapperItem::_open_picker(BoneMapperItem *this)

{
  char cVar1;
  int iVar2;
  long in_FS_OFFSET;
  long local_80;
  Variant *local_78 [2];
  int local_68 [6];
  undefined8 local_50;
  undefined1 local_48 [16];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  StringName::StringName((StringName *)&local_80,(StringName *)(this + 0xa18));
  if ((_open_picker()::{lambda()#1}::operator()()::sname == '\0') &&
     (iVar2 = __cxa_guard_acquire(&_open_picker()::{lambda()#1}::operator()()::sname), iVar2 != 0))
  {
    _scs_create((char *)&_open_picker()::{lambda()#1}::operator()()::sname,true);
    __cxa_atexit(StringName::~StringName,&_open_picker()::{lambda()#1}::operator()()::sname,
                 &__dso_handle);
    __cxa_guard_release(&_open_picker()::{lambda()#1}::operator()()::sname);
  }
  Variant::Variant((Variant *)local_68,(StringName *)&local_80);
  local_50 = 0;
  local_48 = (undefined1  [16])0x0;
  local_78[0] = (Variant *)local_68;
  (**(code **)(*(long *)this + 0xd0))
            (this,&_open_picker()::{lambda()#1}::operator()()::sname,local_78,1);
  if (Variant::needs_deinit[(int)local_50] == '\0') {
    cVar1 = Variant::needs_deinit[local_68[0]];
  }
  else {
    Variant::_clear_internal();
    cVar1 = Variant::needs_deinit[local_68[0]];
  }
  if (cVar1 != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_80 != 0)) {
    StringName::unref();
  }
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* BoneMapperItem::_update_property() */

void __thiscall BoneMapperItem::_update_property(BoneMapperItem *this)

{
  long lVar1;
  long lVar2;
  long in_FS_OFFSET;
  long local_28;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  lVar2 = EditorProperty::get_edited_object();
  if (lVar2 != 0) {
    EditorProperty::get_edited_property();
    if (local_28 != 0) {
      if ((*(long *)(local_28 + 8) != 0) ||
         ((*(long *)(local_28 + 0x10) != 0 && (1 < *(uint *)(*(long *)(local_28 + 0x10) + -8))))) {
        if (StringName::configured != '\0') {
          StringName::unref();
        }
        if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0010060e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(**(long **)(this + 0xa28) + 0x380))();
          return;
        }
        goto LAB_00100647;
      }
      if (StringName::configured != '\0') {
        StringName::unref();
      }
    }
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00100647:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorInspectorPluginBoneMap::can_handle(Object*) */

bool __thiscall
EditorInspectorPluginBoneMap::can_handle(EditorInspectorPluginBoneMap *this,Object *param_1)

{
  long lVar1;
  
  if (param_1 != (Object *)0x0) {
    lVar1 = __dynamic_cast(param_1,&Object::typeinfo,&BoneMap::typeinfo,0);
    return lVar1 != 0;
  }
  return false;
}



/* BoneMapEditor::~BoneMapEditor() */

void __thiscall BoneMapEditor::~BoneMapEditor(BoneMapEditor *this)

{
  Object *pOVar1;
  char cVar2;
  bool bVar3;
  
  *(undefined ***)this = &PTR__initialize_classv_001239b0;
  if (*(long *)(this + 0xa18) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0xa18);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  bVar3 = StringName::configured != '\0';
  *(code **)this = RefCounted::unreference;
  if (bVar3) {
    if (*(long *)(this + 0x9e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00100704;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_00100704:
  Control::~Control((Control *)this);
  return;
}



/* BoneMapEditor::~BoneMapEditor() */

void __thiscall BoneMapEditor::~BoneMapEditor(BoneMapEditor *this)

{
  Object *pOVar1;
  char cVar2;
  bool bVar3;
  
  *(undefined ***)this = &PTR__initialize_classv_001239b0;
  if (*(long *)(this + 0xa18) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0xa18);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  bVar3 = StringName::configured != '\0';
  *(code **)this = RefCounted::unreference;
  if (bVar3) {
    if (*(long *)(this + 0x9e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001007c4;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_001007c4:
  Control::~Control((Control *)this);
  operator_delete(this,0xa28);
  return;
}



/* BoneMapperItem::~BoneMapperItem() */

void __thiscall BoneMapperItem::~BoneMapperItem(BoneMapperItem *this)

{
  Object *pOVar1;
  char cVar2;
  bool bVar3;
  
  *(undefined ***)this = &PTR__initialize_classv_00123028;
  if ((*(long *)(this + 0xa20) != 0) && (cVar2 = RefCounted::unreference(), cVar2 != '\0')) {
    pOVar1 = *(Object **)(this + 0xa20);
    cVar2 = predelete_handler(pOVar1);
    if (cVar2 != '\0') {
      (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
      Memory::free_static(pOVar1,false);
    }
  }
  if (StringName::configured == '\0') {
    *(code **)this = RefCounted::unreference;
    Control::~Control((Control *)this);
    return;
  }
  if (*(long *)(this + 0xa18) == 0) {
    *(code **)this = RefCounted::unreference;
  }
  else {
    StringName::unref();
    bVar3 = StringName::configured == '\0';
    *(code **)this = RefCounted::unreference;
    if (bVar3) goto LAB_001008ab;
  }
  if (((*(long *)(this + 0x9e8) == 0) || (StringName::unref(), StringName::configured != '\0')) &&
     (*(long *)(this + 0x9d0) != 0)) {
    StringName::unref();
  }
LAB_001008ab:
  Control::~Control((Control *)this);
  return;
}



/* BoneMapperItem::~BoneMapperItem() */

void __thiscall BoneMapperItem::~BoneMapperItem(BoneMapperItem *this)

{
  ~BoneMapperItem(this);
  operator_delete(this,0xa38);
  return;
}



/* BoneMapper::~BoneMapper() */

void __thiscall BoneMapper::~BoneMapper(BoneMapper *this)

{
  long *plVar1;
  long lVar2;
  Object *pOVar3;
  char cVar4;
  bool bVar5;
  
  bVar5 = StringName::configured != '\0';
  *(undefined ***)this = &PTR__initialize_classv_00123628;
  if ((bVar5) && (*(long *)(this + 0xa88) != 0)) {
    StringName::unref();
  }
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
  if (*(long *)(this + 0xa30) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0xa30) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0xa30);
      *(undefined8 *)(this + 0xa30) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (*(long *)(this + 0xa18) != 0) {
    cVar4 = RefCounted::unreference();
    if (cVar4 != '\0') {
      pOVar3 = *(Object **)(this + 0xa18);
      cVar4 = predelete_handler(pOVar3);
      if (cVar4 != '\0') {
        (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
        Memory::free_static(pOVar3,false);
      }
    }
  }
  bVar5 = StringName::configured != '\0';
  *(code **)this = RefCounted::unreference;
  if (bVar5) {
    if (*(long *)(this + 0x9e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00100a17;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_00100a17:
  Control::~Control((Control *)this);
  return;
}



/* BoneMapper::~BoneMapper() */

void __thiscall BoneMapper::~BoneMapper(BoneMapper *this)

{
  ~BoneMapper(this);
  operator_delete(this,0xa90);
  return;
}



/* BoneMapperButton::~BoneMapperButton() */

void __thiscall BoneMapperButton::~BoneMapperButton(BoneMapperButton *this)

{
  Object *pOVar1;
  char cVar2;
  bool bVar3;
  
  bVar3 = StringName::configured != '\0';
  *(undefined ***)this = &PTR__initialize_classv_00122cb0;
  if ((bVar3) && (*(long *)(this + 0xaa0) != 0)) {
    StringName::unref();
  }
  *(code **)this = Container::_notification;
  if (*(long *)(this + 0xa68) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0xa68);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
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
  if (*(long *)(this + 0xa58) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0xa58);
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
        BaseButton::~BaseButton((BaseButton *)this);
        return;
      }
    }
  }
  BaseButton::~BaseButton((BaseButton *)this);
  return;
}



/* BoneMapperButton::~BoneMapperButton() */

void __thiscall BoneMapperButton::~BoneMapperButton(BoneMapperButton *this)

{
  ~BoneMapperButton(this);
  operator_delete(this,0xab8);
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



/* BoneMapperButton::get_profile_bone_name() const */

void BoneMapperButton::get_profile_bone_name(void)

{
  long in_RSI;
  StringName *in_RDI;
  
  StringName::StringName(in_RDI,(StringName *)(in_RSI + 0xaa0));
  return;
}



/* BoneMapperButton::is_require() const */

BoneMapperButton __thiscall BoneMapperButton::is_require(BoneMapperButton *this)

{
  return this[0xaa9];
}



/* BoneMapperButton::BoneMapperButton(StringName const&, bool, bool) */

void __thiscall
BoneMapperButton::BoneMapperButton
          (BoneMapperButton *this,StringName *param_1,bool param_2,bool param_3)

{
  TextureButton::TextureButton((TextureButton *)this);
  *(undefined ***)this = &PTR__initialize_classv_00122cb0;
  *(undefined8 *)(this + 0xaa0) = 0;
  *(undefined2 *)(this + 0xaa8) = 0;
  *(undefined8 *)(this + 0xab0) = 0;
  StringName::operator=((StringName *)(this + 0xaa0),param_1);
  this[0xaa9] = (BoneMapperButton)param_2;
  this[0xaa8] = (BoneMapperButton)param_3;
  return;
}



/* BoneMapperItem::BoneMapperItem(Ref<BoneMap>&, StringName const&) */

void __thiscall
BoneMapperItem::BoneMapperItem(BoneMapperItem *this,Ref *param_1,StringName *param_2)

{
  long lVar1;
  char cVar2;
  
  BoxContainer::BoxContainer((BoxContainer *)this,true);
  this[0xa0c] = (BoneMapperItem)0x1;
  *(undefined1 (*) [16])(this + 0xa18) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xa28) = (undefined1  [16])0x0;
  lVar1 = *(long *)param_1;
  *(undefined ***)this = &PTR__initialize_classv_00123028;
  *(undefined4 *)(this + 0xa10) = 0xffffffff;
  if (lVar1 != 0) {
    *(long *)(this + 0xa20) = lVar1;
    cVar2 = RefCounted::reference();
    if (cVar2 == '\0') {
      *(undefined8 *)(this + 0xa20) = 0;
    }
  }
  StringName::operator=((StringName *)(this + 0xa18),param_2);
  return;
}



/* BonePicker::popup_bones_tree(Vector2i const&) */

void BonePicker::popup_bones_tree(Vector2i *param_1)

{
  Window::popup_centered(param_1);
  return;
}



/* BonePicker::has_selected_bone() */

bool BonePicker::has_selected_bone(void)

{
  long lVar1;
  
  lVar1 = Tree::get_selected();
  return lVar1 != 0;
}



/* BonePicker::BonePicker(Skeleton3D*) */

void __thiscall BonePicker::BonePicker(BonePicker *this,Skeleton3D *param_1)

{
  AcceptDialog::AcceptDialog((AcceptDialog *)this);
  *(undefined8 *)(this + 0xdb8) = 0;
  *(undefined ***)this = &PTR__initialize_classv_001233b0;
  *(Skeleton3D **)(this + 0xdb0) = param_1;
  return;
}



/* BoneMapper::BoneMapper(Skeleton3D*, Ref<BoneMap>&) */

void __thiscall BoneMapper::BoneMapper(BoneMapper *this,Skeleton3D *param_1,Ref *param_2)

{
  long lVar1;
  undefined8 uVar2;
  char cVar3;
  
  BoxContainer::BoxContainer((BoxContainer *)this,true);
  *(undefined8 *)(this + 0xa18) = 0;
  *(undefined ***)this = &PTR__initialize_classv_00123628;
  uVar2 = _LC22;
  *(undefined1 (*) [16])(this + 0xa30) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xa78) = (undefined1  [16])0x0;
  lVar1 = *(long *)param_2;
  this[0xa0c] = (BoneMapper)0x1;
  *(undefined8 *)(this + 0xa20) = 0;
  *(undefined8 *)(this + 0xa40) = 0;
  *(undefined8 *)(this + 0xa48) = uVar2;
  *(undefined8 *)(this + 0xa88) = 0;
  *(Skeleton3D **)(this + 0xa10) = param_1;
  *(undefined1 (*) [16])(this + 0xa50) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xa60) = (undefined1  [16])0x0;
  if (lVar1 != 0) {
    *(long *)(this + 0xa18) = lVar1;
    cVar3 = RefCounted::reference();
    if (cVar3 == '\0') {
      *(undefined8 *)(this + 0xa18) = 0;
    }
  }
  return;
}



/* BoneMapEditor::create_editors() */

void __thiscall BoneMapEditor::create_editors(BoneMapEditor *this)

{
  BoneMapper *this_00;
  
  if (*(long *)(this + 0xa10) != 0) {
    this_00 = (BoneMapper *)operator_new(0xa90,"");
    BoneMapper::BoneMapper(this_00,*(Skeleton3D **)(this + 0xa10),(Ref *)(this + 0xa18));
    postinitialize_handler((Object *)this_00);
    *(BoneMapper **)(this + 0xa20) = this_00;
    Node::add_child(this,this_00,0,0);
    return;
  }
  return;
}



/* BoneMapEditor::fetch_objects() */

void __thiscall BoneMapEditor::fetch_objects(BoneMapEditor *this)

{
  char cVar1;
  long lVar2;
  
  *(undefined8 *)(this + 0xa10) = 0;
  lVar2 = SceneImportSettingsDialog::get_singleton();
  if (lVar2 != 0) {
    cVar1 = Window::is_visible();
    if (cVar1 != '\0') {
      lVar2 = SceneImportSettingsDialog::get_selected_node();
      if (lVar2 == 0) {
        *(undefined8 *)(this + 0xa10) = 0;
        return;
      }
      lVar2 = __dynamic_cast(lVar2,&Object::typeinfo,&Skeleton3D::typeinfo,0);
      if (lVar2 != 0) {
        *(long *)(this + 0xa10) = lVar2;
        return;
      }
    }
  }
  return;
}



/* BoneMapEditor::_notification(int) */

void __thiscall BoneMapEditor::_notification(BoneMapEditor *this,int param_1)

{
  BoneMapper *this_00;
  
  if (param_1 == 10) {
    fetch_objects(this);
    if (*(long *)(this + 0xa10) != 0) {
      this_00 = (BoneMapper *)operator_new(0xa90,"");
      BoneMapper::BoneMapper(this_00,*(Skeleton3D **)(this + 0xa10),(Ref *)(this + 0xa18));
      postinitialize_handler((Object *)this_00);
      *(BoneMapper **)(this + 0xa20) = this_00;
      Node::add_child(this,this_00,0,0);
      return;
    }
  }
  else if (param_1 == 0xb) {
    *(undefined8 *)(this + 0xa10) = 0;
    return;
  }
  return;
}



/* BoneMapEditor::BoneMapEditor(Ref<BoneMap>&) */

void __thiscall BoneMapEditor::BoneMapEditor(BoneMapEditor *this,Ref *param_1)

{
  long lVar1;
  char cVar2;
  
  BoxContainer::BoxContainer((BoxContainer *)this,true);
  lVar1 = *(long *)param_1;
  this[0xa0c] = (BoneMapEditor)0x1;
  *(undefined ***)this = &PTR__initialize_classv_001239b0;
  *(undefined8 *)(this + 0xa20) = 0;
  *(undefined1 (*) [16])(this + 0xa10) = (undefined1  [16])0x0;
  if (lVar1 != 0) {
    *(long *)(this + 0xa18) = lVar1;
    cVar2 = RefCounted::reference();
    if (cVar2 == '\0') {
      *(undefined8 *)(this + 0xa18) = 0;
    }
  }
  return;
}



/* EditorInspectorPluginBoneMap::parse_begin(Object*) */

void __thiscall
EditorInspectorPluginBoneMap::parse_begin(EditorInspectorPluginBoneMap *this,Object *param_1)

{
  char cVar1;
  Object *pOVar2;
  BoneMapEditor *pBVar3;
  long in_FS_OFFSET;
  Object *local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 != (Object *)0x0) {
    pOVar2 = (Object *)__dynamic_cast(param_1,&Object::typeinfo,&BoneMap::typeinfo,0);
    if (pOVar2 != (Object *)0x0) {
      local_28 = pOVar2;
      cVar1 = RefCounted::init_ref();
      if (cVar1 == '\0') {
        local_28 = (Object *)0x0;
        pBVar3 = (BoneMapEditor *)operator_new(0xa28,"");
        BoneMapEditor::BoneMapEditor(pBVar3,(Ref *)&local_28);
        postinitialize_handler((Object *)pBVar3);
        *(BoneMapEditor **)(this + 0x218) = pBVar3;
        if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
          EditorInspectorPlugin::add_custom_control((Control *)this);
          return;
        }
        goto LAB_0010149a;
      }
      pBVar3 = (BoneMapEditor *)operator_new(0xa28,"");
      BoneMapEditor::BoneMapEditor(pBVar3,(Ref *)&local_28);
      postinitialize_handler((Object *)pBVar3);
      *(BoneMapEditor **)(this + 0x218) = pBVar3;
      EditorInspectorPlugin::add_custom_control((Control *)this);
      cVar1 = RefCounted::unreference();
      if (cVar1 != '\0') {
        cVar1 = predelete_handler(pOVar2);
        if (cVar1 != '\0') {
          (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
          if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
            Memory::free_static(pOVar2,false);
            return;
          }
          goto LAB_0010149a;
        }
      }
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_0010149a:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* BoneMapperItem::_notification(int) */

void __thiscall BoneMapperItem::_notification(BoneMapperItem *this,int param_1)

{
  long *plVar1;
  code *pcVar2;
  char cVar3;
  long in_FS_OFFSET;
  long local_60;
  BoneMapperItem local_58 [24];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == 10) {
    (**(code **)(*(long *)this + 0x370))();
    plVar1 = *(long **)(this + 0xa20);
    pcVar2 = *(code **)(*plVar1 + 0x108);
    create_custom_callable_function_pointer<BoneMapperItem>
              (local_58,(char *)this,(_func_void *)"&BoneMapperItem::_update_property");
    StringName::StringName((StringName *)&local_60,"bone_map_updated",false);
    (*pcVar2)(plVar1,(StringName *)&local_60,local_58,0);
  }
  else {
    if ((param_1 != 0xb) || (plVar1 = *(long **)(this + 0xa20), plVar1 == (long *)0x0))
    goto LAB_001014d3;
    pcVar2 = *(code **)(*plVar1 + 0x118);
    create_custom_callable_function_pointer<BoneMapperItem>
              (local_58,(char *)this,(_func_void *)"&BoneMapperItem::_update_property");
    StringName::StringName((StringName *)&local_60,"bone_map_updated",false);
    cVar3 = (*pcVar2)(plVar1,(StringName *)&local_60,local_58);
    if ((StringName::configured != '\0') && (local_60 != 0)) {
      StringName::unref();
    }
    Callable::~Callable((Callable *)local_58);
    if (cVar3 == '\0') goto LAB_001014d3;
    plVar1 = *(long **)(this + 0xa20);
    pcVar2 = *(code **)(*plVar1 + 0x110);
    create_custom_callable_function_pointer<BoneMapperItem>
              (local_58,(char *)this,(_func_void *)"&BoneMapperItem::_update_property");
    StringName::StringName((StringName *)&local_60,"bone_map_updated",false);
    (*pcVar2)(plVar1,(StringName *)&local_60,local_58);
  }
  if ((StringName::configured != '\0') && (local_60 != 0)) {
    StringName::unref();
  }
  Callable::~Callable((Callable *)local_58);
LAB_001014d3:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* BoneMapEditorPlugin::BoneMapEditorPlugin() */

void __thiscall BoneMapEditorPlugin::BoneMapEditorPlugin(BoneMapEditorPlugin *this)

{
  Object *pOVar1;
  char cVar2;
  Object *pOVar3;
  PostImportPluginSkeletonTrackOrganizer *this_00;
  PostImportPluginSkeletonRenamer *this_01;
  PostImportPluginSkeletonRestFixer *this_02;
  bool bVar4;
  PostImportPluginSkeletonTrackOrganizer *pPVar5;
  PostImportPluginSkeletonRenamer *pPVar6;
  long in_FS_OFFSET;
  PostImportPluginSkeletonRestFixer *local_60;
  Object *local_50;
  Object *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Node::Node((Node *)this);
  *(code **)this = EditorPlugin::add_inspector_plugin;
  *(undefined2 *)(this + 0x408) = 0;
  *(undefined1 (*) [16])(this + 0x410) = (undefined1  [16])0x0;
  StringName::StringName((StringName *)(this + 0x420),"_forward_canvas_gui_input",false);
  this[0x428] = (BoneMapEditorPlugin)0x0;
  *(undefined8 *)(this + 0x430) = 0;
  StringName::StringName((StringName *)(this + 0x438),"_forward_canvas_draw_over_viewport",false);
  this[0x440] = (BoneMapEditorPlugin)0x0;
  *(undefined8 *)(this + 0x448) = 0;
  StringName::StringName
            ((StringName *)(this + 0x450),"_forward_canvas_force_draw_over_viewport",false);
  this[0x458] = (BoneMapEditorPlugin)0x0;
  *(undefined8 *)(this + 0x460) = 0;
  StringName::StringName((StringName *)(this + 0x468),"_forward_3d_gui_input",false);
  this[0x470] = (BoneMapEditorPlugin)0x0;
  *(undefined8 *)(this + 0x478) = 0;
  StringName::StringName((StringName *)(this + 0x480),"_forward_3d_draw_over_viewport",false);
  this[0x488] = (BoneMapEditorPlugin)0x0;
  *(undefined8 *)(this + 0x490) = 0;
  StringName::StringName((StringName *)(this + 0x498),"_forward_3d_force_draw_over_viewport",false);
  this[0x4a0] = (BoneMapEditorPlugin)0x0;
  *(undefined8 *)(this + 0x4a8) = 0;
  StringName::StringName((StringName *)(this + 0x4b0),"_get_plugin_name",false);
  this[0x4b8] = (BoneMapEditorPlugin)0x0;
  *(undefined8 *)(this + 0x4c0) = 0;
  StringName::StringName((StringName *)(this + 0x4c8),"_get_plugin_icon",false);
  this[0x4d0] = (BoneMapEditorPlugin)0x0;
  *(undefined8 *)(this + 0x4d8) = 0;
  StringName::StringName((StringName *)(this + 0x4e0),"_has_main_screen",false);
  this[0x4e8] = (BoneMapEditorPlugin)0x0;
  *(undefined8 *)(this + 0x4f0) = 0;
  StringName::StringName((StringName *)(this + 0x4f8),"_make_visible",false);
  this[0x500] = (BoneMapEditorPlugin)0x0;
  *(undefined8 *)(this + 0x508) = 0;
  StringName::StringName((StringName *)(this + 0x510),"_edit",false);
  this[0x518] = (BoneMapEditorPlugin)0x0;
  *(undefined8 *)(this + 0x520) = 0;
  StringName::StringName((StringName *)(this + 0x528),"_handles",false);
  this[0x530] = (BoneMapEditorPlugin)0x0;
  *(undefined8 *)(this + 0x538) = 0;
  StringName::StringName((StringName *)(this + 0x540),"_get_state",false);
  this[0x548] = (BoneMapEditorPlugin)0x0;
  *(undefined8 *)(this + 0x550) = 0;
  StringName::StringName((StringName *)(this + 0x558),"_set_state",false);
  this[0x560] = (BoneMapEditorPlugin)0x0;
  *(undefined8 *)(this + 0x568) = 0;
  StringName::StringName((StringName *)(this + 0x570),"_clear",false);
  this[0x578] = (BoneMapEditorPlugin)0x0;
  *(undefined8 *)(this + 0x580) = 0;
  StringName::StringName((StringName *)(this + 0x588),"_get_unsaved_status",false);
  this[0x590] = (BoneMapEditorPlugin)0x0;
  *(undefined8 *)(this + 0x598) = 0;
  StringName::StringName((StringName *)(this + 0x5a0),"_save_external_data",false);
  this[0x5a8] = (BoneMapEditorPlugin)0x0;
  *(undefined8 *)(this + 0x5b0) = 0;
  StringName::StringName((StringName *)(this + 0x5b8),"_apply_changes",false);
  this[0x5c0] = (BoneMapEditorPlugin)0x0;
  *(undefined8 *)(this + 0x5c8) = 0;
  StringName::StringName((StringName *)(this + 0x5d0),"_get_breakpoints",false);
  this[0x5d8] = (BoneMapEditorPlugin)0x0;
  *(undefined8 *)(this + 0x5e0) = 0;
  StringName::StringName((StringName *)(this + 0x5e8),"_set_window_layout",false);
  this[0x5f0] = (BoneMapEditorPlugin)0x0;
  *(undefined8 *)(this + 0x5f8) = 0;
  StringName::StringName((StringName *)(this + 0x600),"_get_window_layout",false);
  this[0x608] = (BoneMapEditorPlugin)0x0;
  *(undefined8 *)(this + 0x610) = 0;
  StringName::StringName((StringName *)(this + 0x618),"_build",false);
  this[0x620] = (BoneMapEditorPlugin)0x0;
  *(undefined8 *)(this + 0x628) = 0;
  StringName::StringName((StringName *)(this + 0x630),"_enable_plugin",false);
  this[0x638] = (BoneMapEditorPlugin)0x0;
  *(undefined8 *)(this + 0x640) = 0;
  StringName::StringName((StringName *)(this + 0x648),"_disable_plugin",false);
  this[0x650] = (BoneMapEditorPlugin)0x0;
  *(undefined8 *)(this + 0x658) = 0;
  *(undefined ***)this = &PTR__initialize_classv_00122a08;
  local_50 = (Object *)0x0;
  Ref<EditorInspectorPluginBoneMap>::instantiate<>((Ref<EditorInspectorPluginBoneMap> *)&local_50);
  pOVar1 = local_50;
  local_48 = (Object *)0x0;
  if (((local_50 != (Object *)0x0) &&
      (pOVar3 = (Object *)
                __dynamic_cast(local_50,&Object::typeinfo,&EditorInspectorPlugin::typeinfo,0),
      pOVar3 != (Object *)0x0)) &&
     (local_48 = pOVar3, cVar2 = RefCounted::reference(), cVar2 == '\0')) {
    local_48 = (Object *)0x0;
  }
  EditorPlugin::add_inspector_plugin((Ref *)this);
  if (((local_48 != (Object *)0x0) &&
      (cVar2 = RefCounted::unreference(), pOVar3 = local_48, cVar2 != '\0')) &&
     (cVar2 = predelete_handler(local_48), cVar2 != '\0')) {
    (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
    Memory::free_static(pOVar3,false);
  }
  this_00 = (PostImportPluginSkeletonTrackOrganizer *)operator_new(0x260,"");
  PostImportPluginSkeletonTrackOrganizer::PostImportPluginSkeletonTrackOrganizer(this_00);
  postinitialize_handler((Object *)this_00);
  cVar2 = RefCounted::init_ref();
  if (cVar2 == '\0') {
LAB_00101b36:
    local_48 = (Object *)0x0;
    this_00 = (PostImportPluginSkeletonTrackOrganizer *)0x0;
  }
  else {
    cVar2 = RefCounted::reference();
    if (cVar2 == '\0') {
      cVar2 = RefCounted::unreference();
      if (cVar2 != '\0') {
        cVar2 = predelete_handler((Object *)this_00);
        pPVar5 = (PostImportPluginSkeletonTrackOrganizer *)0x0;
        if (cVar2 != '\0') goto LAB_00101e70;
      }
      goto LAB_00101b36;
    }
    cVar2 = RefCounted::unreference();
    if ((cVar2 != '\0') &&
       (cVar2 = predelete_handler((Object *)this_00), pPVar5 = this_00, cVar2 != '\0')) {
LAB_00101e70:
      (**(code **)(*(long *)this_00 + 0x140))(this_00);
      Memory::free_static(this_00,false);
      this_00 = pPVar5;
      if (pPVar5 == (PostImportPluginSkeletonTrackOrganizer *)0x0) goto LAB_00101b36;
    }
    local_48 = (Object *)0x0;
    pOVar3 = (Object *)
             __dynamic_cast(this_00,&Object::typeinfo,&EditorScenePostImportPlugin::typeinfo,0);
    if ((pOVar3 != (Object *)0x0) &&
       (local_48 = pOVar3, cVar2 = RefCounted::reference(), cVar2 == '\0')) {
      local_48 = (Object *)0x0;
    }
  }
  bVar4 = SUB81(&local_48,0);
  EditorPlugin::add_scene_post_import_plugin((Ref *)this,bVar4);
  if (((local_48 != (Object *)0x0) &&
      (cVar2 = RefCounted::unreference(), pOVar3 = local_48, cVar2 != '\0')) &&
     (cVar2 = predelete_handler(local_48), cVar2 != '\0')) {
    (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
    Memory::free_static(pOVar3,false);
  }
  this_01 = (PostImportPluginSkeletonRenamer *)operator_new(0x260,"");
  PostImportPluginSkeletonRenamer::PostImportPluginSkeletonRenamer(this_01);
  postinitialize_handler((Object *)this_01);
  cVar2 = RefCounted::init_ref();
  if (cVar2 == '\0') {
LAB_00101ba1:
    local_48 = (Object *)0x0;
    this_01 = (PostImportPluginSkeletonRenamer *)0x0;
  }
  else {
    cVar2 = RefCounted::reference();
    if (cVar2 == '\0') {
      cVar2 = RefCounted::unreference();
      if (cVar2 != '\0') {
        cVar2 = predelete_handler((Object *)this_01);
        pPVar6 = (PostImportPluginSkeletonRenamer *)0x0;
        if (cVar2 != '\0') goto LAB_00101ec0;
      }
      goto LAB_00101ba1;
    }
    cVar2 = RefCounted::unreference();
    if ((cVar2 != '\0') &&
       (cVar2 = predelete_handler((Object *)this_01), pPVar6 = this_01, cVar2 != '\0')) {
LAB_00101ec0:
      (**(code **)(*(long *)this_01 + 0x140))(this_01);
      Memory::free_static(this_01,false);
      this_01 = pPVar6;
      if (pPVar6 == (PostImportPluginSkeletonRenamer *)0x0) goto LAB_00101ba1;
    }
    local_48 = (Object *)0x0;
    pOVar3 = (Object *)
             __dynamic_cast(this_01,&Object::typeinfo,&EditorScenePostImportPlugin::typeinfo,0);
    if ((pOVar3 != (Object *)0x0) &&
       (local_48 = pOVar3, cVar2 = RefCounted::reference(), cVar2 == '\0')) {
      local_48 = (Object *)0x0;
    }
  }
  EditorPlugin::add_scene_post_import_plugin((Ref *)this,bVar4);
  if (((local_48 != (Object *)0x0) &&
      (cVar2 = RefCounted::unreference(), pOVar3 = local_48, cVar2 != '\0')) &&
     (cVar2 = predelete_handler(local_48), cVar2 != '\0')) {
    (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
    Memory::free_static(pOVar3,false);
  }
  this_02 = (PostImportPluginSkeletonRestFixer *)operator_new(0x260,"");
  PostImportPluginSkeletonRestFixer::PostImportPluginSkeletonRestFixer(this_02);
  postinitialize_handler((Object *)this_02);
  cVar2 = RefCounted::init_ref();
  if (cVar2 == '\0') {
LAB_00101c09:
    local_48 = (Object *)0x0;
    EditorPlugin::add_scene_post_import_plugin((Ref *)this,bVar4);
    if ((local_48 == (Object *)0x0) ||
       (cVar2 = RefCounted::unreference(), pOVar3 = local_48, cVar2 == '\0')) goto LAB_00101c30;
    cVar2 = predelete_handler(local_48);
    local_60 = (PostImportPluginSkeletonRestFixer *)0x0;
    if (cVar2 == '\0') goto LAB_00101c30;
LAB_001020ce:
    (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
    Memory::free_static(pOVar3,false);
    if (local_60 == (PostImportPluginSkeletonRestFixer *)0x0) goto LAB_00101c30;
  }
  else {
    cVar2 = RefCounted::reference();
    if (cVar2 == '\0') {
      cVar2 = RefCounted::unreference();
      if (cVar2 != '\0') {
        cVar2 = predelete_handler((Object *)this_02);
        local_60 = (PostImportPluginSkeletonRestFixer *)0x0;
        if (cVar2 != '\0') goto LAB_00101f16;
      }
      goto LAB_00101c09;
    }
    cVar2 = RefCounted::unreference();
    local_60 = this_02;
    if ((cVar2 != '\0') && (cVar2 = predelete_handler((Object *)this_02), cVar2 != '\0')) {
LAB_00101f16:
      (**(code **)(*(long *)this_02 + 0x140))(this_02);
      Memory::free_static(this_02,false);
      if (local_60 == (PostImportPluginSkeletonRestFixer *)0x0) goto LAB_00101c09;
    }
    local_48 = (Object *)0x0;
    pOVar3 = (Object *)
             __dynamic_cast(local_60,&Object::typeinfo,&EditorScenePostImportPlugin::typeinfo,0);
    if ((pOVar3 != (Object *)0x0) &&
       (local_48 = pOVar3, cVar2 = RefCounted::reference(), cVar2 == '\0')) {
      local_48 = (Object *)0x0;
    }
    EditorPlugin::add_scene_post_import_plugin((Ref *)this,bVar4);
    if (((local_48 != (Object *)0x0) &&
        (cVar2 = RefCounted::unreference(), pOVar3 = local_48, cVar2 != '\0')) &&
       (cVar2 = predelete_handler(local_48), cVar2 != '\0')) goto LAB_001020ce;
  }
  cVar2 = RefCounted::unreference();
  if ((cVar2 != '\0') && (cVar2 = predelete_handler((Object *)local_60), cVar2 != '\0')) {
    (**(code **)(*(long *)local_60 + 0x140))(local_60);
    Memory::free_static(local_60,false);
  }
LAB_00101c30:
  if (((this_01 != (PostImportPluginSkeletonRenamer *)0x0) &&
      (cVar2 = RefCounted::unreference(), cVar2 != '\0')) &&
     (cVar2 = predelete_handler((Object *)this_01), cVar2 != '\0')) {
    (**(code **)(*(long *)this_01 + 0x140))(this_01);
    Memory::free_static(this_01,false);
  }
  if (((this_00 != (PostImportPluginSkeletonTrackOrganizer *)0x0) &&
      (cVar2 = RefCounted::unreference(), cVar2 != '\0')) &&
     (cVar2 = predelete_handler((Object *)this_00), cVar2 != '\0')) {
    (**(code **)(*(long *)this_00 + 0x140))(this_00);
    Memory::free_static(this_00,false);
  }
  if (((pOVar1 == (Object *)0x0) || (cVar2 = RefCounted::unreference(), cVar2 == '\0')) ||
     (cVar2 = predelete_handler(pOVar1), cVar2 == '\0')) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
  else {
    (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      Memory::free_static(pOVar1,false);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* BoneMapperButton::set_state(BoneMapperButton::BoneMapState) */

void BoneMapperButton::set_state(undefined8 param_1,undefined8 param_2,long param_3,uint param_4)

{
  Color *pCVar1;
  long in_FS_OFFSET;
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  int local_38 [6];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_4 == 2) {
    pCVar1 = *(Color **)(param_3 + 0xab0);
    local_58 = "editors/bone_mapper/handle_colors/missing";
    local_50 = 0x29;
  }
  else {
    if (param_4 < 3) {
      if (param_4 != 0) {
        pCVar1 = *(Color **)(param_3 + 0xab0);
        local_58 = "editors/bone_mapper/handle_colors/set";
        local_50 = 0x25;
        goto LAB_001021b8;
      }
      pCVar1 = *(Color **)(param_3 + 0xab0);
      local_58 = "editors/bone_mapper/handle_colors/unset";
    }
    else {
      if (param_4 != 3) goto LAB_00102219;
      pCVar1 = *(Color **)(param_3 + 0xab0);
      local_58 = "editors/bone_mapper/handle_colors/error";
    }
    local_50 = 0x27;
  }
LAB_001021b8:
  local_60 = 0;
  String::parse_latin1((StrRange *)&local_60);
  _EDITOR_GET((String *)local_38);
  local_48 = Variant::operator_cast_to_Color((Variant *)local_38);
  local_40 = param_2;
  CanvasItem::set_modulate(pCVar1);
  if (Variant::needs_deinit[local_38[0]] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
LAB_00102219:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BoneMapperButton::fetch_textures() */

void __thiscall BoneMapperButton::fetch_textures(BoneMapperButton *this)

{
  undefined4 uVar1;
  Object *pOVar2;
  char cVar3;
  int iVar4;
  TextureRect *this_00;
  char *pcVar5;
  undefined1 uVar6;
  undefined1 *puVar7;
  long in_FS_OFFSET;
  Object *local_50;
  undefined8 local_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (this[0xaa8] == (BoneMapperButton)0x0) {
    if (fetch_textures()::{lambda()#2}::operator()()::sname != '\0') goto LAB_00102326;
    puVar7 = &fetch_textures()::{lambda()#2}::operator()()::sname;
    pcVar5 = (char *)&fetch_textures()::{lambda()#2}::operator()()::sname;
    iVar4 = __cxa_guard_acquire(&fetch_textures()::{lambda()#2}::operator()()::sname);
    if (iVar4 == 0) goto LAB_00102326;
    uVar6 = 0xcb;
  }
  else {
    if (fetch_textures()::{lambda()#1}::operator()()::sname != '\0') goto LAB_00102326;
    puVar7 = &fetch_textures()::{lambda()#1}::operator()()::sname;
    pcVar5 = (char *)&fetch_textures()::{lambda()#1}::operator()()::sname;
    iVar4 = __cxa_guard_acquire(&fetch_textures()::{lambda()#1}::operator()()::sname);
    uVar6 = 0xb2;
    if (iVar4 == 0) goto LAB_00102326;
  }
  _scs_create(pcVar5,(bool)uVar6);
  __cxa_atexit(StringName::~StringName,pcVar5,&__dso_handle);
  __cxa_guard_release(puVar7);
LAB_00102326:
  Control::get_editor_theme_icon((StringName *)&local_50);
  TextureButton::set_texture_normal((Ref *)this);
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
  Control::set_offset(0,this,0);
  Control::set_offset(0,this,2);
  Control::set_offset(0,this,1);
  Control::set_offset(0,this,3);
  cVar3 = EditorThemeManager::is_dark_theme();
  if (cVar3 == '\0') {
    local_48 = __LC75;
    uVar1 = _UNK_00124848;
  }
  else {
    local_48 = CONCAT44(_LC74,_LC74);
    uVar1 = _LC74;
  }
  _uStack_40 = CONCAT44(uVar1,_LC74);
  CanvasItem::set_modulate(this);
  this_00 = (TextureRect *)operator_new(0x9e0,"");
  TextureRect::TextureRect(this_00);
  postinitialize_handler((Object *)this_00);
  *(TextureRect **)(this + 0xab0) = this_00;
  if (fetch_textures()::{lambda()#3}::operator()()::sname == '\0') {
    iVar4 = __cxa_guard_acquire(&fetch_textures()::{lambda()#3}::operator()()::sname);
    if (iVar4 != 0) {
      _scs_create((char *)&fetch_textures()::{lambda()#3}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,&fetch_textures()::{lambda()#3}::operator()()::sname,
                   &__dso_handle);
      __cxa_guard_release(&fetch_textures()::{lambda()#3}::operator()()::sname);
    }
  }
  Control::get_editor_theme_icon((StringName *)&local_50);
  TextureRect::set_texture((Ref *)this_00);
  if (local_50 != (Object *)0x0) {
    cVar3 = RefCounted::unreference();
    if (cVar3 != '\0') {
      cVar3 = predelete_handler(local_50);
      if (cVar3 != '\0') {
        (**(code **)(*(long *)local_50 + 0x140))(local_50);
        Memory::free_static(local_50,false);
      }
    }
  }
  Node::add_child(this,*(undefined8 *)(this + 0xab0),0,0);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    set_state(this,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* BoneMapperButton::_notification(int) */

void __thiscall BoneMapperButton::_notification(BoneMapperButton *this,int param_1)

{
  if (param_1 != 10) {
    return;
  }
  fetch_textures(this);
  return;
}



/* BonePicker::get_selected_bone() */

BonePicker * __thiscall BonePicker::get_selected_bone(BonePicker *this)

{
  long lVar1;
  long in_FS_OFFSET;
  String aSStack_28 [8];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  lVar1 = Tree::get_selected();
  if (lVar1 == 0) {
    *(undefined8 *)this = 0;
  }
  else {
    TreeItem::get_text((int)aSStack_28);
    StringName::StringName((StringName *)this,aSStack_28,false);
    CowData<char32_t>::_unref((CowData<char32_t> *)aSStack_28);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* BoneMapperItem::create_editor() */

void __thiscall BoneMapperItem::create_editor(BoneMapperItem *this)

{
  long lVar1;
  char *pcVar2;
  Object *pOVar3;
  long *plVar4;
  code *pcVar5;
  undefined8 uVar6;
  Ref *pRVar7;
  char cVar8;
  int iVar9;
  BoxContainer *this_00;
  EditorPropertyText *this_01;
  CallableCustom *this_02;
  Button *this_03;
  HSeparator *this_04;
  long in_FS_OFFSET;
  undefined8 local_68;
  long local_60;
  Object *local_58;
  size_t local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  this_00 = (BoxContainer *)operator_new(0xa10,"");
  BoxContainer::BoxContainer(this_00,false);
  this_00[0xa0c] = (BoxContainer)0x1;
  *(undefined ***)this_00 = &PTR__initialize_classv_00121fb0;
  postinitialize_handler((Object *)this_00);
  Node::add_child(this,this_00,0,0);
  this_01 = (EditorPropertyText *)operator_new(0xb68,"");
  EditorPropertyText::EditorPropertyText(this_01);
  postinitialize_handler((Object *)this_01);
  lVar1 = *(long *)(this + 0xa18);
  *(EditorPropertyText **)(this + 0xa28) = this_01;
  if (lVar1 == 0) {
    local_60 = 0;
  }
  else {
    pcVar2 = *(char **)(lVar1 + 8);
    local_60 = 0;
    if (pcVar2 == (char *)0x0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar1 + 0x10));
    }
    else {
      local_50 = strlen(pcVar2);
      local_58 = (Object *)pcVar2;
      String::parse_latin1((StrRange *)&local_60);
    }
  }
  EditorProperty::set_label((String *)this_01);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  EditorProperty::set_selectable(SUB81(*(undefined8 *)(this + 0xa28),0));
  Control::set_h_size_flags(*(undefined8 *)(this + 0xa28),3);
  pOVar3 = *(Object **)(this + 0xa28);
  lVar1 = *(long *)(this + 0xa18);
  if (lVar1 == 0) {
    local_68 = 0;
  }
  else {
    pcVar2 = *(char **)(lVar1 + 8);
    local_68 = 0;
    if (pcVar2 == (char *)0x0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_68,(CowData *)(lVar1 + 0x10));
    }
    else {
      local_50 = strlen(pcVar2);
      local_58 = (Object *)pcVar2;
      String::parse_latin1((StrRange *)&local_68);
    }
  }
  operator+((char *)&local_60,(String *)"bone_map/");
  StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
  EditorProperty::set_object_and_property(pOVar3,*(StringName **)(this + 0xa20));
  if ((StringName::configured != '\0') && (local_58 != (Object *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  (**(code **)(**(long **)(this + 0xa28) + 0x380))();
  plVar4 = *(long **)(this + 0xa28);
  pcVar5 = *(code **)(*plVar4 + 0x108);
  this_02 = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(this_02);
  *(undefined **)(this_02 + 0x20) = &_LC24;
  *(BoneMapperItem **)(this_02 + 0x28) = this;
  *(undefined1 (*) [16])(this_02 + 0x30) = (undefined1  [16])0x0;
  *(undefined ***)this_02 = &PTR_hash_00123eb8;
  *(undefined8 *)(this_02 + 0x40) = 0;
  uVar6 = *(undefined8 *)(this + 0x60);
  *(undefined8 *)(this_02 + 0x10) = 0;
  *(undefined8 *)(this_02 + 0x30) = uVar6;
  *(undefined8 *)(this_02 + 0x38) = 0x369;
  CallableCustomMethodPointerBase::_setup((uint *)this_02,(int)this_02 + 0x28);
  *(char **)(this_02 + 0x20) = "BoneMapperItem::_value_changed";
  Callable::Callable((Callable *)&local_58,this_02);
  StringName::StringName((StringName *)&local_60,"property_changed",false);
  (*pcVar5)(plVar4,(CowData<char32_t> *)&local_60,(StringName *)&local_58,0);
  if ((StringName::configured != '\0') && (local_60 != 0)) {
    StringName::unref();
  }
  Callable::~Callable((Callable *)&local_58);
  Node::add_child(this_00,*(undefined8 *)(this + 0xa28),0,0);
  this_03 = (Button *)operator_new(0xc10,"");
  local_58 = (Object *)0x0;
  Button::Button(this_03,(String *)&local_58);
  postinitialize_handler((Object *)this_03);
  *(Button **)(this + 0xa30) = this_03;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  pRVar7 = *(Ref **)(this + 0xa30);
  if (create_editor()::{lambda()#1}::operator()()::sname == '\0') {
    iVar9 = __cxa_guard_acquire(&create_editor()::{lambda()#1}::operator()()::sname);
    if (iVar9 != 0) {
      _scs_create((char *)&create_editor()::{lambda()#1}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,&create_editor()::{lambda()#1}::operator()()::sname,
                   &__dso_handle);
      __cxa_guard_release(&create_editor()::{lambda()#1}::operator()()::sname);
    }
  }
  Control::get_editor_theme_icon((StringName *)&local_58);
  Button::set_button_icon(pRVar7);
  if (local_58 != (Object *)0x0) {
    cVar8 = RefCounted::unreference();
    pOVar3 = local_58;
    if (cVar8 != '\0') {
      cVar8 = predelete_handler(local_58);
      if (cVar8 != '\0') {
        (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
        Memory::free_static(pOVar3,false);
      }
    }
  }
  plVar4 = *(long **)(this + 0xa30);
  pcVar5 = *(code **)(*plVar4 + 0x108);
  create_custom_callable_function_pointer<BoneMapperItem>
            ((BoneMapperItem *)&local_58,(char *)this,(_func_void *)"&BoneMapperItem::_open_picker")
  ;
  (*pcVar5)(plVar4,SceneStringNames::singleton + 0x238,(StringName *)&local_58,0);
  Callable::~Callable((Callable *)&local_58);
  Node::add_child(this_00,*(undefined8 *)(this + 0xa30),0,0);
  this_04 = (HSeparator *)operator_new(0x9e0,"");
  HSeparator::HSeparator(this_04);
  postinitialize_handler((Object *)this_04);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    Node::add_child(this,this_04,0,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* SortArray<String, _DefaultComparator<String>, true>::adjust_heap(long, long, long, String,
   String*) const [clone .isra.0] */

void SortArray<String,_DefaultComparator<String>,true>::adjust_heap
               (long param_1,long param_2,long param_3,CowData *param_4,long param_5)

{
  String *pSVar1;
  char cVar2;
  CowData<char32_t> *this;
  CowData<char32_t> *pCVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long in_FS_OFFSET;
  long local_68;
  long local_48;
  long local_40;
  
  lVar6 = param_2 * 2 + 2;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_68 = param_2;
  if (lVar6 < param_3) {
    do {
      this = (CowData<char32_t> *)(param_5 + (lVar6 + -1 + param_1) * 8);
      pSVar1 = (String *)(param_5 + (param_1 + lVar6) * 8);
      cVar2 = String::operator<(pSVar1,(String *)this);
      lVar4 = lVar6 + -1;
      lVar5 = lVar6;
      if (cVar2 == '\0') {
        lVar5 = lVar6 + 1;
        this = (CowData<char32_t> *)pSVar1;
        lVar4 = lVar6;
      }
      pCVar3 = (CowData<char32_t> *)(param_5 + (local_68 + param_1) * 8);
      if (*(long *)pCVar3 != *(long *)this) {
        CowData<char32_t>::_ref(pCVar3,(CowData *)this);
      }
      lVar6 = lVar5 * 2;
      local_68 = lVar4;
    } while (lVar6 < param_3);
  }
  else {
    this = (CowData<char32_t> *)(param_5 + (param_2 + param_1) * 8);
    lVar4 = param_2;
  }
  pCVar3 = this;
  if (param_3 == lVar6) {
    lVar4 = param_3 + -1;
    pCVar3 = (CowData<char32_t> *)(param_5 + (param_1 + lVar4) * 8);
    if (*(long *)this != *(long *)pCVar3) {
      CowData<char32_t>::_ref(this,(CowData *)pCVar3);
    }
  }
  local_48 = 0;
  if (*(long *)param_4 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,param_4);
  }
  lVar6 = (lVar4 + -1) - (lVar4 + -1 >> 0x3f);
  while (param_2 < lVar4) {
    lVar5 = lVar6 >> 1;
    pSVar1 = (String *)(param_5 + (param_1 + lVar5) * 8);
    cVar2 = String::operator<(pSVar1,(String *)&local_48);
    pCVar3 = (CowData<char32_t> *)(param_5 + (param_1 + lVar4) * 8);
    if (cVar2 == '\0') break;
    if (*(long *)pCVar3 != *(long *)pSVar1) {
      CowData<char32_t>::_ref(pCVar3,(CowData *)pSVar1);
    }
    lVar6 = (lVar5 + -1) - (lVar5 + -1 >> 0x3f);
    pCVar3 = (CowData<char32_t> *)pSVar1;
    lVar4 = lVar5;
  }
  if (*(long *)pCVar3 != local_48) {
    CowData<char32_t>::_ref(pCVar3,(CowData *)&local_48);
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Removing unreachable block (ram,0x0010324a) */
/* SortArray<String, _DefaultComparator<String>, true>::introsort(long, long, String*, long) const
   [clone .isra.0] */

void SortArray<String,_DefaultComparator<String>,true>::introsort
               (long param_1,long param_2,String *param_3,long param_4)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  String *pSVar4;
  String *pSVar5;
  long lVar6;
  long lVar7;
  String *pSVar8;
  String *pSVar9;
  CowData *pCVar10;
  long lVar11;
  long lVar12;
  long in_FS_OFFSET;
  bool bVar13;
  long local_80;
  long local_68;
  long local_60;
  long local_48;
  long local_40;
  
  lVar12 = param_2 - param_1;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (0x10 < lVar12) {
    local_80 = param_2;
    if (param_4 != 0) {
      pSVar4 = param_3 + param_1 * 8;
      local_68 = param_2;
      local_60 = param_4;
LAB_00102e1b:
      local_60 = local_60 + -1;
      pSVar9 = param_3 + ((lVar12 >> 1) + param_1) * 8;
      pSVar5 = param_3 + local_68 * 8 + -8;
      cVar3 = String::operator<(pSVar4,pSVar9);
      if (cVar3 == '\0') {
        cVar3 = String::operator<(pSVar4,pSVar5);
        pSVar8 = pSVar4;
        if (cVar3 != '\0') goto LAB_00102e79;
        cVar3 = String::operator<(pSVar9,pSVar5);
      }
      else {
        cVar3 = String::operator<(pSVar9,pSVar5);
        pSVar8 = pSVar9;
        if (cVar3 != '\0') goto LAB_00102e79;
        cVar3 = String::operator<(pSVar4,pSVar5);
        pSVar9 = pSVar4;
      }
      pSVar8 = pSVar9;
      if (cVar3 != '\0') {
        pSVar8 = pSVar5;
      }
LAB_00102e79:
      local_48 = 0;
      if (*(long *)pSVar8 != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)pSVar8);
      }
      pSVar9 = pSVar4;
      local_80 = param_1;
      lVar12 = local_68;
      do {
        cVar3 = String::operator<(pSVar9,(String *)&local_48);
        if (cVar3 == '\0') {
LAB_00102ed7:
          lVar12 = lVar12 + -1;
          pSVar5 = param_3 + lVar12 * 8;
          while (cVar3 = String::operator<((String *)&local_48,pSVar5), cVar3 != '\0') {
            if (param_1 == lVar12) {
              _err_print_error("partitioner","./core/templates/sort_array.h",0xb9,
                               "bad comparison function; sorting will be broken",0,0);
              break;
            }
            lVar12 = lVar12 + -1;
            pSVar5 = pSVar5 + -8;
          }
          if (lVar12 <= local_80) goto LAB_00102f70;
          lVar11 = *(long *)pSVar9;
          *(undefined8 *)pSVar9 = 0;
          if (*(long *)pSVar5 != 0) {
            *(long *)pSVar9 = *(long *)pSVar5;
            *(undefined8 *)pSVar5 = 0;
          }
          if (lVar11 != 0) {
            *(long *)pSVar5 = lVar11;
          }
        }
        else if (local_68 + -1 == local_80) {
          _err_print_error("partitioner","./core/templates/sort_array.h",0xb2,
                           "bad comparison function; sorting will be broken",0,0);
          goto LAB_00102ed7;
        }
        pSVar9 = pSVar9 + 8;
        local_80 = local_80 + 1;
      } while( true );
    }
LAB_0010303a:
    lVar11 = lVar12 + -2 >> 1;
    pSVar4 = param_3 + (lVar11 + param_1) * 8;
    while( true ) {
      local_48 = 0;
      if (*(long *)pSVar4 == 0) {
        adjust_heap(param_1,lVar11,lVar12,(CowData<char32_t> *)&local_48,param_3);
      }
      else {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)pSVar4);
        lVar6 = local_48;
        adjust_heap(param_1,lVar11,lVar12,(CowData<char32_t> *)&local_48,param_3);
        if (lVar6 != 0) {
          LOCK();
          plVar2 = (long *)(lVar6 + -0x10);
          *plVar2 = *plVar2 + -1;
          UNLOCK();
          if (*plVar2 == 0) {
            Memory::free_static((void *)(local_48 + -0x10),false);
          }
        }
      }
      if (lVar11 == 0) break;
      pSVar4 = (String *)((CowData *)pSVar4 + -8);
      lVar11 = lVar11 + -1;
    }
    pSVar4 = param_3 + local_80 * 8 + -8;
    pCVar10 = (CowData *)(param_3 + param_1 * 8);
    lVar12 = (local_80 + -1) - param_1;
    do {
      plVar2 = (long *)(*(long *)pSVar4 + -0x10);
      if (*(long *)pSVar4 == 0) {
LAB_001031e8:
        if (*(long *)pCVar10 != *(long *)pSVar4) {
          CowData<char32_t>::_ref((CowData<char32_t> *)pSVar4,pCVar10);
        }
LAB_00103208:
        local_48 = 0;
        adjust_heap(param_1,0,lVar12,(CowData<char32_t> *)&local_48,param_3);
      }
      else {
        do {
          lVar11 = *plVar2;
          if (lVar11 == 0) goto LAB_001031e8;
          LOCK();
          lVar6 = *plVar2;
          bVar13 = lVar11 == lVar6;
          if (bVar13) {
            *plVar2 = lVar11 + 1;
            lVar6 = lVar11;
          }
          UNLOCK();
        } while (!bVar13);
        if (lVar6 == -1) goto LAB_001031e8;
        lVar11 = *(long *)pSVar4;
        if (lVar11 != *(long *)pCVar10) {
          CowData<char32_t>::_ref((CowData<char32_t> *)pSVar4,pCVar10);
        }
        local_48 = 0;
        if (lVar11 == 0) goto LAB_00103208;
        plVar2 = (long *)(lVar11 + -0x10);
        do {
          lVar6 = *plVar2;
          if (lVar6 == 0) goto LAB_00103223;
          LOCK();
          lVar7 = *plVar2;
          bVar13 = lVar6 == lVar7;
          if (bVar13) {
            *plVar2 = lVar6 + 1;
            lVar7 = lVar6;
          }
          UNLOCK();
        } while (!bVar13);
        if (lVar7 == -1) {
LAB_00103223:
          adjust_heap(param_1,0,lVar12,(CowData<char32_t> *)&local_48,param_3);
        }
        else {
          local_48 = lVar11;
          adjust_heap(param_1,0,lVar12,(CowData<char32_t> *)&local_48,param_3);
          LOCK();
          plVar1 = (long *)(lVar11 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            Memory::free_static((void *)(local_48 + -0x10),false);
          }
        }
        LOCK();
        *plVar2 = *plVar2 + -1;
        UNLOCK();
        if (*plVar2 == 0) {
          Memory::free_static(plVar2,false);
        }
      }
      pSVar4 = (String *)((CowData<char32_t> *)pSVar4 + -8);
      bVar13 = 1 < lVar12;
      lVar12 = lVar12 + -1;
    } while (bVar13);
  }
LAB_0010300f:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
LAB_00102f70:
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
  introsort(local_80,local_68,param_3,local_60);
  lVar12 = local_80 - param_1;
  if (lVar12 < 0x11) goto LAB_0010300f;
  local_68 = local_80;
  if (local_60 == 0) goto LAB_0010303a;
  goto LAB_00102e1b;
}



/* SortArray<String, _DefaultComparator<String>, true>::sort(String*, long) const [clone .part.0]
   [clone .isra.0] */

void SortArray<String,_DefaultComparator<String>,true>::sort(String *param_1,long param_2)

{
  long *plVar1;
  CowData *pCVar2;
  long lVar3;
  char cVar4;
  long lVar5;
  long lVar6;
  CowData *pCVar7;
  CowData<char32_t> *pCVar8;
  String *this;
  CowData *pCVar9;
  String *pSVar10;
  long lVar11;
  long in_FS_OFFSET;
  bool bVar12;
  long local_70;
  long local_50;
  long local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_2 == 1) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      introsort(0,1,param_1,0);
      return;
    }
  }
  else {
    lVar6 = 0;
    lVar11 = param_2;
    do {
      lVar11 = lVar11 >> 1;
      lVar6 = lVar6 + 1;
    } while (lVar11 != 1);
    introsort(0,param_2,param_1,lVar6 * 2);
    if (param_2 < 0x11) {
      if (param_2 != 0) {
        pCVar2 = (CowData *)(param_1 + 8);
        lVar11 = 1;
        pCVar7 = pCVar2;
        if (*(long *)pCVar2 == 0) goto LAB_001036bc;
        lVar11 = 1;
LAB_00103600:
        local_48 = 0;
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,pCVar7);
        cVar4 = String::operator<((String *)&local_48,param_1);
        pCVar9 = pCVar7;
        lVar6 = lVar11;
        if (cVar4 == '\0') goto LAB_001036d1;
        do {
          do {
            if (*(long *)pCVar9 != *(long *)((CowData<char32_t> *)pCVar9 + -8)) {
              CowData<char32_t>::_ref
                        ((CowData<char32_t> *)pCVar9,(CowData *)((CowData<char32_t> *)pCVar9 + -8));
            }
            lVar11 = lVar11 + -1;
            pCVar9 = (CowData *)((CowData<char32_t> *)pCVar9 + -8);
          } while (lVar11 != 0);
          lVar11 = lVar6;
          if (*(long *)param_1 != local_48) {
            CowData<char32_t>::_ref((CowData<char32_t> *)param_1,(CowData *)&local_48);
          }
          while( true ) {
            lVar6 = local_48;
            if (local_48 != 0) {
              LOCK();
              plVar1 = (long *)(local_48 + -0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                local_48 = 0;
                Memory::free_static((void *)(lVar6 + -0x10),false);
              }
            }
            lVar11 = lVar11 + 1;
            pCVar7 = pCVar7 + 8;
            if (param_2 == lVar11) goto LAB_0010358b;
            if (*(long *)pCVar7 != 0) goto LAB_00103600;
LAB_001036bc:
            local_48 = 0;
            cVar4 = String::operator<((String *)&local_48,param_1);
            pCVar9 = pCVar7;
            lVar6 = lVar11;
            if (cVar4 != '\0') break;
LAB_001036d1:
            local_50 = 0;
            pCVar9 = pCVar7;
            if (local_48 != 0) {
              CowData<char32_t>::_ref((CowData<char32_t> *)&local_50,(CowData *)&local_48);
            }
            while( true ) {
              pCVar8 = (CowData<char32_t> *)pCVar9;
              pCVar9 = (CowData *)(pCVar8 + -8);
              cVar4 = String::operator<((String *)&local_50,(String *)pCVar9);
              if (cVar4 == '\0') break;
              if (pCVar8 == (CowData<char32_t> *)pCVar2) {
                _err_print_error("unguarded_linear_insert","./core/templates/sort_array.h",0xff,
                                 "bad comparison function; sorting will be broken",0,0);
                break;
              }
              if (*(long *)pCVar8 != *(long *)(pCVar8 + -8)) {
                CowData<char32_t>::_ref(pCVar8,pCVar9);
              }
            }
            if (*(long *)pCVar8 != local_50) {
              CowData<char32_t>::_ref(pCVar8,(CowData *)&local_50);
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
          }
        } while( true );
      }
    }
    else {
      local_70 = 1;
      pSVar10 = param_1 + 8;
      do {
        local_48 = 0;
        plVar1 = (long *)(*(long *)pSVar10 + -0x10);
        if (*(long *)pSVar10 != 0) {
          do {
            lVar11 = *plVar1;
            if (lVar11 == 0) goto LAB_00103336;
            LOCK();
            lVar6 = *plVar1;
            bVar12 = lVar11 == lVar6;
            if (bVar12) {
              *plVar1 = lVar11 + 1;
              lVar6 = lVar11;
            }
            UNLOCK();
          } while (!bVar12);
          if (lVar6 != -1) {
            local_48 = *(long *)pSVar10;
          }
        }
LAB_00103336:
        cVar4 = String::operator<((String *)&local_48,param_1);
        this = pSVar10;
        if (cVar4 == '\0') {
          local_50 = 0;
          pCVar2 = (CowData *)pSVar10;
          if (local_48 != 0) {
            CowData<char32_t>::_ref((CowData<char32_t> *)&local_50,(CowData *)&local_48);
          }
          while( true ) {
            pCVar8 = (CowData<char32_t> *)pCVar2;
            pCVar2 = (CowData *)(pCVar8 + -8);
            cVar4 = String::operator<((String *)&local_50,(String *)pCVar2);
            if (cVar4 == '\0') break;
            if (pCVar8 == (CowData<char32_t> *)(param_1 + 8)) {
              _err_print_error("unguarded_linear_insert","./core/templates/sort_array.h",0xff,
                               "bad comparison function; sorting will be broken",0,0);
              break;
            }
            if (*(long *)pCVar8 != *(long *)(pCVar8 + -8)) {
              CowData<char32_t>::_ref(pCVar8,pCVar2);
            }
          }
          if (*(long *)pCVar8 != local_50) {
            CowData<char32_t>::_ref(pCVar8,(CowData *)&local_50);
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
        }
        else {
          do {
            pCVar2 = (CowData *)((CowData<char32_t> *)this + -8);
            if (*(long *)this != *(long *)((CowData<char32_t> *)this + -8)) {
              CowData<char32_t>::_ref((CowData<char32_t> *)this,pCVar2);
            }
            this = (String *)pCVar2;
          } while (param_1 != (String *)pCVar2);
          if (*(long *)param_1 != local_48) {
            CowData<char32_t>::_ref((CowData<char32_t> *)param_1,(CowData *)&local_48);
          }
        }
        lVar11 = local_48;
        if (local_48 != 0) {
          LOCK();
          plVar1 = (long *)(local_48 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_48 = 0;
            Memory::free_static((void *)(lVar11 + -0x10),false);
          }
        }
        local_70 = local_70 + 1;
        pSVar10 = pSVar10 + 8;
      } while (local_70 != 0x10);
      pSVar10 = param_1 + 0x80;
      lVar11 = 0x10;
      do {
        local_48 = 0;
        plVar1 = (long *)(*(long *)pSVar10 + -0x10);
        pCVar2 = (CowData *)pSVar10;
        lVar6 = lVar11;
        if (*(long *)pSVar10 != 0) {
          do {
            lVar3 = *plVar1;
            if (lVar3 == 0) goto LAB_001034fb;
            LOCK();
            lVar5 = *plVar1;
            bVar12 = lVar3 == lVar5;
            if (bVar12) {
              *plVar1 = lVar3 + 1;
              lVar5 = lVar3;
            }
            UNLOCK();
          } while (!bVar12);
          if (lVar5 != -1) {
            local_48 = *(long *)pSVar10;
          }
        }
LAB_001034fb:
        pCVar8 = (CowData<char32_t> *)pCVar2;
        lVar6 = lVar6 + -1;
        pCVar2 = (CowData *)(pCVar8 + -8);
        cVar4 = String::operator<((String *)&local_48,(String *)pCVar2);
        if (cVar4 != '\0') {
          if (lVar6 == 0) {
            _err_print_error("unguarded_linear_insert","./core/templates/sort_array.h",0xff,
                             "bad comparison function; sorting will be broken",0,0);
            goto LAB_00103538;
          }
          if (*(long *)pCVar8 != *(long *)(pCVar8 + -8)) {
            CowData<char32_t>::_ref(pCVar8,pCVar2);
          }
          goto LAB_001034fb;
        }
LAB_00103538:
        if (*(long *)pCVar8 != local_48) {
          CowData<char32_t>::_ref(pCVar8,(CowData *)&local_48);
        }
        lVar6 = local_48;
        if (local_48 != 0) {
          LOCK();
          plVar1 = (long *)(local_48 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_48 = 0;
            Memory::free_static((void *)(lVar6 + -0x10),false);
          }
        }
        lVar11 = lVar11 + 1;
        pSVar10 = pSVar10 + 8;
      } while (param_2 != lVar11);
    }
LAB_0010358b:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Control::initialize_class() [clone .part.0] */

void Control::initialize_class(void)

{
  long in_FS_OFFSET;
  undefined8 local_70;
  undefined8 local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (CanvasItem::initialize_class()::initialized == '\0') {
    if (Node::initialize_class()::initialized == '\0') {
      Object::initialize_class();
      local_68 = 0;
      local_50 = 6;
      local_58 = "Object";
      String::parse_latin1((StrRange *)&local_68);
      StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
      local_58 = "Node";
      local_70 = 0;
      local_50 = 4;
      String::parse_latin1((StrRange *)&local_70);
      StringName::StringName((StringName *)&local_58,(String *)&local_70,false);
      ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_60);
      if ((StringName::configured != '\0') && (local_58 != (undefined *)0x0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      if ((StringName::configured != '\0') && (local_60 != 0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      if ((code *)PTR__bind_methods_0012b010 != Node::_bind_methods) {
        Node::_bind_methods();
      }
      Node::initialize_class()::initialized = '\x01';
    }
    local_68 = 0;
    local_58 = "Node";
    local_50 = 4;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "CanvasItem";
    local_70 = 0;
    local_50 = 10;
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
    CanvasItem::_bind_methods();
    if ((code *)_GLOBAL_OFFSET_TABLE_ != Object::_bind_compatibility_methods) {
      CanvasItem::_bind_compatibility_methods();
    }
    CanvasItem::initialize_class()::initialized = '\x01';
  }
  local_58 = "CanvasItem";
  local_68 = 0;
  local_50 = 10;
  String::parse_latin1((StrRange *)&local_68);
  StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
  local_58 = "Control";
  local_70 = 0;
  local_50 = 7;
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
  if ((code *)PTR__bind_methods_0012b008 != CanvasItem::_bind_methods) {
    Control::_bind_methods();
  }
  initialize_class()::initialized = 1;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* VBoxContainer::initialize_class() [clone .part.0] */

void VBoxContainer::initialize_class(void)

{
  long in_FS_OFFSET;
  undefined8 local_70;
  undefined8 local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (BoxContainer::initialize_class()::initialized == '\0') {
    if (Container::initialize_class()::initialized == '\0') {
      if (Control::initialize_class()::initialized == '\0') {
        Control::initialize_class();
      }
      local_68 = 0;
      local_50 = 7;
      local_58 = "Control";
      String::parse_latin1((StrRange *)&local_68);
      StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
      local_58 = "Container";
      local_70 = 0;
      local_50 = 9;
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
      if ((code *)PTR__bind_methods_0012b008 != Container::_bind_methods) {
        Container::_bind_methods();
      }
      Container::initialize_class()::initialized = '\x01';
    }
    local_58 = "Container";
    local_68 = 0;
    local_50 = 9;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "BoxContainer";
    local_70 = 0;
    local_50 = 0xc;
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
    if ((code *)PTR__bind_methods_0012b018 != Container::_bind_methods) {
      BoxContainer::_bind_methods();
    }
    BoxContainer::initialize_class()::initialized = '\x01';
  }
  local_58 = "BoxContainer";
  local_68 = 0;
  local_50 = 0xc;
  String::parse_latin1((StrRange *)&local_68);
  StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
  local_58 = "VBoxContainer";
  local_70 = 0;
  local_50 = 0xd;
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
  initialize_class()::initialized = 1;
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* BoneMapper::_apply_picker_selection() */

void __thiscall BoneMapper::_apply_picker_selection(BoneMapper *this)

{
  StringName *pSVar1;
  long lVar2;
  long in_FS_OFFSET;
  long local_40;
  CowData<char32_t> local_38 [8];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  lVar2 = Tree::get_selected();
  if (lVar2 != 0) {
    pSVar1 = *(StringName **)(this + 0xa18);
    lVar2 = Tree::get_selected();
    if (lVar2 == 0) {
      local_40 = 0;
    }
    else {
      TreeItem::get_text((int)local_38);
      StringName::StringName((StringName *)&local_40,(String *)local_38,false);
      CowData<char32_t>::_unref(local_38);
    }
    BoneMap::set_skeleton_bone_name(pSVar1,(StringName *)(this + 0xa88));
    if ((StringName::configured != '\0') && (local_40 != 0)) {
      StringName::unref();
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* BoneMapper::_bind_methods() */

void BoneMapper::_bind_methods(void)

{
  long lVar1;
  code *pcVar2;
  long *plVar3;
  MethodBind *pMVar4;
  long *plVar5;
  long lVar6;
  long in_FS_OFFSET;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  long local_c0;
  long local_b8;
  long local_b0;
  char *local_a8;
  undefined8 local_a0;
  char *local_98;
  undefined8 local_90;
  long *local_88;
  char *local_68;
  undefined8 local_60;
  char **local_58;
  undefined1 local_50 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_60 = 0;
  local_68 = "current_group_idx";
  local_58 = &local_68;
  D_METHODP((char *)&local_98,(char ***)"set_current_group_idx",(uint)&local_58);
  local_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar4 = create_method_bind<BoneMapper,int>(set_current_group_idx);
  ClassDB::bind_methodfi(1,pMVar4,false,(MethodDefinition *)&local_98,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  plVar3 = local_88;
  if (local_88 != (long *)0x0) {
    LOCK();
    plVar5 = local_88 + -2;
    *plVar5 = *plVar5 + -1;
    UNLOCK();
    if (*plVar5 == 0) {
      if (local_88 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar1 = local_88[-1];
      lVar6 = 0;
      local_88 = (long *)0x0;
      plVar5 = plVar3;
      if (lVar1 != 0) {
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
  if ((StringName::configured != '\0') && (local_98 != (char *)0x0)) {
    StringName::unref();
  }
  D_METHODP((char *)&local_98,(char ***)"get_current_group_idx",0);
  local_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar4 = create_method_bind<BoneMapper,int>(get_current_group_idx);
  ClassDB::bind_methodfi(1,pMVar4,false,(MethodDefinition *)&local_98,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  plVar3 = local_88;
  if (local_88 != (long *)0x0) {
    LOCK();
    plVar5 = local_88 + -2;
    *plVar5 = *plVar5 + -1;
    UNLOCK();
    if (*plVar5 == 0) {
      if (local_88 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar1 = local_88[-1];
      lVar6 = 0;
      local_88 = (long *)0x0;
      plVar5 = plVar3;
      if (lVar1 != 0) {
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
  if ((StringName::configured != '\0') && (local_98 != (char *)0x0)) {
    StringName::unref();
  }
  local_68 = "current_bone_idx";
  local_60 = 0;
  local_58 = &local_68;
  D_METHODP((char *)&local_98,(char ***)"set_current_bone_idx",(uint)&local_58);
  local_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar4 = create_method_bind<BoneMapper,int>(set_current_bone_idx);
  ClassDB::bind_methodfi(1,pMVar4,false,(MethodDefinition *)&local_98,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  plVar3 = local_88;
  if (local_88 != (long *)0x0) {
    LOCK();
    plVar5 = local_88 + -2;
    *plVar5 = *plVar5 + -1;
    UNLOCK();
    if (*plVar5 == 0) {
      if (local_88 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar1 = local_88[-1];
      lVar6 = 0;
      local_88 = (long *)0x0;
      plVar5 = plVar3;
      if (lVar1 != 0) {
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
  if ((StringName::configured != '\0') && (local_98 != (char *)0x0)) {
    StringName::unref();
  }
  D_METHODP((char *)&local_98,(char ***)"get_current_bone_idx",0);
  local_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar4 = create_method_bind<BoneMapper,int>(get_current_bone_idx);
  ClassDB::bind_methodfi(1,pMVar4,false,(MethodDefinition *)&local_98,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  plVar3 = local_88;
  if (local_88 != (long *)0x0) {
    LOCK();
    plVar5 = local_88 + -2;
    *plVar5 = *plVar5 + -1;
    UNLOCK();
    if (*plVar5 == 0) {
      if (local_88 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar1 = local_88[-1];
      lVar6 = 0;
      local_88 = (long *)0x0;
      plVar5 = plVar3;
      if (lVar1 != 0) {
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
  if ((StringName::configured != '\0') && (local_98 != (char *)0x0)) {
    StringName::unref();
  }
  _scs_create((char *)&local_b0,true);
  _scs_create((char *)&local_b8,true);
  local_98 = "";
  local_c0 = 0;
  local_c8 = 0;
  local_90 = 0;
  String::parse_latin1((StrRange *)&local_c8);
  local_d0 = 0;
  local_98 = "current_group_idx";
  local_90 = 0x11;
  String::parse_latin1((StrRange *)&local_d0);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_98,2,(StrRange *)&local_d0,0,(StrRange *)&local_c8,6,&local_c0);
  local_d8 = 0;
  local_a0 = 10;
  local_a8 = "BoneMapper";
  String::parse_latin1((StrRange *)&local_d8);
  StringName::StringName((StringName *)&local_a8,(String *)&local_d8,false);
  ClassDB::add_property
            ((StringName *)&local_a8,(PropertyInfo *)&local_98,(StringName *)&local_b8,
             (StringName *)&local_b0,-1);
  if ((StringName::configured != '\0') && (local_a8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
  if ((((StringName::configured != '\0') &&
       ((local_c0 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
      ((local_b8 == 0 || (StringName::unref(), StringName::configured != '\0')))) && (local_b0 != 0)
     ) {
    StringName::unref();
  }
  _scs_create((char *)&local_b0,true);
  _scs_create((char *)&local_b8,true);
  local_98 = "";
  local_c0 = 0;
  local_c8 = 0;
  local_90 = 0;
  String::parse_latin1((StrRange *)&local_c8);
  local_98 = "current_bone_idx";
  local_d0 = 0;
  local_90 = 0x10;
  String::parse_latin1((StrRange *)&local_d0);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_98,2,(StrRange *)&local_d0,0,(StrRange *)&local_c8,6,&local_c0);
  local_a8 = "BoneMapper";
  local_d8 = 0;
  local_a0 = 10;
  String::parse_latin1((StrRange *)&local_d8);
  StringName::StringName((StringName *)&local_a8,(String *)&local_d8,false);
  ClassDB::add_property
            ((StringName *)&local_a8,(PropertyInfo *)&local_98,(StringName *)&local_b8,
             (StringName *)&local_b0,-1);
  if ((StringName::configured != '\0') && (local_a8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
  if (((StringName::configured != '\0') &&
      ((local_c0 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (((local_b8 == 0 || (StringName::unref(), StringName::configured != '\0')) && (local_b0 != 0)))
     ) {
    StringName::unref();
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* BoneMapperItem::_bind_methods() */

void BoneMapperItem::_bind_methods(void)

{
  long *plVar1;
  long lVar2;
  code *pcVar3;
  int *piVar4;
  int *piVar5;
  long lVar6;
  long in_FS_OFFSET;
  undefined8 local_120;
  long local_118;
  long local_110;
  long local_108;
  long local_100;
  char *local_f8;
  undefined8 local_f0;
  undefined4 local_e8 [2];
  undefined8 local_e0;
  char *local_d8;
  int local_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  char *local_b8;
  undefined8 local_b0;
  CowData<char32_t> local_a8 [8];
  long lStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78 [2];
  int *local_68;
  undefined8 local_60;
  undefined8 local_50 [2];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_108 = 0;
  local_b8 = "";
  local_110 = 0;
  local_b0 = 0;
  String::parse_latin1((StrRange *)&local_110);
  local_118 = 0;
  local_b8 = "profile_bone_name";
  local_b0 = 0x11;
  String::parse_latin1((StrRange *)&local_118);
  local_e8[0] = 0x15;
  local_e0 = 0;
  if (local_118 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_e0,(CowData *)&local_118);
  }
  local_d8 = (char *)0x0;
  local_d0 = 0;
  local_c8 = 0;
  if (local_110 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_c8,(CowData *)&local_110);
    local_c0 = 6;
    if (local_d0 == 0x11) {
      StringName::StringName((StringName *)&local_b8,(String *)&local_c8,false);
      if (local_d8 == local_b8) {
        if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        local_d8 = local_b8;
      }
      goto LAB_001048aa;
    }
  }
  local_c0 = 6;
  StringName::operator=((StringName *)&local_d8,(StringName *)&local_108);
LAB_001048aa:
  local_100 = 0;
  local_b8 = "pick";
  local_b0 = 4;
  String::parse_latin1((StrRange *)&local_100);
  local_b8 = (char *)0x0;
  local_b0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 6;
  local_80 = 1;
  local_78[0] = 0;
  local_68 = (int *)0x0;
  local_60 = 0;
  local_50[0] = 0;
  _local_a8 = (undefined1  [16])0x0;
  if (local_100 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_b8,(CowData *)&local_100);
  }
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_78,(PropertyInfo *)local_e8);
  local_f8 = "BoneMapperItem";
  local_120 = 0;
  local_f0 = 0xe;
  String::parse_latin1((StrRange *)&local_120);
  StringName::StringName((StringName *)&local_f8,(String *)&local_120,false);
  ClassDB::add_signal((StringName *)&local_f8,(MethodInfo *)&local_b8);
  if ((StringName::configured != '\0') && (local_f8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_120);
  CowData<int>::_unref((CowData<int> *)local_50);
  piVar4 = local_68;
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
      local_68 = (int *)0x0;
      lVar6 = 0;
      piVar5 = piVar4;
      if (lVar2 != 0) {
        do {
          if (Variant::needs_deinit[*piVar5] != '\0') {
            Variant::_clear_internal();
          }
          lVar6 = lVar6 + 1;
          piVar5 = piVar5 + 6;
        } while (lVar2 != lVar6);
      }
      Memory::free_static(piVar4 + -4,false);
    }
  }
  List<PropertyInfo,DefaultAllocator>::~List((List<PropertyInfo,DefaultAllocator> *)local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  if ((StringName::configured != '\0') && (lStack_a0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref(local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
  if ((StringName::configured != '\0') && (local_d8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_118);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_110);
  if ((StringName::configured != '\0') && (local_108 != 0)) {
    StringName::unref();
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* CowData<int>::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<int>::_copy_on_write(CowData<int> *this)

{
  long lVar1;
  code *pcVar2;
  undefined8 *puVar3;
  ulong uVar4;
  size_t __n;
  
  if ((*(long *)this == 0) || (*(ulong *)(*(long *)this + -0x10) < 2)) {
    return;
  }
  if (*(long *)this == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  lVar1 = *(long *)(*(long *)this + -8);
  uVar4 = 0x10;
  __n = lVar1 * 4;
  if (__n != 0) {
    uVar4 = __n - 1 | __n - 1 >> 1;
    uVar4 = uVar4 | uVar4 >> 2;
    uVar4 = uVar4 | uVar4 >> 4;
    uVar4 = uVar4 | uVar4 >> 8;
    uVar4 = uVar4 | uVar4 >> 0x10;
    uVar4 = (uVar4 | uVar4 >> 0x20) + 0x11;
  }
  puVar3 = (undefined8 *)Memory::alloc_static(uVar4,false);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = 1;
    puVar3[1] = lVar1;
    memcpy(puVar3 + 2,*(void **)this,__n);
    _unref(this);
    *(undefined8 **)this = puVar3 + 2;
    return;
  }
  _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                   "Parameter \"mem_new\" is null.",0,0);
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



/* BoneMapper::update_group_idx() */

void __thiscall BoneMapper::update_group_idx(BoneMapper *this)

{
  long *plVar1;
  Object *pOVar2;
  long lVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  long in_FS_OFFSET;
  long local_80;
  long local_78;
  Object *local_70;
  Vector<String> local_68 [8];
  undefined8 local_60;
  Object *local_58;
  size_t local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  BoneMap::get_profile();
  if (local_58 != (Object *)0x0) {
    cVar4 = RefCounted::unreference();
    pOVar2 = local_58;
    if (cVar4 != '\0') {
      cVar4 = predelete_handler(local_58);
      if (cVar4 != '\0') {
        (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
        Memory::free_static(pOVar2,false);
      }
    }
    local_60 = 0;
    BoneMap::get_profile();
    iVar5 = SkeletonProfile::get_group_size();
    if (local_58 != (Object *)0x0) {
      cVar4 = RefCounted::unreference();
      pOVar2 = local_58;
      if (cVar4 != '\0') {
        cVar4 = predelete_handler(local_58);
        if (cVar4 != '\0') {
          (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
          Memory::free_static(pOVar2,false);
        }
      }
    }
    if (iVar5 < 1) {
      if (iVar5 <= *(int *)(this + 0xa48)) {
        *(undefined4 *)(this + 0xa48) = 0;
      }
    }
    else {
      iVar6 = 0;
      do {
        BoneMap::get_profile();
        SkeletonProfile::get_group_name((int)&local_78);
        if (local_78 == 0) {
          local_80 = 0;
        }
        else {
          pOVar2 = *(Object **)(local_78 + 8);
          local_80 = 0;
          if (pOVar2 == (Object *)0x0) {
            if (*(long *)(local_78 + 0x10) != 0) {
              CowData<char32_t>::_ref((CowData<char32_t> *)&local_80,(CowData *)(local_78 + 0x10));
            }
          }
          else {
            local_50 = strlen((char *)pOVar2);
            local_58 = pOVar2;
            String::parse_latin1((StrRange *)&local_80);
          }
        }
        Vector<String>::push_back(local_68);
        lVar3 = local_80;
        if (local_80 != 0) {
          LOCK();
          plVar1 = (long *)(local_80 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_80 = 0;
            Memory::free_static((void *)(lVar3 + -0x10),false);
          }
        }
        if ((StringName::configured != '\0') && (local_78 != 0)) {
          StringName::unref();
        }
        if (local_70 != (Object *)0x0) {
          cVar4 = RefCounted::unreference();
          pOVar2 = local_70;
          if (cVar4 != '\0') {
            cVar4 = predelete_handler(local_70);
            if (cVar4 != '\0') {
              (**(code **)(*(long *)pOVar2 + 0x140))();
              Memory::free_static(pOVar2,false);
            }
          }
        }
        iVar6 = iVar6 + 1;
      } while (iVar5 != iVar6);
      if (iVar5 <= *(int *)(this + 0xa48)) {
        *(undefined4 *)(this + 0xa48) = 0;
      }
      EditorPropertyEnum::setup(*(Vector **)(this + 0xa58));
      (**(code **)(**(long **)(this + 0xa58) + 0x380))();
      EditorProperty::set_read_only(SUB81(*(undefined8 *)(this + 0xa58),0));
    }
    CowData<String>::_unref((CowData<String> *)&local_60);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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



/* BonePicker::create_bones_tree(Skeleton3D*) [clone .part.0] */

void __thiscall BonePicker::create_bones_tree(BonePicker *this,Skeleton3D *param_1)

{
  int *piVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  code *pcVar10;
  bool bVar11;
  undefined8 uVar12;
  char cVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  Object *pOVar17;
  undefined8 uVar18;
  uint uVar19;
  ulong uVar20;
  long lVar21;
  int *piVar22;
  uint uVar23;
  undefined8 *puVar24;
  uint uVar25;
  ulong uVar26;
  ulong uVar27;
  long in_FS_OFFSET;
  bool bVar28;
  undefined4 local_cc;
  undefined8 local_c8;
  undefined8 local_c0;
  long local_b8;
  undefined8 local_b0;
  undefined4 local_a8 [2];
  undefined4 *local_a0;
  Object *local_98;
  long local_90;
  TreeItem *local_88;
  undefined1 local_80 [16];
  undefined1 local_70 [16];
  undefined8 local_60;
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_c8 = Tree::create_item(*(TreeItem **)(this + 0xdb8),0);
  local_60 = 2;
  local_a8[0] = 0xffffffff;
  local_80 = (undefined1  [16])0x0;
  local_70 = (undefined1  [16])0x0;
  HashMap<int,TreeItem*,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,TreeItem*>>>
  ::insert((int *)&local_98,&local_88,SUB81((Vector<int> *)local_a8,0));
  if ((create_bones_tree(Skeleton3D*)::{lambda()#1}::operator()()::sname == '\0') &&
     (iVar16 = __cxa_guard_acquire(&create_bones_tree(Skeleton3D*)::{lambda()#1}::operator()()::
                                    sname), iVar16 != 0)) {
    _scs_create((char *)&create_bones_tree(Skeleton3D*)::{lambda()#1}::operator()()::sname,true);
    __cxa_atexit(StringName::~StringName,
                 &create_bones_tree(Skeleton3D*)::{lambda()#1}::operator()()::sname,&__dso_handle);
    __cxa_guard_release(&create_bones_tree(Skeleton3D*)::{lambda()#1}::operator()()::sname);
  }
  Window::get_editor_theme_icon((StringName *)&local_98);
  if (local_98 == (Object *)0x0) {
    Skeleton3D::get_parentless_bones();
    if (local_a0 == (undefined4 *)0x0) {
      CowData<int>::_unref((CowData<int> *)&local_a0);
      goto LAB_00105793;
    }
    pOVar17 = (Object *)0x0;
LAB_00105425:
    bVar11 = true;
    do {
      if (*(long *)(local_a0 + -2) < 1) break;
      local_cc = *local_a0;
      Vector<int>::remove_at((Vector<int> *)local_a8,0);
      Skeleton3D::get_bone_children((int)(StringName *)&local_98);
      if ((local_90 != 0) && (iVar16 = (int)*(undefined8 *)(local_90 + -8), 0 < iVar16)) {
        uVar26 = 0;
        do {
          if (local_90 == 0) {
            lVar21 = 0;
LAB_001054af:
            _err_print_index_error
                      ("get","./core/templates/cowdata.h",0xdb,uVar26,lVar21,"p_index","size()","",
                       false,true);
            _err_flush_stdout();
                    /* WARNING: Does not return */
            pcVar10 = (code *)invalidInstructionException();
            (*pcVar10)();
          }
          lVar21 = *(long *)(local_90 + -8);
          if (lVar21 <= (long)uVar26) goto LAB_001054af;
          Vector<int>::push_back((Vector<int> *)local_a8,*(int *)(local_90 + uVar26 * 4));
          bVar28 = iVar16 - 1 != uVar26;
          uVar26 = uVar26 + 1;
        } while (bVar28);
      }
      uVar14 = Skeleton3D::get_bone_parent((int)param_1);
      if ((local_80._0_8_ == 0) || (local_60._4_4_ == 0)) {
LAB_001059a4:
                    /* WARNING: Does not return */
        pcVar10 = (code *)invalidInstructionException();
        (*pcVar10)();
      }
      uVar27 = CONCAT44(0,*(uint *)(hash_table_size_primes + (local_60 & 0xffffffff) * 4));
      uVar26 = *(ulong *)(hash_table_size_primes_inv + (local_60 & 0xffffffff) * 8);
      uVar15 = (uVar14 >> 0x10 ^ uVar14) * -0x7a143595;
      uVar15 = (uVar15 ^ uVar15 >> 0xd) * -0x3d4d51cb;
      uVar23 = uVar15 ^ uVar15 >> 0x10;
      if (uVar15 == uVar15 >> 0x10) {
        uVar23 = 1;
        uVar20 = uVar26;
      }
      else {
        uVar20 = uVar23 * uVar26;
      }
      auVar2._8_8_ = 0;
      auVar2._0_8_ = uVar27;
      auVar6._8_8_ = 0;
      auVar6._0_8_ = uVar20;
      lVar21 = SUB168(auVar2 * auVar6,8);
      uVar15 = *(uint *)(local_80._8_8_ + lVar21 * 4);
      uVar19 = SUB164(auVar2 * auVar6,8);
      if (uVar15 == 0) goto LAB_001059a4;
      uVar25 = 0;
      while ((uVar15 != uVar23 ||
             (uVar14 != *(uint *)(*(long *)(local_80._0_8_ + lVar21 * 8) + 0x10)))) {
        uVar25 = uVar25 + 1;
        auVar3._8_8_ = 0;
        auVar3._0_8_ = (uVar19 + 1) * uVar26;
        auVar7._8_8_ = 0;
        auVar7._0_8_ = uVar27;
        lVar21 = SUB168(auVar3 * auVar7,8);
        uVar15 = *(uint *)(local_80._8_8_ + lVar21 * 4);
        uVar19 = SUB164(auVar3 * auVar7,8);
        if ((uVar15 == 0) ||
           (auVar4._8_8_ = 0, auVar4._0_8_ = uVar15 * uVar26, auVar8._8_8_ = 0,
           auVar8._0_8_ = uVar27, auVar5._8_8_ = 0,
           auVar5._0_8_ = ((*(uint *)(hash_table_size_primes + (local_60 & 0xffffffff) * 4) + uVar19
                           ) - SUB164(auVar4 * auVar8,8)) * uVar26, auVar9._8_8_ = 0,
           auVar9._0_8_ = uVar27, SUB164(auVar5 * auVar9,8) < uVar25)) goto LAB_001059a4;
      }
      uVar18 = Tree::create_item(*(TreeItem **)(this + 0xdb8),
                                 (int)*(undefined8 *)
                                       (*(long *)(local_80._0_8_ + (ulong)uVar19 * 8) + 0x18));
      local_c0 = uVar18;
      HashMap<int,TreeItem*,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,TreeItem*>>>
      ::insert((int *)&local_b0,&local_88,SUB81(&local_cc,0));
      Skeleton3D::get_bone_name((int)(CowData<char32_t> *)&local_b0);
      TreeItem::set_text(uVar18,0,(CowData<char32_t> *)&local_b0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
      local_b8 = 0;
      if ((pOVar17 != (Object *)0x0) &&
         (lVar21 = __dynamic_cast(pOVar17,&Object::typeinfo,&Texture2D::typeinfo,0), lVar21 != 0)) {
        local_b0 = 0;
        local_b8 = lVar21;
        cVar13 = RefCounted::reference();
        if (cVar13 == '\0') {
          local_b8 = 0;
        }
        Ref<Texture2D>::unref((Ref<Texture2D> *)&local_b0);
      }
      iVar16 = (int)uVar18;
      TreeItem::set_icon(iVar16,(Ref *)0x0);
      Ref<Texture2D>::unref((Ref<Texture2D> *)&local_b8);
      TreeItem::set_selectable(iVar16,false);
      itos((long)&local_b8);
      operator+((char *)&local_b0,(String *)"bones/");
      Variant::Variant((Variant *)local_58,(String *)&local_b0);
      TreeItem::set_metadata(iVar16,(Variant *)0x0);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
      if (!bVar11) {
        TreeItem::set_collapsed(SUB81(uVar18,0));
      }
      CowData<int>::_unref((CowData<int> *)&local_90);
      bVar11 = false;
    } while (local_a0 != (undefined4 *)0x0);
  }
  else {
    pOVar17 = (Object *)__dynamic_cast(local_98,&Object::typeinfo,&Texture::typeinfo,0);
    if (pOVar17 == (Object *)0x0) {
LAB_001053fb:
      cVar13 = RefCounted::unreference();
      if ((cVar13 != '\0') && (cVar13 = predelete_handler(local_98), cVar13 != '\0')) {
        (**(code **)(*(long *)local_98 + 0x140))(local_98);
        Memory::free_static(local_98,false);
      }
    }
    else {
      cVar13 = RefCounted::reference();
      if (cVar13 == '\0') {
        pOVar17 = (Object *)0x0;
      }
      if (local_98 != (Object *)0x0) goto LAB_001053fb;
    }
    Skeleton3D::get_parentless_bones();
    if (local_a0 != (undefined4 *)0x0) goto LAB_00105425;
  }
  CowData<int>::_unref((CowData<int> *)&local_a0);
  if (((pOVar17 != (Object *)0x0) && (cVar13 = RefCounted::unreference(), cVar13 != '\0')) &&
     (cVar13 = predelete_handler(pOVar17), cVar13 != '\0')) {
    (**(code **)(*(long *)pOVar17 + 0x140))(pOVar17);
    Memory::free_static(pOVar17,false);
  }
LAB_00105793:
  uVar18 = local_80._0_8_;
  if ((undefined8 *)local_80._0_8_ == (undefined8 *)0x0) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
  else {
    uVar12 = local_80._8_8_;
    if ((local_60._4_4_ != 0) &&
       (*(uint *)(hash_table_size_primes + (local_60 & 0xffffffff) * 4) != 0)) {
      piVar1 = (int *)(local_80._8_8_ +
                      (ulong)*(uint *)(hash_table_size_primes + (local_60 & 0xffffffff) * 4) * 4);
      piVar22 = (int *)local_80._8_8_;
      puVar24 = (undefined8 *)local_80._0_8_;
      do {
        if (*piVar22 != 0) {
          *piVar22 = 0;
          Memory::free_static((void *)*puVar24,false);
          *puVar24 = 0;
        }
        piVar22 = piVar22 + 1;
        puVar24 = puVar24 + 1;
      } while (piVar1 != piVar22);
    }
    Memory::free_static((void *)uVar18,false);
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      Memory::free_static((void *)uVar12,false);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* BonePicker::create_bones_tree(Skeleton3D*) */

undefined8 __thiscall BonePicker::create_bones_tree(BonePicker *this,Skeleton3D *param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  Tree::clear();
  if (param_1 != (Skeleton3D *)0x0) {
    uVar1 = create_bones_tree(this,param_1);
    return uVar1;
  }
  return uStack_18;
}



/* BonePicker::create_editors() */

void __thiscall BonePicker::create_editors(BonePicker *this)

{
  long *plVar1;
  code *pcVar2;
  undefined8 uVar3;
  Skeleton3D *pSVar4;
  BoxContainer *this_00;
  Tree *this_01;
  CallableCustom *this_02;
  long in_FS_OFFSET;
  undefined8 local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_60 = 0;
  local_58 = "";
  local_50 = 0;
  String::parse_latin1((StrRange *)&local_60);
  local_58 = "Bone Picker:";
  local_68 = 0;
  local_50 = 0xc;
  String::parse_latin1((StrRange *)&local_68);
  TTR((String *)&local_58,(String *)&local_68);
  Window::set_title((String *)this);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  this_00 = (BoxContainer *)operator_new(0xa10,"");
  BoxContainer::BoxContainer(this_00,true);
  this_00[0xa0c] = (BoxContainer)0x1;
  *(undefined ***)this_00 = &PTR__initialize_classv_00122328;
  postinitialize_handler((Object *)this_00);
  Node::add_child(this,this_00,0,0);
  this_01 = (Tree *)operator_new(0xdc8,"");
  Tree::Tree(this_01);
  postinitialize_handler((Object *)this_01);
  *(Tree **)(this + 0xdb8) = this_01;
  Node::set_auto_translate_mode(this_01,2);
  Tree::set_select_mode(*(undefined8 *)(this + 0xdb8),0);
  Control::set_v_size_flags(*(undefined8 *)(this + 0xdb8),3);
  Tree::set_hide_root(SUB81(*(undefined8 *)(this + 0xdb8),0));
  plVar1 = *(long **)(this + 0xdb8);
  pcVar2 = *(code **)(*plVar1 + 0x108);
  this_02 = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(this_02);
  *(undefined **)(this_02 + 0x20) = &_LC24;
  *(undefined1 (*) [16])(this_02 + 0x30) = (undefined1  [16])0x0;
  *(undefined ***)this_02 = &PTR_hash_00123fd8;
  *(undefined8 *)(this_02 + 0x40) = 0;
  uVar3 = *(undefined8 *)(this + 0x60);
  *(undefined8 *)(this_02 + 0x10) = 0;
  *(undefined8 *)(this_02 + 0x30) = uVar3;
  *(code **)(this_02 + 0x38) = _confirm;
  *(BonePicker **)(this_02 + 0x28) = this;
  CallableCustomMethodPointerBase::_setup((uint *)this_02,(int)this_02 + 0x28);
  *(char **)(this_02 + 0x20) = "BonePicker::_confirm";
  Callable::Callable((Callable *)&local_58,this_02);
  StringName::StringName((StringName *)&local_60,"item_activated",false);
  (*pcVar2)(plVar1,(StrRange *)&local_60,(String *)&local_58,0);
  if ((StringName::configured != '\0') && (local_60 != 0)) {
    StringName::unref();
  }
  Callable::~Callable((Callable *)&local_58);
  Node::add_child(this_00,*(undefined8 *)(this + 0xdb8),0,0);
  pSVar4 = *(Skeleton3D **)(this + 0xdb0);
  Tree::clear();
  if (pSVar4 == (Skeleton3D *)0x0) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    create_bones_tree(this,pSVar4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* BonePicker::_notification(int) */

void __thiscall BonePicker::_notification(BonePicker *this,int param_1)

{
  if (param_1 != 10) {
    return;
  }
  create_editors(this);
  return;
}



/* BoneMapper::_update_state() */

void __thiscall BoneMapper::_update_state(BoneMapper *this)

{
  int *piVar1;
  long lVar2;
  String *pSVar3;
  char *pcVar4;
  code *pcVar5;
  bool bVar6;
  ulong uVar7;
  StringName *pSVar8;
  char cVar9;
  int iVar10;
  long lVar11;
  int iVar12;
  long lVar13;
  long in_FS_OFFSET;
  int *local_d0;
  long local_98;
  long local_90;
  StringName *local_88;
  char *local_80;
  long local_78;
  undefined8 local_70;
  undefined8 local_68;
  int *local_60;
  char *local_58;
  size_t local_50 [2];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar11 = *(long *)(this + 0xa78);
  if ((lVar11 == 0) || (iVar12 = (int)*(undefined8 *)(lVar11 + -8), iVar12 < 1)) {
LAB_00106330:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  uVar7 = 0;
  while (lVar11 != 0) {
    lVar13 = *(long *)(lVar11 + -8);
    if (lVar13 <= (long)uVar7) goto LAB_00105e8d;
    lVar2 = uVar7 * 8;
    StringName::StringName
              ((StringName *)&local_98,(StringName *)(*(long *)(lVar11 + uVar7 * 8) + 0xaa0));
    BoneMap::get_skeleton_bone_name((StringName *)&local_90);
    pSVar3 = *(String **)(this + 0xa10);
    if (local_90 == 0) {
      local_68 = 0;
    }
    else {
      pcVar4 = *(char **)(local_90 + 8);
      if (pcVar4 == (char *)0x0) {
        local_68 = 0;
        if (*(long *)(local_90 + 0x10) != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_68,(CowData *)(local_90 + 0x10));
        }
      }
      else {
        local_68 = 0;
        local_50[0] = strlen(pcVar4);
        local_58 = pcVar4;
        String::parse_latin1((StrRange *)&local_68);
      }
    }
    iVar10 = Skeleton3D::find_bone(pSVar3);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    if (iVar10 < 0) {
      lVar11 = *(long *)(this + 0xa78);
      if (lVar11 == 0) break;
      lVar13 = *(long *)(lVar11 + -8);
      if (lVar13 <= (long)uVar7) goto LAB_00105e8d;
      lVar11 = *(long *)(lVar11 + lVar2);
      if (*(char *)(lVar11 + 0xaa9) == '\0') {
        BoneMapperButton::set_state(lVar11,0);
      }
      else {
        BoneMapperButton::set_state(lVar11,2);
      }
    }
    else {
      iVar10 = BoneMap::get_skeleton_bone_name_count(*(StringName **)(this + 0xa18));
      if (iVar10 == 1) {
        BoneMap::get_profile();
        SkeletonProfile::find_bone(local_88);
        SkeletonProfile::get_bone_parent((int)&local_80);
        local_60 = (int *)0x0;
        if (local_80 == (char *)0x0) {
          iVar10 = Skeleton3D::get_bone_parent((int)*(undefined8 *)(this + 0xa10));
          local_50[0] = 0;
          local_d0 = (int *)0x0;
          if (-1 < iVar10) goto LAB_001061b5;
LAB_00106388:
          lVar11 = *(long *)(this + 0xa78);
          if (lVar11 == 0) break;
          lVar13 = *(long *)(lVar11 + -8);
          if (lVar13 <= (long)uVar7) goto LAB_00105e8d;
          BoneMapperButton::set_state(*(undefined8 *)(lVar11 + lVar2));
        }
        else {
          do {
            pSVar3 = *(String **)(this + 0xa10);
            BoneMap::get_skeleton_bone_name((StringName *)&local_78);
            if (local_78 == 0) {
              local_70 = 0;
            }
            else {
              pcVar4 = *(char **)(local_78 + 8);
              local_70 = 0;
              if (pcVar4 == (char *)0x0) {
                if (*(long *)(local_78 + 0x10) != 0) {
                  CowData<char32_t>::_ref
                            ((CowData<char32_t> *)&local_70,(CowData *)(local_78 + 0x10));
                }
              }
              else {
                local_50[0] = strlen(pcVar4);
                local_58 = pcVar4;
                String::parse_latin1((StrRange *)&local_70);
              }
            }
            iVar10 = Skeleton3D::find_bone(pSVar3);
            Vector<int>::push_back((Vector<int> *)&local_68,iVar10);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
            if ((StringName::configured != '\0') && (local_78 != 0)) {
              StringName::unref();
            }
            iVar10 = SkeletonProfile::find_bone(local_88);
            if (iVar10 == -1) break;
            SkeletonProfile::find_bone(local_88);
            SkeletonProfile::get_bone_parent((int)&local_58);
            if (local_80 == local_58) {
              if (StringName::configured != '\0') {
                if (local_80 == (char *)0x0) break;
                StringName::unref();
              }
            }
            else {
              StringName::unref();
              local_80 = local_58;
            }
          } while (local_80 != (char *)0x0);
          local_d0 = local_60;
          iVar10 = Skeleton3D::get_bone_parent((int)*(undefined8 *)(this + 0xa10));
          local_50[0] = 0;
          if (-1 < iVar10) {
LAB_001061b5:
            local_50[0] = 0;
            do {
              Vector<int>::push_back((Vector<int> *)&local_58,iVar10);
              iVar10 = Skeleton3D::get_bone_parent((int)*(undefined8 *)(this + 0xa10));
            } while (-1 < iVar10);
          }
          if ((local_d0 == (int *)0x0) || (*(long *)(local_d0 + -2) < 1)) goto LAB_00106388;
          piVar1 = local_d0 + *(long *)(local_d0 + -2);
          bVar6 = false;
          do {
            while (*local_d0 != -1) {
              if ((local_50[0] != 0) && (0 < *(long *)(local_50[0] - 8))) {
                lVar11 = 0;
                do {
                  if (*local_d0 == *(int *)(local_50[0] + lVar11 * 4)) goto LAB_00106252;
                  lVar11 = lVar11 + 1;
                } while (*(long *)(local_50[0] - 8) != lVar11);
              }
              local_d0 = local_d0 + 1;
              bVar6 = true;
              if (local_d0 == piVar1) goto LAB_0010625b;
            }
LAB_00106252:
            local_d0 = local_d0 + 1;
          } while (local_d0 != piVar1);
LAB_0010625b:
          if (!bVar6) goto LAB_00106388;
          lVar11 = *(long *)(this + 0xa78);
          if (lVar11 == 0) break;
          lVar13 = *(long *)(lVar11 + -8);
          if (lVar13 <= (long)uVar7) goto LAB_00105e8d;
          BoneMapperButton::set_state(*(undefined8 *)(lVar11 + lVar2));
        }
        CowData<int>::_unref((CowData<int> *)local_50);
        CowData<int>::_unref((CowData<int> *)&local_60);
        if ((StringName::configured != '\0') && (local_80 != (char *)0x0)) {
          StringName::unref();
        }
        if (((local_88 != (StringName *)0x0) &&
            (cVar9 = RefCounted::unreference(), pSVar8 = local_88, cVar9 != '\0')) &&
           (cVar9 = predelete_handler((Object *)local_88), cVar9 != '\0')) {
          (**(code **)(*(long *)pSVar8 + 0x140))(pSVar8);
          Memory::free_static(pSVar8,false);
        }
      }
      else {
        lVar11 = *(long *)(this + 0xa78);
        if (lVar11 == 0) break;
        lVar13 = *(long *)(lVar11 + -8);
        if (lVar13 <= (long)uVar7) goto LAB_00105e8d;
        BoneMapperButton::set_state(*(undefined8 *)(lVar11 + lVar2),3);
      }
    }
    if (((StringName::configured != '\0') &&
        ((local_90 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
       (local_98 != 0)) {
      StringName::unref();
    }
    if (uVar7 == iVar12 - 1) goto LAB_00106330;
    uVar7 = uVar7 + 1;
    lVar11 = *(long *)(this + 0xa78);
  }
  lVar13 = 0;
LAB_00105e8d:
  _err_print_index_error
            ("get","./core/templates/cowdata.h",0xdb,uVar7,lVar13,"p_index","size()","",false,true);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar5 = (code *)invalidInstructionException();
  (*pcVar5)();
}



/* BoneMapper::recreate_editor() */

void __thiscall BoneMapper::recreate_editor(BoneMapper *this)

{
  Node *pNVar1;
  Object *pOVar2;
  char cVar3;
  TextureButton TVar4;
  int iVar5;
  long lVar6;
  TextureButton *this_00;
  CallableCustom *this_01;
  ulong uVar7;
  Ref *pRVar8;
  undefined1 *puVar9;
  undefined1 uVar10;
  int iVar11;
  int iVar12;
  long lVar13;
  char *pcVar14;
  long in_FS_OFFSET;
  TextureButton TVar15;
  undefined4 extraout_XMM0_Db;
  CowData<BoneMapperButton*> *this_02;
  code *pcVar16;
  undefined4 uVar18;
  undefined8 uVar17;
  int local_c8;
  long local_b0;
  long local_a8 [2];
  long local_98 [2];
  Variant *local_88;
  int local_78 [6];
  undefined8 local_60;
  undefined1 local_58 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar6 = *(long *)(this + 0xa78);
  if ((lVar6 != 0) && (iVar12 = (int)*(undefined8 *)(lVar6 + -8), 0 < iVar12)) {
    pNVar1 = *(Node **)(this + 0xa68);
    uVar7 = 0;
    while (lVar6 != 0) {
      lVar6 = *(long *)(lVar6 + -8);
      if (lVar6 <= (long)uVar7) goto LAB_0010648f;
      Node::remove_child(pNVar1);
      lVar13 = *(long *)(this + 0xa78);
      if (lVar13 == 0) break;
      lVar6 = *(long *)(lVar13 + -8);
      if (lVar6 <= (long)uVar7) goto LAB_0010648f;
      pOVar2 = *(Object **)(lVar13 + uVar7 * 8);
      cVar3 = predelete_handler(pOVar2);
      if (cVar3 != '\0') {
        (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
        Memory::free_static(pOVar2,false);
      }
      if (uVar7 == iVar12 - 1) goto LAB_001064d0;
      pNVar1 = *(Node **)(this + 0xa68);
      uVar7 = uVar7 + 1;
      lVar6 = *(long *)(this + 0xa78);
    }
LAB_0010648c:
    lVar6 = 0;
LAB_0010648f:
    _err_print_index_error
              ("get","./core/templates/cowdata.h",0xdb,uVar7,lVar6,"p_index","size()","",false,true)
    ;
    _err_flush_stdout();
                    /* WARNING: Does not return */
    pcVar16 = (code *)invalidInstructionException();
    (*pcVar16)();
  }
LAB_001064d0:
  this_02 = (CowData<BoneMapperButton*> *)(this + 0xa78);
  CowData<BoneMapperButton*>::resize<false>(this_02,0);
  lVar13 = *(long *)(this + 0xa30);
  if (lVar13 == 0) {
    local_c8 = 0;
  }
  else {
    local_c8 = (int)*(undefined8 *)(lVar13 + -8);
    if (0 < local_c8) {
      uVar7 = 0;
      while (lVar13 != 0) {
        lVar6 = *(long *)(lVar13 + -8);
        if (lVar6 <= (long)uVar7) goto LAB_0010648f;
        CanvasItem::set_visible(SUB81(*(undefined8 *)(lVar13 + uVar7 * 8),0));
        if (uVar7 == local_c8 - 1) goto LAB_00106550;
        uVar7 = uVar7 + 1;
        lVar13 = *(long *)(this + 0xa30);
      }
      goto LAB_0010648c;
    }
  }
LAB_00106550:
  BoneMap::get_profile();
  if (local_b0 == 0) {
    local_98[0] = 0;
    TextureRect::set_texture(*(Ref **)(this + 0xa68));
    Ref<Texture2D>::unref((Ref<Texture2D> *)local_98);
    goto LAB_00106622;
  }
  lVar6 = __dynamic_cast(local_b0,&Object::typeinfo,&SkeletonProfileHumanoid::typeinfo,0);
  if (lVar6 == 0) {
    pRVar8 = *(Ref **)(this + 0xa68);
    SkeletonProfile::get_texture((int)(Ref<Texture2D> *)local_98);
    TextureRect::set_texture(pRVar8);
    Ref<Texture2D>::unref((Ref<Texture2D> *)local_98);
    goto LAB_00106622;
  }
  SkeletonProfile::get_group_name((int)(StringName *)local_a8);
  cVar3 = StringName::operator==((StringName *)local_a8,"Body");
  if (cVar3 == '\0') {
    cVar3 = StringName::operator==((StringName *)local_a8,"Face");
    if (cVar3 != '\0') {
      pRVar8 = *(Ref **)(this + 0xa68);
      if (recreate_editor()::{lambda()#2}::operator()()::sname == '\0') {
        puVar9 = &recreate_editor()::{lambda()#2}::operator()()::sname;
        pcVar14 = (char *)&recreate_editor()::{lambda()#2}::operator()()::sname;
        iVar12 = __cxa_guard_acquire(&recreate_editor()::{lambda()#2}::operator()()::sname);
        uVar10 = 0xaa;
        goto joined_r0x00106a8b;
      }
      goto LAB_001065e3;
    }
    cVar3 = StringName::operator==((StringName *)local_a8,"LeftHand");
    if (cVar3 != '\0') {
      pRVar8 = *(Ref **)(this + 0xa68);
      if (recreate_editor()::{lambda()#3}::operator()()::sname == '\0') {
        puVar9 = &recreate_editor()::{lambda()#3}::operator()()::sname;
        pcVar14 = (char *)&recreate_editor()::{lambda()#3}::operator()()::sname;
        iVar12 = __cxa_guard_acquire(&recreate_editor()::{lambda()#3}::operator()()::sname);
        uVar10 = 0xc4;
        goto joined_r0x00106a8b;
      }
      goto LAB_001065e3;
    }
    cVar3 = StringName::operator==((StringName *)local_a8,"RightHand");
    if (cVar3 != '\0') {
      pRVar8 = *(Ref **)(this + 0xa68);
      if (recreate_editor()::{lambda()#4}::operator()()::sname == '\0') {
        puVar9 = &recreate_editor()::{lambda()#4}::operator()()::sname;
        pcVar14 = (char *)&recreate_editor()::{lambda()#4}::operator()()::sname;
        iVar12 = __cxa_guard_acquire(&recreate_editor()::{lambda()#4}::operator()()::sname);
        if (iVar12 != 0) {
          uVar10 = 0xe3;
          goto LAB_00106a91;
        }
      }
      goto LAB_001065e3;
    }
  }
  else {
    pRVar8 = *(Ref **)(this + 0xa68);
    if (recreate_editor()::{lambda()#1}::operator()()::sname == '\0') {
      puVar9 = &recreate_editor()::{lambda()#1}::operator()()::sname;
      pcVar14 = (char *)&recreate_editor()::{lambda()#1}::operator()()::sname;
      iVar12 = __cxa_guard_acquire(&recreate_editor()::{lambda()#1}::operator()()::sname);
      uVar10 = 0x94;
joined_r0x00106a8b:
      if (iVar12 != 0) {
LAB_00106a91:
        _scs_create(pcVar14,(bool)uVar10);
        __cxa_atexit(StringName::~StringName,pcVar14,&__dso_handle);
        __cxa_guard_release(puVar9);
      }
    }
LAB_001065e3:
    Control::get_editor_theme_icon((StringName *)local_98);
    TextureRect::set_texture(pRVar8);
    Ref<Texture2D>::unref((Ref<Texture2D> *)local_98);
  }
  if ((StringName::configured != '\0') && (local_a8[0] != 0)) {
    StringName::unref();
  }
LAB_00106622:
  if (local_b0 != 0) {
    iVar12 = 0;
    if (0 < local_c8) {
      do {
        iVar5 = (int)(Callable *)local_98;
        SkeletonProfile::get_group_name(iVar5);
        iVar11 = (int)(Callable *)local_a8;
        SkeletonProfile::get_group(iVar11);
        lVar13 = local_98[0];
        lVar6 = local_a8[0];
        if (local_a8[0] == 0) {
LAB_001066ae:
          if ((StringName::configured != '\0') && (local_98[0] != 0)) {
            StringName::unref();
          }
        }
        else if (StringName::configured != '\0') {
          StringName::unref();
          goto LAB_001066ae;
        }
        if (lVar6 == lVar13) {
          this_00 = (TextureButton *)operator_new(0xab8,"");
          TVar15 = (TextureButton)(*(int *)(this + 0xa4c) == iVar12);
          TVar4 = (TextureButton)SkeletonProfile::is_required((int)local_b0);
          SkeletonProfile::get_bone_name(iVar5);
          TextureButton::TextureButton(this_00);
          *(undefined ***)this_00 = &PTR__initialize_classv_00122cb0;
          *(undefined8 *)(this_00 + 0xaa0) = 0;
          *(undefined2 *)(this_00 + 0xaa8) = 0;
          *(undefined8 *)(this_00 + 0xab0) = 0;
          StringName::operator=((StringName *)(this_00 + 0xaa0),(StringName *)local_98);
          this_00[0xaa9] = TVar4;
          this_00[0xaa8] = TVar15;
          postinitialize_handler((Object *)this_00);
          if ((StringName::configured != '\0') && (local_98[0] != 0)) {
            StringName::unref();
          }
          pcVar16 = *(code **)(*(long *)this_00 + 0x108);
          this_01 = (CallableCustom *)operator_new(0x48,"");
          CallableCustom::CallableCustom(this_01);
          *(BoneMapper **)(this_01 + 0x28) = this;
          *(undefined1 (*) [16])(this_01 + 0x30) = (undefined1  [16])0x0;
          *(undefined **)(this_01 + 0x20) = &_LC24;
          *(undefined ***)this_01 = &PTR_hash_00124188;
          *(undefined8 *)(this_01 + 0x40) = 0;
          uVar17 = *(undefined8 *)(this + 0x60);
          *(undefined8 *)(this_01 + 0x10) = 0;
          *(undefined8 *)(this_01 + 0x30) = uVar17;
          *(code **)(this_01 + 0x38) = set_current_bone_idx;
          CallableCustomMethodPointerBase::_setup((uint *)this_01,(int)this_01 + 0x28);
          *(char **)(this_01 + 0x20) = "BoneMapper::set_current_bone_idx";
          Callable::Callable((Callable *)local_a8,this_01);
          Variant::Variant((Variant *)local_78,iVar12);
          local_60 = 0;
          local_58 = (undefined1  [16])0x0;
          local_88 = (Variant *)local_78;
          Callable::bindp((Variant **)local_98,iVar11);
          if (Variant::needs_deinit[(int)local_60] != '\0') {
            Variant::_clear_internal();
          }
          if (Variant::needs_deinit[local_78[0]] != '\0') {
            Variant::_clear_internal();
          }
          (*pcVar16)(this_00,SceneStringNames::singleton + 0x238,(Callable *)local_98,1);
          uVar18 = (undefined4)((ulong)pcVar16 >> 0x20);
          Callable::~Callable((Callable *)local_98);
          Callable::~Callable((Callable *)local_a8);
          Control::set_h_grow_direction(this_00,2);
          Control::set_v_grow_direction(this_00,2);
          SkeletonProfile::get_handle_offset((int)local_b0);
          uVar17 = CONCAT44(uVar18,extraout_XMM0_Db);
          if (*(long *)(this + 0xa78) == 0) {
            lVar6 = 1;
          }
          else {
            lVar6 = *(long *)(*(long *)(this + 0xa78) + -8) + 1;
          }
          iVar5 = CowData<BoneMapperButton*>::resize<false>(this_02,lVar6);
          if (iVar5 == 0) {
            if (*(long *)(this + 0xa78) == 0) {
              lVar13 = -1;
              lVar6 = 0;
            }
            else {
              lVar6 = *(long *)(*(long *)(this + 0xa78) + -8);
              lVar13 = lVar6 + -1;
              if (-1 < lVar13) {
                CowData<BoneMapperButton*>::_copy_on_write(this_02);
                *(TextureButton **)(*(long *)(this + 0xa78) + lVar13 * 8) = this_00;
                goto LAB_0010693d;
              }
            }
            _err_print_index_error
                      ("set","./core/templates/cowdata.h",0xcf,lVar13,lVar6,"p_index","size()","",
                       false,false);
          }
          else {
            _err_print_error("push_back","./core/templates/vector.h",0x142,
                             "Condition \"err\" is true. Returning: true",0,0,this_02,uVar17);
          }
LAB_0010693d:
          Node::add_child(*(undefined8 *)(this + 0xa68),this_00,0,0);
          Control::set_anchor(this_00,0,1,1);
          Control::set_anchor(this_00,2,1,1);
          Control::set_anchor(this_00,1,1,1);
          Control::set_anchor(this_00,3,1,1);
        }
        iVar12 = iVar12 + 1;
      } while (iVar12 != local_c8);
    }
    _update_state(this);
  }
  Ref<SkeletonProfile>::unref((Ref<SkeletonProfile> *)&local_b0);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* BoneMapper::set_current_group_idx(int) */

void __thiscall BoneMapper::set_current_group_idx(BoneMapper *this,int param_1)

{
  *(int *)(this + 0xa48) = param_1;
  recreate_editor(this);
  return;
}



/* BoneMapper::set_current_bone_idx(int) */

void __thiscall BoneMapper::set_current_bone_idx(BoneMapper *this,int param_1)

{
  *(int *)(this + 0xa4c) = param_1;
  recreate_editor(this);
  return;
}



/* BoneMapper::_value_changed(String const&, Variant const&, String const&, bool) */

void BoneMapper::_value_changed(String *param_1,Variant *param_2,String *param_3,bool param_4)

{
  long in_FS_OFFSET;
  long local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  StringName::StringName((StringName *)&local_28,(String *)param_2,false);
  Object::set((StringName *)param_1,(Variant *)&local_28,(bool *)param_3);
  if ((StringName::configured != '\0') && (local_28 != 0)) {
    StringName::unref();
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    recreate_editor((BoneMapper *)param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* BoneMapper::clear_items() */

void __thiscall BoneMapper::clear_items(BoneMapper *this)

{
  long lVar1;
  long *plVar2;
  code *pcVar3;
  Object *pOVar4;
  ulong uVar5;
  char cVar6;
  int iVar7;
  long lVar8;
  long in_FS_OFFSET;
  long local_60;
  BoneMapper local_58 [24];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar1 = *(long *)(this + 0xa30);
  if ((lVar1 == 0) || (iVar7 = (int)*(undefined8 *)(lVar1 + -8), iVar7 < 1)) {
LAB_00106ed8:
    if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    CowData<BoneMapperItem*>::resize<false>((CowData<BoneMapperItem*> *)(this + 0xa30),0);
    return;
  }
  uVar5 = 0;
  while (lVar1 != 0) {
    lVar8 = *(long *)(lVar1 + -8);
    if (lVar8 <= (long)uVar5) goto LAB_00106e93;
    plVar2 = *(long **)(lVar1 + uVar5 * 8);
    pcVar3 = *(code **)(*plVar2 + 0x110);
    create_custom_callable_function_pointer<BoneMapper,StringName_const&>
              (local_58,(char *)this,(_func_void_StringName_ptr *)"&BoneMapper::_pick_bone");
    StringName::StringName((StringName *)&local_60,"pick",false);
    (*pcVar3)(plVar2,(StringName *)&local_60,local_58);
    if ((StringName::configured != '\0') && (local_60 != 0)) {
      StringName::unref();
    }
    Callable::~Callable((Callable *)local_58);
    if (*(long *)(this + 0xa30) == 0) break;
    lVar8 = *(long *)(*(long *)(this + 0xa30) + -8);
    if (lVar8 <= (long)uVar5) goto LAB_00106e93;
    Node::remove_child(*(Node **)(this + 0xa40));
    lVar1 = *(long *)(this + 0xa30);
    if (lVar1 == 0) break;
    lVar8 = *(long *)(lVar1 + -8);
    if (lVar8 <= (long)uVar5) goto LAB_00106e93;
    pOVar4 = *(Object **)(lVar1 + uVar5 * 8);
    cVar6 = predelete_handler(pOVar4);
    if (cVar6 != '\0') {
      (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
      Memory::free_static(pOVar4,false);
    }
    if (uVar5 == iVar7 - 1) goto LAB_00106ed8;
    uVar5 = uVar5 + 1;
    lVar1 = *(long *)(this + 0xa30);
  }
  lVar8 = 0;
LAB_00106e93:
  _err_print_index_error
            ("get","./core/templates/cowdata.h",0xdb,uVar5,lVar8,"p_index","size()","",false,true);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar3 = (code *)invalidInstructionException();
  (*pcVar3)();
}



/* BoneMapper::recreate_items() */

void __thiscall BoneMapper::recreate_items(BoneMapper *this)

{
  long *plVar1;
  code *pcVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  BoneMapperItem *this_00;
  long lVar6;
  long lVar7;
  long lVar8;
  long in_FS_OFFSET;
  Object *local_70;
  long local_68;
  long local_60;
  BoneMapper local_58 [24];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  clear_items(this);
  BoneMap::get_profile();
  if (local_70 != (Object *)0x0) {
    iVar4 = SkeletonProfile::get_bone_size();
    if (0 < iVar4) {
      lVar7 = 0;
      do {
        SkeletonProfile::get_bone_name((int)(StringName *)&local_68);
        this_00 = (BoneMapperItem *)operator_new(0xa38,"");
        BoneMapperItem::BoneMapperItem(this_00,(Ref *)(this + 0xa18),(StringName *)&local_68);
        postinitialize_handler((Object *)this_00);
        if (*(long *)(this + 0xa30) == 0) {
          lVar6 = 1;
        }
        else {
          lVar6 = *(long *)(*(long *)(this + 0xa30) + -8) + 1;
        }
        iVar5 = CowData<BoneMapperItem*>::resize<false>
                          ((CowData<BoneMapperItem*> *)(this + 0xa30),lVar6);
        if (iVar5 == 0) {
          if (*(long *)(this + 0xa30) == 0) {
            lVar8 = -1;
            lVar6 = 0;
          }
          else {
            lVar6 = *(long *)(*(long *)(this + 0xa30) + -8);
            lVar8 = lVar6 + -1;
            if (-1 < lVar8) {
              CowData<BoneMapperItem*>::_copy_on_write((CowData<BoneMapperItem*> *)(this + 0xa30));
              lVar6 = *(long *)(this + 0xa30);
              *(BoneMapperItem **)(lVar6 + lVar8 * 8) = this_00;
              goto LAB_0010702e;
            }
          }
          _err_print_index_error
                    ("set","./core/templates/cowdata.h",0xcf,lVar8,lVar6,"p_index","size()","",false
                     ,false);
          lVar6 = *(long *)(this + 0xa30);
        }
        else {
          _err_print_error("push_back","./core/templates/vector.h",0x142,
                           "Condition \"err\" is true. Returning: true",0,0);
          lVar6 = *(long *)(this + 0xa30);
        }
LAB_0010702e:
        if (lVar6 == 0) {
LAB_00107178:
          lVar8 = 0;
LAB_0010717b:
          _err_print_index_error
                    ("get","./core/templates/cowdata.h",0xdb,lVar7,lVar8,"p_index","size()","",false
                     ,true);
          _err_flush_stdout();
                    /* WARNING: Does not return */
          pcVar2 = (code *)invalidInstructionException();
          (*pcVar2)();
        }
        lVar8 = *(long *)(lVar6 + -8);
        if (lVar8 <= lVar7) goto LAB_0010717b;
        plVar1 = *(long **)(lVar6 + lVar7 * 8);
        pcVar2 = *(code **)(*plVar1 + 0x108);
        create_custom_callable_function_pointer<BoneMapper,StringName_const&>
                  (local_58,(char *)this,(_func_void_StringName_ptr *)"&BoneMapper::_pick_bone");
        StringName::StringName((StringName *)&local_60,"pick",false);
        (*pcVar2)(plVar1,(StringName *)&local_60,local_58,1);
        if ((StringName::configured != '\0') && (local_60 != 0)) {
          StringName::unref();
        }
        Callable::~Callable((Callable *)local_58);
        lVar6 = *(long *)(this + 0xa30);
        if (lVar6 == 0) goto LAB_00107178;
        lVar8 = *(long *)(lVar6 + -8);
        if (lVar8 <= lVar7) goto LAB_0010717b;
        Node::add_child(*(undefined8 *)(this + 0xa40),*(undefined8 *)(lVar6 + lVar7 * 8),0,0);
        if ((StringName::configured != '\0') && (local_68 != 0)) {
          StringName::unref();
        }
        lVar7 = lVar7 + 1;
      } while (iVar4 != lVar7);
    }
  }
  update_group_idx(this);
  recreate_editor(this);
  if (local_70 != (Object *)0x0) {
    cVar3 = RefCounted::unreference();
    if (cVar3 != '\0') {
      cVar3 = predelete_handler(local_70);
      if (cVar3 != '\0') {
        (**(code **)(*(long *)local_70 + 0x140))(local_70);
        Memory::free_static(local_70,false);
      }
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BoneMapper::create_editor() */

void __thiscall BoneMapper::create_editor(BoneMapper *this)

{
  undefined8 uVar1;
  long lVar2;
  code *pcVar3;
  String *pSVar4;
  Object *pOVar5;
  long *plVar6;
  Ref *pRVar7;
  Vector2 *pVVar8;
  undefined4 uVar9;
  char cVar10;
  int iVar11;
  AcceptDialog *this_00;
  EditorPropertyResource *this_01;
  HSeparator *this_02;
  BoxContainer *pBVar12;
  EditorPropertyEnum *this_03;
  Button *this_04;
  Container *this_05;
  Control *this_06;
  TextureRect *this_07;
  long in_FS_OFFSET;
  float fVar13;
  undefined8 local_78;
  long local_70;
  Object *local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  this_00 = (AcceptDialog *)operator_new(0xdc0,"");
  uVar1 = *(undefined8 *)(this + 0xa10);
  AcceptDialog::AcceptDialog(this_00);
  *(undefined8 *)(this_00 + 0xdb0) = uVar1;
  *(undefined ***)this_00 = &PTR__initialize_classv_001233b0;
  *(undefined8 *)(this_00 + 0xdb8) = 0;
  postinitialize_handler((Object *)this_00);
  lVar2 = *(long *)this_00;
  *(AcceptDialog **)(this + 0xa80) = this_00;
  pcVar3 = *(code **)(lVar2 + 0x108);
  create_custom_callable_function_pointer<BoneMapper>
            ((BoneMapper *)&local_68,(char *)this,
             (_func_void *)"&BoneMapper::_apply_picker_selection");
  (*pcVar3)(this_00,SceneStringNames::singleton + 0x268,(BoneMapper *)&local_68,0);
  Callable::~Callable((Callable *)&local_68);
  Node::add_child(this,*(undefined8 *)(this + 0xa80),0,1);
  this_01 = (EditorPropertyResource *)operator_new(0xb80,"");
  EditorPropertyResource::EditorPropertyResource(this_01);
  postinitialize_handler((Object *)this_01);
  *(EditorPropertyResource **)(this + 0xa20) = this_01;
  local_70 = 0;
  local_68 = (Object *)0x110a11;
  local_60 = 0xf;
  String::parse_latin1((StrRange *)&local_70);
  local_68 = (Object *)0x110a21;
  local_78 = 0;
  local_60 = 7;
  String::parse_latin1((StrRange *)&local_78);
  EditorPropertyResource::setup((Object *)this_01,*(String **)(this + 0xa18),(String *)&local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  pSVar4 = *(String **)(this + 0xa20);
  local_70 = 0;
  local_68 = (Object *)0x110a29;
  local_60 = 7;
  String::parse_latin1((StrRange *)&local_70);
  EditorProperty::set_label(pSVar4);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  EditorProperty::set_selectable(SUB81(*(undefined8 *)(this + 0xa20),0));
  pOVar5 = *(Object **)(this + 0xa20);
  StringName::StringName((StringName *)&local_68,"profile",false);
  EditorProperty::set_object_and_property(pOVar5,*(StringName **)(this + 0xa18));
  if ((StringName::configured != '\0') && (local_68 != (Object *)0x0)) {
    StringName::unref();
  }
  (**(code **)(**(long **)(this + 0xa20) + 0x380))();
  plVar6 = *(long **)(this + 0xa20);
  pcVar3 = *(code **)(*plVar6 + 0x108);
  create_custom_callable_function_pointer<BoneMapper,String_const&,Variant_const&,String_const&,bool>
            ((BoneMapper *)&local_68,(char *)this,
             (_func_void_String_ptr_Variant_ptr_String_ptr_bool *)"&BoneMapper::_profile_changed");
  StringName::StringName((StringName *)&local_70,"property_changed",false);
  (*pcVar3)(plVar6,(StrRange *)&local_70,(BoneMapper *)&local_68,0);
  if ((StringName::configured != '\0') && (local_70 != 0)) {
    StringName::unref();
  }
  Callable::~Callable((Callable *)&local_68);
  Node::add_child(this,*(undefined8 *)(this + 0xa20),0,0);
  this_02 = (HSeparator *)operator_new(0x9e0,"");
  HSeparator::HSeparator(this_02);
  postinitialize_handler((Object *)this_02);
  Node::add_child(this,this_02,0,0);
  pBVar12 = (BoxContainer *)operator_new(0xa10,"");
  BoxContainer::BoxContainer(pBVar12,false);
  pBVar12[0xa0c] = (BoxContainer)0x1;
  *(undefined ***)pBVar12 = &PTR__initialize_classv_00121fb0;
  postinitialize_handler((Object *)pBVar12);
  Node::add_child(this,pBVar12,0,0);
  this_03 = (EditorPropertyEnum *)operator_new(0xb60,"");
  EditorPropertyEnum::EditorPropertyEnum(this_03);
  postinitialize_handler((Object *)this_03);
  local_70 = 0;
  *(EditorPropertyEnum **)(this + 0xa58) = this_03;
  local_68 = (Object *)0x110a4f;
  local_60 = 5;
  String::parse_latin1((StrRange *)&local_70);
  EditorProperty::set_label((String *)this_03);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  EditorProperty::set_selectable(SUB81(*(undefined8 *)(this + 0xa58),0));
  Control::set_h_size_flags(*(undefined8 *)(this + 0xa58),3);
  pOVar5 = *(Object **)(this + 0xa58);
  StringName::StringName((StringName *)&local_68,"current_group_idx",false);
  EditorProperty::set_object_and_property(pOVar5,(StringName *)this);
  if ((StringName::configured != '\0') && (local_68 != (Object *)0x0)) {
    StringName::unref();
  }
  (**(code **)(**(long **)(this + 0xa58) + 0x380))();
  plVar6 = *(long **)(this + 0xa58);
  pcVar3 = *(code **)(*plVar6 + 0x108);
  create_custom_callable_function_pointer<BoneMapper,String_const&,Variant_const&,String_const&,bool>
            ((BoneMapper *)&local_68,(char *)this,
             (_func_void_String_ptr_Variant_ptr_String_ptr_bool *)"&BoneMapper::_value_changed");
  StringName::StringName((StringName *)&local_70,"property_changed",false);
  (*pcVar3)(plVar6,(StrRange *)&local_70,(BoneMapper *)&local_68,0);
  if ((StringName::configured != '\0') && (local_70 != 0)) {
    StringName::unref();
  }
  Callable::~Callable((Callable *)&local_68);
  Node::add_child(pBVar12,*(undefined8 *)(this + 0xa58),0,0);
  this_04 = (Button *)operator_new(0xc10,"");
  local_68 = (Object *)0x0;
  Button::Button(this_04,(String *)&local_68);
  postinitialize_handler((Object *)this_04);
  *(Button **)(this + 0xa38) = this_04;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  pRVar7 = *(Ref **)(this + 0xa38);
  if (create_editor()::{lambda()#1}::operator()()::sname == '\0') {
    iVar11 = __cxa_guard_acquire(&create_editor()::{lambda()#1}::operator()()::sname);
    if (iVar11 != 0) {
      _scs_create((char *)&create_editor()::{lambda()#1}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,&create_editor()::{lambda()#1}::operator()()::sname,
                   &__dso_handle);
      __cxa_guard_release(&create_editor()::{lambda()#1}::operator()()::sname);
    }
  }
  Control::get_editor_theme_icon((StringName *)&local_68);
  Button::set_button_icon(pRVar7);
  if (local_68 != (Object *)0x0) {
    cVar10 = RefCounted::unreference();
    pOVar5 = local_68;
    if (cVar10 != '\0') {
      cVar10 = predelete_handler(local_68);
      if (cVar10 != '\0') {
        (**(code **)(*(long *)pOVar5 + 0x140))();
        Memory::free_static(pOVar5,false);
      }
    }
  }
  pSVar4 = *(String **)(this + 0xa38);
  local_70 = 0;
  local_68 = (Object *)&_LC24;
  local_60 = 0;
  String::parse_latin1((StrRange *)&local_70);
  local_68 = (Object *)0x114528;
  local_78 = 0;
  local_60 = 0x20;
  String::parse_latin1((StrRange *)&local_78);
  TTR((String *)&local_68,(String *)&local_78);
  Control::set_tooltip_text(pSVar4);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  plVar6 = *(long **)(this + 0xa38);
  pcVar3 = *(code **)(*plVar6 + 0x108);
  create_custom_callable_function_pointer<BoneMapper>
            ((BoneMapper *)&local_68,(char *)this,
             (_func_void *)"&BoneMapper::_clear_mapping_current_group");
  (*pcVar3)(plVar6,SceneStringNames::singleton + 0x238,(BoneMapper *)&local_68,0);
  Callable::~Callable((Callable *)&local_68);
  Node::add_child(pBVar12,*(undefined8 *)(this + 0xa38),0,0);
  this_05 = (Container *)operator_new(0xa10,"");
  Container::Container(this_05);
  *(code **)this_05 = Control::set_custom_minimum_size;
  *(undefined8 *)(this_05 + 0xa00) = 0x23f800000;
  *(undefined8 *)(this_05 + 0xa08) = 0x100000001;
  postinitialize_handler((Object *)this_05);
  *(Container **)(this + 0xa50) = this_05;
  AspectRatioContainer::set_stretch_mode(this_05,2);
  pVVar8 = *(Vector2 **)(this + 0xa50);
  fVar13 = (float)EditorScale::get_scale();
  local_58 = CONCAT44(fVar13 * _LC165._4_4_,fVar13 * (float)_LC165);
  Control::set_custom_minimum_size(pVVar8);
  Control::set_h_size_flags(*(undefined8 *)(this + 0xa50),1);
  Node::add_child(this,*(undefined8 *)(this + 0xa50),0,0);
  this_06 = (Control *)operator_new(0x9d8,"");
  Control::Control(this_06);
  uVar9 = _LC74;
  *(undefined ***)this_06 = &PTR__initialize_classv_001226a0;
  *(undefined4 *)(this_06 + 0x9c8) = uVar9;
  *(undefined4 *)(this_06 + 0x9cc) = uVar9;
  *(undefined4 *)(this_06 + 0x9d0) = uVar9;
  *(undefined4 *)(this_06 + 0x9d4) = uVar9;
  postinitialize_handler((Object *)this_06);
  *(Control **)(this + 0xa60) = this_06;
  local_58 = __LC166;
  uStack_50 = _UNK_00124858;
  ColorRect::set_color(this_06);
  Control::set_h_size_flags(*(undefined8 *)(this + 0xa60),1);
  Control::set_v_size_flags(*(undefined8 *)(this + 0xa60),1);
  Node::add_child(*(undefined8 *)(this + 0xa50),*(undefined8 *)(this + 0xa60),0,0);
  this_07 = (TextureRect *)operator_new(0x9e0,"");
  TextureRect::TextureRect(this_07);
  postinitialize_handler((Object *)this_07);
  *(TextureRect **)(this + 0xa68) = this_07;
  TextureRect::set_stretch_mode(this_07,5);
  TextureRect::set_expand_mode(*(undefined8 *)(this + 0xa68),1);
  Control::set_h_size_flags(*(undefined8 *)(this + 0xa68),1);
  Control::set_v_size_flags(*(undefined8 *)(this + 0xa68),1);
  Node::add_child(*(undefined8 *)(this + 0xa50),*(undefined8 *)(this + 0xa68),0,0);
  pBVar12 = (BoxContainer *)operator_new(0xa10,"");
  BoxContainer::BoxContainer(pBVar12,true);
  pBVar12[0xa0c] = (BoxContainer)0x1;
  *(undefined ***)pBVar12 = &PTR__initialize_classv_00122328;
  postinitialize_handler((Object *)pBVar12);
  *(BoxContainer **)(this + 0xa40) = pBVar12;
  Node::add_child(this,pBVar12,0,0);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    recreate_items(this);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* BoneMapper::_clear_mapping_current_group() */

void __thiscall BoneMapper::_clear_mapping_current_group(BoneMapper *this)

{
  StringName *pSVar1;
  long lVar2;
  long lVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  long in_FS_OFFSET;
  Object *local_58;
  long local_50;
  long local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((*(long *)(this + 0xa18) != 0) && (BoneMap::get_profile(), local_58 != (Object *)0x0)) {
    iVar5 = SkeletonProfile::get_group_size();
    if (0 < iVar5) {
      iVar6 = 0;
      iVar5 = SkeletonProfile::get_bone_size();
      if (0 < iVar5) {
        do {
          SkeletonProfile::get_group_name((int)&local_48);
          iVar7 = (int)(StringName *)&local_50;
          SkeletonProfile::get_group(iVar7);
          lVar3 = local_48;
          lVar2 = local_50;
          if (local_50 == 0) {
LAB_00107ca0:
            if ((StringName::configured != '\0') && (local_48 != 0)) {
              StringName::unref();
            }
          }
          else if (StringName::configured != '\0') {
            StringName::unref();
            goto LAB_00107ca0;
          }
          if (lVar2 == lVar3) {
            pSVar1 = *(StringName **)(this + 0xa18);
            local_48 = 0;
            SkeletonProfile::get_bone_name(iVar7);
            BoneMap::_set_skeleton_bone_name(pSVar1,(StringName *)&local_50);
            if ((StringName::configured != '\0') &&
               (((local_50 == 0 || (StringName::unref(), StringName::configured != '\0')) &&
                (local_48 != 0)))) {
              StringName::unref();
            }
          }
          iVar6 = iVar6 + 1;
        } while (iVar5 != iVar6);
      }
      recreate_items(this);
    }
    if (((local_58 != (Object *)0x0) && (cVar4 = RefCounted::unreference(), cVar4 != '\0')) &&
       (cVar4 = predelete_handler(local_58), cVar4 != '\0')) {
      (**(code **)(*(long *)local_58 + 0x140))(local_58);
      Memory::free_static(local_58,false);
    }
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* BoneMapper::_notification(int) */

void __thiscall BoneMapper::_notification(BoneMapper *this,int param_1)

{
  long *plVar1;
  code *pcVar2;
  char cVar3;
  long in_FS_OFFSET;
  long local_60;
  BoneMapper local_58 [24];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == 10) {
    create_editor(this);
    plVar1 = *(long **)(this + 0xa18);
    pcVar2 = *(code **)(*plVar1 + 0x108);
    create_custom_callable_function_pointer<BoneMapper>
              (local_58,(char *)this,(_func_void *)"&BoneMapper::_update_state");
    StringName::StringName((StringName *)&local_60,"bone_map_updated",false);
    (*pcVar2)(plVar1,(StringName *)&local_60,local_58,0);
    if ((StringName::configured != '\0') && (local_60 != 0)) {
      StringName::unref();
    }
    Callable::~Callable((Callable *)local_58);
    plVar1 = *(long **)(this + 0xa18);
    pcVar2 = *(code **)(*plVar1 + 0x108);
    create_custom_callable_function_pointer<BoneMapper>
              (local_58,(char *)this,(_func_void *)"&BoneMapper::recreate_items");
    StringName::StringName((StringName *)&local_60,"profile_updated",false);
    (*pcVar2)(plVar1,(StringName *)&local_60,local_58,0);
  }
  else {
    if (param_1 != 0xb) goto LAB_00107db3;
    clear_items(this);
    plVar1 = *(long **)(this + 0xa18);
    if (plVar1 == (long *)0x0) goto LAB_00107db3;
    pcVar2 = *(code **)(*plVar1 + 0x118);
    create_custom_callable_function_pointer<BoneMapper>
              (local_58,(char *)this,(_func_void *)"&BoneMapper::_update_state");
    StringName::StringName((StringName *)&local_60,"bone_map_updated",false);
    cVar3 = (*pcVar2)(plVar1,(StringName *)&local_60,local_58);
    if ((StringName::configured != '\0') && (local_60 != 0)) {
      StringName::unref();
    }
    Callable::~Callable((Callable *)local_58);
    if (cVar3 != '\0') {
      plVar1 = *(long **)(this + 0xa18);
      pcVar2 = *(code **)(*plVar1 + 0x110);
      create_custom_callable_function_pointer<BoneMapper>
                (local_58,(char *)this,(_func_void *)"&BoneMapper::_update_state");
      StringName::StringName((StringName *)&local_60,"bone_map_updated",false);
      (*pcVar2)(plVar1,(StringName *)&local_60,local_58);
      if ((StringName::configured != '\0') && (local_60 != 0)) {
        StringName::unref();
      }
      Callable::~Callable((Callable *)local_58);
    }
    plVar1 = *(long **)(this + 0xa18);
    pcVar2 = *(code **)(*plVar1 + 0x118);
    create_custom_callable_function_pointer<BoneMapper>
              (local_58,(char *)this,(_func_void *)"&BoneMapper::recreate_items");
    StringName::StringName((StringName *)&local_60,"profile_updated",false);
    cVar3 = (*pcVar2)(plVar1,(StringName *)&local_60,local_58);
    if ((StringName::configured != '\0') && (local_60 != 0)) {
      StringName::unref();
    }
    Callable::~Callable((Callable *)local_58);
    if (cVar3 == '\0') goto LAB_00107db3;
    plVar1 = *(long **)(this + 0xa18);
    pcVar2 = *(code **)(*plVar1 + 0x110);
    create_custom_callable_function_pointer<BoneMapper>
              (local_58,(char *)this,(_func_void *)"&BoneMapper::recreate_items");
    StringName::StringName((StringName *)&local_60,"profile_updated",false);
    (*pcVar2)(plVar1,(StringName *)&local_60,local_58);
  }
  if ((StringName::configured == '\0') || (local_60 == 0)) {
    Callable::~Callable((Callable *)local_58);
  }
  else {
    StringName::unref();
    Callable::~Callable((Callable *)local_58);
  }
LAB_00107db3:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* BoneMapper::is_match_with_bone_name(String const&, String const&) */

ulong __thiscall
BoneMapper::is_match_with_bone_name(BoneMapper *this,String *param_1,String *param_2)

{
  char cVar1;
  long in_FS_OFFSET;
  bool bVar2;
  CowData<char32_t> aCStack_1d8 [8];
  Object *local_1d0;
  RegEx local_1c8 [408];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  RegEx::RegEx(local_1c8,param_2);
  String::to_lower();
  RegEx::search((String *)&local_1d0,(int)local_1c8,(int)aCStack_1d8);
  bVar2 = local_1d0 != (Object *)0x0;
  if (bVar2) {
    cVar1 = RefCounted::unreference();
    if (cVar1 != '\0') {
      cVar1 = predelete_handler(local_1d0);
      if (cVar1 != '\0') {
        (**(code **)(*(long *)local_1d0 + 0x140))(local_1d0);
        Memory::free_static(local_1d0,false);
      }
    }
  }
  CowData<char32_t>::_unref(aCStack_1d8);
  RegEx::~RegEx(local_1c8);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return CONCAT71((int7)((ulong)param_1 >> 8),bVar2) & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* BoneMapper::guess_bone_segregation(String const&) */

undefined8 BoneMapper::guess_bone_segregation(String *param_1)

{
  code *pcVar1;
  Object *pOVar2;
  char cVar3;
  CowData<char32_t> *pCVar4;
  CowData<char32_t> *pCVar5;
  int iVar6;
  undefined8 uVar7;
  long lVar8;
  long in_FS_OFFSET;
  CowData<char32_t> local_3d0 [8];
  long local_3c8;
  long local_3c0;
  long local_3b8;
  long local_3b0;
  undefined4 local_3a8;
  undefined4 uStack_3a4;
  CowData<char32_t> *local_3a0;
  undefined8 local_398;
  CowData<char32_t> *local_390;
  Object *local_388;
  undefined8 local_380;
  RegEx local_378 [416];
  RegEx local_1d8 [408];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  String::to_snake_case();
  local_388 = (Object *)0x110aca;
  local_3c8 = 0;
  local_380 = 0x11;
  String::parse_latin1((StrRange *)&local_3c8);
  local_3a8 = 0;
  uStack_3a4 = 1;
  pCVar4 = (CowData<char32_t> *)Memory::realloc_static((void *)0x0,8,false);
  local_3a0 = pCVar4;
  if (pCVar4 != (CowData<char32_t> *)0x0) {
    *(undefined8 *)pCVar4 = 0;
    if (local_3c8 != 0) {
      CowData<char32_t>::_ref(pCVar4,(CowData *)&local_3c8);
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_3c8);
    local_388 = (Object *)0x114580;
    local_3c0 = 0;
    local_380 = 0x20;
    String::parse_latin1((StrRange *)&local_3c0);
    uStack_3a4 = 2;
    pCVar4 = (CowData<char32_t> *)Memory::realloc_static(pCVar4,0x10,false);
    local_3a0 = pCVar4;
    if (pCVar4 != (CowData<char32_t> *)0x0) {
      local_3a8 = 2;
      *(undefined8 *)(pCVar4 + 8) = 0;
      if (local_3c0 != 0) {
        CowData<char32_t>::_ref(pCVar4 + 8,(CowData *)&local_3c0);
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_3c0);
      local_388 = (Object *)0x110adc;
      local_3b8 = 0;
      local_380 = 0x12;
      String::parse_latin1((StrRange *)&local_3b8);
      local_398 = 0x100000000;
      pCVar5 = (CowData<char32_t> *)Memory::realloc_static((void *)0x0,8,false);
      local_390 = pCVar5;
      if (pCVar5 != (CowData<char32_t> *)0x0) {
        *(undefined8 *)pCVar5 = 0;
        if (local_3b8 != 0) {
          CowData<char32_t>::_ref(pCVar5,(CowData *)&local_3b8);
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_3b8);
        local_388 = (Object *)0x1145a8;
        local_3b0 = 0;
        local_380 = 0x20;
        String::parse_latin1((StrRange *)&local_3b0);
        local_398 = CONCAT44(2,(undefined4)local_398);
        pCVar5 = (CowData<char32_t> *)Memory::realloc_static(pCVar5,0x10,false);
        local_390 = pCVar5;
        if (pCVar5 != (CowData<char32_t> *)0x0) {
          local_398 = CONCAT44(local_398._4_4_,2);
          *(undefined8 *)(pCVar5 + 8) = 0;
          if (local_3b0 != 0) {
            CowData<char32_t>::_ref(pCVar5 + 8,(CowData *)&local_3b0);
          }
          lVar8 = 0;
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_3b0);
          do {
            RegEx::RegEx(local_378,(String *)(pCVar4 + lVar8));
            iVar6 = (int)local_3d0;
            RegEx::search((String *)&local_388,(int)local_378,iVar6);
            if (local_388 != (Object *)0x0) {
              cVar3 = RefCounted::unreference();
              pOVar2 = local_388;
              if (cVar3 != '\0') {
                cVar3 = predelete_handler(local_388);
                if (cVar3 != '\0') {
                  (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
                  Memory::free_static(pOVar2,false);
                }
              }
              uVar7 = 1;
LAB_0010844d:
              RegEx::~RegEx(local_378);
              goto LAB_001084fa;
            }
            RegEx::RegEx(local_1d8,(String *)(pCVar5 + lVar8));
            RegEx::search((String *)&local_388,(int)local_1d8,iVar6);
            if (local_388 != (Object *)0x0) {
              cVar3 = RefCounted::unreference();
              pOVar2 = local_388;
              if (cVar3 != '\0') {
                cVar3 = predelete_handler(local_388);
                if (cVar3 != '\0') {
                  (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
                  Memory::free_static(pOVar2,false);
                }
              }
              uVar7 = 2;
              RegEx::~RegEx(local_1d8);
              goto LAB_0010844d;
            }
            lVar8 = lVar8 + 8;
            RegEx::~RegEx(local_1d8);
            RegEx::~RegEx(local_378);
          } while (lVar8 != 0x10);
          uVar7 = 0;
LAB_001084fa:
          LocalVector<String,unsigned_int,false,false>::resize
                    ((LocalVector<String,unsigned_int,false,false> *)&local_398,0);
          if (local_390 != (CowData<char32_t> *)0x0) {
            Memory::free_static(local_390,false);
          }
          LocalVector<String,unsigned_int,false,false>::resize
                    ((LocalVector<String,unsigned_int,false,false> *)&local_3a8,0);
          if (local_3a0 != (CowData<char32_t> *)0x0) {
            Memory::free_static(local_3a0,false);
          }
          CowData<char32_t>::_unref(local_3d0);
          if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
            return uVar7;
          }
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
      }
    }
  }
  _err_print_error("push_back","./core/templates/local_vector.h",0x41,
                   "FATAL: Condition \"!data\" is true.","Out of memory",0,0);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* BoneMapper::search_bone_by_name(Skeleton3D*, Vector<String> const&, BoneMapper::BoneSegregation,
   int, int, int) */

undefined4 __thiscall
BoneMapper::search_bone_by_name
          (BoneMapper *this,undefined8 param_2_00,long param_2,int param_4,int param_5,int param_6,
          int param_7)

{
  CowData *pCVar1;
  code *pcVar2;
  char cVar3;
  undefined4 uVar4;
  ulong uVar5;
  int iVar6;
  CowData *pCVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  long in_FS_OFFSET;
  long local_b0;
  long local_a8;
  long local_a0;
  long local_98;
  long local_90;
  undefined8 local_88;
  CowData *local_80;
  Vector<int> local_78 [8];
  long local_70;
  undefined1 local_68 [8];
  long local_60;
  undefined *local_58;
  long local_50 [2];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_88 = 0;
  local_58 = &_LC24;
  local_80 = (CowData *)0x0;
  local_b0 = 0;
  local_50[0] = 0;
  String::parse_latin1((StrRange *)&local_b0);
  lVar10 = *(long *)(param_2 + 8);
  if (lVar10 == 0) {
    cVar3 = String::operator==((String *)&local_b0,"");
    pCVar7 = (CowData *)0x0;
    if (cVar3 != '\0') {
      uVar4 = 0xffffffff;
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
      goto LAB_0010885b;
    }
LAB_00108816:
    uVar4 = Skeleton3D::find_bone(*(String **)(this + 0xa10));
  }
  else {
    lVar12 = 0;
    do {
      if (*(long *)(lVar10 + -8) <= lVar12) break;
      if (param_6 == -1) {
        if (param_5 == -1) {
          Skeleton3D::get_parentless_bones();
        }
        else {
          Skeleton3D::get_bone_children((int)local_78);
        }
        pCVar7 = local_80;
        while ((local_80 = pCVar7, local_70 != 0 && (0 < *(long *)(local_70 + -8)))) {
          lVar10 = 0;
          Vector<int>::remove_at(local_78,0);
          Skeleton3D::get_bone_children((int)local_68);
          if (local_60 == 0) {
LAB_00108783:
            if (param_7 < 1) goto LAB_001088a4;
LAB_00108789:
            CowData<int>::_unref((CowData<int> *)&local_60);
            pCVar7 = local_80;
          }
          else {
            do {
              if (*(long *)(local_60 + -8) <= lVar10) {
                if (param_7 == 0) {
                  if (*(long *)(local_60 + -8) < 1) goto LAB_001088a4;
                }
                else if ((param_7 < 1) || ((long)param_7 <= *(long *)(local_60 + -8)))
                goto LAB_001088a4;
                goto LAB_00108789;
              }
              lVar9 = lVar10 * 4;
              lVar10 = lVar10 + 1;
              Vector<int>::push_back(local_78,*(int *)(local_60 + lVar9));
            } while (local_60 != 0);
            if (param_7 != 0) goto LAB_00108783;
LAB_001088a4:
            Skeleton3D::get_bone_name((int)(CowData<char32_t> *)&local_a8);
            lVar10 = *(long *)(param_2 + 8);
            if (lVar10 == 0) {
LAB_00108b08:
              lVar9 = 0;
LAB_00108b0b:
              _err_print_index_error
                        ("get","./core/templates/cowdata.h",0xdb,lVar12,lVar9,"p_index","size()","",
                         false,true);
              _err_flush_stdout();
                    /* WARNING: Does not return */
              pcVar2 = (code *)invalidInstructionException();
              (*pcVar2)();
            }
            lVar9 = *(long *)(lVar10 + -8);
            if (lVar9 <= lVar12) goto LAB_00108b0b;
            cVar3 = is_match_with_bone_name
                              (this,(String *)&local_a8,(String *)(lVar10 + lVar12 * 8));
            if ((cVar3 != '\0') &&
               (iVar8 = guess_bone_segregation((String *)this), iVar8 == param_4)) {
              local_a0 = 0;
              if (local_a8 != 0) {
                CowData<char32_t>::_ref((CowData<char32_t> *)&local_a0,(CowData *)&local_a8);
              }
              iVar8 = (int)local_88;
              uVar11 = local_88 & 0xffffffff;
              if ((int)local_88 == local_88._4_4_) {
                uVar5 = (ulong)(uint)((int)local_88 * 2);
                if ((int)local_88 * 2 == 0) {
                  uVar5 = 1;
                }
                local_88 = CONCAT44((int)uVar5,(int)local_88);
                local_80 = (CowData *)Memory::realloc_static(local_80,uVar5 * 8,false);
                if (local_80 == (CowData *)0x0) {
LAB_00108d31:
                  _err_print_error("push_back","./core/templates/local_vector.h",0x41,
                                   "FATAL: Condition \"!data\" is true.","Out of memory",0,0);
                  _err_flush_stdout();
                    /* WARNING: Does not return */
                  pcVar2 = (code *)invalidInstructionException();
                  (*pcVar2)();
                }
              }
              local_88 = CONCAT44(local_88._4_4_,iVar8 + 1);
              *(undefined8 *)(local_80 + uVar11 * 8) = 0;
              if (local_a0 != 0) {
                CowData<char32_t>::_ref
                          ((CowData<char32_t> *)(local_80 + uVar11 * 8),(CowData *)&local_a0);
              }
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
            CowData<int>::_unref((CowData<int> *)&local_60);
            pCVar7 = local_80;
          }
        }
        uVar11 = local_88 & 0xffffffff;
        if ((int)local_88 != 0) {
          lVar10 = *(long *)pCVar7;
          if (local_b0 != *(long *)pCVar7) {
            CowData<char32_t>::_ref((CowData<char32_t> *)&local_b0,pCVar7);
            lVar10 = local_b0;
          }
          pCVar1 = pCVar7 + uVar11 * 8;
          do {
            lVar9 = *(long *)pCVar7;
            if (lVar9 == 0) {
              if (((lVar10 != 0) && (iVar8 = (int)*(undefined8 *)(lVar10 + -8), iVar8 != 0)) &&
                 (1 < iVar8)) {
LAB_00108cb2:
                CowData<char32_t>::_ref((CowData<char32_t> *)&local_b0,pCVar7);
              }
            }
            else {
              iVar8 = (int)*(undefined8 *)(lVar9 + -8);
              if (iVar8 == 0) {
                if (lVar10 != 0) {
                  iVar6 = (int)*(undefined8 *)(lVar10 + -8);
                  iVar8 = 0;
                  if (iVar6 != 0) {
LAB_00108ca6:
                    iVar6 = iVar6 + -1;
                    goto LAB_00108ca9;
                  }
                }
              }
              else {
                iVar8 = iVar8 + -1;
                if (lVar10 == 0) {
                  if (iVar8 < 0) goto LAB_00108cb2;
                }
                else {
                  iVar6 = (int)*(undefined8 *)(lVar10 + -8);
                  if (iVar6 != 0) goto LAB_00108ca6;
LAB_00108ca9:
                  if ((iVar8 < iVar6) && (lVar10 != lVar9)) goto LAB_00108cb2;
                }
              }
            }
            pCVar7 = pCVar7 + 8;
            lVar10 = local_b0;
          } while (pCVar1 != pCVar7);
        }
        CowData<int>::_unref((CowData<int> *)&local_70);
      }
      else {
        iVar8 = Skeleton3D::get_bone_parent((int)*(undefined8 *)(this + 0xa10));
        if ((iVar8 != param_5) && (-1 < iVar8)) {
          do {
            Skeleton3D::get_bone_children((int)&local_58);
            if (param_7 == 0) {
              if ((local_50[0] == 0) || (*(long *)(local_50[0] + -8) < 1)) goto LAB_00108980;
LAB_00108a4d:
              CowData<int>::_unref((CowData<int> *)local_50);
            }
            else {
              if ((0 < param_7) &&
                 ((local_50[0] == 0 || (*(long *)(local_50[0] + -8) < (long)param_7))))
              goto LAB_00108a4d;
LAB_00108980:
              Skeleton3D::get_bone_name((int)(CowData<char32_t> *)&local_98);
              lVar10 = *(long *)(param_2 + 8);
              if (lVar10 == 0) goto LAB_00108b08;
              lVar9 = *(long *)(lVar10 + -8);
              if (lVar9 <= lVar12) goto LAB_00108b0b;
              cVar3 = is_match_with_bone_name
                                (this,(String *)&local_98,(String *)(lVar10 + lVar12 * 8));
              if ((cVar3 != '\0') &&
                 (iVar8 = guess_bone_segregation((String *)this), iVar8 == param_4)) {
                local_90 = 0;
                if (local_98 != 0) {
                  CowData<char32_t>::_ref((CowData<char32_t> *)&local_90,(CowData *)&local_98);
                }
                uVar11 = local_88;
                iVar8 = (int)local_88;
                if ((int)local_88 == local_88._4_4_) {
                  uVar5 = (ulong)(uint)((int)local_88 * 2);
                  if ((int)local_88 * 2 == 0) {
                    uVar5 = 1;
                  }
                  local_88 = CONCAT44((int)uVar5,(int)local_88);
                  local_80 = (CowData *)Memory::realloc_static(local_80,uVar5 * 8,false);
                  if (local_80 == (CowData *)0x0) {
                    local_80 = (CowData *)0x0;
                    goto LAB_00108d31;
                  }
                }
                local_88 = CONCAT44(local_88._4_4_,iVar8 + 1);
                *(undefined8 *)(local_80 + (uVar11 & 0xffffffff) * 8) = 0;
                if (local_90 != 0) {
                  CowData<char32_t>::_ref
                            ((CowData<char32_t> *)(local_80 + (uVar11 & 0xffffffff) * 8),
                             (CowData *)&local_90);
                }
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
              }
              iVar8 = Skeleton3D::get_bone_parent((int)*(undefined8 *)(this + 0xa10));
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
              CowData<int>::_unref((CowData<int> *)local_50);
            }
          } while ((param_5 != iVar8) && (-1 < iVar8));
        }
        pCVar7 = local_80;
        uVar11 = local_88 & 0xffffffff;
        if ((int)local_88 != 0) {
          lVar10 = *(long *)local_80;
          if (local_b0 != *(long *)local_80) {
            CowData<char32_t>::_ref((CowData<char32_t> *)&local_b0,local_80);
            lVar10 = local_b0;
          }
          pCVar1 = pCVar7 + uVar11 * 8;
          do {
            lVar9 = *(long *)pCVar7;
            if (lVar9 == 0) {
              if ((lVar10 != 0) && ((*(int *)(lVar10 + -8) == 0 || (0 < *(int *)(lVar10 + -8)))))
              goto LAB_00108af6;
            }
            else {
              iVar8 = (int)*(undefined8 *)(lVar9 + -8);
              if (iVar8 == 0) {
                if (lVar10 != 0) {
                  iVar6 = (int)*(undefined8 *)(lVar10 + -8);
                  iVar8 = 0;
                  if (iVar6 != 0) goto LAB_00108aa8;
LAB_00108af1:
                  if (lVar9 == lVar10) goto LAB_00108aaf;
                }
LAB_00108af6:
                CowData<char32_t>::_ref((CowData<char32_t> *)&local_b0,pCVar7);
              }
              else {
                iVar8 = iVar8 + -1;
                if (lVar10 == 0) {
                  if (iVar8 < 1) goto LAB_00108af6;
                }
                else {
                  iVar6 = (int)*(undefined8 *)(lVar10 + -8);
                  if (iVar6 == 0) {
                    if (iVar8 < 1) goto LAB_00108af1;
                  }
                  else {
LAB_00108aa8:
                    if (iVar8 <= iVar6 + -1) goto LAB_00108af1;
                  }
                }
              }
            }
LAB_00108aaf:
            pCVar7 = pCVar7 + 8;
            lVar10 = local_b0;
          } while (pCVar1 != pCVar7);
        }
      }
      cVar3 = String::operator!=((String *)&local_b0,"");
      if (cVar3 != '\0') break;
      lVar12 = lVar12 + 1;
      lVar10 = *(long *)(param_2 + 8);
    } while (lVar10 != 0);
    pCVar7 = local_80;
    cVar3 = String::operator==((String *)&local_b0,"");
    if (cVar3 == '\0') goto LAB_00108816;
    uVar4 = 0xffffffff;
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
  if ((pCVar7 != (CowData *)0x0) &&
     (LocalVector<String,unsigned_int,false,false>::resize
                ((LocalVector<String,unsigned_int,false,false> *)&local_88,0),
     local_80 != (CowData *)0x0)) {
    Memory::free_static(local_80,false);
  }
LAB_0010885b:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* BoneMapper::auto_mapping_process(Ref<BoneMap>&) */

void __thiscall BoneMapper::auto_mapping_process(BoneMapper *this,Ref *param_1)

{
  bool bVar1;
  code *pcVar2;
  bool bVar3;
  CowData<int> *pCVar4;
  char cVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  CowData<char32_t> *pCVar14;
  String *pSVar15;
  char *pcVar16;
  int iVar17;
  CowData<int> *pCVar18;
  String *pSVar19;
  ulong uVar20;
  long lVar21;
  long lVar22;
  uint uVar23;
  ulong uVar24;
  StringName *pSVar25;
  uint *puVar26;
  long in_FS_OFFSET;
  CowData<String> *local_5c0;
  CowData<int> *local_5b0;
  uint local_59c;
  long local_598;
  StringName *local_580;
  StringName *local_578;
  uint local_560;
  int local_55c;
  CowData *local_558;
  CowData *local_540;
  uint *local_520;
  uint *local_518;
  uint *local_510;
  uint local_500;
  long local_4f0;
  long local_4e8;
  long local_4e0;
  long local_4d8;
  long local_4d0;
  long local_4c8;
  long local_4c0;
  long local_4b8;
  long local_4b0;
  long local_4a8;
  long local_4a0;
  long local_498;
  long local_490;
  long local_488;
  long local_480;
  long local_478;
  long local_470;
  long local_468;
  long local_460;
  long local_458;
  long local_450;
  long local_448;
  long local_440;
  long local_438;
  long local_430;
  long local_428;
  long local_420;
  long local_418;
  long local_410;
  long local_408;
  long local_400;
  Vector<String> local_3f8 [8];
  undefined8 local_3f0;
  Vector<int> local_3e8 [8];
  CowData<int> *local_3e0;
  undefined8 local_3d8;
  CowData<char32_t> *local_3d0;
  long local_3c8;
  uint *local_3c0;
  long local_3b8;
  String *local_3b0;
  long local_3a8;
  uint *local_3a0;
  long local_398;
  String *local_390;
  long local_388;
  CowData<int> *local_380;
  RegEx local_378 [416];
  RegEx local_1d8 [408];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  _err_print_error("auto_mapping_process","editor/plugins/bone_map_editor_plugin.cpp",0x28a,
                   "Run auto mapping.",0,1);
  local_3f0 = 0;
  local_3e0 = (CowData<int> *)0x0;
  local_388 = 0;
  String::parse_latin1((String *)&local_388,"hip");
  Vector<String>::push_back(local_3f8,(String *)&local_388);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_388);
  local_388 = 0;
  String::parse_latin1((String *)&local_388,"pelvis");
  Vector<String>::push_back(local_3f8,(String *)&local_388);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_388);
  local_388 = 0;
  String::parse_latin1((String *)&local_388,"waist");
  Vector<String>::push_back(local_3f8,(String *)&local_388);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_388);
  local_388 = 0;
  String::parse_latin1((String *)&local_388,"torso");
  Vector<String>::push_back(local_3f8,(String *)&local_388);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_388);
  local_388 = 0;
  String::parse_latin1((String *)&local_388,"spine");
  Vector<String>::push_back(local_3f8,(String *)&local_388);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_388);
  uVar6 = search_bone_by_name(this,*(undefined8 *)(this + 0xa10),local_3f8,0,0xffffffff,0xffffffff,
                              0xffffffffffffffff);
  if (uVar6 == 0xffffffff) {
    _err_print_error("auto_mapping_process","editor/plugins/bone_map_editor_plugin.cpp",0x298,
                     "Auto Mapping couldn\'t guess Hips. Abort auto mapping.",0,1);
    goto LAB_0010caa2;
  }
  pSVar25 = *(StringName **)param_1;
  iVar17 = (int)(String *)&local_3a8;
  Skeleton3D::get_bone_name(iVar17);
  StringName::StringName((StringName *)&local_388,(String *)&local_3a8,false);
  StringName::StringName((StringName *)&local_398,"Hips",false);
  BoneMap::_set_skeleton_bone_name(pSVar25,(StringName *)&local_398);
  if ((StringName::configured != '\0') &&
     (((local_398 == 0 || (StringName::unref(), StringName::configured != '\0')) && (local_388 != 0)
      ))) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_3a8);
  CowData<String>::resize<false>((CowData<String> *)&local_3f0,0);
  iVar7 = Skeleton3D::get_bone_parent((int)*(undefined8 *)(this + 0xa10));
  iVar12 = (int)(StringName *)&local_398;
  if (iVar7 < 0) {
LAB_00109280:
    _err_print_error("auto_mapping_process","editor/plugins/bone_map_editor_plugin.cpp",0x2c1,
                     "Auto Mapping couldn\'t guess Root.",0,1);
  }
  else {
    do {
      Vector<int>::push_back(local_3e8,iVar7);
      iVar7 = Skeleton3D::get_bone_parent((int)*(undefined8 *)(this + 0xa10));
      pCVar18 = local_3e0;
    } while (-1 < iVar7);
    if ((local_3e0 == (CowData<int> *)0x0) || (lVar21 = *(long *)(local_3e0 + -8), lVar21 == 0))
    goto LAB_00109280;
    if (lVar21 != 1) {
      uVar20 = 0;
      if (0 < lVar21) {
        do {
          local_388 = 0;
          String::parse_latin1((String *)&local_388,"root");
          RegEx::RegEx(local_1d8,(String *)&local_388);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_388);
          lVar21 = *(long *)(pCVar18 + -8);
          if (lVar21 <= (long)uVar20) goto LAB_00109253;
          Skeleton3D::get_bone_name(iVar17);
          String::to_lower();
          iVar7 = (int)local_1d8;
          RegEx::search((String *)&local_388,iVar7,iVar12);
          lVar21 = local_388;
          Ref<RegExMatch>::unref((Ref<RegExMatch> *)&local_388);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_398);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_3a8);
          if (lVar21 != 0) {
            lVar21 = *(long *)(pCVar18 + -8);
            if (lVar21 <= (long)uVar20) goto LAB_00109253;
            iVar7 = *(int *)(pCVar18 + uVar20 * 4);
            RegEx::~RegEx(local_1d8);
            goto LAB_0010cc44;
          }
          uVar20 = uVar20 + 1;
          RegEx::~RegEx(local_1d8);
          lVar21 = *(long *)(pCVar18 + -8);
        } while ((long)uVar20 < lVar21);
        if (0 < lVar21) {
          uVar20 = 0;
          do {
            Skeleton3D::get_bone_global_rest(iVar7);
            cVar5 = Vector3::is_zero_approx();
            lVar21 = *(long *)(pCVar18 + -8);
            if (cVar5 != '\0') {
              if (lVar21 <= (long)uVar20) goto LAB_00109253;
              iVar7 = *(int *)(pCVar18 + uVar20 * 4);
              goto LAB_0010cc44;
            }
            uVar20 = uVar20 + 1;
          } while ((long)uVar20 < lVar21);
          uVar20 = lVar21 - 1;
          if ((long)uVar20 < 0) goto LAB_00109253;
          iVar7 = *(int *)(pCVar18 + uVar20 * 4);
          goto LAB_0010cc44;
        }
      }
      uVar20 = lVar21 - 1;
      goto LAB_00109253;
    }
    iVar7 = *(int *)local_3e0;
LAB_0010cc44:
    if (iVar7 == -1) goto LAB_00109280;
    pSVar25 = *(StringName **)param_1;
    Skeleton3D::get_bone_name(iVar17);
    StringName::StringName((StringName *)&local_388,(String *)&local_3a8,false);
    StringName::StringName((StringName *)&local_398,"Root",false);
    BoneMap::_set_skeleton_bone_name(pSVar25,(StringName *)&local_398);
    if (((StringName::configured != '\0') &&
        ((local_398 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
       (local_388 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_3a8);
  }
  CowData<int>::resize<false>((CowData<int> *)&local_3e0,0);
  local_388 = 0;
  String::parse_latin1((String *)&local_388,"foot");
  Vector<String>::push_back(local_3f8,(String *)&local_388);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_388);
  local_388 = 0;
  String::parse_latin1((String *)&local_388,"ankle");
  Vector<String>::push_back(local_3f8,(String *)&local_388);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_388);
  iVar7 = search_bone_by_name(this,*(undefined8 *)(this + 0xa10),local_3f8,1,uVar6,0xffffffff,
                              0xffffffffffffffff);
  if (iVar7 == -1) {
    _err_print_error("auto_mapping_process","editor/plugins/bone_map_editor_plugin.cpp",0x2cd,
                     "Auto Mapping couldn\'t guess LeftFoot.",0,1);
  }
  else {
    pSVar25 = *(StringName **)param_1;
    Skeleton3D::get_bone_name(iVar17);
    StringName::StringName((StringName *)&local_388,(String *)&local_3a8,false);
    StringName::StringName((StringName *)&local_398,"LeftFoot",false);
    BoneMap::_set_skeleton_bone_name(pSVar25,(StringName *)&local_398);
    if ((StringName::configured != '\0') &&
       (((local_398 == 0 || (StringName::unref(), StringName::configured != '\0')) &&
        (local_388 != 0)))) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_3a8);
  }
  local_5b0 = (CowData<int> *)&local_3e0;
  iVar8 = search_bone_by_name(this,*(undefined8 *)(this + 0xa10),local_3f8,2,uVar6,0xffffffff,
                              0xffffffffffffffff);
  if (iVar8 == -1) {
    _err_print_error("auto_mapping_process","editor/plugins/bone_map_editor_plugin.cpp",0x2d3,
                     "Auto Mapping couldn\'t guess RightFoot.",0,1);
  }
  else {
    pSVar25 = *(StringName **)param_1;
    Skeleton3D::get_bone_name(iVar17);
    StringName::StringName((StringName *)&local_388,(String *)&local_3a8,false);
    StringName::StringName((StringName *)&local_398,"RightFoot",false);
    BoneMap::_set_skeleton_bone_name(pSVar25,(StringName *)&local_398);
    if (((StringName::configured != '\0') &&
        ((local_398 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
       (local_388 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_3a8);
  }
  CowData<String>::resize<false>((CowData<String> *)&local_3f0,0);
  local_388 = 0;
  String::parse_latin1((String *)&local_388,"(low|under).*leg");
  Vector<String>::push_back(local_3f8,(String *)&local_388);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_388);
  local_388 = 0;
  String::parse_latin1((String *)&local_388,"knee");
  Vector<String>::push_back(local_3f8,(String *)&local_388);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_388);
  local_388 = 0;
  String::parse_latin1((String *)&local_388,"shin");
  Vector<String>::push_back(local_3f8,(String *)&local_388);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_388);
  local_388 = 0;
  String::parse_latin1((String *)&local_388,"calf");
  Vector<String>::push_back(local_3f8,(String *)&local_388);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_388);
  local_388 = 0;
  String::parse_latin1((String *)&local_388,"leg");
  Vector<String>::push_back(local_3f8,(String *)&local_388);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_388);
  if ((iVar7 == -1) ||
     (iVar9 = search_bone_by_name(this,*(undefined8 *)(this + 0xa10),local_3f8,1,uVar6,iVar7,
                                  0xffffffffffffffff), iVar9 == -1)) {
    iVar9 = -1;
    _err_print_error("auto_mapping_process","editor/plugins/bone_map_editor_plugin.cpp",0x2e4,
                     "Auto Mapping couldn\'t guess LeftLowerLeg.",0,1);
  }
  else {
    pSVar25 = *(StringName **)param_1;
    Skeleton3D::get_bone_name(iVar17);
    StringName::StringName((StringName *)&local_388,(String *)&local_3a8,false);
    StringName::StringName((StringName *)&local_398,"LeftLowerLeg",false);
    BoneMap::_set_skeleton_bone_name(pSVar25,(StringName *)&local_398);
    if ((StringName::configured != '\0') &&
       (((local_398 == 0 || (StringName::unref(), StringName::configured != '\0')) &&
        (local_388 != 0)))) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_3a8);
  }
  if ((iVar8 == -1) ||
     (iVar10 = search_bone_by_name(this,*(undefined8 *)(this + 0xa10),local_3f8,2,uVar6,iVar8,
                                   0xffffffffffffffff), iVar10 == -1)) {
    iVar10 = -1;
    _err_print_error("auto_mapping_process","editor/plugins/bone_map_editor_plugin.cpp",0x2ed,
                     "Auto Mapping couldn\'t guess RightLowerLeg.",0,1);
  }
  else {
    pSVar25 = *(StringName **)param_1;
    Skeleton3D::get_bone_name(iVar17);
    StringName::StringName((StringName *)&local_388,(String *)&local_3a8,false);
    StringName::StringName((StringName *)&local_398,"RightLowerLeg",false);
    BoneMap::_set_skeleton_bone_name(pSVar25,(StringName *)&local_398);
    if (((StringName::configured != '\0') &&
        ((local_398 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
       (local_388 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_3a8);
  }
  CowData<String>::resize<false>((CowData<String> *)&local_3f0,0);
  local_388 = 0;
  String::parse_latin1((String *)&local_388,"up.*leg");
  Vector<String>::push_back(local_3f8,(String *)&local_388);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_388);
  local_388 = 0;
  String::parse_latin1((String *)&local_388,"thigh");
  Vector<String>::push_back(local_3f8,(String *)&local_388);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_388);
  local_388 = 0;
  String::parse_latin1((String *)&local_388,"leg");
  Vector<String>::push_back(local_3f8,(String *)&local_388);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_388);
  if ((iVar9 == -1) ||
     (iVar9 = search_bone_by_name(this,*(undefined8 *)(this + 0xa10),local_3f8,1,uVar6,iVar9,
                                  0xffffffffffffffff), iVar9 == -1)) {
    _err_print_error("auto_mapping_process","editor/plugins/bone_map_editor_plugin.cpp",0x2fb,
                     "Auto Mapping couldn\'t guess LeftUpperLeg.",0,1);
  }
  else {
    pSVar25 = *(StringName **)param_1;
    Skeleton3D::get_bone_name(iVar17);
    StringName::StringName((StringName *)&local_388,(String *)&local_3a8,false);
    StringName::StringName((StringName *)&local_398,"LeftUpperLeg",false);
    BoneMap::_set_skeleton_bone_name(pSVar25,(StringName *)&local_398);
    if ((StringName::configured != '\0') &&
       (((local_398 == 0 || (StringName::unref(), StringName::configured != '\0')) &&
        (local_388 != 0)))) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_3a8);
  }
  if ((iVar10 == -1) ||
     (iVar9 = search_bone_by_name(this,*(undefined8 *)(this + 0xa10),local_3f8,2,uVar6,iVar10,
                                  0xffffffffffffffff), iVar9 == -1)) {
    _err_print_error("auto_mapping_process","editor/plugins/bone_map_editor_plugin.cpp",0x304,
                     "Auto Mapping couldn\'t guess RightUpperLeg.",0,1);
  }
  else {
    pSVar25 = *(StringName **)param_1;
    Skeleton3D::get_bone_name(iVar17);
    StringName::StringName((StringName *)&local_388,(String *)&local_3a8,false);
    StringName::StringName((StringName *)&local_398,"RightUpperLeg",false);
    BoneMap::_set_skeleton_bone_name(pSVar25,(StringName *)&local_398);
    if (((StringName::configured != '\0') &&
        ((local_398 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
       (local_388 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_3a8);
  }
  CowData<String>::resize<false>((CowData<String> *)&local_3f0,0);
  local_388 = 0;
  String::parse_latin1((String *)&local_388,"toe");
  Vector<String>::push_back(local_3f8,(String *)&local_388);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_388);
  local_388 = 0;
  String::parse_latin1((String *)&local_388,"ball");
  Vector<String>::push_back(local_3f8,(String *)&local_388);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_388);
  iVar9 = (int)(String *)&local_388;
  if (iVar7 == -1) {
LAB_0010c986:
    _err_print_error("auto_mapping_process","editor/plugins/bone_map_editor_plugin.cpp",0x319,
                     "Auto Mapping couldn\'t guess LeftToes.",0,1);
    if (iVar8 == -1) goto LAB_0010c9bd;
LAB_00109af6:
    iVar7 = search_bone_by_name(this,*(undefined8 *)(this + 0xa10),local_3f8,2,iVar8,0xffffffff,
                                0xffffffffffffffff);
    if (iVar7 == -1) {
      Skeleton3D::get_bone_children(iVar9);
      pCVar18 = local_380;
      if (local_3e0 != local_380) {
        CowData<int>::_unref(local_5b0);
        pCVar18 = local_380;
        local_380 = (CowData<int> *)0x0;
        local_3e0 = pCVar18;
      }
      CowData<int>::_unref((CowData<int> *)&local_380);
      if ((pCVar18 == (CowData<int> *)0x0) || (*(long *)(pCVar18 + -8) != 1)) {
        CowData<int>::resize<false>(local_5b0,0);
      }
      else {
        iVar7 = *(int *)pCVar18;
        CowData<int>::resize<false>(local_5b0,0);
        if (iVar7 != -1) goto LAB_00109b2a;
      }
      goto LAB_0010c9bd;
    }
LAB_00109b2a:
    pSVar25 = *(StringName **)param_1;
    Skeleton3D::get_bone_name(iVar17);
    StringName::StringName((StringName *)&local_388,(String *)&local_3a8,false);
    StringName::StringName((StringName *)&local_398,"RightToes",false);
    BoneMap::_set_skeleton_bone_name(pSVar25,(StringName *)&local_398);
    if (((StringName::configured != '\0') &&
        ((local_398 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
       (local_388 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_3a8);
  }
  else {
    iVar7 = search_bone_by_name(this,*(undefined8 *)(this + 0xa10),local_3f8,1,iVar7,0xffffffff,
                                0xffffffffffffffff);
    if (iVar7 == -1) {
      Skeleton3D::get_bone_children(iVar9);
      pCVar18 = local_380;
      if (local_3e0 != local_380) {
        CowData<int>::_unref(local_5b0);
        pCVar18 = local_380;
        local_380 = (CowData<int> *)0x0;
        local_3e0 = pCVar18;
      }
      CowData<int>::_unref((CowData<int> *)&local_380);
      if ((pCVar18 == (CowData<int> *)0x0) || (*(long *)(pCVar18 + -8) != 1)) {
        CowData<int>::resize<false>(local_5b0,0);
      }
      else {
        iVar7 = *(int *)pCVar18;
        CowData<int>::resize<false>(local_5b0,0);
        if (iVar7 != -1) goto LAB_00109a56;
      }
      goto LAB_0010c986;
    }
LAB_00109a56:
    pSVar25 = *(StringName **)param_1;
    Skeleton3D::get_bone_name(iVar17);
    StringName::StringName((StringName *)&local_388,(String *)&local_3a8,false);
    StringName::StringName((StringName *)&local_398,"LeftToes",false);
    BoneMap::_set_skeleton_bone_name(pSVar25,(StringName *)&local_398);
    if ((StringName::configured != '\0') &&
       (((local_398 == 0 || (StringName::unref(), StringName::configured != '\0')) &&
        (local_388 != 0)))) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_3a8);
    if (iVar8 != -1) goto LAB_00109af6;
LAB_0010c9bd:
    _err_print_error("auto_mapping_process","editor/plugins/bone_map_editor_plugin.cpp",0x329,
                     "Auto Mapping couldn\'t guess RightToes.",0,1);
  }
  CowData<String>::resize<false>((CowData<String> *)&local_3f0,0);
  local_388 = 0;
  String::parse_latin1((String *)&local_388,"hand");
  Vector<String>::push_back(local_3f8,(String *)&local_388);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_388);
  local_388 = 0;
  String::parse_latin1((String *)&local_388,"wrist");
  Vector<String>::push_back(local_3f8,(String *)&local_388);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_388);
  local_388 = 0;
  String::parse_latin1((String *)&local_388,"palm");
  Vector<String>::push_back(local_3f8,(String *)&local_388);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_388);
  local_388 = 0;
  String::parse_latin1((String *)&local_388,"fingers");
  Vector<String>::push_back(local_3f8,(String *)&local_388);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_388);
  local_59c = search_bone_by_name(this,*(undefined8 *)(this + 0xa10),local_3f8,1,uVar6,0xffffffff,5)
  ;
  uVar11 = local_59c;
  if ((local_59c == 0xffffffff) &&
     (local_59c = search_bone_by_name(this,*(undefined8 *)(this + 0xa10),local_3f8,1,uVar6,
                                      0xffffffff,0xffffffffffffffff), uVar11 = local_59c,
     local_59c == 0xffffffff)) {
    _err_print_error("auto_mapping_process","editor/plugins/bone_map_editor_plugin.cpp",0x343,
                     "Auto Mapping couldn\'t guess LeftHand.",0,1);
  }
  else {
    do {
      uVar11 = search_bone_by_name(this,*(undefined8 *)(this + 0xa10),local_3f8,1,uVar6,uVar11,
                                   0xffffffffffffffff);
    } while (uVar11 != 0xffffffff);
    pSVar25 = *(StringName **)param_1;
    Skeleton3D::get_bone_name(iVar17);
    StringName::StringName((StringName *)&local_388,(String *)&local_3a8,false);
    StringName::StringName((StringName *)&local_398,"LeftHand",false);
    BoneMap::_set_skeleton_bone_name(pSVar25,(StringName *)&local_398);
    if ((StringName::configured != '\0') &&
       (((local_398 == 0 || (StringName::unref(), StringName::configured != '\0')) &&
        (local_388 != 0)))) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_3a8);
  }
  local_560 = search_bone_by_name(this,*(undefined8 *)(this + 0xa10),local_3f8,2,uVar6,0xffffffff,5)
  ;
  uVar11 = local_560;
  if ((local_560 == 0xffffffff) &&
     (local_560 = search_bone_by_name(this,*(undefined8 *)(this + 0xa10),local_3f8,2,uVar6,
                                      0xffffffff,0xffffffffffffffff), uVar11 = local_560,
     local_560 == 0xffffffff)) {
    _err_print_error("auto_mapping_process","editor/plugins/bone_map_editor_plugin.cpp",0x356,
                     "Auto Mapping couldn\'t guess RightHand.",0,1);
  }
  else {
    do {
      uVar11 = search_bone_by_name(this,*(undefined8 *)(this + 0xa10),local_3f8,2,uVar6,uVar11,
                                   0xffffffffffffffff);
    } while (uVar11 != 0xffffffff);
    pSVar25 = *(StringName **)param_1;
    Skeleton3D::get_bone_name(iVar17);
    StringName::StringName((StringName *)&local_388,(String *)&local_3a8,false);
    StringName::StringName((StringName *)&local_398,"RightHand",false);
    BoneMap::_set_skeleton_bone_name(pSVar25,(StringName *)&local_398);
    if (((StringName::configured != '\0') &&
        ((local_398 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
       (local_388 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_3a8);
  }
  CowData<String>::resize<false>((CowData<String> *)&local_3f0,0);
  local_4f0 = 0;
  String::parse_latin1((String *)&local_4f0,"thumb|pollex");
  local_3d8 = 0x100000000;
  pCVar14 = (CowData<char32_t> *)Memory::realloc_static((void *)0x0,8,false);
  local_3d0 = pCVar14;
  if (pCVar14 == (CowData<char32_t> *)0x0) goto LAB_0010c9f0;
  *(undefined8 *)pCVar14 = 0;
  if (local_4f0 != 0) {
    CowData<char32_t>::_ref(pCVar14,(CowData *)&local_4f0);
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_4f0);
  local_4e8 = 0;
  String::parse_latin1((String *)&local_4e8,"index|fore");
  local_3d8 = CONCAT44(2,(undefined4)local_3d8);
  pCVar14 = (CowData<char32_t> *)Memory::realloc_static(pCVar14,0x10,false);
  local_3d0 = pCVar14;
  if (pCVar14 == (CowData<char32_t> *)0x0) goto LAB_0010c9f0;
  *(undefined8 *)(pCVar14 + 8) = 0;
  local_3d8 = CONCAT44(local_3d8._4_4_,2);
  if (local_4e8 != 0) {
    CowData<char32_t>::_ref(pCVar14 + 8,(CowData *)&local_4e8);
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_4e8);
  local_4e0 = 0;
  String::parse_latin1((String *)&local_4e0,"middle");
  local_3d8 = CONCAT44(4,(undefined4)local_3d8);
  pCVar14 = (CowData<char32_t> *)Memory::realloc_static(pCVar14,0x20,false);
  local_3d0 = pCVar14;
  if (pCVar14 == (CowData<char32_t> *)0x0) goto LAB_0010c9f0;
  *(undefined8 *)(pCVar14 + 0x10) = 0;
  if (local_4e0 != 0) {
    CowData<char32_t>::_ref(pCVar14 + 0x10,(CowData *)&local_4e0);
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_4e0);
  local_388 = 0;
  String::parse_latin1((String *)&local_388,"ring");
  *(undefined8 *)(pCVar14 + 0x18) = 0;
  if (local_388 != 0) {
    CowData<char32_t>::_ref(pCVar14 + 0x18,(CowData *)&local_388);
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_388);
  local_4d8 = 0;
  String::parse_latin1((String *)&local_4d8,"little|pinkie|pinky");
  local_3d8 = CONCAT44(8,(undefined4)local_3d8);
  local_540 = (CowData *)Memory::realloc_static(pCVar14,0x40,false);
  local_3d0 = (CowData<char32_t> *)local_540;
  if (local_540 == (CowData *)0x0) goto LAB_0010c9f0;
  *(undefined8 *)((CowData<char32_t> *)local_540 + 0x20) = 0;
  local_3d8 = CONCAT44(local_3d8._4_4_,5);
  if (local_4d8 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)local_540 + 0x20,(CowData *)&local_4d8);
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_4d8);
  if (local_59c != 0xffffffff) {
    local_3c8 = 0;
    local_3c0 = (uint *)0x0;
    LocalVector<LocalVector<String,unsigned_int,false,false>,unsigned_int,false,false>::resize
              ((LocalVector<LocalVector<String,unsigned_int,false,false>,unsigned_int,false,false> *
               )&local_3c8,5);
    local_510 = local_3c0;
    iVar7 = (int)local_3c8;
    if ((int)local_3c8 != 0) {
      local_4d0 = 0;
      String::parse_latin1((String *)&local_4d0,"LeftThumbMetacarpal");
      uVar11 = *local_510;
      if (uVar11 == local_510[1]) {
        uVar20 = (ulong)(uVar11 * 2);
        if (uVar11 * 2 == 0) {
          uVar20 = 1;
        }
        local_510[1] = (uint)uVar20;
        lVar21 = Memory::realloc_static(*(void **)(local_510 + 2),uVar20 * 8,false);
        *(long *)(local_510 + 2) = lVar21;
        if (lVar21 == 0) goto LAB_0010c9f0;
        uVar11 = *local_510;
      }
      else {
        lVar21 = *(long *)(local_510 + 2);
      }
      pCVar14 = (CowData<char32_t> *)(lVar21 + (ulong)uVar11 * 8);
      *local_510 = uVar11 + 1;
      *(undefined8 *)pCVar14 = 0;
      if (local_4d0 != 0) {
        CowData<char32_t>::_ref(pCVar14,(CowData *)&local_4d0);
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_4d0);
      local_4c8 = 0;
      String::parse_latin1((String *)&local_4c8,"LeftThumbProximal");
      uVar11 = *local_510;
      if (uVar11 == local_510[1]) {
        uVar20 = (ulong)(uVar11 * 2);
        if (uVar11 * 2 == 0) {
          uVar20 = 1;
        }
        local_510[1] = (uint)uVar20;
        lVar21 = Memory::realloc_static(*(void **)(local_510 + 2),uVar20 * 8,false);
        *(long *)(local_510 + 2) = lVar21;
        if (lVar21 == 0) goto LAB_0010c9f0;
        uVar11 = *local_510;
      }
      else {
        lVar21 = *(long *)(local_510 + 2);
      }
      pCVar14 = (CowData<char32_t> *)(lVar21 + (ulong)uVar11 * 8);
      *local_510 = uVar11 + 1;
      *(undefined8 *)pCVar14 = 0;
      if (local_4c8 != 0) {
        CowData<char32_t>::_ref(pCVar14,(CowData *)&local_4c8);
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_4c8);
      local_4c0 = 0;
      String::parse_latin1((String *)&local_4c0,"LeftThumbDistal");
      uVar11 = *local_510;
      if (uVar11 == local_510[1]) {
        uVar20 = (ulong)(uVar11 * 2);
        if (uVar11 * 2 == 0) {
          uVar20 = 1;
        }
        local_510[1] = (uint)uVar20;
        lVar21 = Memory::realloc_static(*(void **)(local_510 + 2),uVar20 * 8,false);
        *(long *)(local_510 + 2) = lVar21;
        if (lVar21 == 0) goto LAB_0010c9f0;
        uVar11 = *local_510;
      }
      else {
        lVar21 = *(long *)(local_510 + 2);
      }
      pCVar14 = (CowData<char32_t> *)(lVar21 + (ulong)uVar11 * 8);
      *local_510 = uVar11 + 1;
      *(undefined8 *)pCVar14 = 0;
      if (local_4c0 != 0) {
        CowData<char32_t>::_ref(pCVar14,(CowData *)&local_4c0);
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_4c0);
      if (iVar7 != 1) {
        local_4b8 = 0;
        String::parse_latin1((String *)&local_4b8,"LeftIndexProximal");
        uVar11 = local_510[4];
        if (uVar11 == local_510[5]) {
          uVar20 = (ulong)(uVar11 * 2);
          if (uVar11 * 2 == 0) {
            uVar20 = 1;
          }
          local_510[5] = (uint)uVar20;
          lVar21 = Memory::realloc_static(*(void **)(local_510 + 6),uVar20 * 8,false);
          *(long *)(local_510 + 6) = lVar21;
          if (lVar21 == 0) goto LAB_0010c9f0;
          uVar11 = local_510[4];
        }
        else {
          lVar21 = *(long *)(local_510 + 6);
        }
        pCVar14 = (CowData<char32_t> *)(lVar21 + (ulong)uVar11 * 8);
        local_510[4] = uVar11 + 1;
        *(undefined8 *)pCVar14 = 0;
        if (local_4b8 != 0) {
          CowData<char32_t>::_ref(pCVar14,(CowData *)&local_4b8);
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_4b8);
        local_4b0 = 0;
        String::parse_latin1((String *)&local_4b0,"LeftIndexIntermediate");
        uVar11 = local_510[4];
        if (uVar11 == local_510[5]) {
          uVar20 = (ulong)(uVar11 * 2);
          if (uVar11 * 2 == 0) {
            uVar20 = 1;
          }
          local_510[5] = (uint)uVar20;
          lVar21 = Memory::realloc_static(*(void **)(local_510 + 6),uVar20 * 8,false);
          *(long *)(local_510 + 6) = lVar21;
          if (lVar21 == 0) goto LAB_0010c9f0;
          uVar11 = local_510[4];
        }
        else {
          lVar21 = *(long *)(local_510 + 6);
        }
        pCVar14 = (CowData<char32_t> *)(lVar21 + (ulong)uVar11 * 8);
        local_510[4] = uVar11 + 1;
        *(undefined8 *)pCVar14 = 0;
        if (local_4b0 != 0) {
          CowData<char32_t>::_ref(pCVar14,(CowData *)&local_4b0);
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_4b0);
        local_4a8 = 0;
        String::parse_latin1((String *)&local_4a8,"LeftIndexDistal");
        uVar11 = local_510[4];
        if (uVar11 == local_510[5]) {
          uVar20 = (ulong)(uVar11 * 2);
          if (uVar11 * 2 == 0) {
            uVar20 = 1;
          }
          local_510[5] = (uint)uVar20;
          lVar21 = Memory::realloc_static(*(void **)(local_510 + 6),uVar20 * 8,false);
          *(long *)(local_510 + 6) = lVar21;
          if (lVar21 == 0) goto LAB_0010c9f0;
          uVar11 = local_510[4];
        }
        else {
          lVar21 = *(long *)(local_510 + 6);
        }
        pCVar14 = (CowData<char32_t> *)(lVar21 + (ulong)uVar11 * 8);
        local_510[4] = uVar11 + 1;
        *(undefined8 *)pCVar14 = 0;
        if (local_4a8 != 0) {
          CowData<char32_t>::_ref(pCVar14,(CowData *)&local_4a8);
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_4a8);
        if (iVar7 != 2) {
          local_4a0 = 0;
          String::parse_latin1((String *)&local_4a0,"LeftMiddleProximal");
          uVar11 = local_510[8];
          if (uVar11 == local_510[9]) {
            uVar20 = (ulong)(uVar11 * 2);
            if (uVar11 * 2 == 0) {
              uVar20 = 1;
            }
            local_510[9] = (uint)uVar20;
            lVar21 = Memory::realloc_static(*(void **)(local_510 + 10),uVar20 * 8,false);
            *(long *)(local_510 + 10) = lVar21;
            if (lVar21 == 0) goto LAB_0010c9f0;
            uVar11 = local_510[8];
          }
          else {
            lVar21 = *(long *)(local_510 + 10);
          }
          pCVar14 = (CowData<char32_t> *)(lVar21 + (ulong)uVar11 * 8);
          local_510[8] = uVar11 + 1;
          *(undefined8 *)pCVar14 = 0;
          if (local_4a0 != 0) {
            CowData<char32_t>::_ref(pCVar14,(CowData *)&local_4a0);
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_4a0);
          local_498 = 0;
          String::parse_latin1((String *)&local_498,"LeftMiddleIntermediate");
          uVar11 = local_510[8];
          if (uVar11 == local_510[9]) {
            uVar20 = (ulong)(uVar11 * 2);
            if (uVar11 * 2 == 0) {
              uVar20 = 1;
            }
            local_510[9] = (uint)uVar20;
            lVar21 = Memory::realloc_static(*(void **)(local_510 + 10),uVar20 * 8,false);
            *(long *)(local_510 + 10) = lVar21;
            if (lVar21 == 0) goto LAB_0010c9f0;
            uVar11 = local_510[8];
          }
          else {
            lVar21 = *(long *)(local_510 + 10);
          }
          pCVar14 = (CowData<char32_t> *)(lVar21 + (ulong)uVar11 * 8);
          local_510[8] = uVar11 + 1;
          *(undefined8 *)pCVar14 = 0;
          if (local_498 != 0) {
            CowData<char32_t>::_ref(pCVar14,(CowData *)&local_498);
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_498);
          local_490 = 0;
          String::parse_latin1((String *)&local_490,"LeftMiddleDistal");
          uVar11 = local_510[8];
          if (uVar11 == local_510[9]) {
            uVar20 = (ulong)(uVar11 * 2);
            if (uVar11 * 2 == 0) {
              uVar20 = 1;
            }
            local_510[9] = (uint)uVar20;
            lVar21 = Memory::realloc_static(*(void **)(local_510 + 10),uVar20 * 8,false);
            *(long *)(local_510 + 10) = lVar21;
            if (lVar21 == 0) goto LAB_0010c9f0;
            uVar11 = local_510[8];
          }
          else {
            lVar21 = *(long *)(local_510 + 10);
          }
          pCVar14 = (CowData<char32_t> *)(lVar21 + (ulong)uVar11 * 8);
          local_510[8] = uVar11 + 1;
          *(undefined8 *)pCVar14 = 0;
          if (local_490 != 0) {
            CowData<char32_t>::_ref(pCVar14,(CowData *)&local_490);
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_490);
          if (iVar7 != 3) {
            local_488 = 0;
            String::parse_latin1((String *)&local_488,"LeftRingProximal");
            uVar11 = local_510[0xc];
            if (uVar11 == local_510[0xd]) {
              uVar20 = (ulong)(uVar11 * 2);
              if (uVar11 * 2 == 0) {
                uVar20 = 1;
              }
              local_510[0xd] = (uint)uVar20;
              lVar21 = Memory::realloc_static(*(void **)(local_510 + 0xe),uVar20 * 8,false);
              *(long *)(local_510 + 0xe) = lVar21;
              if (lVar21 == 0) goto LAB_0010c9f0;
              uVar11 = local_510[0xc];
            }
            else {
              lVar21 = *(long *)(local_510 + 0xe);
            }
            pCVar14 = (CowData<char32_t> *)(lVar21 + (ulong)uVar11 * 8);
            local_510[0xc] = uVar11 + 1;
            *(undefined8 *)pCVar14 = 0;
            if (local_488 != 0) {
              CowData<char32_t>::_ref(pCVar14,(CowData *)&local_488);
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_488);
            local_480 = 0;
            String::parse_latin1((String *)&local_480,"LeftRingIntermediate");
            uVar11 = local_510[0xc];
            if (uVar11 == local_510[0xd]) {
              uVar20 = (ulong)(uVar11 * 2);
              if (uVar11 * 2 == 0) {
                uVar20 = 1;
              }
              local_510[0xd] = (uint)uVar20;
              lVar21 = Memory::realloc_static(*(void **)(local_510 + 0xe),uVar20 * 8,false);
              *(long *)(local_510 + 0xe) = lVar21;
              if (lVar21 == 0) goto LAB_0010c9f0;
              uVar11 = local_510[0xc];
            }
            else {
              lVar21 = *(long *)(local_510 + 0xe);
            }
            pCVar14 = (CowData<char32_t> *)(lVar21 + (ulong)uVar11 * 8);
            local_510[0xc] = uVar11 + 1;
            *(undefined8 *)pCVar14 = 0;
            if (local_480 != 0) {
              CowData<char32_t>::_ref(pCVar14,(CowData *)&local_480);
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_480);
            local_478 = 0;
            String::parse_latin1((String *)&local_478,"LeftRingDistal");
            uVar11 = local_510[0xc];
            if (uVar11 == local_510[0xd]) {
              uVar20 = (ulong)(uVar11 * 2);
              if (uVar11 * 2 == 0) {
                uVar20 = 1;
              }
              local_510[0xd] = (uint)uVar20;
              lVar21 = Memory::realloc_static(*(void **)(local_510 + 0xe),uVar20 * 8,false);
              *(long *)(local_510 + 0xe) = lVar21;
              if (lVar21 == 0) goto LAB_0010c9f0;
              uVar11 = local_510[0xc];
            }
            else {
              lVar21 = *(long *)(local_510 + 0xe);
            }
            pCVar14 = (CowData<char32_t> *)(lVar21 + (ulong)uVar11 * 8);
            local_510[0xc] = uVar11 + 1;
            *(undefined8 *)pCVar14 = 0;
            if (local_478 != 0) {
              CowData<char32_t>::_ref(pCVar14,(CowData *)&local_478);
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_478);
            if (iVar7 != 4) {
              local_470 = 0;
              String::parse_latin1((String *)&local_470,"LeftLittleProximal");
              uVar11 = local_510[0x10];
              if (uVar11 == local_510[0x11]) {
                uVar20 = (ulong)(uVar11 * 2);
                if (uVar11 * 2 == 0) {
                  uVar20 = 1;
                }
                local_510[0x11] = (uint)uVar20;
                lVar21 = Memory::realloc_static(*(void **)(local_510 + 0x12),uVar20 * 8,false);
                *(long *)(local_510 + 0x12) = lVar21;
                if (lVar21 == 0) goto LAB_0010c9f0;
                uVar11 = local_510[0x10];
              }
              else {
                lVar21 = *(long *)(local_510 + 0x12);
              }
              pCVar14 = (CowData<char32_t> *)(lVar21 + (ulong)uVar11 * 8);
              local_510[0x10] = uVar11 + 1;
              *(undefined8 *)pCVar14 = 0;
              if (local_470 != 0) {
                CowData<char32_t>::_ref(pCVar14,(CowData *)&local_470);
              }
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_470);
              local_468 = 0;
              String::parse_latin1((String *)&local_468,"LeftLittleIntermediate");
              uVar11 = local_510[0x10];
              if (uVar11 == local_510[0x11]) {
                uVar20 = (ulong)(uVar11 * 2);
                if (uVar11 * 2 == 0) {
                  uVar20 = 1;
                }
                local_510[0x11] = (uint)uVar20;
                lVar21 = Memory::realloc_static(*(void **)(local_510 + 0x12),uVar20 * 8,false);
                *(long *)(local_510 + 0x12) = lVar21;
                if (lVar21 == 0) goto LAB_0010c9f0;
                uVar11 = local_510[0x10];
              }
              else {
                lVar21 = *(long *)(local_510 + 0x12);
              }
              pCVar14 = (CowData<char32_t> *)(lVar21 + (ulong)uVar11 * 8);
              local_510[0x10] = uVar11 + 1;
              *(undefined8 *)pCVar14 = 0;
              if (local_468 != 0) {
                CowData<char32_t>::_ref(pCVar14,(CowData *)&local_468);
              }
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_468);
              local_460 = 0;
              String::parse_latin1((String *)&local_460,"LeftLittleDistal");
              uVar11 = local_510[0x10];
              if (uVar11 == local_510[0x11]) {
                uVar20 = (ulong)(uVar11 * 2);
                if (uVar11 * 2 == 0) {
                  uVar20 = 1;
                }
                local_510[0x11] = (uint)uVar20;
                lVar21 = Memory::realloc_static(*(void **)(local_510 + 0x12),uVar20 * 8,false);
                *(long *)(local_510 + 0x12) = lVar21;
                if (lVar21 == 0) goto LAB_0010c9f0;
                uVar11 = local_510[0x10];
              }
              else {
                lVar21 = *(long *)(local_510 + 0x12);
              }
              pCVar14 = (CowData<char32_t> *)(lVar21 + (ulong)uVar11 * 8);
              local_510[0x10] = uVar11 + 1;
              *(undefined8 *)pCVar14 = 0;
              if (local_460 != 0) {
                CowData<char32_t>::_ref(pCVar14,(CowData *)&local_460);
              }
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_460);
              local_518 = local_510;
              local_55c = 0;
              bVar1 = false;
              local_500 = 0xffffffff;
              bVar3 = false;
              local_558 = local_540;
              do {
                local_388 = 0;
                if (*(long *)local_558 != 0) {
                  CowData<char32_t>::_ref((CowData<char32_t> *)&local_388,local_558);
                }
                Vector<String>::push_back(local_3f8,(String *)&local_388);
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_388);
                uVar11 = search_bone_by_name(this,*(undefined8 *)(this + 0xa10),local_3f8,1,
                                             local_59c,0xffffffff,0);
                if (uVar11 != 0xffffffff) {
                  if (uVar11 != local_59c) {
                    do {
                      if ((int)uVar11 < 0) break;
                      Vector<int>::push_back(local_3e8,uVar11);
                      uVar11 = Skeleton3D::get_bone_parent((int)*(undefined8 *)(this + 0xa10));
                    } while (uVar11 != local_59c);
                  }
                  pCVar18 = local_3e0;
                  if (local_3e0 == (CowData<int> *)0x0) {
                    if (-1 < (int)local_500) goto LAB_0010a9ff;
                    if (local_55c != 0) goto LAB_0010e76c;
LAB_0010e77a:
                    bVar1 = false;
                    local_500 = 0xffffffff;
                  }
                  else {
                    lVar21 = *(long *)(local_3e0 + -8);
                    uVar11 = (int)lVar21 - 1;
                    uVar20 = (ulong)uVar11;
                    uVar24 = uVar20;
                    if ((int)uVar11 < 0) {
                      if ((int)local_500 < 0) goto LAB_0010dcb4;
                    }
                    else {
                      do {
                        local_3b8 = 0;
                        String::parse_latin1((String *)&local_3b8,"distal");
                        RegEx::RegEx(local_1d8,(String *)&local_3b8);
                        lVar21 = *(long *)(pCVar18 + -8);
                        if (lVar21 <= (long)uVar20) goto LAB_00109253;
                        uVar23 = (int)uVar24 - 1;
                        Skeleton3D::get_bone_name(iVar17);
                        String::to_lower();
                        RegEx::search((String *)&local_388,(int)local_1d8,iVar12);
                        lVar21 = local_388;
                        Ref<RegExMatch>::unref((Ref<RegExMatch> *)&local_388);
                        CowData<char32_t>::_unref((CowData<char32_t> *)&local_398);
                        CowData<char32_t>::_unref((CowData<char32_t> *)&local_3a8);
                        RegEx::~RegEx(local_1d8);
                        CowData<char32_t>::_unref((CowData<char32_t> *)&local_3b8);
                        uVar11 = uVar23;
                      } while ((lVar21 == 0) &&
                              (uVar20 = uVar20 - 1, uVar24 = (ulong)uVar23, uVar11 = local_500,
                              uVar23 != 0xffffffff));
                      local_500 = uVar11;
                      if ((int)uVar11 < 0) {
                        lVar21 = *(long *)(pCVar18 + -8);
LAB_0010dcb4:
                        uVar20 = 0;
                        while ((long)uVar20 < lVar21) {
                          local_3b8 = 0;
                          String::parse_latin1((String *)&local_3b8,"tip|leaf");
                          RegEx::RegEx(local_1d8,(String *)&local_3b8);
                          lVar21 = *(long *)(pCVar18 + -8);
                          if (lVar21 <= (long)uVar20) goto LAB_00109253;
                          Skeleton3D::get_bone_name(iVar17);
                          String::to_lower();
                          RegEx::search((String *)&local_388,(int)local_1d8,iVar12);
                          lVar21 = local_388;
                          Ref<RegExMatch>::unref((Ref<RegExMatch> *)&local_388);
                          CowData<char32_t>::_unref((CowData<char32_t> *)&local_398);
                          CowData<char32_t>::_unref((CowData<char32_t> *)&local_3a8);
                          RegEx::~RegEx(local_1d8);
                          CowData<char32_t>::_unref((CowData<char32_t> *)&local_3b8);
                          if (lVar21 != 0) {
                            local_500 = (uint)uVar20;
                            goto LAB_0010a9ff;
                          }
                          uVar20 = uVar20 + 1;
                          lVar21 = *(long *)(pCVar18 + -8);
                        }
                        if (local_55c == 0) {
                          bVar1 = 3 < *(long *)(pCVar18 + -8);
                        }
LAB_0010e76c:
                        if (!bVar1) goto LAB_0010e77a;
                        Vector<int>::remove_at(local_3e8,0);
                        local_500 = 0;
                        goto LAB_0010aa2b;
                      }
                    }
LAB_0010a9ff:
                    iVar7 = 0;
                    do {
                      iVar7 = iVar7 + 1;
                      Vector<int>::remove_at(local_3e8,0);
                    } while (iVar7 <= (int)local_500);
                  }
LAB_0010aa2b:
                  Vector<int>::reverse(local_3e8);
                  pCVar18 = local_3e0;
                  if (local_3e0 != (CowData<int> *)0x0) {
                    lVar21 = *(long *)(local_3e0 + -8);
                    if (lVar21 == 1) {
                      pSVar25 = *(StringName **)param_1;
                      Skeleton3D::get_bone_name((int)(String *)&local_4b0);
                      StringName::StringName((StringName *)&local_4a8,(String *)&local_4b0,false);
                      if (*local_518 == 0) goto LAB_0010d725;
                      StringName::StringName
                                ((StringName *)&local_388,*(String **)(local_518 + 2),false);
                      BoneMap::_set_skeleton_bone_name(pSVar25,(StringName *)&local_388);
                      if ((StringName::configured != '\0') &&
                         (((local_388 == 0 || (StringName::unref(), StringName::configured != '\0'))
                          && (local_4a8 != 0)))) {
                        StringName::unref();
                      }
                      CowData<char32_t>::_unref((CowData<char32_t> *)&local_4b0);
                      bVar3 = true;
                    }
                    else {
                      if (lVar21 == 2) {
                        pSVar25 = *(StringName **)param_1;
                        Skeleton3D::get_bone_name((int)(String *)&local_4a0);
                        StringName::StringName((StringName *)&local_498,(String *)&local_4a0,false);
                        if (*local_518 == 0) goto LAB_0010d725;
                        StringName::StringName
                                  ((StringName *)&local_388,*(String **)(local_518 + 2),false);
                        BoneMap::_set_skeleton_bone_name(pSVar25,(StringName *)&local_388);
                        if (((StringName::configured != '\0') &&
                            ((local_388 == 0 ||
                             (StringName::unref(), StringName::configured != '\0')))) &&
                           (local_498 != 0)) {
                          StringName::unref();
                        }
                        CowData<char32_t>::_unref((CowData<char32_t> *)&local_4a0);
                        lVar21 = *(long *)(pCVar18 + -8);
                        pSVar25 = *(StringName **)param_1;
                        if (lVar21 < 2) goto LAB_0010f49d;
                        Skeleton3D::get_bone_name(iVar17);
                        StringName::StringName((StringName *)&local_388,(String *)&local_3a8,false);
                        uVar20 = (ulong)*local_518;
                        if (*local_518 < 2) goto LAB_0010f478;
                        StringName::StringName
                                  ((StringName *)&local_398,(String *)(*(long *)(local_518 + 2) + 8)
                                   ,false);
                        BoneMap::_set_skeleton_bone_name(pSVar25,(StringName *)&local_398);
                      }
                      else {
                        if (lVar21 < 3) goto LAB_0010ad20;
                        Vector<int>::slice((long)&local_388,(long)local_3e8);
                        pCVar4 = local_380;
                        if (pCVar18 == local_380) {
                          CowData<int>::_unref((CowData<int> *)&local_380);
                          pSVar25 = *(StringName **)param_1;
                        }
                        else {
                          CowData<int>::_unref(local_5b0);
                          local_3e0 = pCVar4;
                          local_380 = (CowData<int> *)0x0;
                          CowData<int>::_unref((CowData<int> *)&local_380);
                          pSVar25 = *(StringName **)param_1;
                          if (pCVar4 == (CowData<int> *)0x0) goto LAB_0010f777;
                        }
                        lVar21 = *(long *)(pCVar4 + -8);
                        if (lVar21 < 1) goto LAB_0010f77a;
                        Skeleton3D::get_bone_name((int)(String *)&local_490);
                        StringName::StringName((StringName *)&local_488,(String *)&local_490,false);
                        if (*local_518 == 0) goto LAB_0010d725;
                        StringName::StringName
                                  ((StringName *)&local_388,*(String **)(local_518 + 2),false);
                        BoneMap::_set_skeleton_bone_name(pSVar25,(StringName *)&local_388);
                        if (((StringName::configured != '\0') &&
                            ((local_388 == 0 ||
                             (StringName::unref(), StringName::configured != '\0')))) &&
                           (local_488 != 0)) {
                          StringName::unref();
                        }
                        CowData<char32_t>::_unref((CowData<char32_t> *)&local_490);
                        lVar21 = *(long *)(pCVar4 + -8);
                        pSVar25 = *(StringName **)param_1;
                        if (lVar21 < 2) goto LAB_0010f49d;
                        Skeleton3D::get_bone_name(iVar17);
                        StringName::StringName((StringName *)&local_388,(String *)&local_3a8,false);
                        uVar20 = (ulong)*local_518;
                        if (*local_518 < 2) goto LAB_0010f478;
                        StringName::StringName
                                  ((StringName *)&local_398,(String *)(*(long *)(local_518 + 2) + 8)
                                   ,false);
                        BoneMap::_set_skeleton_bone_name(pSVar25,(StringName *)&local_398);
                        if ((StringName::configured != '\0') &&
                           (((local_398 == 0 ||
                             (StringName::unref(), StringName::configured != '\0')) &&
                            (local_388 != 0)))) {
                          StringName::unref();
                        }
                        CowData<char32_t>::_unref((CowData<char32_t> *)&local_3a8);
                        lVar21 = *(long *)(pCVar4 + -8);
                        pSVar25 = *(StringName **)param_1;
                        if (lVar21 < 3) goto LAB_0010f8f1;
                        Skeleton3D::get_bone_name(iVar17);
                        StringName::StringName((StringName *)&local_388,(String *)&local_3a8,false);
                        uVar20 = (ulong)*local_518;
                        if (*local_518 < 3) goto LAB_0010d9df;
                        StringName::StringName
                                  ((StringName *)&local_398,
                                   (String *)(*(long *)(local_518 + 2) + 0x10),false);
                        BoneMap::_set_skeleton_bone_name(pSVar25,(StringName *)&local_398);
                      }
                      if (((StringName::configured != '\0') &&
                          ((local_398 == 0 || (StringName::unref(), StringName::configured != '\0'))
                          )) && (local_388 != 0)) {
                        StringName::unref();
                      }
                      CowData<char32_t>::_unref((CowData<char32_t> *)&local_3a8);
                      bVar3 = true;
                    }
                  }
                }
LAB_0010ad20:
                CowData<String>::resize<false>((CowData<String> *)&local_3f0,0);
                CowData<int>::resize<false>(local_5b0,0);
                local_55c = local_55c + 1;
                local_558 = local_558 + 8;
                local_518 = local_518 + 4;
              } while (local_55c != 5);
              if (!bVar3) {
                local_388 = 0;
                String::parse_latin1((String *)&local_388,"finger");
                Vector<String>::push_back(local_3f8,(String *)&local_388);
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_388);
                local_388 = 0;
                String::parse_latin1((String *)&local_388,"finger");
                RegEx::RegEx(local_378,(String *)&local_388);
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_388);
                Skeleton3D::get_bone_children(iVar9);
                pCVar18 = local_380;
                if (local_3e0 != local_380) {
                  CowData<int>::_unref(local_5b0);
                  pCVar18 = local_380;
                  local_380 = (CowData<int> *)0x0;
                  local_3e0 = pCVar18;
                }
                CowData<int>::_unref((CowData<int> *)&local_380);
                local_3b0 = (String *)0x0;
                if ((pCVar18 == (CowData<int> *)0x0) || (*(long *)(pCVar18 + -8) < 1)) {
LAB_0010f8b7:
                  CowData<int>::resize<false>(local_5b0,0);
                }
                else {
                  lVar21 = 0;
                  do {
                    Skeleton3D::get_bone_name(iVar17);
                    String::to_lower();
                    RegEx::search((String *)&local_388,(int)local_378,iVar12);
                    lVar22 = local_388;
                    Ref<RegExMatch>::unref((Ref<RegExMatch> *)&local_388);
                    CowData<char32_t>::_unref((CowData<char32_t> *)&local_398);
                    if (lVar22 != 0) {
                      local_388 = 0;
                      if (local_3a8 != 0) {
                        CowData<char32_t>::_ref
                                  ((CowData<char32_t> *)&local_388,(CowData *)&local_3a8);
                      }
                      Vector<String>::push_back((Vector<String> *)&local_3b8);
                      CowData<char32_t>::_unref((CowData<char32_t> *)&local_388);
                    }
                    lVar21 = lVar21 + 1;
                    CowData<char32_t>::_unref((CowData<char32_t> *)&local_3a8);
                    pSVar19 = local_3b0;
                  } while (lVar21 < *(long *)(pCVar18 + -8));
                  if (local_3b0 == (String *)0x0) goto LAB_0010f8b7;
                  lVar21 = *(long *)(local_3b0 + -8);
                  if (lVar21 == 0) {
                    CowData<int>::resize<false>(local_5b0,0);
LAB_0010af5f:
                    if (0 < *(long *)(pSVar19 + -8)) {
                      lVar22 = 0;
                      do {
                        iVar7 = Skeleton3D::find_bone(*(String **)(this + 0xa10));
                        iVar8 = search_bone_by_name(this,*(undefined8 *)(this + 0xa10),local_3f8,1,
                                                    iVar7,0xffffffff,0);
                        if ((-1 < iVar8) && (iVar7 != iVar8)) {
                          do {
                            Vector<int>::push_back(local_3e8,iVar8);
                            iVar8 = Skeleton3D::get_bone_parent((int)*(undefined8 *)(this + 0xa10));
                            if (iVar7 == iVar8) break;
                          } while (-1 < iVar8);
                        }
                        Vector<int>::push_back(local_3e8,iVar7);
                        if (lVar22 == 0) {
                          if ((local_3e0 == (CowData<int> *)0x0) || (*(long *)(local_3e0 + -8) < 4))
                          {
                            bVar1 = false;
                          }
                          else {
LAB_0010b006:
                            bVar1 = true;
                            Vector<int>::remove_at(local_3e8,0);
                          }
                        }
                        else if (bVar1) goto LAB_0010b006;
                        Vector<int>::reverse(local_3e8);
                        pCVar18 = local_3e0;
                        if (local_3e0 != (CowData<int> *)0x0) {
                          lVar21 = *(long *)(local_3e0 + -8);
                          if (lVar21 == 1) {
                            pSVar25 = *(StringName **)param_1;
                            Skeleton3D::get_bone_name((int)(String *)&local_480);
                            StringName::StringName
                                      ((StringName *)&local_478,(String *)&local_480,false);
                            if (*local_510 == 0) goto LAB_0010d725;
                            StringName::StringName
                                      ((StringName *)&local_388,*(String **)(local_510 + 2),false);
                            BoneMap::_set_skeleton_bone_name(pSVar25,(StringName *)&local_388);
                            if ((StringName::configured != '\0') &&
                               (((local_388 == 0 ||
                                 (StringName::unref(), StringName::configured != '\0')) &&
                                (local_478 != 0)))) {
                              StringName::unref();
                            }
                            CowData<char32_t>::_unref((CowData<char32_t> *)&local_480);
                          }
                          else {
                            if (lVar21 == 2) {
                              pSVar25 = *(StringName **)param_1;
                              Skeleton3D::get_bone_name((int)(String *)&local_470);
                              StringName::StringName
                                        ((StringName *)&local_468,(String *)&local_470,false);
                              if (*local_510 == 0) goto LAB_0010d725;
                              StringName::StringName
                                        ((StringName *)&local_388,*(String **)(local_510 + 2),false)
                              ;
                              BoneMap::_set_skeleton_bone_name(pSVar25,(StringName *)&local_388);
                              if (((StringName::configured != '\0') &&
                                  ((local_388 == 0 ||
                                   (StringName::unref(), StringName::configured != '\0')))) &&
                                 (local_468 != 0)) {
                                StringName::unref();
                              }
                              CowData<char32_t>::_unref((CowData<char32_t> *)&local_470);
                              pSVar25 = *(StringName **)param_1;
                              lVar21 = *(long *)(pCVar18 + -8);
                              if (lVar21 < 2) goto LAB_0010f49d;
                              Skeleton3D::get_bone_name(iVar17);
                              StringName::StringName
                                        ((StringName *)&local_388,(String *)&local_3a8,false);
                              uVar20 = (ulong)*local_510;
                              if (*local_510 < 2) goto LAB_0010f478;
                              pSVar15 = (String *)(*(long *)(local_510 + 2) + 8);
                            }
                            else {
                              if (lVar21 < 3) goto LAB_0010b048;
                              Vector<int>::slice((long)&local_388,(long)local_3e8);
                              pCVar4 = local_380;
                              if (pCVar18 == local_380) {
                                CowData<int>::_unref((CowData<int> *)&local_380);
                                local_578 = *(StringName **)param_1;
                              }
                              else {
                                CowData<int>::_unref(local_5b0);
                                local_3e0 = pCVar4;
                                local_380 = (CowData<int> *)0x0;
                                CowData<int>::_unref((CowData<int> *)&local_380);
                                local_578 = *(StringName **)param_1;
                                if (pCVar4 == (CowData<int> *)0x0) goto LAB_0010f777;
                              }
                              lVar21 = *(long *)(pCVar4 + -8);
                              if (lVar21 < 1) goto LAB_0010f77a;
                              Skeleton3D::get_bone_name((int)(String *)&local_460);
                              StringName::StringName
                                        ((StringName *)&local_458,(String *)&local_460,false);
                              if (*local_510 == 0) goto LAB_0010d725;
                              StringName::StringName
                                        ((StringName *)&local_388,*(String **)(local_510 + 2),false)
                              ;
                              BoneMap::_set_skeleton_bone_name(local_578,(StringName *)&local_388);
                              if (((StringName::configured != '\0') &&
                                  ((local_388 == 0 ||
                                   (StringName::unref(), StringName::configured != '\0')))) &&
                                 (local_458 != 0)) {
                                StringName::unref();
                              }
                              CowData<char32_t>::_unref((CowData<char32_t> *)&local_460);
                              pSVar25 = *(StringName **)param_1;
                              lVar21 = *(long *)(pCVar4 + -8);
                              if (lVar21 < 2) goto LAB_0010f49d;
                              Skeleton3D::get_bone_name(iVar17);
                              StringName::StringName
                                        ((StringName *)&local_388,(String *)&local_3a8,false);
                              uVar20 = (ulong)*local_510;
                              if (*local_510 < 2) goto LAB_0010f478;
                              StringName::StringName
                                        ((StringName *)&local_398,
                                         (String *)(*(long *)(local_510 + 2) + 8),false);
                              BoneMap::_set_skeleton_bone_name(pSVar25,(StringName *)&local_398);
                              if ((StringName::configured != '\0') &&
                                 (((local_398 == 0 ||
                                   (StringName::unref(), StringName::configured != '\0')) &&
                                  (local_388 != 0)))) {
                                StringName::unref();
                              }
                              CowData<char32_t>::_unref((CowData<char32_t> *)&local_3a8);
                              pSVar25 = *(StringName **)param_1;
                              lVar21 = *(long *)(pCVar4 + -8);
                              if (lVar21 < 3) goto LAB_0010f8f1;
                              Skeleton3D::get_bone_name(iVar17);
                              StringName::StringName
                                        ((StringName *)&local_388,(String *)&local_3a8,false);
                              uVar20 = (ulong)*local_510;
                              if (*local_510 < 3) goto LAB_0010d9df;
                              pSVar15 = (String *)(*(long *)(local_510 + 2) + 0x10);
                            }
                            StringName::StringName((StringName *)&local_398,pSVar15,false);
                            BoneMap::_set_skeleton_bone_name(pSVar25,(StringName *)&local_398);
                            if (((StringName::configured != '\0') &&
                                ((local_398 == 0 ||
                                 (StringName::unref(), StringName::configured != '\0')))) &&
                               (local_388 != 0)) {
                              StringName::unref();
                            }
                            CowData<char32_t>::_unref((CowData<char32_t> *)&local_3a8);
                          }
                        }
LAB_0010b048:
                        CowData<int>::resize<false>(local_5b0,0);
                        iVar7 = (int)lVar22;
                        lVar22 = lVar22 + 1;
                        local_510 = local_510 + 4;
                      } while ((lVar22 < *(long *)(pSVar19 + -8)) && (iVar7 != 4));
                    }
                  }
                  else {
                    CowData<String>::_copy_on_write((CowData<String> *)&local_3b0);
                    pSVar19 = local_3b0;
                    SortArray<String,_DefaultComparator<String>,true>::sort(local_3b0,lVar21);
                    CowData<int>::resize<false>(local_5b0,0);
                    if (pSVar19 != (String *)0x0) goto LAB_0010af5f;
                  }
                }
                CowData<String>::resize<false>((CowData<String> *)&local_3f0,0);
                CowData<String>::_unref((CowData<String> *)&local_3b0);
                RegEx::~RegEx(local_378);
              }
              LocalVector<LocalVector<String,unsigned_int,false,false>,unsigned_int,false,false>::
              resize((LocalVector<LocalVector<String,unsigned_int,false,false>,unsigned_int,false,false>
                      *)&local_3c8,0);
              if (local_3c0 != (uint *)0x0) {
                Memory::free_static(local_3c0,false);
              }
              goto LAB_0010b0d0;
            }
LAB_0010da38:
            lVar21 = 4;
            uVar20 = 4;
            goto LAB_0010d745;
          }
LAB_0010d9e9:
          lVar21 = 3;
          uVar20 = 3;
          goto LAB_0010d745;
        }
LAB_0010d9be:
        uVar20 = 2;
LAB_0010d9df:
        lVar21 = 2;
        goto LAB_0010d745;
      }
LAB_0010d90c:
      lVar21 = 1;
      uVar20 = 1;
      goto LAB_0010d745;
    }
LAB_0010d725:
    uVar20 = 0;
    lVar21 = 0;
LAB_0010d745:
    _err_print_index_error
              ("operator[]","./core/templates/local_vector.h",0xb2,lVar21,uVar20,"p_index","count",
               "",false,true);
    _err_flush_stdout();
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
LAB_0010b0d0:
  if (local_560 != 0xffffffff) {
    local_3a8 = 0;
    local_3a0 = (uint *)0x0;
    LocalVector<LocalVector<String,unsigned_int,false,false>,unsigned_int,false,false>::resize
              ((LocalVector<LocalVector<String,unsigned_int,false,false>,unsigned_int,false,false> *
               )&local_3a8,5);
    puVar26 = local_3a0;
    iVar7 = (int)local_3a8;
    if ((int)local_3a8 == 0) goto LAB_0010d725;
    local_458 = 0;
    String::parse_latin1((String *)&local_458,"RightThumbMetacarpal");
    uVar11 = *puVar26;
    if (uVar11 == puVar26[1]) {
      uVar20 = (ulong)(uVar11 * 2);
      if (uVar11 * 2 == 0) {
        uVar20 = 1;
      }
      puVar26[1] = (uint)uVar20;
      lVar21 = Memory::realloc_static(*(void **)(puVar26 + 2),uVar20 * 8,false);
      *(long *)(puVar26 + 2) = lVar21;
      if (lVar21 == 0) goto LAB_0010c9f0;
      uVar11 = *puVar26;
    }
    else {
      lVar21 = *(long *)(puVar26 + 2);
    }
    pCVar14 = (CowData<char32_t> *)(lVar21 + (ulong)uVar11 * 8);
    *puVar26 = uVar11 + 1;
    *(undefined8 *)pCVar14 = 0;
    if (local_458 != 0) {
      CowData<char32_t>::_ref(pCVar14,(CowData *)&local_458);
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_458);
    local_450 = 0;
    String::parse_latin1((String *)&local_450,"RightThumbProximal");
    uVar11 = *puVar26;
    if (uVar11 == puVar26[1]) {
      uVar20 = (ulong)(uVar11 * 2);
      if (uVar11 * 2 == 0) {
        uVar20 = 1;
      }
      puVar26[1] = (uint)uVar20;
      lVar21 = Memory::realloc_static(*(void **)(puVar26 + 2),uVar20 * 8,false);
      *(long *)(puVar26 + 2) = lVar21;
      if (lVar21 == 0) goto LAB_0010c9f0;
      uVar11 = *puVar26;
    }
    else {
      lVar21 = *(long *)(puVar26 + 2);
    }
    pCVar14 = (CowData<char32_t> *)(lVar21 + (ulong)uVar11 * 8);
    *puVar26 = uVar11 + 1;
    *(undefined8 *)pCVar14 = 0;
    if (local_450 != 0) {
      CowData<char32_t>::_ref(pCVar14,(CowData *)&local_450);
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_450);
    local_448 = 0;
    String::parse_latin1((String *)&local_448,"RightThumbDistal");
    uVar11 = *puVar26;
    if (uVar11 == puVar26[1]) {
      uVar20 = (ulong)(uVar11 * 2);
      if (uVar11 * 2 == 0) {
        uVar20 = 1;
      }
      puVar26[1] = (uint)uVar20;
      lVar21 = Memory::realloc_static(*(void **)(puVar26 + 2),uVar20 * 8,false);
      *(long *)(puVar26 + 2) = lVar21;
      if (lVar21 == 0) goto LAB_0010c9f0;
      uVar11 = *puVar26;
    }
    else {
      lVar21 = *(long *)(puVar26 + 2);
    }
    pCVar14 = (CowData<char32_t> *)(lVar21 + (ulong)uVar11 * 8);
    *puVar26 = uVar11 + 1;
    *(undefined8 *)pCVar14 = 0;
    if (local_448 != 0) {
      CowData<char32_t>::_ref(pCVar14,(CowData *)&local_448);
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_448);
    if (iVar7 == 1) goto LAB_0010d90c;
    local_440 = 0;
    String::parse_latin1((String *)&local_440,"RightIndexProximal");
    uVar11 = puVar26[4];
    if (uVar11 == puVar26[5]) {
      uVar20 = (ulong)(uVar11 * 2);
      if (uVar11 * 2 == 0) {
        uVar20 = 1;
      }
      puVar26[5] = (uint)uVar20;
      lVar21 = Memory::realloc_static(*(void **)(puVar26 + 6),uVar20 * 8,false);
      *(long *)(puVar26 + 6) = lVar21;
      if (lVar21 == 0) goto LAB_0010c9f0;
      uVar11 = puVar26[4];
    }
    else {
      lVar21 = *(long *)(puVar26 + 6);
    }
    pCVar14 = (CowData<char32_t> *)(lVar21 + (ulong)uVar11 * 8);
    puVar26[4] = uVar11 + 1;
    *(undefined8 *)pCVar14 = 0;
    if (local_440 != 0) {
      CowData<char32_t>::_ref(pCVar14,(CowData *)&local_440);
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_440);
    local_438 = 0;
    String::parse_latin1((String *)&local_438,"RightIndexIntermediate");
    uVar11 = puVar26[4];
    if (uVar11 == puVar26[5]) {
      uVar20 = (ulong)(uVar11 * 2);
      if (uVar11 * 2 == 0) {
        uVar20 = 1;
      }
      puVar26[5] = (uint)uVar20;
      lVar21 = Memory::realloc_static(*(void **)(puVar26 + 6),uVar20 * 8,false);
      *(long *)(puVar26 + 6) = lVar21;
      if (lVar21 == 0) goto LAB_0010c9f0;
      uVar11 = puVar26[4];
    }
    else {
      lVar21 = *(long *)(puVar26 + 6);
    }
    pCVar14 = (CowData<char32_t> *)(lVar21 + (ulong)uVar11 * 8);
    puVar26[4] = uVar11 + 1;
    *(undefined8 *)pCVar14 = 0;
    if (local_438 != 0) {
      CowData<char32_t>::_ref(pCVar14,(CowData *)&local_438);
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_438);
    local_430 = 0;
    String::parse_latin1((String *)&local_430,"RightIndexDistal");
    uVar11 = puVar26[4];
    if (uVar11 == puVar26[5]) {
      uVar20 = (ulong)(uVar11 * 2);
      if (uVar11 * 2 == 0) {
        uVar20 = 1;
      }
      puVar26[5] = (uint)uVar20;
      lVar21 = Memory::realloc_static(*(void **)(puVar26 + 6),uVar20 * 8,false);
      *(long *)(puVar26 + 6) = lVar21;
      if (lVar21 == 0) goto LAB_0010c9f0;
      uVar11 = puVar26[4];
    }
    else {
      lVar21 = *(long *)(puVar26 + 6);
    }
    pCVar14 = (CowData<char32_t> *)(lVar21 + (ulong)uVar11 * 8);
    puVar26[4] = uVar11 + 1;
    *(undefined8 *)pCVar14 = 0;
    if (local_430 != 0) {
      CowData<char32_t>::_ref(pCVar14,(CowData *)&local_430);
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_430);
    if (iVar7 == 2) goto LAB_0010d9be;
    local_428 = 0;
    String::parse_latin1((String *)&local_428,"RightMiddleProximal");
    uVar11 = puVar26[8];
    if (uVar11 == puVar26[9]) {
      uVar20 = (ulong)(uVar11 * 2);
      if (uVar11 * 2 == 0) {
        uVar20 = 1;
      }
      puVar26[9] = (uint)uVar20;
      lVar21 = Memory::realloc_static(*(void **)(puVar26 + 10),uVar20 * 8,false);
      *(long *)(puVar26 + 10) = lVar21;
      if (lVar21 == 0) goto LAB_0010c9f0;
      uVar11 = puVar26[8];
    }
    else {
      lVar21 = *(long *)(puVar26 + 10);
    }
    pCVar14 = (CowData<char32_t> *)(lVar21 + (ulong)uVar11 * 8);
    puVar26[8] = uVar11 + 1;
    *(undefined8 *)pCVar14 = 0;
    if (local_428 != 0) {
      CowData<char32_t>::_ref(pCVar14,(CowData *)&local_428);
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_428);
    local_420 = 0;
    String::parse_latin1((String *)&local_420,"RightMiddleIntermediate");
    uVar11 = puVar26[8];
    if (uVar11 == puVar26[9]) {
      uVar20 = (ulong)(uVar11 * 2);
      if (uVar11 * 2 == 0) {
        uVar20 = 1;
      }
      puVar26[9] = (uint)uVar20;
      lVar21 = Memory::realloc_static(*(void **)(puVar26 + 10),uVar20 * 8,false);
      *(long *)(puVar26 + 10) = lVar21;
      if (lVar21 == 0) goto LAB_0010c9f0;
      uVar11 = puVar26[8];
    }
    else {
      lVar21 = *(long *)(puVar26 + 10);
    }
    pCVar14 = (CowData<char32_t> *)(lVar21 + (ulong)uVar11 * 8);
    puVar26[8] = uVar11 + 1;
    *(undefined8 *)pCVar14 = 0;
    if (local_420 != 0) {
      CowData<char32_t>::_ref(pCVar14,(CowData *)&local_420);
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_420);
    local_418 = 0;
    String::parse_latin1((String *)&local_418,"RightMiddleDistal");
    uVar11 = puVar26[8];
    if (uVar11 == puVar26[9]) {
      uVar20 = (ulong)(uVar11 * 2);
      if (uVar11 * 2 == 0) {
        uVar20 = 1;
      }
      puVar26[9] = (uint)uVar20;
      lVar21 = Memory::realloc_static(*(void **)(puVar26 + 10),uVar20 * 8,false);
      *(long *)(puVar26 + 10) = lVar21;
      if (lVar21 == 0) goto LAB_0010c9f0;
      uVar11 = puVar26[8];
    }
    else {
      lVar21 = *(long *)(puVar26 + 10);
    }
    pCVar14 = (CowData<char32_t> *)(lVar21 + (ulong)uVar11 * 8);
    puVar26[8] = uVar11 + 1;
    *(undefined8 *)pCVar14 = 0;
    if (local_418 != 0) {
      CowData<char32_t>::_ref(pCVar14,(CowData *)&local_418);
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_418);
    if (iVar7 == 3) goto LAB_0010d9e9;
    local_410 = 0;
    String::parse_latin1((String *)&local_410,"RightRingProximal");
    uVar11 = puVar26[0xc];
    if (uVar11 == puVar26[0xd]) {
      uVar20 = (ulong)(uVar11 * 2);
      if (uVar11 * 2 == 0) {
        uVar20 = 1;
      }
      puVar26[0xd] = (uint)uVar20;
      lVar21 = Memory::realloc_static(*(void **)(puVar26 + 0xe),uVar20 * 8,false);
      *(long *)(puVar26 + 0xe) = lVar21;
      if (lVar21 == 0) goto LAB_0010c9f0;
      uVar11 = puVar26[0xc];
    }
    else {
      lVar21 = *(long *)(puVar26 + 0xe);
    }
    pCVar14 = (CowData<char32_t> *)(lVar21 + (ulong)uVar11 * 8);
    puVar26[0xc] = uVar11 + 1;
    *(undefined8 *)pCVar14 = 0;
    if (local_410 != 0) {
      CowData<char32_t>::_ref(pCVar14,(CowData *)&local_410);
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_410);
    local_408 = 0;
    String::parse_latin1((String *)&local_408,"RightRingIntermediate");
    uVar11 = puVar26[0xc];
    if (uVar11 == puVar26[0xd]) {
      uVar20 = (ulong)(uVar11 * 2);
      if (uVar11 * 2 == 0) {
        uVar20 = 1;
      }
      puVar26[0xd] = (uint)uVar20;
      lVar21 = Memory::realloc_static(*(void **)(puVar26 + 0xe),uVar20 * 8,false);
      *(long *)(puVar26 + 0xe) = lVar21;
      if (lVar21 == 0) goto LAB_0010c9f0;
      uVar11 = puVar26[0xc];
    }
    else {
      lVar21 = *(long *)(puVar26 + 0xe);
    }
    pCVar14 = (CowData<char32_t> *)(lVar21 + (ulong)uVar11 * 8);
    puVar26[0xc] = uVar11 + 1;
    *(undefined8 *)pCVar14 = 0;
    if (local_408 != 0) {
      CowData<char32_t>::_ref(pCVar14,(CowData *)&local_408);
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_408);
    local_400 = 0;
    String::parse_latin1((String *)&local_400,"RightRingDistal");
    uVar11 = puVar26[0xc];
    if (uVar11 == puVar26[0xd]) {
      uVar20 = (ulong)(uVar11 * 2);
      if (uVar11 * 2 == 0) {
        uVar20 = 1;
      }
      puVar26[0xd] = (uint)uVar20;
      lVar21 = Memory::realloc_static(*(void **)(puVar26 + 0xe),uVar20 * 8,false);
      *(long *)(puVar26 + 0xe) = lVar21;
      if (lVar21 == 0) goto LAB_0010c9f0;
      uVar11 = puVar26[0xc];
    }
    else {
      lVar21 = *(long *)(puVar26 + 0xe);
    }
    pCVar14 = (CowData<char32_t> *)(lVar21 + (ulong)uVar11 * 8);
    puVar26[0xc] = uVar11 + 1;
    *(undefined8 *)pCVar14 = 0;
    if (local_400 != 0) {
      CowData<char32_t>::_ref(pCVar14,(CowData *)&local_400);
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_400);
    if (iVar7 == 4) goto LAB_0010da38;
    local_3b8 = 0;
    String::parse_latin1((String *)&local_3b8,"RightLittleProximal");
    uVar11 = puVar26[0x10];
    if (uVar11 == puVar26[0x11]) {
      uVar20 = (ulong)(uVar11 * 2);
      if (uVar11 * 2 == 0) {
        uVar20 = 1;
      }
      puVar26[0x11] = (uint)uVar20;
      lVar21 = Memory::realloc_static(*(void **)(puVar26 + 0x12),uVar20 * 8,false);
      *(long *)(puVar26 + 0x12) = lVar21;
      if (lVar21 == 0) goto LAB_0010c9f0;
      uVar11 = puVar26[0x10];
    }
    else {
      lVar21 = *(long *)(puVar26 + 0x12);
    }
    pCVar14 = (CowData<char32_t> *)(lVar21 + (ulong)uVar11 * 8);
    puVar26[0x10] = uVar11 + 1;
    *(undefined8 *)pCVar14 = 0;
    if (local_3b8 != 0) {
      CowData<char32_t>::_ref(pCVar14,(CowData *)&local_3b8);
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_3b8);
    local_398 = 0;
    String::parse_latin1((String *)&local_398,"RightLittleIntermediate");
    uVar11 = puVar26[0x10];
    if (uVar11 == puVar26[0x11]) {
      uVar20 = (ulong)(uVar11 * 2);
      if (uVar11 * 2 == 0) {
        uVar20 = 1;
      }
      puVar26[0x11] = (uint)uVar20;
      lVar21 = Memory::realloc_static(*(void **)(puVar26 + 0x12),uVar20 * 8,false);
      *(long *)(puVar26 + 0x12) = lVar21;
      if (lVar21 == 0) goto LAB_0010c9f0;
      uVar11 = puVar26[0x10];
    }
    else {
      lVar21 = *(long *)(puVar26 + 0x12);
    }
    pCVar14 = (CowData<char32_t> *)(lVar21 + (ulong)uVar11 * 8);
    puVar26[0x10] = uVar11 + 1;
    *(undefined8 *)pCVar14 = 0;
    if (local_398 != 0) {
      CowData<char32_t>::_ref(pCVar14,(CowData *)&local_398);
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_398);
    local_388 = 0;
    String::parse_latin1((String *)&local_388,"RightLittleDistal");
    uVar11 = puVar26[0x10];
    if (uVar11 == puVar26[0x11]) {
      uVar20 = (ulong)(uVar11 * 2);
      if (uVar11 * 2 == 0) {
        uVar20 = 1;
      }
      puVar26[0x11] = (uint)uVar20;
      lVar21 = Memory::realloc_static(*(void **)(puVar26 + 0x12),uVar20 * 8,false);
      *(long *)(puVar26 + 0x12) = lVar21;
      if (lVar21 == 0) {
LAB_0010c9f0:
        _err_print_error("push_back","./core/templates/local_vector.h",0x41,
                         "FATAL: Condition \"!data\" is true.","Out of memory",0,0);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      uVar11 = puVar26[0x10];
    }
    else {
      lVar21 = *(long *)(puVar26 + 0x12);
    }
    pCVar14 = (CowData<char32_t> *)(lVar21 + (ulong)uVar11 * 8);
    puVar26[0x10] = uVar11 + 1;
    *(undefined8 *)pCVar14 = 0;
    if (local_388 != 0) {
      CowData<char32_t>::_ref(pCVar14,(CowData *)&local_388);
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_388);
    local_520 = puVar26;
    local_55c = 0;
    bVar1 = false;
    local_518._0_4_ = 0xffffffff;
    bVar3 = false;
    do {
      local_388 = 0;
      if (*(long *)local_540 != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_388,local_540);
      }
      Vector<String>::push_back(local_3f8,(String *)&local_388);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_388);
      uVar11 = search_bone_by_name(this,*(undefined8 *)(this + 0xa10),local_3f8,2,local_560,
                                   0xffffffff,0);
      iVar7 = (int)(String *)&local_3b8;
      if (uVar11 != 0xffffffff) {
        if (uVar11 != local_560) {
          do {
            if ((int)uVar11 < 0) break;
            Vector<int>::push_back(local_3e8,uVar11);
            uVar11 = Skeleton3D::get_bone_parent((int)*(undefined8 *)(this + 0xa10));
          } while (uVar11 != local_560);
        }
        pCVar18 = local_3e0;
        if (local_3e0 == (CowData<int> *)0x0) {
          if (-1 < (int)(uint)local_518) goto LAB_0010ba0f;
          if (local_55c != 0) goto LAB_0010eacb;
LAB_0010ead9:
          bVar1 = false;
          local_518._0_4_ = 0xffffffff;
        }
        else {
          lVar21 = *(long *)(local_3e0 + -8);
          uVar11 = (int)lVar21 - 1;
          uVar20 = (ulong)uVar11;
          uVar24 = uVar20;
          if ((int)uVar11 < 0) {
            if ((int)(uint)local_518 < 0) goto LAB_0010e0ff;
          }
          else {
            do {
              local_3c8 = 0;
              String::parse_latin1((String *)&local_3c8,"distal");
              RegEx::RegEx(local_1d8,(String *)&local_3c8);
              lVar21 = *(long *)(pCVar18 + -8);
              if (lVar21 <= (long)uVar20) goto LAB_00109253;
              uVar23 = (int)uVar24 - 1;
              Skeleton3D::get_bone_name(iVar7);
              String::to_lower();
              RegEx::search((String *)&local_388,(int)local_1d8,iVar12);
              lVar21 = local_388;
              Ref<RegExMatch>::unref((Ref<RegExMatch> *)&local_388);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_398);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_3b8);
              RegEx::~RegEx(local_1d8);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_3c8);
              uVar11 = uVar23;
            } while ((lVar21 == 0) &&
                    (uVar20 = uVar20 - 1, uVar24 = (ulong)uVar23, uVar11 = (uint)local_518,
                    uVar23 != 0xffffffff));
            local_518._0_4_ = uVar11;
            if ((int)uVar11 < 0) {
              lVar21 = *(long *)(pCVar18 + -8);
LAB_0010e0ff:
              uVar20 = 0;
              while ((long)uVar20 < lVar21) {
                local_3c8 = 0;
                String::parse_latin1((String *)&local_3c8,"tip|leaf");
                RegEx::RegEx(local_1d8,(String *)&local_3c8);
                lVar21 = *(long *)(pCVar18 + -8);
                if (lVar21 <= (long)uVar20) goto LAB_00109253;
                Skeleton3D::get_bone_name(iVar7);
                String::to_lower();
                RegEx::search((String *)&local_388,(int)local_1d8,iVar12);
                lVar21 = local_388;
                Ref<RegExMatch>::unref((Ref<RegExMatch> *)&local_388);
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_398);
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_3b8);
                RegEx::~RegEx(local_1d8);
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_3c8);
                if (lVar21 != 0) {
                  local_518._0_4_ = (uint)uVar20;
                  goto LAB_0010ba0f;
                }
                uVar20 = uVar20 + 1;
                lVar21 = *(long *)(pCVar18 + -8);
              }
              if (local_55c == 0) {
                bVar1 = 3 < *(long *)(pCVar18 + -8);
              }
LAB_0010eacb:
              if (!bVar1) goto LAB_0010ead9;
              Vector<int>::remove_at(local_3e8,0);
              local_518._0_4_ = 0;
              goto LAB_0010ba3b;
            }
          }
LAB_0010ba0f:
          iVar8 = 0;
          do {
            iVar8 = iVar8 + 1;
            Vector<int>::remove_at(local_3e8,0);
          } while (iVar8 <= (int)(uint)local_518);
        }
LAB_0010ba3b:
        Vector<int>::reverse(local_3e8);
        pCVar18 = local_3e0;
        if (local_3e0 != (CowData<int> *)0x0) {
          lVar21 = *(long *)(local_3e0 + -8);
          if (lVar21 == 1) {
            pSVar25 = *(StringName **)param_1;
            Skeleton3D::get_bone_name((int)(String *)&local_450);
            StringName::StringName((StringName *)&local_448,(String *)&local_450,false);
            if (*local_520 == 0) goto LAB_0010d725;
            StringName::StringName((StringName *)&local_388,*(String **)(local_520 + 2),false);
            BoneMap::_set_skeleton_bone_name(pSVar25,(StringName *)&local_388);
            if ((StringName::configured != '\0') &&
               (((local_388 == 0 || (StringName::unref(), StringName::configured != '\0')) &&
                (local_448 != 0)))) {
              StringName::unref();
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_450);
            bVar3 = true;
          }
          else {
            if (lVar21 == 2) {
              pSVar25 = *(StringName **)param_1;
              Skeleton3D::get_bone_name((int)(String *)&local_440);
              StringName::StringName((StringName *)&local_438,(String *)&local_440,false);
              if (*local_520 == 0) goto LAB_0010d725;
              StringName::StringName((StringName *)&local_388,*(String **)(local_520 + 2),false);
              BoneMap::_set_skeleton_bone_name(pSVar25,(StringName *)&local_388);
              if (((StringName::configured != '\0') &&
                  ((local_388 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
                 (local_438 != 0)) {
                StringName::unref();
              }
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_440);
              lVar21 = *(long *)(pCVar18 + -8);
              pSVar25 = *(StringName **)param_1;
              if (lVar21 < 2) goto LAB_0010f49d;
              Skeleton3D::get_bone_name(iVar7);
              StringName::StringName((StringName *)&local_388,(String *)&local_3b8,false);
              uVar20 = (ulong)*local_520;
              if (*local_520 < 2) goto LAB_0010f478;
              StringName::StringName
                        ((StringName *)&local_398,(String *)(*(long *)(local_520 + 2) + 8),false);
              BoneMap::_set_skeleton_bone_name(pSVar25,(StringName *)&local_398);
            }
            else {
              if (lVar21 < 3) goto LAB_0010bd30;
              Vector<int>::slice((long)&local_388,(long)local_3e8);
              pCVar4 = local_380;
              if (pCVar18 == local_380) {
                CowData<int>::_unref((CowData<int> *)&local_380);
                pSVar25 = *(StringName **)param_1;
              }
              else {
                CowData<int>::_unref(local_5b0);
                local_3e0 = pCVar4;
                local_380 = (CowData<int> *)0x0;
                CowData<int>::_unref((CowData<int> *)&local_380);
                pSVar25 = *(StringName **)param_1;
                if (pCVar4 == (CowData<int> *)0x0) goto LAB_0010f777;
              }
              lVar21 = *(long *)(pCVar4 + -8);
              if (lVar21 < 1) goto LAB_0010f77a;
              Skeleton3D::get_bone_name((int)(String *)&local_430);
              StringName::StringName((StringName *)&local_428,(String *)&local_430,false);
              if (*local_520 == 0) goto LAB_0010d725;
              StringName::StringName((StringName *)&local_388,*(String **)(local_520 + 2),false);
              BoneMap::_set_skeleton_bone_name(pSVar25,(StringName *)&local_388);
              if (((StringName::configured != '\0') &&
                  ((local_388 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
                 (local_428 != 0)) {
                StringName::unref();
              }
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_430);
              lVar21 = *(long *)(pCVar4 + -8);
              pSVar25 = *(StringName **)param_1;
              if (lVar21 < 2) goto LAB_0010f49d;
              Skeleton3D::get_bone_name(iVar7);
              StringName::StringName((StringName *)&local_388,(String *)&local_3b8,false);
              uVar20 = (ulong)*local_520;
              if (*local_520 < 2) goto LAB_0010f478;
              StringName::StringName
                        ((StringName *)&local_398,(String *)(*(long *)(local_520 + 2) + 8),false);
              BoneMap::_set_skeleton_bone_name(pSVar25,(StringName *)&local_398);
              if ((StringName::configured != '\0') &&
                 (((local_398 == 0 || (StringName::unref(), StringName::configured != '\0')) &&
                  (local_388 != 0)))) {
                StringName::unref();
              }
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_3b8);
              lVar21 = *(long *)(pCVar4 + -8);
              pSVar25 = *(StringName **)param_1;
              if (lVar21 < 3) goto LAB_0010f8f1;
              Skeleton3D::get_bone_name(iVar7);
              StringName::StringName((StringName *)&local_388,(String *)&local_3b8,false);
              uVar20 = (ulong)*local_520;
              if (*local_520 < 3) goto LAB_0010d9df;
              StringName::StringName
                        ((StringName *)&local_398,(String *)(*(long *)(local_520 + 2) + 0x10),false)
              ;
              BoneMap::_set_skeleton_bone_name(pSVar25,(StringName *)&local_398);
            }
            if (((StringName::configured != '\0') &&
                ((local_398 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
               (local_388 != 0)) {
              StringName::unref();
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_3b8);
            bVar3 = true;
          }
        }
      }
LAB_0010bd30:
      CowData<String>::resize<false>((CowData<String> *)&local_3f0,0);
      CowData<int>::resize<false>(local_5b0,0);
      local_55c = local_55c + 1;
      local_540 = local_540 + 8;
      local_520 = local_520 + 4;
    } while (local_55c != 5);
    if (!bVar3) {
      local_388 = 0;
      String::parse_latin1((String *)&local_388,"finger");
      Vector<String>::push_back(local_3f8,(String *)&local_388);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_388);
      local_388 = 0;
      String::parse_latin1((String *)&local_388,"finger");
      RegEx::RegEx(local_1d8,(String *)&local_388);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_388);
      Skeleton3D::get_bone_children(iVar9);
      pCVar18 = local_380;
      if (local_3e0 != local_380) {
        CowData<int>::_unref(local_5b0);
        pCVar18 = local_380;
        local_380 = (CowData<int> *)0x0;
        local_3e0 = pCVar18;
      }
      CowData<int>::_unref((CowData<int> *)&local_380);
      local_390 = (String *)0x0;
      if ((pCVar18 == (CowData<int> *)0x0) || (*(long *)(pCVar18 + -8) < 1)) {
LAB_0010f94c:
        CowData<int>::resize<false>(local_5b0,0);
      }
      else {
        lVar21 = 0;
        do {
          iVar8 = (int)(CowData<char32_t> *)&local_3c8;
          Skeleton3D::get_bone_name(iVar8);
          String::to_lower();
          RegEx::search((String *)&local_388,(int)local_1d8,iVar7);
          lVar22 = local_388;
          Ref<RegExMatch>::unref((Ref<RegExMatch> *)&local_388);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_3b8);
          if (lVar22 != 0) {
            local_388 = 0;
            if (local_3c8 != 0) {
              CowData<char32_t>::_ref((CowData<char32_t> *)&local_388,(CowData *)&local_3c8);
            }
            Vector<String>::push_back((Vector<String> *)&local_398);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_388);
          }
          lVar21 = lVar21 + 1;
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_3c8);
          pSVar19 = local_390;
        } while (lVar21 < *(long *)(pCVar18 + -8));
        if (local_390 == (String *)0x0) goto LAB_0010f94c;
        lVar21 = *(long *)(local_390 + -8);
        if (lVar21 == 0) {
          CowData<int>::resize<false>(local_5b0,0);
LAB_0010bf7e:
          if (0 < *(long *)(pSVar19 + -8)) {
            local_598 = 0;
            do {
              iVar7 = Skeleton3D::find_bone(*(String **)(this + 0xa10));
              iVar10 = search_bone_by_name(this,*(undefined8 *)(this + 0xa10),local_3f8,2,iVar7,
                                           0xffffffff,0);
              if ((-1 < iVar10) && (iVar7 != iVar10)) {
                do {
                  Vector<int>::push_back(local_3e8,iVar10);
                  iVar10 = Skeleton3D::get_bone_parent((int)*(undefined8 *)(this + 0xa10));
                  if (iVar7 == iVar10) break;
                } while (-1 < iVar10);
              }
              Vector<int>::push_back(local_3e8,iVar7);
              if (local_598 == 0) {
                if ((local_3e0 == (CowData<int> *)0x0) || (*(long *)(local_3e0 + -8) < 4)) {
                  bVar1 = false;
                }
                else {
LAB_0010c03b:
                  bVar1 = true;
                  Vector<int>::remove_at(local_3e8,0);
                }
              }
              else if (bVar1) goto LAB_0010c03b;
              Vector<int>::reverse(local_3e8);
              pCVar18 = local_3e0;
              if (local_3e0 != (CowData<int> *)0x0) {
                lVar21 = *(long *)(local_3e0 + -8);
                if (lVar21 == 1) {
                  pSVar25 = *(StringName **)param_1;
                  Skeleton3D::get_bone_name((int)(String *)&local_420);
                  StringName::StringName((StringName *)&local_418,(String *)&local_420,false);
                  if (*puVar26 == 0) goto LAB_0010d725;
                  StringName::StringName((StringName *)&local_388,*(String **)(puVar26 + 2),false);
                  BoneMap::_set_skeleton_bone_name(pSVar25,(StringName *)&local_388);
                  if ((StringName::configured != '\0') &&
                     (((local_388 == 0 || (StringName::unref(), StringName::configured != '\0')) &&
                      (local_418 != 0)))) {
                    StringName::unref();
                  }
                  CowData<char32_t>::_unref((CowData<char32_t> *)&local_420);
                }
                else {
                  if (lVar21 == 2) {
                    pSVar25 = *(StringName **)param_1;
                    Skeleton3D::get_bone_name((int)(String *)&local_410);
                    StringName::StringName((StringName *)&local_408,(String *)&local_410,false);
                    if (*puVar26 == 0) goto LAB_0010d725;
                    StringName::StringName((StringName *)&local_388,*(String **)(puVar26 + 2),false)
                    ;
                    BoneMap::_set_skeleton_bone_name(pSVar25,(StringName *)&local_388);
                    if (((StringName::configured != '\0') &&
                        ((local_388 == 0 || (StringName::unref(), StringName::configured != '\0'))))
                       && (local_408 != 0)) {
                      StringName::unref();
                    }
                    CowData<char32_t>::_unref((CowData<char32_t> *)&local_410);
                    pSVar25 = *(StringName **)param_1;
                    lVar21 = *(long *)(pCVar18 + -8);
                    if (lVar21 < 2) goto LAB_0010f49d;
                    Skeleton3D::get_bone_name(iVar8);
                    StringName::StringName((StringName *)&local_388,(String *)&local_3c8,false);
                    uVar20 = (ulong)*puVar26;
                    if (*puVar26 < 2) goto LAB_0010f478;
                    StringName::StringName
                              ((StringName *)&local_3b8,(String *)(*(long *)(puVar26 + 2) + 8),false
                              );
                    BoneMap::_set_skeleton_bone_name(pSVar25,(StringName *)&local_3b8);
                    if (StringName::configured != '\0') {
                      if (local_3b8 != 0) {
                        StringName::unref();
joined_r0x0010f0c6:
                        if (StringName::configured == '\0') goto LAB_0010ed8d;
                      }
LAB_0010ed78:
                      if (local_388 != 0) {
                        StringName::unref();
                      }
                    }
                  }
                  else {
                    if (lVar21 < 3) goto LAB_0010c07d;
                    Vector<int>::slice((long)&local_388,(long)local_3e8);
                    pCVar4 = local_380;
                    if (pCVar18 == local_380) {
                      CowData<int>::_unref((CowData<int> *)&local_380);
                      local_580 = *(StringName **)param_1;
                    }
                    else {
                      CowData<int>::_unref(local_5b0);
                      local_3e0 = pCVar4;
                      local_380 = (CowData<int> *)0x0;
                      CowData<int>::_unref((CowData<int> *)&local_380);
                      local_580 = *(StringName **)param_1;
                      if (pCVar4 == (CowData<int> *)0x0) goto LAB_0010f777;
                    }
                    lVar21 = *(long *)(pCVar4 + -8);
                    if (lVar21 < 1) goto LAB_0010f77a;
                    Skeleton3D::get_bone_name((int)(String *)&local_400);
                    StringName::StringName((StringName *)&local_388,(String *)&local_400,false);
                    if (*puVar26 == 0) goto LAB_0010d725;
                    StringName::StringName((StringName *)&local_3b8,*(String **)(puVar26 + 2),false)
                    ;
                    BoneMap::_set_skeleton_bone_name(local_580,(StringName *)&local_3b8);
                    if (((StringName::configured != '\0') &&
                        ((local_3b8 == 0 || (StringName::unref(), StringName::configured != '\0'))))
                       && (local_388 != 0)) {
                      StringName::unref();
                    }
                    CowData<char32_t>::_unref((CowData<char32_t> *)&local_400);
                    lVar21 = *(long *)(pCVar4 + -8);
                    pSVar25 = *(StringName **)param_1;
                    if (lVar21 < 2) goto LAB_0010f49d;
                    Skeleton3D::get_bone_name(iVar8);
                    StringName::StringName((StringName *)&local_388,(String *)&local_3c8,false);
                    uVar20 = (ulong)*puVar26;
                    if (*puVar26 < 2) goto LAB_0010f478;
                    StringName::StringName
                              ((StringName *)&local_3b8,(String *)(*(long *)(puVar26 + 2) + 8),false
                              );
                    BoneMap::_set_skeleton_bone_name(pSVar25,(StringName *)&local_3b8);
                    if ((StringName::configured != '\0') &&
                       (((local_3b8 == 0 || (StringName::unref(), StringName::configured != '\0'))
                        && (local_388 != 0)))) {
                      StringName::unref();
                    }
                    CowData<char32_t>::_unref((CowData<char32_t> *)&local_3c8);
                    lVar21 = *(long *)(pCVar4 + -8);
                    pSVar25 = *(StringName **)param_1;
                    if (lVar21 < 3) goto LAB_0010f8f1;
                    Skeleton3D::get_bone_name(iVar8);
                    StringName::StringName((StringName *)&local_388,(String *)&local_3c8,false);
                    uVar20 = (ulong)*puVar26;
                    if (*puVar26 < 3) goto LAB_0010d9df;
                    StringName::StringName
                              ((StringName *)&local_3b8,(String *)(*(long *)(puVar26 + 2) + 0x10),
                               false);
                    BoneMap::_set_skeleton_bone_name(pSVar25,(StringName *)&local_3b8);
                    if (StringName::configured != '\0') {
                      if (local_3b8 != 0) {
                        StringName::unref();
                        goto joined_r0x0010f0c6;
                      }
                      goto LAB_0010ed78;
                    }
                  }
LAB_0010ed8d:
                  CowData<char32_t>::_unref((CowData<char32_t> *)&local_3c8);
                }
              }
LAB_0010c07d:
              CowData<int>::resize<false>(local_5b0,0);
              iVar7 = (int)local_598;
              local_598 = local_598 + 1;
              puVar26 = puVar26 + 4;
            } while ((local_598 < *(long *)(pSVar19 + -8)) && (iVar7 != 4));
          }
        }
        else {
          CowData<String>::_copy_on_write((CowData<String> *)&local_390);
          pSVar19 = local_390;
          SortArray<String,_DefaultComparator<String>,true>::sort(local_390,lVar21);
          CowData<int>::resize<false>(local_5b0,0);
          if (pSVar19 != (String *)0x0) goto LAB_0010bf7e;
        }
      }
      CowData<String>::resize<false>((CowData<String> *)&local_3f0,0);
      CowData<String>::_unref((CowData<String> *)&local_390);
      RegEx::~RegEx(local_1d8);
    }
    LocalVector<LocalVector<String,unsigned_int,false,false>,unsigned_int,false,false>::resize
              ((LocalVector<LocalVector<String,unsigned_int,false,false>,unsigned_int,false,false> *
               )&local_3a8,0);
    if (local_3a0 != (uint *)0x0) {
      Memory::free_static(local_3a0,false);
    }
  }
  local_388 = 0;
  String::parse_latin1((String *)&local_388,"shoulder");
  Vector<String>::push_back(local_3f8,(String *)&local_388);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_388);
  local_388 = 0;
  String::parse_latin1((String *)&local_388,"clavicle");
  Vector<String>::push_back(local_3f8,(String *)&local_388);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_388);
  local_388 = 0;
  String::parse_latin1((String *)&local_388,"collar");
  Vector<String>::push_back(local_3f8,(String *)&local_388);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_388);
  uVar11 = search_bone_by_name(this,*(undefined8 *)(this + 0xa10),local_3f8,1,uVar6,0xffffffff,
                               0xffffffffffffffff);
  if (uVar11 == 0xffffffff) {
    _err_print_error("auto_mapping_process","editor/plugins/bone_map_editor_plugin.cpp",0x46c,
                     "Auto Mapping couldn\'t guess LeftShoulder.",0,1);
  }
  else {
    pSVar25 = *(StringName **)param_1;
    Skeleton3D::get_bone_name(iVar17);
    StringName::StringName((StringName *)&local_388,(String *)&local_3a8,false);
    StringName::StringName((StringName *)&local_398,"LeftShoulder",false);
    BoneMap::_set_skeleton_bone_name(pSVar25,(StringName *)&local_398);
    if (((StringName::configured != '\0') &&
        ((local_398 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
       (local_388 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_3a8);
  }
  uVar23 = search_bone_by_name(this,*(undefined8 *)(this + 0xa10),local_3f8,2,uVar6,0xffffffff,
                               0xffffffffffffffff);
  if (uVar23 == 0xffffffff) {
    _err_print_error("auto_mapping_process","editor/plugins/bone_map_editor_plugin.cpp",0x472,
                     "Auto Mapping couldn\'t guess RightShoulder.",0,1);
  }
  else {
    pSVar25 = *(StringName **)param_1;
    Skeleton3D::get_bone_name(iVar17);
    StringName::StringName((StringName *)&local_388,(String *)&local_3a8,false);
    StringName::StringName((StringName *)&local_398,"RightShoulder",false);
    BoneMap::_set_skeleton_bone_name(pSVar25,(StringName *)&local_398);
    if ((StringName::configured != '\0') &&
       (((local_398 == 0 || (StringName::unref(), StringName::configured != '\0')) &&
        (local_388 != 0)))) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_3a8);
  }
  CowData<String>::resize<false>((CowData<String> *)&local_3f0,0);
  local_388 = 0;
  String::parse_latin1((String *)&local_388,"(low|fore).*arm");
  Vector<String>::push_back(local_3f8,(String *)&local_388);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_388);
  local_388 = 0;
  String::parse_latin1((String *)&local_388,"elbow");
  Vector<String>::push_back(local_3f8,(String *)&local_388);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_388);
  local_388 = 0;
  String::parse_latin1((String *)&local_388,"arm");
  Vector<String>::push_back(local_3f8,(String *)&local_388);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_388);
  bVar1 = uVar11 != 0xffffffff && local_59c != 0xffffffff;
  if ((uVar11 != 0xffffffff && local_59c != 0xffffffff) &&
     (iVar7 = search_bone_by_name(this,*(undefined8 *)(this + 0xa10),local_3f8,1,uVar11,local_59c,
                                  0xffffffffffffffff), iVar7 != -1)) {
    pSVar25 = *(StringName **)param_1;
    Skeleton3D::get_bone_name(iVar17);
    StringName::StringName((StringName *)&local_388,(String *)&local_3a8,false);
    StringName::StringName((StringName *)&local_398,"LeftLowerArm",false);
    BoneMap::_set_skeleton_bone_name(pSVar25,(StringName *)&local_398);
    if (((StringName::configured != '\0') &&
        ((local_398 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
       (local_388 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_3a8);
  }
  else {
    bVar1 = false;
    iVar7 = -1;
    _err_print_error("auto_mapping_process","editor/plugins/bone_map_editor_plugin.cpp",0x481,
                     "Auto Mapping couldn\'t guess LeftLowerArm.",0,1);
  }
  bVar3 = uVar23 != 0xffffffff && local_560 != 0xffffffff;
  if ((uVar23 != 0xffffffff && local_560 != 0xffffffff) &&
     (iVar8 = search_bone_by_name(this,*(undefined8 *)(this + 0xa10),local_3f8,2,uVar23,local_560,
                                  0xffffffffffffffff), iVar8 != -1)) {
    pSVar25 = *(StringName **)param_1;
    Skeleton3D::get_bone_name(iVar17);
    StringName::StringName((StringName *)&local_388,(String *)&local_3a8,false);
    StringName::StringName((StringName *)&local_398,"RightLowerArm",false);
    BoneMap::_set_skeleton_bone_name(pSVar25,(StringName *)&local_398);
    if ((StringName::configured != '\0') &&
       (((local_398 == 0 || (StringName::unref(), StringName::configured != '\0')) &&
        (local_388 != 0)))) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_3a8);
  }
  else {
    bVar3 = false;
    _err_print_error("auto_mapping_process","editor/plugins/bone_map_editor_plugin.cpp",0x48a,
                     "Auto Mapping couldn\'t guess RightLowerArm.",0,1);
    iVar8 = -1;
  }
  CowData<String>::resize<false>((CowData<String> *)&local_3f0,0);
  local_388 = 0;
  String::parse_latin1((String *)&local_388,"up.*arm");
  Vector<String>::push_back(local_3f8,(String *)&local_388);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_388);
  local_388 = 0;
  String::parse_latin1((String *)&local_388,"arm");
  Vector<String>::push_back(local_3f8,(String *)&local_388);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_388);
  if ((bVar1) &&
     (iVar7 = search_bone_by_name(this,*(undefined8 *)(this + 0xa10),local_3f8,1,uVar11,iVar7,
                                  0xffffffffffffffff), iVar7 != -1)) {
    pSVar25 = *(StringName **)param_1;
    Skeleton3D::get_bone_name(iVar17);
    StringName::StringName((StringName *)&local_388,(String *)&local_3a8,false);
    StringName::StringName((StringName *)&local_398,"LeftUpperArm",false);
    BoneMap::_set_skeleton_bone_name(pSVar25,(StringName *)&local_398);
    if (((StringName::configured != '\0') &&
        ((local_398 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
       (local_388 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_3a8);
  }
  else {
    _err_print_error("auto_mapping_process","editor/plugins/bone_map_editor_plugin.cpp",0x497,
                     "Auto Mapping couldn\'t guess LeftUpperArm.",0,1);
  }
  if ((bVar3) &&
     (iVar7 = search_bone_by_name(this,*(undefined8 *)(this + 0xa10),local_3f8,2,uVar23,iVar8,
                                  0xffffffffffffffff), iVar7 != -1)) {
    pSVar25 = *(StringName **)param_1;
    Skeleton3D::get_bone_name(iVar17);
    StringName::StringName((StringName *)&local_388,(String *)&local_3a8,false);
    StringName::StringName((StringName *)&local_398,"RightUpperArm",false);
    BoneMap::_set_skeleton_bone_name(pSVar25,(StringName *)&local_398);
    if ((StringName::configured != '\0') &&
       (((local_398 == 0 || (StringName::unref(), StringName::configured != '\0')) &&
        (local_388 != 0)))) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_3a8);
  }
  else {
    _err_print_error("auto_mapping_process","editor/plugins/bone_map_editor_plugin.cpp",0x4a0,
                     "Auto Mapping couldn\'t guess RightUpperArm.",0,1);
  }
  CowData<String>::resize<false>((CowData<String> *)&local_3f0,0);
  local_388 = 0;
  String::parse_latin1((String *)&local_388,"neck");
  Vector<String>::push_back(local_3f8,(String *)&local_388);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_388);
  local_388 = 0;
  String::parse_latin1((String *)&local_388,"head");
  Vector<String>::push_back(local_3f8,(String *)&local_388);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_388);
  local_388 = 0;
  String::parse_latin1((String *)&local_388,"face");
  Vector<String>::push_back(local_3f8,(String *)&local_388);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_388);
  iVar7 = search_bone_by_name(this,*(undefined8 *)(this + 0xa10),local_3f8,0,uVar6,0xffffffff,
                              0xffffffffffffffff);
  CowData<String>::resize<false>((CowData<String> *)&local_3f0,0);
  if (iVar7 == -1) {
    if (uVar11 == 0xffffffff) {
      if (uVar23 == 0xffffffff) {
        if (local_59c != 0xffffffff) goto LAB_0010e863;
      }
      else if (local_59c != 0xffffffff) goto LAB_0010d89f;
    }
    else {
      local_59c = uVar11;
      if (uVar23 == 0xffffffff) {
LAB_0010e863:
        if (local_560 == 0xffffffff) goto LAB_0010c6f2;
        uVar20 = (ulong)local_560;
      }
      else {
LAB_0010d89f:
        uVar20 = (ulong)uVar23;
      }
      do {
        if (((uVar6 != local_59c & (byte)~((byte)(local_59c >> 0x18) | (byte)(uVar20 >> 0x18)) >> 7)
             == 0) || (uVar6 == (uint)uVar20)) goto LAB_0010c6f2;
        local_59c = Skeleton3D::get_bone_parent((int)*(undefined8 *)(this + 0xa10));
        uVar13 = Skeleton3D::get_bone_parent((int)*(undefined8 *)(this + 0xa10));
        uVar20 = (ulong)uVar13;
      } while (local_59c != uVar13);
      Skeleton3D::get_bone_children(iVar9);
      pCVar18 = local_380;
      lVar21 = CowData<int>::find(local_380,(int *)(ulong)uVar13,0);
      if (-1 < lVar21) {
        Vector<int>::remove_at((Vector<int> *)&local_388,lVar21);
        pCVar18 = local_380;
      }
      lVar21 = CowData<int>::find(pCVar18,(int *)(ulong)uVar13,0);
      if (-1 < lVar21) {
        Vector<int>::remove_at((Vector<int> *)&local_388,lVar21);
      }
      local_3a8 = 0;
      String::parse_latin1((String *)&local_3a8,"spine");
      lVar21 = 0;
      iVar8 = iVar7;
      if (local_380 != (CowData<int> *)0x0) {
        while (iVar8 = iVar7, lVar21 < *(long *)(local_380 + -8)) {
          iVar8 = *(int *)(local_380 + lVar21 * 4);
          Skeleton3D::get_bone_name(iVar12);
          cVar5 = is_match_with_bone_name(this,(String *)&local_398,(String *)&local_3a8);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_398);
          if ((cVar5 != '\0') ||
             (lVar21 = lVar21 + 1, iVar8 = iVar7, local_380 == (CowData<int> *)0x0)) break;
        }
      }
      iVar7 = iVar8;
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_3a8);
      CowData<int>::_unref((CowData<int> *)&local_380);
    }
  }
LAB_0010c6f2:
  local_388 = 0;
  String::parse_latin1((String *)&local_388,"head");
  Vector<String>::push_back(local_3f8,(String *)&local_388);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_388);
  local_388 = 0;
  String::parse_latin1((String *)&local_388,"face");
  Vector<String>::push_back(local_3f8,(String *)&local_388);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_388);
  iVar12 = search_bone_by_name(this,*(undefined8 *)(this + 0xa10),local_3f8,0,iVar7,0xffffffff,
                               0xffffffffffffffff);
  if (iVar12 == -1) {
    if (iVar7 != -1) {
      Skeleton3D::get_bone_children(iVar9);
      pCVar18 = local_380;
      if (local_3e0 != local_380) {
        CowData<int>::_unref(local_5b0);
        pCVar18 = local_380;
        local_380 = (CowData<int> *)0x0;
        local_3e0 = pCVar18;
      }
      CowData<int>::_unref((CowData<int> *)&local_380);
      if (((pCVar18 != (CowData<int> *)0x0) && (*(long *)(pCVar18 + -8) == 1)) &&
         (iVar12 = *(int *)pCVar18, iVar12 != -1)) goto LAB_0010cd18;
      pSVar25 = *(StringName **)param_1;
      Skeleton3D::get_bone_name(iVar17);
      StringName::StringName((StringName *)&local_388,(String *)&local_3a8,false);
      StringName::StringName((StringName *)&local_398,"Head",false);
      BoneMap::_set_skeleton_bone_name(pSVar25,(StringName *)&local_398);
      if ((StringName::configured != '\0') &&
         (((local_398 == 0 || (StringName::unref(), StringName::configured != '\0')) &&
          (local_388 != 0)))) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_3a8);
      CowData<String>::resize<false>((CowData<String> *)&local_3f0,0);
      CowData<int>::resize<false>(local_5b0,0);
      iVar12 = iVar7;
      goto LAB_0010d4b8;
    }
    _err_print_error("auto_mapping_process","editor/plugins/bone_map_editor_plugin.cpp",0x4de,
                     "Auto Mapping couldn\'t guess Neck or Head.",0,1);
    CowData<String>::resize<false>((CowData<String> *)&local_3f0,0);
    CowData<int>::resize<false>(local_5b0,0);
  }
  else {
LAB_0010cd18:
    pSVar25 = *(StringName **)param_1;
    Skeleton3D::get_bone_name(iVar17);
    StringName::StringName((StringName *)&local_388,(String *)&local_3a8,false);
    StringName::StringName((StringName *)&local_398,"Neck",false);
    BoneMap::_set_skeleton_bone_name(pSVar25,(StringName *)&local_398);
    if (((StringName::configured != '\0') &&
        ((local_398 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
       (local_388 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_3a8);
    pSVar25 = *(StringName **)param_1;
    Skeleton3D::get_bone_name(iVar17);
    StringName::StringName((StringName *)&local_388,(String *)&local_3a8,false);
    StringName::StringName((StringName *)&local_398,"Head",false);
    BoneMap::_set_skeleton_bone_name(pSVar25,(StringName *)&local_398);
    if (((StringName::configured != '\0') &&
        ((local_398 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
       (local_388 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_3a8);
    CowData<String>::resize<false>((CowData<String> *)&local_3f0,0);
    CowData<int>::resize<false>(local_5b0,0);
    if (iVar7 == -1) {
LAB_0010d4b8:
      iVar7 = iVar12;
    }
    local_388 = 0;
    String::parse_latin1((String *)&local_388,"eye(?!.*(brow|lash|lid))");
    Vector<String>::push_back(local_3f8,(String *)&local_388);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_388);
    iVar12 = search_bone_by_name(this,*(undefined8 *)(this + 0xa10),local_3f8,1,iVar7,0xffffffff,
                                 0xffffffffffffffff);
    if (iVar12 == -1) {
      _err_print_error("auto_mapping_process","editor/plugins/bone_map_editor_plugin.cpp",0x4ed,
                       "Auto Mapping couldn\'t guess LeftEye.",0,1);
    }
    else {
      pSVar25 = *(StringName **)param_1;
      Skeleton3D::get_bone_name(iVar17);
      StringName::StringName((StringName *)&local_388,(String *)&local_3a8,false);
      StringName::StringName((StringName *)&local_398,"LeftEye",false);
      BoneMap::_set_skeleton_bone_name(pSVar25,(StringName *)&local_398);
      if (((StringName::configured != '\0') &&
          ((local_398 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
         (local_388 != 0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_3a8);
    }
    iVar12 = search_bone_by_name(this,*(undefined8 *)(this + 0xa10),local_3f8,2,iVar7,0xffffffff,
                                 0xffffffffffffffff);
    if (iVar12 == -1) {
      _err_print_error("auto_mapping_process","editor/plugins/bone_map_editor_plugin.cpp",0x4f4,
                       "Auto Mapping couldn\'t guess RightEye.",0,1);
    }
    else {
      pSVar25 = *(StringName **)param_1;
      Skeleton3D::get_bone_name(iVar17);
      StringName::StringName((StringName *)&local_388,(String *)&local_3a8,false);
      StringName::StringName((StringName *)&local_398,"RightEye",false);
      BoneMap::_set_skeleton_bone_name(pSVar25,(StringName *)&local_398);
      if (((StringName::configured != '\0') &&
          ((local_398 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
         (local_388 != 0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_3a8);
    }
    CowData<String>::resize<false>((CowData<String> *)&local_3f0,0);
    local_388 = 0;
    String::parse_latin1((String *)&local_388,"jaw");
    Vector<String>::push_back(local_3f8,(String *)&local_388);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_388);
    iVar7 = search_bone_by_name(this,*(undefined8 *)(this + 0xa10),local_3f8,0,iVar7,0xffffffff,
                                0xffffffffffffffff);
    if (iVar7 == -1) {
      _err_print_error("auto_mapping_process","editor/plugins/bone_map_editor_plugin.cpp",0x4fe,
                       "Auto Mapping couldn\'t guess Jaw.",0,1);
    }
    else {
      pSVar25 = *(StringName **)param_1;
      Skeleton3D::get_bone_name(iVar17);
      StringName::StringName((StringName *)&local_388,(String *)&local_3a8,false);
      StringName::StringName((StringName *)&local_398,"Jaw",false);
      BoneMap::_set_skeleton_bone_name(pSVar25,(StringName *)&local_398);
      if ((StringName::configured != '\0') &&
         (((local_398 == 0 || (StringName::unref(), StringName::configured != '\0')) &&
          (local_388 != 0)))) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_3a8);
    }
    CowData<String>::resize<false>((CowData<String> *)&local_3f0,0);
    uVar13 = Skeleton3D::get_bone_parent((int)*(undefined8 *)(this + 0xa10));
    if (uVar11 == 0xffffffff) {
      if (uVar23 != 0xffffffff) {
LAB_0010d15e:
        bVar1 = true;
LAB_0010d164:
        uVar11 = Skeleton3D::get_bone_parent((int)*(undefined8 *)(this + 0xa10));
        if ((-1 < (int)uVar11) && (uVar6 != uVar11)) {
          while (uVar13 != uVar11) {
            uVar11 = Skeleton3D::get_bone_parent((int)*(undefined8 *)(this + 0xa10));
            if ((uVar6 == uVar11) || ((int)uVar11 < 0)) goto LAB_0010d1b4;
          }
          if (bVar1) goto LAB_0010d2d6;
        }
        goto LAB_0010d1b4;
      }
LAB_0010d77b:
      if (uVar13 != 0xffffffff) {
LAB_0010d2d6:
        uVar11 = Skeleton3D::get_bone_parent((int)*(undefined8 *)(this + 0xa10));
        if ((-1 < (int)uVar11) && (uVar6 != uVar11)) {
          do {
            Vector<int>::push_back(local_3e8,uVar11);
            uVar11 = Skeleton3D::get_bone_parent((int)*(undefined8 *)(this + 0xa10));
            if (uVar6 == uVar11) break;
          } while (-1 < (int)uVar11);
        }
        Vector<int>::reverse(local_3e8);
        pCVar18 = local_3e0;
        if ((local_3e0 == (CowData<int> *)0x0) || (lVar21 = *(long *)(local_3e0 + -8), lVar21 == 0))
        {
          pSVar25 = *(StringName **)param_1;
          Skeleton3D::get_bone_name(iVar17);
          StringName::StringName((StringName *)&local_388,(String *)&local_3a8,false);
          pcVar16 = "Spine";
LAB_0010dad5:
          StringName::StringName((StringName *)&local_398,pcVar16,false);
          BoneMap::_set_skeleton_bone_name(pSVar25,(StringName *)&local_398);
          if ((StringName::configured != '\0') &&
             (((local_398 == 0 || (StringName::unref(), StringName::configured != '\0')) &&
              (local_388 != 0)))) {
            StringName::unref();
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_3a8);
        }
        else {
          if (lVar21 == 1) {
            pSVar25 = *(StringName **)param_1;
            Skeleton3D::get_bone_name(iVar17);
            StringName::StringName((StringName *)&local_388,(String *)&local_3a8,false);
            StringName::StringName((StringName *)&local_398,"Spine",false);
            BoneMap::_set_skeleton_bone_name(pSVar25,(StringName *)&local_398);
            if ((StringName::configured != '\0') &&
               (((local_398 == 0 || (StringName::unref(), StringName::configured != '\0')) &&
                (local_388 != 0)))) {
              StringName::unref();
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_3a8);
            pSVar25 = *(StringName **)param_1;
            Skeleton3D::get_bone_name(iVar17);
            StringName::StringName((StringName *)&local_388,(String *)&local_3a8,false);
            pcVar16 = "Chest";
            goto LAB_0010dad5;
          }
          if (1 < lVar21) {
            pSVar25 = *(StringName **)param_1;
            Skeleton3D::get_bone_name(iVar17);
            StringName::StringName((StringName *)&local_388,(String *)&local_3a8,false);
            StringName::StringName((StringName *)&local_398,"Spine",false);
            BoneMap::_set_skeleton_bone_name(pSVar25,(StringName *)&local_398);
            if (((StringName::configured != '\0') &&
                ((local_398 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
               (local_388 != 0)) {
              StringName::unref();
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_3a8);
            lVar21 = *(long *)(pCVar18 + -8);
            pSVar25 = *(StringName **)param_1;
            uVar20 = lVar21 - 1;
            if ((long)uVar20 < 0) goto LAB_00109253;
            Skeleton3D::get_bone_name(iVar17);
            StringName::StringName((StringName *)&local_388,(String *)&local_3a8,false);
            StringName::StringName((StringName *)&local_398,"Chest",false);
            BoneMap::_set_skeleton_bone_name(pSVar25,(StringName *)&local_398);
            if (((StringName::configured != '\0') &&
                ((local_398 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
               (local_388 != 0)) {
              StringName::unref();
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_3a8);
            pSVar25 = *(StringName **)param_1;
            Skeleton3D::get_bone_name(iVar17);
            StringName::StringName((StringName *)&local_388,(String *)&local_3a8,false);
            pcVar16 = "UpperChest";
            goto LAB_0010dad5;
          }
        }
        CowData<int>::resize<false>(local_5b0,0);
        _err_print_error("auto_mapping_process","editor/plugins/bone_map_editor_plugin.cpp",0x54a,
                         "Finish auto mapping.",0,1);
        goto joined_r0x0010d396;
      }
    }
    else {
      uVar11 = Skeleton3D::get_bone_parent((int)*(undefined8 *)(this + 0xa10));
      while ((uVar6 != uVar11 && (-1 < (int)uVar11))) {
        if (uVar13 == uVar11) {
          if (uVar23 == 0xffffffff) goto LAB_0010d2d6;
          goto LAB_0010d15e;
        }
        uVar11 = Skeleton3D::get_bone_parent((int)*(undefined8 *)(this + 0xa10));
      }
      if (uVar23 != 0xffffffff) {
        bVar1 = false;
        goto LAB_0010d164;
      }
LAB_0010d1b4:
      iVar7 = Skeleton3D::get_bone_parent((int)*(undefined8 *)(this + 0xa10));
      iVar12 = Skeleton3D::get_bone_parent((int)*(undefined8 *)(this + 0xa10));
      if (iVar7 == iVar12) {
        uVar13 = Skeleton3D::get_bone_parent((int)*(undefined8 *)(this + 0xa10));
        goto LAB_0010d77b;
      }
    }
    _err_print_error("auto_mapping_process","editor/plugins/bone_map_editor_plugin.cpp",0x532,
                     "Auto Mapping couldn\'t guess Chest or UpperChest. Abort auto mapping.",0,1);
  }
joined_r0x0010d396:
  if ((local_3d0 != (CowData<char32_t> *)0x0) &&
     (LocalVector<String,unsigned_int,false,false>::resize
                ((LocalVector<String,unsigned_int,false,false> *)&local_3d8,0),
     local_3d0 != (CowData<char32_t> *)0x0)) {
    Memory::free_static(local_3d0,false);
  }
LAB_0010caa2:
  local_5b0 = (CowData<int> *)&local_3e0;
  local_5c0 = (CowData<String> *)&local_3f0;
  CowData<int>::_unref(local_5b0);
  CowData<String>::_unref(local_5c0);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_0010f49d:
  uVar20 = 1;
  goto LAB_00109253;
LAB_0010f478:
  lVar21 = 1;
  goto LAB_0010d745;
LAB_0010f8f1:
  uVar20 = 2;
  goto LAB_00109253;
LAB_0010f777:
  lVar21 = 0;
LAB_0010f77a:
  uVar20 = 0;
LAB_00109253:
  _err_print_index_error
            ("get","./core/templates/cowdata.h",0xdb,uVar20,lVar21,"p_index","size()","",false,true)
  ;
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}



/* BoneMapper::_run_auto_mapping() */

void __thiscall BoneMapper::_run_auto_mapping(BoneMapper *this)

{
  auto_mapping_process(this,(Ref *)(this + 0xa18));
  recreate_items(this);
  return;
}



/* BoneMapper::_profile_changed(String const&, Variant const&, String const&, bool) */

void BoneMapper::_profile_changed(String *param_1,Variant *param_2,String *param_3,bool param_4)

{
  StringName *pSVar1;
  char cVar2;
  long lVar3;
  long in_FS_OFFSET;
  Object *local_38;
  long local_30;
  
  pSVar1 = *(StringName **)(param_1 + 0xa18);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  StringName::StringName((StringName *)&local_38,(String *)param_2,false);
  Object::set(pSVar1,(Variant *)&local_38,(bool *)param_3);
  if ((StringName::configured != '\0') && (local_38 != (Object *)0x0)) {
    StringName::unref();
  }
  BoneMap::get_profile();
  if (local_38 != (Object *)0x0) {
    lVar3 = __dynamic_cast(local_38,&Object::typeinfo,&SkeletonProfileHumanoid::typeinfo,0);
    if (lVar3 != 0) {
      auto_mapping_process((BoneMapper *)param_1,(Ref *)(param_1 + 0xa18));
      recreate_items((BoneMapper *)param_1);
      if (local_38 == (Object *)0x0) goto LAB_0010fae1;
    }
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      cVar2 = predelete_handler(local_38);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)local_38 + 0x140))(local_38);
        Memory::free_static(local_38,false);
      }
    }
  }
LAB_0010fae1:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
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
  return (uint)CONCAT71(0x1246,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1246,(undefined4 *)param_1 == &get_class_ptr_static()::ptr);
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



/* Viewport::is_size_2d_override_stretch_enabled() const */

undefined8 Viewport::is_size_2d_override_stretch_enabled(void)

{
  return 1;
}



/* Viewport::is_sub_viewport() const */

undefined8 Viewport::is_sub_viewport(void)

{
  return 0;
}



/* Window::_popup_adjust_rect() const */

undefined1  [16] Window::_popup_adjust_rect(void)

{
  return ZEXT816(0);
}



/* AcceptDialog::ok_pressed() */

void AcceptDialog::ok_pressed(void)

{
  return;
}



/* AcceptDialog::cancel_pressed() */

void AcceptDialog::cancel_pressed(void)

{
  return;
}



/* AcceptDialog::custom_action(String const&) */

void AcceptDialog::custom_action(String *param_1)

{
  return;
}



/* ColorRect::is_class_ptr(void*) const */

uint __thiscall ColorRect::is_class_ptr(ColorRect *this,void *param_1)

{
  return (uint)CONCAT71(0x1245,(undefined4 *)param_1 == &Control::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1244,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1246,(undefined4 *)param_1 == &CanvasItem::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1246,(undefined4 *)param_1 == &Node::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1246,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* BonePicker::is_class_ptr(void*) const */

uint BonePicker::is_class_ptr(void *param_1)

{
  undefined4 in_EDX;
  undefined4 *in_RSI;
  
  return (uint)CONCAT71(0x1245,in_RSI == &AcceptDialog::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1244,in_RSI == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1245,in_RSI == &Window::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1245,in_RSI == &Viewport::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1246,in_RSI == &Node::get_class_ptr_static()::ptr) |
         CONCAT31((int3)((uint)in_EDX >> 8),in_RSI == &Object::get_class_ptr_static()::ptr);
}



/* BonePicker::_property_can_revertv(StringName const&) const */

undefined8 BonePicker::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* BonePicker::_property_get_revertv(StringName const&, Variant&) const */

undefined8 BonePicker::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* EditorInspectorPluginBoneMap::is_class_ptr(void*) const */

uint __thiscall
EditorInspectorPluginBoneMap::is_class_ptr(EditorInspectorPluginBoneMap *this,void *param_1)

{
  return (uint)CONCAT71(0x1244,(undefined4 *)param_1 ==
                               &EditorInspectorPlugin::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1244,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1246,(undefined4 *)param_1 == &RefCounted::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1246,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* EditorInspectorPluginBoneMap::_getv(StringName const&, Variant&) const */

undefined8 EditorInspectorPluginBoneMap::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* EditorInspectorPluginBoneMap::_setv(StringName const&, Variant const&) */

undefined8 EditorInspectorPluginBoneMap::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* EditorInspectorPluginBoneMap::_validate_propertyv(PropertyInfo&) const */

void EditorInspectorPluginBoneMap::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* EditorInspectorPluginBoneMap::_property_can_revertv(StringName const&) const */

undefined8 EditorInspectorPluginBoneMap::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* EditorInspectorPluginBoneMap::_property_get_revertv(StringName const&, Variant&) const */

undefined8 EditorInspectorPluginBoneMap::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* EditorInspectorPluginBoneMap::_notificationv(int, bool) */

void EditorInspectorPluginBoneMap::_notificationv(int param_1,bool param_2)

{
  return;
}



/* BoneMapEditorPlugin::is_class_ptr(void*) const */

uint __thiscall BoneMapEditorPlugin::is_class_ptr(BoneMapEditorPlugin *this,void *param_1)

{
  return (uint)CONCAT71(0x1245,(undefined4 *)param_1 == &EditorPlugin::get_class_ptr_static()::ptr)
         | (uint)CONCAT71(0x1244,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1246,(undefined4 *)param_1 == &Node::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1246,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* BoneMapEditorPlugin::_getv(StringName const&, Variant&) const */

undefined8 BoneMapEditorPlugin::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* BoneMapEditorPlugin::_setv(StringName const&, Variant const&) */

undefined8 BoneMapEditorPlugin::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* BoneMapEditorPlugin::_property_can_revertv(StringName const&) const */

undefined8 BoneMapEditorPlugin::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* BoneMapEditorPlugin::_property_get_revertv(StringName const&, Variant&) const */

undefined8 BoneMapEditorPlugin::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* CallableCustomMethodPointer<BoneMapper, void, StringName const&>::~CallableCustomMethodPointer()
    */

void __thiscall
CallableCustomMethodPointer<BoneMapper,void,StringName_const&>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<BoneMapper,void,StringName_const&> *this)

{
  return;
}



/* CallableCustomMethodPointer<BoneMapper, void, int>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<BoneMapper,void,int>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<BoneMapper,void,int> *this)

{
  return;
}



/* CallableCustomMethodPointer<BoneMapper, void, String const&, Variant const&, String const&,
   bool>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<BoneMapper,void,String_const&,Variant_const&,String_const&,bool>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<BoneMapper,void,String_const&,Variant_const&,String_const&,bool>
           *this)

{
  return;
}



/* CallableCustomMethodPointer<BoneMapper, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<BoneMapper,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<BoneMapper,void> *this)

{
  return;
}



/* CallableCustomMethodPointer<BonePicker, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<BonePicker,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<BonePicker,void> *this)

{
  return;
}



/* CallableCustomMethodPointer<BoneMapperItem, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<BoneMapperItem,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<BoneMapperItem,void> *this)

{
  return;
}



/* CallableCustomMethodPointer<BoneMapperItem, void, String const&, Variant const&, String const&,
   bool>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<BoneMapperItem,void,String_const&,Variant_const&,String_const&,bool>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<BoneMapperItem,void,String_const&,Variant_const&,String_const&,bool>
           *this)

{
  return;
}



/* MethodBindTRC<int>::_gen_argument_type(int) const */

undefined8 MethodBindTRC<int>::_gen_argument_type(int param_1)

{
  return 2;
}



/* MethodBindTRC<int>::get_argument_meta(int) const */

uint __thiscall MethodBindTRC<int>::get_argument_meta(MethodBindTRC<int> *this,int param_1)

{
  return param_1 >> 0x1f & 3;
}



/* MethodBindT<int>::_gen_argument_type(int) const */

char __thiscall MethodBindT<int>::_gen_argument_type(MethodBindT<int> *this,int param_1)

{
  return (param_1 == 0) * '\x02';
}



/* MethodBindT<int>::get_argument_meta(int) const */

byte __thiscall MethodBindT<int>::get_argument_meta(MethodBindT<int> *this,int param_1)

{
  return -(param_1 == 0) & 3;
}



/* CallableCustomMethodPointer<BoneMapper, void, StringName const&>::get_argument_count(bool&) const
    */

undefined8 __thiscall
CallableCustomMethodPointer<BoneMapper,void,StringName_const&>::get_argument_count
          (CallableCustomMethodPointer<BoneMapper,void,StringName_const&> *this,bool *param_1)

{
  *param_1 = true;
  return 1;
}



/* CallableCustomMethodPointer<BoneMapper, void, int>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<BoneMapper,void,int>::get_argument_count
          (CallableCustomMethodPointer<BoneMapper,void,int> *this,bool *param_1)

{
  *param_1 = true;
  return 1;
}



/* CallableCustomMethodPointer<BoneMapper, void, String const&, Variant const&, String const&,
   bool>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<BoneMapper,void,String_const&,Variant_const&,String_const&,bool>::
get_argument_count(CallableCustomMethodPointer<BoneMapper,void,String_const&,Variant_const&,String_const&,bool>
                   *this,bool *param_1)

{
  *param_1 = true;
  return 4;
}



/* CallableCustomMethodPointer<BoneMapper, void>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<BoneMapper,void>::get_argument_count
          (CallableCustomMethodPointer<BoneMapper,void> *this,bool *param_1)

{
  *param_1 = true;
  return 0;
}



/* CallableCustomMethodPointer<BonePicker, void>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<BonePicker,void>::get_argument_count
          (CallableCustomMethodPointer<BonePicker,void> *this,bool *param_1)

{
  *param_1 = true;
  return 0;
}



/* CallableCustomMethodPointer<BoneMapperItem, void>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<BoneMapperItem,void>::get_argument_count
          (CallableCustomMethodPointer<BoneMapperItem,void> *this,bool *param_1)

{
  *param_1 = true;
  return 0;
}



/* CallableCustomMethodPointer<BoneMapperItem, void, String const&, Variant const&, String const&,
   bool>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<BoneMapperItem,void,String_const&,Variant_const&,String_const&,bool>::
get_argument_count(CallableCustomMethodPointer<BoneMapperItem,void,String_const&,Variant_const&,String_const&,bool>
                   *this,bool *param_1)

{
  *param_1 = true;
  return 4;
}



/* CallableCustomMethodPointerBase::get_method() const */

void CallableCustomMethodPointerBase::get_method(void)

{
  long in_RSI;
  StringName *in_RDI;
  
  StringName::StringName(in_RDI,*(char **)(in_RSI + 0x20),false);
  return;
}



/* CallableCustomMethodPointer<BoneMapperItem, void, String const&, Variant const&, String const&,
   bool>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<BoneMapperItem,void,String_const&,Variant_const&,String_const&,bool>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<BoneMapperItem,void,String_const&,Variant_const&,String_const&,bool>
           *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<BoneMapperItem, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<BoneMapperItem,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<BoneMapperItem,void> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<BonePicker, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<BonePicker,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<BonePicker,void> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<BoneMapper, void, String const&, Variant const&, String const&,
   bool>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<BoneMapper,void,String_const&,Variant_const&,String_const&,bool>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<BoneMapper,void,String_const&,Variant_const&,String_const&,bool>
           *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<BoneMapper, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<BoneMapper,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<BoneMapper,void> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<BoneMapper, void, int>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<BoneMapper,void,int>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<BoneMapper,void,int> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<BoneMapper, void, StringName const&>::~CallableCustomMethodPointer()
    */

void __thiscall
CallableCustomMethodPointer<BoneMapper,void,StringName_const&>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<BoneMapper,void,StringName_const&> *this)

{
  operator_delete(this,0x48);
  return;
}



/* ColorRect::~ColorRect() */

void __thiscall ColorRect::~ColorRect(ColorRect *this)

{
  *(undefined ***)this = &PTR__initialize_classv_001226a0;
  Control::~Control((Control *)this);
  return;
}



/* ColorRect::~ColorRect() */

void __thiscall ColorRect::~ColorRect(ColorRect *this)

{
  *(undefined ***)this = &PTR__initialize_classv_001226a0;
  Control::~Control((Control *)this);
  operator_delete(this,0x9d8);
  return;
}



/* HBoxContainer::_property_get_revertv(StringName const&, Variant&) const */

undefined8 HBoxContainer::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_get_revert_0012b020 != Object::_property_get_revert) {
    uVar1 = Control::_property_get_revert(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* VBoxContainer::_property_get_revertv(StringName const&, Variant&) const */

undefined8 VBoxContainer::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_get_revert_0012b020 != Object::_property_get_revert) {
    uVar1 = Control::_property_get_revert(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* ColorRect::_property_get_revertv(StringName const&, Variant&) const */

undefined8 ColorRect::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_get_revert_0012b020 != Object::_property_get_revert) {
    uVar1 = Control::_property_get_revert(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* BoneMapperButton::_property_get_revertv(StringName const&, Variant&) const */

undefined8 BoneMapperButton::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_get_revert_0012b020 != Object::_property_get_revert) {
    uVar1 = Control::_property_get_revert(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* BoneMapperItem::_property_get_revertv(StringName const&, Variant&) const */

undefined8 BoneMapperItem::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_get_revert_0012b020 != Object::_property_get_revert) {
    uVar1 = Control::_property_get_revert(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* BoneMapper::_property_get_revertv(StringName const&, Variant&) const */

undefined8 BoneMapper::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_get_revert_0012b020 != Object::_property_get_revert) {
    uVar1 = Control::_property_get_revert(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* BoneMapEditor::_property_get_revertv(StringName const&, Variant&) const */

undefined8 BoneMapEditor::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_get_revert_0012b020 != Object::_property_get_revert) {
    uVar1 = Control::_property_get_revert(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* HBoxContainer::_property_can_revertv(StringName const&) const */

undefined8 HBoxContainer::_property_can_revertv(StringName *param_1)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_can_revert_0012b028 != Object::_property_can_revert) {
    uVar1 = Control::_property_can_revert(param_1);
    return uVar1;
  }
  return 0;
}



/* VBoxContainer::_property_can_revertv(StringName const&) const */

undefined8 VBoxContainer::_property_can_revertv(StringName *param_1)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_can_revert_0012b028 != Object::_property_can_revert) {
    uVar1 = Control::_property_can_revert(param_1);
    return uVar1;
  }
  return 0;
}



/* ColorRect::_property_can_revertv(StringName const&) const */

undefined8 ColorRect::_property_can_revertv(StringName *param_1)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_can_revert_0012b028 != Object::_property_can_revert) {
    uVar1 = Control::_property_can_revert(param_1);
    return uVar1;
  }
  return 0;
}



/* BoneMapperButton::_property_can_revertv(StringName const&) const */

undefined8 BoneMapperButton::_property_can_revertv(StringName *param_1)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_can_revert_0012b028 != Object::_property_can_revert) {
    uVar1 = Control::_property_can_revert(param_1);
    return uVar1;
  }
  return 0;
}



/* BoneMapperItem::_property_can_revertv(StringName const&) const */

undefined8 BoneMapperItem::_property_can_revertv(StringName *param_1)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_can_revert_0012b028 != Object::_property_can_revert) {
    uVar1 = Control::_property_can_revert(param_1);
    return uVar1;
  }
  return 0;
}



/* BoneMapper::_property_can_revertv(StringName const&) const */

undefined8 BoneMapper::_property_can_revertv(StringName *param_1)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_can_revert_0012b028 != Object::_property_can_revert) {
    uVar1 = Control::_property_can_revert(param_1);
    return uVar1;
  }
  return 0;
}



/* BoneMapEditor::_property_can_revertv(StringName const&) const */

undefined8 BoneMapEditor::_property_can_revertv(StringName *param_1)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_can_revert_0012b028 != Object::_property_can_revert) {
    uVar1 = Control::_property_can_revert(param_1);
    return uVar1;
  }
  return 0;
}



/* BoneMapEditorPlugin::_validate_propertyv(PropertyInfo&) const */

void BoneMapEditorPlugin::_validate_propertyv(PropertyInfo *param_1)

{
  if ((code *)PTR__validate_property_0012b030 != Object::_validate_property) {
    Node::_validate_property(param_1);
    return;
  }
  return;
}



/* RefCounted::~RefCounted() */

void __thiscall RefCounted::~RefCounted(RefCounted *this)

{
  *(undefined ***)this = &PTR__initialize_classv_00121e50;
  Object::~Object((Object *)this);
  return;
}



/* RefCounted::~RefCounted() */

void __thiscall RefCounted::~RefCounted(RefCounted *this)

{
  *(undefined ***)this = &PTR__initialize_classv_00121e50;
  Object::~Object((Object *)this);
  operator_delete(this,0x180);
  return;
}



/* MethodBindT<int>::~MethodBindT() */

void __thiscall MethodBindT<int>::~MethodBindT(MethodBindT<int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001242a8;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<int>::~MethodBindT() */

void __thiscall MethodBindT<int>::~MethodBindT(MethodBindT<int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001242a8;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<int>::~MethodBindTRC() */

void __thiscall MethodBindTRC<int>::~MethodBindTRC(MethodBindTRC<int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00124308;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<int>::~MethodBindTRC() */

void __thiscall MethodBindTRC<int>::~MethodBindTRC(MethodBindTRC<int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00124308;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* BonePicker::_getv(StringName const&, Variant&) const */

undefined8 BonePicker::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)PTR__get_0012b038 != Object::_get) {
    uVar1 = Window::_get(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* BonePicker::_setv(StringName const&, Variant const&) */

undefined8 BonePicker::_setv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)PTR__set_0012b040 != Object::_set) {
    uVar1 = Window::_set(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* CowData<BoneMapperItem*>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<BoneMapperItem*>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<BoneMapperButton*>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<BoneMapperButton*>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* BoneMapper::_bind_methods() [clone .cold] */

void BoneMapper::_bind_methods(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* BoneMapperItem::_bind_methods() [clone .cold] */

void BoneMapperItem::_bind_methods(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
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



/* CallableCustomMethodPointer<BoneMapperItem, void>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<BoneMapperItem,void>::get_object
          (CallableCustomMethodPointer<BoneMapperItem,void> *this)

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
      goto LAB_001110ed;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_001110ed;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_001110ed:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<BoneMapper, void, StringName const&>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<BoneMapper,void,StringName_const&>::get_object
          (CallableCustomMethodPointer<BoneMapper,void,StringName_const&> *this)

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
      goto LAB_001111ed;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_001111ed;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_001111ed:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<BoneMapper, void, String const&, Variant const&, String const&,
   bool>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<BoneMapper,void,String_const&,Variant_const&,String_const&,bool>::
get_object(CallableCustomMethodPointer<BoneMapper,void,String_const&,Variant_const&,String_const&,bool>
           *this)

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
      goto LAB_001112ed;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_001112ed;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_001112ed:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<BonePicker, void>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<BonePicker,void>::get_object
          (CallableCustomMethodPointer<BonePicker,void> *this)

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
      goto LAB_001113ed;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_001113ed;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_001113ed:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<BoneMapper, void>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<BoneMapper,void>::get_object
          (CallableCustomMethodPointer<BoneMapper,void> *this)

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
      goto LAB_001114ed;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_001114ed;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_001114ed:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<BoneMapperItem, void, String const&, Variant const&, String const&,
   bool>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<BoneMapperItem,void,String_const&,Variant_const&,String_const&,bool>::
get_object(CallableCustomMethodPointer<BoneMapperItem,void,String_const&,Variant_const&,String_const&,bool>
           *this)

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
      goto LAB_001115ed;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_001115ed;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_001115ed:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<BoneMapper, void, int>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<BoneMapper,void,int>::get_object
          (CallableCustomMethodPointer<BoneMapper,void,int> *this)

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
      goto LAB_001116ed;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_001116ed;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_001116ed:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* BonePicker::_validate_propertyv(PropertyInfo&) const */

void BonePicker::_validate_propertyv(PropertyInfo *param_1)

{
  Node::_validate_property(param_1);
  Viewport::_validate_property(param_1);
  if ((code *)PTR__validate_property_0012b048 == Viewport::_validate_property) {
    return;
  }
  Window::_validate_property(param_1);
  return;
}



/* BoneMapperButton::is_class_ptr(void*) const */

uint BoneMapperButton::is_class_ptr(void *param_1)

{
  uint uVar1;
  undefined4 in_EDX;
  undefined4 *in_RSI;
  
  uVar1 = 1;
  if (in_RSI != &get_class_ptr_static()::ptr) {
    uVar1 = (uint)CONCAT71(0x1245,in_RSI == &BaseButton::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x1245,in_RSI == &TextureButton::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x1245,in_RSI == &Control::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x1246,in_RSI == &CanvasItem::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x1246,in_RSI == &Node::get_class_ptr_static()::ptr) |
            CONCAT31((int3)((uint)in_EDX >> 8),in_RSI == &Object::get_class_ptr_static()::ptr);
  }
  return uVar1;
}



/* BoneMapEditorPlugin::_notificationv(int, bool) */

void __thiscall
BoneMapEditorPlugin::_notificationv(BoneMapEditorPlugin *this,int param_1,bool param_2)

{
  int iVar1;
  
  iVar1 = (int)this;
  if (param_2) {
    if ((code *)PTR__notification_0012b050 != Node::_notification) {
      EditorPlugin::_notification(iVar1);
    }
    Node::_notification(iVar1);
    return;
  }
  Node::_notification(iVar1);
  if ((code *)PTR__notification_0012b050 == Node::_notification) {
    return;
  }
  EditorPlugin::_notification(iVar1);
  return;
}



/* ColorRect::_validate_propertyv(PropertyInfo&) const */

void ColorRect::_validate_propertyv(PropertyInfo *param_1)

{
  Node::_validate_property(param_1);
  CanvasItem::_validate_property(param_1);
  if ((code *)PTR__validate_property_0012b058 == CanvasItem::_validate_property) {
    return;
  }
  Control::_validate_property(param_1);
  return;
}



/* BoneMapperButton::_validate_propertyv(PropertyInfo&) const */

void BoneMapperButton::_validate_propertyv(PropertyInfo *param_1)

{
  Node::_validate_property(param_1);
  CanvasItem::_validate_property(param_1);
  if ((code *)PTR__validate_property_0012b058 == CanvasItem::_validate_property) {
    return;
  }
  Control::_validate_property(param_1);
  return;
}



/* BoneMapEditor::_validate_propertyv(PropertyInfo&) const */

void BoneMapEditor::_validate_propertyv(PropertyInfo *param_1)

{
  Node::_validate_property(param_1);
  CanvasItem::_validate_property(param_1);
  Control::_validate_property(param_1);
  if ((code *)PTR__validate_property_0012b060 == Control::_validate_property) {
    return;
  }
  BoxContainer::_validate_property(param_1);
  return;
}



/* VBoxContainer::_validate_propertyv(PropertyInfo&) const */

void VBoxContainer::_validate_propertyv(PropertyInfo *param_1)

{
  Node::_validate_property(param_1);
  CanvasItem::_validate_property(param_1);
  Control::_validate_property(param_1);
  if ((code *)PTR__validate_property_0012b060 == Control::_validate_property) {
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
  if ((code *)PTR__validate_property_0012b060 == Control::_validate_property) {
    return;
  }
  BoxContainer::_validate_property(param_1);
  return;
}



/* BoneMapper::_validate_propertyv(PropertyInfo&) const */

void BoneMapper::_validate_propertyv(PropertyInfo *param_1)

{
  Node::_validate_property(param_1);
  CanvasItem::_validate_property(param_1);
  Control::_validate_property(param_1);
  if ((code *)PTR__validate_property_0012b060 == Control::_validate_property) {
    return;
  }
  BoxContainer::_validate_property(param_1);
  return;
}



/* BoneMapperItem::_validate_propertyv(PropertyInfo&) const */

void BoneMapperItem::_validate_propertyv(PropertyInfo *param_1)

{
  Node::_validate_property(param_1);
  CanvasItem::_validate_property(param_1);
  Control::_validate_property(param_1);
  if ((code *)PTR__validate_property_0012b060 == Control::_validate_property) {
    return;
  }
  BoxContainer::_validate_property(param_1);
  return;
}



/* VBoxContainer::_setv(StringName const&, Variant const&) */

undefined8 VBoxContainer::_setv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  uVar1 = CanvasItem::_set(param_1,param_2);
  if ((char)uVar1 == '\0') {
    if ((code *)PTR__set_0012b068 != CanvasItem::_set) {
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
    if ((code *)PTR__set_0012b068 != CanvasItem::_set) {
      uVar1 = Control::_set(param_1,param_2);
      return uVar1;
    }
    uVar1 = 0;
  }
  return uVar1;
}



/* ColorRect::_setv(StringName const&, Variant const&) */

undefined8 ColorRect::_setv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  uVar1 = CanvasItem::_set(param_1,param_2);
  if ((char)uVar1 == '\0') {
    if ((code *)PTR__set_0012b068 != CanvasItem::_set) {
      uVar1 = Control::_set(param_1,param_2);
      return uVar1;
    }
    uVar1 = 0;
  }
  return uVar1;
}



/* BoneMapper::_setv(StringName const&, Variant const&) */

undefined8 BoneMapper::_setv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  uVar1 = CanvasItem::_set(param_1,param_2);
  if ((char)uVar1 == '\0') {
    if ((code *)PTR__set_0012b068 != CanvasItem::_set) {
      uVar1 = Control::_set(param_1,param_2);
      return uVar1;
    }
    uVar1 = 0;
  }
  return uVar1;
}



/* BoneMapperButton::_setv(StringName const&, Variant const&) */

undefined8 BoneMapperButton::_setv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  uVar1 = CanvasItem::_set(param_1,param_2);
  if ((char)uVar1 == '\0') {
    if ((code *)PTR__set_0012b068 != CanvasItem::_set) {
      uVar1 = Control::_set(param_1,param_2);
      return uVar1;
    }
    uVar1 = 0;
  }
  return uVar1;
}



/* BoneMapEditor::_setv(StringName const&, Variant const&) */

undefined8 BoneMapEditor::_setv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  uVar1 = CanvasItem::_set(param_1,param_2);
  if ((char)uVar1 == '\0') {
    if ((code *)PTR__set_0012b068 != CanvasItem::_set) {
      uVar1 = Control::_set(param_1,param_2);
      return uVar1;
    }
    uVar1 = 0;
  }
  return uVar1;
}



/* BoneMapperItem::_setv(StringName const&, Variant const&) */

undefined8 BoneMapperItem::_setv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  uVar1 = CanvasItem::_set(param_1,param_2);
  if ((char)uVar1 == '\0') {
    if ((code *)PTR__set_0012b068 != CanvasItem::_set) {
      uVar1 = Control::_set(param_1,param_2);
      return uVar1;
    }
    uVar1 = 0;
  }
  return uVar1;
}



/* VBoxContainer::is_class_ptr(void*) const */

uint VBoxContainer::is_class_ptr(void *param_1)

{
  uint uVar1;
  undefined4 in_EDX;
  undefined4 *in_RSI;
  
  uVar1 = 1;
  if (in_RSI != &get_class_ptr_static()::ptr) {
    uVar1 = (uint)CONCAT71(0x1245,in_RSI == &Container::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x1245,in_RSI == &BoxContainer::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x1245,in_RSI == &Control::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x1246,in_RSI == &CanvasItem::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x1246,in_RSI == &Node::get_class_ptr_static()::ptr) |
            CONCAT31((int3)((uint)in_EDX >> 8),in_RSI == &Object::get_class_ptr_static()::ptr);
  }
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
    uVar1 = (uint)CONCAT71(0x1245,in_RSI == &Container::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x1245,in_RSI == &BoxContainer::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x1245,in_RSI == &Control::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x1246,in_RSI == &CanvasItem::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x1246,in_RSI == &Node::get_class_ptr_static()::ptr) |
            CONCAT31((int3)((uint)in_EDX >> 8),in_RSI == &Object::get_class_ptr_static()::ptr);
  }
  return uVar1;
}



/* BoneMapEditor::is_class_ptr(void*) const */

ulong BoneMapEditor::is_class_ptr(void *param_1)

{
  undefined4 in_EDX;
  undefined4 *in_RSI;
  
  if (in_RSI == &VBoxContainer::get_class_ptr_static()::ptr ||
      in_RSI == &get_class_ptr_static()::ptr) {
    return CONCAT71(0x1245,in_RSI == &VBoxContainer::get_class_ptr_static()::ptr ||
                           in_RSI == &get_class_ptr_static()::ptr);
  }
  return (ulong)((uint)CONCAT71(0x1245,in_RSI == &Container::get_class_ptr_static()::ptr) |
                 (uint)CONCAT71(0x1245,in_RSI == &BoxContainer::get_class_ptr_static()::ptr) |
                 (uint)CONCAT71(0x1245,in_RSI == &Control::get_class_ptr_static()::ptr) |
                 (uint)CONCAT71(0x1246,in_RSI == &CanvasItem::get_class_ptr_static()::ptr) |
                 (uint)CONCAT71(0x1246,in_RSI == &Node::get_class_ptr_static()::ptr) |
                CONCAT31((int3)((uint)in_EDX >> 8),in_RSI == &Object::get_class_ptr_static()::ptr));
}



/* BoneMapper::is_class_ptr(void*) const */

ulong BoneMapper::is_class_ptr(void *param_1)

{
  undefined4 in_EDX;
  undefined4 *in_RSI;
  
  if (in_RSI == &VBoxContainer::get_class_ptr_static()::ptr ||
      in_RSI == &get_class_ptr_static()::ptr) {
    return CONCAT71(0x1245,in_RSI == &VBoxContainer::get_class_ptr_static()::ptr ||
                           in_RSI == &get_class_ptr_static()::ptr);
  }
  return (ulong)((uint)CONCAT71(0x1245,in_RSI == &Container::get_class_ptr_static()::ptr) |
                 (uint)CONCAT71(0x1245,in_RSI == &BoxContainer::get_class_ptr_static()::ptr) |
                 (uint)CONCAT71(0x1245,in_RSI == &Control::get_class_ptr_static()::ptr) |
                 (uint)CONCAT71(0x1246,in_RSI == &CanvasItem::get_class_ptr_static()::ptr) |
                 (uint)CONCAT71(0x1246,in_RSI == &Node::get_class_ptr_static()::ptr) |
                CONCAT31((int3)((uint)in_EDX >> 8),in_RSI == &Object::get_class_ptr_static()::ptr));
}



/* BoneMapperItem::is_class_ptr(void*) const */

ulong BoneMapperItem::is_class_ptr(void *param_1)

{
  undefined4 in_EDX;
  undefined4 *in_RSI;
  
  if (in_RSI == &VBoxContainer::get_class_ptr_static()::ptr ||
      in_RSI == &get_class_ptr_static()::ptr) {
    return CONCAT71(0x1245,in_RSI == &VBoxContainer::get_class_ptr_static()::ptr ||
                           in_RSI == &get_class_ptr_static()::ptr);
  }
  return (ulong)((uint)CONCAT71(0x1245,in_RSI == &Container::get_class_ptr_static()::ptr) |
                 (uint)CONCAT71(0x1245,in_RSI == &BoxContainer::get_class_ptr_static()::ptr) |
                 (uint)CONCAT71(0x1245,in_RSI == &Control::get_class_ptr_static()::ptr) |
                 (uint)CONCAT71(0x1246,in_RSI == &CanvasItem::get_class_ptr_static()::ptr) |
                 (uint)CONCAT71(0x1246,in_RSI == &Node::get_class_ptr_static()::ptr) |
                CONCAT31((int3)((uint)in_EDX >> 8),in_RSI == &Object::get_class_ptr_static()::ptr));
}



/* WARNING: Removing unreachable block (ram,0x00112288) */
/* BoneMapperButton::_getv(StringName const&, Variant&) const */

undefined8 BoneMapperButton::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if (((code *)PTR__get_0012b070 != CanvasItem::_get) &&
     (uVar1 = Control::_get(param_1,param_2), (char)uVar1 != '\0')) {
    return uVar1;
  }
  uVar1 = CanvasItem::_get(param_1,param_2);
  return uVar1;
}



/* WARNING: Removing unreachable block (ram,0x001122f8) */
/* BoneMapperItem::_getv(StringName const&, Variant&) const */

undefined8 BoneMapperItem::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if (((code *)PTR__get_0012b070 != CanvasItem::_get) &&
     (uVar1 = Control::_get(param_1,param_2), (char)uVar1 != '\0')) {
    return uVar1;
  }
  uVar1 = CanvasItem::_get(param_1,param_2);
  return uVar1;
}



/* WARNING: Removing unreachable block (ram,0x00112368) */
/* ColorRect::_getv(StringName const&, Variant&) const */

undefined8 ColorRect::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if (((code *)PTR__get_0012b070 != CanvasItem::_get) &&
     (uVar1 = Control::_get(param_1,param_2), (char)uVar1 != '\0')) {
    return uVar1;
  }
  uVar1 = CanvasItem::_get(param_1,param_2);
  return uVar1;
}



/* WARNING: Removing unreachable block (ram,0x001123d8) */
/* VBoxContainer::_getv(StringName const&, Variant&) const */

undefined8 VBoxContainer::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if (((code *)PTR__get_0012b070 != CanvasItem::_get) &&
     (uVar1 = Control::_get(param_1,param_2), (char)uVar1 != '\0')) {
    return uVar1;
  }
  uVar1 = CanvasItem::_get(param_1,param_2);
  return uVar1;
}



/* WARNING: Removing unreachable block (ram,0x00112448) */
/* HBoxContainer::_getv(StringName const&, Variant&) const */

undefined8 HBoxContainer::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if (((code *)PTR__get_0012b070 != CanvasItem::_get) &&
     (uVar1 = Control::_get(param_1,param_2), (char)uVar1 != '\0')) {
    return uVar1;
  }
  uVar1 = CanvasItem::_get(param_1,param_2);
  return uVar1;
}



/* WARNING: Removing unreachable block (ram,0x001124b8) */
/* BoneMapper::_getv(StringName const&, Variant&) const */

undefined8 BoneMapper::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if (((code *)PTR__get_0012b070 != CanvasItem::_get) &&
     (uVar1 = Control::_get(param_1,param_2), (char)uVar1 != '\0')) {
    return uVar1;
  }
  uVar1 = CanvasItem::_get(param_1,param_2);
  return uVar1;
}



/* WARNING: Removing unreachable block (ram,0x00112528) */
/* BoneMapEditor::_getv(StringName const&, Variant&) const */

undefined8 BoneMapEditor::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if (((code *)PTR__get_0012b070 != CanvasItem::_get) &&
     (uVar1 = Control::_get(param_1,param_2), (char)uVar1 != '\0')) {
    return uVar1;
  }
  uVar1 = CanvasItem::_get(param_1,param_2);
  return uVar1;
}



/* WARNING: Removing unreachable block (ram,0x001125fa) */
/* ColorRect::_notificationv(int, bool) */

void __thiscall ColorRect::_notificationv(ColorRect *this,int param_1,bool param_2)

{
  int iVar1;
  
  iVar1 = (int)this;
  if (param_2) {
    if ((code *)PTR__notification_0012b078 != Control::_notification) {
      ColorRect::_notification(iVar1);
    }
    Control::_notification(iVar1);
    CanvasItem::_notification(iVar1);
    Node::_notification(iVar1);
    return;
  }
  Node::_notification(iVar1);
  CanvasItem::_notification(iVar1);
  Control::_notification(iVar1);
  if ((code *)PTR__notification_0012b078 == Control::_notification) {
    return;
  }
  ColorRect::_notification(iVar1);
  return;
}



/* BoneMapEditorPlugin::get_plugin_name() const */

BoneMapEditorPlugin * __thiscall BoneMapEditorPlugin::get_plugin_name(BoneMapEditorPlugin *this)

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



/* VBoxContainer::~VBoxContainer() */

void __thiscall VBoxContainer::~VBoxContainer(VBoxContainer *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(code **)this = RefCounted::unreference;
  if (bVar1) {
    if (*(long *)(this + 0x9e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001126f0;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_001126f0:
  Control::~Control((Control *)this);
  return;
}



/* HBoxContainer::~HBoxContainer() */

void __thiscall HBoxContainer::~HBoxContainer(HBoxContainer *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(code **)this = RefCounted::unreference;
  if (bVar1) {
    if (*(long *)(this + 0x9e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00112750;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_00112750:
  Control::~Control((Control *)this);
  return;
}



/* VBoxContainer::~VBoxContainer() */

void __thiscall VBoxContainer::~VBoxContainer(VBoxContainer *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(code **)this = RefCounted::unreference;
  if (bVar1) {
    if (*(long *)(this + 0x9e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001127b0;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_001127b0:
  Control::~Control((Control *)this);
  operator_delete(this,0xa10);
  return;
}



/* HBoxContainer::~HBoxContainer() */

void __thiscall HBoxContainer::~HBoxContainer(HBoxContainer *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(code **)this = RefCounted::unreference;
  if (bVar1) {
    if (*(long *)(this + 0x9e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00112820;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_00112820:
  Control::~Control((Control *)this);
  operator_delete(this,0xa10);
  return;
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



/* VBoxContainer::_get_class_namev() const */

undefined8 * VBoxContainer::_get_class_namev(void)

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
LAB_001128f3:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_001128f3;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"VBoxContainer");
      goto LAB_0011295e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"VBoxContainer");
LAB_0011295e:
  return &_get_class_namev()::_class_name_static;
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
LAB_001129e3:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_001129e3;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"HBoxContainer");
      goto LAB_00112a4e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"HBoxContainer");
LAB_00112a4e:
  return &_get_class_namev()::_class_name_static;
}



/* EditorInspectorPluginBoneMap::_get_class_namev() const */

undefined8 * EditorInspectorPluginBoneMap::_get_class_namev(void)

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
LAB_00112ae3:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00112ae3;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,
                 "EditorInspectorPluginBoneMap");
      goto LAB_00112b4e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"EditorInspectorPluginBoneMap");
LAB_00112b4e:
  return &_get_class_namev()::_class_name_static;
}



/* BoneMapperButton::_get_class_namev() const */

undefined8 * BoneMapperButton::_get_class_namev(void)

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
LAB_00112bd3:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00112bd3;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"BoneMapperButton");
      goto LAB_00112c3e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"BoneMapperButton");
LAB_00112c3e:
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
LAB_00112cb3:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00112cb3;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"RefCounted");
      goto LAB_00112d1e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"RefCounted");
LAB_00112d1e:
  return &_get_class_namev()::_class_name_static;
}



/* BoneMapperItem::_get_class_namev() const */

undefined8 * BoneMapperItem::_get_class_namev(void)

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
LAB_00112da3:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00112da3;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"BoneMapperItem");
      goto LAB_00112e0e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"BoneMapperItem");
LAB_00112e0e:
  return &_get_class_namev()::_class_name_static;
}



/* BoneMapEditor::_get_class_namev() const */

undefined8 * BoneMapEditor::_get_class_namev(void)

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
LAB_00112e93:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00112e93;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"BoneMapEditor");
      goto LAB_00112efe;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"BoneMapEditor");
LAB_00112efe:
  return &_get_class_namev()::_class_name_static;
}



/* BoneMapEditorPlugin::_get_class_namev() const */

undefined8 * BoneMapEditorPlugin::_get_class_namev(void)

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
LAB_00112f83:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00112f83;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"BoneMapEditorPlugin");
      goto LAB_00112fee;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"BoneMapEditorPlugin");
LAB_00112fee:
  return &_get_class_namev()::_class_name_static;
}



/* BoneMapper::_get_class_namev() const */

undefined8 * BoneMapper::_get_class_namev(void)

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
LAB_00113063:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00113063;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"BoneMapper");
      goto LAB_001130ce;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"BoneMapper");
LAB_001130ce:
  return &_get_class_namev()::_class_name_static;
}



/* ColorRect::_get_class_namev() const */

undefined8 * ColorRect::_get_class_namev(void)

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
LAB_00113143:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00113143;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"ColorRect");
      goto LAB_001131ae;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"ColorRect");
LAB_001131ae:
  return &_get_class_namev()::_class_name_static;
}



/* BonePicker::_get_class_namev() const */

undefined8 * BonePicker::_get_class_namev(void)

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
LAB_00113223:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00113223;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"BonePicker");
      goto LAB_0011328e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"BonePicker");
LAB_0011328e:
  return &_get_class_namev()::_class_name_static;
}



/* VBoxContainer::_notificationv(int, bool) */

void __thiscall VBoxContainer::_notificationv(VBoxContainer *this,int param_1,bool param_2)

{
  int iVar1;
  
  iVar1 = (int)this;
  if (param_2) {
    if ((code *)PTR__notification_0012b080 != Container::_notification) {
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
  if ((code *)PTR__notification_0012b080 == Container::_notification) {
    return;
  }
  BoxContainer::_notification(iVar1);
  return;
}



/* HBoxContainer::_notificationv(int, bool) */

void __thiscall HBoxContainer::_notificationv(HBoxContainer *this,int param_1,bool param_2)

{
  int iVar1;
  
  iVar1 = (int)this;
  if (param_2) {
    if ((code *)PTR__notification_0012b080 != Container::_notification) {
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
  if ((code *)PTR__notification_0012b080 == Container::_notification) {
    return;
  }
  BoxContainer::_notification(iVar1);
  return;
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



/* BoneMapEditorPlugin::get_class() const */

void BoneMapEditorPlugin::get_class(void)

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



/* BoneMapperItem::get_class() const */

void BoneMapperItem::get_class(void)

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



/* ColorRect::get_class() const */

void ColorRect::get_class(void)

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



/* BoneMapperButton::get_class() const */

void BoneMapperButton::get_class(void)

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



/* BonePicker::get_class() const */

void BonePicker::get_class(void)

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



/* BoneMapEditor::get_class() const */

void BoneMapEditor::get_class(void)

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



/* BoneMapper::get_class() const */

void BoneMapper::get_class(void)

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



/* EditorInspectorPluginBoneMap::get_class() const */

void EditorInspectorPluginBoneMap::get_class(void)

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



/* VBoxContainer::get_class() const */

void VBoxContainer::get_class(void)

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



/* BoneMapEditor::_notificationv(int, bool) */

void __thiscall BoneMapEditor::_notificationv(BoneMapEditor *this,int param_1,bool param_2)

{
  BoneMapper *this_00;
  int iVar1;
  
  iVar1 = (int)this;
  if (param_2) {
    if (param_1 != 10) {
      if (param_1 == 0xb) {
        *(undefined8 *)(this + 0xa10) = 0;
      }
      goto LAB_00114075;
    }
    fetch_objects(this);
    if (*(long *)(this + 0xa10) == 0) goto LAB_00114075;
  }
  else {
    Node::_notification(iVar1);
    CanvasItem::_notification(iVar1);
    Control::_notification(iVar1);
    Container::_notification(iVar1);
    if ((code *)PTR__notification_0012b080 != Container::_notification) {
      BoxContainer::_notification(iVar1);
    }
    if (param_1 != 10) {
      if (param_1 != 0xb) {
        return;
      }
      *(undefined8 *)(this + 0xa10) = 0;
      return;
    }
    fetch_objects(this);
    if (*(long *)(this + 0xa10) == 0) {
      return;
    }
  }
  this_00 = (BoneMapper *)operator_new(0xa90,"");
  BoneMapper::BoneMapper(this_00,*(Skeleton3D **)(this + 0xa10),(Ref *)(this + 0xa18));
  postinitialize_handler((Object *)this_00);
  *(BoneMapper **)(this + 0xa20) = this_00;
  Node::add_child(this,this_00,0,0);
  if (!param_2) {
    return;
  }
LAB_00114075:
  if ((code *)PTR__notification_0012b080 != Container::_notification) {
    BoxContainer::_notification(iVar1);
  }
  Container::_notification(iVar1);
  Control::_notification(iVar1);
  CanvasItem::_notification(iVar1);
  Node::_notification(iVar1);
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



/* Callable create_custom_callable_function_pointer<BoneMapperItem>(BoneMapperItem*, char const*,
   void (BoneMapperItem::*)()) */

BoneMapperItem *
create_custom_callable_function_pointer<BoneMapperItem>
          (BoneMapperItem *param_1,char *param_2,_func_void *param_3)

{
  undefined8 uVar1;
  CallableCustom *this;
  undefined8 in_RCX;
  undefined8 in_R8;
  
  this = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(this);
  *(undefined **)(this + 0x20) = &_LC24;
  *(undefined1 (*) [16])(this + 0x30) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined ***)this = &PTR_hash_00123f48;
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



/* WARNING: Removing unreachable block (ram,0x00114ac0) */
/* BoneMapperItem::_notificationv(int, bool) */

void __thiscall BoneMapperItem::_notificationv(BoneMapperItem *this,int param_1,bool param_2)

{
  int iVar1;
  
  iVar1 = (int)this;
  if (param_2) {
    _notification(this,param_1);
    if ((code *)PTR__notification_0012b080 != Container::_notification) {
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
  if ((code *)PTR__notification_0012b080 != Container::_notification) {
    BoxContainer::_notification(iVar1);
  }
  _notification(this,param_1);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashMap<int, TreeItem*, HashMapHasherDefault, HashMapComparatorDefault<int>,
   DefaultTypedAllocator<HashMapElement<int, TreeItem*> > >::insert(int const&, TreeItem* const&,
   bool) */

void HashMap<int,TreeItem*,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,TreeItem*>>>
     ::insert(int *param_1,TreeItem **param_2,bool param_3)

{
  TreeItem *pTVar1;
  TreeItem *pTVar2;
  undefined8 uVar3;
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
  undefined1 auVar27 [16];
  TreeItem *pTVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  ulong uVar32;
  TreeItem *pTVar33;
  TreeItem *pTVar34;
  undefined8 *in_RCX;
  int iVar35;
  undefined7 in_register_00000011;
  uint *puVar36;
  ulong uVar37;
  long lVar38;
  long lVar39;
  ulong uVar40;
  undefined8 uVar41;
  char in_R8B;
  uint uVar42;
  uint uVar43;
  uint uVar44;
  TreeItem *pTVar45;
  TreeItem *local_78;
  
  puVar36 = (uint *)CONCAT71(in_register_00000011,param_3);
  uVar30 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_2 + 5) * 4);
  local_78 = param_2[1];
  if (local_78 == (TreeItem *)0x0) {
    uVar40 = (ulong)uVar30;
    uVar32 = uVar40 * 4;
    uVar37 = uVar40 * 8;
    pTVar34 = (TreeItem *)Memory::alloc_static(uVar32,false);
    param_2[2] = pTVar34;
    local_78 = (TreeItem *)Memory::alloc_static(uVar37,false);
    param_2[1] = local_78;
    if (uVar30 != 0) {
      pTVar34 = param_2[2];
      if ((pTVar34 < local_78 + uVar37) && (local_78 < pTVar34 + uVar32)) {
        uVar32 = 0;
        do {
          *(undefined4 *)(pTVar34 + uVar32 * 4) = 0;
          *(undefined8 *)(local_78 + uVar32 * 8) = 0;
          uVar32 = uVar32 + 1;
        } while (uVar40 != uVar32);
        goto LAB_00114c5b;
      }
      memset(pTVar34,0,uVar32);
      memset(local_78,0,uVar37);
      uVar31 = *puVar36;
      iVar35 = *(int *)((long)param_2 + 0x2c);
      goto LAB_00114c6b;
    }
    uVar31 = *puVar36;
    iVar35 = *(int *)((long)param_2 + 0x2c);
    if (local_78 != (TreeItem *)0x0) goto LAB_00114c6b;
  }
  else {
LAB_00114c5b:
    uVar31 = *puVar36;
    iVar35 = *(int *)((long)param_2 + 0x2c);
LAB_00114c6b:
    if (iVar35 != 0) {
      uVar32 = *(ulong *)(hash_table_size_primes_inv + (ulong)*(uint *)(param_2 + 5) * 8);
      uVar29 = (uVar31 >> 0x10 ^ uVar31) * -0x7a143595;
      uVar29 = (uVar29 ^ uVar29 >> 0xd) * -0x3d4d51cb;
      uVar44 = uVar29 ^ uVar29 >> 0x10;
      if (uVar29 == uVar29 >> 0x10) {
        uVar44 = 1;
        uVar37 = uVar32;
      }
      else {
        uVar37 = uVar44 * uVar32;
      }
      uVar40 = CONCAT44(0,*(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_2 + 5) * 4));
      uVar43 = 0;
      auVar4._8_8_ = 0;
      auVar4._0_8_ = uVar40;
      auVar16._8_8_ = 0;
      auVar16._0_8_ = uVar37;
      lVar38 = SUB168(auVar4 * auVar16,8);
      uVar42 = SUB164(auVar4 * auVar16,8);
      uVar29 = *(uint *)(param_2[2] + lVar38 * 4);
      if (uVar29 != 0) {
        do {
          if ((uVar44 == uVar29) && (*(uint *)(*(long *)(local_78 + lVar38 * 8) + 0x10) == uVar31))
          {
            pTVar34 = *(TreeItem **)(local_78 + (ulong)uVar42 * 8);
            *(undefined8 *)(pTVar34 + 0x18) = *in_RCX;
            goto LAB_001150e8;
          }
          uVar43 = uVar43 + 1;
          auVar5._8_8_ = 0;
          auVar5._0_8_ = (uVar42 + 1) * uVar32;
          auVar17._8_8_ = 0;
          auVar17._0_8_ = uVar40;
          lVar38 = SUB168(auVar5 * auVar17,8);
          uVar29 = *(uint *)(param_2[2] + lVar38 * 4);
          uVar42 = SUB164(auVar5 * auVar17,8);
        } while ((uVar29 != 0) &&
                (auVar6._8_8_ = 0, auVar6._0_8_ = uVar29 * uVar32, auVar18._8_8_ = 0,
                auVar18._0_8_ = uVar40, auVar7._8_8_ = 0,
                auVar7._0_8_ = ((*(uint *)(hash_table_size_primes +
                                          (ulong)*(uint *)(param_2 + 5) * 4) + uVar42) -
                               SUB164(auVar6 * auVar18,8)) * uVar32, auVar19._8_8_ = 0,
                auVar19._0_8_ = uVar40, uVar43 <= SUB164(auVar7 * auVar19,8)));
      }
    }
  }
  if ((float)uVar30 * __LC27 < (float)(iVar35 + 1)) {
    uVar30 = *(uint *)(param_2 + 5);
    if (uVar30 == 0x1c) {
      pTVar34 = (TreeItem *)0x0;
      _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      goto LAB_001150e8;
    }
    uVar32 = (ulong)(uVar30 + 1);
    uVar31 = *(uint *)(hash_table_size_primes + (ulong)uVar30 * 4);
    *(undefined4 *)((long)param_2 + 0x2c) = 0;
    if (uVar30 + 1 < 2) {
      uVar32 = 2;
    }
    uVar30 = *(uint *)(hash_table_size_primes + uVar32 * 4);
    *(int *)(param_2 + 5) = (int)uVar32;
    pTVar34 = param_2[2];
    uVar40 = (ulong)uVar30;
    uVar32 = uVar40 * 4;
    uVar37 = uVar40 * 8;
    pTVar33 = (TreeItem *)Memory::alloc_static(uVar32,false);
    param_2[2] = pTVar33;
    pTVar33 = (TreeItem *)Memory::alloc_static(uVar37,false);
    param_2[1] = pTVar33;
    if (uVar30 != 0) {
      pTVar1 = param_2[2];
      if ((pTVar1 < pTVar33 + uVar37) && (pTVar33 < pTVar1 + uVar32)) {
        uVar32 = 0;
        do {
          *(undefined4 *)(pTVar1 + uVar32 * 4) = 0;
          *(undefined8 *)(pTVar33 + uVar32 * 8) = 0;
          uVar32 = uVar32 + 1;
        } while (uVar32 != uVar40);
      }
      else {
        memset(pTVar1,0,uVar32);
        memset(pTVar33,0,uVar37);
      }
    }
    uVar32 = 0;
    if (uVar31 != 0) {
      do {
        uVar30 = *(uint *)(pTVar34 + uVar32 * 4);
        if (uVar30 != 0) {
          uVar42 = 0;
          pTVar2 = param_2[2];
          uVar29 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_2 + 5) * 4);
          uVar37 = CONCAT44(0,uVar29);
          lVar38 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(param_2 + 5) * 8);
          auVar8._8_8_ = 0;
          auVar8._0_8_ = (ulong)uVar30 * lVar38;
          auVar20._8_8_ = 0;
          auVar20._0_8_ = uVar37;
          lVar39 = SUB168(auVar8 * auVar20,8);
          pTVar1 = pTVar2 + lVar39 * 4;
          iVar35 = SUB164(auVar8 * auVar20,8);
          uVar44 = *(uint *)pTVar1;
          uVar3 = *(undefined8 *)(local_78 + uVar32 * 8);
          while (uVar44 != 0) {
            auVar9._8_8_ = 0;
            auVar9._0_8_ = (ulong)uVar44 * lVar38;
            auVar21._8_8_ = 0;
            auVar21._0_8_ = uVar37;
            auVar10._8_8_ = 0;
            auVar10._0_8_ = (ulong)((uVar29 + iVar35) - SUB164(auVar9 * auVar21,8)) * lVar38;
            auVar22._8_8_ = 0;
            auVar22._0_8_ = uVar37;
            uVar43 = SUB164(auVar10 * auVar22,8);
            uVar41 = uVar3;
            if (uVar43 < uVar42) {
              *(uint *)pTVar1 = uVar30;
              uVar41 = *(undefined8 *)(pTVar33 + lVar39 * 8);
              *(undefined8 *)(pTVar33 + lVar39 * 8) = uVar3;
              uVar30 = uVar44;
              uVar42 = uVar43;
            }
            uVar42 = uVar42 + 1;
            auVar11._8_8_ = 0;
            auVar11._0_8_ = (ulong)(iVar35 + 1) * lVar38;
            auVar23._8_8_ = 0;
            auVar23._0_8_ = uVar37;
            lVar39 = SUB168(auVar11 * auVar23,8);
            pTVar1 = pTVar2 + lVar39 * 4;
            iVar35 = SUB164(auVar11 * auVar23,8);
            uVar3 = uVar41;
            uVar44 = *(uint *)pTVar1;
          }
          *(undefined8 *)(pTVar33 + lVar39 * 8) = uVar3;
          *(uint *)pTVar1 = uVar30;
          *(int *)((long)param_2 + 0x2c) = *(int *)((long)param_2 + 0x2c) + 1;
        }
        uVar32 = uVar32 + 1;
      } while (uVar31 != uVar32);
      Memory::free_static(local_78,false);
      Memory::free_static(pTVar34,false);
    }
  }
  uVar30 = *puVar36;
  uVar3 = *in_RCX;
  pTVar34 = (TreeItem *)operator_new(0x20,"");
  *(uint *)(pTVar34 + 0x10) = uVar30;
  *(undefined8 *)(pTVar34 + 0x18) = uVar3;
  *(undefined1 (*) [16])pTVar34 = (undefined1  [16])0x0;
  pTVar33 = param_2[4];
  if (pTVar33 == (TreeItem *)0x0) {
    param_2[3] = pTVar34;
    param_2[4] = pTVar34;
  }
  else if (in_R8B == '\0') {
    *(TreeItem **)pTVar33 = pTVar34;
    *(TreeItem **)(pTVar34 + 8) = pTVar33;
    param_2[4] = pTVar34;
  }
  else {
    pTVar33 = param_2[3];
    *(TreeItem **)(pTVar33 + 8) = pTVar34;
    *(TreeItem **)pTVar34 = pTVar33;
    param_2[3] = pTVar34;
  }
  uVar30 = (*puVar36 >> 0x10 ^ *puVar36) * -0x7a143595;
  uVar31 = (uVar30 ^ uVar30 >> 0xd) * -0x3d4d51cb;
  uVar30 = uVar31 ^ uVar31 >> 0x10;
  if (uVar31 == uVar31 >> 0x10) {
    uVar32 = 1;
    uVar30 = 1;
  }
  else {
    uVar32 = (ulong)uVar30;
  }
  uVar44 = 0;
  pTVar1 = param_2[2];
  uVar31 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_2 + 5) * 4);
  uVar37 = CONCAT44(0,uVar31);
  lVar38 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(param_2 + 5) * 8);
  auVar12._8_8_ = 0;
  auVar12._0_8_ = uVar32 * lVar38;
  auVar24._8_8_ = 0;
  auVar24._0_8_ = uVar37;
  lVar39 = SUB168(auVar12 * auVar24,8);
  pTVar2 = param_2[1];
  pTVar33 = pTVar1 + lVar39 * 4;
  iVar35 = SUB164(auVar12 * auVar24,8);
  uVar29 = *(uint *)pTVar33;
  pTVar28 = pTVar34;
  while (uVar29 != 0) {
    auVar13._8_8_ = 0;
    auVar13._0_8_ = (ulong)uVar29 * lVar38;
    auVar25._8_8_ = 0;
    auVar25._0_8_ = uVar37;
    auVar14._8_8_ = 0;
    auVar14._0_8_ = (ulong)((uVar31 + iVar35) - SUB164(auVar13 * auVar25,8)) * lVar38;
    auVar26._8_8_ = 0;
    auVar26._0_8_ = uVar37;
    uVar42 = SUB164(auVar14 * auVar26,8);
    pTVar45 = pTVar28;
    if (uVar42 < uVar44) {
      *(uint *)pTVar33 = uVar30;
      pTVar33 = pTVar2 + lVar39 * 8;
      pTVar45 = *(TreeItem **)pTVar33;
      *(TreeItem **)pTVar33 = pTVar28;
      uVar30 = uVar29;
      uVar44 = uVar42;
    }
    uVar44 = uVar44 + 1;
    auVar15._8_8_ = 0;
    auVar15._0_8_ = (ulong)(iVar35 + 1) * lVar38;
    auVar27._8_8_ = 0;
    auVar27._0_8_ = uVar37;
    lVar39 = SUB168(auVar15 * auVar27,8);
    pTVar33 = pTVar1 + lVar39 * 4;
    iVar35 = SUB164(auVar15 * auVar27,8);
    pTVar28 = pTVar45;
    uVar29 = *(uint *)pTVar33;
  }
  *(TreeItem **)(pTVar2 + lVar39 * 8) = pTVar28;
  *(uint *)pTVar33 = uVar30;
  *(int *)((long)param_2 + 0x2c) = *(int *)((long)param_2 + 0x2c) + 1;
LAB_001150e8:
  *(TreeItem **)param_1 = pTVar34;
  return;
}



/* Callable create_custom_callable_function_pointer<BoneMapper>(BoneMapper*, char const*, void
   (BoneMapper::*)()) */

BoneMapper *
create_custom_callable_function_pointer<BoneMapper>
          (BoneMapper *param_1,char *param_2,_func_void *param_3)

{
  undefined8 uVar1;
  CallableCustom *this;
  undefined8 in_RCX;
  undefined8 in_R8;
  
  this = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(this);
  *(undefined **)(this + 0x20) = &_LC24;
  *(undefined1 (*) [16])(this + 0x30) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined ***)this = &PTR_hash_00124068;
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



/* Callable create_custom_callable_function_pointer<BoneMapper, String const&, Variant const&,
   String const&, bool>(BoneMapper*, char const*, void (BoneMapper::*)(String const&, Variant
   const&, String const&, bool)) */

BoneMapper *
create_custom_callable_function_pointer<BoneMapper,String_const&,Variant_const&,String_const&,bool>
          (BoneMapper *param_1,char *param_2,
          _func_void_String_ptr_Variant_ptr_String_ptr_bool *param_3)

{
  undefined8 uVar1;
  CallableCustom *this;
  undefined8 in_RCX;
  undefined8 in_R8;
  
  this = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(this);
  *(undefined **)(this + 0x20) = &_LC24;
  *(undefined1 (*) [16])(this + 0x30) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined ***)this = &PTR_hash_001240f8;
  uVar1 = *(undefined8 *)(param_2 + 0x60);
  *(char **)(this + 0x28) = param_2;
  *(undefined8 *)(this + 0x30) = uVar1;
  *(undefined8 *)(this + 0x38) = in_RCX;
  *(undefined8 *)(this + 0x40) = in_R8;
  *(undefined8 *)(this + 0x10) = 0;
  CallableCustomMethodPointerBase::_setup((uint *)this,(int)this + 0x28);
  *(_func_void_String_ptr_Variant_ptr_String_ptr_bool **)(this + 0x20) = param_3 + 1;
  Callable::Callable((Callable *)param_1,this);
  return param_1;
}



/* Callable create_custom_callable_function_pointer<BoneMapper, StringName const&>(BoneMapper*, char
   const*, void (BoneMapper::*)(StringName const&)) */

BoneMapper *
create_custom_callable_function_pointer<BoneMapper,StringName_const&>
          (BoneMapper *param_1,char *param_2,_func_void_StringName_ptr *param_3)

{
  undefined8 uVar1;
  CallableCustom *this;
  undefined8 in_RCX;
  undefined8 in_R8;
  
  this = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(this);
  *(undefined **)(this + 0x20) = &_LC24;
  *(undefined1 (*) [16])(this + 0x30) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined ***)this = &PTR_hash_00124218;
  uVar1 = *(undefined8 *)(param_2 + 0x60);
  *(char **)(this + 0x28) = param_2;
  *(undefined8 *)(this + 0x30) = uVar1;
  *(undefined8 *)(this + 0x38) = in_RCX;
  *(undefined8 *)(this + 0x40) = in_R8;
  *(undefined8 *)(this + 0x10) = 0;
  CallableCustomMethodPointerBase::_setup((uint *)this,(int)this + 0x28);
  *(_func_void_StringName_ptr **)(this + 0x20) = param_3 + 1;
  Callable::Callable((Callable *)param_1,this);
  return param_1;
}



/* LocalVector<LocalVector<String, unsigned int, false, false>, unsigned int, false,
   false>::resize(unsigned int) */

void __thiscall
LocalVector<LocalVector<String,unsigned_int,false,false>,unsigned_int,false,false>::resize
          (LocalVector<LocalVector<String,unsigned_int,false,false>,unsigned_int,false,false> *this,
          uint param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  code *pcVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  uint uVar7;
  long lVar8;
  uint *puVar9;
  void *pvVar10;
  long lVar11;
  uint uVar12;
  
  uVar12 = *(uint *)this;
  if (param_1 < uVar12) {
    lVar11 = (ulong)param_1 << 4;
    uVar12 = param_1;
    do {
      puVar9 = (uint *)(*(long *)(this + 8) + lVar11);
      pvVar10 = *(void **)(puVar9 + 2);
      if (pvVar10 != (void *)0x0) {
        if (*puVar9 != 0) {
          lVar8 = 0;
          do {
            plVar2 = (long *)((long)pvVar10 + lVar8 * 8);
            if (*plVar2 != 0) {
              LOCK();
              plVar1 = (long *)(*plVar2 + -0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                lVar3 = *plVar2;
                *plVar2 = 0;
                Memory::free_static((void *)(lVar3 + -0x10),false);
              }
              pvVar10 = *(void **)(puVar9 + 2);
            }
            lVar8 = lVar8 + 1;
          } while ((uint)lVar8 < *puVar9);
          *puVar9 = 0;
          if (pvVar10 == (void *)0x0) goto LAB_001155d2;
        }
        Memory::free_static(pvVar10,false);
      }
LAB_001155d2:
      uVar12 = uVar12 + 1;
      lVar11 = lVar11 + 0x10;
    } while (uVar12 < *(uint *)this);
  }
  else {
    if (param_1 <= uVar12) {
      return;
    }
    uVar7 = param_1 - 1;
    if (*(uint *)(this + 4) < param_1) {
      uVar12 = uVar7 >> 1 | uVar7;
      uVar12 = uVar12 >> 2 | uVar12;
      uVar12 = uVar12 >> 4 | uVar12;
      uVar12 = uVar12 >> 8 | uVar12;
      uVar12 = (uVar12 | uVar12 >> 0x10) + 1;
      *(uint *)(this + 4) = uVar12;
      lVar11 = Memory::realloc_static(*(void **)(this + 8),(ulong)uVar12 << 4,false);
      *(long *)(this + 8) = lVar11;
      if (lVar11 == 0) {
        _err_print_error("resize","./core/templates/local_vector.h",0xa3,
                         "FATAL: Condition \"!data\" is true.","Out of memory",0,0);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      uVar12 = *(uint *)this;
      if (param_1 <= uVar12) goto LAB_001155df;
    }
    lVar11 = *(long *)(this + 8);
    puVar5 = (undefined8 *)((ulong)uVar12 * 0x10 + lVar11);
    do {
      *puVar5 = 0;
      puVar6 = puVar5 + 2;
      puVar5[1] = 0;
      puVar5 = puVar6;
    } while (puVar6 != (undefined8 *)
                       (lVar11 + 0x10 + ((ulong)(uVar7 - uVar12) + (ulong)uVar12) * 0x10));
  }
LAB_001155df:
  *(uint *)this = param_1;
  return;
}



/* void Ref<EditorInspectorPluginBoneMap>::instantiate<>() */

void __thiscall
Ref<EditorInspectorPluginBoneMap>::instantiate<>(Ref<EditorInspectorPluginBoneMap> *this)

{
  char cVar1;
  RefCounted *this_00;
  long lVar2;
  RefCounted *pRVar3;
  Object *pOVar4;
  Object *pOVar5;
  byte bVar6;
  
  bVar6 = 0;
  this_00 = (RefCounted *)operator_new(0x220,"");
  pRVar3 = this_00;
  for (lVar2 = 0x44; lVar2 != 0; lVar2 = lVar2 + -1) {
    *(undefined8 *)pRVar3 = 0;
    pRVar3 = pRVar3 + (ulong)bVar6 * -0x10 + 8;
  }
  RefCounted::RefCounted(this_00);
  *(undefined8 *)(this_00 + 0x180) = 0;
  *(undefined **)this_00 = &EditorPlugin::vtable;
  StringName::StringName((StringName *)(this_00 + 0x188),"_can_handle",false);
  this_00[400] = (RefCounted)0x0;
  *(undefined8 *)(this_00 + 0x198) = 0;
  StringName::StringName((StringName *)(this_00 + 0x1a0),"_parse_begin",false);
  this_00[0x1a8] = (RefCounted)0x0;
  *(undefined8 *)(this_00 + 0x1b0) = 0;
  StringName::StringName((StringName *)(this_00 + 0x1b8),"_parse_category",false);
  this_00[0x1c0] = (RefCounted)0x0;
  *(undefined8 *)(this_00 + 0x1c8) = 0;
  StringName::StringName((StringName *)(this_00 + 0x1d0),"_parse_group",false);
  this_00[0x1d8] = (RefCounted)0x0;
  *(undefined8 *)(this_00 + 0x1e0) = 0;
  StringName::StringName((StringName *)(this_00 + 0x1e8),"_parse_property",false);
  this_00[0x1f0] = (RefCounted)0x0;
  *(undefined8 *)(this_00 + 0x1f8) = 0;
  StringName::StringName((StringName *)(this_00 + 0x200),"_parse_end",false);
  this_00[0x208] = (RefCounted)0x0;
  *(undefined ***)this_00 = &PTR__initialize_classv_00123d28;
  *(undefined1 (*) [16])(this_00 + 0x210) = (undefined1  [16])0x0;
  postinitialize_handler((Object *)this_00);
  cVar1 = RefCounted::init_ref();
  if (cVar1 == '\0') {
    pOVar5 = *(Object **)this;
    if (pOVar5 == (Object *)0x0) {
      return;
    }
    *(undefined8 *)this = 0;
    cVar1 = RefCounted::unreference();
    if (cVar1 == '\0') {
      return;
    }
    this_00 = (RefCounted *)0x0;
    cVar1 = predelete_handler(pOVar5);
    if (cVar1 == '\0') {
      return;
    }
  }
  else {
    pOVar5 = *(Object **)this;
    pOVar4 = pOVar5;
    if (this_00 == (RefCounted *)pOVar5) goto LAB_001158e5;
    *(RefCounted **)this = this_00;
    cVar1 = RefCounted::reference();
    if (cVar1 == '\0') {
      *(undefined8 *)this = 0;
    }
    pOVar4 = (Object *)this_00;
    if (((pOVar5 == (Object *)0x0) || (cVar1 = RefCounted::unreference(), cVar1 == '\0')) ||
       (cVar1 = predelete_handler(pOVar5), cVar1 == '\0')) goto LAB_001158e5;
  }
  (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
  Memory::free_static(pOVar5,false);
  pOVar4 = (Object *)this_00;
  if (this_00 == (RefCounted *)0x0) {
    return;
  }
LAB_001158e5:
  cVar1 = RefCounted::unreference();
  if ((cVar1 != '\0') && (cVar1 = predelete_handler(pOVar4), cVar1 != '\0')) {
    (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
    Memory::free_static(pOVar4,false);
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



/* BoneMapperButton::_notificationv(int, bool) */

void __thiscall BoneMapperButton::_notificationv(BoneMapperButton *this,int param_1,bool param_2)

{
  int iVar1;
  
  iVar1 = (int)this;
  if (param_2) {
    if (param_1 == 10) {
      fetch_textures(this);
    }
    if ((code *)PTR__notification_0012b088 != BaseButton::_notification) {
      TextureButton::_notification(iVar1);
    }
    BaseButton::_notification(iVar1);
    Control::_notification(iVar1);
    CanvasItem::_notification(iVar1);
    Node::_notification(iVar1);
    return;
  }
  Node::_notification(iVar1);
  CanvasItem::_notification(iVar1);
  Control::_notification(iVar1);
  BaseButton::_notification(iVar1);
  if ((code *)PTR__notification_0012b088 != BaseButton::_notification) {
    TextureButton::_notification(iVar1);
  }
  if (param_1 != 10) {
    return;
  }
  fetch_textures(this);
  return;
}



/* EditorPlugin::~EditorPlugin() */

void __thiscall EditorPlugin::~EditorPlugin(EditorPlugin *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(code **)this = EditorPlugin::add_inspector_plugin;
  if (bVar1) {
    if (*(long *)(this + 0x648) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00115e4a;
    }
    if (*(long *)(this + 0x630) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00115e4a;
    }
    if (*(long *)(this + 0x618) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00115e4a;
    }
    if (*(long *)(this + 0x600) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00115e4a;
    }
    if (*(long *)(this + 0x5e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00115e4a;
    }
    if (*(long *)(this + 0x5d0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00115e4a;
    }
    if (*(long *)(this + 0x5b8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00115e4a;
    }
    if (*(long *)(this + 0x5a0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00115e4a;
    }
    if (*(long *)(this + 0x588) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00115e4a;
    }
    if (*(long *)(this + 0x570) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00115e4a;
    }
    if (*(long *)(this + 0x558) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00115e4a;
    }
    if (*(long *)(this + 0x540) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00115e4a;
    }
    if (*(long *)(this + 0x528) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00115e4a;
    }
    if (*(long *)(this + 0x510) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00115e4a;
    }
    if (*(long *)(this + 0x4f8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00115e4a;
    }
    if (*(long *)(this + 0x4e0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00115e4a;
    }
    if (*(long *)(this + 0x4c8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00115e4a;
    }
    if (*(long *)(this + 0x4b0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00115e4a;
    }
    if (*(long *)(this + 0x498) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00115e4a;
    }
    if (*(long *)(this + 0x480) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00115e4a;
    }
    if (*(long *)(this + 0x468) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00115e4a;
    }
    if (*(long *)(this + 0x450) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00115e4a;
    }
    if (*(long *)(this + 0x438) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00115e4a;
    }
    if (*(long *)(this + 0x420) != 0) {
      StringName::unref();
    }
  }
LAB_00115e4a:
  CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0x418));
  CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0x410));
  Node::~Node((Node *)this);
  return;
}



/* EditorPlugin::~EditorPlugin() */

void __thiscall EditorPlugin::~EditorPlugin(EditorPlugin *this)

{
  ~EditorPlugin(this);
  operator_delete(this,0x660);
  return;
}



/* BoneMapEditorPlugin::~BoneMapEditorPlugin() */

void __thiscall BoneMapEditorPlugin::~BoneMapEditorPlugin(BoneMapEditorPlugin *this)

{
  *(undefined ***)this = &PTR__initialize_classv_00122a08;
  EditorPlugin::~EditorPlugin((EditorPlugin *)this);
  return;
}



/* BoneMapEditorPlugin::~BoneMapEditorPlugin() */

void __thiscall BoneMapEditorPlugin::~BoneMapEditorPlugin(BoneMapEditorPlugin *this)

{
  *(undefined ***)this = &PTR__initialize_classv_00122a08;
  EditorPlugin::~EditorPlugin((EditorPlugin *)this);
  operator_delete(this,0x660);
  return;
}



/* BonePicker::_initialize_classv() */

void BonePicker::_initialize_classv(void)

{
  long in_FS_OFFSET;
  undefined8 local_70;
  long local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (initialize_class()::initialized == '\0') {
    if (AcceptDialog::initialize_class()::initialized == '\0') {
      if (Window::initialize_class()::initialized == '\0') {
        if (Viewport::initialize_class()::initialized == '\0') {
          if (Node::initialize_class()::initialized == '\0') {
            Object::initialize_class();
            local_60 = 0;
            String::parse_latin1((String *)&local_60,"Object");
            StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
            local_70 = 0;
            String::parse_latin1((String *)&local_70,"Node");
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
            if ((code *)PTR__bind_methods_0012b010 != Node::_bind_methods) {
              Node::_bind_methods();
            }
            Node::initialize_class()::initialized = '\x01';
          }
          local_60 = 0;
          String::parse_latin1((String *)&local_60,"Node");
          StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
          local_70 = 0;
          String::parse_latin1((String *)&local_70,"Viewport");
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
          Viewport::_bind_methods();
          Viewport::initialize_class()::initialized = '\x01';
        }
        local_68 = 0;
        local_58 = "Viewport";
        local_50 = 8;
        String::parse_latin1((StrRange *)&local_68);
        StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
        local_58 = "Window";
        local_70 = 0;
        local_50 = 6;
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
        Window::_bind_methods();
        Window::initialize_class()::initialized = '\x01';
      }
      local_58 = "Window";
      local_68 = 0;
      local_50 = 6;
      String::parse_latin1((StrRange *)&local_68);
      StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
      local_58 = "AcceptDialog";
      local_70 = 0;
      local_50 = 0xc;
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
      if ((code *)PTR__bind_methods_0012b090 != Window::_bind_methods) {
        AcceptDialog::_bind_methods();
      }
      if ((code *)PTR__bind_compatibility_methods_0012b098 != Object::_bind_compatibility_methods) {
        AcceptDialog::_bind_compatibility_methods();
      }
      AcceptDialog::initialize_class()::initialized = '\x01';
    }
    local_58 = "AcceptDialog";
    local_68 = 0;
    local_50 = 0xc;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "BonePicker";
    local_70 = 0;
    local_50 = 10;
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
    initialize_class()::initialized = '\x01';
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* EditorInspectorPluginBoneMap::_initialize_classv() */

void EditorInspectorPluginBoneMap::_initialize_classv(void)

{
  long in_FS_OFFSET;
  undefined8 local_70;
  undefined8 local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (initialize_class()::initialized == '\0') {
    if (EditorInspectorPlugin::initialize_class()::initialized == '\0') {
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
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
        if ((StringName::configured != '\0') && (local_60 != 0)) {
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
        if ((code *)PTR__bind_methods_0012b010 != RefCounted::_bind_methods) {
          RefCounted::_bind_methods();
        }
        RefCounted::initialize_class()::initialized = '\x01';
      }
      local_58 = "RefCounted";
      local_68 = 0;
      local_50 = 10;
      String::parse_latin1((StrRange *)&local_68);
      StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
      local_58 = "EditorInspectorPlugin";
      local_70 = 0;
      local_50 = 0x15;
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
      if ((code *)PTR__bind_methods_0012b0a0 != RefCounted::_bind_methods) {
        EditorInspectorPlugin::_bind_methods();
      }
      if ((code *)PTR__bind_compatibility_methods_0012b0a8 != Object::_bind_compatibility_methods) {
        EditorInspectorPlugin::_bind_compatibility_methods();
      }
      EditorInspectorPlugin::initialize_class()::initialized = '\x01';
    }
    local_58 = "EditorInspectorPlugin";
    local_68 = 0;
    local_50 = 0x15;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "EditorInspectorPluginBoneMap";
    local_70 = 0;
    local_50 = 0x1c;
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
            CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar5 + 0x10));
            Memory::free_static(pvVar5,false);
            pvVar5 = *(void **)(this + 0x18);
            *(undefined8 *)((long)pvVar5 + lVar4 * 2) = 0;
          }
          lVar4 = lVar4 + 4;
        } while (lVar4 != (ulong)uVar2 << 2);
        *(undefined4 *)(this + 0x3c) = 0;
        *(undefined1 (*) [16])(this + 0x28) = (undefined1  [16])0x0;
        if (pvVar5 == (void *)0x0) goto LAB_001168b5;
      }
    }
    Memory::free_static(pvVar5,false);
    Memory::free_static(*(void **)(this + 0x20),false);
  }
LAB_001168b5:
  CowData<char32_t>::_unref((CowData<char32_t> *)this);
  return;
}



/* CallableCustomMethodPointer<BoneMapper, void>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<BoneMapper,void>::call
          (CallableCustomMethodPointer<BoneMapper,void> *this,Variant **param_1,int param_2,
          Variant *param_3,CallError *param_4)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  ulong *puVar4;
  code *UNRECOVERED_JUMPTABLE;
  ulong uVar5;
  long in_FS_OFFSET;
  bool bVar6;
  CowData<char32_t> local_60 [8];
  CowData<char32_t> local_58 [8];
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar3 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar3 < (uint)ObjectDB::slot_max) {
    while( true ) {
      uVar5 = (ulong)local_48 >> 8;
      local_48 = (char *)(uVar5 << 8);
      LOCK();
      bVar6 = (char)ObjectDB::spin_lock == '\0';
      if (bVar6) {
        ObjectDB::spin_lock._0_1_ = '\x01';
      }
      UNLOCK();
      if (bVar6) break;
      local_48 = (char *)(uVar5 << 8);
      do {
      } while ((char)ObjectDB::spin_lock != '\0');
    }
    puVar4 = (ulong *)((ulong)uVar3 * 0x10 + ObjectDB::object_slots);
    uVar5 = *(ulong *)(this + 0x30) >> 0x18 & 0x7fffffffff;
    if (uVar5 != (*puVar4 & 0x7fffffffff)) {
      ObjectDB::spin_lock._0_1_ = '\0';
      goto LAB_00116aff;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] == 0) goto LAB_00116aff;
    lVar1 = *(long *)(this + 0x28);
    UNRECOVERED_JUMPTABLE = *(code **)(this + 0x38);
    lVar2 = *(long *)(this + 0x40);
    if (param_2 == 0) {
      *(undefined4 *)param_4 = 0;
      if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
        UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar1 + lVar2) + -1);
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00116ad8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),uVar5,UNRECOVERED_JUMPTABLE);
        return;
      }
      goto LAB_00116bc1;
    }
    *(undefined4 *)param_4 = 3;
    *(undefined4 *)(param_4 + 8) = 0;
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
LAB_00116aff:
    local_50 = 0;
    local_48 = "\', can\'t call method.";
    local_40 = 0x15;
    String::parse_latin1((StrRange *)&local_50);
    uitos((ulong)local_60);
    operator+((char *)local_58,(String *)"Invalid Object id \'");
    String::operator+((String *)&local_48,(String *)local_58);
    _err_print_error(&_LC92,"./core/object/callable_method_pointer.h",0x67,
                     "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                     (String *)&local_48,0,0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
    CowData<char32_t>::_unref(local_58);
    CowData<char32_t>::_unref(local_60);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00116bc1:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<BonePicker, void>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<BonePicker,void>::call
          (CallableCustomMethodPointer<BonePicker,void> *this,Variant **param_1,int param_2,
          Variant *param_3,CallError *param_4)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  ulong *puVar4;
  code *UNRECOVERED_JUMPTABLE;
  ulong uVar5;
  long in_FS_OFFSET;
  bool bVar6;
  CowData<char32_t> local_60 [8];
  CowData<char32_t> local_58 [8];
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar3 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar3 < (uint)ObjectDB::slot_max) {
    while( true ) {
      uVar5 = (ulong)local_48 >> 8;
      local_48 = (char *)(uVar5 << 8);
      LOCK();
      bVar6 = (char)ObjectDB::spin_lock == '\0';
      if (bVar6) {
        ObjectDB::spin_lock._0_1_ = '\x01';
      }
      UNLOCK();
      if (bVar6) break;
      local_48 = (char *)(uVar5 << 8);
      do {
      } while ((char)ObjectDB::spin_lock != '\0');
    }
    puVar4 = (ulong *)((ulong)uVar3 * 0x10 + ObjectDB::object_slots);
    uVar5 = *(ulong *)(this + 0x30) >> 0x18 & 0x7fffffffff;
    if (uVar5 != (*puVar4 & 0x7fffffffff)) {
      ObjectDB::spin_lock._0_1_ = '\0';
      goto LAB_00116d1f;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] == 0) goto LAB_00116d1f;
    lVar1 = *(long *)(this + 0x28);
    UNRECOVERED_JUMPTABLE = *(code **)(this + 0x38);
    lVar2 = *(long *)(this + 0x40);
    if (param_2 == 0) {
      *(undefined4 *)param_4 = 0;
      if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
        UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar1 + lVar2) + -1);
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00116cf8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),uVar5,UNRECOVERED_JUMPTABLE);
        return;
      }
      goto LAB_00116de1;
    }
    *(undefined4 *)param_4 = 3;
    *(undefined4 *)(param_4 + 8) = 0;
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
LAB_00116d1f:
    local_50 = 0;
    local_48 = "\', can\'t call method.";
    local_40 = 0x15;
    String::parse_latin1((StrRange *)&local_50);
    uitos((ulong)local_60);
    operator+((char *)local_58,(String *)"Invalid Object id \'");
    String::operator+((String *)&local_48,(String *)local_58);
    _err_print_error(&_LC92,"./core/object/callable_method_pointer.h",0x67,
                     "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                     (String *)&local_48,0,0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
    CowData<char32_t>::_unref(local_58);
    CowData<char32_t>::_unref(local_60);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00116de1:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<BoneMapperItem, void>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<BoneMapperItem,void>::call
          (CallableCustomMethodPointer<BoneMapperItem,void> *this,Variant **param_1,int param_2,
          Variant *param_3,CallError *param_4)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  ulong *puVar4;
  code *UNRECOVERED_JUMPTABLE;
  ulong uVar5;
  long in_FS_OFFSET;
  bool bVar6;
  CowData<char32_t> local_60 [8];
  CowData<char32_t> local_58 [8];
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar3 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar3 < (uint)ObjectDB::slot_max) {
    while( true ) {
      uVar5 = (ulong)local_48 >> 8;
      local_48 = (char *)(uVar5 << 8);
      LOCK();
      bVar6 = (char)ObjectDB::spin_lock == '\0';
      if (bVar6) {
        ObjectDB::spin_lock._0_1_ = '\x01';
      }
      UNLOCK();
      if (bVar6) break;
      local_48 = (char *)(uVar5 << 8);
      do {
      } while ((char)ObjectDB::spin_lock != '\0');
    }
    puVar4 = (ulong *)((ulong)uVar3 * 0x10 + ObjectDB::object_slots);
    uVar5 = *(ulong *)(this + 0x30) >> 0x18 & 0x7fffffffff;
    if (uVar5 != (*puVar4 & 0x7fffffffff)) {
      ObjectDB::spin_lock._0_1_ = '\0';
      goto LAB_00116f3f;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] == 0) goto LAB_00116f3f;
    lVar1 = *(long *)(this + 0x28);
    UNRECOVERED_JUMPTABLE = *(code **)(this + 0x38);
    lVar2 = *(long *)(this + 0x40);
    if (param_2 == 0) {
      *(undefined4 *)param_4 = 0;
      if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
        UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar1 + lVar2) + -1);
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00116f18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),uVar5,UNRECOVERED_JUMPTABLE);
        return;
      }
      goto LAB_00117001;
    }
    *(undefined4 *)param_4 = 3;
    *(undefined4 *)(param_4 + 8) = 0;
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
LAB_00116f3f:
    local_50 = 0;
    local_48 = "\', can\'t call method.";
    local_40 = 0x15;
    String::parse_latin1((StrRange *)&local_50);
    uitos((ulong)local_60);
    operator+((char *)local_58,(String *)"Invalid Object id \'");
    String::operator+((String *)&local_48,(String *)local_58);
    _err_print_error(&_LC92,"./core/object/callable_method_pointer.h",0x67,
                     "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                     (String *)&local_48,0,0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
    CowData<char32_t>::_unref(local_58);
    CowData<char32_t>::_unref(local_60);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00117001:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<BoneMapper, void, int>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<BoneMapper,void,int>::call
          (CallableCustomMethodPointer<BoneMapper,void,int> *this,Variant **param_1,int param_2,
          Variant *param_3,CallError *param_4)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  ulong *puVar8;
  code *UNRECOVERED_JUMPTABLE;
  long in_FS_OFFSET;
  bool bVar9;
  CowData<char32_t> local_60 [8];
  CowData<char32_t> local_58 [8];
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar7 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar7 < (uint)ObjectDB::slot_max) {
    while( true ) {
      uVar3 = (ulong)local_48 >> 8;
      local_48 = (char *)(uVar3 << 8);
      LOCK();
      bVar9 = (char)ObjectDB::spin_lock == '\0';
      if (bVar9) {
        ObjectDB::spin_lock._0_1_ = '\x01';
      }
      UNLOCK();
      if (bVar9) break;
      local_48 = (char *)(uVar3 << 8);
      do {
      } while ((char)ObjectDB::spin_lock != '\0');
    }
    puVar8 = (ulong *)((ulong)uVar7 * 0x10 + ObjectDB::object_slots);
    if ((*(ulong *)(this + 0x30) >> 0x18 & 0x7fffffffff) != (*puVar8 & 0x7fffffffff)) {
      ObjectDB::spin_lock._0_1_ = '\0';
      goto LAB_001171c8;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar8[1] == 0) goto LAB_001171c8;
    lVar1 = *(long *)(this + 0x28);
    UNRECOVERED_JUMPTABLE = *(code **)(this + 0x38);
    lVar2 = *(long *)(this + 0x40);
    if ((uint)param_2 < 2) {
      if (param_2 != 0) {
        *(undefined4 *)param_4 = 0;
        if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
          UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar1 + lVar2) + -1);
        }
        cVar5 = Variant::can_convert_strict(*(undefined4 *)*param_1,2);
        uVar4 = _LC93;
        if (cVar5 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar4;
        }
        iVar6 = Variant::operator_cast_to_int(*param_1);
        if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00117177. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),iVar6);
          return;
        }
        goto LAB_0011728a;
      }
      *(undefined4 *)param_4 = 4;
      *(undefined4 *)(param_4 + 8) = 1;
    }
    else {
      *(undefined4 *)param_4 = 3;
      *(undefined4 *)(param_4 + 8) = 1;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
LAB_001171c8:
    local_50 = 0;
    local_48 = "\', can\'t call method.";
    local_40 = 0x15;
    String::parse_latin1((StrRange *)&local_50);
    uitos((ulong)local_60);
    operator+((char *)local_58,(String *)"Invalid Object id \'");
    String::operator+((String *)&local_48,(String *)local_58);
    _err_print_error(&_LC92,"./core/object/callable_method_pointer.h",0x67,
                     "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                     (String *)&local_48,0,0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
    CowData<char32_t>::_unref(local_58);
    CowData<char32_t>::_unref(local_60);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_0011728a:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<BoneMapper, void, StringName const&>::call(Variant const**, int,
   Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<BoneMapper,void,StringName_const&>::call
          (CallableCustomMethodPointer<BoneMapper,void,StringName_const&> *this,Variant **param_1,
          int param_2,Variant *param_3,CallError *param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  char cVar4;
  uint uVar5;
  ulong *puVar6;
  code *pcVar7;
  long in_FS_OFFSET;
  bool bVar8;
  CowData<char32_t> local_50 [8];
  CowData<char32_t> local_48 [8];
  undefined8 local_40;
  Variant local_38;
  undefined7 uStack_37;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar5 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar5 < (uint)ObjectDB::slot_max) {
    while( true ) {
      local_38 = (Variant)0x0;
      LOCK();
      bVar8 = (char)ObjectDB::spin_lock == '\0';
      if (bVar8) {
        ObjectDB::spin_lock._0_1_ = '\x01';
      }
      UNLOCK();
      if (bVar8) break;
      do {
      } while ((char)ObjectDB::spin_lock != '\0');
    }
    puVar6 = (ulong *)((ulong)uVar5 * 0x10 + ObjectDB::object_slots);
    if ((*(ulong *)(this + 0x30) >> 0x18 & 0x7fffffffff) == (*puVar6 & 0x7fffffffff)) {
      ObjectDB::spin_lock._0_1_ = '\0';
      if (puVar6[1] != 0) {
        lVar1 = *(long *)(this + 0x28);
        pcVar7 = *(code **)(this + 0x38);
        lVar2 = *(long *)(this + 0x40);
        if ((uint)param_2 < 2) {
          if (param_2 == 0) {
            *(undefined4 *)param_4 = 4;
            *(undefined4 *)(param_4 + 8) = 1;
          }
          else {
            *(undefined4 *)param_4 = 0;
            if (((ulong)pcVar7 & 1) != 0) {
              pcVar7 = *(code **)(pcVar7 + *(long *)(lVar1 + lVar2) + -1);
            }
            cVar4 = Variant::can_convert_strict(*(undefined4 *)*param_1,0x15);
            uVar3 = _LC94;
            if (cVar4 == '\0') {
              *(undefined4 *)param_4 = 2;
              *(undefined8 *)(param_4 + 4) = uVar3;
            }
            Variant::operator_cast_to_StringName(&local_38);
            (*pcVar7)((long *)(lVar1 + lVar2),&local_38);
            if ((StringName::configured != '\0') && (CONCAT71(uStack_37,local_38) != 0)) {
              StringName::unref();
            }
          }
        }
        else {
          *(undefined4 *)param_4 = 3;
          *(undefined4 *)(param_4 + 8) = 1;
        }
        goto LAB_0011735e;
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
  _err_print_error(&_LC92,"./core/object/callable_method_pointer.h",0x67,
                   "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                   &local_38,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_38);
  CowData<char32_t>::_unref(local_48);
  CowData<char32_t>::_unref(local_50);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_40);
LAB_0011735e:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* CallableCustomMethodPointer<BoneMapperItem, void, String const&, Variant const&, String const&,
   bool>::call(Variant const**, int, Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<BoneMapperItem,void,String_const&,Variant_const&,String_const&,bool>::
call(CallableCustomMethodPointer<BoneMapperItem,void,String_const&,Variant_const&,String_const&,bool>
     *this,Variant **param_1,int param_2,Variant *param_3,CallError *param_4)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  char cVar5;
  uint uVar6;
  ulong *puVar7;
  code *pcVar8;
  long in_FS_OFFSET;
  bool bVar9;
  CowData<char32_t> local_80 [8];
  CowData<char32_t> local_78 [8];
  undefined8 local_70;
  char *local_68;
  undefined8 local_60;
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar6 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar6 < (uint)ObjectDB::slot_max) {
    while( true ) {
      uVar3 = (ulong)local_68 >> 8;
      local_68 = (char *)(uVar3 << 8);
      LOCK();
      bVar9 = (char)ObjectDB::spin_lock == '\0';
      if (bVar9) {
        ObjectDB::spin_lock._0_1_ = '\x01';
      }
      UNLOCK();
      if (bVar9) break;
      local_68 = (char *)(uVar3 << 8);
      do {
      } while ((char)ObjectDB::spin_lock != '\0');
    }
    puVar7 = (ulong *)((ulong)uVar6 * 0x10 + ObjectDB::object_slots);
    if ((*(ulong *)(this + 0x30) >> 0x18 & 0x7fffffffff) == (*puVar7 & 0x7fffffffff)) {
      ObjectDB::spin_lock._0_1_ = '\0';
      if (puVar7[1] != 0) {
        lVar1 = *(long *)(this + 0x28);
        pcVar8 = *(code **)(this + 0x38);
        lVar2 = *(long *)(this + 0x40);
        if ((uint)param_2 < 5) {
          if (param_2 == 4) {
            *(undefined4 *)param_4 = 0;
            if (((ulong)pcVar8 & 1) != 0) {
              pcVar8 = *(code **)(pcVar8 + *(long *)(lVar1 + lVar2) + -1);
            }
            cVar5 = Variant::can_convert_strict(*(undefined4 *)param_1[3],1);
            uVar4 = _LC95;
            if (cVar5 == '\0') {
              *(undefined4 *)param_4 = 2;
              *(undefined8 *)(param_4 + 4) = uVar4;
            }
            bVar9 = Variant::operator_cast_to_bool(param_1[3]);
            cVar5 = Variant::can_convert_strict(*(undefined4 *)param_1[2],4);
            uVar4 = _LC96;
            if (cVar5 == '\0') {
              *(undefined4 *)param_4 = 2;
              *(undefined8 *)(param_4 + 4) = uVar4;
            }
            Variant::operator_cast_to_String((Variant *)&local_70);
            cVar5 = Variant::can_convert_strict(*(undefined4 *)param_1[1],0);
            if (cVar5 == '\0') {
              *(undefined4 *)param_4 = 2;
              *(undefined8 *)(param_4 + 4) = 1;
            }
            Variant::Variant((Variant *)local_58,param_1[1]);
            cVar5 = Variant::can_convert_strict(*(undefined4 *)*param_1,4);
            uVar4 = _LC98;
            if (cVar5 == '\0') {
              *(undefined4 *)param_4 = 2;
              *(undefined8 *)(param_4 + 4) = uVar4;
            }
            Variant::operator_cast_to_String((Variant *)&local_68);
            (*pcVar8)((long *)(lVar1 + lVar2),(Variant *)&local_68,(Variant *)local_58,
                      (Variant *)&local_70,bVar9);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
            if (Variant::needs_deinit[local_58[0]] != '\0') {
              Variant::_clear_internal();
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
          }
          else {
            *(undefined4 *)param_4 = 4;
            *(undefined4 *)(param_4 + 8) = 4;
          }
        }
        else {
          *(undefined4 *)param_4 = 3;
          *(undefined4 *)(param_4 + 8) = 4;
        }
        goto LAB_001175dc;
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
  local_70 = 0;
  local_68 = "\', can\'t call method.";
  local_60 = 0x15;
  String::parse_latin1((StrRange *)&local_70);
  uitos((ulong)local_80);
  operator+((char *)local_78,(String *)"Invalid Object id \'");
  String::operator+((String *)&local_68,(String *)local_78);
  _err_print_error(&_LC92,"./core/object/callable_method_pointer.h",0x67,
                   "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                   (Variant *)&local_68,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref(local_78);
  CowData<char32_t>::_unref(local_80);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
LAB_001175dc:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* CallableCustomMethodPointer<BoneMapper, void, String const&, Variant const&, String const&,
   bool>::call(Variant const**, int, Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<BoneMapper,void,String_const&,Variant_const&,String_const&,bool>::call
          (CallableCustomMethodPointer<BoneMapper,void,String_const&,Variant_const&,String_const&,bool>
           *this,Variant **param_1,int param_2,Variant *param_3,CallError *param_4)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  char cVar5;
  uint uVar6;
  ulong *puVar7;
  code *pcVar8;
  long in_FS_OFFSET;
  bool bVar9;
  CowData<char32_t> local_80 [8];
  CowData<char32_t> local_78 [8];
  undefined8 local_70;
  char *local_68;
  undefined8 local_60;
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar6 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar6 < (uint)ObjectDB::slot_max) {
    while( true ) {
      uVar3 = (ulong)local_68 >> 8;
      local_68 = (char *)(uVar3 << 8);
      LOCK();
      bVar9 = (char)ObjectDB::spin_lock == '\0';
      if (bVar9) {
        ObjectDB::spin_lock._0_1_ = '\x01';
      }
      UNLOCK();
      if (bVar9) break;
      local_68 = (char *)(uVar3 << 8);
      do {
      } while ((char)ObjectDB::spin_lock != '\0');
    }
    puVar7 = (ulong *)((ulong)uVar6 * 0x10 + ObjectDB::object_slots);
    if ((*(ulong *)(this + 0x30) >> 0x18 & 0x7fffffffff) == (*puVar7 & 0x7fffffffff)) {
      ObjectDB::spin_lock._0_1_ = '\0';
      if (puVar7[1] != 0) {
        lVar1 = *(long *)(this + 0x28);
        pcVar8 = *(code **)(this + 0x38);
        lVar2 = *(long *)(this + 0x40);
        if ((uint)param_2 < 5) {
          if (param_2 == 4) {
            *(undefined4 *)param_4 = 0;
            if (((ulong)pcVar8 & 1) != 0) {
              pcVar8 = *(code **)(pcVar8 + *(long *)(lVar1 + lVar2) + -1);
            }
            cVar5 = Variant::can_convert_strict(*(undefined4 *)param_1[3],1);
            uVar4 = _LC95;
            if (cVar5 == '\0') {
              *(undefined4 *)param_4 = 2;
              *(undefined8 *)(param_4 + 4) = uVar4;
            }
            bVar9 = Variant::operator_cast_to_bool(param_1[3]);
            cVar5 = Variant::can_convert_strict(*(undefined4 *)param_1[2],4);
            uVar4 = _LC96;
            if (cVar5 == '\0') {
              *(undefined4 *)param_4 = 2;
              *(undefined8 *)(param_4 + 4) = uVar4;
            }
            Variant::operator_cast_to_String((Variant *)&local_70);
            cVar5 = Variant::can_convert_strict(*(undefined4 *)param_1[1],0);
            if (cVar5 == '\0') {
              *(undefined4 *)param_4 = 2;
              *(undefined8 *)(param_4 + 4) = 1;
            }
            Variant::Variant((Variant *)local_58,param_1[1]);
            cVar5 = Variant::can_convert_strict(*(undefined4 *)*param_1,4);
            uVar4 = _LC98;
            if (cVar5 == '\0') {
              *(undefined4 *)param_4 = 2;
              *(undefined8 *)(param_4 + 4) = uVar4;
            }
            Variant::operator_cast_to_String((Variant *)&local_68);
            (*pcVar8)((long *)(lVar1 + lVar2),(Variant *)&local_68,(Variant *)local_58,
                      (Variant *)&local_70,bVar9);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
            if (Variant::needs_deinit[local_58[0]] != '\0') {
              Variant::_clear_internal();
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
          }
          else {
            *(undefined4 *)param_4 = 4;
            *(undefined4 *)(param_4 + 8) = 4;
          }
        }
        else {
          *(undefined4 *)param_4 = 3;
          *(undefined4 *)(param_4 + 8) = 4;
        }
        goto LAB_0011791c;
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
  local_70 = 0;
  local_68 = "\', can\'t call method.";
  local_60 = 0x15;
  String::parse_latin1((StrRange *)&local_70);
  uitos((ulong)local_80);
  operator+((char *)local_78,(String *)"Invalid Object id \'");
  String::operator+((String *)&local_68,(String *)local_78);
  _err_print_error(&_LC92,"./core/object/callable_method_pointer.h",0x67,
                   "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                   (Variant *)&local_68,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref(local_78);
  CowData<char32_t>::_unref(local_80);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
LAB_0011791c:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* MethodBindT<int>::_gen_argument_type_info(int) const */

undefined4 * MethodBindT<int>::_gen_argument_type_info(int param_1)

{
  long lVar1;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar2;
  long in_FS_OFFSET;
  undefined8 local_80;
  undefined8 local_78;
  long local_70;
  undefined *local_68;
  long local_60;
  long local_58;
  undefined4 local_50;
  long local_48;
  undefined4 local_40;
  long local_30;
  
  puVar2 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *puVar2 = 0;
  puVar2[6] = 0;
  *(undefined8 *)(puVar2 + 8) = 0;
  puVar2[10] = 6;
  *(undefined1 (*) [16])(puVar2 + 2) = (undefined1  [16])0x0;
  if (in_EDX == 0) {
    local_70 = 0;
    local_78 = 0;
    local_68 = &_LC24;
    local_60 = 0;
    String::parse_latin1((StrRange *)&local_78);
    local_80 = 0;
    PropertyInfo::PropertyInfo
              ((PropertyInfo *)&local_68,2,(CowData<char32_t> *)&local_80,0,(StrRange *)&local_78,6,
               &local_70);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
    if ((StringName::configured != '\0') && (local_70 != 0)) {
      StringName::unref();
    }
    *puVar2 = local_68._0_4_;
    if (*(long *)(puVar2 + 2) != local_60) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(puVar2 + 2));
      lVar1 = local_60;
      local_60 = 0;
      *(long *)(puVar2 + 2) = lVar1;
    }
    if (*(long *)(puVar2 + 4) != local_58) {
      StringName::unref();
      lVar1 = local_58;
      local_58 = 0;
      *(long *)(puVar2 + 4) = lVar1;
    }
    puVar2[6] = local_50;
    if (*(long *)(puVar2 + 8) != local_48) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(puVar2 + 8));
      lVar1 = local_48;
      local_48 = 0;
      *(long *)(puVar2 + 8) = lVar1;
    }
    puVar2[10] = local_40;
    PropertyInfo::~PropertyInfo((PropertyInfo *)&local_68);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar2;
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
    if ((code *)PTR__bind_methods_0012b0b0 != Object::_bind_methods) {
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



/* MethodBindTRC<int>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<int>::_gen_argument_type_info(int param_1)

{
  undefined4 in_register_0000003c;
  undefined4 *puVar1;
  long in_FS_OFFSET;
  undefined8 local_60;
  long local_58;
  long local_50;
  undefined *local_48;
  undefined8 local_40;
  long local_30;
  
  puVar1 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = 0;
  local_58 = 0;
  local_48 = &_LC24;
  local_40 = 0;
  String::parse_latin1((StrRange *)&local_58);
  local_60 = 0;
  *puVar1 = 2;
  puVar1[6] = 0;
  *(undefined8 *)(puVar1 + 8) = 0;
  *(undefined1 (*) [16])(puVar1 + 2) = (undefined1  [16])0x0;
  if (local_58 == 0) {
    puVar1[10] = 6;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar1 + 8),(CowData *)&local_58);
    puVar1[10] = 6;
    if (puVar1[6] == 0x11) {
      StringName::StringName((StringName *)&local_48,(String *)(puVar1 + 8),false);
      if (*(undefined **)(puVar1 + 4) == local_48) {
        if ((StringName::configured != '\0') && (local_48 != (undefined *)0x0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        *(undefined **)(puVar1 + 4) = local_48;
      }
      goto LAB_00117f85;
    }
  }
  StringName::operator=((StringName *)(puVar1 + 4),(StringName *)&local_50);
LAB_00117f85:
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  if ((StringName::configured != '\0') && (local_50 != 0)) {
    StringName::unref();
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* HBoxContainer::_initialize_classv() */

void HBoxContainer::_initialize_classv(void)

{
  long in_FS_OFFSET;
  undefined8 local_70;
  undefined8 local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (initialize_class()::initialized == '\0') {
    if (BoxContainer::initialize_class()::initialized == '\0') {
      if (Container::initialize_class()::initialized == '\0') {
        if (Control::initialize_class()::initialized == '\0') {
          Control::initialize_class();
        }
        local_68 = 0;
        local_50 = 7;
        local_58 = "Control";
        String::parse_latin1((StrRange *)&local_68);
        StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
        local_58 = "Container";
        local_70 = 0;
        local_50 = 9;
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
        if ((code *)PTR__bind_methods_0012b008 != Container::_bind_methods) {
          Container::_bind_methods();
        }
        Container::initialize_class()::initialized = '\x01';
      }
      local_58 = "Container";
      local_68 = 0;
      local_50 = 9;
      String::parse_latin1((StrRange *)&local_68);
      StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
      local_58 = "BoxContainer";
      local_70 = 0;
      local_50 = 0xc;
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
      if ((code *)PTR__bind_methods_0012b018 != Container::_bind_methods) {
        BoxContainer::_bind_methods();
      }
      BoxContainer::initialize_class()::initialized = '\x01';
    }
    local_58 = "BoxContainer";
    local_68 = 0;
    local_50 = 0xc;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "HBoxContainer";
    local_70 = 0;
    local_50 = 0xd;
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
    initialize_class()::initialized = '\x01';
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* BoneMapperButton::_initialize_classv() */

void BoneMapperButton::_initialize_classv(void)

{
  long in_FS_OFFSET;
  undefined8 local_70;
  undefined8 local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (initialize_class()::initialized == '\0') {
    if (TextureButton::initialize_class()::initialized == '\0') {
      if (BaseButton::initialize_class()::initialized == '\0') {
        if (Control::initialize_class()::initialized == '\0') {
          Control::initialize_class();
        }
        local_68 = 0;
        local_50 = 7;
        local_58 = "Control";
        String::parse_latin1((StrRange *)&local_68);
        StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
        local_58 = "BaseButton";
        local_70 = 0;
        local_50 = 10;
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
        if ((code *)PTR__bind_methods_0012b008 != BaseButton::_bind_methods) {
          BaseButton::_bind_methods();
        }
        BaseButton::initialize_class()::initialized = '\x01';
      }
      local_58 = "BaseButton";
      local_68 = 0;
      local_50 = 10;
      String::parse_latin1((StrRange *)&local_68);
      StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
      local_58 = "TextureButton";
      local_70 = 0;
      local_50 = 0xd;
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
      if ((code *)PTR__bind_methods_0012b0b8 != BaseButton::_bind_methods) {
        TextureButton::_bind_methods();
      }
      TextureButton::initialize_class()::initialized = '\x01';
    }
    local_58 = "TextureButton";
    local_68 = 0;
    local_50 = 0xd;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "BoneMapperButton";
    local_70 = 0;
    local_50 = 0x10;
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
    initialize_class()::initialized = '\x01';
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* ColorRect::_initialize_classv() */

void ColorRect::_initialize_classv(void)

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
    if (Control::initialize_class()::initialized == '\0') {
      Control::initialize_class();
    }
    local_58 = 0;
    local_40 = 7;
    local_48 = "Control";
    String::parse_latin1((StrRange *)&local_58);
    StringName::StringName((StringName *)&local_50,(String *)&local_58,false);
    local_48 = "ColorRect";
    local_60 = 0;
    local_40 = 9;
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
    if ((code *)PTR__bind_methods_0012b0c0 != Control::_bind_methods) {
      ColorRect::_bind_methods();
    }
    initialize_class()::initialized = '\x01';
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* VBoxContainer::_initialize_classv() */

void VBoxContainer::_initialize_classv(void)

{
  if (initialize_class()::initialized == '\0') {
    initialize_class();
    return;
  }
  return;
}



/* BoneMapEditor::_initialize_classv() */

void BoneMapEditor::_initialize_classv(void)

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
    if (VBoxContainer::initialize_class()::initialized == '\0') {
      VBoxContainer::initialize_class();
    }
    local_58 = 0;
    local_40 = 0xd;
    local_48 = "VBoxContainer";
    String::parse_latin1((StrRange *)&local_58);
    StringName::StringName((StringName *)&local_50,(String *)&local_58,false);
    local_48 = "BoneMapEditor";
    local_60 = 0;
    local_40 = 0xd;
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



/* BoneMapEditorPlugin::_initialize_classv() */

void BoneMapEditorPlugin::_initialize_classv(void)

{
  long in_FS_OFFSET;
  undefined8 local_70;
  undefined8 local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (initialize_class()::initialized == '\0') {
    if (EditorPlugin::initialize_class()::initialized == '\0') {
      if (Node::initialize_class()::initialized == '\0') {
        Object::initialize_class();
        local_68 = 0;
        local_50 = 6;
        local_58 = "Object";
        String::parse_latin1((StrRange *)&local_68);
        StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
        local_58 = "Node";
        local_70 = 0;
        local_50 = 4;
        String::parse_latin1((StrRange *)&local_70);
        StringName::StringName((StringName *)&local_58,(String *)&local_70,false);
        ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_60);
        if ((StringName::configured != '\0') && (local_58 != (undefined *)0x0)) {
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
        if ((StringName::configured != '\0') && (local_60 != 0)) {
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
        if ((code *)PTR__bind_methods_0012b010 != Node::_bind_methods) {
          Node::_bind_methods();
        }
        Node::initialize_class()::initialized = '\x01';
      }
      local_58 = "Node";
      local_68 = 0;
      local_50 = 4;
      String::parse_latin1((StrRange *)&local_68);
      StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
      local_58 = "EditorPlugin";
      local_70 = 0;
      local_50 = 0xc;
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
      if ((code *)PTR__bind_methods_0012b0c8 != Node::_bind_methods) {
        EditorPlugin::_bind_methods();
      }
      if ((code *)PTR__bind_compatibility_methods_0012b0d0 != Object::_bind_compatibility_methods) {
        EditorPlugin::_bind_compatibility_methods();
      }
      EditorPlugin::initialize_class()::initialized = '\x01';
    }
    local_58 = "EditorPlugin";
    local_68 = 0;
    local_50 = 0xc;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "BoneMapEditorPlugin";
    local_70 = 0;
    local_50 = 0x13;
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
    initialize_class()::initialized = '\x01';
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
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
    if (cVar5 != '\0') goto LAB_00118d9b;
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
      if (cVar5 != '\0') goto LAB_00118d9b;
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar6 = String::operator==(param_1,"Object");
      return uVar6;
    }
  }
  else {
LAB_00118d9b:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorInspectorPluginBoneMap::is_class(String const&) const */

undefined8 __thiscall
EditorInspectorPluginBoneMap::is_class(EditorInspectorPluginBoneMap *this,String *param_1)

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
    if (cVar5 != '\0') goto LAB_00118f9b;
  }
  cVar5 = String::operator==(param_1,"EditorInspectorPluginBoneMap");
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
      if (cVar5 != '\0') goto LAB_00118f9b;
    }
    cVar5 = String::operator==(param_1,"EditorInspectorPlugin");
    if (cVar5 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar6 = RefCounted::is_class((RefCounted *)this,param_1);
        return uVar6;
      }
      goto LAB_0011909e;
    }
  }
LAB_00118f9b:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0011909e:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Node::is_class(String const&) const */

undefined8 __thiscall Node::is_class(Node *this,String *param_1)

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
    if (cVar5 != '\0') goto LAB_001191ab;
  }
  cVar5 = String::operator==(param_1,"Node");
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
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if (cVar5 != '\0') goto LAB_001191ab;
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar6 = String::operator==(param_1,"Object");
      return uVar6;
    }
  }
  else {
LAB_001191ab:
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
    if (cVar5 != '\0') goto LAB_001193ab;
  }
  cVar5 = String::operator==(param_1,"Control");
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
      if (cVar5 != '\0') goto LAB_001193ab;
    }
    cVar5 = String::operator==(param_1,"CanvasItem");
    if (cVar5 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar6 = Node::is_class((Node *)this,param_1);
        return uVar6;
      }
      goto LAB_001194ae;
    }
  }
LAB_001193ab:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_001194ae:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ColorRect::is_class(String const&) const */

undefined8 __thiscall ColorRect::is_class(ColorRect *this,String *param_1)

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
    if (cVar4 != '\0') goto LAB_001195bb;
  }
  cVar4 = String::operator==(param_1,"ColorRect");
  if (cVar4 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar5 = Control::is_class((Control *)this,param_1);
      return uVar5;
    }
  }
  else {
LAB_001195bb:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* BoxContainer::is_class(String const&) const */

undefined8 __thiscall BoxContainer::is_class(BoxContainer *this,String *param_1)

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
    if (cVar5 != '\0') goto LAB_0011970b;
  }
  cVar5 = String::operator==(param_1,"BoxContainer");
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
      if (cVar5 != '\0') goto LAB_0011970b;
    }
    cVar5 = String::operator==(param_1,"Container");
    if (cVar5 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar6 = Control::is_class((Control *)this,param_1);
        return uVar6;
      }
      goto LAB_0011980e;
    }
  }
LAB_0011970b:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0011980e:
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
    if (cVar4 != '\0') goto LAB_0011991b;
  }
  cVar4 = String::operator==(param_1,"HBoxContainer");
  if (cVar4 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar5 = BoxContainer::is_class((BoxContainer *)this,param_1);
      return uVar5;
    }
  }
  else {
LAB_0011991b:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* VBoxContainer::is_class(String const&) const */

undefined8 __thiscall VBoxContainer::is_class(VBoxContainer *this,String *param_1)

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
    if (cVar4 != '\0') goto LAB_00119a6b;
  }
  cVar4 = String::operator==(param_1,"VBoxContainer");
  if (cVar4 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar5 = BoxContainer::is_class((BoxContainer *)this,param_1);
      return uVar5;
    }
  }
  else {
LAB_00119a6b:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* BoneMapEditor::is_class(String const&) const */

undefined8 __thiscall BoneMapEditor::is_class(BoneMapEditor *this,String *param_1)

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
    if (cVar4 != '\0') goto LAB_00119bbb;
  }
  cVar4 = String::operator==(param_1,"BoneMapEditor");
  if (cVar4 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar5 = VBoxContainer::is_class((VBoxContainer *)this,param_1);
      return uVar5;
    }
  }
  else {
LAB_00119bbb:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* BoneMapper::is_class(String const&) const */

undefined8 __thiscall BoneMapper::is_class(BoneMapper *this,String *param_1)

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
    if (cVar4 != '\0') goto LAB_00119d0b;
  }
  cVar4 = String::operator==(param_1,"BoneMapper");
  if (cVar4 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar5 = VBoxContainer::is_class((VBoxContainer *)this,param_1);
      return uVar5;
    }
  }
  else {
LAB_00119d0b:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* BoneMapperItem::is_class(String const&) const */

undefined8 __thiscall BoneMapperItem::is_class(BoneMapperItem *this,String *param_1)

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
    if (cVar5 != '\0') goto LAB_00119e5b;
  }
  cVar5 = String::operator==(param_1,"BoneMapperItem");
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
      if (cVar5 != '\0') goto LAB_00119e5b;
    }
    cVar5 = String::operator==(param_1,"VBoxContainer");
    if (cVar5 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar6 = BoxContainer::is_class((BoxContainer *)this,param_1);
        return uVar6;
      }
      goto LAB_00119f98;
    }
  }
LAB_00119e5b:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_00119f98:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* BoneMapperButton::is_class(String const&) const */

undefined8 __thiscall BoneMapperButton::is_class(BoneMapperButton *this,String *param_1)

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
    if (cVar5 != '\0') goto LAB_0011a09b;
  }
  cVar5 = String::operator==(param_1,"BoneMapperButton");
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
      if (cVar5 != '\0') goto LAB_0011a09b;
    }
    cVar5 = String::operator==(param_1,"TextureButton");
    if (cVar5 == '\0') {
      for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
        lVar4 = *(long *)(lVar2 + 0x20);
        if (lVar4 == 0) {
          local_58 = (char *)0x0;
        }
        else {
          local_58 = (char *)0x0;
          if (*(char **)(lVar4 + 8) == (char *)0x0) {
            CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)(lVar4 + 0x10));
          }
          else {
            String::parse_latin1((String *)&local_58,*(char **)(lVar4 + 8));
          }
        }
        cVar5 = String::operator==(param_1,(String *)&local_58);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
        if (cVar5 != '\0') goto LAB_0011a09b;
      }
      cVar5 = String::operator==(param_1,"BaseButton");
      if (cVar5 == '\0') {
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          uVar6 = Control::is_class((Control *)this,param_1);
          return uVar6;
        }
        goto LAB_0011a23e;
      }
    }
  }
LAB_0011a09b:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0011a23e:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* BoneMapEditorPlugin::is_class(String const&) const */

undefined8 __thiscall BoneMapEditorPlugin::is_class(BoneMapEditorPlugin *this,String *param_1)

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
    if (cVar5 != '\0') goto LAB_0011a34b;
  }
  cVar5 = String::operator==(param_1,"BoneMapEditorPlugin");
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
      if (cVar5 != '\0') goto LAB_0011a34b;
    }
    cVar5 = String::operator==(param_1,"EditorPlugin");
    if (cVar5 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar6 = Node::is_class((Node *)this,param_1);
        return uVar6;
      }
      goto LAB_0011a44e;
    }
  }
LAB_0011a34b:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0011a44e:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* AcceptDialog::is_class(String const&) const */

undefined8 __thiscall AcceptDialog::is_class(AcceptDialog *this,String *param_1)

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
    if (cVar5 != '\0') goto LAB_0011a55b;
  }
  cVar5 = String::operator==(param_1,"AcceptDialog");
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
      if (cVar5 != '\0') goto LAB_0011a55b;
    }
    cVar5 = String::operator==(param_1,"Window");
    if (cVar5 == '\0') {
      for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
        lVar4 = *(long *)(lVar2 + 0x20);
        if (lVar4 == 0) {
          local_58 = (char *)0x0;
        }
        else {
          local_58 = (char *)0x0;
          if (*(char **)(lVar4 + 8) == (char *)0x0) {
            CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)(lVar4 + 0x10));
          }
          else {
            String::parse_latin1((String *)&local_58,*(char **)(lVar4 + 8));
          }
        }
        cVar5 = String::operator==(param_1,(String *)&local_58);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
        if (cVar5 != '\0') goto LAB_0011a55b;
      }
      cVar5 = String::operator==(param_1,"Viewport");
      if (cVar5 == '\0') {
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          uVar6 = Node::is_class((Node *)this,param_1);
          return uVar6;
        }
        goto LAB_0011a6fe;
      }
    }
  }
LAB_0011a55b:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0011a6fe:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* BonePicker::is_class(String const&) const */

undefined8 __thiscall BonePicker::is_class(BonePicker *this,String *param_1)

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
    if (cVar4 != '\0') goto LAB_0011a80b;
  }
  cVar4 = String::operator==(param_1,"BonePicker");
  if (cVar4 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar5 = AcceptDialog::is_class((AcceptDialog *)this,param_1);
      return uVar5;
    }
  }
  else {
LAB_0011a80b:
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
      goto LAB_0011a9bc;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0011a9bc:
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



/* Node::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void Node::_get_property_listv(List *param_1,bool param_2)

{
  undefined7 in_register_00000031;
  long in_FS_OFFSET;
  long local_98;
  long local_90;
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
  local_78 = &_LC78;
  local_88 = 0;
  local_90 = 0;
  local_70 = 4;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = &_LC78;
  local_98 = 0;
  local_70 = 4;
  String::parse_latin1((StrRange *)&local_98);
  local_78 = (undefined *)((ulong)local_78 & 0xffffffff00000000);
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
      goto LAB_0011ac0c;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0011ac0c:
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
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* EditorInspectorPlugin::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall
EditorInspectorPlugin::_get_property_listv(EditorInspectorPlugin *this,List *param_1,bool param_2)

{
  long in_FS_OFFSET;
  CowData<char32_t> *local_b0;
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
  if (!param_2) {
    RefCounted::_get_property_listv((List *)this,SUB81(param_1,0));
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "EditorInspectorPlugin";
  local_70 = 0x15;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "EditorInspectorPlugin";
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
      goto LAB_0011ae71;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0011ae71:
  local_b0 = (CowData<char32_t> *)&local_58;
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
  CowData<char32_t>::_unref(local_b0);
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"EditorInspectorPlugin",false);
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



/* EditorPlugin::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall EditorPlugin::_get_property_listv(EditorPlugin *this,List *param_1,bool param_2)

{
  long in_FS_OFFSET;
  CowData<char32_t> *local_b0;
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
  if (!param_2) {
    Node::_get_property_listv((List *)this,SUB81(param_1,0));
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "EditorPlugin";
  local_70 = 0xc;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "EditorPlugin";
  local_98 = 0;
  local_70 = 0xc;
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
      goto LAB_0011b121;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0011b121:
  local_b0 = (CowData<char32_t> *)&local_58;
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
  CowData<char32_t>::_unref(local_b0);
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  if ((StringName::configured != '\0') && (local_88 != 0)) {
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



/* EditorInspectorPluginBoneMap::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool)
   const */

void __thiscall
EditorInspectorPluginBoneMap::_get_property_listv
          (EditorInspectorPluginBoneMap *this,List *param_1,bool param_2)

{
  long in_FS_OFFSET;
  CowData<char32_t> *local_b0;
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
  if (!param_2) {
    EditorInspectorPlugin::_get_property_listv((EditorInspectorPlugin *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "EditorInspectorPluginBoneMap";
  local_70 = 0x1c;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "EditorInspectorPluginBoneMap";
  local_98 = 0;
  local_70 = 0x1c;
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
      goto LAB_0011b3d1;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0011b3d1:
  local_b0 = (CowData<char32_t> *)&local_58;
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
  CowData<char32_t>::_unref(local_b0);
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"EditorInspectorPluginBoneMap",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      EditorInspectorPlugin::_get_property_listv((EditorInspectorPlugin *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Viewport::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall Viewport::_get_property_listv(Viewport *this,List *param_1,bool param_2)

{
  long in_FS_OFFSET;
  CowData<char32_t> *local_b0;
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
  if (!param_2) {
    Node::_get_property_listv((List *)this,SUB81(param_1,0));
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "Viewport";
  local_70 = 8;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "Viewport";
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
      goto LAB_0011b681;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0011b681:
  local_b0 = (CowData<char32_t> *)&local_58;
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
  CowData<char32_t>::_unref(local_b0);
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"Viewport",false);
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



/* BoneMapEditorPlugin::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall
BoneMapEditorPlugin::_get_property_listv(BoneMapEditorPlugin *this,List *param_1,bool param_2)

{
  long in_FS_OFFSET;
  CowData<char32_t> *local_b0;
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
  if (!param_2) {
    EditorPlugin::_get_property_listv((EditorPlugin *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "BoneMapEditorPlugin";
  local_70 = 0x13;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "BoneMapEditorPlugin";
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
      goto LAB_0011b931;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0011b931:
  local_b0 = (CowData<char32_t> *)&local_58;
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
  CowData<char32_t>::_unref(local_b0);
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"BoneMapEditorPlugin",false);
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



/* CanvasItem::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall CanvasItem::_get_property_listv(CanvasItem *this,List *param_1,bool param_2)

{
  long in_FS_OFFSET;
  CowData<char32_t> *local_b0;
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
      goto LAB_0011bbe1;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0011bbe1:
  local_b0 = (CowData<char32_t> *)&local_58;
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
  CowData<char32_t>::_unref(local_b0);
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
  if ((code *)PTR__get_property_list_0012b0d8 != Object::_get_property_list) {
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



/* Window::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall Window::_get_property_listv(Window *this,List *param_1,bool param_2)

{
  long in_FS_OFFSET;
  CowData<char32_t> *local_b0;
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
  if (!param_2) {
    Viewport::_get_property_listv((Viewport *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "Window";
  local_70 = 6;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "Window";
  local_98 = 0;
  local_70 = 6;
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
      goto LAB_0011beb1;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0011beb1:
  local_b0 = (CowData<char32_t> *)&local_58;
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
  CowData<char32_t>::_unref(local_b0);
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"Window",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if ((code *)PTR__get_property_list_0012b0e0 != Object::_get_property_list) {
    Window::_get_property_list((List *)this);
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      Viewport::_get_property_listv((Viewport *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* AcceptDialog::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall AcceptDialog::_get_property_listv(AcceptDialog *this,List *param_1,bool param_2)

{
  long in_FS_OFFSET;
  CowData<char32_t> *local_b0;
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
  if (!param_2) {
    Window::_get_property_listv((Window *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "AcceptDialog";
  local_70 = 0xc;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "AcceptDialog";
  local_98 = 0;
  local_70 = 0xc;
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
      goto LAB_0011c181;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0011c181:
  local_b0 = (CowData<char32_t> *)&local_58;
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
  CowData<char32_t>::_unref(local_b0);
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"AcceptDialog",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      Window::_get_property_listv((Window *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* BonePicker::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall BonePicker::_get_property_listv(BonePicker *this,List *param_1,bool param_2)

{
  long in_FS_OFFSET;
  CowData<char32_t> *local_b0;
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
  if (!param_2) {
    AcceptDialog::_get_property_listv((AcceptDialog *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "BonePicker";
  local_70 = 10;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "BonePicker";
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
      goto LAB_0011c431;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0011c431:
  local_b0 = (CowData<char32_t> *)&local_58;
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
  CowData<char32_t>::_unref(local_b0);
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"BonePicker",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      AcceptDialog::_get_property_listv((AcceptDialog *)this,param_1,true);
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
  CowData<char32_t> *local_b0;
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
      goto LAB_0011c6e1;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0011c6e1:
  local_b0 = (CowData<char32_t> *)&local_58;
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
  CowData<char32_t>::_unref(local_b0);
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
  if ((code *)PTR__get_property_list_0012b0e8 != CanvasItem::_get_property_list) {
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
  CowData<char32_t> *local_b0;
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
      goto LAB_0011c9b1;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0011c9b1:
  local_b0 = (CowData<char32_t> *)&local_58;
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
  CowData<char32_t>::_unref(local_b0);
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



/* BoxContainer::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall BoxContainer::_get_property_listv(BoxContainer *this,List *param_1,bool param_2)

{
  long in_FS_OFFSET;
  CowData<char32_t> *local_b0;
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
  if (!param_2) {
    Container::_get_property_listv((Container *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "BoxContainer";
  local_70 = 0xc;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "BoxContainer";
  local_98 = 0;
  local_70 = 0xc;
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
      goto LAB_0011cc61;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0011cc61:
  local_b0 = (CowData<char32_t> *)&local_58;
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
  CowData<char32_t>::_unref(local_b0);
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  if ((StringName::configured != '\0') && (local_88 != 0)) {
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
  CowData<char32_t> *local_b0;
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
  if (!param_2) {
    BoxContainer::_get_property_listv((BoxContainer *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "HBoxContainer";
  local_70 = 0xd;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "HBoxContainer";
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
      goto LAB_0011cf11;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0011cf11:
  local_b0 = (CowData<char32_t> *)&local_58;
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
  CowData<char32_t>::_unref(local_b0);
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  if ((StringName::configured != '\0') && (local_88 != 0)) {
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



/* VBoxContainer::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall VBoxContainer::_get_property_listv(VBoxContainer *this,List *param_1,bool param_2)

{
  long in_FS_OFFSET;
  CowData<char32_t> *local_b0;
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
  if (!param_2) {
    BoxContainer::_get_property_listv((BoxContainer *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "VBoxContainer";
  local_70 = 0xd;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "VBoxContainer";
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
      goto LAB_0011d1c1;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0011d1c1:
  local_b0 = (CowData<char32_t> *)&local_58;
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
  CowData<char32_t>::_unref(local_b0);
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"VBoxContainer",false);
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



/* BoneMapEditor::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall BoneMapEditor::_get_property_listv(BoneMapEditor *this,List *param_1,bool param_2)

{
  long in_FS_OFFSET;
  CowData<char32_t> *local_b0;
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
  if (!param_2) {
    VBoxContainer::_get_property_listv((VBoxContainer *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "BoneMapEditor";
  local_70 = 0xd;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "BoneMapEditor";
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
      goto LAB_0011d471;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0011d471:
  local_b0 = (CowData<char32_t> *)&local_58;
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
  CowData<char32_t>::_unref(local_b0);
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"BoneMapEditor",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      VBoxContainer::_get_property_listv((VBoxContainer *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* BoneMapper::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall BoneMapper::_get_property_listv(BoneMapper *this,List *param_1,bool param_2)

{
  long in_FS_OFFSET;
  CowData<char32_t> *local_b0;
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
  if (!param_2) {
    VBoxContainer::_get_property_listv((VBoxContainer *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "BoneMapper";
  local_70 = 10;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "BoneMapper";
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
      goto LAB_0011d721;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0011d721:
  local_b0 = (CowData<char32_t> *)&local_58;
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
  CowData<char32_t>::_unref(local_b0);
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"BoneMapper",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      VBoxContainer::_get_property_listv((VBoxContainer *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* BoneMapperItem::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall BoneMapperItem::_get_property_listv(BoneMapperItem *this,List *param_1,bool param_2)

{
  long in_FS_OFFSET;
  CowData<char32_t> *local_b0;
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
  if (!param_2) {
    VBoxContainer::_get_property_listv((VBoxContainer *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "BoneMapperItem";
  local_70 = 0xe;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "BoneMapperItem";
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
      goto LAB_0011d9d1;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0011d9d1:
  local_b0 = (CowData<char32_t> *)&local_58;
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
  CowData<char32_t>::_unref(local_b0);
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"BoneMapperItem",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      VBoxContainer::_get_property_listv((VBoxContainer *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ColorRect::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall ColorRect::_get_property_listv(ColorRect *this,List *param_1,bool param_2)

{
  long in_FS_OFFSET;
  CowData<char32_t> *local_b0;
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
  if (!param_2) {
    Control::_get_property_listv((Control *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "ColorRect";
  local_70 = 9;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "ColorRect";
  local_98 = 0;
  local_70 = 9;
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
      goto LAB_0011dc81;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0011dc81:
  local_b0 = (CowData<char32_t> *)&local_58;
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
  CowData<char32_t>::_unref(local_b0);
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"ColorRect",false);
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



/* BaseButton::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall BaseButton::_get_property_listv(BaseButton *this,List *param_1,bool param_2)

{
  long in_FS_OFFSET;
  CowData<char32_t> *local_b0;
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
  if (!param_2) {
    Control::_get_property_listv((Control *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "BaseButton";
  local_70 = 10;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "BaseButton";
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
      goto LAB_0011df31;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0011df31:
  local_b0 = (CowData<char32_t> *)&local_58;
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
  CowData<char32_t>::_unref(local_b0);
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"BaseButton",false);
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



/* TextureButton::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall TextureButton::_get_property_listv(TextureButton *this,List *param_1,bool param_2)

{
  long in_FS_OFFSET;
  CowData<char32_t> *local_b0;
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
  if (!param_2) {
    BaseButton::_get_property_listv((BaseButton *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "TextureButton";
  local_70 = 0xd;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "TextureButton";
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
      goto LAB_0011e1e1;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0011e1e1:
  local_b0 = (CowData<char32_t> *)&local_58;
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
  CowData<char32_t>::_unref(local_b0);
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"TextureButton",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      BaseButton::_get_property_listv((BaseButton *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* BoneMapperButton::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall
BoneMapperButton::_get_property_listv(BoneMapperButton *this,List *param_1,bool param_2)

{
  long in_FS_OFFSET;
  CowData<char32_t> *local_b0;
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
  if (!param_2) {
    TextureButton::_get_property_listv((TextureButton *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "BoneMapperButton";
  local_70 = 0x10;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "BoneMapperButton";
  local_98 = 0;
  local_70 = 0x10;
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
      goto LAB_0011e491;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0011e491:
  local_b0 = (CowData<char32_t> *)&local_58;
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
  CowData<char32_t>::_unref(local_b0);
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"BoneMapperButton",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      TextureButton::_get_property_listv((TextureButton *)this,param_1,true);
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



/* Ref<Texture2D>::unref() */

void __thiscall Ref<Texture2D>::unref(Ref<Texture2D> *this)

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



/* Ref<SkeletonProfile>::unref() */

void __thiscall Ref<SkeletonProfile>::unref(Ref<SkeletonProfile> *this)

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



/* Ref<RegExMatch>::unref() */

void __thiscall Ref<RegExMatch>::unref(Ref<RegExMatch> *this)

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



/* MethodBind* create_method_bind<BoneMapper, int>(void (BoneMapper::*)(int)) */

MethodBind * create_method_bind<BoneMapper,int>(_func_void_int *param_1)

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
  *(_func_void_int **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_001242a8;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "BoneMapper";
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



/* MethodBind* create_method_bind<BoneMapper, int>(int (BoneMapper::*)() const) */

MethodBind * create_method_bind<BoneMapper,int>(_func_int *param_1)

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
  *(_func_int **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00124308;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "BoneMapper";
  local_30 = 10;
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



/* BoneMapper::_initialize_classv() */

void BoneMapper::_initialize_classv(void)

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
    if (VBoxContainer::initialize_class()::initialized == '\0') {
      VBoxContainer::initialize_class();
    }
    local_58 = 0;
    local_40 = 0xd;
    local_48 = "VBoxContainer";
    String::parse_latin1((StrRange *)&local_58);
    StringName::StringName((StringName *)&local_50,(String *)&local_58,false);
    local_48 = "BoneMapper";
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
    _bind_methods();
    initialize_class()::initialized = '\x01';
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CowData<int>::_unref() */

void __thiscall CowData<int>::_unref(CowData<int> *this)

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



/* BoneMapperItem::_initialize_classv() */

void BoneMapperItem::_initialize_classv(void)

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
    if (VBoxContainer::initialize_class()::initialized == '\0') {
      VBoxContainer::initialize_class();
    }
    local_58 = 0;
    local_40 = 0xd;
    local_48 = "VBoxContainer";
    String::parse_latin1((StrRange *)&local_58);
    StringName::StringName((StringName *)&local_50,(String *)&local_58,false);
    local_48 = "BoneMapperItem";
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
    _bind_methods();
    initialize_class()::initialized = '\x01';
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Vector<int>::reverse() */

void __thiscall Vector<int>::reverse(Vector<int> *this)

{
  long lVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  long lVar4;
  undefined4 *puVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  
  if (*(long *)(this + 8) == 0) {
    return;
  }
  uVar8 = 0;
  lVar7 = *(long *)(*(long *)(this + 8) + -8);
  while( true ) {
    if (lVar7 / 2 <= (long)uVar8) {
      return;
    }
    CowData<int>::_copy_on_write((CowData<int> *)(this + 8));
    lVar4 = *(long *)(this + 8);
    lVar1 = uVar8 * 4;
    if (lVar4 == 0) break;
    lVar7 = *(long *)(lVar4 + -8);
    lVar6 = lVar7 - uVar8;
    uVar8 = uVar8 + 1;
    puVar2 = (undefined4 *)(lVar4 + -4 + lVar6 * 4);
    puVar5 = (undefined4 *)(lVar4 + lVar1);
    uVar3 = *puVar5;
    *puVar5 = *puVar2;
    *puVar2 = uVar3;
  }
  uVar3 = *(undefined4 *)(uVar8 * 4);
  *(undefined4 *)(uVar8 * 4) = *(undefined4 *)(~uVar8 << 2);
  *(undefined4 *)(~uVar8 << 2) = uVar3;
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



/* List<EditorInspectorPlugin::AddedEditor, DefaultAllocator>::~List() */

void __thiscall
List<EditorInspectorPlugin::AddedEditor,DefaultAllocator>::~List
          (List<EditorInspectorPlugin::AddedEditor,DefaultAllocator> *this)

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
    if (*(long **)((long)pvVar1 + 0x38) == plVar4) {
      lVar3 = *(long *)((long)pvVar1 + 0x28);
      lVar2 = *(long *)((long)pvVar1 + 0x30);
      *plVar4 = lVar3;
      if (pvVar1 == (void *)plVar4[1]) {
        plVar4[1] = lVar2;
      }
      if (lVar2 != 0) {
        *(long *)(lVar2 + 0x28) = lVar3;
        lVar3 = *(long *)((long)pvVar1 + 0x28);
      }
      if (lVar3 != 0) {
        *(long *)(lVar3 + 0x30) = lVar2;
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar1 + 0x18));
      CowData<String>::_unref((CowData<String> *)((long)pvVar1 + 0x10));
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



/* EditorInspectorPluginBoneMap::~EditorInspectorPluginBoneMap() */

void __thiscall
EditorInspectorPluginBoneMap::~EditorInspectorPluginBoneMap(EditorInspectorPluginBoneMap *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(undefined **)this = &EditorPlugin::vtable;
  if (bVar1) {
    if (*(long *)(this + 0x200) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0011f0e4;
    }
    if (*(long *)(this + 0x1e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0011f0e4;
    }
    if (*(long *)(this + 0x1d0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0011f0e4;
    }
    if (*(long *)(this + 0x1b8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0011f0e4;
    }
    if (*(long *)(this + 0x1a0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0011f0e4;
    }
    if (*(long *)(this + 0x188) != 0) {
      StringName::unref();
    }
  }
LAB_0011f0e4:
  List<EditorInspectorPlugin::AddedEditor,DefaultAllocator>::~List
            ((List<EditorInspectorPlugin::AddedEditor,DefaultAllocator> *)(this + 0x180));
  *(undefined ***)this = &PTR__initialize_classv_00121e50;
  Object::~Object((Object *)this);
  return;
}



/* EditorInspectorPluginBoneMap::~EditorInspectorPluginBoneMap() */

void __thiscall
EditorInspectorPluginBoneMap::~EditorInspectorPluginBoneMap(EditorInspectorPluginBoneMap *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(undefined **)this = &EditorPlugin::vtable;
  if (bVar1) {
    if (*(long *)(this + 0x200) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0011f1e4;
    }
    if (*(long *)(this + 0x1e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0011f1e4;
    }
    if (*(long *)(this + 0x1d0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0011f1e4;
    }
    if (*(long *)(this + 0x1b8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0011f1e4;
    }
    if (*(long *)(this + 0x1a0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0011f1e4;
    }
    if (*(long *)(this + 0x188) != 0) {
      StringName::unref();
    }
  }
LAB_0011f1e4:
  List<EditorInspectorPlugin::AddedEditor,DefaultAllocator>::~List
            ((List<EditorInspectorPlugin::AddedEditor,DefaultAllocator> *)(this + 0x180));
  *(undefined ***)this = &PTR__initialize_classv_00121e50;
  Object::~Object((Object *)this);
  operator_delete(this,0x220);
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
LAB_0011f580:
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
  if (lVar9 == 0) goto LAB_0011f580;
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
    goto LAB_0011f5d6;
  }
  if (lVar9 == lVar5) {
LAB_0011f4fb:
    puVar7 = *(undefined8 **)this;
    if (puVar7 == (undefined8 *)0x0) {
LAB_0011f5d6:
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    lVar4 = puVar7[-1];
    if (param_1 <= lVar4) goto LAB_0011f46f;
  }
  else {
    if (lVar4 != 0) {
      uVar3 = _realloc(this,lVar9);
      if ((int)uVar3 != 0) {
        return uVar3;
      }
      goto LAB_0011f4fb;
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
LAB_0011f46f:
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
  code *pcVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long lVar7;
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
    lVar8 = 0;
    lVar2 = 0;
  }
  else {
    lVar8 = *(long *)(*(long *)this + -8);
    if (param_1 == lVar8) {
      return 0;
    }
    if (param_1 == 0) {
      _unref(this);
      return 0;
    }
    _copy_on_write(this);
    lVar2 = lVar8 * 4;
    if (lVar2 != 0) {
      uVar3 = lVar2 - 1U | lVar2 - 1U >> 1;
      uVar3 = uVar3 | uVar3 >> 2;
      uVar3 = uVar3 | uVar3 >> 4;
      uVar3 = uVar3 | uVar3 >> 8;
      uVar3 = uVar3 | uVar3 >> 0x10;
      lVar2 = (uVar3 | uVar3 >> 0x20) + 1;
    }
  }
  if (param_1 * 4 == 0) {
LAB_0011f840:
    _err_print_error("resize","./core/templates/cowdata.h",0x16a,
                     "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                     ,0,0);
    return 6;
  }
  uVar3 = param_1 * 4 - 1;
  uVar3 = uVar3 | uVar3 >> 1;
  uVar3 = uVar3 | uVar3 >> 2;
  uVar3 = uVar3 | uVar3 >> 4;
  uVar3 = uVar3 | uVar3 >> 8;
  uVar3 = uVar3 | uVar3 >> 0x10;
  uVar3 = uVar3 | uVar3 >> 0x20;
  lVar7 = uVar3 + 1;
  if (lVar7 == 0) goto LAB_0011f840;
  if (lVar8 < param_1) {
    if (lVar7 != lVar2) {
      if (lVar8 == 0) {
        puVar4 = (undefined8 *)Memory::alloc_static(uVar3 + 0x11,false);
        if (puVar4 == (undefined8 *)0x0) {
          _err_print_error("resize","./core/templates/cowdata.h",0x171,
                           "Parameter \"mem_new\" is null.",0,0);
          return 6;
        }
        puVar6 = puVar4 + 2;
        *puVar4 = 1;
        puVar4[1] = 0;
        *(undefined8 **)this = puVar6;
        goto LAB_0011f771;
      }
      uVar5 = _realloc(this,lVar7);
      if ((int)uVar5 != 0) {
        return uVar5;
      }
    }
    puVar6 = *(undefined8 **)this;
    if (puVar6 != (undefined8 *)0x0) {
LAB_0011f771:
      puVar6[-1] = param_1;
      return 0;
    }
  }
  else {
    if ((lVar7 != lVar2) && (uVar5 = _realloc(this,lVar7), (int)uVar5 != 0)) {
      return uVar5;
    }
    if (*(long *)this != 0) {
      *(long *)(*(long *)this + -8) = param_1;
      return 0;
    }
  }
  _DAT_00000000 = 0;
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* Vector<int>::remove_at(long) */

void __thiscall Vector<int>::remove_at(Vector<int> *this,long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(this + 8);
  if (param_1 < 0) {
    if (lVar2 != 0) {
      lVar2 = *(long *)(lVar2 + -8);
      goto LAB_0011f931;
    }
  }
  else if (lVar2 != 0) {
    lVar2 = *(long *)(lVar2 + -8);
    if (param_1 < lVar2) {
      CowData<int>::_copy_on_write((CowData<int> *)(this + 8));
      lVar2 = *(long *)(this + 8);
      if (lVar2 == 0) {
        lVar1 = -1;
      }
      else {
        lVar1 = *(long *)(lVar2 + -8) + -1;
        if (param_1 < lVar1) {
          memmove((void *)(lVar2 + param_1 * 4),(void *)(lVar2 + 4 + param_1 * 4),
                  (*(long *)(lVar2 + -8) - param_1) * 4 - 4);
        }
      }
      CowData<int>::resize<false>((CowData<int> *)(this + 8),lVar1);
      return;
    }
    goto LAB_0011f931;
  }
  lVar2 = 0;
LAB_0011f931:
  _err_print_index_error
            ("remove_at","./core/templates/cowdata.h",0xe4,param_1,lVar2,"p_index","size()","",false
             ,false);
  return;
}



/* Vector<int>::slice(long, long) const */

long Vector<int>::slice(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long in_RCX;
  long in_RDX;
  long lVar4;
  long lVar5;
  
  *(undefined8 *)(param_1 + 8) = 0;
  if (*(long *)(param_2 + 8) == 0) {
    CowData<int>::resize<false>((CowData<int> *)(param_1 + 8),0);
    CowData<int>::_copy_on_write((CowData<int> *)(param_1 + 8));
  }
  else {
    lVar1 = *(long *)(*(long *)(param_2 + 8) + -8);
    lVar2 = -lVar1;
    lVar5 = lVar1;
    if (in_RDX <= lVar1) {
      lVar5 = in_RDX;
    }
    if (-in_RDX != lVar1 && in_RDX <= lVar2) {
      lVar5 = lVar2;
    }
    if (lVar5 < 0) {
      lVar5 = lVar5 + lVar1;
    }
    lVar4 = in_RCX;
    if (lVar1 <= in_RCX) {
      lVar4 = lVar1;
    }
    if (-in_RCX == lVar1 || lVar2 < in_RCX) {
      lVar2 = lVar4;
    }
    if (lVar2 < 0) {
      lVar2 = lVar1 + lVar2;
    }
    if (lVar2 < lVar5) {
      _err_print_error("slice","./core/templates/vector.h",0xb8,
                       "Condition \"begin > end\" is true. Returning: result",0,0);
      return param_1;
    }
    lVar2 = lVar2 - lVar5;
    CowData<int>::resize<false>((CowData<int> *)(param_1 + 8),lVar2);
    lVar1 = *(long *)(param_2 + 8);
    CowData<int>::_copy_on_write((CowData<int> *)(param_1 + 8));
    lVar4 = *(long *)(param_1 + 8);
    if (lVar2 != 0) {
      lVar3 = 0;
      do {
        *(undefined4 *)(lVar4 + lVar3 * 4) = *(undefined4 *)(lVar1 + lVar5 * 4 + lVar3 * 4);
        lVar3 = lVar3 + 1;
      } while (lVar3 != lVar2);
    }
  }
  return param_1;
}



/* BonePicker::_notificationv(int, bool) */

void __thiscall BonePicker::_notificationv(BonePicker *this,int param_1,bool param_2)

{
  int iVar1;
  
  iVar1 = (int)this;
  if (param_2) {
    if (param_1 == 10) {
      create_editors(this);
    }
    if ((code *)PTR__notification_0012b0f0 != Window::_notification) {
      AcceptDialog::_notification(iVar1);
    }
    Window::_notification(iVar1);
    Viewport::_notification(iVar1);
    Node::_notification(iVar1);
    return;
  }
  Node::_notification(iVar1);
  Viewport::_notification(iVar1);
  Window::_notification(iVar1);
  if ((code *)PTR__notification_0012b0f0 != Window::_notification) {
    AcceptDialog::_notification(iVar1);
  }
  if (param_1 != 10) {
    return;
  }
  create_editors(this);
  return;
}



/* CowData<BoneMapperButton*>::_realloc(long) */

undefined8 __thiscall
CowData<BoneMapperButton*>::_realloc(CowData<BoneMapperButton*> *this,long param_1)

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
/* Error CowData<BoneMapperButton*>::resize<false>(long) */

undefined8 __thiscall
CowData<BoneMapperButton*>::resize<false>(CowData<BoneMapperButton*> *this,long param_1)

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
LAB_0011fe80:
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
  if (lVar8 == 0) goto LAB_0011fe80;
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
        goto LAB_0011fd91;
      }
      uVar6 = _realloc(this,lVar8);
      if ((int)uVar6 != 0) {
        return uVar6;
      }
    }
    puVar7 = *(undefined8 **)this;
    if (puVar7 != (undefined8 *)0x0) {
LAB_0011fd91:
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



/* CowData<BoneMapperItem*>::_realloc(long) */

undefined8 __thiscall
CowData<BoneMapperItem*>::_realloc(CowData<BoneMapperItem*> *this,long param_1)

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
/* Error CowData<BoneMapperItem*>::resize<false>(long) */

undefined8 __thiscall
CowData<BoneMapperItem*>::resize<false>(CowData<BoneMapperItem*> *this,long param_1)

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
LAB_00120160:
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
  if (lVar8 == 0) goto LAB_00120160;
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
        goto LAB_00120071;
      }
      uVar6 = _realloc(this,lVar8);
      if ((int)uVar6 != 0) {
        return uVar6;
      }
    }
    puVar7 = *(undefined8 **)this;
    if (puVar7 != (undefined8 *)0x0) {
LAB_00120071:
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



/* WARNING: Removing unreachable block (ram,0x00120260) */
/* BoneMapper::_notificationv(int, bool) */

void __thiscall BoneMapper::_notificationv(BoneMapper *this,int param_1,bool param_2)

{
  int iVar1;
  
  iVar1 = (int)this;
  if (param_2) {
    _notification(this,param_1);
    if ((code *)PTR__notification_0012b080 != Container::_notification) {
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
  if ((code *)PTR__notification_0012b080 != Container::_notification) {
    BoxContainer::_notification(iVar1);
  }
  _notification(this,param_1);
  return;
}



/* LocalVector<String, unsigned int, false, false>::resize(unsigned int) */

void __thiscall
LocalVector<String,unsigned_int,false,false>::resize
          (LocalVector<String,unsigned_int,false,false> *this,uint param_1)

{
  long *plVar1;
  long lVar2;
  code *pcVar3;
  long *plVar4;
  uint uVar5;
  long lVar6;
  uint uVar7;
  
  uVar7 = *(uint *)this;
  if (param_1 < uVar7) {
    lVar6 = (ulong)param_1 << 3;
    uVar7 = param_1;
    do {
      plVar4 = (long *)(*(long *)(this + 8) + lVar6);
      if (*plVar4 != 0) {
        LOCK();
        plVar1 = (long *)(*plVar4 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          lVar2 = *plVar4;
          *plVar4 = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      uVar7 = uVar7 + 1;
      lVar6 = lVar6 + 8;
    } while (uVar7 < *(uint *)this);
  }
  else {
    if (param_1 <= uVar7) {
      return;
    }
    uVar5 = param_1 - 1;
    if (*(uint *)(this + 4) < param_1) {
      uVar7 = uVar5 >> 1 | uVar5;
      uVar7 = uVar7 | uVar7 >> 2;
      uVar7 = uVar7 | uVar7 >> 4;
      uVar7 = uVar7 | uVar7 >> 8;
      uVar7 = (uVar7 | uVar7 >> 0x10) + 1;
      *(uint *)(this + 4) = uVar7;
      lVar6 = Memory::realloc_static(*(void **)(this + 8),(ulong)uVar7 * 8,false);
      *(long *)(this + 8) = lVar6;
      if (lVar6 == 0) {
        _err_print_error("resize","./core/templates/local_vector.h",0xa3,
                         "FATAL: Condition \"!data\" is true.","Out of memory",0,0);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      uVar7 = *(uint *)this;
      if (param_1 <= uVar7) goto LAB_00120352;
    }
    memset((void *)(*(long *)(this + 8) + (ulong)uVar7 * 8),0,(ulong)(uVar5 - uVar7) * 8 + 8);
  }
LAB_00120352:
  *(uint *)this = param_1;
  return;
}



/* WARNING: Removing unreachable block (ram,0x001205c8) */
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
  local_c0[0] = 0;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_c0);
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



/* MethodBindTRC<int>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTRC<int>::call(Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  int iVar2;
  long *plVar4;
  undefined4 in_register_00000014;
  long *plVar5;
  int in_R8D;
  undefined4 *in_R9;
  long in_FS_OFFSET;
  long local_68;
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  Variant *pVVar3;
  
  plVar5 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar5 != (long *)0x0) && (plVar5[1] != 0)) && (*(char *)(plVar5[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(param_2 + 3));
    if (plVar5[1] == 0) {
      plVar4 = (long *)plVar5[0x23];
      if (plVar4 == (long *)0x0) {
        plVar4 = (long *)(**(code **)(*plVar5 + 0x40))(plVar5);
      }
    }
    else {
      plVar4 = (long *)(plVar5[1] + 0x20);
    }
    if (local_58 == (char *)*plVar4) {
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error(&_LC92,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_00120940;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar3 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D == 0) {
    if ((param_2[5] == (Variant *)0x0) || (-1 < *(int *)(param_2[5] + -8))) {
      *in_R9 = 0;
      if (((ulong)pVVar3 & 1) != 0) {
        pVVar3 = *(Variant **)(pVVar3 + *(long *)((long)plVar5 + (long)pVVar1) + -1);
      }
      iVar2 = (*(code *)pVVar3)();
      Variant::Variant((Variant *)local_48,iVar2);
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
LAB_00120940:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<int>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTRC<int>::validated_call
          (MethodBindTRC<int> *this,Object *param_1,Variant **param_2,Variant *param_3)

{
  int iVar1;
  long *plVar3;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  code *pcVar2;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar3 = *(long **)(param_1 + 0x118);
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar3 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar3) {
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
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00120be4;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  iVar1 = (*pcVar2)(param_1 + *(long *)(this + 0x60));
  *(long *)(param_3 + 8) = (long)iVar1;
LAB_00120be4:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<int>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<int>::ptrcall(MethodBindTRC<int> *this,Object *param_1,void **param_2,void *param_3)

{
  int iVar1;
  long *plVar3;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  code *pcVar2;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar3 = *(long **)(param_1 + 0x118);
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar3 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar3) {
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
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00120da3;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  iVar1 = (*pcVar2)(param_1 + *(long *)(this + 0x60));
  *(long *)param_3 = (long)iVar1;
LAB_00120da3:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<int>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<int>::validated_call(Object *param_1,Variant **param_2,Variant *param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  Variant *pVVar1;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (Variant **)0x0) && (param_2[1] != (Variant *)0x0)) &&
     (param_2[1][0x2e] != (Variant)0x0)) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (Variant *)0x0) {
      pVVar1 = param_2[0x23];
      if (pVVar1 == (Variant *)0x0) {
        pVVar1 = (Variant *)(**(code **)(*param_2 + 0x40))(param_2);
      }
    }
    else {
      pVVar1 = param_2[1] + 0x20;
    }
    if (local_48 == *(char **)pVVar1) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x160,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_001210e1;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x58);
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)((long)param_2 + *(long *)(param_1 + 0x60)) + -1);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00120f6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),
               *(undefined4 *)(*(long *)param_3 + 8));
    return;
  }
LAB_001210e1:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<int>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<int>::ptrcall(Object *param_1,void **param_2,void *param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  long *plVar1;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (void **)0x0) && (param_2[1] != (void *)0x0)) &&
     (*(char *)((long)param_2[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (void *)0x0) {
      plVar1 = (long *)param_2[0x23];
      if (plVar1 == (long *)0x0) {
        plVar1 = (long *)(**(code **)((long)*param_2 + 0x40))(param_2);
      }
    }
    else {
      plVar1 = (long *)((long)param_2[1] + 0x20);
    }
    if (local_48 == (char *)*plVar1) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
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
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_001212c1;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
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
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0012114b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)),**param_3);
    return;
  }
LAB_001212c1:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_with_variant_args_dv<__UnexistingClass, int>(__UnexistingClass*, void
   (__UnexistingClass::*)(int), Variant const**, int, Callable::CallError&, Vector<Variant> const&)
    */

void call_with_variant_args_dv<__UnexistingClass,int>
               (__UnexistingClass *param_1,_func_void_int *param_2,Variant **param_3,int param_4,
               CallError *param_5,Vector *param_6)

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
    goto LAB_001213bd;
  }
  lVar1 = *(long *)(in_stack_00000008 + 8);
  if (lVar1 == 0) {
    if (uVar8 != 1) goto LAB_00121420;
  }
  else {
    lVar2 = *(long *)(lVar1 + -8);
    if ((int)lVar2 < (int)(uVar8 ^ 1)) {
LAB_00121420:
      uVar6 = 4;
LAB_001213bd:
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
      goto LAB_0012133b;
    }
  }
  this = *(Variant **)CONCAT44(in_register_0000000c,param_4);
LAB_0012133b:
  *(undefined4 *)param_6 = 0;
  if (((ulong)param_2 & 1) != 0) {
    param_2 = *(_func_void_int **)(param_2 + *(long *)(param_1 + (long)param_3) + -1);
  }
  cVar5 = Variant::can_convert_strict(*(undefined4 *)this,2);
  uVar4 = _LC93;
  if (cVar5 == '\0') {
    *(undefined4 *)param_6 = 2;
    *(undefined8 *)(param_6 + 4) = uVar4;
  }
  Variant::operator_cast_to_int(this);
                    /* WARNING: Could not recover jumptable at 0x00121396. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*param_2)((int)(param_1 + (long)param_3));
  return;
}



/* MethodBindT<int>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindT<int>::call(Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  long *plVar1;
  undefined4 in_register_00000014;
  __UnexistingClass *p_Var2;
  CallError *in_R8;
  Vector *in_R9;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  p_Var2 = (__UnexistingClass *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((p_Var2 != (__UnexistingClass *)0x0) && (*(long *)(p_Var2 + 8) != 0)) &&
     (*(char *)(*(long *)(p_Var2 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_2 + 3));
    if (*(long *)(p_Var2 + 8) == 0) {
      plVar1 = *(long **)(p_Var2 + 0x118);
      if (plVar1 == (long *)0x0) {
        plVar1 = (long *)(**(code **)(*(long *)p_Var2 + 0x40))(p_Var2);
      }
    }
    else {
      plVar1 = (long *)(*(long *)(p_Var2 + 8) + 0x20);
    }
    in_R8 = (CallError *)((ulong)in_R8 & 0xffffffff);
    if (local_48 == (char *)*plVar1) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error(&_LC92,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      *(undefined4 *)param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
      goto LAB_00121516;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  call_with_variant_args_dv<__UnexistingClass,int>
            (p_Var2,(_func_void_int *)param_2[0xb],(Variant **)param_2[0xc],(int)param_4,in_R8,in_R9
            );
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
LAB_00121516:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* BoneMapperButton::fetch_textures() */

void BoneMapperButton::_GLOBAL__sub_I_fetch_textures(void)

{
  if (PopupMenu::base_property_helper == '\0') {
    PopupMenu::base_property_helper = '\x01';
    PopupMenu::base_property_helper._64_8_ = 0;
    PopupMenu::base_property_helper._0_16_ = (undefined1  [16])0x0;
    PopupMenu::base_property_helper._24_16_ = (undefined1  [16])0x0;
    PopupMenu::base_property_helper._40_16_ = (undefined1  [16])0x0;
    PopupMenu::base_property_helper._56_8_ = 2;
    __cxa_atexit(PropertyListHelper::~PropertyListHelper,PopupMenu::base_property_helper,
                 &__dso_handle);
  }
  if (OptionButton::base_property_helper == '\0') {
    OptionButton::base_property_helper = '\x01';
    OptionButton::base_property_helper._64_8_ = 0;
    OptionButton::base_property_helper._0_16_ = (undefined1  [16])0x0;
    OptionButton::base_property_helper._24_16_ = (undefined1  [16])0x0;
    OptionButton::base_property_helper._40_16_ = (undefined1  [16])0x0;
    OptionButton::base_property_helper._56_8_ = 2;
    __cxa_atexit(PropertyListHelper::~PropertyListHelper,OptionButton::base_property_helper,
                 &__dso_handle);
  }
  if (Animation::PARAMETERS_BASE_PATH == '\0') {
    Animation::PARAMETERS_BASE_PATH = '\x01';
    Animation::PARAMETERS_BASE_PATH = 0;
    String::parse_latin1((String *)&Animation::PARAMETERS_BASE_PATH,"parameters/");
    __cxa_atexit(String::~String,&Animation::PARAMETERS_BASE_PATH,&__dso_handle);
  }
  if (MenuButton::base_property_helper == '\0') {
    MenuButton::base_property_helper = '\x01';
    MenuButton::base_property_helper._64_8_ = 0;
    MenuButton::base_property_helper._0_16_ = (undefined1  [16])0x0;
    MenuButton::base_property_helper._24_16_ = (undefined1  [16])0x0;
    MenuButton::base_property_helper._40_16_ = (undefined1  [16])0x0;
    MenuButton::base_property_helper._56_8_ = 2;
    __cxa_atexit(PropertyListHelper::~PropertyListHelper,MenuButton::base_property_helper,
                 &__dso_handle);
  }
  if (TabBar::base_property_helper != '\0') {
    return;
  }
  TabBar::base_property_helper = 1;
  TabBar::base_property_helper._56_8_ = 2;
  TabBar::base_property_helper._64_8_ = 0;
  TabBar::base_property_helper._0_16_ = (undefined1  [16])0x0;
  TabBar::base_property_helper._24_16_ = (undefined1  [16])0x0;
  TabBar::base_property_helper._40_16_ = (undefined1  [16])0x0;
  __cxa_atexit(PropertyListHelper::~PropertyListHelper,TabBar::base_property_helper,&__dso_handle);
  return;
}



/* WARNING: Control flow encountered bad instruction data */
/* EditorInspectorPluginBoneMap::~EditorInspectorPluginBoneMap() */

void __thiscall
EditorInspectorPluginBoneMap::~EditorInspectorPluginBoneMap(EditorInspectorPluginBoneMap *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* List<EditorInspectorPlugin::AddedEditor, DefaultAllocator>::~List() */

void __thiscall
List<EditorInspectorPlugin::AddedEditor,DefaultAllocator>::~List
          (List<EditorInspectorPlugin::AddedEditor,DefaultAllocator> *this)

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
/* BoneMapEditorPlugin::~BoneMapEditorPlugin() */

void __thiscall BoneMapEditorPlugin::~BoneMapEditorPlugin(BoneMapEditorPlugin *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* EditorPlugin::~EditorPlugin() */

void __thiscall EditorPlugin::~EditorPlugin(EditorPlugin *this)

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



/* WARNING: Control flow encountered bad instruction data */
/* String::~String() */

void __thiscall String::~String(String *this)

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
/* VBoxContainer::~VBoxContainer() */

void __thiscall VBoxContainer::~VBoxContainer(VBoxContainer *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<int>::~MethodBindTRC() */

void __thiscall MethodBindTRC<int>::~MethodBindTRC(MethodBindTRC<int> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<int>::~MethodBindT() */

void __thiscall MethodBindT<int>::~MethodBindT(MethodBindT<int> *this)

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
/* ColorRect::~ColorRect() */

void __thiscall ColorRect::~ColorRect(ColorRect *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<BoneMapperItem, void, String const&, Variant const&, String const&,
   bool>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<BoneMapperItem,void,String_const&,Variant_const&,String_const&,bool>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<BoneMapperItem,void,String_const&,Variant_const&,String_const&,bool>
           *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<BoneMapperItem, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<BoneMapperItem,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<BoneMapperItem,void> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<BonePicker, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<BonePicker,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<BonePicker,void> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<BoneMapper, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<BoneMapper,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<BoneMapper,void> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<BoneMapper, void, String const&, Variant const&, String const&,
   bool>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<BoneMapper,void,String_const&,Variant_const&,String_const&,bool>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<BoneMapper,void,String_const&,Variant_const&,String_const&,bool>
           *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<BoneMapper, void, int>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<BoneMapper,void,int>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<BoneMapper,void,int> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<BoneMapper, void, StringName const&>::~CallableCustomMethodPointer()
    */

void __thiscall
CallableCustomMethodPointer<BoneMapper,void,StringName_const&>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<BoneMapper,void,StringName_const&> *this)

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



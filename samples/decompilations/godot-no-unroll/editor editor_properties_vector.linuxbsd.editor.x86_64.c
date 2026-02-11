
/* CowData<EditorSpinSlider*>::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<EditorSpinSlider*>::_copy_on_write(CowData<EditorSpinSlider*> *this)

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



/* EditorPropertyVectorN::_set_read_only(bool) */

void EditorPropertyVectorN::_set_read_only(bool param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined7 in_register_00000039;
  long lVar3;
  
  lVar3 = CONCAT71(in_register_00000039,param_1);
  CowData<EditorSpinSlider*>::_copy_on_write((CowData<EditorSpinSlider*> *)(lVar3 + 0xb68));
  puVar1 = *(undefined8 **)(lVar3 + 0xb68);
  CowData<EditorSpinSlider*>::_copy_on_write((CowData<EditorSpinSlider*> *)(lVar3 + 0xb68));
  puVar2 = *(undefined8 **)(lVar3 + 0xb68);
  if (puVar2 != (undefined8 *)0x0) {
    puVar2 = puVar2 + puVar2[-1];
  }
  for (; puVar1 != puVar2; puVar1 = puVar1 + 1) {
    EditorSpinSlider::set_read_only(SUB81(*puVar1,0));
  }
  return;
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



/* EditorPropertyVectorN::_update_ratio() */

void __thiscall EditorPropertyVectorN::_update_ratio(EditorPropertyVectorN *this)

{
  int iVar1;
  Color *pCVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  code *pcVar6;
  double dVar7;
  double dVar8;
  int iVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  long in_FS_OFFSET;
  
  pCVar2 = *(Color **)(this + 0xb70);
  lVar3 = *(long *)(in_FS_OFFSET + 0x28);
  BaseButton::is_pressed();
  uVar12 = 0;
  CanvasItem::set_modulate(pCVar2);
  CowData<double>::_copy_on_write((CowData<double> *)(this + 0xb80));
  lVar4 = *(long *)(this + 0xb80);
  lVar11 = lVar4;
  while( true ) {
    if ((lVar11 == 0) || (*(long *)(lVar11 + -8) <= (long)uVar12)) {
      if (lVar3 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    iVar1 = *(int *)(this + 0xb54);
    lVar10 = (long)(iVar1 + -1);
    uVar5 = (ulong)(uint)((int)uVar12 >> 0x1f) << 0x20 | uVar12 & 0xffffffff;
    iVar9 = (int)((long)uVar5 / lVar10);
    lVar13 = (long)iVar9;
    lVar11 = *(long *)(this + 0xb68);
    if (iVar9 < 0) break;
    if (lVar11 == 0) goto LAB_00100498;
    if (*(long *)(lVar11 + -8) <= lVar13) goto LAB_0010044d;
    dVar7 = (double)Range::get_value();
    if (dVar7 != 0.0) {
      lVar11 = *(long *)(this + 0xb68);
      lVar10 = (long)((iVar9 + 1 + (int)((long)uVar5 % lVar10)) % iVar1);
      if (lVar11 == 0) {
        lVar11 = 0;
        goto LAB_0010046f;
      }
      if (*(long *)(lVar11 + -8) <= lVar10) {
        lVar11 = *(long *)(lVar11 + -8);
        goto LAB_0010046f;
      }
      dVar7 = (double)Range::get_value();
      if (*(long *)(this + 0xb68) == 0) goto LAB_00100498;
      lVar11 = *(long *)(*(long *)(this + 0xb68) + -8);
      lVar10 = lVar13;
      if (lVar11 <= lVar13) goto LAB_0010046f;
      dVar8 = (double)Range::get_value();
      *(double *)(lVar4 + uVar12 * 8) = dVar7 / dVar8;
    }
    lVar11 = *(long *)(this + 0xb80);
    uVar12 = uVar12 + 1;
  }
  if (lVar11 != 0) {
LAB_0010044d:
    lVar11 = *(long *)(lVar11 + -8);
    lVar10 = lVar13;
    goto LAB_0010046f;
  }
LAB_00100498:
  lVar11 = 0;
  lVar10 = lVar13;
LAB_0010046f:
  _err_print_index_error
            ("get","./core/templates/cowdata.h",0xdb,lVar10,lVar11,"p_index","size()","",false,true)
  ;
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar6 = (code *)invalidInstructionException();
  (*pcVar6)();
}



/* EditorPropertyVectorN::_grab_changed(bool) */

void __thiscall EditorPropertyVectorN::_grab_changed(EditorPropertyVectorN *this,bool param_1)

{
  if (!param_1) {
    this[0xb88] = (EditorPropertyVectorN)param_1;
    return;
  }
  _update_ratio(this);
  this[0xb88] = (EditorPropertyVectorN)param_1;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EditorPropertyVectorN::update_property() */

void __thiscall EditorPropertyVectorN::update_property(EditorPropertyVectorN *this)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long in_FS_OFFSET;
  float fVar4;
  double dVar5;
  int local_98 [2];
  undefined1 local_90 [16];
  int local_78 [8];
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(bool **)(this + 0xa10) == (bool *)0x0) {
    _err_print_error("get_edited_property_value","./editor/editor_inspector.h",0xb8,
                     "Parameter \"object\" is null.",0,0);
    local_98[0] = 0;
    local_90 = (undefined1  [16])0x0;
  }
  else {
    Object::get((StringName *)local_98,*(bool **)(this + 0xa10));
  }
  lVar2 = 0;
  if (0 < *(int *)(this + 0xb54)) {
LAB_00100604:
    do {
      lVar3 = *(long *)(this + 0xb68);
      if (this[0xb89] == (EditorPropertyVectorN)0x0) {
        if (lVar3 == 0) {
LAB_00100658:
          lVar3 = 0;
LAB_0010065b:
          _err_print_index_error
                    ("get","./core/templates/cowdata.h",0xdb,lVar2,lVar3,"p_index","size()","",false
                     ,true);
          _err_flush_stdout();
                    /* WARNING: Does not return */
          pcVar1 = (code *)invalidInstructionException();
          (*pcVar1)();
        }
        lVar3 = *(long *)(lVar3 + -8);
        if (lVar3 <= lVar2) goto LAB_0010065b;
        Variant::Variant((Variant *)local_78,(int)lVar2);
        Variant::get((Variant *)local_58,(bool *)local_98,(VariantGetError *)local_78);
        dVar5 = Variant::operator_cast_to_double((Variant *)local_58);
      }
      else {
        if (lVar3 == 0) goto LAB_00100658;
        lVar3 = *(long *)(lVar3 + -8);
        if (lVar3 <= lVar2) goto LAB_0010065b;
        Variant::Variant((Variant *)local_78,(int)lVar2);
        Variant::get((Variant *)local_58,(bool *)local_98,(VariantGetError *)local_78);
        fVar4 = Variant::operator_cast_to_float((Variant *)local_58);
        dVar5 = (double)(fVar4 * __LC16);
      }
      Range::set_value_no_signal(dVar5);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[local_78[0]] != '\0') {
        lVar2 = lVar2 + 1;
        Variant::_clear_internal();
        if (*(int *)(this + 0xb54) <= (int)lVar2) break;
        goto LAB_00100604;
      }
      lVar2 = lVar2 + 1;
    } while ((int)lVar2 < *(int *)(this + 0xb54));
  }
  if (this[0xb88] == (EditorPropertyVectorN)0x0) {
    _update_ratio(this);
  }
  if (Variant::needs_deinit[local_98[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* EditorPropertyVectorN::setup(double, double, double, bool, bool, String const&, bool, bool) */

void EditorPropertyVectorN::setup
               (double param_1,double param_2,double param_3,bool param_4,bool param_5,
               String *param_6,bool param_7,bool param_8)

{
  String *pSVar1;
  undefined8 *puVar2;
  bool bVar3;
  undefined7 in_register_00000039;
  long lVar4;
  undefined8 *puVar5;
  char local_44;
  
  lVar4 = CONCAT71(in_register_00000039,param_4);
  *(bool *)(lVar4 + 0xb89) = param_8;
  CowData<EditorSpinSlider*>::_copy_on_write((CowData<EditorSpinSlider*> *)(lVar4 + 0xb68));
  puVar5 = *(undefined8 **)(lVar4 + 0xb68);
  CowData<EditorSpinSlider*>::_copy_on_write((CowData<EditorSpinSlider*> *)(lVar4 + 0xb68));
  puVar2 = *(undefined8 **)(lVar4 + 0xb68);
  if (puVar2 != (undefined8 *)0x0) {
    puVar2 = puVar2 + puVar2[-1];
  }
  for (; puVar5 != puVar2; puVar5 = puVar5 + 1) {
    pSVar1 = (String *)*puVar5;
    Range::set_min(param_1);
    Range::set_max(param_2);
    Range::set_step(param_3);
    bVar3 = SUB81(pSVar1,0);
    EditorSpinSlider::set_hide_slider(bVar3);
    Range::set_allow_greater(bVar3);
    Range::set_allow_lesser(bVar3);
    EditorSpinSlider::set_suffix(pSVar1);
    EditorSpinSlider::set_editing_integer(bVar3);
  }
  local_44 = (char)param_6;
  if (local_44 != '\0') {
    return;
  }
  CanvasItem::hide();
  return;
}



/* EditorPropertyVectorN::_store_link(bool) */

void __thiscall EditorPropertyVectorN::_store_link(EditorPropertyVectorN *this,bool param_1)

{
  long lVar1;
  long *plVar2;
  String *pSVar3;
  long in_FS_OFFSET;
  Variant aVStack_88 [8];
  CowData<char32_t> local_80 [8];
  long local_78;
  undefined8 local_70;
  char *local_68;
  undefined8 local_60;
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar1 = EditorProperty::get_edited_object();
  if (lVar1 != 0) {
    EditorProperty::get_edited_property();
    plVar2 = (long *)EditorProperty::get_edited_object();
    (**(code **)(*plVar2 + 0x48))(local_80,plVar2);
    local_68 = "%s:%s";
    local_70 = 0;
    local_60 = 5;
    String::parse_latin1((StrRange *)&local_70);
    vformat<String,StringName>(aVStack_88,(StrRange *)&local_70,local_80,&local_78);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
    CowData<char32_t>::_unref(local_80);
    if ((StringName::configured != '\0') && (local_78 != 0)) {
      StringName::unref();
    }
    pSVar3 = (String *)EditorSettings::get_singleton();
    Variant::Variant((Variant *)local_58,param_1);
    local_68 = "linked_properties";
    local_70 = 0;
    local_60 = 0x11;
    String::parse_latin1((StrRange *)&local_70);
    EditorSettings::set_project_metadata(pSVar3,(String *)&local_70,aVStack_88);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)aVStack_88);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EditorPropertyVectorN::_notification(int) */

void __thiscall EditorPropertyVectorN::_notification(EditorPropertyVectorN *this,int param_1)

{
  Ref *pRVar1;
  Vector2 *pVVar2;
  StringName *pSVar3;
  long lVar4;
  undefined8 uVar5;
  code *pcVar6;
  Object *pOVar7;
  char cVar8;
  int iVar9;
  int iVar10;
  long *plVar11;
  String *pSVar12;
  long lVar13;
  long lVar14;
  long in_FS_OFFSET;
  float fVar15;
  CowData<char32_t> local_98 [8];
  CowData<char32_t> local_90 [8];
  long local_88;
  Object *local_80;
  int local_78 [8];
  float local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == 0xd) {
    cVar8 = CanvasItem::is_visible();
    if (cVar8 != '\0') {
      lVar14 = EditorProperty::get_edited_object();
      if (lVar14 != 0) {
        EditorProperty::get_edited_property();
        plVar11 = (long *)EditorProperty::get_edited_object();
        (**(code **)(*plVar11 + 0x48))(local_90,plVar11);
        local_80 = (Object *)0x0;
        String::parse_latin1((String *)&local_80,"%s:%s");
        vformat<String,StringName>(local_98,(String *)&local_80,local_90,&local_88);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
        CowData<char32_t>::_unref(local_90);
        if ((StringName::configured != '\0') && (local_88 != 0)) {
          StringName::unref();
        }
        uVar5 = *(undefined8 *)(this + 0xb70);
        pSVar12 = (String *)EditorSettings::get_singleton();
        Variant::Variant((Variant *)local_78,true);
        local_80 = (Object *)0x0;
        String::parse_latin1((String *)&local_80,"linked_properties");
        EditorSettings::get_project_metadata((String *)local_58,pSVar12,(Variant *)&local_80);
        Variant::operator_cast_to_bool((Variant *)local_58);
        BaseButton::set_pressed_no_signal(SUB81(uVar5,0));
        if (Variant::needs_deinit[(int)local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
        if (Variant::needs_deinit[local_78[0]] != '\0') {
          Variant::_clear_internal();
        }
        _update_ratio(this);
        CowData<char32_t>::_unref(local_98);
      }
    }
  }
  else if (param_1 == 0x2d) {
    if (_notification(int)::{lambda()#1}::operator()()::sname == '\0') {
      iVar9 = __cxa_guard_acquire(&_notification(int)::{lambda()#1}::operator()()::sname);
      if (iVar9 != 0) {
        _scs_create((char *)&_notification(int)::{lambda()#1}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#1}::operator()()::sname,
                     &__dso_handle);
        __cxa_guard_release(&_notification(int)::{lambda()#1}::operator()()::sname);
      }
    }
    iVar9 = Control::get_theme_constant
                      ((StringName *)this,
                       (StringName *)&_notification(int)::{lambda()#1}::operator()()::sname);
    pRVar1 = *(Ref **)(this + 0xb70);
    if (_notification(int)::{lambda()#2}::operator()()::sname == '\0') {
      iVar10 = __cxa_guard_acquire(&_notification(int)::{lambda()#2}::operator()()::sname);
      if (iVar10 != 0) {
        _scs_create((char *)&_notification(int)::{lambda()#2}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#2}::operator()()::sname,
                     &__dso_handle);
        __cxa_guard_release(&_notification(int)::{lambda()#2}::operator()()::sname);
      }
    }
    Control::get_editor_theme_icon((StringName *)&local_80);
    TextureButton::set_texture_normal(pRVar1);
    if (local_80 != (Object *)0x0) {
      cVar8 = RefCounted::unreference();
      pOVar7 = local_80;
      if (cVar8 != '\0') {
        cVar8 = predelete_handler(local_80);
        if (cVar8 != '\0') {
          (**(code **)(*(long *)pOVar7 + 0x140))(pOVar7);
          Memory::free_static(pOVar7,false);
        }
      }
    }
    pRVar1 = *(Ref **)(this + 0xb70);
    if (_notification(int)::{lambda()#3}::operator()()::sname == '\0') {
      iVar10 = __cxa_guard_acquire(&_notification(int)::{lambda()#3}::operator()()::sname);
      if (iVar10 != 0) {
        _scs_create((char *)&_notification(int)::{lambda()#3}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#3}::operator()()::sname,
                     &__dso_handle);
        __cxa_guard_release(&_notification(int)::{lambda()#3}::operator()()::sname);
      }
    }
    Control::get_editor_theme_icon((StringName *)&local_80);
    TextureButton::set_texture_pressed(pRVar1);
    if (local_80 != (Object *)0x0) {
      cVar8 = RefCounted::unreference();
      pOVar7 = local_80;
      if (cVar8 != '\0') {
        cVar8 = predelete_handler(local_80);
        if (cVar8 != '\0') {
          (**(code **)(*(long *)pOVar7 + 0x140))(pOVar7);
          Memory::free_static(pOVar7,false);
        }
      }
    }
    pVVar2 = *(Vector2 **)(this + 0xb70);
    fVar15 = (float)EditorScale::get_scale();
    local_58[0] = fVar15 * __LC47 + (float)iVar9;
    local_58[1] = 0.0;
    Control::set_custom_minimum_size(pVVar2);
    EditorProperty::_get_property_colors();
    if (0 < *(int *)(this + 0xb54)) {
      lVar14 = 0;
      do {
        lVar4 = *(long *)(this + 0xb68);
        if (lVar4 == 0) {
          lVar13 = 0;
LAB_00100ca9:
          _err_print_index_error
                    ("get","./core/templates/cowdata.h",0xdb,lVar14,lVar13,"p_index","size()","",
                     false,true);
          _err_flush_stdout();
                    /* WARNING: Does not return */
          pcVar6 = (code *)invalidInstructionException();
          (*pcVar6)();
        }
        lVar13 = *(long *)(lVar4 + -8);
        if (lVar13 <= lVar14) goto LAB_00100ca9;
        pSVar3 = *(StringName **)(lVar4 + lVar14 * 8);
        StringName::StringName((StringName *)&local_80,"label_color",false);
        Control::add_theme_color_override(pSVar3,(Color *)&local_80);
        if ((StringName::configured != '\0') && (local_80 != (Object *)0x0)) {
          StringName::unref();
        }
        lVar14 = lVar14 + 1;
      } while ((int)lVar14 < *(int *)(this + 0xb54));
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
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



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EditorPropertyVectorN::_value_changed(double, String const&) */

void EditorPropertyVectorN::_value_changed(double param_1,String *param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  code *pcVar4;
  int iVar5;
  char cVar6;
  int iVar7;
  long lVar8;
  String *in_RSI;
  long lVar9;
  long lVar10;
  String *pSVar11;
  int iVar12;
  long in_FS_OFFSET;
  double dVar13;
  long local_c0;
  undefined8 local_b8;
  long local_b0;
  undefined4 local_a8;
  undefined8 local_a4;
  undefined8 local_98;
  undefined1 local_90 [16];
  int local_78 [8];
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  cVar6 = BaseButton::is_pressed();
  if ((cVar6 == '\0') || (*(int *)(param_2 + 0xb54) < 1)) {
LAB_00101223:
    lVar8 = 0;
    local_98 = 0;
    local_a8 = 0;
    local_a4 = 0;
    local_90 = (undefined1  [16])0x0;
    Variant::construct(*(undefined4 *)(param_2 + 0xb58),(Variant *)&local_98,0);
    if (0 < *(int *)(param_2 + 0xb54)) {
      do {
        lVar9 = *(long *)(param_2 + 0xb68);
        if (param_2[0xb89] == (String)0x0) {
          if (lVar9 == 0) {
LAB_001011d0:
            lVar9 = 0;
            goto LAB_001011f1;
          }
          lVar9 = *(long *)(lVar9 + -8);
          if (lVar9 <= lVar8) goto LAB_001011f1;
          dVar13 = (double)Range::get_value();
        }
        else {
          if (lVar9 == 0) goto LAB_001011d0;
          lVar9 = *(long *)(lVar9 + -8);
          if (lVar9 <= lVar8) goto LAB_001011f1;
          dVar13 = (double)Range::get_value();
          dVar13 = dVar13 * __LC50;
        }
        Variant::Variant((Variant *)local_58,dVar13);
        Variant::Variant((Variant *)local_78,(int)lVar8);
        Variant::set((Variant *)&local_98,(Variant *)local_78,(bool *)local_58,
                     (VariantSetError *)0x0);
        if (Variant::needs_deinit[local_78[0]] != '\0') {
          Variant::_clear_internal();
        }
        if (Variant::needs_deinit[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
        lVar8 = lVar8 + 1;
      } while ((int)lVar8 < *(int *)(param_2 + 0xb54));
    }
    cVar6 = BaseButton::is_pressed();
    if (cVar6 == '\0') {
      local_b8 = 0;
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_b8,(CowData *)in_RSI);
    }
    else {
      local_b8 = 0;
      String::parse_latin1((String *)&local_b8,"");
    }
    StringName::StringName((StringName *)&local_b0,(String *)&local_b8,false);
    EditorProperty::get_edited_property();
    EditorProperty::emit_changed
              ((StringName *)param_2,(Variant *)&local_c0,(StringName *)&local_98,
               SUB81((StringName *)&local_b0,0));
    if ((StringName::configured != '\0') &&
       (((local_c0 == 0 || (StringName::unref(), StringName::configured != '\0')) && (local_b0 != 0)
        ))) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
    if (Variant::needs_deinit[(int)local_98] != '\0') {
      Variant::_clear_internal();
    }
    if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return;
  }
  pSVar11 = (String *)&COMPONENT_LABELS;
  iVar12 = 0;
  do {
    cVar6 = String::operator==(in_RSI,pSVar11);
    if (cVar6 != '\0') {
      iVar2 = *(int *)(param_2 + 0xb54);
      if (iVar2 + -1 < 1) goto LAB_00101223;
      iVar7 = (iVar2 + -1) * iVar12;
      lVar8 = *(long *)(param_2 + 0xb80);
      lVar9 = (long)(iVar12 + 1) % (long)iVar2;
      iVar5 = 0;
      goto joined_r0x001010b8;
    }
    iVar2 = *(int *)(param_2 + 0xb54);
    iVar12 = iVar12 + 1;
    pSVar11 = pSVar11 + 8;
  } while (iVar12 < iVar2);
  if (iVar2 + -1 < 1) goto LAB_00101223;
  lVar8 = *(long *)(param_2 + 0xb80);
  lVar10 = (long)(1 - iVar2);
  if (lVar8 != 0) {
LAB_0010137d:
    lVar9 = *(long *)(lVar8 + -8);
    lVar8 = lVar10;
    goto LAB_001011f1;
  }
  goto LAB_00101197;
joined_r0x001010b8:
  lVar10 = (long)iVar7;
  if (lVar8 != 0) {
    if (*(long *)(lVar8 + -8) <= lVar10) goto LAB_0010137d;
    if (*(double *)(lVar8 + lVar10 * 8) == 0.0) {
      iVar1 = iVar5 + 1;
      if (iVar2 + -1 <= iVar1) goto LAB_00101223;
      lVar9 = (long)(iVar12 + 2 + iVar5) % (long)iVar2;
      iVar7 = (iVar2 + -1) * iVar12 + iVar1;
      iVar5 = iVar1;
    }
    else {
      lVar8 = (long)(int)lVar9;
      if (*(long *)(param_2 + 0xb68) == 0) {
        lVar9 = 0;
        goto LAB_001011f1;
      }
      lVar9 = *(long *)(*(long *)(param_2 + 0xb68) + -8);
      if ((lVar9 <= lVar8) || (lVar8 = (long)iVar12, lVar9 <= iVar12)) goto LAB_001011f1;
      dVar13 = (double)Range::get_value();
      lVar3 = *(long *)(param_2 + 0xb80);
      lVar8 = lVar10;
      if (lVar3 == 0) {
        lVar9 = 0;
        goto LAB_001011f1;
      }
      lVar9 = *(long *)(lVar3 + -8);
      if (lVar9 <= lVar10) goto LAB_001011f1;
      Range::set_value_no_signal(dVar13 * *(double *)(lVar3 + lVar10 * 8));
      iVar2 = *(int *)(param_2 + 0xb54);
      iVar1 = iVar5 + 1;
      if (iVar2 + -1 <= iVar1) goto LAB_00101223;
      lVar9 = (long)(iVar12 + 2 + iVar5) % (long)iVar2;
      iVar7 = (iVar2 + -1) * iVar12 + iVar1;
      lVar8 = *(long *)(param_2 + 0xb80);
      iVar5 = iVar1;
    }
    goto joined_r0x001010b8;
  }
LAB_00101197:
  lVar9 = 0;
  lVar8 = lVar10;
LAB_001011f1:
  _err_print_index_error
            ("get","./core/templates/cowdata.h",0xdb,lVar8,lVar9,"p_index","size()","",false,true);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar4 = (code *)invalidInstructionException();
  (*pcVar4)();
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



/* EditorPropertyVectorN::initialize_class() [clone .part.0] */

void EditorPropertyVectorN::initialize_class(void)

{
  long in_FS_OFFSET;
  undefined8 local_60;
  long local_58;
  undefined8 local_50;
  long local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (EditorProperty::initialize_class()::initialized == '\0') {
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
            if ((code *)PTR__bind_methods_00113010 != Node::_bind_methods) {
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
          if ((code *)_GLOBAL_OFFSET_TABLE_ != Object::_bind_compatibility_methods) {
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
    String::parse_latin1((String *)&local_60,"EditorProperty");
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
    if ((code *)PTR__bind_methods_00113008 != Container::_bind_methods) {
      EditorProperty::_bind_methods();
    }
    EditorProperty::initialize_class()::initialized = '\x01';
  }
  local_50 = 0;
  String::parse_latin1((String *)&local_50,"EditorProperty");
  StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
  local_60 = 0;
  String::parse_latin1((String *)&local_60,"EditorPropertyVectorN");
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
  initialize_class()::initialized = 1;
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EditorPropertyVectorN::EditorPropertyVectorN(Variant::Type, bool, bool) */

void __thiscall
EditorPropertyVectorN::EditorPropertyVectorN
          (EditorPropertyVectorN *this,uint param_2,char param_3,char param_4)

{
  CowData<EditorSpinSlider*> *this_00;
  CowData<double> *this_01;
  String *pSVar1;
  long *plVar2;
  code *pcVar3;
  undefined8 uVar4;
  int iVar5;
  BoxContainer *this_02;
  ulong uVar6;
  ulong uVar7;
  EditorSpinSlider *this_03;
  CallableCustom *pCVar8;
  TextureButton *this_04;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  bool bVar14;
  long in_FS_OFFSET;
  String *local_f8;
  CowData *local_f0;
  int local_e0;
  BoxContainer *local_d8;
  undefined8 local_b0;
  undefined8 local_a8 [2];
  undefined8 local_98 [2];
  Variant *local_88;
  int local_78 [6];
  undefined8 local_60;
  undefined1 local_58 [16];
  long local_40;
  
  this_00 = (CowData<EditorSpinSlider*> *)(this + 0xb68);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  EditorProperty::EditorProperty((EditorProperty *)this);
  *(undefined ***)this = &PTR__initialize_classv_0010eb18;
  *(undefined4 *)(this + 0xb54) = 0;
  *(undefined8 *)(this + 0xb80) = 0;
  *(undefined2 *)(this + 0xb88) = 0;
  *(uint *)(this + 0xb58) = param_2;
  *(undefined1 (*) [16])(this + 0xb68) = (undefined1  [16])0x0;
  if (param_2 < 0xb) {
    if (param_2 < 9) {
      if (1 < param_2 - 5) goto LAB_00102790;
      *(undefined4 *)(this + 0xb54) = 2;
    }
    else {
      *(undefined4 *)(this + 0xb54) = 3;
    }
  }
  else if (param_2 - 0xc < 2) {
    *(undefined4 *)(this + 0xb54) = 4;
  }
  else {
LAB_00102790:
    _err_print_error("EditorPropertyVectorN","editor/editor_properties_vector.cpp",0xc2,
                     "Not a Vector type.",0,0);
  }
  this_02 = (BoxContainer *)operator_new(0xa10,"");
  BoxContainer::BoxContainer(this_02,false);
  *(undefined ***)this_02 = &PTR__initialize_classv_0010cd48;
  this_02[0xa0c] = (BoxContainer)0x1;
  postinitialize_handler((Object *)this_02);
  Control::set_h_size_flags(this_02,3);
  if (param_3 == '\0') {
    if (param_4 == '\0') {
      local_d8 = (BoxContainer *)operator_new(0xa10,"");
      BoxContainer::BoxContainer(local_d8,true);
      local_d8[0xa0c] = (BoxContainer)0x1;
      *(undefined ***)local_d8 = &PTR__initialize_classv_0010d0c0;
      goto LAB_00102749;
    }
    local_d8 = (BoxContainer *)operator_new(0xa10,"");
    BoxContainer::BoxContainer(local_d8,false);
    *(undefined ***)local_d8 = &PTR__initialize_classv_0010cd48;
    local_d8[0xa0c] = (BoxContainer)0x1;
    postinitialize_handler((Object *)local_d8);
    Node::add_child(this_02,local_d8,0,0);
    EditorProperty::set_bottom_editor((Control *)this);
  }
  else {
    local_d8 = (BoxContainer *)operator_new(0xa10,"");
    BoxContainer::BoxContainer(local_d8,false);
    *(undefined ***)local_d8 = &PTR__initialize_classv_0010cd48;
    local_d8[0xa0c] = (BoxContainer)0x1;
LAB_00102749:
    postinitialize_handler((Object *)local_d8);
    Node::add_child(this_02,local_d8,0,0);
  }
  Control::set_h_size_flags(local_d8);
  lVar11 = (long)*(int *)(this + 0xb54);
  if (lVar11 < 0) {
    _err_print_error("resize","./core/templates/cowdata.h",0x157,
                     "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER",0,0);
  }
  else {
    lVar13 = *(long *)(this + 0xb68);
    if (lVar13 == 0) {
      if (lVar11 != 0) {
        lVar12 = 0;
        CowData<EditorSpinSlider*>::_copy_on_write(this_00);
LAB_001028e3:
        uVar6 = lVar11 * 8 - 1;
        uVar6 = uVar6 | uVar6 >> 1;
        uVar6 = uVar6 | uVar6 >> 2;
        uVar6 = uVar6 | uVar6 >> 4;
        uVar6 = uVar6 | uVar6 >> 8;
        uVar6 = uVar6 | uVar6 >> 0x10;
        lVar13 = (uVar6 | uVar6 >> 0x20) + 1;
        if (lVar12 < lVar11) {
LAB_00102988:
          if (lVar12 == 0) {
            puVar9 = (undefined8 *)Memory::alloc_static(lVar13 + 0x10,false);
            if (puVar9 == (undefined8 *)0x0) {
              _err_print_error("resize","./core/templates/cowdata.h",0x171,
                               "Parameter \"mem_new\" is null.",0,0);
            }
            else {
              puVar10 = puVar9 + 2;
              *puVar9 = 1;
              puVar9[1] = 0;
              *(undefined8 **)(this + 0xb68) = puVar10;
LAB_00101e86:
              puVar10[-1] = lVar11;
            }
          }
          else {
            iVar5 = CowData<EditorSpinSlider*>::_realloc(this_00,lVar13);
            if (iVar5 == 0) {
LAB_00101e76:
              puVar10 = *(undefined8 **)(this + 0xb68);
              if (puVar10 == (undefined8 *)0x0) goto code_r0x0010372a;
              goto LAB_00101e86;
            }
          }
        }
        else {
LAB_0010292f:
          iVar5 = CowData<EditorSpinSlider*>::_realloc(this_00,lVar13);
          if (iVar5 == 0) goto LAB_001027e9;
        }
      }
    }
    else {
      lVar12 = *(long *)(lVar13 + -8);
      if (lVar11 != lVar12) {
        if (lVar11 == 0) {
          LOCK();
          plVar2 = (long *)(lVar13 + -0x10);
          *plVar2 = *plVar2 + -1;
          UNLOCK();
          if (*plVar2 == 0) {
            lVar11 = *(long *)(this + 0xb68);
            *(undefined8 *)(this + 0xb68) = 0;
            Memory::free_static((void *)(lVar11 + -0x10),false);
          }
          else {
            *(undefined8 *)(this + 0xb68) = 0;
          }
        }
        else {
          CowData<EditorSpinSlider*>::_copy_on_write(this_00);
          uVar6 = lVar11 * 8 - 1;
          uVar6 = uVar6 >> 1 | uVar6;
          uVar6 = uVar6 >> 2 | uVar6;
          uVar6 = uVar6 >> 4 | uVar6;
          uVar6 = uVar6 >> 8 | uVar6;
          uVar6 = uVar6 >> 0x10 | uVar6;
          uVar6 = uVar6 >> 0x20 | uVar6;
          lVar13 = uVar6 + 1;
          if (lVar12 * 8 == 0) goto LAB_001028e3;
          uVar7 = lVar12 * 8 - 1;
          uVar7 = uVar7 | uVar7 >> 1;
          uVar7 = uVar7 | uVar7 >> 2;
          uVar7 = uVar7 | uVar7 >> 4;
          uVar7 = uVar7 | uVar7 >> 8;
          uVar7 = uVar7 | uVar7 >> 0x10;
          uVar7 = uVar7 | uVar7 >> 0x20;
          if (lVar12 < lVar11) {
            if (uVar7 != uVar6) goto LAB_00102988;
            goto LAB_00101e76;
          }
          if (uVar7 != uVar6) goto LAB_0010292f;
LAB_001027e9:
          if (*(long *)(this + 0xb68) == 0) {
            EditorPropertyVectorN();
            return;
          }
          *(long *)(*(long *)(this + 0xb68) + -8) = lVar11;
        }
      }
    }
  }
  CowData<EditorSpinSlider*>::_copy_on_write(this_00);
  iVar5 = *(int *)(this + 0xb54);
  puVar9 = *(undefined8 **)(this + 0xb68);
  if (iVar5 < 1) {
    lVar11 = (long)((iVar5 + -1) * iVar5);
LAB_001021fe:
    this_01 = (CowData<double> *)(this + 0xb80);
    lVar13 = *(long *)this_01;
    if (lVar13 == 0) {
      if (lVar11 != 0) {
        lVar12 = 0;
        CowData<double>::_copy_on_write(this_01);
LAB_0010286a:
        uVar6 = lVar11 * 8 - 1;
        uVar6 = uVar6 >> 1 | uVar6;
        uVar6 = uVar6 >> 2 | uVar6;
        uVar6 = uVar6 >> 4 | uVar6;
        uVar6 = uVar6 >> 8 | uVar6;
        uVar6 = uVar6 >> 0x10 | uVar6;
        lVar13 = (uVar6 >> 0x20 | uVar6) + 1;
        if (lVar12 < lVar11) {
LAB_00102948:
          if (lVar12 == 0) {
            puVar9 = (undefined8 *)Memory::alloc_static(lVar13 + 0x10,false);
            if (puVar9 == (undefined8 *)0x0) {
              _err_print_error("resize","./core/templates/cowdata.h",0x171,
                               "Parameter \"mem_new\" is null.",0,0);
            }
            else {
              puVar10 = puVar9 + 2;
              *puVar9 = 1;
              puVar9[1] = 0;
              *(undefined8 **)(this + 0xb80) = puVar10;
LAB_001022e1:
              puVar10[-1] = lVar11;
            }
          }
          else {
            iVar5 = CowData<double>::_realloc(this_01,lVar13);
            if (iVar5 == 0) {
LAB_001022d1:
              puVar10 = *(undefined8 **)(this + 0xb80);
              if (puVar10 == (undefined8 *)0x0) {
code_r0x0010372a:
                _DAT_00000000 = 0;
                    /* WARNING: Does not return */
                pcVar3 = (code *)invalidInstructionException();
                (*pcVar3)();
              }
              goto LAB_001022e1;
            }
          }
        }
        else {
LAB_001028ba:
          iVar5 = CowData<double>::_realloc(this_01,lVar13);
          if (iVar5 == 0) goto LAB_001023f1;
        }
      }
    }
    else {
      lVar12 = *(long *)(lVar13 + -8);
      if (lVar11 != lVar12) {
        if (lVar11 == 0) {
          LOCK();
          plVar2 = (long *)(lVar13 + -0x10);
          *plVar2 = *plVar2 + -1;
          UNLOCK();
          if (*plVar2 == 0) {
            lVar11 = *(long *)(this + 0xb80);
            *(undefined8 *)(this + 0xb80) = 0;
            Memory::free_static((void *)(lVar11 + -0x10),false);
          }
          else {
            *(undefined8 *)(this + 0xb80) = 0;
          }
        }
        else {
          CowData<double>::_copy_on_write(this_01);
          uVar6 = lVar11 * 8 - 1;
          uVar6 = uVar6 >> 1 | uVar6;
          uVar6 = uVar6 >> 2 | uVar6;
          uVar6 = uVar6 >> 4 | uVar6;
          uVar6 = uVar6 >> 8 | uVar6;
          uVar6 = uVar6 >> 0x10 | uVar6;
          uVar6 = uVar6 >> 0x20 | uVar6;
          lVar13 = uVar6 + 1;
          if (lVar12 * 8 == 0) goto LAB_0010286a;
          uVar7 = lVar12 * 8 - 1;
          uVar7 = uVar7 | uVar7 >> 1;
          uVar7 = uVar7 | uVar7 >> 2;
          uVar7 = uVar7 | uVar7 >> 4;
          uVar7 = uVar7 | uVar7 >> 8;
          uVar7 = uVar7 | uVar7 >> 0x10;
          uVar7 = uVar7 | uVar7 >> 0x20;
          if (lVar12 < lVar11) {
            if (uVar6 != uVar7) goto LAB_00102948;
            goto LAB_001022d1;
          }
          if (uVar6 != uVar7) goto LAB_001028ba;
LAB_001023f1:
          if (*(long *)(this + 0xb80) == 0) {
            EditorPropertyVectorN();
            return;
          }
          *(long *)(*(long *)(this + 0xb80) + -8) = lVar11;
        }
      }
    }
  }
  else {
    local_e0 = 0;
    local_f0 = (CowData *)&COMPONENT_LABELS;
    do {
      this_03 = (EditorSpinSlider *)operator_new(0xa70,"");
      EditorSpinSlider::EditorSpinSlider(this_03);
      postinitialize_handler((Object *)this_03);
      *puVar9 = this_03;
      Node::add_child(local_d8,this_03,0,0);
      EditorSpinSlider::set_flat(SUB81(*puVar9,0));
      pSVar1 = (String *)*puVar9;
      local_98[0] = 0;
      if (*(long *)local_f0 != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)local_98,local_f0);
      }
      EditorSpinSlider::set_label(pSVar1);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
      if (param_4 != '\0' || param_3 != '\0') {
        Control::set_h_size_flags(*puVar9,3);
      }
      plVar2 = (long *)*puVar9;
      pcVar3 = *(code **)(*plVar2 + 0x108);
      pCVar8 = (CallableCustom *)operator_new(0x48,"");
      CallableCustom::CallableCustom(pCVar8);
      *(EditorPropertyVectorN **)(pCVar8 + 0x28) = this;
      *(undefined1 (*) [16])(pCVar8 + 0x30) = (undefined1  [16])0x0;
      *(undefined **)(pCVar8 + 0x20) = &_LC11;
      *(undefined8 *)(pCVar8 + 0x40) = 0;
      uVar4 = *(undefined8 *)(this + 0x60);
      *(undefined ***)pCVar8 = &PTR_hash_0010eee8;
      *(undefined8 *)(pCVar8 + 0x30) = uVar4;
      *(code **)(pCVar8 + 0x38) = _value_changed;
      *(undefined8 *)(pCVar8 + 0x10) = 0;
      CallableCustomMethodPointerBase::_setup((uint *)pCVar8,(int)pCVar8 + 0x28);
      *(char **)(pCVar8 + 0x20) = "EditorPropertyVectorN::_value_changed";
      Callable::Callable((Callable *)local_98,pCVar8);
      local_b0 = 0;
      if (*(long *)local_f0 != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_b0,local_f0);
      }
      Variant::Variant((Variant *)local_78,(String *)&local_b0);
      local_60 = 0;
      local_58 = (undefined1  [16])0x0;
      local_88 = (Variant *)local_78;
      Callable::bindp((Variant **)local_a8,(int)(CowData<char32_t> *)local_98);
      if (Variant::needs_deinit[(int)local_60] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[local_78[0]] != '\0') {
        Variant::_clear_internal();
      }
      (*pcVar3)(plVar2,SceneStringNames::singleton + 0x280,(Callable *)local_a8,0);
      Callable::~Callable((Callable *)local_a8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
      Callable::~Callable((Callable *)local_98);
      plVar2 = (long *)*puVar9;
      pcVar3 = *(code **)(*plVar2 + 0x108);
      create_custom_callable_function_pointer<EditorPropertyVectorN,bool>
                ((EditorPropertyVectorN *)local_98,(char *)this,
                 (_func_void_bool *)"&EditorPropertyVectorN::_grab_changed");
      bVar14 = SUB81((Callable *)local_a8,0);
      Callable::bind<bool>(bVar14);
      if ((EditorPropertyVectorN(Variant::Type,bool,bool)::{lambda()#1}::operator()()::sname == '\0'
          ) && (iVar5 = __cxa_guard_acquire(&EditorPropertyVectorN(Variant::Type,bool,bool)::
                                             {lambda()#1}::operator()()::sname), iVar5 != 0)) {
        _scs_create((char *)&EditorPropertyVectorN(Variant::Type,bool,bool)::{lambda()#1}::
                             operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,
                     &EditorPropertyVectorN(Variant::Type,bool,bool)::{lambda()#1}::operator()()::
                      sname,&__dso_handle);
        __cxa_guard_release(&EditorPropertyVectorN(Variant::Type,bool,bool)::{lambda()#1}::
                             operator()()::sname);
      }
      (*pcVar3)(plVar2,&EditorPropertyVectorN(Variant::Type,bool,bool)::{lambda()#1}::operator()()::
                        sname,(Callable *)local_a8,0);
      Callable::~Callable((Callable *)local_a8);
      Callable::~Callable((Callable *)local_98);
      plVar2 = (long *)*puVar9;
      pcVar3 = *(code **)(*plVar2 + 0x108);
      create_custom_callable_function_pointer<EditorPropertyVectorN,bool>
                ((EditorPropertyVectorN *)local_98,(char *)this,
                 (_func_void_bool *)"&EditorPropertyVectorN::_grab_changed");
      Callable::bind<bool>(bVar14);
      if ((EditorPropertyVectorN(Variant::Type,bool,bool)::{lambda()#2}::operator()()::sname == '\0'
          ) && (iVar5 = __cxa_guard_acquire(&EditorPropertyVectorN(Variant::Type,bool,bool)::
                                             {lambda()#2}::operator()()::sname), iVar5 != 0)) {
        _scs_create((char *)&EditorPropertyVectorN(Variant::Type,bool,bool)::{lambda()#2}::
                             operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,
                     &EditorPropertyVectorN(Variant::Type,bool,bool)::{lambda()#2}::operator()()::
                      sname,&__dso_handle);
        __cxa_guard_release(&EditorPropertyVectorN(Variant::Type,bool,bool)::{lambda()#2}::
                             operator()()::sname);
      }
      (*pcVar3)(plVar2,&EditorPropertyVectorN(Variant::Type,bool,bool)::{lambda()#2}::operator()()::
                        sname,(Callable *)local_a8,0);
      puVar9 = puVar9 + 1;
      Callable::~Callable((Callable *)local_a8);
      Callable::~Callable((Callable *)local_98);
      EditorProperty::add_focusable((Control *)this);
      local_e0 = local_e0 + 1;
      iVar5 = *(int *)(this + 0xb54);
      local_f0 = local_f0 + 8;
    } while (local_e0 < iVar5);
    lVar11 = (long)((iVar5 + -1) * iVar5);
    if (-1 < lVar11) goto LAB_001021fe;
    _err_print_error("resize","./core/templates/cowdata.h",0x157,
                     "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER",0,0);
  }
  local_f8 = (String *)&local_b0;
  CowData<double>::_copy_on_write((CowData<double> *)(this + 0xb80));
  uVar4 = _LC72;
  puVar9 = *(undefined8 **)(this + 0xb80);
  if ((puVar9 != (undefined8 *)0x0) && (0 < (long)puVar9[-1])) {
    puVar10 = puVar9 + puVar9[-1];
    do {
      *puVar9 = uVar4;
      puVar9 = puVar9 + 1;
    } while (puVar9 != puVar10);
  }
  this_04 = (TextureButton *)operator_new(0xaa0,"");
  TextureButton::TextureButton(this_04);
  postinitialize_handler((Object *)this_04);
  *(TextureButton **)(this + 0xb70) = this_04;
  BaseButton::set_toggle_mode(SUB81(this_04,0));
  TextureButton::set_stretch_mode(*(undefined8 *)(this + 0xb70),3);
  pSVar1 = *(String **)(this + 0xb70);
  local_98[0] = 0;
  String::parse_latin1((String *)local_98,"");
  local_a8[0] = 0;
  String::parse_latin1((String *)local_a8,"Lock/Unlock Component Ratio");
  TTR(local_f8,(String *)local_a8);
  Control::set_tooltip_text(pSVar1);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_f8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
  plVar2 = *(long **)(this + 0xb70);
  pcVar3 = *(code **)(*plVar2 + 0x108);
  pCVar8 = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(pCVar8);
  *(undefined8 *)(pCVar8 + 0x40) = 0;
  *(undefined **)(pCVar8 + 0x20) = &_LC11;
  *(undefined1 (*) [16])(pCVar8 + 0x30) = (undefined1  [16])0x0;
  *(undefined ***)pCVar8 = &PTR_hash_0010f008;
  uVar4 = *(undefined8 *)(this + 0x60);
  *(undefined8 *)(pCVar8 + 0x10) = 0;
  *(undefined8 *)(pCVar8 + 0x30) = uVar4;
  *(code **)(pCVar8 + 0x38) = _update_ratio;
  *(EditorPropertyVectorN **)(pCVar8 + 0x28) = this;
  CallableCustomMethodPointerBase::_setup((uint *)pCVar8,(int)pCVar8 + 0x28);
  *(char **)(pCVar8 + 0x20) = "EditorPropertyVectorN::_update_ratio";
  Callable::Callable((Callable *)local_98,pCVar8);
  (*pcVar3)(plVar2,SceneStringNames::singleton + 0x238,(String *)local_98,0);
  Callable::~Callable((Callable *)local_98);
  plVar2 = *(long **)(this + 0xb70);
  pcVar3 = *(code **)(*plVar2 + 0x108);
  create_custom_callable_function_pointer<EditorPropertyVectorN,bool>
            ((EditorPropertyVectorN *)local_98,(char *)this,
             (_func_void_bool *)"&EditorPropertyVectorN::_store_link");
  (*pcVar3)(plVar2,SceneStringNames::singleton + 0x248,(String *)local_98);
  Callable::~Callable((Callable *)local_98);
  Node::add_child(this_02,*(undefined8 *)(this + 0xb70),0);
  Node::add_child(this,this_02,0);
  if (param_4 != '\0' || param_3 != '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
LAB_00102b43:
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  if (*(long *)(this + 0xb68) == 0) {
    lVar11 = 0;
  }
  else {
    lVar11 = *(long *)(*(long *)(this + 0xb68) + -8);
    if (0 < lVar11) {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        EditorProperty::set_label_reference((Control *)this);
        return;
      }
      goto LAB_00102b43;
    }
  }
  _err_print_index_error
            ("get","./core/templates/cowdata.h",0xdb,0,lVar11,"p_index","size()","",false,true);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar3 = (code *)invalidInstructionException();
  (*pcVar3)();
}



/* EditorPropertyVector2::EditorPropertyVector2(bool) */

void __thiscall
EditorPropertyVector2::EditorPropertyVector2(EditorPropertyVector2 *this,bool param_1)

{
  bool bVar1;
  long in_FS_OFFSET;
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  int local_48 [6];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_60 = 0;
  local_58 = "interface/inspector/horizontal_vector2_editing";
  local_50 = 0x2e;
  String::parse_latin1((StrRange *)&local_60);
  _EDITOR_GET((String *)local_48);
  bVar1 = Variant::operator_cast_to_bool((Variant *)local_48);
  EditorPropertyVectorN::EditorPropertyVectorN((EditorPropertyVectorN *)this,5,param_1,bVar1);
  if (Variant::needs_deinit[local_48[0]] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  *(undefined ***)this = &PTR__initialize_classv_0010d438;
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorPropertyVector2i::EditorPropertyVector2i(bool) */

void __thiscall
EditorPropertyVector2i::EditorPropertyVector2i(EditorPropertyVector2i *this,bool param_1)

{
  bool bVar1;
  long in_FS_OFFSET;
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  int local_48 [6];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_60 = 0;
  local_58 = "interface/inspector/horizontal_vector2_editing";
  local_50 = 0x2e;
  String::parse_latin1((StrRange *)&local_60);
  _EDITOR_GET((String *)local_48);
  bVar1 = Variant::operator_cast_to_bool((Variant *)local_48);
  EditorPropertyVectorN::EditorPropertyVectorN((EditorPropertyVectorN *)this,6,param_1,bVar1);
  if (Variant::needs_deinit[local_48[0]] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  *(undefined ***)this = &PTR__initialize_classv_0010d808;
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorPropertyVector3::EditorPropertyVector3(bool) */

void __thiscall
EditorPropertyVector3::EditorPropertyVector3(EditorPropertyVector3 *this,bool param_1)

{
  bool bVar1;
  long in_FS_OFFSET;
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  int local_48 [6];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_60 = 0;
  local_58 = "interface/inspector/horizontal_vector_types_editing";
  local_50 = 0x33;
  String::parse_latin1((StrRange *)&local_60);
  _EDITOR_GET((String *)local_48);
  bVar1 = Variant::operator_cast_to_bool((Variant *)local_48);
  EditorPropertyVectorN::EditorPropertyVectorN((EditorPropertyVectorN *)this,9,param_1,bVar1);
  if (Variant::needs_deinit[local_48[0]] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  *(undefined ***)this = &PTR__initialize_classv_0010dbd8;
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorPropertyVector3i::EditorPropertyVector3i(bool) */

void __thiscall
EditorPropertyVector3i::EditorPropertyVector3i(EditorPropertyVector3i *this,bool param_1)

{
  bool bVar1;
  long in_FS_OFFSET;
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  int local_48 [6];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_60 = 0;
  local_58 = "interface/inspector/horizontal_vector_types_editing";
  local_50 = 0x33;
  String::parse_latin1((StrRange *)&local_60);
  _EDITOR_GET((String *)local_48);
  bVar1 = Variant::operator_cast_to_bool((Variant *)local_48);
  EditorPropertyVectorN::EditorPropertyVectorN((EditorPropertyVectorN *)this,10,param_1,bVar1);
  if (Variant::needs_deinit[local_48[0]] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  *(undefined ***)this = &PTR__initialize_classv_0010dfa8;
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorPropertyVector4::EditorPropertyVector4(bool) */

void __thiscall
EditorPropertyVector4::EditorPropertyVector4(EditorPropertyVector4 *this,bool param_1)

{
  bool bVar1;
  long in_FS_OFFSET;
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  int local_48 [6];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_60 = 0;
  local_58 = "interface/inspector/horizontal_vector_types_editing";
  local_50 = 0x33;
  String::parse_latin1((StrRange *)&local_60);
  _EDITOR_GET((String *)local_48);
  bVar1 = Variant::operator_cast_to_bool((Variant *)local_48);
  EditorPropertyVectorN::EditorPropertyVectorN((EditorPropertyVectorN *)this,0xc,param_1,bVar1);
  if (Variant::needs_deinit[local_48[0]] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  *(undefined ***)this = &PTR__initialize_classv_0010e378;
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorPropertyVector4i::EditorPropertyVector4i(bool) */

void __thiscall
EditorPropertyVector4i::EditorPropertyVector4i(EditorPropertyVector4i *this,bool param_1)

{
  bool bVar1;
  long in_FS_OFFSET;
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  int local_48 [6];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_60 = 0;
  local_58 = "interface/inspector/horizontal_vector_types_editing";
  local_50 = 0x33;
  String::parse_latin1((StrRange *)&local_60);
  _EDITOR_GET((String *)local_48);
  bVar1 = Variant::operator_cast_to_bool((Variant *)local_48);
  EditorPropertyVectorN::EditorPropertyVectorN((EditorPropertyVectorN *)this,0xd,param_1,bVar1);
  if (Variant::needs_deinit[local_48[0]] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  *(undefined ***)this = &PTR__initialize_classv_0010e748;
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



/* Control::_top_level_changed() */

void Control::_top_level_changed(void)

{
  return;
}



/* EditorProperty::is_colored(EditorProperty::ColorationMode) */

undefined8 EditorProperty::is_colored(void)

{
  return 0;
}



/* CallableCustomMethodPointer<EditorPropertyVectorN, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorPropertyVectorN,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorPropertyVectorN,void> *this)

{
  return;
}



/* CallableCustomMethodPointer<EditorPropertyVectorN, void, bool>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorPropertyVectorN,void,bool>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorPropertyVectorN,void,bool> *this)

{
  return;
}



/* CallableCustomMethodPointer<EditorPropertyVectorN, void, double, String
   const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorPropertyVectorN,void,double,String_const&>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorPropertyVectorN,void,double,String_const&> *this)

{
  return;
}



/* CallableCustomMethodPointer<EditorPropertyVectorN, void>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorPropertyVectorN,void>::get_argument_count
          (CallableCustomMethodPointer<EditorPropertyVectorN,void> *this,bool *param_1)

{
  *param_1 = true;
  return 0;
}



/* CallableCustomMethodPointer<EditorPropertyVectorN, void, bool>::get_argument_count(bool&) const
    */

undefined8 __thiscall
CallableCustomMethodPointer<EditorPropertyVectorN,void,bool>::get_argument_count
          (CallableCustomMethodPointer<EditorPropertyVectorN,void,bool> *this,bool *param_1)

{
  *param_1 = true;
  return 1;
}



/* CallableCustomMethodPointer<EditorPropertyVectorN, void, double, String
   const&>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorPropertyVectorN,void,double,String_const&>::get_argument_count
          (CallableCustomMethodPointer<EditorPropertyVectorN,void,double,String_const&> *this,
          bool *param_1)

{
  *param_1 = true;
  return 2;
}



/* CallableCustomMethodPointerBase::get_method() const */

void CallableCustomMethodPointerBase::get_method(void)

{
  long in_RSI;
  StringName *in_RDI;
  
  StringName::StringName(in_RDI,*(char **)(in_RSI + 0x20),false);
  return;
}



/* CallableCustomMethodPointer<EditorPropertyVectorN, void, double, String
   const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorPropertyVectorN,void,double,String_const&>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorPropertyVectorN,void,double,String_const&> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<EditorPropertyVectorN, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorPropertyVectorN,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorPropertyVectorN,void> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<EditorPropertyVectorN, void, bool>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorPropertyVectorN,void,bool>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorPropertyVectorN,void,bool> *this)

{
  operator_delete(this,0x48);
  return;
}



/* HBoxContainer::_property_get_revertv(StringName const&, Variant&) const */

undefined8 HBoxContainer::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_get_revert_00113018 != Object::_property_get_revert) {
    uVar1 = Control::_property_get_revert(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* VBoxContainer::_property_get_revertv(StringName const&, Variant&) const */

undefined8 VBoxContainer::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_get_revert_00113018 != Object::_property_get_revert) {
    uVar1 = Control::_property_get_revert(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* EditorPropertyVectorN::_property_get_revertv(StringName const&, Variant&) const */

undefined8 EditorPropertyVectorN::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_get_revert_00113018 != Object::_property_get_revert) {
    uVar1 = Control::_property_get_revert(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* EditorPropertyVector2::_property_get_revertv(StringName const&, Variant&) const */

undefined8 EditorPropertyVector2::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_get_revert_00113018 != Object::_property_get_revert) {
    uVar1 = Control::_property_get_revert(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* EditorPropertyVector2i::_property_get_revertv(StringName const&, Variant&) const */

undefined8 EditorPropertyVector2i::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_get_revert_00113018 != Object::_property_get_revert) {
    uVar1 = Control::_property_get_revert(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* EditorPropertyVector3::_property_get_revertv(StringName const&, Variant&) const */

undefined8 EditorPropertyVector3::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_get_revert_00113018 != Object::_property_get_revert) {
    uVar1 = Control::_property_get_revert(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* EditorPropertyVector3i::_property_get_revertv(StringName const&, Variant&) const */

undefined8 EditorPropertyVector3i::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_get_revert_00113018 != Object::_property_get_revert) {
    uVar1 = Control::_property_get_revert(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* EditorPropertyVector4::_property_get_revertv(StringName const&, Variant&) const */

undefined8 EditorPropertyVector4::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_get_revert_00113018 != Object::_property_get_revert) {
    uVar1 = Control::_property_get_revert(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* EditorPropertyVector4i::_property_get_revertv(StringName const&, Variant&) const */

undefined8 EditorPropertyVector4i::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_get_revert_00113018 != Object::_property_get_revert) {
    uVar1 = Control::_property_get_revert(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* HBoxContainer::_property_can_revertv(StringName const&) const */

undefined8 HBoxContainer::_property_can_revertv(StringName *param_1)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_can_revert_00113020 != Object::_property_can_revert) {
    uVar1 = Control::_property_can_revert(param_1);
    return uVar1;
  }
  return 0;
}



/* VBoxContainer::_property_can_revertv(StringName const&) const */

undefined8 VBoxContainer::_property_can_revertv(StringName *param_1)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_can_revert_00113020 != Object::_property_can_revert) {
    uVar1 = Control::_property_can_revert(param_1);
    return uVar1;
  }
  return 0;
}



/* EditorPropertyVectorN::_property_can_revertv(StringName const&) const */

undefined8 EditorPropertyVectorN::_property_can_revertv(StringName *param_1)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_can_revert_00113020 != Object::_property_can_revert) {
    uVar1 = Control::_property_can_revert(param_1);
    return uVar1;
  }
  return 0;
}



/* EditorPropertyVector2::_property_can_revertv(StringName const&) const */

undefined8 EditorPropertyVector2::_property_can_revertv(StringName *param_1)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_can_revert_00113020 != Object::_property_can_revert) {
    uVar1 = Control::_property_can_revert(param_1);
    return uVar1;
  }
  return 0;
}



/* EditorPropertyVector2i::_property_can_revertv(StringName const&) const */

undefined8 EditorPropertyVector2i::_property_can_revertv(StringName *param_1)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_can_revert_00113020 != Object::_property_can_revert) {
    uVar1 = Control::_property_can_revert(param_1);
    return uVar1;
  }
  return 0;
}



/* EditorPropertyVector3::_property_can_revertv(StringName const&) const */

undefined8 EditorPropertyVector3::_property_can_revertv(StringName *param_1)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_can_revert_00113020 != Object::_property_can_revert) {
    uVar1 = Control::_property_can_revert(param_1);
    return uVar1;
  }
  return 0;
}



/* EditorPropertyVector3i::_property_can_revertv(StringName const&) const */

undefined8 EditorPropertyVector3i::_property_can_revertv(StringName *param_1)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_can_revert_00113020 != Object::_property_can_revert) {
    uVar1 = Control::_property_can_revert(param_1);
    return uVar1;
  }
  return 0;
}



/* EditorPropertyVector4::_property_can_revertv(StringName const&) const */

undefined8 EditorPropertyVector4::_property_can_revertv(StringName *param_1)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_can_revert_00113020 != Object::_property_can_revert) {
    uVar1 = Control::_property_can_revert(param_1);
    return uVar1;
  }
  return 0;
}



/* EditorPropertyVector4i::_property_can_revertv(StringName const&) const */

undefined8 EditorPropertyVector4i::_property_can_revertv(StringName *param_1)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_can_revert_00113020 != Object::_property_can_revert) {
    uVar1 = Control::_property_can_revert(param_1);
    return uVar1;
  }
  return 0;
}



/* CowData<EditorSpinSlider*>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<EditorSpinSlider*>::_copy_on_write(void)

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



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EditorPropertyVectorN::EditorPropertyVectorN(Variant::Type, bool, bool) [clone .cold] */

void __thiscall EditorPropertyVectorN::EditorPropertyVectorN(void)

{
  code *pcVar1;
  
  _DAT_00000000 = 0;
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* EditorPropertyVector3i::_get_class_namev() const */

undefined8 * EditorPropertyVector3i::_get_class_namev(void)

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
LAB_00103783:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00103783;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"EditorPropertyVector3i");
      goto LAB_001037ee;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"EditorPropertyVector3i");
LAB_001037ee:
  return &_get_class_namev()::_class_name_static;
}



/* CallableCustomMethodPointer<EditorPropertyVectorN, void, double, String const&>::get_object()
   const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorPropertyVectorN,void,double,String_const&>::get_object
          (CallableCustomMethodPointer<EditorPropertyVectorN,void,double,String_const&> *this)

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
      goto LAB_0010391d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0010391d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0010391d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<EditorPropertyVectorN, void, bool>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorPropertyVectorN,void,bool>::get_object
          (CallableCustomMethodPointer<EditorPropertyVectorN,void,bool> *this)

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
      goto LAB_00103a1d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_00103a1d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_00103a1d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<EditorPropertyVectorN, void>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorPropertyVectorN,void>::get_object
          (CallableCustomMethodPointer<EditorPropertyVectorN,void> *this)

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
      goto LAB_00103b1d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_00103b1d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_00103b1d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* HBoxContainer::is_class_ptr(void*) const */

uint HBoxContainer::is_class_ptr(void *param_1)

{
  uint uVar1;
  undefined4 in_EDX;
  undefined4 *in_RSI;
  
  uVar1 = 1;
  if (in_RSI != &get_class_ptr_static()::ptr) {
    uVar1 = (uint)CONCAT71(0x10f2,in_RSI == &Container::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x10f2,in_RSI == &BoxContainer::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x10f2,in_RSI == &Control::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x10f2,in_RSI == &CanvasItem::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x10f2,in_RSI == &Node::get_class_ptr_static()::ptr) |
            CONCAT31((int3)((uint)in_EDX >> 8),in_RSI == &Object::get_class_ptr_static()::ptr);
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
    uVar1 = (uint)CONCAT71(0x10f2,in_RSI == &Container::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x10f2,in_RSI == &BoxContainer::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x10f2,in_RSI == &Control::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x10f2,in_RSI == &CanvasItem::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x10f2,in_RSI == &Node::get_class_ptr_static()::ptr) |
            CONCAT31((int3)((uint)in_EDX >> 8),in_RSI == &Object::get_class_ptr_static()::ptr);
  }
  return uVar1;
}



/* EditorPropertyVector2::_validate_propertyv(PropertyInfo&) const */

void EditorPropertyVector2::_validate_propertyv(PropertyInfo *param_1)

{
  Node::_validate_property(param_1);
  CanvasItem::_validate_property(param_1);
  if ((code *)PTR__validate_property_00113028 == CanvasItem::_validate_property) {
    return;
  }
  Control::_validate_property(param_1);
  return;
}



/* EditorPropertyVector4::_validate_propertyv(PropertyInfo&) const */

void EditorPropertyVector4::_validate_propertyv(PropertyInfo *param_1)

{
  Node::_validate_property(param_1);
  CanvasItem::_validate_property(param_1);
  if ((code *)PTR__validate_property_00113028 == CanvasItem::_validate_property) {
    return;
  }
  Control::_validate_property(param_1);
  return;
}



/* EditorPropertyVector3::_validate_propertyv(PropertyInfo&) const */

void EditorPropertyVector3::_validate_propertyv(PropertyInfo *param_1)

{
  Node::_validate_property(param_1);
  CanvasItem::_validate_property(param_1);
  if ((code *)PTR__validate_property_00113028 == CanvasItem::_validate_property) {
    return;
  }
  Control::_validate_property(param_1);
  return;
}



/* EditorPropertyVectorN::_validate_propertyv(PropertyInfo&) const */

void EditorPropertyVectorN::_validate_propertyv(PropertyInfo *param_1)

{
  Node::_validate_property(param_1);
  CanvasItem::_validate_property(param_1);
  if ((code *)PTR__validate_property_00113028 == CanvasItem::_validate_property) {
    return;
  }
  Control::_validate_property(param_1);
  return;
}



/* EditorPropertyVector4i::_validate_propertyv(PropertyInfo&) const */

void EditorPropertyVector4i::_validate_propertyv(PropertyInfo *param_1)

{
  Node::_validate_property(param_1);
  CanvasItem::_validate_property(param_1);
  if ((code *)PTR__validate_property_00113028 == CanvasItem::_validate_property) {
    return;
  }
  Control::_validate_property(param_1);
  return;
}



/* EditorPropertyVector3i::_validate_propertyv(PropertyInfo&) const */

void EditorPropertyVector3i::_validate_propertyv(PropertyInfo *param_1)

{
  Node::_validate_property(param_1);
  CanvasItem::_validate_property(param_1);
  if ((code *)PTR__validate_property_00113028 == CanvasItem::_validate_property) {
    return;
  }
  Control::_validate_property(param_1);
  return;
}



/* EditorPropertyVector2i::_validate_propertyv(PropertyInfo&) const */

void EditorPropertyVector2i::_validate_propertyv(PropertyInfo *param_1)

{
  Node::_validate_property(param_1);
  CanvasItem::_validate_property(param_1);
  if ((code *)PTR__validate_property_00113028 == CanvasItem::_validate_property) {
    return;
  }
  Control::_validate_property(param_1);
  return;
}



/* HBoxContainer::_validate_propertyv(PropertyInfo&) const */

void HBoxContainer::_validate_propertyv(PropertyInfo *param_1)

{
  Node::_validate_property(param_1);
  CanvasItem::_validate_property(param_1);
  Control::_validate_property(param_1);
  if ((code *)PTR__validate_property_00113030 == Control::_validate_property) {
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
  if ((code *)PTR__validate_property_00113030 == Control::_validate_property) {
    return;
  }
  BoxContainer::_validate_property(param_1);
  return;
}



/* EditorPropertyVector3i::_setv(StringName const&, Variant const&) */

undefined8 EditorPropertyVector3i::_setv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  uVar1 = CanvasItem::_set(param_1,param_2);
  if ((char)uVar1 == '\0') {
    if ((code *)PTR__set_00113038 != CanvasItem::_set) {
      uVar1 = Control::_set(param_1,param_2);
      return uVar1;
    }
    uVar1 = 0;
  }
  return uVar1;
}



/* EditorPropertyVector4::_setv(StringName const&, Variant const&) */

undefined8 EditorPropertyVector4::_setv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  uVar1 = CanvasItem::_set(param_1,param_2);
  if ((char)uVar1 == '\0') {
    if ((code *)PTR__set_00113038 != CanvasItem::_set) {
      uVar1 = Control::_set(param_1,param_2);
      return uVar1;
    }
    uVar1 = 0;
  }
  return uVar1;
}



/* EditorPropertyVectorN::_setv(StringName const&, Variant const&) */

undefined8 EditorPropertyVectorN::_setv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  uVar1 = CanvasItem::_set(param_1,param_2);
  if ((char)uVar1 == '\0') {
    if ((code *)PTR__set_00113038 != CanvasItem::_set) {
      uVar1 = Control::_set(param_1,param_2);
      return uVar1;
    }
    uVar1 = 0;
  }
  return uVar1;
}



/* EditorPropertyVector2i::_setv(StringName const&, Variant const&) */

undefined8 EditorPropertyVector2i::_setv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  uVar1 = CanvasItem::_set(param_1,param_2);
  if ((char)uVar1 == '\0') {
    if ((code *)PTR__set_00113038 != CanvasItem::_set) {
      uVar1 = Control::_set(param_1,param_2);
      return uVar1;
    }
    uVar1 = 0;
  }
  return uVar1;
}



/* EditorPropertyVector4i::_setv(StringName const&, Variant const&) */

undefined8 EditorPropertyVector4i::_setv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  uVar1 = CanvasItem::_set(param_1,param_2);
  if ((char)uVar1 == '\0') {
    if ((code *)PTR__set_00113038 != CanvasItem::_set) {
      uVar1 = Control::_set(param_1,param_2);
      return uVar1;
    }
    uVar1 = 0;
  }
  return uVar1;
}



/* EditorPropertyVector2::_setv(StringName const&, Variant const&) */

undefined8 EditorPropertyVector2::_setv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  uVar1 = CanvasItem::_set(param_1,param_2);
  if ((char)uVar1 == '\0') {
    if ((code *)PTR__set_00113038 != CanvasItem::_set) {
      uVar1 = Control::_set(param_1,param_2);
      return uVar1;
    }
    uVar1 = 0;
  }
  return uVar1;
}



/* EditorPropertyVector3::_setv(StringName const&, Variant const&) */

undefined8 EditorPropertyVector3::_setv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  uVar1 = CanvasItem::_set(param_1,param_2);
  if ((char)uVar1 == '\0') {
    if ((code *)PTR__set_00113038 != CanvasItem::_set) {
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
    if ((code *)PTR__set_00113038 != CanvasItem::_set) {
      uVar1 = Control::_set(param_1,param_2);
      return uVar1;
    }
    uVar1 = 0;
  }
  return uVar1;
}



/* VBoxContainer::_setv(StringName const&, Variant const&) */

undefined8 VBoxContainer::_setv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  uVar1 = CanvasItem::_set(param_1,param_2);
  if ((char)uVar1 == '\0') {
    if ((code *)PTR__set_00113038 != CanvasItem::_set) {
      uVar1 = Control::_set(param_1,param_2);
      return uVar1;
    }
    uVar1 = 0;
  }
  return uVar1;
}



/* EditorPropertyVectorN::is_class_ptr(void*) const */

uint EditorPropertyVectorN::is_class_ptr(void *param_1)

{
  uint uVar1;
  undefined4 in_EDX;
  undefined4 *in_RSI;
  
  uVar1 = 1;
  if (in_RSI != &get_class_ptr_static()::ptr) {
    uVar1 = (uint)CONCAT71(0x10f2,in_RSI == &Container::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x10f1,in_RSI == &EditorProperty::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x10f2,in_RSI == &Control::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x10f2,in_RSI == &CanvasItem::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x10f2,in_RSI == &Node::get_class_ptr_static()::ptr) |
            CONCAT31((int3)((uint)in_EDX >> 8),in_RSI == &Object::get_class_ptr_static()::ptr);
  }
  return uVar1;
}



/* EditorPropertyVector3::is_class_ptr(void*) const */

ulong EditorPropertyVector3::is_class_ptr(void *param_1)

{
  undefined4 in_EDX;
  undefined4 *in_RSI;
  
  if (in_RSI == &EditorPropertyVectorN::get_class_ptr_static()::ptr ||
      in_RSI == &get_class_ptr_static()::ptr) {
    return CONCAT71(0x10f1,in_RSI == &EditorPropertyVectorN::get_class_ptr_static()::ptr ||
                           in_RSI == &get_class_ptr_static()::ptr);
  }
  return (ulong)((uint)CONCAT71(0x10f2,in_RSI == &Container::get_class_ptr_static()::ptr) |
                 (uint)CONCAT71(0x10f1,in_RSI == &EditorProperty::get_class_ptr_static()::ptr) |
                 (uint)CONCAT71(0x10f2,in_RSI == &Control::get_class_ptr_static()::ptr) |
                 (uint)CONCAT71(0x10f2,in_RSI == &CanvasItem::get_class_ptr_static()::ptr) |
                 (uint)CONCAT71(0x10f2,in_RSI == &Node::get_class_ptr_static()::ptr) |
                CONCAT31((int3)((uint)in_EDX >> 8),in_RSI == &Object::get_class_ptr_static()::ptr));
}



/* EditorPropertyVector2::is_class_ptr(void*) const */

ulong EditorPropertyVector2::is_class_ptr(void *param_1)

{
  undefined4 in_EDX;
  undefined4 *in_RSI;
  
  if (in_RSI == &EditorPropertyVectorN::get_class_ptr_static()::ptr ||
      in_RSI == &get_class_ptr_static()::ptr) {
    return CONCAT71(0x10f1,in_RSI == &EditorPropertyVectorN::get_class_ptr_static()::ptr ||
                           in_RSI == &get_class_ptr_static()::ptr);
  }
  return (ulong)((uint)CONCAT71(0x10f2,in_RSI == &Container::get_class_ptr_static()::ptr) |
                 (uint)CONCAT71(0x10f1,in_RSI == &EditorProperty::get_class_ptr_static()::ptr) |
                 (uint)CONCAT71(0x10f2,in_RSI == &Control::get_class_ptr_static()::ptr) |
                 (uint)CONCAT71(0x10f2,in_RSI == &CanvasItem::get_class_ptr_static()::ptr) |
                 (uint)CONCAT71(0x10f2,in_RSI == &Node::get_class_ptr_static()::ptr) |
                CONCAT31((int3)((uint)in_EDX >> 8),in_RSI == &Object::get_class_ptr_static()::ptr));
}



/* EditorPropertyVector4::is_class_ptr(void*) const */

ulong EditorPropertyVector4::is_class_ptr(void *param_1)

{
  undefined4 in_EDX;
  undefined4 *in_RSI;
  
  if (in_RSI == &EditorPropertyVectorN::get_class_ptr_static()::ptr ||
      in_RSI == &get_class_ptr_static()::ptr) {
    return CONCAT71(0x10f1,in_RSI == &EditorPropertyVectorN::get_class_ptr_static()::ptr ||
                           in_RSI == &get_class_ptr_static()::ptr);
  }
  return (ulong)((uint)CONCAT71(0x10f2,in_RSI == &Container::get_class_ptr_static()::ptr) |
                 (uint)CONCAT71(0x10f1,in_RSI == &EditorProperty::get_class_ptr_static()::ptr) |
                 (uint)CONCAT71(0x10f2,in_RSI == &Control::get_class_ptr_static()::ptr) |
                 (uint)CONCAT71(0x10f2,in_RSI == &CanvasItem::get_class_ptr_static()::ptr) |
                 (uint)CONCAT71(0x10f2,in_RSI == &Node::get_class_ptr_static()::ptr) |
                CONCAT31((int3)((uint)in_EDX >> 8),in_RSI == &Object::get_class_ptr_static()::ptr));
}



/* EditorPropertyVector4i::is_class_ptr(void*) const */

ulong EditorPropertyVector4i::is_class_ptr(void *param_1)

{
  undefined4 in_EDX;
  undefined4 *in_RSI;
  
  if (in_RSI == &EditorPropertyVectorN::get_class_ptr_static()::ptr ||
      in_RSI == &get_class_ptr_static()::ptr) {
    return CONCAT71(0x10f1,in_RSI == &EditorPropertyVectorN::get_class_ptr_static()::ptr ||
                           in_RSI == &get_class_ptr_static()::ptr);
  }
  return (ulong)((uint)CONCAT71(0x10f2,in_RSI == &Container::get_class_ptr_static()::ptr) |
                 (uint)CONCAT71(0x10f1,in_RSI == &EditorProperty::get_class_ptr_static()::ptr) |
                 (uint)CONCAT71(0x10f2,in_RSI == &Control::get_class_ptr_static()::ptr) |
                 (uint)CONCAT71(0x10f2,in_RSI == &CanvasItem::get_class_ptr_static()::ptr) |
                 (uint)CONCAT71(0x10f2,in_RSI == &Node::get_class_ptr_static()::ptr) |
                CONCAT31((int3)((uint)in_EDX >> 8),in_RSI == &Object::get_class_ptr_static()::ptr));
}



/* EditorPropertyVector2i::is_class_ptr(void*) const */

ulong EditorPropertyVector2i::is_class_ptr(void *param_1)

{
  undefined4 in_EDX;
  undefined4 *in_RSI;
  
  if (in_RSI == &EditorPropertyVectorN::get_class_ptr_static()::ptr ||
      in_RSI == &get_class_ptr_static()::ptr) {
    return CONCAT71(0x10f1,in_RSI == &EditorPropertyVectorN::get_class_ptr_static()::ptr ||
                           in_RSI == &get_class_ptr_static()::ptr);
  }
  return (ulong)((uint)CONCAT71(0x10f2,in_RSI == &Container::get_class_ptr_static()::ptr) |
                 (uint)CONCAT71(0x10f1,in_RSI == &EditorProperty::get_class_ptr_static()::ptr) |
                 (uint)CONCAT71(0x10f2,in_RSI == &Control::get_class_ptr_static()::ptr) |
                 (uint)CONCAT71(0x10f2,in_RSI == &CanvasItem::get_class_ptr_static()::ptr) |
                 (uint)CONCAT71(0x10f2,in_RSI == &Node::get_class_ptr_static()::ptr) |
                CONCAT31((int3)((uint)in_EDX >> 8),in_RSI == &Object::get_class_ptr_static()::ptr));
}



/* EditorPropertyVector3i::is_class_ptr(void*) const */

ulong EditorPropertyVector3i::is_class_ptr(void *param_1)

{
  undefined4 in_EDX;
  undefined4 *in_RSI;
  
  if (in_RSI == &EditorPropertyVectorN::get_class_ptr_static()::ptr ||
      in_RSI == &get_class_ptr_static()::ptr) {
    return CONCAT71(0x10f1,in_RSI == &EditorPropertyVectorN::get_class_ptr_static()::ptr ||
                           in_RSI == &get_class_ptr_static()::ptr);
  }
  return (ulong)((uint)CONCAT71(0x10f2,in_RSI == &Container::get_class_ptr_static()::ptr) |
                 (uint)CONCAT71(0x10f1,in_RSI == &EditorProperty::get_class_ptr_static()::ptr) |
                 (uint)CONCAT71(0x10f2,in_RSI == &Control::get_class_ptr_static()::ptr) |
                 (uint)CONCAT71(0x10f2,in_RSI == &CanvasItem::get_class_ptr_static()::ptr) |
                 (uint)CONCAT71(0x10f2,in_RSI == &Node::get_class_ptr_static()::ptr) |
                CONCAT31((int3)((uint)in_EDX >> 8),in_RSI == &Object::get_class_ptr_static()::ptr));
}



/* WARNING: Removing unreachable block (ram,0x00104928) */
/* EditorPropertyVector3::_getv(StringName const&, Variant&) const */

undefined8 EditorPropertyVector3::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if (((code *)PTR__get_00113040 != CanvasItem::_get) &&
     (uVar1 = Control::_get(param_1,param_2), (char)uVar1 != '\0')) {
    return uVar1;
  }
  uVar1 = CanvasItem::_get(param_1,param_2);
  return uVar1;
}



/* WARNING: Removing unreachable block (ram,0x00104998) */
/* EditorPropertyVector4::_getv(StringName const&, Variant&) const */

undefined8 EditorPropertyVector4::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if (((code *)PTR__get_00113040 != CanvasItem::_get) &&
     (uVar1 = Control::_get(param_1,param_2), (char)uVar1 != '\0')) {
    return uVar1;
  }
  uVar1 = CanvasItem::_get(param_1,param_2);
  return uVar1;
}



/* WARNING: Removing unreachable block (ram,0x00104a08) */
/* EditorPropertyVectorN::_getv(StringName const&, Variant&) const */

undefined8 EditorPropertyVectorN::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if (((code *)PTR__get_00113040 != CanvasItem::_get) &&
     (uVar1 = Control::_get(param_1,param_2), (char)uVar1 != '\0')) {
    return uVar1;
  }
  uVar1 = CanvasItem::_get(param_1,param_2);
  return uVar1;
}



/* WARNING: Removing unreachable block (ram,0x00104a78) */
/* EditorPropertyVector2i::_getv(StringName const&, Variant&) const */

undefined8 EditorPropertyVector2i::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if (((code *)PTR__get_00113040 != CanvasItem::_get) &&
     (uVar1 = Control::_get(param_1,param_2), (char)uVar1 != '\0')) {
    return uVar1;
  }
  uVar1 = CanvasItem::_get(param_1,param_2);
  return uVar1;
}



/* WARNING: Removing unreachable block (ram,0x00104ae8) */
/* EditorPropertyVector2::_getv(StringName const&, Variant&) const */

undefined8 EditorPropertyVector2::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if (((code *)PTR__get_00113040 != CanvasItem::_get) &&
     (uVar1 = Control::_get(param_1,param_2), (char)uVar1 != '\0')) {
    return uVar1;
  }
  uVar1 = CanvasItem::_get(param_1,param_2);
  return uVar1;
}



/* WARNING: Removing unreachable block (ram,0x00104b58) */
/* EditorPropertyVector4i::_getv(StringName const&, Variant&) const */

undefined8 EditorPropertyVector4i::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if (((code *)PTR__get_00113040 != CanvasItem::_get) &&
     (uVar1 = Control::_get(param_1,param_2), (char)uVar1 != '\0')) {
    return uVar1;
  }
  uVar1 = CanvasItem::_get(param_1,param_2);
  return uVar1;
}



/* WARNING: Removing unreachable block (ram,0x00104bc8) */
/* VBoxContainer::_getv(StringName const&, Variant&) const */

undefined8 VBoxContainer::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if (((code *)PTR__get_00113040 != CanvasItem::_get) &&
     (uVar1 = Control::_get(param_1,param_2), (char)uVar1 != '\0')) {
    return uVar1;
  }
  uVar1 = CanvasItem::_get(param_1,param_2);
  return uVar1;
}



/* WARNING: Removing unreachable block (ram,0x00104c38) */
/* HBoxContainer::_getv(StringName const&, Variant&) const */

undefined8 HBoxContainer::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if (((code *)PTR__get_00113040 != CanvasItem::_get) &&
     (uVar1 = Control::_get(param_1,param_2), (char)uVar1 != '\0')) {
    return uVar1;
  }
  uVar1 = CanvasItem::_get(param_1,param_2);
  return uVar1;
}



/* WARNING: Removing unreachable block (ram,0x00104ca8) */
/* EditorPropertyVector3i::_getv(StringName const&, Variant&) const */

undefined8 EditorPropertyVector3i::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if (((code *)PTR__get_00113040 != CanvasItem::_get) &&
     (uVar1 = Control::_get(param_1,param_2), (char)uVar1 != '\0')) {
    return uVar1;
  }
  uVar1 = CanvasItem::_get(param_1,param_2);
  return uVar1;
}



/* VBoxContainer::~VBoxContainer() */

void __thiscall VBoxContainer::~VBoxContainer(VBoxContainer *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(code **)this = Container::_notification;
  if (bVar1) {
    if (*(long *)(this + 0x9e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00104d10;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_00104d10:
  Control::~Control((Control *)this);
  return;
}



/* HBoxContainer::~HBoxContainer() */

void __thiscall HBoxContainer::~HBoxContainer(HBoxContainer *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(code **)this = Container::_notification;
  if (bVar1) {
    if (*(long *)(this + 0x9e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00104d70;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_00104d70:
  Control::~Control((Control *)this);
  return;
}



/* VBoxContainer::~VBoxContainer() */

void __thiscall VBoxContainer::~VBoxContainer(VBoxContainer *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(code **)this = Container::_notification;
  if (bVar1) {
    if (*(long *)(this + 0x9e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00104dd0;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_00104dd0:
  Control::~Control((Control *)this);
  operator_delete(this,0xa10);
  return;
}



/* HBoxContainer::~HBoxContainer() */

void __thiscall HBoxContainer::~HBoxContainer(HBoxContainer *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(code **)this = Container::_notification;
  if (bVar1) {
    if (*(long *)(this + 0x9e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00104e40;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_00104e40:
  Control::~Control((Control *)this);
  operator_delete(this,0xa10);
  return;
}



/* EditorPropertyVector4i::_get_class_namev() const */

undefined8 * EditorPropertyVector4i::_get_class_namev(void)

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
LAB_00104ea3:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00104ea3;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"EditorPropertyVector4i");
      goto LAB_00104f0e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"EditorPropertyVector4i");
LAB_00104f0e:
  return &_get_class_namev()::_class_name_static;
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
LAB_00104f93:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00104f93;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"VBoxContainer");
      goto LAB_00104ffe;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"VBoxContainer");
LAB_00104ffe:
  return &_get_class_namev()::_class_name_static;
}



/* EditorPropertyVector3::_get_class_namev() const */

undefined8 * EditorPropertyVector3::_get_class_namev(void)

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
LAB_00105083:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00105083;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"EditorPropertyVector3");
      goto LAB_001050ee;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"EditorPropertyVector3");
LAB_001050ee:
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
LAB_00105173:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00105173;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"HBoxContainer");
      goto LAB_001051de;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"HBoxContainer");
LAB_001051de:
  return &_get_class_namev()::_class_name_static;
}



/* EditorPropertyVector2i::_get_class_namev() const */

undefined8 * EditorPropertyVector2i::_get_class_namev(void)

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
LAB_00105263:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00105263;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"EditorPropertyVector2i");
      goto LAB_001052ce;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"EditorPropertyVector2i");
LAB_001052ce:
  return &_get_class_namev()::_class_name_static;
}



/* EditorPropertyVectorN::_get_class_namev() const */

undefined8 * EditorPropertyVectorN::_get_class_namev(void)

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
LAB_00105353:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00105353;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"EditorPropertyVectorN");
      goto LAB_001053be;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"EditorPropertyVectorN");
LAB_001053be:
  return &_get_class_namev()::_class_name_static;
}



/* EditorPropertyVector4::_get_class_namev() const */

undefined8 * EditorPropertyVector4::_get_class_namev(void)

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
LAB_00105443:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00105443;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"EditorPropertyVector4");
      goto LAB_001054ae;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"EditorPropertyVector4");
LAB_001054ae:
  return &_get_class_namev()::_class_name_static;
}



/* EditorPropertyVector2::_get_class_namev() const */

undefined8 * EditorPropertyVector2::_get_class_namev(void)

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
LAB_00105533:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00105533;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"EditorPropertyVector2");
      goto LAB_0010559e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"EditorPropertyVector2");
LAB_0010559e:
  return &_get_class_namev()::_class_name_static;
}



/* VBoxContainer::_notificationv(int, bool) */

void __thiscall VBoxContainer::_notificationv(VBoxContainer *this,int param_1,bool param_2)

{
  int iVar1;
  
  iVar1 = (int)this;
  if (param_2) {
    if ((code *)PTR__notification_00113048 != Container::_notification) {
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
  if ((code *)PTR__notification_00113048 == Container::_notification) {
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
    if ((code *)PTR__notification_00113048 != Container::_notification) {
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
  if ((code *)PTR__notification_00113048 == Container::_notification) {
    return;
  }
  BoxContainer::_notification(iVar1);
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



/* Callable create_custom_callable_function_pointer<EditorPropertyVectorN,
   bool>(EditorPropertyVectorN*, char const*, void (EditorPropertyVectorN::*)(bool)) */

EditorPropertyVectorN *
create_custom_callable_function_pointer<EditorPropertyVectorN,bool>
          (EditorPropertyVectorN *param_1,char *param_2,_func_void_bool *param_3)

{
  undefined8 uVar1;
  CallableCustom *this;
  undefined8 in_RCX;
  undefined8 in_R8;
  
  this = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(this);
  *(undefined **)(this + 0x20) = &_LC11;
  *(undefined1 (*) [16])(this + 0x30) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined ***)this = &PTR_hash_0010ef78;
  uVar1 = *(undefined8 *)(param_2 + 0x60);
  *(char **)(this + 0x28) = param_2;
  *(undefined8 *)(this + 0x30) = uVar1;
  *(undefined8 *)(this + 0x38) = in_RCX;
  *(undefined8 *)(this + 0x40) = in_R8;
  *(undefined8 *)(this + 0x10) = 0;
  CallableCustomMethodPointerBase::_setup((uint *)this,(int)this + 0x28);
  *(_func_void_bool **)(this + 0x20) = param_3 + 1;
  Callable::Callable((Callable *)param_1,this);
  return param_1;
}



/* Callable Callable::bind<bool>(bool) const */

Variant ** Callable::bind<bool>(bool param_1)

{
  char cVar1;
  bool in_DL;
  int in_ESI;
  undefined7 in_register_00000039;
  long in_FS_OFFSET;
  int local_58 [6];
  undefined8 local_40;
  undefined1 local_38 [16];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  Variant::Variant((Variant *)local_58,in_DL);
  local_40 = 0;
  local_38 = (undefined1  [16])0x0;
  Callable::bindp((Variant **)CONCAT71(in_register_00000039,param_1),in_ESI);
  if (Variant::needs_deinit[(int)local_40] == '\0') {
    cVar1 = Variant::needs_deinit[local_58[0]];
  }
  else {
    Variant::_clear_internal();
    cVar1 = Variant::needs_deinit[local_58[0]];
  }
  if (cVar1 != '\0') {
    Variant::_clear_internal();
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return (Variant **)CONCAT71(in_register_00000039,param_1);
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
              if ((code *)PTR__bind_methods_00113010 != Node::_bind_methods) {
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
            if ((code *)_GLOBAL_OFFSET_TABLE_ != Object::_bind_compatibility_methods) {
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
      if ((code *)PTR__bind_methods_00113050 != Container::_bind_methods) {
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



/* WARNING: Removing unreachable block (ram,0x001062a0) */
/* String vformat<String, StringName>(String const&, String const, StringName const) */

undefined8 *
vformat<String,StringName>(undefined8 *param_1,bool *param_2,String *param_3,StringName *param_4)

{
  Variant *pVVar1;
  Variant *pVVar2;
  int iVar3;
  long in_FS_OFFSET;
  Array local_d0 [8];
  undefined8 local_c8 [8];
  Variant local_88 [24];
  Variant local_70 [24];
  undefined8 local_58;
  undefined1 local_50 [16];
  long local_40 [2];
  
  local_40[0] = *(long *)(in_FS_OFFSET + 0x28);
  Variant::Variant(local_88,param_3);
  Variant::Variant(local_70,param_4);
  local_58 = 0;
  local_50 = (undefined1  [16])0x0;
  Array::Array(local_d0);
  iVar3 = (int)local_d0;
  Array::resize(iVar3);
  pVVar2 = (Variant *)Array::operator[](iVar3);
  Variant::operator=(pVVar2,local_88);
  pVVar2 = (Variant *)Array::operator[](iVar3);
  Variant::operator=(pVVar2,local_70);
  String::sprintf((Array *)local_c8,param_2);
  *param_1 = local_c8[0];
  local_c8[0] = 0;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_c8);
  pVVar2 = (Variant *)local_40;
  Array::~Array(local_d0);
  do {
    pVVar1 = pVVar2 + -0x18;
    pVVar2 = pVVar2 + -0x18;
    if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
      Variant::_clear_internal();
    }
  } while (pVVar2 != local_88);
  if (local_40[0] != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* EditorProperty::~EditorProperty() */

void __thiscall EditorProperty::~EditorProperty(EditorProperty *this)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  void *pvVar4;
  bool bVar5;
  
  bVar5 = StringName::configured != '\0';
  *(code **)this = Control::get_editor_theme_icon;
  if (bVar5) {
    if (*(long *)(this + 0xb38) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010644d;
    }
    if (*(long *)(this + 0xb20) != 0) {
      StringName::unref();
    }
  }
LAB_0010644d:
  pvVar4 = *(void **)(this + 0xaf8);
  if (pvVar4 != (void *)0x0) {
    if (*(int *)(this + 0xb1c) != 0) {
      uVar2 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0xb18) * 4);
      if (uVar2 == 0) {
        *(undefined4 *)(this + 0xb1c) = 0;
        *(undefined1 (*) [16])(this + 0xb08) = (undefined1  [16])0x0;
      }
      else {
        lVar3 = 0;
        do {
          if (*(int *)(*(long *)(this + 0xb00) + lVar3) != 0) {
            pvVar4 = *(void **)((long)pvVar4 + lVar3 * 2);
            *(int *)(*(long *)(this + 0xb00) + lVar3) = 0;
            if (Variant::needs_deinit[*(int *)((long)pvVar4 + 0x18)] != '\0') {
              Variant::_clear_internal();
            }
            if ((StringName::configured != '\0') && (*(long *)((long)pvVar4 + 0x10) != 0)) {
              StringName::unref();
            }
            Memory::free_static(pvVar4,false);
            pvVar4 = *(void **)(this + 0xaf8);
            *(undefined8 *)((long)pvVar4 + lVar3 * 2) = 0;
          }
          lVar3 = lVar3 + 4;
        } while (lVar3 != (ulong)uVar2 << 2);
        *(undefined4 *)(this + 0xb1c) = 0;
        *(undefined1 (*) [16])(this + 0xb08) = (undefined1  [16])0x0;
        if (pvVar4 == (void *)0x0) goto LAB_00106522;
      }
    }
    Memory::free_static(pvVar4,false);
    Memory::free_static(*(void **)(this + 0xb00),false);
  }
LAB_00106522:
  if (*(long *)(this + 0xad0) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0xad0) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar3 = *(long *)(this + 0xad0);
      *(undefined8 *)(this + 0xad0) = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0xa28));
  CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0xa20));
  if ((StringName::configured != '\0') && (*(long *)(this + 0xa18) != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0xa00));
  bVar5 = StringName::configured != '\0';
  *(code **)this = Container::_notification;
  if (bVar5) {
    if (*(long *)(this + 0x9e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001065c5;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_001065c5:
  Control::~Control((Control *)this);
  return;
}



/* EditorProperty::~EditorProperty() */

void __thiscall EditorProperty::~EditorProperty(EditorProperty *this)

{
  ~EditorProperty(this);
  operator_delete(this,0xb58);
  return;
}



/* EditorPropertyVectorN::~EditorPropertyVectorN() */

void __thiscall EditorPropertyVectorN::~EditorPropertyVectorN(EditorPropertyVectorN *this)

{
  long *plVar1;
  long lVar2;
  
  *(undefined ***)this = &PTR__initialize_classv_0010eb18;
  if (*(long *)(this + 0xb80) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0xb80) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0xb80);
      *(undefined8 *)(this + 0xb80) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (*(long *)(this + 0xb68) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0xb68) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0xb68);
      *(undefined8 *)(this + 0xb68) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
      EditorProperty::~EditorProperty((EditorProperty *)this);
      return;
    }
  }
  EditorProperty::~EditorProperty((EditorProperty *)this);
  return;
}



/* EditorPropertyVector4i::~EditorPropertyVector4i() */

void __thiscall EditorPropertyVector4i::~EditorPropertyVector4i(EditorPropertyVector4i *this)

{
  long *plVar1;
  long lVar2;
  
  *(undefined ***)this = &PTR__initialize_classv_0010eb18;
  if (*(long *)(this + 0xb80) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0xb80) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0xb80);
      *(undefined8 *)(this + 0xb80) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (*(long *)(this + 0xb68) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0xb68) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0xb68);
      *(undefined8 *)(this + 0xb68) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
      EditorProperty::~EditorProperty((EditorProperty *)this);
      return;
    }
  }
  EditorProperty::~EditorProperty((EditorProperty *)this);
  return;
}



/* EditorPropertyVector4::~EditorPropertyVector4() */

void __thiscall EditorPropertyVector4::~EditorPropertyVector4(EditorPropertyVector4 *this)

{
  long *plVar1;
  long lVar2;
  
  *(undefined ***)this = &PTR__initialize_classv_0010eb18;
  if (*(long *)(this + 0xb80) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0xb80) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0xb80);
      *(undefined8 *)(this + 0xb80) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (*(long *)(this + 0xb68) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0xb68) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0xb68);
      *(undefined8 *)(this + 0xb68) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
      EditorProperty::~EditorProperty((EditorProperty *)this);
      return;
    }
  }
  EditorProperty::~EditorProperty((EditorProperty *)this);
  return;
}



/* EditorPropertyVector2::~EditorPropertyVector2() */

void __thiscall EditorPropertyVector2::~EditorPropertyVector2(EditorPropertyVector2 *this)

{
  long *plVar1;
  long lVar2;
  
  *(undefined ***)this = &PTR__initialize_classv_0010eb18;
  if (*(long *)(this + 0xb80) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0xb80) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0xb80);
      *(undefined8 *)(this + 0xb80) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (*(long *)(this + 0xb68) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0xb68) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0xb68);
      *(undefined8 *)(this + 0xb68) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
      EditorProperty::~EditorProperty((EditorProperty *)this);
      return;
    }
  }
  EditorProperty::~EditorProperty((EditorProperty *)this);
  return;
}



/* EditorPropertyVector3::~EditorPropertyVector3() */

void __thiscall EditorPropertyVector3::~EditorPropertyVector3(EditorPropertyVector3 *this)

{
  long *plVar1;
  long lVar2;
  
  *(undefined ***)this = &PTR__initialize_classv_0010eb18;
  if (*(long *)(this + 0xb80) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0xb80) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0xb80);
      *(undefined8 *)(this + 0xb80) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (*(long *)(this + 0xb68) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0xb68) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0xb68);
      *(undefined8 *)(this + 0xb68) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
      EditorProperty::~EditorProperty((EditorProperty *)this);
      return;
    }
  }
  EditorProperty::~EditorProperty((EditorProperty *)this);
  return;
}



/* EditorPropertyVector3i::~EditorPropertyVector3i() */

void __thiscall EditorPropertyVector3i::~EditorPropertyVector3i(EditorPropertyVector3i *this)

{
  long *plVar1;
  long lVar2;
  
  *(undefined ***)this = &PTR__initialize_classv_0010eb18;
  if (*(long *)(this + 0xb80) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0xb80) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0xb80);
      *(undefined8 *)(this + 0xb80) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (*(long *)(this + 0xb68) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0xb68) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0xb68);
      *(undefined8 *)(this + 0xb68) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
      EditorProperty::~EditorProperty((EditorProperty *)this);
      return;
    }
  }
  EditorProperty::~EditorProperty((EditorProperty *)this);
  return;
}



/* EditorPropertyVector2i::~EditorPropertyVector2i() */

void __thiscall EditorPropertyVector2i::~EditorPropertyVector2i(EditorPropertyVector2i *this)

{
  long *plVar1;
  long lVar2;
  
  *(undefined ***)this = &PTR__initialize_classv_0010eb18;
  if (*(long *)(this + 0xb80) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0xb80) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0xb80);
      *(undefined8 *)(this + 0xb80) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (*(long *)(this + 0xb68) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0xb68) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0xb68);
      *(undefined8 *)(this + 0xb68) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
      EditorProperty::~EditorProperty((EditorProperty *)this);
      return;
    }
  }
  EditorProperty::~EditorProperty((EditorProperty *)this);
  return;
}



/* EditorPropertyVectorN::~EditorPropertyVectorN() */

void __thiscall EditorPropertyVectorN::~EditorPropertyVectorN(EditorPropertyVectorN *this)

{
  long *plVar1;
  long lVar2;
  
  *(undefined ***)this = &PTR__initialize_classv_0010eb18;
  if (*(long *)(this + 0xb80) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0xb80) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0xb80);
      *(undefined8 *)(this + 0xb80) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (*(long *)(this + 0xb68) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0xb68) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0xb68);
      *(undefined8 *)(this + 0xb68) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  EditorProperty::~EditorProperty((EditorProperty *)this);
  operator_delete(this,0xb90);
  return;
}



/* EditorPropertyVector4i::~EditorPropertyVector4i() */

void __thiscall EditorPropertyVector4i::~EditorPropertyVector4i(EditorPropertyVector4i *this)

{
  long *plVar1;
  long lVar2;
  
  *(undefined ***)this = &PTR__initialize_classv_0010eb18;
  if (*(long *)(this + 0xb80) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0xb80) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0xb80);
      *(undefined8 *)(this + 0xb80) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (*(long *)(this + 0xb68) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0xb68) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0xb68);
      *(undefined8 *)(this + 0xb68) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  EditorProperty::~EditorProperty((EditorProperty *)this);
  operator_delete(this,0xb90);
  return;
}



/* EditorPropertyVector3i::~EditorPropertyVector3i() */

void __thiscall EditorPropertyVector3i::~EditorPropertyVector3i(EditorPropertyVector3i *this)

{
  long *plVar1;
  long lVar2;
  
  *(undefined ***)this = &PTR__initialize_classv_0010eb18;
  if (*(long *)(this + 0xb80) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0xb80) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0xb80);
      *(undefined8 *)(this + 0xb80) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (*(long *)(this + 0xb68) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0xb68) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0xb68);
      *(undefined8 *)(this + 0xb68) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  EditorProperty::~EditorProperty((EditorProperty *)this);
  operator_delete(this,0xb90);
  return;
}



/* EditorPropertyVector2i::~EditorPropertyVector2i() */

void __thiscall EditorPropertyVector2i::~EditorPropertyVector2i(EditorPropertyVector2i *this)

{
  long *plVar1;
  long lVar2;
  
  *(undefined ***)this = &PTR__initialize_classv_0010eb18;
  if (*(long *)(this + 0xb80) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0xb80) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0xb80);
      *(undefined8 *)(this + 0xb80) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (*(long *)(this + 0xb68) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0xb68) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0xb68);
      *(undefined8 *)(this + 0xb68) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  EditorProperty::~EditorProperty((EditorProperty *)this);
  operator_delete(this,0xb90);
  return;
}



/* EditorPropertyVector2::~EditorPropertyVector2() */

void __thiscall EditorPropertyVector2::~EditorPropertyVector2(EditorPropertyVector2 *this)

{
  long *plVar1;
  long lVar2;
  
  *(undefined ***)this = &PTR__initialize_classv_0010eb18;
  if (*(long *)(this + 0xb80) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0xb80) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0xb80);
      *(undefined8 *)(this + 0xb80) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (*(long *)(this + 0xb68) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0xb68) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0xb68);
      *(undefined8 *)(this + 0xb68) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  EditorProperty::~EditorProperty((EditorProperty *)this);
  operator_delete(this,0xb90);
  return;
}



/* EditorPropertyVector3::~EditorPropertyVector3() */

void __thiscall EditorPropertyVector3::~EditorPropertyVector3(EditorPropertyVector3 *this)

{
  long *plVar1;
  long lVar2;
  
  *(undefined ***)this = &PTR__initialize_classv_0010eb18;
  if (*(long *)(this + 0xb80) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0xb80) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0xb80);
      *(undefined8 *)(this + 0xb80) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (*(long *)(this + 0xb68) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0xb68) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0xb68);
      *(undefined8 *)(this + 0xb68) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  EditorProperty::~EditorProperty((EditorProperty *)this);
  operator_delete(this,0xb90);
  return;
}



/* EditorPropertyVector4::~EditorPropertyVector4() */

void __thiscall EditorPropertyVector4::~EditorPropertyVector4(EditorPropertyVector4 *this)

{
  long *plVar1;
  long lVar2;
  
  *(undefined ***)this = &PTR__initialize_classv_0010eb18;
  if (*(long *)(this + 0xb80) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0xb80) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0xb80);
      *(undefined8 *)(this + 0xb80) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (*(long *)(this + 0xb68) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0xb68) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0xb68);
      *(undefined8 *)(this + 0xb68) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  EditorProperty::~EditorProperty((EditorProperty *)this);
  operator_delete(this,0xb90);
  return;
}



/* WARNING: Removing unreachable block (ram,0x00106ef0) */
/* EditorPropertyVectorN::_notificationv(int, bool) */

void __thiscall
EditorPropertyVectorN::_notificationv(EditorPropertyVectorN *this,int param_1,bool param_2)

{
  int iVar1;
  
  iVar1 = (int)this;
  if (param_2) {
    _notification(this,param_1);
    if ((code *)PTR__notification_00113058 != Container::_notification) {
      EditorProperty::_notification(iVar1);
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
  if ((code *)PTR__notification_00113058 != Container::_notification) {
    EditorProperty::_notification(iVar1);
  }
  _notification(this,param_1);
  return;
}



/* EditorPropertyVector2::_notificationv(int, bool) */

void __thiscall
EditorPropertyVector2::_notificationv(EditorPropertyVector2 *this,int param_1,bool param_2)

{
  if (param_2) {
    EditorPropertyVectorN::_notificationv((EditorPropertyVectorN *)this,param_1,true);
    return;
  }
  EditorPropertyVectorN::_notificationv((EditorPropertyVectorN *)this,param_1,false);
  return;
}



/* EditorPropertyVector2i::_notificationv(int, bool) */

void __thiscall
EditorPropertyVector2i::_notificationv(EditorPropertyVector2i *this,int param_1,bool param_2)

{
  if (param_2) {
    EditorPropertyVectorN::_notificationv((EditorPropertyVectorN *)this,param_1,true);
    return;
  }
  EditorPropertyVectorN::_notificationv((EditorPropertyVectorN *)this,param_1,false);
  return;
}



/* EditorPropertyVector3::_notificationv(int, bool) */

void __thiscall
EditorPropertyVector3::_notificationv(EditorPropertyVector3 *this,int param_1,bool param_2)

{
  if (param_2) {
    EditorPropertyVectorN::_notificationv((EditorPropertyVectorN *)this,param_1,true);
    return;
  }
  EditorPropertyVectorN::_notificationv((EditorPropertyVectorN *)this,param_1,false);
  return;
}



/* EditorPropertyVector3i::_notificationv(int, bool) */

void __thiscall
EditorPropertyVector3i::_notificationv(EditorPropertyVector3i *this,int param_1,bool param_2)

{
  if (param_2) {
    EditorPropertyVectorN::_notificationv((EditorPropertyVectorN *)this,param_1,true);
    return;
  }
  EditorPropertyVectorN::_notificationv((EditorPropertyVectorN *)this,param_1,false);
  return;
}



/* EditorPropertyVector4::_notificationv(int, bool) */

void __thiscall
EditorPropertyVector4::_notificationv(EditorPropertyVector4 *this,int param_1,bool param_2)

{
  if (param_2) {
    EditorPropertyVectorN::_notificationv((EditorPropertyVectorN *)this,param_1,true);
    return;
  }
  EditorPropertyVectorN::_notificationv((EditorPropertyVectorN *)this,param_1,false);
  return;
}



/* EditorPropertyVector4i::_notificationv(int, bool) */

void __thiscall
EditorPropertyVector4i::_notificationv(EditorPropertyVector4i *this,int param_1,bool param_2)

{
  if (param_2) {
    EditorPropertyVectorN::_notificationv((EditorPropertyVectorN *)this,param_1,true);
    return;
  }
  EditorPropertyVectorN::_notificationv((EditorPropertyVectorN *)this,param_1,false);
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



/* EditorPropertyVector4i::get_class() const */

void EditorPropertyVector4i::get_class(void)

{
  long lVar1;
  long lVar2;
  char *__s;
  long in_RSI;
  String *in_RDI;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(in_RSI + 8) == 0) {
    *(undefined8 *)in_RDI = 0;
    String::parse_latin1(in_RDI,"EditorPropertyVector4i");
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
        String::parse_latin1((StrRange *)in_RDI);
      }
    }
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorPropertyVector4::get_class() const */

void EditorPropertyVector4::get_class(void)

{
  long lVar1;
  long lVar2;
  char *__s;
  long in_RSI;
  String *in_RDI;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(in_RSI + 8) == 0) {
    *(undefined8 *)in_RDI = 0;
    String::parse_latin1(in_RDI,"EditorPropertyVector4");
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
        String::parse_latin1((StrRange *)in_RDI);
      }
    }
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorPropertyVector3i::get_class() const */

void EditorPropertyVector3i::get_class(void)

{
  long lVar1;
  long lVar2;
  char *__s;
  long in_RSI;
  String *in_RDI;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(in_RSI + 8) == 0) {
    *(undefined8 *)in_RDI = 0;
    String::parse_latin1(in_RDI,"EditorPropertyVector3i");
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
        String::parse_latin1((StrRange *)in_RDI);
      }
    }
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorPropertyVector3::get_class() const */

void EditorPropertyVector3::get_class(void)

{
  long lVar1;
  long lVar2;
  char *__s;
  long in_RSI;
  String *in_RDI;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(in_RSI + 8) == 0) {
    *(undefined8 *)in_RDI = 0;
    String::parse_latin1(in_RDI,"EditorPropertyVector3");
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
        String::parse_latin1((StrRange *)in_RDI);
      }
    }
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorPropertyVector2i::get_class() const */

void EditorPropertyVector2i::get_class(void)

{
  long lVar1;
  long lVar2;
  char *__s;
  long in_RSI;
  String *in_RDI;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(in_RSI + 8) == 0) {
    *(undefined8 *)in_RDI = 0;
    String::parse_latin1(in_RDI,"EditorPropertyVector2i");
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
        String::parse_latin1((StrRange *)in_RDI);
      }
    }
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorPropertyVector2::get_class() const */

void EditorPropertyVector2::get_class(void)

{
  long lVar1;
  long lVar2;
  char *__s;
  long in_RSI;
  String *in_RDI;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(in_RSI + 8) == 0) {
    *(undefined8 *)in_RDI = 0;
    String::parse_latin1(in_RDI,"EditorPropertyVector2");
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
        String::parse_latin1((StrRange *)in_RDI);
      }
    }
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorPropertyVectorN::get_class() const */

void EditorPropertyVectorN::get_class(void)

{
  long lVar1;
  long lVar2;
  char *__s;
  long in_RSI;
  String *in_RDI;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(in_RSI + 8) == 0) {
    *(undefined8 *)in_RDI = 0;
    String::parse_latin1(in_RDI,"EditorPropertyVectorN");
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
        String::parse_latin1((StrRange *)in_RDI);
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
  String *in_RDI;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(in_RSI + 8) == 0) {
    *(undefined8 *)in_RDI = 0;
    String::parse_latin1(in_RDI,"VBoxContainer");
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
        String::parse_latin1((StrRange *)in_RDI);
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
  String *in_RDI;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(in_RSI + 8) == 0) {
    *(undefined8 *)in_RDI = 0;
    String::parse_latin1(in_RDI,"HBoxContainer");
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
        String::parse_latin1((StrRange *)in_RDI);
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
LAB_00107857:
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
      goto LAB_00107857;
    }
    lVar2 = *(long *)(lVar2 + 8);
  } while( true );
}



/* CallableCustomMethodPointer<EditorPropertyVectorN, void>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<EditorPropertyVectorN,void>::call
          (CallableCustomMethodPointer<EditorPropertyVectorN,void> *this,Variant **param_1,
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
      goto LAB_00107a4f;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] == 0) goto LAB_00107a4f;
    lVar1 = *(long *)(this + 0x28);
    UNRECOVERED_JUMPTABLE = *(code **)(this + 0x38);
    lVar2 = *(long *)(this + 0x40);
    if (param_2 == 0) {
      *(undefined4 *)param_4 = 0;
      if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
        UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar1 + lVar2) + -1);
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00107a28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),uVar5,UNRECOVERED_JUMPTABLE);
        return;
      }
      goto LAB_00107b00;
    }
    *(undefined4 *)param_4 = 3;
    *(undefined4 *)(param_4 + 8) = 0;
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
LAB_00107a4f:
    local_40 = 0;
    String::parse_latin1((String *)&local_40,"\', can\'t call method.");
    uitos((ulong)local_50);
    operator+((char *)local_48,(String *)"Invalid Object id \'");
    String::operator+(local_38,(String *)local_48);
    _err_print_error(&_LC55,"./core/object/callable_method_pointer.h",0x67,
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
LAB_00107b00:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<EditorPropertyVectorN, void, bool>::call(Variant const**, int,
   Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<EditorPropertyVectorN,void,bool>::call
          (CallableCustomMethodPointer<EditorPropertyVectorN,void,bool> *this,Variant **param_1,
          int param_2,Variant *param_3,CallError *param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  char cVar4;
  uint uVar5;
  ulong *puVar6;
  code *UNRECOVERED_JUMPTABLE;
  long in_FS_OFFSET;
  bool bVar7;
  CowData<char32_t> local_50 [8];
  CowData<char32_t> local_48 [8];
  undefined8 local_40;
  String local_38 [8];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar5 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar5 < (uint)ObjectDB::slot_max) {
    while( true ) {
      local_38[0] = (String)0x0;
      LOCK();
      bVar7 = (char)ObjectDB::spin_lock == '\0';
      if (bVar7) {
        ObjectDB::spin_lock._0_1_ = '\x01';
      }
      UNLOCK();
      if (bVar7) break;
      do {
      } while ((char)ObjectDB::spin_lock != '\0');
    }
    puVar6 = (ulong *)((ulong)uVar5 * 0x10 + ObjectDB::object_slots);
    if ((*(ulong *)(this + 0x30) >> 0x18 & 0x7fffffffff) != (*puVar6 & 0x7fffffffff)) {
      ObjectDB::spin_lock._0_1_ = '\0';
      goto LAB_00107cc9;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar6[1] == 0) goto LAB_00107cc9;
    lVar1 = *(long *)(this + 0x28);
    UNRECOVERED_JUMPTABLE = *(code **)(this + 0x38);
    lVar2 = *(long *)(this + 0x40);
    if ((uint)param_2 < 2) {
      if (param_2 != 0) {
        *(undefined4 *)param_4 = 0;
        if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
          UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar1 + lVar2) + -1);
        }
        cVar4 = Variant::can_convert_strict(*(undefined4 *)*param_1,1);
        uVar3 = _LC56;
        if (cVar4 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar3;
        }
        bVar7 = Variant::operator_cast_to_bool(*param_1);
        if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00107c78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),bVar7);
          return;
        }
        goto LAB_00107d7a;
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
LAB_00107cc9:
    local_40 = 0;
    String::parse_latin1((String *)&local_40,"\', can\'t call method.");
    uitos((ulong)local_50);
    operator+((char *)local_48,(String *)"Invalid Object id \'");
    String::operator+(local_38,(String *)local_48);
    _err_print_error(&_LC55,"./core/object/callable_method_pointer.h",0x67,
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
LAB_00107d7a:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<EditorPropertyVectorN, void, double, String const&>::call(Variant
   const**, int, Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<EditorPropertyVectorN,void,double,String_const&>::call
          (CallableCustomMethodPointer<EditorPropertyVectorN,void,double,String_const&> *this,
          Variant **param_1,int param_2,Variant *param_3,CallError *param_4)

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
  Variant local_38 [8];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar5 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar5 < (uint)ObjectDB::slot_max) {
    while( true ) {
      local_38[0] = (Variant)0x0;
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
        if ((uint)param_2 < 3) {
          if (param_2 == 2) {
            *(undefined4 *)param_4 = 0;
            if (((ulong)pcVar7 & 1) != 0) {
              pcVar7 = *(code **)(pcVar7 + *(long *)(lVar1 + lVar2) + -1);
            }
            cVar4 = Variant::can_convert_strict(*(undefined4 *)param_1[1],4);
            uVar3 = _LC57;
            if (cVar4 == '\0') {
              *(undefined4 *)param_4 = 2;
              *(undefined8 *)(param_4 + 4) = uVar3;
            }
            Variant::operator_cast_to_String(local_38);
            cVar4 = Variant::can_convert_strict(*(undefined4 *)*param_1,3);
            uVar3 = _LC58;
            if (cVar4 == '\0') {
              *(undefined4 *)param_4 = 2;
              *(undefined8 *)(param_4 + 4) = uVar3;
            }
            Variant::operator_cast_to_double(*param_1);
            (*pcVar7)((long *)(lVar1 + lVar2),local_38);
            CowData<char32_t>::_unref((CowData<char32_t> *)local_38);
          }
          else {
            *(undefined4 *)param_4 = 4;
            *(undefined4 *)(param_4 + 8) = 2;
          }
        }
        else {
          *(undefined4 *)param_4 = 3;
          *(undefined4 *)(param_4 + 8) = 2;
        }
        goto LAB_00107e45;
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
  String::operator+((String *)local_38,(String *)local_48);
  _err_print_error(&_LC55,"./core/object/callable_method_pointer.h",0x67,
                   "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                   local_38,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_38);
  CowData<char32_t>::_unref(local_48);
  CowData<char32_t>::_unref(local_50);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_40);
LAB_00107e45:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* CanvasItem::is_class(String const&) const */

undefined8 __thiscall CanvasItem::is_class(CanvasItem *this,String *param_1)

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
    if (cVar4 != '\0') goto LAB_001080e3;
  }
  cVar4 = String::operator==(param_1,"CanvasItem");
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
      if (cVar4 != '\0') goto LAB_001080e3;
    }
    cVar4 = String::operator==(param_1,"Node");
    if (cVar4 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar5 = Object::is_class((Object *)this,param_1);
        return uVar5;
      }
      goto LAB_001081ee;
    }
  }
LAB_001080e3:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_001081ee:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Container::is_class(String const&) const */

undefined8 __thiscall Container::is_class(Container *this,String *param_1)

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
    if (cVar4 != '\0') goto LAB_001082d3;
  }
  cVar4 = String::operator==(param_1,"Container");
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
      if (cVar4 != '\0') goto LAB_001082d3;
    }
    cVar4 = String::operator==(param_1,"Control");
    if (cVar4 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar5 = CanvasItem::is_class((CanvasItem *)this,param_1);
        return uVar5;
      }
      goto LAB_001083de;
    }
  }
LAB_001082d3:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_001083de:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorPropertyVectorN::is_class(String const&) const */

undefined8 __thiscall EditorPropertyVectorN::is_class(EditorPropertyVectorN *this,String *param_1)

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
    if (cVar4 != '\0') goto LAB_001084d3;
  }
  cVar4 = String::operator==(param_1,"EditorPropertyVectorN");
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
      if (cVar4 != '\0') goto LAB_001084d3;
    }
    cVar4 = String::operator==(param_1,"EditorProperty");
    if (cVar4 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar5 = Container::is_class((Container *)this,param_1);
        return uVar5;
      }
      goto LAB_001085de;
    }
  }
LAB_001084d3:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_001085de:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorPropertyVector2::is_class(String const&) const */

undefined8 __thiscall EditorPropertyVector2::is_class(EditorPropertyVector2 *this,String *param_1)

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
    if (cVar4 != '\0') goto LAB_001086eb;
  }
  cVar4 = String::operator==(param_1,"EditorPropertyVector2");
  if (cVar4 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar5 = EditorPropertyVectorN::is_class((EditorPropertyVectorN *)this,param_1);
      return uVar5;
    }
  }
  else {
LAB_001086eb:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorPropertyVector2i::is_class(String const&) const */

undefined8 __thiscall EditorPropertyVector2i::is_class(EditorPropertyVector2i *this,String *param_1)

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
    if (cVar4 != '\0') goto LAB_0010883b;
  }
  cVar4 = String::operator==(param_1,"EditorPropertyVector2i");
  if (cVar4 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar5 = EditorPropertyVectorN::is_class((EditorPropertyVectorN *)this,param_1);
      return uVar5;
    }
  }
  else {
LAB_0010883b:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorPropertyVector3::is_class(String const&) const */

undefined8 __thiscall EditorPropertyVector3::is_class(EditorPropertyVector3 *this,String *param_1)

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
    if (cVar4 != '\0') goto LAB_0010898b;
  }
  cVar4 = String::operator==(param_1,"EditorPropertyVector3");
  if (cVar4 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar5 = EditorPropertyVectorN::is_class((EditorPropertyVectorN *)this,param_1);
      return uVar5;
    }
  }
  else {
LAB_0010898b:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorPropertyVector3i::is_class(String const&) const */

undefined8 __thiscall EditorPropertyVector3i::is_class(EditorPropertyVector3i *this,String *param_1)

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
    if (cVar4 != '\0') goto LAB_00108adb;
  }
  cVar4 = String::operator==(param_1,"EditorPropertyVector3i");
  if (cVar4 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar5 = EditorPropertyVectorN::is_class((EditorPropertyVectorN *)this,param_1);
      return uVar5;
    }
  }
  else {
LAB_00108adb:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorPropertyVector4::is_class(String const&) const */

undefined8 __thiscall EditorPropertyVector4::is_class(EditorPropertyVector4 *this,String *param_1)

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
    if (cVar4 != '\0') goto LAB_00108c2b;
  }
  cVar4 = String::operator==(param_1,"EditorPropertyVector4");
  if (cVar4 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar5 = EditorPropertyVectorN::is_class((EditorPropertyVectorN *)this,param_1);
      return uVar5;
    }
  }
  else {
LAB_00108c2b:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorPropertyVector4i::is_class(String const&) const */

undefined8 __thiscall EditorPropertyVector4i::is_class(EditorPropertyVector4i *this,String *param_1)

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
    if (cVar4 != '\0') goto LAB_00108d7b;
  }
  cVar4 = String::operator==(param_1,"EditorPropertyVector4i");
  if (cVar4 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar5 = EditorPropertyVectorN::is_class((EditorPropertyVectorN *)this,param_1);
      return uVar5;
    }
  }
  else {
LAB_00108d7b:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorPropertyVectorN::_initialize_classv() */

void EditorPropertyVectorN::_initialize_classv(void)

{
  if (initialize_class()::initialized == '\0') {
    initialize_class();
    return;
  }
  return;
}



/* EditorPropertyVector2::_initialize_classv() */

void EditorPropertyVector2::_initialize_classv(void)

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
    if (EditorPropertyVectorN::initialize_class()::initialized == '\0') {
      EditorPropertyVectorN::initialize_class();
    }
    local_58 = 0;
    local_40 = 0x15;
    local_48 = "EditorPropertyVectorN";
    String::parse_latin1((StrRange *)&local_58);
    StringName::StringName((StringName *)&local_50,(String *)&local_58,false);
    local_48 = "EditorPropertyVector2";
    local_60 = 0;
    local_40 = 0x15;
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



/* EditorPropertyVector2i::_initialize_classv() */

void EditorPropertyVector2i::_initialize_classv(void)

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
    if (EditorPropertyVectorN::initialize_class()::initialized == '\0') {
      EditorPropertyVectorN::initialize_class();
    }
    local_58 = 0;
    local_40 = 0x15;
    local_48 = "EditorPropertyVectorN";
    String::parse_latin1((StrRange *)&local_58);
    StringName::StringName((StringName *)&local_50,(String *)&local_58,false);
    local_48 = "EditorPropertyVector2i";
    local_60 = 0;
    local_40 = 0x16;
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



/* EditorPropertyVector3::_initialize_classv() */

void EditorPropertyVector3::_initialize_classv(void)

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
    if (EditorPropertyVectorN::initialize_class()::initialized == '\0') {
      EditorPropertyVectorN::initialize_class();
    }
    local_58 = 0;
    local_40 = 0x15;
    local_48 = "EditorPropertyVectorN";
    String::parse_latin1((StrRange *)&local_58);
    StringName::StringName((StringName *)&local_50,(String *)&local_58,false);
    local_48 = "EditorPropertyVector3";
    local_60 = 0;
    local_40 = 0x15;
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



/* EditorPropertyVector3i::_initialize_classv() */

void EditorPropertyVector3i::_initialize_classv(void)

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
    if (EditorPropertyVectorN::initialize_class()::initialized == '\0') {
      EditorPropertyVectorN::initialize_class();
    }
    local_58 = 0;
    local_40 = 0x15;
    local_48 = "EditorPropertyVectorN";
    String::parse_latin1((StrRange *)&local_58);
    StringName::StringName((StringName *)&local_50,(String *)&local_58,false);
    local_48 = "EditorPropertyVector3i";
    local_60 = 0;
    local_40 = 0x16;
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



/* EditorPropertyVector4::_initialize_classv() */

void EditorPropertyVector4::_initialize_classv(void)

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
    if (EditorPropertyVectorN::initialize_class()::initialized == '\0') {
      EditorPropertyVectorN::initialize_class();
    }
    local_58 = 0;
    local_40 = 0x15;
    local_48 = "EditorPropertyVectorN";
    String::parse_latin1((StrRange *)&local_58);
    StringName::StringName((StringName *)&local_50,(String *)&local_58,false);
    local_48 = "EditorPropertyVector4";
    local_60 = 0;
    local_40 = 0x15;
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



/* EditorPropertyVector4i::_initialize_classv() */

void EditorPropertyVector4i::_initialize_classv(void)

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
    if (EditorPropertyVectorN::initialize_class()::initialized == '\0') {
      EditorPropertyVectorN::initialize_class();
    }
    local_58 = 0;
    local_40 = 0x15;
    local_48 = "EditorPropertyVectorN";
    String::parse_latin1((StrRange *)&local_58);
    StringName::StringName((StringName *)&local_50,(String *)&local_58,false);
    local_48 = "EditorPropertyVector4i";
    local_60 = 0;
    local_40 = 0x16;
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



/* VBoxContainer::_initialize_classv() */

void VBoxContainer::_initialize_classv(void)

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
              if ((code *)PTR__bind_methods_00113010 != Node::_bind_methods) {
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
            if ((code *)_GLOBAL_OFFSET_TABLE_ != Object::_bind_compatibility_methods) {
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
      if ((code *)PTR__bind_methods_00113050 != Container::_bind_methods) {
        BoxContainer::_bind_methods();
      }
      BoxContainer::initialize_class()::initialized = '\x01';
    }
    local_50 = 0;
    String::parse_latin1((String *)&local_50,"BoxContainer");
    StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
    local_60 = 0;
    String::parse_latin1((String *)&local_60,"VBoxContainer");
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
        if (pvVar3 == (void *)0x0) goto LAB_00109bbf;
      }
    }
    Memory::free_static(pvVar3,false);
    Memory::free_static(*(void **)(this + 0x20),false);
  }
LAB_00109bbf:
  CowData<char32_t>::_unref((CowData<char32_t> *)this);
  return;
}



/* HBoxContainer::is_class(String const&) const */

undefined8 __thiscall HBoxContainer::is_class(HBoxContainer *this,String *param_1)

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
    if (cVar4 != '\0') goto LAB_00109cf3;
  }
  cVar4 = String::operator==(param_1,"HBoxContainer");
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
      if (cVar4 != '\0') goto LAB_00109cf3;
    }
    cVar4 = String::operator==(param_1,"BoxContainer");
    if (cVar4 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar5 = Container::is_class((Container *)this,param_1);
        return uVar5;
      }
      goto LAB_00109dfe;
    }
  }
LAB_00109cf3:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_00109dfe:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* VBoxContainer::is_class(String const&) const */

undefined8 __thiscall VBoxContainer::is_class(VBoxContainer *this,String *param_1)

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
    if (cVar4 != '\0') goto LAB_00109ee3;
  }
  cVar4 = String::operator==(param_1,"VBoxContainer");
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
      if (cVar4 != '\0') goto LAB_00109ee3;
    }
    cVar4 = String::operator==(param_1,"BoxContainer");
    if (cVar4 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar5 = Container::is_class((Container *)this,param_1);
        return uVar5;
      }
      goto LAB_00109fee;
    }
  }
LAB_00109ee3:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_00109fee:
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
  local_78 = &_LC31;
  local_88 = 0;
  local_90 = 0;
  local_70 = 4;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = &_LC31;
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
  if ((code *)PTR__get_property_list_00113060 != Object::_get_property_list) {
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
  if ((code *)PTR__get_property_list_00113068 != CanvasItem::_get_property_list) {
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



/* BoxContainer::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall BoxContainer::_get_property_listv(BoxContainer *this,List *param_1,bool param_2)

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
  local_78 = "BoxContainer";
  local_70 = 0xc;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "BoxContainer";
  local_98 = 0;
  local_70 = 0xc;
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



/* EditorProperty::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall EditorProperty::_get_property_listv(EditorProperty *this,List *param_1,bool param_2)

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
  local_78 = "EditorProperty";
  local_70 = 0xe;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "EditorProperty";
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
  StringName::StringName((StringName *)&local_78,"EditorProperty",false);
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



/* EditorPropertyVectorN::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall
EditorPropertyVectorN::_get_property_listv(EditorPropertyVectorN *this,List *param_1,bool param_2)

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
    EditorProperty::_get_property_listv((EditorProperty *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "EditorPropertyVectorN";
  local_70 = 0x15;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "EditorPropertyVectorN";
  local_98 = 0;
  local_70 = 0x15;
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
  StringName::StringName((StringName *)&local_78,"EditorPropertyVectorN",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      EditorProperty::_get_property_listv((EditorProperty *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorPropertyVector2::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall
EditorPropertyVector2::_get_property_listv(EditorPropertyVector2 *this,List *param_1,bool param_2)

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
    EditorPropertyVectorN::_get_property_listv((EditorPropertyVectorN *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "EditorPropertyVector2";
  local_70 = 0x15;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "EditorPropertyVector2";
  local_98 = 0;
  local_70 = 0x15;
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
  StringName::StringName((StringName *)&local_78,"EditorPropertyVector2",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      EditorPropertyVectorN::_get_property_listv((EditorPropertyVectorN *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorPropertyVector2i::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall
EditorPropertyVector2i::_get_property_listv(EditorPropertyVector2i *this,List *param_1,bool param_2)

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
    EditorPropertyVectorN::_get_property_listv((EditorPropertyVectorN *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "EditorPropertyVector2i";
  local_70 = 0x16;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "EditorPropertyVector2i";
  local_98 = 0;
  local_70 = 0x16;
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
  StringName::StringName((StringName *)&local_78,"EditorPropertyVector2i",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      EditorPropertyVectorN::_get_property_listv((EditorPropertyVectorN *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorPropertyVector3::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall
EditorPropertyVector3::_get_property_listv(EditorPropertyVector3 *this,List *param_1,bool param_2)

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
    EditorPropertyVectorN::_get_property_listv((EditorPropertyVectorN *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "EditorPropertyVector3";
  local_70 = 0x15;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "EditorPropertyVector3";
  local_98 = 0;
  local_70 = 0x15;
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
  StringName::StringName((StringName *)&local_78,"EditorPropertyVector3",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      EditorPropertyVectorN::_get_property_listv((EditorPropertyVectorN *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorPropertyVector3i::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall
EditorPropertyVector3i::_get_property_listv(EditorPropertyVector3i *this,List *param_1,bool param_2)

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
    EditorPropertyVectorN::_get_property_listv((EditorPropertyVectorN *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "EditorPropertyVector3i";
  local_70 = 0x16;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "EditorPropertyVector3i";
  local_98 = 0;
  local_70 = 0x16;
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
  StringName::StringName((StringName *)&local_78,"EditorPropertyVector3i",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      EditorPropertyVectorN::_get_property_listv((EditorPropertyVectorN *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorPropertyVector4::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall
EditorPropertyVector4::_get_property_listv(EditorPropertyVector4 *this,List *param_1,bool param_2)

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
    EditorPropertyVectorN::_get_property_listv((EditorPropertyVectorN *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "EditorPropertyVector4";
  local_70 = 0x15;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "EditorPropertyVector4";
  local_98 = 0;
  local_70 = 0x15;
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
  StringName::StringName((StringName *)&local_78,"EditorPropertyVector4",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      EditorPropertyVectorN::_get_property_listv((EditorPropertyVectorN *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorPropertyVector4i::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall
EditorPropertyVector4i::_get_property_listv(EditorPropertyVector4i *this,List *param_1,bool param_2)

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
    EditorPropertyVectorN::_get_property_listv((EditorPropertyVectorN *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "EditorPropertyVector4i";
  local_70 = 0x16;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "EditorPropertyVector4i";
  local_98 = 0;
  local_70 = 0x16;
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
  StringName::StringName((StringName *)&local_78,"EditorPropertyVector4i",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      EditorPropertyVectorN::_get_property_listv((EditorPropertyVectorN *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CowData<EditorSpinSlider*>::_realloc(long) */

undefined8 __thiscall
CowData<EditorSpinSlider*>::_realloc(CowData<EditorSpinSlider*> *this,long param_1)

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
/* EditorPropertyVectorN::COMPONENT_LABELS */

void EditorPropertyVectorN::_GLOBAL__sub_I_COMPONENT_LABELS(void)

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
    OptionButton::base_property_helper._0_16_ = (undefined1  [16])0x0;
    OptionButton::base_property_helper._24_16_ = (undefined1  [16])0x0;
    OptionButton::base_property_helper._40_16_ = (undefined1  [16])0x0;
    OptionButton::base_property_helper._56_8_ = 2;
    OptionButton::base_property_helper._64_8_ = 0;
    __cxa_atexit(PropertyListHelper::~PropertyListHelper,OptionButton::base_property_helper,
                 &__dso_handle);
  }
  COMPONENT_LABELS = 0;
  String::parse_latin1((String *)&COMPONENT_LABELS,"x");
  _DAT_00103048 = 0;
  String::parse_latin1((String *)&DAT_00103048,"y");
  DAT_00103050 = 0;
  String::parse_latin1((String *)&DAT_00103050,"z");
  DAT_00103058 = 0;
  String::parse_latin1((String *)&DAT_00103058,"w");
  __cxa_atexit(__tcf_0,0,&__dso_handle);
  return;
}



/* WARNING: Control flow encountered bad instruction data */
/* PropertyListHelper::~PropertyListHelper() */

void __thiscall PropertyListHelper::~PropertyListHelper(PropertyListHelper *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* EditorPropertyVector2i::~EditorPropertyVector2i() */

void __thiscall EditorPropertyVector2i::~EditorPropertyVector2i(EditorPropertyVector2i *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* EditorPropertyVector3i::~EditorPropertyVector3i() */

void __thiscall EditorPropertyVector3i::~EditorPropertyVector3i(EditorPropertyVector3i *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* EditorPropertyVector3::~EditorPropertyVector3() */

void __thiscall EditorPropertyVector3::~EditorPropertyVector3(EditorPropertyVector3 *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* EditorPropertyVector2::~EditorPropertyVector2() */

void __thiscall EditorPropertyVector2::~EditorPropertyVector2(EditorPropertyVector2 *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* EditorPropertyVector4::~EditorPropertyVector4() */

void __thiscall EditorPropertyVector4::~EditorPropertyVector4(EditorPropertyVector4 *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* EditorPropertyVector4i::~EditorPropertyVector4i() */

void __thiscall EditorPropertyVector4i::~EditorPropertyVector4i(EditorPropertyVector4i *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* EditorPropertyVectorN::~EditorPropertyVectorN() */

void __thiscall EditorPropertyVectorN::~EditorPropertyVectorN(EditorPropertyVectorN *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* EditorProperty::~EditorProperty() */

void __thiscall EditorProperty::~EditorProperty(EditorProperty *this)

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
/* CallableCustomMethodPointer<EditorPropertyVectorN, void, double, String
   const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorPropertyVectorN,void,double,String_const&>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorPropertyVectorN,void,double,String_const&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<EditorPropertyVectorN, void, bool>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorPropertyVectorN,void,bool>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorPropertyVectorN,void,bool> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<EditorPropertyVectorN, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorPropertyVectorN,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorPropertyVectorN,void> *this)

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



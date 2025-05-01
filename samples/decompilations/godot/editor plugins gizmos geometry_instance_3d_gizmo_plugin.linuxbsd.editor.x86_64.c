
/* GeometryInstance3DGizmoPlugin::get_priority() const */

undefined8 GeometryInstance3DGizmoPlugin::get_priority(void)

{
  return 0xffffffff;
}



/* CowData<Vector3>::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<Vector3>::_copy_on_write(CowData<Vector3> *this)

{
  long *plVar1;
  long lVar2;
  code *pcVar3;
  undefined8 *puVar4;
  size_t __n;
  ulong uVar5;
  
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
  __n = lVar2 * 0xc;
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



/* GeometryInstance3DGizmoPlugin::has_gizmo(Node3D*) */

bool __thiscall
GeometryInstance3DGizmoPlugin::has_gizmo(GeometryInstance3DGizmoPlugin *this,Node3D *param_1)

{
  long lVar1;
  
  if (param_1 != (Node3D *)0x0) {
    lVar1 = __dynamic_cast(param_1,&Object::typeinfo,&GeometryInstance3D::typeinfo,0);
    return lVar1 != 0;
  }
  return false;
}



/* GeometryInstance3DGizmoPlugin::get_gizmo_name() const */

GeometryInstance3DGizmoPlugin * __thiscall
GeometryInstance3DGizmoPlugin::get_gizmo_name(GeometryInstance3DGizmoPlugin *this)

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



/* GeometryInstance3DGizmoPlugin::GeometryInstance3DGizmoPlugin() */

void __thiscall
GeometryInstance3DGizmoPlugin::GeometryInstance3DGizmoPlugin(GeometryInstance3DGizmoPlugin *this)

{
  EditorNode3DGizmoPlugin::EditorNode3DGizmoPlugin((EditorNode3DGizmoPlugin *)this);
  *(undefined ***)this = &PTR__initialize_classv_00104b68;
  return;
}



/* Vector<Vector3>::push_back(Vector3) [clone .isra.0] */

void Vector<Vector3>::push_back(undefined8 param_1,undefined4 param_2,long param_3)

{
  undefined8 *puVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  
  if (*(long *)(param_3 + 8) == 0) {
    lVar3 = 1;
  }
  else {
    lVar3 = *(long *)(*(long *)(param_3 + 8) + -8) + 1;
  }
  iVar2 = CowData<Vector3>::resize<false>((CowData<Vector3> *)(param_3 + 8),lVar3);
  if (iVar2 == 0) {
    if (*(long *)(param_3 + 8) == 0) {
      lVar4 = -1;
      lVar3 = 0;
    }
    else {
      lVar3 = *(long *)(*(long *)(param_3 + 8) + -8);
      lVar4 = lVar3 + -1;
      if (-1 < lVar4) {
        CowData<Vector3>::_copy_on_write((CowData<Vector3> *)(param_3 + 8));
        puVar1 = (undefined8 *)(*(long *)(param_3 + 8) + lVar4 * 0xc);
        *puVar1 = param_1;
        *(undefined4 *)(puVar1 + 1) = param_2;
        return;
      }
    }
    _err_print_index_error
              ("set","./core/templates/cowdata.h",0xcf,lVar4,lVar3,"p_index","size()","",false,false
              );
    return;
  }
  _err_print_error("push_back","./core/templates/vector.h",0x142,
                   "Condition \"err\" is true. Returning: true",0,0);
  return;
}



/* GeometryInstance3DGizmoPlugin::redraw(EditorNode3DGizmo*) */

void __thiscall
GeometryInstance3DGizmoPlugin::redraw
          (GeometryInstance3DGizmoPlugin *this,EditorNode3DGizmo *param_1)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  BaseMaterial3D *this_00;
  Object *pOVar4;
  uint uVar5;
  Vector3 *pVVar6;
  long in_FS_OFFSET;
  long local_b0;
  Ref local_a8 [8];
  long local_a0;
  Object *local_98;
  undefined8 local_90;
  undefined1 local_88 [16];
  undefined1 local_78 [32];
  undefined8 local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(param_1 + 0x1f0) != 0) {
    __dynamic_cast(*(long *)(param_1 + 0x1f0),&Object::typeinfo,&GeometryInstance3D::typeinfo,0);
  }
  (**(code **)(*(long *)param_1 + 0x160))(param_1);
  if (param_1[0x17c] == (EditorNode3DGizmo)0x0) goto LAB_001003ea;
  uVar5 = 0;
  GeometryInstance3D::get_custom_aabb();
  local_a0 = 0;
  do {
    pVVar6 = (Vector3 *)(ulong)uVar5;
    local_88._0_8_ = 0;
    uVar5 = uVar5 + 1;
    local_88._8_8_ = local_88._8_8_ & 0xffffffff00000000;
    local_58 = 0;
    uStack_50 = 0;
    AABB::get_edge((int)local_78,pVVar6,local_88);
    Vector<Vector3>::push_back(local_88._0_8_,local_88._8_8_ & 0xffffffff,local_a8);
    Vector<Vector3>::push_back(local_58,uStack_50,local_a8);
  } while (uVar5 != 0xc);
  this_00 = (BaseMaterial3D *)operator_new(0x558,"");
  BaseMaterial3D::BaseMaterial3D(this_00,false);
  *(undefined ***)this_00 = &PTR__initialize_classv_00104968;
  postinitialize_handler((Object *)this_00);
  cVar3 = RefCounted::init_ref();
  if (cVar3 == '\0') {
    this_00 = (BaseMaterial3D *)0x0;
  }
  BaseMaterial3D::set_shading_mode(this_00,0);
  BaseMaterial3D::set_flag(this_00,0x15,1);
  local_b0 = 0;
  local_98 = (Object *)0x1048c0;
  local_90 = 0x23;
  String::parse_latin1((StrRange *)&local_b0);
  _EDITOR_GET((String *)&local_58);
  local_88 = Variant::operator_cast_to_Color((Variant *)&local_58);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  lVar2 = local_b0;
  if (local_b0 != 0) {
    LOCK();
    plVar1 = (long *)(local_b0 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_b0 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  BaseMaterial3D::set_albedo(this_00);
  BaseMaterial3D::set_transparency(this_00,1);
  local_98 = (Object *)0x0;
  local_58 = CONCAT44(_LC28,_LC28);
  uStack_50 = _LC28;
  uStack_4c = _LC28;
  if (this_00 == (BaseMaterial3D *)0x0) {
    EditorNode3DGizmo::add_lines((Vector *)param_1,local_a8,SUB81(&local_98,0),(Color *)0x0);
    if (local_98 != (Object *)0x0) {
      cVar3 = RefCounted::unreference();
      if (cVar3 != '\0') goto LAB_001006d0;
    }
  }
  else {
    pOVar4 = (Object *)__dynamic_cast(this_00,&Object::typeinfo,&Material::typeinfo);
    if (pOVar4 != (Object *)0x0) {
      local_98 = pOVar4;
      cVar3 = RefCounted::reference();
      if (cVar3 == '\0') {
        local_98 = (Object *)0x0;
      }
    }
    EditorNode3DGizmo::add_lines((Vector *)param_1,local_a8,SUB81(&local_98,0),(Color *)0x0);
    if (local_98 != (Object *)0x0) {
      cVar3 = RefCounted::unreference();
      if (cVar3 != '\0') {
LAB_001006d0:
        pOVar4 = local_98;
        cVar3 = predelete_handler(local_98);
        if (cVar3 != '\0') {
          (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
          Memory::free_static(pOVar4,false);
        }
        if (this_00 == (BaseMaterial3D *)0x0) goto LAB_0010063a;
      }
    }
    cVar3 = RefCounted::unreference();
    if (cVar3 != '\0') {
      cVar3 = predelete_handler((Object *)this_00);
      if (cVar3 != '\0') {
        (**(code **)(*(long *)this_00 + 0x140))(this_00);
        Memory::free_static(this_00,false);
      }
    }
  }
LAB_0010063a:
  lVar2 = local_a0;
  if (local_a0 != 0) {
    LOCK();
    plVar1 = (long *)(local_a0 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_a0 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
LAB_001003ea:
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



/* Object::_set(StringName const&, Variant const&) */

undefined8 Object::_set(StringName *param_1,Variant *param_2)

{
  return 0;
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



/* BaseMaterial3D::_can_do_next_pass() const */

undefined8 BaseMaterial3D::_can_do_next_pass(void)

{
  return 1;
}



/* BaseMaterial3D::_can_use_render_priority() const */

undefined8 BaseMaterial3D::_can_use_render_priority(void)

{
  return 1;
}



/* StandardMaterial3D::is_class_ptr(void*) const */

uint StandardMaterial3D::is_class_ptr(void *param_1)

{
  undefined4 in_EDX;
  undefined4 *in_RSI;
  
  return (uint)CONCAT71(0x104d,in_RSI == &BaseMaterial3D::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x104d,in_RSI == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x104e,in_RSI == &Material::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x104e,in_RSI == &Resource::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x104e,in_RSI == &RefCounted::get_class_ptr_static()::ptr) |
         CONCAT31((int3)((uint)in_EDX >> 8),in_RSI == &Object::get_class_ptr_static()::ptr);
}



/* StandardMaterial3D::_getv(StringName const&, Variant&) const */

undefined8 StandardMaterial3D::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* StandardMaterial3D::_property_can_revertv(StringName const&) const */

undefined8 StandardMaterial3D::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* StandardMaterial3D::_property_get_revertv(StringName const&, Variant&) const */

undefined8 StandardMaterial3D::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* StandardMaterial3D::_notificationv(int, bool) */

void StandardMaterial3D::_notificationv(int param_1,bool param_2)

{
  return;
}



/* GeometryInstance3DGizmoPlugin::is_class_ptr(void*) const */

uint __thiscall
GeometryInstance3DGizmoPlugin::is_class_ptr(GeometryInstance3DGizmoPlugin *this,void *param_1)

{
  return (uint)CONCAT71(0x104d,(undefined4 *)param_1 ==
                               &EditorNode3DGizmoPlugin::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x104d,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x104e,(undefined4 *)param_1 == &Resource::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x104e,(undefined4 *)param_1 == &RefCounted::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x104e,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* GeometryInstance3DGizmoPlugin::_getv(StringName const&, Variant&) const */

undefined8 GeometryInstance3DGizmoPlugin::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* GeometryInstance3DGizmoPlugin::_setv(StringName const&, Variant const&) */

undefined8 GeometryInstance3DGizmoPlugin::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* GeometryInstance3DGizmoPlugin::_validate_propertyv(PropertyInfo&) const */

void GeometryInstance3DGizmoPlugin::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* GeometryInstance3DGizmoPlugin::_property_can_revertv(StringName const&) const */

undefined8 GeometryInstance3DGizmoPlugin::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* GeometryInstance3DGizmoPlugin::_property_get_revertv(StringName const&, Variant&) const */

undefined8
GeometryInstance3DGizmoPlugin::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* GeometryInstance3DGizmoPlugin::_notificationv(int, bool) */

void GeometryInstance3DGizmoPlugin::_notificationv(int param_1,bool param_2)

{
  return;
}



/* StandardMaterial3D::~StandardMaterial3D() */

void __thiscall StandardMaterial3D::~StandardMaterial3D(StandardMaterial3D *this)

{
  *(undefined ***)this = &PTR__initialize_classv_00104968;
  BaseMaterial3D::~BaseMaterial3D((BaseMaterial3D *)this);
  return;
}



/* StandardMaterial3D::~StandardMaterial3D() */

void __thiscall StandardMaterial3D::~StandardMaterial3D(StandardMaterial3D *this)

{
  *(undefined ***)this = &PTR__initialize_classv_00104968;
  BaseMaterial3D::~BaseMaterial3D((BaseMaterial3D *)this);
  operator_delete(this,0x558);
  return;
}



/* StandardMaterial3D::_setv(StringName const&, Variant const&) */

undefined8 StandardMaterial3D::_setv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)_GLOBAL_OFFSET_TABLE_ != Object::_set) {
    uVar1 = StandardMaterial3D::_set(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* GeometryInstance3DGizmoPlugin::~GeometryInstance3DGizmoPlugin() */

void __thiscall
GeometryInstance3DGizmoPlugin::~GeometryInstance3DGizmoPlugin(GeometryInstance3DGizmoPlugin *this)

{
  *(undefined ***)this = &PTR__initialize_classv_00104b68;
  EditorNode3DGizmoPlugin::~EditorNode3DGizmoPlugin((EditorNode3DGizmoPlugin *)this);
  return;
}



/* GeometryInstance3DGizmoPlugin::~GeometryInstance3DGizmoPlugin() */

void __thiscall
GeometryInstance3DGizmoPlugin::~GeometryInstance3DGizmoPlugin(GeometryInstance3DGizmoPlugin *this)

{
  *(undefined ***)this = &PTR__initialize_classv_00104b68;
  EditorNode3DGizmoPlugin::~EditorNode3DGizmoPlugin((EditorNode3DGizmoPlugin *)this);
  operator_delete(this,0x450);
  return;
}



/* CowData<Vector3>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<Vector3>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* StandardMaterial3D::_get_class_namev() const */

undefined8 * StandardMaterial3D::_get_class_namev(void)

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
LAB_00100b33:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00100b33;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"StandardMaterial3D");
      goto LAB_00100b9e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"StandardMaterial3D");
LAB_00100b9e:
  return &_get_class_namev()::_class_name_static;
}



/* StandardMaterial3D::_validate_propertyv(PropertyInfo&) const */

void StandardMaterial3D::_validate_propertyv(PropertyInfo *param_1)

{
  Material::_validate_property(param_1);
  if ((code *)PTR__validate_property_00107008 == Material::_validate_property) {
    return;
  }
  BaseMaterial3D::_validate_property(param_1);
  return;
}



/* GeometryInstance3DGizmoPlugin::_get_class_namev() const */

undefined8 * GeometryInstance3DGizmoPlugin::_get_class_namev(void)

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
LAB_00100c83:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00100c83;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,
                 "GeometryInstance3DGizmoPlugin");
      goto LAB_00100cee;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"GeometryInstance3DGizmoPlugin");
LAB_00100cee:
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



/* Material::get_base_extension() const */

Material * __thiscall Material::get_base_extension(Material *this)

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



/* Material::get_save_class() const */

Material * __thiscall Material::get_save_class(Material *this)

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



/* StandardMaterial3D::get_class() const */

void StandardMaterial3D::get_class(void)

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



/* GeometryInstance3DGizmoPlugin::get_class() const */

void GeometryInstance3DGizmoPlugin::get_class(void)

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



/* GeometryInstance3DGizmoPlugin::_initialize_classv() */

void GeometryInstance3DGizmoPlugin::_initialize_classv(void)

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
    if (EditorNode3DGizmoPlugin::initialize_class()::initialized == '\0') {
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
          if ((code *)PTR__bind_methods_00107018 != RefCounted::_bind_methods) {
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
      local_58 = "EditorNode3DGizmoPlugin";
      local_70 = 0;
      local_50 = 0x17;
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
      if ((code *)PTR__bind_methods_00107010 != Resource::_bind_methods) {
        EditorNode3DGizmoPlugin::_bind_methods();
      }
      EditorNode3DGizmoPlugin::initialize_class()::initialized = '\x01';
    }
    local_58 = "EditorNode3DGizmoPlugin";
    local_68 = 0;
    local_50 = 0x17;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "GeometryInstance3DGizmoPlugin";
    local_70 = 0;
    local_50 = 0x1d;
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
    initialize_class()::initialized = '\x01';
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* StandardMaterial3D::_initialize_classv() */

void StandardMaterial3D::_initialize_classv(void)

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
    if (BaseMaterial3D::initialize_class()::initialized == '\0') {
      if (Material::initialize_class()::initialized == '\0') {
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
            if ((code *)PTR__bind_methods_00107018 != RefCounted::_bind_methods) {
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
          Resource::_bind_methods();
          Resource::initialize_class()::initialized = '\x01';
        }
        local_68 = 0;
        local_58 = "Resource";
        local_50 = 8;
        String::parse_latin1((StrRange *)&local_68);
        StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
        local_58 = "Material";
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
        Material::_bind_methods();
        Material::initialize_class()::initialized = '\x01';
      }
      local_58 = "Material";
      local_68 = 0;
      local_50 = 8;
      String::parse_latin1((StrRange *)&local_68);
      StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
      local_58 = "BaseMaterial3D";
      local_70 = 0;
      local_50 = 0xe;
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
      if ((code *)PTR__bind_methods_00107020 != Material::_bind_methods) {
        BaseMaterial3D::_bind_methods();
      }
      BaseMaterial3D::initialize_class()::initialized = '\x01';
    }
    local_58 = "BaseMaterial3D";
    local_68 = 0;
    local_50 = 0xe;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "StandardMaterial3D";
    local_70 = 0;
    local_50 = 0x12;
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
    initialize_class()::initialized = '\x01';
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
LAB_00101df8:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00101df8;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)pLVar6;
      local_68 = local_80;
      goto joined_r0x00101e16;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)pLVar6;
joined_r0x00101e16:
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



/* Resource::is_class(String const&) const */

undefined8 __thiscall Resource::is_class(Resource *this,String *param_1)

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
            if (lVar5 == 0) goto LAB_001020ef;
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
LAB_001020ef:
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
    if (cVar6 != '\0') goto LAB_001021a3;
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
              if (lVar5 == 0) goto LAB_0010227b;
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
LAB_0010227b:
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
      if (cVar6 != '\0') goto LAB_001021a3;
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
                if (lVar5 == 0) goto LAB_0010235b;
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
LAB_0010235b:
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
        if (cVar6 != '\0') goto LAB_001021a3;
      }
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar7 = String::operator==(param_1,"Object");
        return uVar7;
      }
      goto LAB_00102404;
    }
  }
LAB_001021a3:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_00102404:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GeometryInstance3DGizmoPlugin::is_class(String const&) const */

undefined8 __thiscall
GeometryInstance3DGizmoPlugin::is_class(GeometryInstance3DGizmoPlugin *this,String *param_1)

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
            if (lVar5 == 0) goto LAB_0010247f;
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
LAB_0010247f:
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
    if (cVar6 != '\0') goto LAB_00102533;
  }
  cVar6 = String::operator==(param_1,"GeometryInstance3DGizmoPlugin");
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
              if (lVar5 == 0) goto LAB_001025f3;
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
LAB_001025f3:
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
      if (cVar6 != '\0') goto LAB_00102533;
    }
    cVar6 = String::operator==(param_1,"EditorNode3DGizmoPlugin");
    if (cVar6 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar7 = Resource::is_class((Resource *)this,param_1);
        return uVar7;
      }
      goto LAB_0010269c;
    }
  }
LAB_00102533:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0010269c:
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
LAB_00102828:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00102828;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x00102845;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x00102845:
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



/* Material::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall Material::_get_property_listv(Material *this,List *param_1,bool param_2)

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
  local_78 = "Material";
  local_70 = 8;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "Material";
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
LAB_00102c78:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00102c78;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x00102c95;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x00102c95:
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
  StringName::StringName((StringName *)&local_78,"Material",false);
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



/* BaseMaterial3D::is_class(String const&) const */

undefined8 __thiscall BaseMaterial3D::is_class(BaseMaterial3D *this,String *param_1)

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
            if (lVar5 == 0) goto LAB_00102fbf;
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
LAB_00102fbf:
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
    if (cVar6 != '\0') goto LAB_00103073;
  }
  cVar6 = String::operator==(param_1,"BaseMaterial3D");
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
              if (lVar5 == 0) goto LAB_00103133;
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
LAB_00103133:
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
      if (cVar6 != '\0') goto LAB_00103073;
    }
    cVar6 = String::operator==(param_1,"Material");
    if (cVar6 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar7 = Resource::is_class((Resource *)this,param_1);
        return uVar7;
      }
      goto LAB_001031dc;
    }
  }
LAB_00103073:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_001031dc:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* StandardMaterial3D::is_class(String const&) const */

undefined8 __thiscall StandardMaterial3D::is_class(StandardMaterial3D *this,String *param_1)

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
            if (lVar4 == 0) goto LAB_0010325f;
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
LAB_0010325f:
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
    if (cVar5 != '\0') goto LAB_00103313;
  }
  cVar5 = String::operator==(param_1,"StandardMaterial3D");
  if (cVar5 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = BaseMaterial3D::is_class((BaseMaterial3D *)this,param_1);
      return uVar7;
    }
  }
  else {
LAB_00103313:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* BaseMaterial3D::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall BaseMaterial3D::_get_property_listv(BaseMaterial3D *this,List *param_1,bool param_2)

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
    Material::_get_property_listv((Material *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "BaseMaterial3D";
  local_70 = 0xe;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "BaseMaterial3D";
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
LAB_001034e8:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_001034e8;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x00103505;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x00103505:
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
  StringName::StringName((StringName *)&local_78,"BaseMaterial3D",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      Material::_get_property_listv((Material *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* StandardMaterial3D::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall
StandardMaterial3D::_get_property_listv(StandardMaterial3D *this,List *param_1,bool param_2)

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
    BaseMaterial3D::_get_property_listv((BaseMaterial3D *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "StandardMaterial3D";
  local_70 = 0x12;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "StandardMaterial3D";
  local_98 = 0;
  local_70 = 0x12;
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
LAB_00103938:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00103938;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x00103955;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x00103955:
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
  StringName::StringName((StringName *)&local_78,"StandardMaterial3D",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      BaseMaterial3D::_get_property_listv((BaseMaterial3D *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorNode3DGizmoPlugin::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const
    */

void __thiscall
EditorNode3DGizmoPlugin::_get_property_listv
          (EditorNode3DGizmoPlugin *this,List *param_1,bool param_2)

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
  local_78 = "EditorNode3DGizmoPlugin";
  local_70 = 0x17;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "EditorNode3DGizmoPlugin";
  local_98 = 0;
  local_70 = 0x17;
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
LAB_00103d88:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00103d88;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x00103da5;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x00103da5:
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
  StringName::StringName((StringName *)&local_78,"EditorNode3DGizmoPlugin",false);
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



/* GeometryInstance3DGizmoPlugin::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool)
   const */

void __thiscall
GeometryInstance3DGizmoPlugin::_get_property_listv
          (GeometryInstance3DGizmoPlugin *this,List *param_1,bool param_2)

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
    EditorNode3DGizmoPlugin::_get_property_listv((EditorNode3DGizmoPlugin *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "GeometryInstance3DGizmoPlugin";
  local_70 = 0x1d;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "GeometryInstance3DGizmoPlugin";
  local_98 = 0;
  local_70 = 0x1d;
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
LAB_001041d8:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_001041d8;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x001041f5;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x001041f5:
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
  StringName::StringName((StringName *)&local_78,"GeometryInstance3DGizmoPlugin",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      EditorNode3DGizmoPlugin::_get_property_listv((EditorNode3DGizmoPlugin *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CowData<Vector3>::_realloc(long) */

undefined8 __thiscall CowData<Vector3>::_realloc(CowData<Vector3> *this,long param_1)

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
/* Error CowData<Vector3>::resize<false>(long) */

undefined8 __thiscall CowData<Vector3>::resize<false>(CowData<Vector3> *this,long param_1)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  
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
    lVar8 = 0;
    lVar3 = 0;
  }
  else {
    lVar8 = *(long *)(lVar3 + -8);
    if (param_1 == lVar8) {
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
    lVar3 = lVar8 * 0xc;
    if (lVar3 != 0) {
      uVar4 = lVar3 - 1U | lVar3 - 1U >> 1;
      uVar4 = uVar4 | uVar4 >> 2;
      uVar4 = uVar4 | uVar4 >> 4;
      uVar4 = uVar4 | uVar4 >> 8;
      uVar4 = uVar4 | uVar4 >> 0x10;
      lVar3 = (uVar4 | uVar4 >> 0x20) + 1;
    }
  }
  if (param_1 * 0xc == 0) {
LAB_00104820:
    _err_print_error("resize","./core/templates/cowdata.h",0x16a,
                     "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                     ,0,0);
    return 6;
  }
  uVar4 = param_1 * 0xc - 1;
  uVar4 = uVar4 >> 1 | uVar4;
  uVar4 = uVar4 | uVar4 >> 2;
  uVar4 = uVar4 | uVar4 >> 4;
  uVar4 = uVar4 | uVar4 >> 8;
  uVar4 = uVar4 | uVar4 >> 0x10;
  uVar4 = uVar4 | uVar4 >> 0x20;
  lVar7 = uVar4 + 1;
  if (lVar7 == 0) goto LAB_00104820;
  if (param_1 <= lVar8) {
    if ((lVar7 != lVar3) && (uVar6 = _realloc(this,lVar7), (int)uVar6 != 0)) {
      return uVar6;
    }
    if (*(long *)this != 0) {
      *(long *)(*(long *)this + -8) = param_1;
      return 0;
    }
    _DAT_00000000 = 0;
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  if (lVar7 == lVar3) {
LAB_0010478c:
    puVar9 = *(undefined8 **)this;
    if (puVar9 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    lVar3 = puVar9[-1];
    if (param_1 <= lVar3) goto LAB_0010471b;
  }
  else {
    if (lVar8 != 0) {
      uVar6 = _realloc(this,lVar7);
      if ((int)uVar6 != 0) {
        return uVar6;
      }
      goto LAB_0010478c;
    }
    puVar5 = (undefined8 *)Memory::alloc_static(uVar4 + 0x11,false);
    if (puVar5 == (undefined8 *)0x0) {
      _err_print_error("resize","./core/templates/cowdata.h",0x171,"Parameter \"mem_new\" is null.",
                       0,0);
      return 6;
    }
    puVar9 = puVar5 + 2;
    *puVar5 = 1;
    puVar5[1] = 0;
    *(undefined8 **)this = puVar9;
    lVar3 = 0;
  }
  memset((void *)((long)puVar9 + lVar3 * 0xc),0,(param_1 - lVar3) * 0xc);
LAB_0010471b:
  puVar9[-1] = param_1;
  return 0;
}



/* WARNING: Control flow encountered bad instruction data */
/* GeometryInstance3DGizmoPlugin::~GeometryInstance3DGizmoPlugin() */

void __thiscall
GeometryInstance3DGizmoPlugin::~GeometryInstance3DGizmoPlugin(GeometryInstance3DGizmoPlugin *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* StandardMaterial3D::~StandardMaterial3D() */

void __thiscall StandardMaterial3D::~StandardMaterial3D(StandardMaterial3D *this)

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




/* MaterialEditor::_on_light_1_switch_pressed() */

void __thiscall MaterialEditor::_on_light_1_switch_pressed(MaterialEditor *this)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(this + 0xa20);
  BaseButton::is_pressed();
  Node3D::set_visible(SUB81(uVar1,0));
  return;
}



/* MaterialEditor::_on_light_2_switch_pressed() */

void __thiscall MaterialEditor::_on_light_2_switch_pressed(MaterialEditor *this)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(this + 0xa28);
  BaseButton::is_pressed();
  Node3D::set_visible(SUB81(uVar1,0));
  return;
}



/* void Ref<Resource>::TEMPNAMEPLACEHOLDERVALUE(Ref<ShaderMaterial> const&) [clone .isra.0] */

void __thiscall Ref<Resource>::operator=(Ref<Resource> *this,Ref *param_1)

{
  Object *pOVar1;
  char cVar2;
  Object *pOVar3;
  
  pOVar1 = *(Object **)this;
  if (param_1 == (Ref *)0x0) {
    if (pOVar1 == (Object *)0x0) {
      return;
    }
    *(undefined8 *)this = 0;
  }
  else {
    pOVar3 = (Object *)__dynamic_cast(param_1,&Object::typeinfo,&Resource::typeinfo,0);
    if (pOVar3 == pOVar1) {
      return;
    }
    *(Object **)this = pOVar3;
    if ((pOVar3 != (Object *)0x0) && (cVar2 = RefCounted::reference(), cVar2 == '\0')) {
      *(undefined8 *)this = 0;
    }
    if (pOVar1 == (Object *)0x0) {
      return;
    }
  }
  cVar2 = RefCounted::unreference();
  if ((cVar2 != '\0') && (cVar2 = predelete_handler(pOVar1), cVar2 != '\0')) {
    (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
    Memory::free_static(pOVar1,false);
    return;
  }
  return;
}



/* EditorInspectorPluginMaterial::can_handle(Object*) */

bool __thiscall
EditorInspectorPluginMaterial::can_handle(EditorInspectorPluginMaterial *this,Object *param_1)

{
  bool bVar1;
  uint uVar2;
  long *plVar3;
  
  if (param_1 != (Object *)0x0) {
    plVar3 = (long *)__dynamic_cast(param_1,&Object::typeinfo,&Material::typeinfo,0);
    if (plVar3 == (long *)0x0) {
      bVar1 = false;
    }
    else {
      uVar2 = (**(code **)(*plVar3 + 0x1e0))(plVar3);
      bVar1 = uVar2 < 2;
    }
    return bVar1;
  }
  return false;
}



/* ORMMaterial3DConversionPlugin::handles(Ref<Resource> const&) const */

undefined4 __thiscall
ORMMaterial3DConversionPlugin::handles(ORMMaterial3DConversionPlugin *this,Ref *param_1)

{
  char cVar1;
  undefined4 uVar2;
  Object *pOVar3;
  
  if (((*(long *)param_1 == 0) ||
      (pOVar3 = (Object *)
                __dynamic_cast(*(long *)param_1,&Object::typeinfo,&ORMMaterial3D::typeinfo,0),
      pOVar3 == (Object *)0x0)) || (uVar2 = RefCounted::reference(), (char)uVar2 == '\0')) {
    return 0;
  }
  cVar1 = RefCounted::unreference();
  if (cVar1 == '\0') {
    return uVar2;
  }
  cVar1 = predelete_handler(pOVar3);
  if (cVar1 == '\0') {
    return uVar2;
  }
  (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
  Memory::free_static(pOVar3,false);
  return uVar2;
}



/* ProceduralSkyMaterialConversionPlugin::handles(Ref<Resource> const&) const */

undefined4 __thiscall
ProceduralSkyMaterialConversionPlugin::handles
          (ProceduralSkyMaterialConversionPlugin *this,Ref *param_1)

{
  char cVar1;
  undefined4 uVar2;
  Object *pOVar3;
  
  if (((*(long *)param_1 == 0) ||
      (pOVar3 = (Object *)
                __dynamic_cast(*(long *)param_1,&Object::typeinfo,&ProceduralSkyMaterial::typeinfo,0
                              ), pOVar3 == (Object *)0x0)) ||
     (uVar2 = RefCounted::reference(), (char)uVar2 == '\0')) {
    return 0;
  }
  cVar1 = RefCounted::unreference();
  if (cVar1 == '\0') {
    return uVar2;
  }
  cVar1 = predelete_handler(pOVar3);
  if (cVar1 == '\0') {
    return uVar2;
  }
  (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
  Memory::free_static(pOVar3,false);
  return uVar2;
}



/* CanvasItemMaterialConversionPlugin::handles(Ref<Resource> const&) const */

undefined4 __thiscall
CanvasItemMaterialConversionPlugin::handles(CanvasItemMaterialConversionPlugin *this,Ref *param_1)

{
  char cVar1;
  undefined4 uVar2;
  Object *pOVar3;
  
  if (((*(long *)param_1 == 0) ||
      (pOVar3 = (Object *)
                __dynamic_cast(*(long *)param_1,&Object::typeinfo,&CanvasItemMaterial::typeinfo,0),
      pOVar3 == (Object *)0x0)) || (uVar2 = RefCounted::reference(), (char)uVar2 == '\0')) {
    return 0;
  }
  cVar1 = RefCounted::unreference();
  if (cVar1 == '\0') {
    return uVar2;
  }
  cVar1 = predelete_handler(pOVar3);
  if (cVar1 == '\0') {
    return uVar2;
  }
  (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
  Memory::free_static(pOVar3,false);
  return uVar2;
}



/* ParticleProcessMaterialConversionPlugin::handles(Ref<Resource> const&) const */

undefined4 __thiscall
ParticleProcessMaterialConversionPlugin::handles
          (ParticleProcessMaterialConversionPlugin *this,Ref *param_1)

{
  char cVar1;
  undefined4 uVar2;
  Object *pOVar3;
  
  if (((*(long *)param_1 == 0) ||
      (pOVar3 = (Object *)
                __dynamic_cast(*(long *)param_1,&Object::typeinfo,&ParticleProcessMaterial::typeinfo
                               ,0), pOVar3 == (Object *)0x0)) ||
     (uVar2 = RefCounted::reference(), (char)uVar2 == '\0')) {
    return 0;
  }
  cVar1 = RefCounted::unreference();
  if (cVar1 == '\0') {
    return uVar2;
  }
  cVar1 = predelete_handler(pOVar3);
  if (cVar1 == '\0') {
    return uVar2;
  }
  (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
  Memory::free_static(pOVar3,false);
  return uVar2;
}



/* PanoramaSkyMaterialConversionPlugin::handles(Ref<Resource> const&) const */

undefined4 __thiscall
PanoramaSkyMaterialConversionPlugin::handles(PanoramaSkyMaterialConversionPlugin *this,Ref *param_1)

{
  char cVar1;
  undefined4 uVar2;
  Object *pOVar3;
  
  if (((*(long *)param_1 == 0) ||
      (pOVar3 = (Object *)
                __dynamic_cast(*(long *)param_1,&Object::typeinfo,&PanoramaSkyMaterial::typeinfo,0),
      pOVar3 == (Object *)0x0)) || (uVar2 = RefCounted::reference(), (char)uVar2 == '\0')) {
    return 0;
  }
  cVar1 = RefCounted::unreference();
  if (cVar1 == '\0') {
    return uVar2;
  }
  cVar1 = predelete_handler(pOVar3);
  if (cVar1 == '\0') {
    return uVar2;
  }
  (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
  Memory::free_static(pOVar3,false);
  return uVar2;
}



/* FogMaterialConversionPlugin::handles(Ref<Resource> const&) const */

undefined4 __thiscall
FogMaterialConversionPlugin::handles(FogMaterialConversionPlugin *this,Ref *param_1)

{
  char cVar1;
  undefined4 uVar2;
  Object *pOVar3;
  
  if (((*(long *)param_1 == 0) ||
      (pOVar3 = (Object *)
                __dynamic_cast(*(long *)param_1,&Object::typeinfo,&FogMaterial::typeinfo,0),
      pOVar3 == (Object *)0x0)) || (uVar2 = RefCounted::reference(), (char)uVar2 == '\0')) {
    return 0;
  }
  cVar1 = RefCounted::unreference();
  if (cVar1 == '\0') {
    return uVar2;
  }
  cVar1 = predelete_handler(pOVar3);
  if (cVar1 == '\0') {
    return uVar2;
  }
  (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
  Memory::free_static(pOVar3,false);
  return uVar2;
}



/* StandardMaterial3DConversionPlugin::handles(Ref<Resource> const&) const */

undefined4 __thiscall
StandardMaterial3DConversionPlugin::handles(StandardMaterial3DConversionPlugin *this,Ref *param_1)

{
  char cVar1;
  undefined4 uVar2;
  Object *pOVar3;
  
  if (((*(long *)param_1 == 0) ||
      (pOVar3 = (Object *)
                __dynamic_cast(*(long *)param_1,&Object::typeinfo,&StandardMaterial3D::typeinfo,0),
      pOVar3 == (Object *)0x0)) || (uVar2 = RefCounted::reference(), (char)uVar2 == '\0')) {
    return 0;
  }
  cVar1 = RefCounted::unreference();
  if (cVar1 == '\0') {
    return uVar2;
  }
  cVar1 = predelete_handler(pOVar3);
  if (cVar1 == '\0') {
    return uVar2;
  }
  (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
  Memory::free_static(pOVar3,false);
  return uVar2;
}



/* PhysicalSkyMaterialConversionPlugin::handles(Ref<Resource> const&) const */

undefined4 __thiscall
PhysicalSkyMaterialConversionPlugin::handles(PhysicalSkyMaterialConversionPlugin *this,Ref *param_1)

{
  char cVar1;
  undefined4 uVar2;
  Object *pOVar3;
  
  if (((*(long *)param_1 == 0) ||
      (pOVar3 = (Object *)
                __dynamic_cast(*(long *)param_1,&Object::typeinfo,&PhysicalSkyMaterial::typeinfo,0),
      pOVar3 == (Object *)0x0)) || (uVar2 = RefCounted::reference(), (char)uVar2 == '\0')) {
    return 0;
  }
  cVar1 = RefCounted::unreference();
  if (cVar1 == '\0') {
    return uVar2;
  }
  cVar1 = predelete_handler(pOVar3);
  if (cVar1 == '\0') {
    return uVar2;
  }
  (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
  Memory::free_static(pOVar3,false);
  return uVar2;
}



/* ORMMaterial3DConversionPlugin::converts_to() const */

ORMMaterial3DConversionPlugin * __thiscall
ORMMaterial3DConversionPlugin::converts_to(ORMMaterial3DConversionPlugin *this)

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



/* MaterialEditor::_notification(int) */

void __thiscall MaterialEditor::_notification(MaterialEditor *this,int param_1)

{
  long lVar1;
  StringName *pSVar2;
  int iVar3;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == 0x1e) {
    if (this[0xa68] == (MaterialEditor)0x0) {
      Control::get_size();
      CanvasItem::draw_texture_rect((Ref *)this,(Rect2 *)(this + 0xad0),true,(Color *)0x1,true);
    }
  }
  else if (param_1 == 0x2d) {
    Button::set_button_icon(*(Ref **)(this + 0xa98));
    Button::set_button_icon(*(Ref **)(this + 0xaa0));
    Button::set_button_icon(*(Ref **)(this + 0xa80));
    Button::set_button_icon(*(Ref **)(this + 0xa88));
    Button::set_button_icon(*(Ref **)(this + 0xa90));
    pSVar2 = *(StringName **)(this + 0xa60);
    if (_notification(int)::{lambda()#1}::operator()()::sname == '\0') {
      iVar3 = __cxa_guard_acquire(&_notification(int)::{lambda()#1}::operator()()::sname);
      if (iVar3 != 0) {
        _scs_create((char *)&_notification(int)::{lambda()#1}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#1}::operator()()::sname,
                     &__dso_handle);
        __cxa_guard_release(&_notification(int)::{lambda()#1}::operator()()::sname);
      }
    }
    Control::get_theme_color
              ((StringName *)this,
               (StringName *)&_notification(int)::{lambda()#1}::operator()()::sname);
    Control::add_theme_color_override(pSVar2,(Color *)(SceneStringNames::singleton + 0xb0));
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MaterialEditor::_update_rotation() */

void __thiscall MaterialEditor::_update_rotation(MaterialEditor *this)

{
  long in_FS_OFFSET;
  Vector3 local_58 [16];
  undefined1 local_48 [16];
  undefined4 local_38;
  undefined8 local_34;
  undefined4 local_2c;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_58 = (Vector3  [16])ZEXT416(_LC24);
  local_48 = ZEXT416(_LC24);
  local_38 = 0x3f800000;
  local_34 = 0;
  local_2c = 0;
  Basis::rotate(local_58,(float)(*(uint *)(this + 0x9cc) ^ _LC26));
  Basis::rotate(local_58,(float)(*(uint *)(this + 0x9c8) ^ _LC26));
  Node3D::set_transform(*(Transform3D **)(this + 0xa00));
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MaterialEditor::_set_rotation(float, float) */

void __thiscall MaterialEditor::_set_rotation(MaterialEditor *this,float param_1,float param_2)

{
  *(ulong *)(this + 0x9c8) = CONCAT44(param_2 * _LC30._4_4_,param_1 * (float)_LC30);
  _update_rotation(this);
  return;
}



/* MaterialEditor::edit(Ref<Material>, Ref<Environment> const&) */

void MaterialEditor::edit(long param_1,long *param_2)

{
  Object *pOVar1;
  Object *pOVar2;
  char cVar3;
  int iVar4;
  
  pOVar1 = (Object *)*param_2;
  pOVar2 = *(Object **)(param_1 + 0xa78);
  if (pOVar1 != pOVar2) {
    *(Object **)(param_1 + 0xa78) = pOVar1;
    if (pOVar1 != (Object *)0x0) {
      cVar3 = RefCounted::reference();
      if (cVar3 == '\0') {
        *(undefined8 *)(param_1 + 0xa78) = 0;
      }
    }
    if (pOVar2 != (Object *)0x0) {
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
  Camera3D::set_environment(*(Ref **)(param_1 + 0xa30));
  *(undefined1 *)(param_1 + 0xa68) = 0;
  if (*(long *)(param_1 + 0xa78) == 0) {
    CanvasItem::hide();
    return;
  }
  iVar4 = (**(code **)(*(long *)*param_2 + 0x1e0))();
  if (iVar4 == 0) {
    CanvasItem::hide();
    CanvasItem::hide();
    CanvasItem::show();
    CanvasItem::show();
    GeometryInstance3D::set_material_override(*(Ref **)(param_1 + 0xa08));
    GeometryInstance3D::set_material_override(*(Ref **)(param_1 + 0xa10));
    GeometryInstance3D::set_material_override(*(Ref **)(param_1 + 0xa18));
    return;
  }
  if (iVar4 != 1) {
    CanvasItem::show();
    CanvasItem::hide();
    CanvasItem::hide();
    CanvasItem::hide();
    *(undefined1 *)(param_1 + 0xa68) = 1;
    return;
  }
  CanvasItem::hide();
  CanvasItem::hide();
  CanvasItem::show();
  CanvasItem::hide();
                    /* WARNING: Could not recover jumptable at 0x00100a25. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x9e8) + 0x2b8))(*(long **)(param_1 + 0x9e8),param_1 + 0xa78);
  return;
}



/* EditorInspectorPluginMaterial::EditorInspectorPluginMaterial() */

void __thiscall
EditorInspectorPluginMaterial::EditorInspectorPluginMaterial(EditorInspectorPluginMaterial *this)

{
  long lVar1;
  Object *pOVar2;
  undefined8 uVar3;
  char cVar4;
  Environment *this_00;
  CallableCustom *this_01;
  long in_FS_OFFSET;
  Object *local_50;
  Callable local_48 [24];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  RefCounted::RefCounted((RefCounted *)this);
  *(undefined8 *)(this + 0x180) = 0;
  *(code **)this = Environment::Environment;
  StringName::StringName((StringName *)(this + 0x188),"_can_handle",false);
  this[400] = (EditorInspectorPluginMaterial)0x0;
  *(undefined8 *)(this + 0x198) = 0;
  StringName::StringName((StringName *)(this + 0x1a0),"_parse_begin",false);
  this[0x1a8] = (EditorInspectorPluginMaterial)0x0;
  *(undefined8 *)(this + 0x1b0) = 0;
  StringName::StringName((StringName *)(this + 0x1b8),"_parse_category",false);
  this[0x1c0] = (EditorInspectorPluginMaterial)0x0;
  *(undefined8 *)(this + 0x1c8) = 0;
  StringName::StringName((StringName *)(this + 0x1d0),"_parse_group",false);
  this[0x1d8] = (EditorInspectorPluginMaterial)0x0;
  *(undefined8 *)(this + 0x1e0) = 0;
  StringName::StringName((StringName *)(this + 0x1e8),"_parse_property",false);
  this[0x1f0] = (EditorInspectorPluginMaterial)0x0;
  *(undefined8 *)(this + 0x1f8) = 0;
  StringName::StringName((StringName *)(this + 0x200),"_parse_end",false);
  this[0x208] = (EditorInspectorPluginMaterial)0x0;
  *(undefined ***)this = &PTR__initialize_classv_00115f00;
  *(undefined1 (*) [16])(this + 0x210) = (undefined1  [16])0x0;
  this_00 = (Environment *)operator_new(0x418,"");
  Environment::Environment(this_00);
  postinitialize_handler((Object *)this_00);
  cVar4 = RefCounted::init_ref();
  pOVar2 = *(Object **)(this + 0x218);
  if (cVar4 == '\0') {
    if (pOVar2 == (Object *)0x0) goto LAB_00100c5d;
    *(undefined8 *)(this + 0x218) = 0;
    cVar4 = RefCounted::unreference();
    if (cVar4 == '\0') goto LAB_00100c5d;
    this_00 = (Environment *)0x0;
    cVar4 = predelete_handler(pOVar2);
    if (cVar4 == '\0') goto LAB_00100c5d;
LAB_00100e92:
    (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
    Memory::free_static(pOVar2,false);
    if (this_00 == (Environment *)0x0) goto LAB_00100c5d;
  }
  else if (pOVar2 != (Object *)this_00) {
    *(Environment **)(this + 0x218) = this_00;
    cVar4 = RefCounted::reference();
    if (cVar4 == '\0') {
      *(undefined8 *)(this + 0x218) = 0;
      if (pOVar2 != (Object *)0x0) {
        cVar4 = RefCounted::unreference();
joined_r0x00100e3f:
        if ((cVar4 != '\0') && (cVar4 = predelete_handler(pOVar2), cVar4 != '\0'))
        goto LAB_00100e92;
      }
    }
    else if (pOVar2 != (Object *)0x0) {
      cVar4 = RefCounted::unreference();
      goto joined_r0x00100e3f;
    }
  }
  cVar4 = RefCounted::unreference();
  if ((cVar4 != '\0') && (cVar4 = predelete_handler((Object *)this_00), cVar4 != '\0')) {
    (**(code **)(*(long *)this_00 + 0x140))(this_00);
    Memory::free_static(this_00,false);
  }
LAB_00100c5d:
  local_50 = (Object *)operator_new(600,"");
  Sky::Sky((Sky *)local_50);
  postinitialize_handler(local_50);
  cVar4 = RefCounted::init_ref();
  if (cVar4 == '\0') {
    local_50 = (Object *)0x0;
  }
  Environment::set_sky(*(Ref **)(this + 0x218));
  Environment::set_background(*(undefined8 *)(this + 0x218),1);
  Environment::set_ambient_source(*(undefined8 *)(this + 0x218),3);
  Environment::set_reflection_source(*(undefined8 *)(this + 0x218),2);
  lVar1 = EditorNode::singleton + 0x430;
  this_01 = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(this_01);
  *(EditorInspectorPluginMaterial **)(this_01 + 0x28) = this;
  *(undefined1 (*) [16])(this_01 + 0x30) = (undefined1  [16])0x0;
  *(undefined ***)this_01 = &PTR_hash_00116ce0;
  *(undefined8 *)(this_01 + 0x40) = 0;
  uVar3 = *(undefined8 *)(this + 0x60);
  *(undefined8 *)(this_01 + 0x10) = 0;
  *(undefined8 *)(this_01 + 0x30) = uVar3;
  *(code **)(this_01 + 0x38) = _undo_redo_inspector_callback;
  *(undefined **)(this_01 + 0x20) = &_LC37;
  CallableCustomMethodPointerBase::_setup((uint *)this_01,(int)this_01 + 0x28);
  *(char **)(this_01 + 0x20) = "EditorInspectorPluginMaterial::_undo_redo_inspector_callback";
  Callable::Callable(local_48,this_01);
  EditorData::add_undo_redo_inspector_hook_callback(lVar1);
  Callable::~Callable(local_48);
  if (((local_50 != (Object *)0x0) && (cVar4 = RefCounted::unreference(), cVar4 != '\0')) &&
     (cVar4 = predelete_handler(local_50), cVar4 != '\0')) {
    (**(code **)(*(long *)local_50 + 0x140))(local_50);
    Memory::free_static(local_50,false);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Removing unreachable block (ram,0x00101320) */
/* WARNING: Removing unreachable block (ram,0x001014b0) */
/* WARNING: Removing unreachable block (ram,0x001014c3) */
/* MaterialEditorPlugin::MaterialEditorPlugin() */

void __thiscall MaterialEditorPlugin::MaterialEditorPlugin(MaterialEditorPlugin *this)

{
  long lVar1;
  char cVar2;
  EditorInspectorPluginMaterial *this_00;
  Object *pOVar3;
  EditorInspectorPluginMaterial *pEVar4;
  long in_FS_OFFSET;
  Object *local_28;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  Node::Node((Node *)this);
  *(undefined **)this = &EditorInspectorPlugin::typeinfo;
  *(undefined2 *)(this + 0x408) = 0;
  *(undefined1 (*) [16])(this + 0x410) = (undefined1  [16])0x0;
  StringName::StringName((StringName *)(this + 0x420),"_forward_canvas_gui_input",false);
  this[0x428] = (MaterialEditorPlugin)0x0;
  *(undefined8 *)(this + 0x430) = 0;
  StringName::StringName((StringName *)(this + 0x438),"_forward_canvas_draw_over_viewport",false);
  this[0x440] = (MaterialEditorPlugin)0x0;
  *(undefined8 *)(this + 0x448) = 0;
  StringName::StringName
            ((StringName *)(this + 0x450),"_forward_canvas_force_draw_over_viewport",false);
  this[0x458] = (MaterialEditorPlugin)0x0;
  *(undefined8 *)(this + 0x460) = 0;
  StringName::StringName((StringName *)(this + 0x468),"_forward_3d_gui_input",false);
  this[0x470] = (MaterialEditorPlugin)0x0;
  *(undefined8 *)(this + 0x478) = 0;
  StringName::StringName((StringName *)(this + 0x480),"_forward_3d_draw_over_viewport",false);
  this[0x488] = (MaterialEditorPlugin)0x0;
  *(undefined8 *)(this + 0x490) = 0;
  StringName::StringName((StringName *)(this + 0x498),"_forward_3d_force_draw_over_viewport",false);
  this[0x4a0] = (MaterialEditorPlugin)0x0;
  *(undefined8 *)(this + 0x4a8) = 0;
  StringName::StringName((StringName *)(this + 0x4b0),"_get_plugin_name",false);
  this[0x4b8] = (MaterialEditorPlugin)0x0;
  *(undefined8 *)(this + 0x4c0) = 0;
  StringName::StringName((StringName *)(this + 0x4c8),"_get_plugin_icon",false);
  this[0x4d0] = (MaterialEditorPlugin)0x0;
  *(undefined8 *)(this + 0x4d8) = 0;
  StringName::StringName((StringName *)(this + 0x4e0),"_has_main_screen",false);
  this[0x4e8] = (MaterialEditorPlugin)0x0;
  *(undefined8 *)(this + 0x4f0) = 0;
  StringName::StringName((StringName *)(this + 0x4f8),"_make_visible",false);
  this[0x500] = (MaterialEditorPlugin)0x0;
  *(undefined8 *)(this + 0x508) = 0;
  StringName::StringName((StringName *)(this + 0x510),"_edit",false);
  this[0x518] = (MaterialEditorPlugin)0x0;
  *(undefined8 *)(this + 0x520) = 0;
  StringName::StringName((StringName *)(this + 0x528),"_handles",false);
  this[0x530] = (MaterialEditorPlugin)0x0;
  *(undefined8 *)(this + 0x538) = 0;
  StringName::StringName((StringName *)(this + 0x540),"_get_state",false);
  this[0x548] = (MaterialEditorPlugin)0x0;
  *(undefined8 *)(this + 0x550) = 0;
  StringName::StringName((StringName *)(this + 0x558),"_set_state",false);
  this[0x560] = (MaterialEditorPlugin)0x0;
  *(undefined8 *)(this + 0x568) = 0;
  StringName::StringName((StringName *)(this + 0x570),"_clear",false);
  this[0x578] = (MaterialEditorPlugin)0x0;
  *(undefined8 *)(this + 0x580) = 0;
  StringName::StringName((StringName *)(this + 0x588),"_get_unsaved_status",false);
  this[0x590] = (MaterialEditorPlugin)0x0;
  *(undefined8 *)(this + 0x598) = 0;
  StringName::StringName((StringName *)(this + 0x5a0),"_save_external_data",false);
  this[0x5a8] = (MaterialEditorPlugin)0x0;
  *(undefined8 *)(this + 0x5b0) = 0;
  StringName::StringName((StringName *)(this + 0x5b8),"_apply_changes",false);
  this[0x5c0] = (MaterialEditorPlugin)0x0;
  *(undefined8 *)(this + 0x5c8) = 0;
  StringName::StringName((StringName *)(this + 0x5d0),"_get_breakpoints",false);
  this[0x5d8] = (MaterialEditorPlugin)0x0;
  *(undefined8 *)(this + 0x5e0) = 0;
  StringName::StringName((StringName *)(this + 0x5e8),"_set_window_layout",false);
  this[0x5f0] = (MaterialEditorPlugin)0x0;
  *(undefined8 *)(this + 0x5f8) = 0;
  StringName::StringName((StringName *)(this + 0x600),"_get_window_layout",false);
  this[0x608] = (MaterialEditorPlugin)0x0;
  *(undefined8 *)(this + 0x610) = 0;
  StringName::StringName((StringName *)(this + 0x618),"_build",false);
  this[0x620] = (MaterialEditorPlugin)0x0;
  *(undefined8 *)(this + 0x628) = 0;
  StringName::StringName((StringName *)(this + 0x630),"_enable_plugin",false);
  this[0x638] = (MaterialEditorPlugin)0x0;
  *(undefined8 *)(this + 0x640) = 0;
  StringName::StringName((StringName *)(this + 0x648),"_disable_plugin",false);
  this[0x650] = (MaterialEditorPlugin)0x0;
  *(undefined ***)this = &PTR__initialize_classv_00115588;
  *(undefined8 *)(this + 0x658) = 0;
  this_00 = (EditorInspectorPluginMaterial *)operator_new(0x220,"");
  EditorInspectorPluginMaterial::EditorInspectorPluginMaterial(this_00);
  postinitialize_handler((Object *)this_00);
  cVar2 = RefCounted::init_ref();
  if (cVar2 == '\0') {
LAB_0010130c:
    EditorPlugin::add_inspector_plugin((Ref *)this);
  }
  else {
    cVar2 = RefCounted::reference();
    if (cVar2 == '\0') {
      cVar2 = RefCounted::unreference();
      if (cVar2 != '\0') {
        cVar2 = predelete_handler((Object *)this_00);
        pEVar4 = (EditorInspectorPluginMaterial *)0x0;
        if (cVar2 != '\0') goto LAB_00101448;
      }
      goto LAB_0010130c;
    }
    cVar2 = RefCounted::unreference();
    if ((cVar2 != '\0') &&
       (cVar2 = predelete_handler((Object *)this_00), pEVar4 = this_00, cVar2 != '\0')) {
LAB_00101448:
      (**(code **)(*(long *)this_00 + 0x140))(this_00);
      Memory::free_static(this_00,false);
      this_00 = pEVar4;
      if (pEVar4 == (EditorInspectorPluginMaterial *)0x0) goto LAB_0010130c;
    }
    local_28 = (Object *)0x0;
    pOVar3 = (Object *)__dynamic_cast(this_00,&Object::typeinfo,&EditorInspectorPlugin::typeinfo,0);
    if ((pOVar3 != (Object *)0x0) &&
       (cVar2 = RefCounted::reference(), local_28 = pOVar3, cVar2 == '\0')) {
      local_28 = (Object *)0x0;
    }
    EditorPlugin::add_inspector_plugin((Ref *)this);
    if (((local_28 == (Object *)0x0) || (cVar2 = RefCounted::unreference(), cVar2 == '\0')) ||
       (cVar2 = predelete_handler(local_28), cVar2 == '\0')) {
LAB_001013d1:
      cVar2 = RefCounted::unreference();
      if ((cVar2 != '\0') && (cVar2 = predelete_handler((Object *)this_00), cVar2 != '\0')) {
        (**(code **)(*(long *)this_00 + 0x140))(this_00);
        if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
          Memory::free_static(this_00,false);
          return;
        }
        goto LAB_001014c8;
      }
    }
    else {
      (**(code **)(*(long *)local_28 + 0x140))(local_28);
      Memory::free_static(local_28,false);
      if (this_00 != (EditorInspectorPluginMaterial *)0x0) goto LAB_001013d1;
    }
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_001014c8:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MaterialEditor::_store_rotation_metadata() */

void __thiscall MaterialEditor::_store_rotation_metadata(MaterialEditor *this)

{
  String *pSVar1;
  long in_FS_OFFSET;
  undefined8 local_78;
  undefined8 local_70;
  char *local_68;
  undefined8 local_60;
  undefined8 local_50;
  int local_48 [6];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = CONCAT44((float)((ulong)*(undefined8 *)(this + 0x9c8) >> 0x20) * _LC68._4_4_,
                      (float)*(undefined8 *)(this + 0x9c8) * (float)_LC68);
  pSVar1 = (String *)EditorSettings::get_singleton();
  Variant::Variant((Variant *)local_48,(Vector2 *)&local_50);
  local_68 = "material_preview_rotation";
  local_70 = 0;
  local_60 = 0x19;
  String::parse_latin1((StrRange *)&local_70);
  local_68 = "inspector_options";
  local_78 = 0;
  local_60 = 0x11;
  String::parse_latin1((StrRange *)&local_78);
  EditorSettings::set_project_metadata(pSVar1,(String *)&local_78,(Variant *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  if (Variant::needs_deinit[local_48[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MaterialEditor::gui_input(Ref<InputEvent> const&) */

void __thiscall MaterialEditor::gui_input(MaterialEditor *this,Ref *param_1)

{
  char cVar1;
  Object *pOVar2;
  ulong uVar3;
  float fVar4;
  float extraout_XMM0_Db;
  undefined8 uVar5;
  double dVar6;
  
  if (*(long *)param_1 == 0) {
    _err_print_error("gui_input","editor/plugins/material_editor_plugin.cpp",0x36,
                     "Condition \"p_event.is_null()\" is true.",0,0);
    return;
  }
  pOVar2 = (Object *)
           __dynamic_cast(*(long *)param_1,&Object::typeinfo,&InputEventMouseMotion::typeinfo,0);
  if ((pOVar2 != (Object *)0x0) && (cVar1 = RefCounted::reference(), cVar1 != '\0')) {
    uVar3 = InputEventMouse::get_button_mask();
    if ((uVar3 & 1) != 0) {
      InputEventMouseMotion::get_relative();
      *(float *)(this + 0x9c8) =
           (float)((double)*(float *)(this + 0x9c8) - (double)extraout_XMM0_Db * __LC76);
      fVar4 = (float)InputEventMouseMotion::get_relative();
      *(float *)(this + 0x9cc) = (float)((double)*(float *)(this + 0x9cc) - (double)fVar4 * __LC76);
      cVar1 = Node3D::is_visible();
      if (cVar1 == '\0') {
        dVar6 = (double)*(float *)(this + 0x9c8);
        fVar4 = _LC71;
        if ((_LC79 <= dVar6) && (fVar4 = *(float *)(this + 0x9c8), __LC80 < dVar6)) {
          fVar4 = _LC72;
        }
        *(float *)(this + 0x9c8) = fVar4;
      }
      else {
        uVar5 = Vector2::clampf(_LC78,_LC77);
        *(undefined8 *)(this + 0x9c8) = uVar5;
      }
      _update_rotation(this);
      _store_rotation_metadata(this);
    }
    cVar1 = RefCounted::unreference();
    if ((cVar1 != '\0') && (cVar1 = predelete_handler(pOVar2), cVar1 != '\0')) {
      (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
      Memory::free_static(pOVar2,false);
      return;
    }
  }
  return;
}



/* MaterialEditor::_on_sphere_switch_pressed() */

void __thiscall MaterialEditor::_on_sphere_switch_pressed(MaterialEditor *this)

{
  String *pSVar1;
  long in_FS_OFFSET;
  undefined8 local_68;
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  int local_48 [6];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  Node3D::show();
  Node3D::hide();
  Node3D::hide();
  BaseButton::set_pressed(SUB81(*(undefined8 *)(this + 0xa88),0));
  BaseButton::set_pressed(SUB81(*(undefined8 *)(this + 0xa90),0));
  *(undefined8 *)(this + 0x9c8) = _LC81;
  _update_rotation(this);
  _store_rotation_metadata(this);
  pSVar1 = (String *)EditorSettings::get_singleton();
  Variant::Variant((Variant *)local_48,"sphere");
  local_58 = "material_preview_mesh";
  local_60 = 0;
  local_50 = 0x15;
  String::parse_latin1((StrRange *)&local_60);
  local_58 = "inspector_options";
  local_68 = 0;
  local_50 = 0x11;
  String::parse_latin1((StrRange *)&local_68);
  EditorSettings::set_project_metadata(pSVar1,(String *)&local_68,(Variant *)&local_60);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  if (Variant::needs_deinit[local_48[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MaterialEditor::_on_box_switch_pressed() */

void __thiscall MaterialEditor::_on_box_switch_pressed(MaterialEditor *this)

{
  String *pSVar1;
  long in_FS_OFFSET;
  undefined8 local_68;
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  int local_48 [6];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  Node3D::hide();
  Node3D::show();
  Node3D::hide();
  BaseButton::set_pressed(SUB81(*(undefined8 *)(this + 0xa80),0));
  BaseButton::set_pressed(SUB81(*(undefined8 *)(this + 0xa90),0));
  *(undefined8 *)(this + 0x9c8) = _LC81;
  _update_rotation(this);
  _store_rotation_metadata(this);
  pSVar1 = (String *)EditorSettings::get_singleton();
  Variant::Variant((Variant *)local_48,"box");
  local_58 = "material_preview_mesh";
  local_60 = 0;
  local_50 = 0x15;
  String::parse_latin1((StrRange *)&local_60);
  local_58 = "inspector_options";
  local_68 = 0;
  local_50 = 0x11;
  String::parse_latin1((StrRange *)&local_68);
  EditorSettings::set_project_metadata(pSVar1,(String *)&local_68,(Variant *)&local_60);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  if (Variant::needs_deinit[local_48[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MaterialEditor::_on_quad_switch_pressed() */

void __thiscall MaterialEditor::_on_quad_switch_pressed(MaterialEditor *this)

{
  String *pSVar1;
  long in_FS_OFFSET;
  undefined8 local_68;
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  int local_48 [6];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  Node3D::hide();
  Node3D::hide();
  Node3D::show();
  BaseButton::set_pressed(SUB81(*(undefined8 *)(this + 0xa80),0));
  BaseButton::set_pressed(SUB81(*(undefined8 *)(this + 0xa88),0));
  *(undefined8 *)(this + 0x9c8) = 0;
  _update_rotation(this);
  _store_rotation_metadata(this);
  pSVar1 = (String *)EditorSettings::get_singleton();
  Variant::Variant((Variant *)local_48,"quad");
  local_58 = "material_preview_mesh";
  local_60 = 0;
  local_50 = 0x15;
  String::parse_latin1((StrRange *)&local_60);
  local_58 = "inspector_options";
  local_68 = 0;
  local_50 = 0x11;
  String::parse_latin1((StrRange *)&local_68);
  EditorSettings::set_project_metadata(pSVar1,(String *)&local_68,(Variant *)&local_60);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  if (Variant::needs_deinit[local_48[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
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



/* WARNING: Removing unreachable block (ram,0x00102236) */
/* WARNING: Removing unreachable block (ram,0x00103740) */
/* WARNING: Removing unreachable block (ram,0x00103269) */
/* WARNING: Removing unreachable block (ram,0x00103960) */
/* WARNING: Removing unreachable block (ram,0x00103970) */
/* WARNING: Removing unreachable block (ram,0x0010375a) */
/* WARNING: Removing unreachable block (ram,0x0010377d) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MaterialEditor::MaterialEditor() */

void __thiscall MaterialEditor::MaterialEditor(MaterialEditor *this)

{
  Vector2 *pVVar1;
  Transform3D *pTVar2;
  StringName *pSVar3;
  long *plVar4;
  code *pcVar5;
  uint uVar6;
  undefined1 auVar7 [16];
  char cVar8;
  bool bVar9;
  SubViewportContainer *pSVar10;
  SubViewport *pSVar11;
  BoxContainer *pBVar12;
  Control *this_00;
  Label *this_01;
  World3D *this_02;
  Camera3D *this_03;
  DirectionalLight3D *pDVar13;
  Node3D *this_04;
  MeshInstance3D *pMVar14;
  SphereMesh *this_05;
  Object *pOVar15;
  BoxMesh *this_06;
  PlaneMesh *this_07;
  Button *pBVar16;
  String *pSVar17;
  CameraAttributesPractical *this_08;
  long lVar18;
  Ref *pRVar19;
  Object *pOVar20;
  long in_FS_OFFSET;
  float fVar21;
  undefined8 uVar22;
  World3D *local_f0;
  String local_e8 [8];
  undefined8 local_e0;
  Object *local_d8 [2];
  undefined8 local_c8;
  undefined4 local_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  undefined4 local_88;
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined4 local_58;
  undefined8 local_54;
  undefined4 local_4c;
  long local_40;
  
  local_78._8_8_ = local_78._0_8_;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Control::Control((Control *)this);
  *(undefined ***)this = &PTR__initialize_classv_00115b98;
  *(undefined8 *)(this + 0x9c8) = 0;
  *(undefined8 *)(this + 0xa60) = 0;
  this[0xa68] = (MaterialEditor)0x0;
  *(undefined8 *)(this + 0xad0) = 0;
  *(undefined1 (*) [16])(this + 0x9d0) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x9e0) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x9f0) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xa00) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xa10) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xa20) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xa30) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xa40) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xa50) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xa70) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xa80) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xa90) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xaa0) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xab0) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xac0) = (undefined1  [16])0x0;
  pSVar10 = (SubViewportContainer *)operator_new(0xa28,"");
  SubViewportContainer::SubViewportContainer(pSVar10);
  postinitialize_handler((Object *)pSVar10);
  *(SubViewportContainer **)(this + 0x9d0) = pSVar10;
  SubViewportContainer::set_stretch(SUB81(pSVar10,0));
  Node::add_child(this,*(undefined8 *)(this + 0x9d0),0,0);
  Control::set_anchors_and_offsets_preset(*(undefined8 *)(this + 0x9d0),0xf,0,0);
  pSVar11 = (SubViewport *)operator_new(0x998,"");
  SubViewport::SubViewport(pSVar11);
  postinitialize_handler((Object *)pSVar11);
  *(SubViewport **)(this + 0x9d8) = pSVar11;
  Node::add_child(*(undefined8 *)(this + 0x9d0),pSVar11,0,0);
  Viewport::set_disable_input(SUB81(*(undefined8 *)(this + 0x9d8),0));
  Viewport::set_transparent_background(SUB81(*(undefined8 *)(this + 0x9d8),0));
  pBVar12 = (BoxContainer *)operator_new(0xa10,"");
  BoxContainer::BoxContainer(pBVar12,false);
  pBVar12[0xa0c] = (BoxContainer)0x1;
  *(undefined ***)pBVar12 = &PTR__initialize_classv_00114c28;
  postinitialize_handler((Object *)pBVar12);
  *(BoxContainer **)(this + 0x9e0) = pBVar12;
  BoxContainer::set_alignment(pBVar12,1);
  Node::add_child(*(undefined8 *)(this + 0x9d8),*(undefined8 *)(this + 0x9e0),0,0);
  Control::set_anchors_and_offsets_preset(*(undefined8 *)(this + 0x9e0),0xf,0,0);
  this_00 = (Control *)operator_new(0x9d8,"");
  Control::Control(this_00);
  uVar6 = _LC24;
  *(undefined ***)this_00 = &PTR__initialize_classv_00115830;
  *(uint *)(this_00 + 0x9c8) = uVar6;
  *(uint *)(this_00 + 0x9cc) = uVar6;
  *(uint *)(this_00 + 0x9d0) = uVar6;
  *(uint *)(this_00 + 0x9d4) = uVar6;
  postinitialize_handler((Object *)this_00);
  *(Control **)(this + 0x9e8) = this_00;
  Node::add_child(*(undefined8 *)(this + 0x9e0),this_00,0,0);
  pVVar1 = *(Vector2 **)(this + 0x9e8);
  fVar21 = (float)EditorScale::get_scale();
  local_78._4_4_ = fVar21 * _LC90;
  local_78._0_4_ = fVar21 * _LC90;
  Control::set_custom_minimum_size(pVVar1);
  CanvasItem::set_visible(SUB81(*(undefined8 *)(this + 0x9e0),0));
  pBVar12 = (BoxContainer *)operator_new(0xa10,"");
  BoxContainer::BoxContainer(pBVar12,true);
  pBVar12[0xa0c] = (BoxContainer)0x1;
  *(undefined ***)pBVar12 = &PTR__initialize_classv_00114fa0;
  postinitialize_handler((Object *)pBVar12);
  *(BoxContainer **)(this + 0xa58) = pBVar12;
  BoxContainer::set_alignment(pBVar12,1);
  Control::set_anchors_and_offsets_preset(*(undefined8 *)(this + 0xa58),0xf,0);
  this_01 = (Label *)operator_new(0xad8,"");
  local_d8[0] = (Object *)0x0;
  Label::Label(this_01,(String *)local_d8);
  postinitialize_handler((Object *)this_01);
  *(Label **)(this + 0xa60) = this_01;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_d8);
  pSVar17 = *(String **)(this + 0xa60);
  local_d8[0] = (Object *)0x0;
  String::parse_latin1((String *)local_d8,"");
  local_e0 = 0;
  String::parse_latin1((String *)&local_e0,"Preview is not available for this shader mode.");
  TTR(local_e8,(String *)&local_e0);
  Label::set_text(pSVar17);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_e8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_d8);
  Label::set_horizontal_alignment(*(undefined8 *)(this + 0xa60),1);
  Label::set_vertical_alignment(*(undefined8 *)(this + 0xa60),1);
  Label::set_autowrap_mode(*(undefined8 *)(this + 0xa60),3);
  Node::add_child(*(undefined8 *)(this + 0xa58),*(undefined8 *)(this + 0xa60),0,0);
  CanvasItem::hide();
  Node::add_child(this,*(undefined8 *)(this + 0xa58),0,0);
  pSVar10 = (SubViewportContainer *)operator_new(0xa28,"");
  SubViewportContainer::SubViewportContainer(pSVar10);
  postinitialize_handler((Object *)pSVar10);
  *(SubViewportContainer **)(this + 0x9f0) = pSVar10;
  SubViewportContainer::set_stretch(SUB81(pSVar10,0));
  Node::add_child(this,*(undefined8 *)(this + 0x9f0),0,0);
  Control::set_anchors_and_offsets_preset(*(undefined8 *)(this + 0x9f0),0xf,0,0);
  pSVar11 = (SubViewport *)operator_new(0x998,"");
  SubViewport::SubViewport(pSVar11);
  postinitialize_handler((Object *)pSVar11);
  *(SubViewport **)(this + 0x9f8) = pSVar11;
  local_f0 = (World3D *)0x0;
  this_02 = (World3D *)operator_new(0x2a0,"");
  World3D::World3D(this_02);
  postinitialize_handler((Object *)this_02);
  cVar8 = RefCounted::init_ref();
  if (cVar8 != '\0') {
    pOVar15 = (Object *)0x0;
    if ((this_02 != (World3D *)0x0) &&
       (cVar8 = RefCounted::reference(), pOVar15 = (Object *)this_02, local_f0 = this_02,
       cVar8 == '\0')) {
      local_f0 = (World3D *)0x0;
    }
    cVar8 = RefCounted::unreference();
    if ((cVar8 != '\0') && (cVar8 = predelete_handler(pOVar15), cVar8 != '\0')) {
      (**(code **)(*(long *)pOVar15 + 0x140))(pOVar15);
      Memory::free_static(pOVar15,false);
    }
  }
  Viewport::set_world_3d(*(Ref **)(this + 0x9f8));
  Node::add_child(*(undefined8 *)(this + 0x9f0),*(undefined8 *)(this + 0x9f8),0,0);
  Viewport::set_disable_input(SUB81(*(undefined8 *)(this + 0x9f8),0));
  Viewport::set_transparent_background(SUB81(*(undefined8 *)(this + 0x9f8),0));
  Viewport::set_msaa_3d(*(undefined8 *)(this + 0x9f8),2);
  this_03 = (Camera3D *)operator_new(0x688,"");
  Camera3D::Camera3D(this_03);
  postinitialize_handler((Object *)this_03);
  *(Camera3D **)(this + 0xa30) = this_03;
  local_a8 = ZEXT416(_LC24);
  local_98 = ZEXT416(_LC24);
  local_b8 = 0;
  local_b0 = 0x3f8ccccd;
  local_88 = 0x3f800000;
  Transform3D::Transform3D((Transform3D *)local_78,(Basis *)local_a8,(Vector3 *)&local_b8);
  Node3D::set_transform((Transform3D *)this_03);
  Camera3D::set_perspective(_LC95,_LC94,_LC93);
  Camera3D::make_current();
  ProjectSettings::get_singleton();
  StringName::StringName
            ((StringName *)local_d8,"rendering/lights_and_shadows/use_physical_light_units",false);
  ProjectSettings::get_setting_with_override((StringName *)local_78);
  bVar9 = Variant::operator_cast_to_bool((Variant *)local_78);
  if (Variant::needs_deinit[(int)local_78._0_4_] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_d8[0] != (Object *)0x0)) {
    StringName::unref();
  }
  if (bVar9) {
    this_08 = (CameraAttributesPractical *)operator_new(0x280,"");
    CameraAttributesPractical::CameraAttributesPractical(this_08);
    postinitialize_handler((Object *)this_08);
    cVar8 = RefCounted::init_ref();
    if (cVar8 == '\0') {
      pOVar15 = *(Object **)(this + 0xa38);
      if (pOVar15 != (Object *)0x0) {
        *(undefined8 *)(this + 0xa38) = 0;
        cVar8 = RefCounted::unreference();
        if ((cVar8 == '\0') || (cVar8 = predelete_handler(pOVar15), cVar8 == '\0'))
        goto LAB_0010354b;
        (**(code **)(*(long *)pOVar15 + 0x140))(pOVar15);
        Memory::free_static(pOVar15,false);
        lVar18 = *(long *)(this + 0xa38);
        goto LAB_00103552;
      }
      local_d8[0] = (Object *)0x0;
      pRVar19 = *(Ref **)(this + 0xa30);
    }
    else {
      pOVar15 = *(Object **)(this + 0xa38);
      pOVar20 = pOVar15;
      if (this_08 != (CameraAttributesPractical *)pOVar15) {
        *(CameraAttributesPractical **)(this + 0xa38) = this_08;
        cVar8 = RefCounted::reference();
        if (cVar8 == '\0') {
          *(undefined8 *)(this + 0xa38) = 0;
        }
        pOVar20 = (Object *)this_08;
        if (((pOVar15 != (Object *)0x0) && (cVar8 = RefCounted::unreference(), cVar8 != '\0')) &&
           (cVar8 = predelete_handler(pOVar15), cVar8 != '\0')) {
          (**(code **)(*(long *)pOVar15 + 0x140))(pOVar15);
          Memory::free_static(pOVar15,false);
        }
      }
      cVar8 = RefCounted::unreference();
      if ((cVar8 != '\0') && (cVar8 = predelete_handler(pOVar20), cVar8 != '\0')) {
        (**(code **)(*(long *)pOVar20 + 0x140))(pOVar20);
        Memory::free_static(pOVar20,false);
      }
LAB_0010354b:
      lVar18 = *(long *)(this + 0xa38);
LAB_00103552:
      local_d8[0] = (Object *)0x0;
      pRVar19 = *(Ref **)(this + 0xa30);
      if (((lVar18 != 0) &&
          (pOVar15 = (Object *)
                     __dynamic_cast(lVar18,&Object::typeinfo,&CameraAttributes::typeinfo,0),
          pOVar15 != (Object *)0x0)) &&
         (local_d8[0] = pOVar15, cVar8 = RefCounted::reference(), cVar8 == '\0')) {
        local_d8[0] = (Object *)0x0;
      }
    }
    Camera3D::set_attributes(pRVar19);
    if (((local_d8[0] != (Object *)0x0) &&
        (cVar8 = RefCounted::unreference(), pOVar15 = local_d8[0], cVar8 != '\0')) &&
       (cVar8 = predelete_handler(local_d8[0]), cVar8 != '\0')) {
      (**(code **)(*(long *)pOVar15 + 0x140))(pOVar15);
      Memory::free_static(pOVar15,false);
    }
  }
  Node::add_child(*(undefined8 *)(this + 0x9f8),*(undefined8 *)(this + 0xa30),0,0);
  pDVar13 = (DirectionalLight3D *)operator_new(0x628,"");
  DirectionalLight3D::DirectionalLight3D(pDVar13);
  postinitialize_handler((Object *)pDVar13);
  *(DirectionalLight3D **)(this + 0xa20) = pDVar13;
  local_78 = ZEXT416(_LC24);
  local_68 = ZEXT416(_LC24);
  local_b8 = _LC27;
  local_c8 = _LC97;
  local_58 = 0x3f800000;
  local_54 = 0;
  local_4c = 0;
  local_b0 = 0;
  local_c0 = 0xbf800000;
  Transform3D::looking_at((Vector3 *)local_a8,(Vector3 *)local_78,SUB81(&local_c8,0));
  Node3D::set_transform((Transform3D *)pDVar13);
  Node::add_child(*(undefined8 *)(this + 0x9f8),*(undefined8 *)(this + 0xa20),0,0);
  pDVar13 = (DirectionalLight3D *)operator_new(0x628,"");
  DirectionalLight3D::DirectionalLight3D(pDVar13);
  postinitialize_handler((Object *)pDVar13);
  *(DirectionalLight3D **)(this + 0xa28) = pDVar13;
  local_78 = ZEXT416(_LC24);
  local_68 = ZEXT416(_LC24);
  local_c8 = _LC27;
  local_58 = 0x3f800000;
  local_54 = 0;
  local_4c = 0;
  local_b8 = 0;
  local_b0 = 0x3f800000;
  local_c0 = 0;
  Transform3D::looking_at((Vector3 *)local_a8,(Vector3 *)local_78,SUB81(&local_c8,0));
  Node3D::set_transform((Transform3D *)pDVar13);
  local_78._8_8_ = ram0x00117108;
  local_78[0] = _LC99[0];
  local_78[1] = _LC99[1];
  local_78[2] = _LC99[2];
  local_78[3] = _LC99[3];
  local_78[4] = _LC99[4];
  local_78[5] = _LC99[5];
  local_78[6] = _LC99[6];
  local_78[7] = _LC99[7];
  Light3D::set_color(*(Color **)(this + 0xa28));
  Node::add_child(*(undefined8 *)(this + 0x9f8),*(undefined8 *)(this + 0xa28),0,0);
  this_04 = (Node3D *)operator_new(0x528,"");
  Node3D::Node3D(this_04);
  postinitialize_handler((Object *)this_04);
  *(Node3D **)(this + 0xa00) = this_04;
  Node::add_child(*(undefined8 *)(this + 0x9f8),this_04,0,0);
  pMVar14 = (MeshInstance3D *)operator_new(0x6a0,"");
  MeshInstance3D::MeshInstance3D(pMVar14);
  postinitialize_handler((Object *)pMVar14);
  *(MeshInstance3D **)(this + 0xa08) = pMVar14;
  Node::add_child(*(undefined8 *)(this + 0xa00),pMVar14,0,0);
  pMVar14 = (MeshInstance3D *)operator_new(0x6a0,"");
  MeshInstance3D::MeshInstance3D(pMVar14);
  postinitialize_handler((Object *)pMVar14);
  *(MeshInstance3D **)(this + 0xa10) = pMVar14;
  Node::add_child(*(undefined8 *)(this + 0xa00),pMVar14,0,0);
  pMVar14 = (MeshInstance3D *)operator_new(0x6a0,"");
  MeshInstance3D::MeshInstance3D(pMVar14);
  postinitialize_handler((Object *)pMVar14);
  *(MeshInstance3D **)(this + 0xa18) = pMVar14;
  Node::add_child(*(undefined8 *)(this + 0xa00),pMVar14,0,0);
  pTVar2 = *(Transform3D **)(this + 0xa08);
  local_58 = 0x3f800000;
  local_78 = ZEXT416(_LC24);
  local_68 = ZEXT416(_LC24);
  local_54 = 0;
  local_4c = 0;
  Transform3D::operator*((Transform3D *)local_a8,_LC100);
  Node3D::set_transform(pTVar2);
  pTVar2 = *(Transform3D **)(this + 0xa10);
  local_58 = 0x3f800000;
  local_78 = ZEXT416(_LC24);
  local_68 = ZEXT416(_LC24);
  local_54 = 0;
  local_4c = 0;
  Transform3D::operator*((Transform3D *)local_a8,_LC101);
  Node3D::set_transform(pTVar2);
  pTVar2 = *(Transform3D **)(this + 0xa18);
  local_78 = ZEXT416(_LC24);
  local_58 = 0x3f800000;
  local_54 = 0;
  local_4c = 0;
  local_68 = local_78;
  Transform3D::operator*((Transform3D *)local_a8,_LC100);
  Node3D::set_transform(pTVar2);
  this_05 = (SphereMesh *)operator_new(0x450,"");
  SphereMesh::SphereMesh(this_05);
  postinitialize_handler((Object *)this_05);
  cVar8 = RefCounted::init_ref();
  if (cVar8 == '\0') {
    pOVar15 = *(Object **)(this + 0xa40);
    if (pOVar15 != (Object *)0x0) {
      *(undefined8 *)(this + 0xa40) = 0;
      cVar8 = RefCounted::unreference();
      if ((cVar8 == '\0') || (cVar8 = predelete_handler(pOVar15), cVar8 == '\0')) goto LAB_001027f8;
      (**(code **)(*(long *)pOVar15 + 0x140))(pOVar15);
      Memory::free_static(pOVar15,false);
      lVar18 = *(long *)(this + 0xa40);
      goto LAB_001027ff;
    }
    local_d8[0] = (Object *)0x0;
    pRVar19 = *(Ref **)(this + 0xa08);
  }
  else {
    pOVar15 = *(Object **)(this + 0xa40);
    pOVar20 = pOVar15;
    if (this_05 != (SphereMesh *)pOVar15) {
      *(SphereMesh **)(this + 0xa40) = this_05;
      cVar8 = RefCounted::reference();
      if (cVar8 == '\0') {
        *(undefined8 *)(this + 0xa40) = 0;
      }
      pOVar20 = (Object *)this_05;
      if (((pOVar15 != (Object *)0x0) && (cVar8 = RefCounted::unreference(), cVar8 != '\0')) &&
         (cVar8 = predelete_handler(pOVar15), cVar8 != '\0')) {
        (**(code **)(*(long *)pOVar15 + 0x140))(pOVar15);
        Memory::free_static(pOVar15,false);
      }
    }
    cVar8 = RefCounted::unreference();
    if ((cVar8 != '\0') && (cVar8 = predelete_handler(pOVar20), cVar8 != '\0')) {
      (**(code **)(*(long *)pOVar20 + 0x140))(pOVar20);
      Memory::free_static(pOVar20,false);
    }
LAB_001027f8:
    lVar18 = *(long *)(this + 0xa40);
LAB_001027ff:
    local_d8[0] = (Object *)0x0;
    pRVar19 = *(Ref **)(this + 0xa08);
    if (((lVar18 != 0) &&
        (pOVar15 = (Object *)__dynamic_cast(lVar18,&Object::typeinfo,&Mesh::typeinfo,0),
        pOVar15 != (Object *)0x0)) &&
       (local_d8[0] = pOVar15, cVar8 = RefCounted::reference(), cVar8 == '\0')) {
      local_d8[0] = (Object *)0x0;
    }
  }
  MeshInstance3D::set_mesh(pRVar19);
  if (((local_d8[0] != (Object *)0x0) &&
      (cVar8 = RefCounted::unreference(), pOVar15 = local_d8[0], cVar8 != '\0')) &&
     (cVar8 = predelete_handler(local_d8[0]), cVar8 != '\0')) {
    (**(code **)(*(long *)pOVar15 + 0x140))(pOVar15);
    Memory::free_static(pOVar15,false);
  }
  this_06 = (BoxMesh *)operator_new(0x450,"");
  BoxMesh::BoxMesh(this_06);
  postinitialize_handler((Object *)this_06);
  cVar8 = RefCounted::init_ref();
  if (cVar8 == '\0') {
    pOVar15 = *(Object **)(this + 0xa48);
    if (pOVar15 != (Object *)0x0) {
      *(undefined8 *)(this + 0xa48) = 0;
      cVar8 = RefCounted::unreference();
      if ((cVar8 == '\0') || (cVar8 = predelete_handler(pOVar15), cVar8 == '\0')) goto LAB_001028c0;
      (**(code **)(*(long *)pOVar15 + 0x140))(pOVar15);
      Memory::free_static(pOVar15,false);
      lVar18 = *(long *)(this + 0xa48);
      goto LAB_001028c7;
    }
    local_d8[0] = (Object *)0x0;
    pRVar19 = *(Ref **)(this + 0xa10);
  }
  else {
    pOVar15 = *(Object **)(this + 0xa48);
    pOVar20 = pOVar15;
    if (this_06 != (BoxMesh *)pOVar15) {
      *(BoxMesh **)(this + 0xa48) = this_06;
      cVar8 = RefCounted::reference();
      if (cVar8 == '\0') {
        *(undefined8 *)(this + 0xa48) = 0;
      }
      pOVar20 = (Object *)this_06;
      if (((pOVar15 != (Object *)0x0) && (cVar8 = RefCounted::unreference(), cVar8 != '\0')) &&
         (cVar8 = predelete_handler(pOVar15), cVar8 != '\0')) {
        (**(code **)(*(long *)pOVar15 + 0x140))(pOVar15);
        Memory::free_static(pOVar15,false);
      }
    }
    cVar8 = RefCounted::unreference();
    if ((cVar8 != '\0') && (cVar8 = predelete_handler(pOVar20), cVar8 != '\0')) {
      (**(code **)(*(long *)pOVar20 + 0x140))(pOVar20);
      Memory::free_static(pOVar20,false);
    }
LAB_001028c0:
    lVar18 = *(long *)(this + 0xa48);
LAB_001028c7:
    local_d8[0] = (Object *)0x0;
    pRVar19 = *(Ref **)(this + 0xa10);
    if (((lVar18 != 0) &&
        (pOVar15 = (Object *)__dynamic_cast(lVar18,&Object::typeinfo,&Mesh::typeinfo,0),
        pOVar15 != (Object *)0x0)) &&
       (local_d8[0] = pOVar15, cVar8 = RefCounted::reference(), cVar8 == '\0')) {
      local_d8[0] = (Object *)0x0;
    }
  }
  MeshInstance3D::set_mesh(pRVar19);
  if (((local_d8[0] != (Object *)0x0) &&
      (cVar8 = RefCounted::unreference(), pOVar15 = local_d8[0], cVar8 != '\0')) &&
     (cVar8 = predelete_handler(local_d8[0]), cVar8 != '\0')) {
    (**(code **)(*(long *)pOVar15 + 0x140))(pOVar15);
    Memory::free_static(pOVar15,false);
  }
  this_07 = (PlaneMesh *)operator_new(0x458,"");
  PlaneMesh::PlaneMesh(this_07);
  *(undefined ***)this_07 = &PTR__initialize_classv_00115318;
  PlaneMesh::set_orientation(this_07,2);
  local_78._0_8_ = _LC102;
  PlaneMesh::set_size((Vector2 *)this_07);
  postinitialize_handler((Object *)this_07);
  cVar8 = RefCounted::init_ref();
  if (cVar8 == '\0') {
    pOVar15 = *(Object **)(this + 0xa50);
    if (pOVar15 == (Object *)0x0) {
      local_d8[0] = (Object *)0x0;
      pRVar19 = *(Ref **)(this + 0xa18);
      goto LAB_00102a04;
    }
    *(undefined8 *)(this + 0xa50) = 0;
    cVar8 = RefCounted::unreference();
    if ((cVar8 == '\0') || (cVar8 = predelete_handler(pOVar15), cVar8 == '\0')) goto LAB_001029b9;
    (**(code **)(*(long *)pOVar15 + 0x140))(pOVar15);
    Memory::free_static(pOVar15,false);
    lVar18 = *(long *)(this + 0xa50);
  }
  else {
    pOVar15 = *(Object **)(this + 0xa50);
    pOVar20 = pOVar15;
    if (this_07 != (PlaneMesh *)pOVar15) {
      *(PlaneMesh **)(this + 0xa50) = this_07;
      cVar8 = RefCounted::reference();
      if (cVar8 == '\0') {
        *(undefined8 *)(this + 0xa50) = 0;
      }
      pOVar20 = (Object *)this_07;
      if (((pOVar15 != (Object *)0x0) && (cVar8 = RefCounted::unreference(), cVar8 != '\0')) &&
         (cVar8 = predelete_handler(pOVar15), cVar8 != '\0')) {
        (**(code **)(*(long *)pOVar15 + 0x140))(pOVar15);
        Memory::free_static(pOVar15,false);
      }
    }
    cVar8 = RefCounted::unreference();
    if ((cVar8 != '\0') && (cVar8 = predelete_handler(pOVar20), cVar8 != '\0')) {
      (**(code **)(*(long *)pOVar20 + 0x140))(pOVar20);
      Memory::free_static(pOVar20,false);
    }
LAB_001029b9:
    lVar18 = *(long *)(this + 0xa50);
  }
  local_d8[0] = (Object *)0x0;
  pRVar19 = *(Ref **)(this + 0xa18);
  if (((lVar18 != 0) &&
      (pOVar15 = (Object *)__dynamic_cast(lVar18,&Object::typeinfo,&Mesh::typeinfo,0),
      pOVar15 != (Object *)0x0)) &&
     (local_d8[0] = pOVar15, cVar8 = RefCounted::reference(), cVar8 == '\0')) {
    local_d8[0] = (Object *)0x0;
  }
LAB_00102a04:
  MeshInstance3D::set_mesh(pRVar19);
  if (((local_d8[0] != (Object *)0x0) &&
      (cVar8 = RefCounted::unreference(), pOVar15 = local_d8[0], cVar8 != '\0')) &&
     (cVar8 = predelete_handler(local_d8[0]), cVar8 != '\0')) {
    (**(code **)(*(long *)pOVar15 + 0x140))(pOVar15);
    Memory::free_static(pOVar15,false);
  }
  fVar21 = (float)EditorScale::get_scale();
  auVar7 = local_78;
  local_78._4_4_ = _LC90 * fVar21;
  local_78._0_4_ = fVar21;
  local_78._8_8_ = auVar7._8_8_;
  Control::set_custom_minimum_size((Vector2 *)this);
  pBVar12 = (BoxContainer *)operator_new(0xa10,"");
  BoxContainer::BoxContainer(pBVar12,false);
  pBVar12[0xa0c] = (BoxContainer)0x1;
  *(undefined ***)pBVar12 = &PTR__initialize_classv_00114c28;
  postinitialize_handler((Object *)pBVar12);
  *(BoxContainer **)(this + 0xa70) = pBVar12;
  Node::add_child(this,pBVar12,0,0);
  Control::set_anchors_and_offsets_preset(*(undefined8 *)(this + 0xa70),0xf,0,2);
  pBVar12 = (BoxContainer *)operator_new(0xa10,"");
  BoxContainer::BoxContainer(pBVar12,true);
  pBVar12[0xa0c] = (BoxContainer)0x1;
  *(undefined ***)pBVar12 = &PTR__initialize_classv_00114fa0;
  postinitialize_handler((Object *)pBVar12);
  Node::add_child(*(undefined8 *)(this + 0xa70),pBVar12,0,0);
  pBVar16 = (Button *)operator_new(0xc10,"");
  local_d8[0] = (Object *)0x0;
  Button::Button(pBVar16,(String *)local_d8);
  postinitialize_handler((Object *)pBVar16);
  *(Button **)(this + 0xa80) = pBVar16;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_d8);
  pSVar3 = *(StringName **)(this + 0xa80);
  StringName::StringName((StringName *)local_d8,"PreviewLightButton",false);
  Control::set_theme_type_variation(pSVar3);
  if ((StringName::configured != '\0') && (local_d8[0] != (Object *)0x0)) {
    StringName::unref();
  }
  BaseButton::set_toggle_mode(SUB81(*(undefined8 *)(this + 0xa80),0));
  Node::add_child(pBVar12,*(undefined8 *)(this + 0xa80),0,0);
  plVar4 = *(long **)(this + 0xa80);
  pcVar5 = *(code **)(*plVar4 + 0x108);
  create_custom_callable_function_pointer<MaterialEditor>
            ((MaterialEditor *)local_d8,(char *)this,
             (_func_void *)"&MaterialEditor::_on_sphere_switch_pressed");
  (*pcVar5)(plVar4,SceneStringNames::singleton + 0x238,(CowData<char32_t> *)local_d8,0);
  Callable::~Callable((Callable *)local_d8);
  pBVar16 = (Button *)operator_new(0xc10,"");
  local_d8[0] = (Object *)0x0;
  Button::Button(pBVar16,(String *)local_d8);
  postinitialize_handler((Object *)pBVar16);
  *(Button **)(this + 0xa88) = pBVar16;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_d8);
  pSVar3 = *(StringName **)(this + 0xa88);
  StringName::StringName((StringName *)local_d8,"PreviewLightButton",false);
  Control::set_theme_type_variation(pSVar3);
  if ((StringName::configured != '\0') && (local_d8[0] != (Object *)0x0)) {
    StringName::unref();
  }
  BaseButton::set_toggle_mode(SUB81(*(undefined8 *)(this + 0xa88),0));
  Node::add_child(pBVar12,*(undefined8 *)(this + 0xa88),0,0);
  plVar4 = *(long **)(this + 0xa88);
  pcVar5 = *(code **)(*plVar4 + 0x108);
  create_custom_callable_function_pointer<MaterialEditor>
            ((MaterialEditor *)local_d8,(char *)this,
             (_func_void *)"&MaterialEditor::_on_box_switch_pressed");
  (*pcVar5)(plVar4,SceneStringNames::singleton + 0x238,(CowData<char32_t> *)local_d8,0);
  Callable::~Callable((Callable *)local_d8);
  pBVar16 = (Button *)operator_new(0xc10,"");
  local_d8[0] = (Object *)0x0;
  Button::Button(pBVar16,(String *)local_d8);
  postinitialize_handler((Object *)pBVar16);
  *(Button **)(this + 0xa90) = pBVar16;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_d8);
  pSVar3 = *(StringName **)(this + 0xa90);
  StringName::StringName((StringName *)local_d8,"PreviewLightButton",false);
  Control::set_theme_type_variation(pSVar3);
  if ((StringName::configured != '\0') && (local_d8[0] != (Object *)0x0)) {
    StringName::unref();
  }
  BaseButton::set_toggle_mode(SUB81(*(undefined8 *)(this + 0xa90),0));
  Node::add_child(pBVar12,*(undefined8 *)(this + 0xa90),0,0);
  plVar4 = *(long **)(this + 0xa90);
  pcVar5 = *(code **)(*plVar4 + 0x108);
  create_custom_callable_function_pointer<MaterialEditor>
            ((MaterialEditor *)local_d8,(char *)this,
             (_func_void *)"&MaterialEditor::_on_quad_switch_pressed");
  (*pcVar5)(plVar4,SceneStringNames::singleton + 0x238,(CowData<char32_t> *)local_d8,0);
  Callable::~Callable((Callable *)local_d8);
  BoxContainer::add_spacer(SUB81(*(undefined8 *)(this + 0xa70),0));
  pBVar12 = (BoxContainer *)operator_new(0xa10,"");
  BoxContainer::BoxContainer(pBVar12,true);
  pBVar12[0xa0c] = (BoxContainer)0x1;
  *(undefined ***)pBVar12 = &PTR__initialize_classv_00114fa0;
  postinitialize_handler((Object *)pBVar12);
  Node::add_child(*(undefined8 *)(this + 0xa70),pBVar12,0,0);
  pBVar16 = (Button *)operator_new(0xc10,"");
  local_d8[0] = (Object *)0x0;
  Button::Button(pBVar16,(String *)local_d8);
  postinitialize_handler((Object *)pBVar16);
  *(Button **)(this + 0xa98) = pBVar16;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_d8);
  pSVar3 = *(StringName **)(this + 0xa98);
  StringName::StringName((StringName *)local_d8,"PreviewLightButton",false);
  Control::set_theme_type_variation(pSVar3);
  if ((StringName::configured != '\0') && (local_d8[0] != (Object *)0x0)) {
    StringName::unref();
  }
  BaseButton::set_toggle_mode(SUB81(*(undefined8 *)(this + 0xa98),0));
  BaseButton::set_pressed(SUB81(*(undefined8 *)(this + 0xa98),0));
  Node::add_child(pBVar12,*(undefined8 *)(this + 0xa98),0,0);
  plVar4 = *(long **)(this + 0xa98);
  pcVar5 = *(code **)(*plVar4 + 0x108);
  create_custom_callable_function_pointer<MaterialEditor>
            ((MaterialEditor *)local_d8,(char *)this,
             (_func_void *)"&MaterialEditor::_on_light_1_switch_pressed");
  (*pcVar5)(plVar4,SceneStringNames::singleton + 0x238,(CowData<char32_t> *)local_d8,0);
  Callable::~Callable((Callable *)local_d8);
  pBVar16 = (Button *)operator_new(0xc10,"");
  local_d8[0] = (Object *)0x0;
  Button::Button(pBVar16,(String *)local_d8);
  postinitialize_handler((Object *)pBVar16);
  *(Button **)(this + 0xaa0) = pBVar16;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_d8);
  pSVar3 = *(StringName **)(this + 0xaa0);
  StringName::StringName((StringName *)local_d8,"PreviewLightButton",false);
  Control::set_theme_type_variation(pSVar3);
  if ((StringName::configured != '\0') && (local_d8[0] != (Object *)0x0)) {
    StringName::unref();
  }
  BaseButton::set_toggle_mode(SUB81(*(undefined8 *)(this + 0xaa0),0));
  BaseButton::set_pressed(SUB81(*(undefined8 *)(this + 0xaa0),0));
  Node::add_child(pBVar12,*(undefined8 *)(this + 0xaa0),0,0);
  plVar4 = *(long **)(this + 0xaa0);
  pcVar5 = *(code **)(*plVar4 + 0x108);
  create_custom_callable_function_pointer<MaterialEditor>
            ((MaterialEditor *)local_d8,(char *)this,
             (_func_void *)"&MaterialEditor::_on_light_2_switch_pressed");
  (*pcVar5)(plVar4,SceneStringNames::singleton + 0x238,(CowData<char32_t> *)local_d8,0);
  Callable::~Callable((Callable *)local_d8);
  pSVar17 = (String *)EditorSettings::get_singleton();
  Variant::Variant((Variant *)local_78,"sphere");
  local_d8[0] = (Object *)0x0;
  String::parse_latin1((String *)local_d8,"material_preview_mesh");
  local_e0 = 0;
  String::parse_latin1((String *)&local_e0,"inspector_options");
  EditorSettings::get_project_metadata((String *)local_a8,pSVar17,(Variant *)&local_e0);
  Variant::operator_cast_to_String((Variant *)local_e8);
  if (Variant::needs_deinit[(int)local_a8._0_4_] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_d8);
  if (Variant::needs_deinit[(int)local_78._0_4_] != '\0') {
    Variant::_clear_internal();
  }
  cVar8 = String::operator==(local_e8,"sphere");
  if (cVar8 == '\0') {
    cVar8 = String::operator==(local_e8,"box");
    if (cVar8 == '\0') {
      Node3D::hide();
      Node3D::hide();
      BaseButton::set_pressed_no_signal(SUB81(*(undefined8 *)(this + 0xa90),0));
    }
    else {
      Node3D::hide();
      Node3D::hide();
      BaseButton::set_pressed_no_signal(SUB81(*(undefined8 *)(this + 0xa88),0));
    }
  }
  else {
    Node3D::hide();
    Node3D::hide();
    BaseButton::set_pressed_no_signal(SUB81(*(undefined8 *)(this + 0xa80),0));
  }
  pSVar17 = (String *)EditorSettings::get_singleton();
  local_b8 = 0;
  Variant::Variant((Variant *)local_78,(Vector2 *)&local_b8);
  local_d8[0] = (Object *)0x0;
  String::parse_latin1((String *)local_d8,"material_preview_rotation");
  local_e0 = 0;
  String::parse_latin1((String *)&local_e0,"inspector_options");
  EditorSettings::get_project_metadata((String *)local_a8,pSVar17,(Variant *)&local_e0);
  uVar22 = Variant::operator_cast_to_Vector2((Variant *)local_a8);
  if (Variant::needs_deinit[(int)local_a8._0_4_] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_d8);
  if (Variant::needs_deinit[(int)local_78._0_4_] != '\0') {
    Variant::_clear_internal();
  }
  *(ulong *)(this + 0x9c8) =
       CONCAT44((float)((ulong)uVar22 >> 0x20) * _LC30._4_4_,(float)uVar22 * (float)_LC30);
  _update_rotation(this);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_e8);
  if (((local_f0 != (World3D *)0x0) && (cVar8 = RefCounted::unreference(), cVar8 != '\0')) &&
     (cVar8 = predelete_handler((Object *)local_f0), cVar8 != '\0')) {
    (**(code **)(*(long *)local_f0 + 0x140))(local_f0);
    Memory::free_static(local_f0,false);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorInspectorPluginMaterial::parse_begin(Object*) */

void __thiscall
EditorInspectorPluginMaterial::parse_begin(EditorInspectorPluginMaterial *this,Object *param_1)

{
  char cVar1;
  Object *pOVar2;
  MaterialEditor *pMVar3;
  long in_FS_OFFSET;
  Object *local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_1 != (Object *)0x0) &&
     (pOVar2 = (Object *)__dynamic_cast(param_1,&Object::typeinfo,&Material::typeinfo,0),
     pOVar2 != (Object *)0x0)) {
    cVar1 = RefCounted::init_ref();
    if (cVar1 == '\0') {
      pMVar3 = (MaterialEditor *)operator_new(0xad8,"");
      MaterialEditor::MaterialEditor(pMVar3);
      postinitialize_handler((Object *)pMVar3);
      local_38 = (Object *)0x0;
      MaterialEditor::edit(pMVar3,&local_38,this + 0x218);
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        EditorInspectorPlugin::add_custom_control((Control *)this);
        return;
      }
      goto LAB_00103beb;
    }
    pMVar3 = (MaterialEditor *)operator_new(0xad8,"");
    MaterialEditor::MaterialEditor(pMVar3);
    postinitialize_handler((Object *)pMVar3);
    local_38 = pOVar2;
    cVar1 = RefCounted::reference();
    if (cVar1 == '\0') {
      local_38 = (Object *)0x0;
      MaterialEditor::edit(pMVar3,&local_38,this + 0x218);
      EditorInspectorPlugin::add_custom_control((Control *)this);
      cVar1 = RefCounted::unreference();
    }
    else {
      MaterialEditor::edit(pMVar3,&local_38,this + 0x218);
      cVar1 = RefCounted::unreference();
      if ((cVar1 != '\0') && (cVar1 = predelete_handler(pOVar2), cVar1 != '\0')) {
        (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
        Memory::free_static(pOVar2,false);
      }
      EditorInspectorPlugin::add_custom_control((Control *)this);
      cVar1 = RefCounted::unreference();
    }
    if ((cVar1 != '\0') && (cVar1 = predelete_handler(pOVar2), cVar1 != '\0')) {
      (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        Memory::free_static(pOVar2,false);
        return;
      }
      goto LAB_00103beb;
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00103beb:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* StandardMaterial3DConversionPlugin::convert(Ref<Resource> const&) const */

Ref * StandardMaterial3DConversionPlugin::convert(Ref *param_1)

{
  String *pSVar1;
  code *pcVar2;
  Ref *pRVar3;
  Object *pOVar4;
  char cVar5;
  Object *pOVar6;
  long *plVar7;
  undefined8 uVar8;
  long *in_RDX;
  long lVar9;
  long in_FS_OFFSET;
  Ref *local_88;
  String *local_80;
  CowData<char32_t> local_78 [8];
  long *local_70;
  Object *local_68;
  long local_60;
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (((*in_RDX == 0) ||
      (pOVar6 = (Object *)__dynamic_cast(*in_RDX,&Object::typeinfo,&StandardMaterial3D::typeinfo,0),
      pOVar6 == (Object *)0x0)) || (cVar5 = RefCounted::reference(), cVar5 == '\0')) {
    _err_print_error("convert","editor/plugins/material_editor_plugin.cpp",0x1c4,
                     "Condition \"mat.is_null()\" is true. Returning: Ref<Resource>()",0,0);
    *(undefined8 *)param_1 = 0;
  }
  else {
    local_88 = (Ref *)0x0;
    Ref<ShaderMaterial>::instantiate<>((Ref<ShaderMaterial> *)&local_88);
    local_80 = (String *)0x0;
    Ref<Shader>::instantiate<>((Ref<Shader> *)&local_80);
    plVar7 = (long *)RenderingServer::get_singleton();
    pcVar2 = *(code **)(*plVar7 + 0x260);
    uVar8 = (**(code **)(*(long *)pOVar6 + 0x1d8))(pOVar6);
    (*pcVar2)(local_78,plVar7,uVar8);
    Shader::set_code(local_80);
    pRVar3 = local_88;
    ShaderMaterial::set_shader(local_88);
    local_70 = (long *)0x0;
    plVar7 = (long *)RenderingServer::get_singleton();
    pcVar2 = *(code **)(*plVar7 + 0x268);
    uVar8 = (**(code **)(*(long *)pOVar6 + 0x1d8))(pOVar6);
    (*pcVar2)(plVar7,uVar8,(List<PropertyInfo,DefaultAllocator> *)&local_70);
    if ((local_70 != (long *)0x0) && (lVar9 = *local_70, lVar9 != 0)) {
      do {
        while( true ) {
          pSVar1 = (String *)(lVar9 + 8);
          StringName::StringName((StringName *)&local_60,pSVar1,false);
          BaseMaterial3D::get_texture_by_name((StringName *)&local_68);
          if ((StringName::configured != '\0') && (local_60 != 0)) {
            StringName::unref();
          }
          if (local_68 == (Object *)0x0) {
            plVar7 = (long *)RenderingServer::get_singleton();
            pcVar2 = *(code **)(*plVar7 + 0x2b0);
            StringName::StringName((StringName *)&local_60,pSVar1,false);
            uVar8 = (**(code **)(*(long *)pOVar6 + 0x1c0))(pOVar6);
            (*pcVar2)((Variant *)local_58,plVar7,uVar8,(StringName *)&local_60);
            if ((StringName::configured != '\0') && (local_60 != 0)) {
              StringName::unref();
            }
          }
          else {
            Variant::Variant((Variant *)local_58,local_68);
          }
          StringName::StringName((StringName *)&local_60,pSVar1,false);
          ShaderMaterial::set_shader_parameter((StringName *)pRVar3,(Variant *)&local_60);
          if ((StringName::configured != '\0') && (local_60 != 0)) {
            StringName::unref();
          }
          if (Variant::needs_deinit[local_58[0]] != '\0') {
            Variant::_clear_internal();
          }
          if (((local_68 != (Object *)0x0) &&
              (cVar5 = RefCounted::unreference(), pOVar4 = local_68, cVar5 != '\0')) &&
             (cVar5 = predelete_handler(local_68), cVar5 != '\0')) break;
          lVar9 = *(long *)(lVar9 + 0x30);
          if (lVar9 == 0) goto LAB_00103f25;
        }
        (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
        Memory::free_static(pOVar4,false);
        lVar9 = *(long *)(lVar9 + 0x30);
      } while (lVar9 != 0);
    }
LAB_00103f25:
    Material::get_render_priority();
    Material::set_render_priority((int)pRVar3);
    Resource::is_local_to_scene();
    Resource::set_local_to_scene(SUB81(pRVar3,0));
    Resource::get_name();
    Resource::set_name((String *)pRVar3);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    *(undefined8 *)param_1 = 0;
    Ref<Resource>::operator=((Ref<Resource> *)param_1,pRVar3);
    List<PropertyInfo,DefaultAllocator>::~List((List<PropertyInfo,DefaultAllocator> *)&local_70);
    CowData<char32_t>::_unref(local_78);
    if (((local_80 == (String *)0x0) ||
        (cVar5 = RefCounted::unreference(), pSVar1 = local_80, cVar5 == '\0')) ||
       (cVar5 = predelete_handler((Object *)local_80), cVar5 == '\0')) {
      cVar5 = RefCounted::unreference();
    }
    else {
      (**(code **)(*(long *)pSVar1 + 0x140))(pSVar1);
      Memory::free_static(pSVar1,false);
      cVar5 = RefCounted::unreference();
    }
    if ((cVar5 != '\0') && (cVar5 = predelete_handler((Object *)pRVar3), cVar5 != '\0')) {
      (**(code **)(*(long *)pRVar3 + 0x140))(pRVar3);
      Memory::free_static(pRVar3,false);
    }
    cVar5 = RefCounted::unreference();
    if ((cVar5 != '\0') && (cVar5 = predelete_handler(pOVar6), cVar5 != '\0')) {
      (**(code **)(*(long *)pOVar6 + 0x140))(pOVar6);
      Memory::free_static(pOVar6,false);
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ORMMaterial3DConversionPlugin::convert(Ref<Resource> const&) const */

Ref * ORMMaterial3DConversionPlugin::convert(Ref *param_1)

{
  String *pSVar1;
  code *pcVar2;
  Ref *pRVar3;
  Object *pOVar4;
  char cVar5;
  Object *pOVar6;
  long *plVar7;
  undefined8 uVar8;
  long *in_RDX;
  long lVar9;
  long in_FS_OFFSET;
  Ref *local_88;
  String *local_80;
  CowData<char32_t> local_78 [8];
  long *local_70;
  Object *local_68;
  long local_60;
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (((*in_RDX == 0) ||
      (pOVar6 = (Object *)__dynamic_cast(*in_RDX,&Object::typeinfo,&ORMMaterial3D::typeinfo,0),
      pOVar6 == (Object *)0x0)) || (cVar5 = RefCounted::reference(), cVar5 == '\0')) {
    _err_print_error("convert","editor/plugins/material_editor_plugin.cpp",0x1f2,
                     "Condition \"mat.is_null()\" is true. Returning: Ref<Resource>()",0,0);
    *(undefined8 *)param_1 = 0;
  }
  else {
    local_88 = (Ref *)0x0;
    Ref<ShaderMaterial>::instantiate<>((Ref<ShaderMaterial> *)&local_88);
    local_80 = (String *)0x0;
    Ref<Shader>::instantiate<>((Ref<Shader> *)&local_80);
    plVar7 = (long *)RenderingServer::get_singleton();
    pcVar2 = *(code **)(*plVar7 + 0x260);
    uVar8 = (**(code **)(*(long *)pOVar6 + 0x1d8))(pOVar6);
    (*pcVar2)(local_78,plVar7,uVar8);
    Shader::set_code(local_80);
    pRVar3 = local_88;
    ShaderMaterial::set_shader(local_88);
    local_70 = (long *)0x0;
    plVar7 = (long *)RenderingServer::get_singleton();
    pcVar2 = *(code **)(*plVar7 + 0x268);
    uVar8 = (**(code **)(*(long *)pOVar6 + 0x1d8))(pOVar6);
    (*pcVar2)(plVar7,uVar8,(List<PropertyInfo,DefaultAllocator> *)&local_70);
    if ((local_70 != (long *)0x0) && (lVar9 = *local_70, lVar9 != 0)) {
      do {
        while( true ) {
          pSVar1 = (String *)(lVar9 + 8);
          StringName::StringName((StringName *)&local_60,pSVar1,false);
          BaseMaterial3D::get_texture_by_name((StringName *)&local_68);
          if ((StringName::configured != '\0') && (local_60 != 0)) {
            StringName::unref();
          }
          if (local_68 == (Object *)0x0) {
            plVar7 = (long *)RenderingServer::get_singleton();
            pcVar2 = *(code **)(*plVar7 + 0x2b0);
            StringName::StringName((StringName *)&local_60,pSVar1,false);
            uVar8 = (**(code **)(*(long *)pOVar6 + 0x1c0))(pOVar6);
            (*pcVar2)((Variant *)local_58,plVar7,uVar8,(StringName *)&local_60);
            if ((StringName::configured != '\0') && (local_60 != 0)) {
              StringName::unref();
            }
          }
          else {
            Variant::Variant((Variant *)local_58,local_68);
          }
          StringName::StringName((StringName *)&local_60,pSVar1,false);
          ShaderMaterial::set_shader_parameter((StringName *)pRVar3,(Variant *)&local_60);
          if ((StringName::configured != '\0') && (local_60 != 0)) {
            StringName::unref();
          }
          if (Variant::needs_deinit[local_58[0]] != '\0') {
            Variant::_clear_internal();
          }
          if (((local_68 != (Object *)0x0) &&
              (cVar5 = RefCounted::unreference(), pOVar4 = local_68, cVar5 != '\0')) &&
             (cVar5 = predelete_handler(local_68), cVar5 != '\0')) break;
          lVar9 = *(long *)(lVar9 + 0x30);
          if (lVar9 == 0) goto LAB_001043b5;
        }
        (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
        Memory::free_static(pOVar4,false);
        lVar9 = *(long *)(lVar9 + 0x30);
      } while (lVar9 != 0);
    }
LAB_001043b5:
    Material::get_render_priority();
    Material::set_render_priority((int)pRVar3);
    Resource::is_local_to_scene();
    Resource::set_local_to_scene(SUB81(pRVar3,0));
    Resource::get_name();
    Resource::set_name((String *)pRVar3);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    *(undefined8 *)param_1 = 0;
    Ref<Resource>::operator=((Ref<Resource> *)param_1,pRVar3);
    List<PropertyInfo,DefaultAllocator>::~List((List<PropertyInfo,DefaultAllocator> *)&local_70);
    CowData<char32_t>::_unref(local_78);
    if (((local_80 == (String *)0x0) ||
        (cVar5 = RefCounted::unreference(), pSVar1 = local_80, cVar5 == '\0')) ||
       (cVar5 = predelete_handler((Object *)local_80), cVar5 == '\0')) {
      cVar5 = RefCounted::unreference();
    }
    else {
      (**(code **)(*(long *)pSVar1 + 0x140))(pSVar1);
      Memory::free_static(pSVar1,false);
      cVar5 = RefCounted::unreference();
    }
    if ((cVar5 != '\0') && (cVar5 = predelete_handler((Object *)pRVar3), cVar5 != '\0')) {
      (**(code **)(*(long *)pRVar3 + 0x140))(pRVar3);
      Memory::free_static(pRVar3,false);
    }
    cVar5 = RefCounted::unreference();
    if ((cVar5 != '\0') && (cVar5 = predelete_handler(pOVar6), cVar5 != '\0')) {
      (**(code **)(*(long *)pOVar6 + 0x140))(pOVar6);
      Memory::free_static(pOVar6,false);
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ParticleProcessMaterialConversionPlugin::convert(Ref<Resource> const&) const */

Ref * ParticleProcessMaterialConversionPlugin::convert(Ref *param_1)

{
  code *pcVar1;
  Ref *pRVar2;
  String *pSVar3;
  char cVar4;
  Object *pOVar5;
  long *plVar6;
  undefined8 uVar7;
  long *in_RDX;
  long lVar8;
  long in_FS_OFFSET;
  Ref *local_80;
  String *local_78;
  CowData<char32_t> local_70 [8];
  long *local_68;
  long local_60;
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (((*in_RDX == 0) ||
      (pOVar5 = (Object *)
                __dynamic_cast(*in_RDX,&Object::typeinfo,&ParticleProcessMaterial::typeinfo,0),
      pOVar5 == (Object *)0x0)) || (cVar4 = RefCounted::reference(), cVar4 == '\0')) {
    _err_print_error("convert","editor/plugins/material_editor_plugin.cpp",0x220,
                     "Condition \"mat.is_null()\" is true. Returning: Ref<Resource>()",0,0);
    *(undefined8 *)param_1 = 0;
  }
  else {
    local_80 = (Ref *)0x0;
    Ref<ShaderMaterial>::instantiate<>((Ref<ShaderMaterial> *)&local_80);
    local_78 = (String *)0x0;
    Ref<Shader>::instantiate<>((Ref<Shader> *)&local_78);
    plVar6 = (long *)RenderingServer::get_singleton();
    pcVar1 = *(code **)(*plVar6 + 0x260);
    uVar7 = (**(code **)(*(long *)pOVar5 + 0x1d8))(pOVar5);
    (*pcVar1)(local_70,plVar6,uVar7);
    Shader::set_code(local_78);
    pRVar2 = local_80;
    ShaderMaterial::set_shader(local_80);
    local_68 = (long *)0x0;
    plVar6 = (long *)RenderingServer::get_singleton();
    pcVar1 = *(code **)(*plVar6 + 0x268);
    uVar7 = (**(code **)(*(long *)pOVar5 + 0x1d8))(pOVar5);
    (*pcVar1)(plVar6,uVar7,(List<PropertyInfo,DefaultAllocator> *)&local_68);
    if ((local_68 != (long *)0x0) && (lVar8 = *local_68, lVar8 != 0)) {
      do {
        plVar6 = (long *)RenderingServer::get_singleton();
        pcVar1 = *(code **)(*plVar6 + 0x2b0);
        StringName::StringName((StringName *)&local_60,(String *)(lVar8 + 8),false);
        uVar7 = (**(code **)(*(long *)pOVar5 + 0x1c0))(pOVar5);
        (*pcVar1)(local_58,plVar6,uVar7,(StringName *)&local_60);
        if ((StringName::configured != '\0') && (local_60 != 0)) {
          StringName::unref();
        }
        StringName::StringName((StringName *)&local_60,(String *)(lVar8 + 8),false);
        ShaderMaterial::set_shader_parameter((StringName *)pRVar2,(Variant *)&local_60);
        if ((StringName::configured != '\0') && (local_60 != 0)) {
          StringName::unref();
        }
        if (Variant::needs_deinit[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
        lVar8 = *(long *)(lVar8 + 0x30);
      } while (lVar8 != 0);
    }
    Material::get_render_priority();
    Material::set_render_priority((int)pRVar2);
    Resource::is_local_to_scene();
    Resource::set_local_to_scene(SUB81(pRVar2,0));
    Resource::get_name();
    Resource::set_name((String *)pRVar2);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    *(undefined8 *)param_1 = 0;
    Ref<Resource>::operator=((Ref<Resource> *)param_1,pRVar2);
    List<PropertyInfo,DefaultAllocator>::~List((List<PropertyInfo,DefaultAllocator> *)&local_68);
    CowData<char32_t>::_unref(local_70);
    if (((local_78 == (String *)0x0) ||
        (cVar4 = RefCounted::unreference(), pSVar3 = local_78, cVar4 == '\0')) ||
       (cVar4 = predelete_handler((Object *)local_78), cVar4 == '\0')) {
      cVar4 = RefCounted::unreference();
    }
    else {
      (**(code **)(*(long *)pSVar3 + 0x140))(pSVar3);
      Memory::free_static(pSVar3,false);
      cVar4 = RefCounted::unreference();
    }
    if ((cVar4 != '\0') && (cVar4 = predelete_handler((Object *)pRVar2), cVar4 != '\0')) {
      (**(code **)(*(long *)pRVar2 + 0x140))(pRVar2);
      Memory::free_static(pRVar2,false);
    }
    cVar4 = RefCounted::unreference();
    if ((cVar4 != '\0') && (cVar4 = predelete_handler(pOVar5), cVar4 != '\0')) {
      (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
      Memory::free_static(pOVar5,false);
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CanvasItemMaterialConversionPlugin::convert(Ref<Resource> const&) const */

Ref * CanvasItemMaterialConversionPlugin::convert(Ref *param_1)

{
  code *pcVar1;
  Ref *pRVar2;
  String *pSVar3;
  char cVar4;
  Object *pOVar5;
  long *plVar6;
  undefined8 uVar7;
  long *in_RDX;
  long lVar8;
  long in_FS_OFFSET;
  Ref *local_80;
  String *local_78;
  CowData<char32_t> local_70 [8];
  long *local_68;
  long local_60;
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (((*in_RDX == 0) ||
      (pOVar5 = (Object *)__dynamic_cast(*in_RDX,&Object::typeinfo,&CanvasItemMaterial::typeinfo,0),
      pOVar5 == (Object *)0x0)) || (cVar4 = RefCounted::reference(), cVar4 == '\0')) {
    _err_print_error("convert","editor/plugins/material_editor_plugin.cpp",0x247,
                     "Condition \"mat.is_null()\" is true. Returning: Ref<Resource>()",0,0);
    *(undefined8 *)param_1 = 0;
  }
  else {
    local_80 = (Ref *)0x0;
    Ref<ShaderMaterial>::instantiate<>((Ref<ShaderMaterial> *)&local_80);
    local_78 = (String *)0x0;
    Ref<Shader>::instantiate<>((Ref<Shader> *)&local_78);
    plVar6 = (long *)RenderingServer::get_singleton();
    pcVar1 = *(code **)(*plVar6 + 0x260);
    uVar7 = (**(code **)(*(long *)pOVar5 + 0x1d8))(pOVar5);
    (*pcVar1)(local_70,plVar6,uVar7);
    Shader::set_code(local_78);
    pRVar2 = local_80;
    ShaderMaterial::set_shader(local_80);
    local_68 = (long *)0x0;
    plVar6 = (long *)RenderingServer::get_singleton();
    pcVar1 = *(code **)(*plVar6 + 0x268);
    uVar7 = (**(code **)(*(long *)pOVar5 + 0x1d8))(pOVar5);
    (*pcVar1)(plVar6,uVar7,(List<PropertyInfo,DefaultAllocator> *)&local_68);
    if ((local_68 != (long *)0x0) && (lVar8 = *local_68, lVar8 != 0)) {
      do {
        plVar6 = (long *)RenderingServer::get_singleton();
        pcVar1 = *(code **)(*plVar6 + 0x2b0);
        StringName::StringName((StringName *)&local_60,(String *)(lVar8 + 8),false);
        uVar7 = (**(code **)(*(long *)pOVar5 + 0x1c0))(pOVar5);
        (*pcVar1)(local_58,plVar6,uVar7,(StringName *)&local_60);
        if ((StringName::configured != '\0') && (local_60 != 0)) {
          StringName::unref();
        }
        StringName::StringName((StringName *)&local_60,(String *)(lVar8 + 8),false);
        ShaderMaterial::set_shader_parameter((StringName *)pRVar2,(Variant *)&local_60);
        if ((StringName::configured != '\0') && (local_60 != 0)) {
          StringName::unref();
        }
        if (Variant::needs_deinit[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
        lVar8 = *(long *)(lVar8 + 0x30);
      } while (lVar8 != 0);
    }
    Material::get_render_priority();
    Material::set_render_priority((int)pRVar2);
    Resource::is_local_to_scene();
    Resource::set_local_to_scene(SUB81(pRVar2,0));
    Resource::get_name();
    Resource::set_name((String *)pRVar2);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    *(undefined8 *)param_1 = 0;
    Ref<Resource>::operator=((Ref<Resource> *)param_1,pRVar2);
    List<PropertyInfo,DefaultAllocator>::~List((List<PropertyInfo,DefaultAllocator> *)&local_68);
    CowData<char32_t>::_unref(local_70);
    if (((local_78 == (String *)0x0) ||
        (cVar4 = RefCounted::unreference(), pSVar3 = local_78, cVar4 == '\0')) ||
       (cVar4 = predelete_handler((Object *)local_78), cVar4 == '\0')) {
      cVar4 = RefCounted::unreference();
    }
    else {
      (**(code **)(*(long *)pSVar3 + 0x140))(pSVar3);
      Memory::free_static(pSVar3,false);
      cVar4 = RefCounted::unreference();
    }
    if ((cVar4 != '\0') && (cVar4 = predelete_handler((Object *)pRVar2), cVar4 != '\0')) {
      (**(code **)(*(long *)pRVar2 + 0x140))(pRVar2);
      Memory::free_static(pRVar2,false);
    }
    cVar4 = RefCounted::unreference();
    if ((cVar4 != '\0') && (cVar4 = predelete_handler(pOVar5), cVar4 != '\0')) {
      (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
      Memory::free_static(pOVar5,false);
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ProceduralSkyMaterialConversionPlugin::convert(Ref<Resource> const&) const */

Ref * ProceduralSkyMaterialConversionPlugin::convert(Ref *param_1)

{
  code *pcVar1;
  Ref *pRVar2;
  String *pSVar3;
  char cVar4;
  Object *pOVar5;
  long *plVar6;
  undefined8 uVar7;
  long *in_RDX;
  long lVar8;
  long in_FS_OFFSET;
  Ref *local_80;
  String *local_78;
  CowData<char32_t> local_70 [8];
  long *local_68;
  long local_60;
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (((*in_RDX == 0) ||
      (pOVar5 = (Object *)
                __dynamic_cast(*in_RDX,&Object::typeinfo,&ProceduralSkyMaterial::typeinfo,0),
      pOVar5 == (Object *)0x0)) || (cVar4 = RefCounted::reference(), cVar4 == '\0')) {
    _err_print_error("convert","editor/plugins/material_editor_plugin.cpp",0x26e,
                     "Condition \"mat.is_null()\" is true. Returning: Ref<Resource>()",0,0);
    *(undefined8 *)param_1 = 0;
  }
  else {
    local_80 = (Ref *)0x0;
    Ref<ShaderMaterial>::instantiate<>((Ref<ShaderMaterial> *)&local_80);
    local_78 = (String *)0x0;
    Ref<Shader>::instantiate<>((Ref<Shader> *)&local_78);
    plVar6 = (long *)RenderingServer::get_singleton();
    pcVar1 = *(code **)(*plVar6 + 0x260);
    uVar7 = (**(code **)(*(long *)pOVar5 + 0x1d8))(pOVar5);
    (*pcVar1)(local_70,plVar6,uVar7);
    Shader::set_code(local_78);
    pRVar2 = local_80;
    ShaderMaterial::set_shader(local_80);
    local_68 = (long *)0x0;
    plVar6 = (long *)RenderingServer::get_singleton();
    pcVar1 = *(code **)(*plVar6 + 0x268);
    uVar7 = (**(code **)(*(long *)pOVar5 + 0x1d8))(pOVar5);
    (*pcVar1)(plVar6,uVar7,(List<PropertyInfo,DefaultAllocator> *)&local_68);
    if ((local_68 != (long *)0x0) && (lVar8 = *local_68, lVar8 != 0)) {
      do {
        plVar6 = (long *)RenderingServer::get_singleton();
        pcVar1 = *(code **)(*plVar6 + 0x2b0);
        StringName::StringName((StringName *)&local_60,(String *)(lVar8 + 8),false);
        uVar7 = (**(code **)(*(long *)pOVar5 + 0x1c0))(pOVar5);
        (*pcVar1)(local_58,plVar6,uVar7,(StringName *)&local_60);
        if ((StringName::configured != '\0') && (local_60 != 0)) {
          StringName::unref();
        }
        StringName::StringName((StringName *)&local_60,(String *)(lVar8 + 8),false);
        ShaderMaterial::set_shader_parameter((StringName *)pRVar2,(Variant *)&local_60);
        if ((StringName::configured != '\0') && (local_60 != 0)) {
          StringName::unref();
        }
        if (Variant::needs_deinit[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
        lVar8 = *(long *)(lVar8 + 0x30);
      } while (lVar8 != 0);
    }
    Material::get_render_priority();
    Material::set_render_priority((int)pRVar2);
    Resource::is_local_to_scene();
    Resource::set_local_to_scene(SUB81(pRVar2,0));
    Resource::get_name();
    Resource::set_name((String *)pRVar2);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    *(undefined8 *)param_1 = 0;
    Ref<Resource>::operator=((Ref<Resource> *)param_1,pRVar2);
    List<PropertyInfo,DefaultAllocator>::~List((List<PropertyInfo,DefaultAllocator> *)&local_68);
    CowData<char32_t>::_unref(local_70);
    if (((local_78 == (String *)0x0) ||
        (cVar4 = RefCounted::unreference(), pSVar3 = local_78, cVar4 == '\0')) ||
       (cVar4 = predelete_handler((Object *)local_78), cVar4 == '\0')) {
      cVar4 = RefCounted::unreference();
    }
    else {
      (**(code **)(*(long *)pSVar3 + 0x140))(pSVar3);
      Memory::free_static(pSVar3,false);
      cVar4 = RefCounted::unreference();
    }
    if ((cVar4 != '\0') && (cVar4 = predelete_handler((Object *)pRVar2), cVar4 != '\0')) {
      (**(code **)(*(long *)pRVar2 + 0x140))(pRVar2);
      Memory::free_static(pRVar2,false);
    }
    cVar4 = RefCounted::unreference();
    if ((cVar4 != '\0') && (cVar4 = predelete_handler(pOVar5), cVar4 != '\0')) {
      (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
      Memory::free_static(pOVar5,false);
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* PanoramaSkyMaterialConversionPlugin::convert(Ref<Resource> const&) const */

Ref * PanoramaSkyMaterialConversionPlugin::convert(Ref *param_1)

{
  code *pcVar1;
  Ref *pRVar2;
  String *pSVar3;
  char cVar4;
  Object *pOVar5;
  long *plVar6;
  undefined8 uVar7;
  long *in_RDX;
  long lVar8;
  long in_FS_OFFSET;
  Ref *local_80;
  String *local_78;
  CowData<char32_t> local_70 [8];
  long *local_68;
  long local_60;
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (((*in_RDX == 0) ||
      (pOVar5 = (Object *)__dynamic_cast(*in_RDX,&Object::typeinfo,&PanoramaSkyMaterial::typeinfo,0)
      , pOVar5 == (Object *)0x0)) || (cVar4 = RefCounted::reference(), cVar4 == '\0')) {
    _err_print_error("convert","editor/plugins/material_editor_plugin.cpp",0x295,
                     "Condition \"mat.is_null()\" is true. Returning: Ref<Resource>()",0,0);
    *(undefined8 *)param_1 = 0;
  }
  else {
    local_80 = (Ref *)0x0;
    Ref<ShaderMaterial>::instantiate<>((Ref<ShaderMaterial> *)&local_80);
    local_78 = (String *)0x0;
    Ref<Shader>::instantiate<>((Ref<Shader> *)&local_78);
    plVar6 = (long *)RenderingServer::get_singleton();
    pcVar1 = *(code **)(*plVar6 + 0x260);
    uVar7 = (**(code **)(*(long *)pOVar5 + 0x1d8))(pOVar5);
    (*pcVar1)(local_70,plVar6,uVar7);
    Shader::set_code(local_78);
    pRVar2 = local_80;
    ShaderMaterial::set_shader(local_80);
    local_68 = (long *)0x0;
    plVar6 = (long *)RenderingServer::get_singleton();
    pcVar1 = *(code **)(*plVar6 + 0x268);
    uVar7 = (**(code **)(*(long *)pOVar5 + 0x1d8))(pOVar5);
    (*pcVar1)(plVar6,uVar7,(List<PropertyInfo,DefaultAllocator> *)&local_68);
    if ((local_68 != (long *)0x0) && (lVar8 = *local_68, lVar8 != 0)) {
      do {
        plVar6 = (long *)RenderingServer::get_singleton();
        pcVar1 = *(code **)(*plVar6 + 0x2b0);
        StringName::StringName((StringName *)&local_60,(String *)(lVar8 + 8),false);
        uVar7 = (**(code **)(*(long *)pOVar5 + 0x1c0))(pOVar5);
        (*pcVar1)(local_58,plVar6,uVar7,(StringName *)&local_60);
        if ((StringName::configured != '\0') && (local_60 != 0)) {
          StringName::unref();
        }
        StringName::StringName((StringName *)&local_60,(String *)(lVar8 + 8),false);
        ShaderMaterial::set_shader_parameter((StringName *)pRVar2,(Variant *)&local_60);
        if ((StringName::configured != '\0') && (local_60 != 0)) {
          StringName::unref();
        }
        if (Variant::needs_deinit[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
        lVar8 = *(long *)(lVar8 + 0x30);
      } while (lVar8 != 0);
    }
    Material::get_render_priority();
    Material::set_render_priority((int)pRVar2);
    Resource::is_local_to_scene();
    Resource::set_local_to_scene(SUB81(pRVar2,0));
    Resource::get_name();
    Resource::set_name((String *)pRVar2);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    *(undefined8 *)param_1 = 0;
    Ref<Resource>::operator=((Ref<Resource> *)param_1,pRVar2);
    List<PropertyInfo,DefaultAllocator>::~List((List<PropertyInfo,DefaultAllocator> *)&local_68);
    CowData<char32_t>::_unref(local_70);
    if (((local_78 == (String *)0x0) ||
        (cVar4 = RefCounted::unreference(), pSVar3 = local_78, cVar4 == '\0')) ||
       (cVar4 = predelete_handler((Object *)local_78), cVar4 == '\0')) {
      cVar4 = RefCounted::unreference();
    }
    else {
      (**(code **)(*(long *)pSVar3 + 0x140))(pSVar3);
      Memory::free_static(pSVar3,false);
      cVar4 = RefCounted::unreference();
    }
    if ((cVar4 != '\0') && (cVar4 = predelete_handler((Object *)pRVar2), cVar4 != '\0')) {
      (**(code **)(*(long *)pRVar2 + 0x140))(pRVar2);
      Memory::free_static(pRVar2,false);
    }
    cVar4 = RefCounted::unreference();
    if ((cVar4 != '\0') && (cVar4 = predelete_handler(pOVar5), cVar4 != '\0')) {
      (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
      Memory::free_static(pOVar5,false);
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* PhysicalSkyMaterialConversionPlugin::convert(Ref<Resource> const&) const */

Ref * PhysicalSkyMaterialConversionPlugin::convert(Ref *param_1)

{
  code *pcVar1;
  Ref *pRVar2;
  String *pSVar3;
  char cVar4;
  Object *pOVar5;
  long *plVar6;
  undefined8 uVar7;
  long *in_RDX;
  long lVar8;
  long in_FS_OFFSET;
  Ref *local_80;
  String *local_78;
  CowData<char32_t> local_70 [8];
  long *local_68;
  long local_60;
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (((*in_RDX == 0) ||
      (pOVar5 = (Object *)__dynamic_cast(*in_RDX,&Object::typeinfo,&PhysicalSkyMaterial::typeinfo,0)
      , pOVar5 == (Object *)0x0)) || (cVar4 = RefCounted::reference(), cVar4 == '\0')) {
    _err_print_error("convert","editor/plugins/material_editor_plugin.cpp",700,
                     "Condition \"mat.is_null()\" is true. Returning: Ref<Resource>()",0,0);
    *(undefined8 *)param_1 = 0;
  }
  else {
    local_80 = (Ref *)0x0;
    Ref<ShaderMaterial>::instantiate<>((Ref<ShaderMaterial> *)&local_80);
    local_78 = (String *)0x0;
    Ref<Shader>::instantiate<>((Ref<Shader> *)&local_78);
    plVar6 = (long *)RenderingServer::get_singleton();
    pcVar1 = *(code **)(*plVar6 + 0x260);
    uVar7 = (**(code **)(*(long *)pOVar5 + 0x1d8))(pOVar5);
    (*pcVar1)(local_70,plVar6,uVar7);
    Shader::set_code(local_78);
    pRVar2 = local_80;
    ShaderMaterial::set_shader(local_80);
    local_68 = (long *)0x0;
    plVar6 = (long *)RenderingServer::get_singleton();
    pcVar1 = *(code **)(*plVar6 + 0x268);
    uVar7 = (**(code **)(*(long *)pOVar5 + 0x1d8))(pOVar5);
    (*pcVar1)(plVar6,uVar7,(List<PropertyInfo,DefaultAllocator> *)&local_68);
    if ((local_68 != (long *)0x0) && (lVar8 = *local_68, lVar8 != 0)) {
      do {
        plVar6 = (long *)RenderingServer::get_singleton();
        pcVar1 = *(code **)(*plVar6 + 0x2b0);
        StringName::StringName((StringName *)&local_60,(String *)(lVar8 + 8),false);
        uVar7 = (**(code **)(*(long *)pOVar5 + 0x1c0))(pOVar5);
        (*pcVar1)(local_58,plVar6,uVar7,(StringName *)&local_60);
        if ((StringName::configured != '\0') && (local_60 != 0)) {
          StringName::unref();
        }
        StringName::StringName((StringName *)&local_60,(String *)(lVar8 + 8),false);
        ShaderMaterial::set_shader_parameter((StringName *)pRVar2,(Variant *)&local_60);
        if ((StringName::configured != '\0') && (local_60 != 0)) {
          StringName::unref();
        }
        if (Variant::needs_deinit[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
        lVar8 = *(long *)(lVar8 + 0x30);
      } while (lVar8 != 0);
    }
    Material::get_render_priority();
    Material::set_render_priority((int)pRVar2);
    Resource::is_local_to_scene();
    Resource::set_local_to_scene(SUB81(pRVar2,0));
    Resource::get_name();
    Resource::set_name((String *)pRVar2);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    *(undefined8 *)param_1 = 0;
    Ref<Resource>::operator=((Ref<Resource> *)param_1,pRVar2);
    List<PropertyInfo,DefaultAllocator>::~List((List<PropertyInfo,DefaultAllocator> *)&local_68);
    CowData<char32_t>::_unref(local_70);
    if (((local_78 == (String *)0x0) ||
        (cVar4 = RefCounted::unreference(), pSVar3 = local_78, cVar4 == '\0')) ||
       (cVar4 = predelete_handler((Object *)local_78), cVar4 == '\0')) {
      cVar4 = RefCounted::unreference();
    }
    else {
      (**(code **)(*(long *)pSVar3 + 0x140))(pSVar3);
      Memory::free_static(pSVar3,false);
      cVar4 = RefCounted::unreference();
    }
    if ((cVar4 != '\0') && (cVar4 = predelete_handler((Object *)pRVar2), cVar4 != '\0')) {
      (**(code **)(*(long *)pRVar2 + 0x140))(pRVar2);
      Memory::free_static(pRVar2,false);
    }
    cVar4 = RefCounted::unreference();
    if ((cVar4 != '\0') && (cVar4 = predelete_handler(pOVar5), cVar4 != '\0')) {
      (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
      Memory::free_static(pOVar5,false);
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* FogMaterialConversionPlugin::convert(Ref<Resource> const&) const */

Ref * FogMaterialConversionPlugin::convert(Ref *param_1)

{
  code *pcVar1;
  Ref *pRVar2;
  String *pSVar3;
  char cVar4;
  Object *pOVar5;
  long *plVar6;
  undefined8 uVar7;
  long *in_RDX;
  long lVar8;
  long in_FS_OFFSET;
  Ref *local_80;
  String *local_78;
  CowData<char32_t> local_70 [8];
  long *local_68;
  long local_60;
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (((*in_RDX == 0) ||
      (pOVar5 = (Object *)__dynamic_cast(*in_RDX,&Object::typeinfo,&FogMaterial::typeinfo,0),
      pOVar5 == (Object *)0x0)) || (cVar4 = RefCounted::reference(), cVar4 == '\0')) {
    _err_print_error("convert","editor/plugins/material_editor_plugin.cpp",0x2e3,
                     "Condition \"mat.is_null()\" is true. Returning: Ref<Resource>()",0,0);
    *(undefined8 *)param_1 = 0;
  }
  else {
    local_80 = (Ref *)0x0;
    Ref<ShaderMaterial>::instantiate<>((Ref<ShaderMaterial> *)&local_80);
    local_78 = (String *)0x0;
    Ref<Shader>::instantiate<>((Ref<Shader> *)&local_78);
    plVar6 = (long *)RenderingServer::get_singleton();
    pcVar1 = *(code **)(*plVar6 + 0x260);
    uVar7 = (**(code **)(*(long *)pOVar5 + 0x1d8))(pOVar5);
    (*pcVar1)(local_70,plVar6,uVar7);
    Shader::set_code(local_78);
    pRVar2 = local_80;
    ShaderMaterial::set_shader(local_80);
    local_68 = (long *)0x0;
    plVar6 = (long *)RenderingServer::get_singleton();
    pcVar1 = *(code **)(*plVar6 + 0x268);
    uVar7 = (**(code **)(*(long *)pOVar5 + 0x1d8))(pOVar5);
    (*pcVar1)(plVar6,uVar7,(List<PropertyInfo,DefaultAllocator> *)&local_68);
    if ((local_68 != (long *)0x0) && (lVar8 = *local_68, lVar8 != 0)) {
      do {
        plVar6 = (long *)RenderingServer::get_singleton();
        pcVar1 = *(code **)(*plVar6 + 0x2b0);
        StringName::StringName((StringName *)&local_60,(String *)(lVar8 + 8),false);
        uVar7 = (**(code **)(*(long *)pOVar5 + 0x1c0))(pOVar5);
        (*pcVar1)(local_58,plVar6,uVar7,(StringName *)&local_60);
        if ((StringName::configured != '\0') && (local_60 != 0)) {
          StringName::unref();
        }
        StringName::StringName((StringName *)&local_60,(String *)(lVar8 + 8),false);
        ShaderMaterial::set_shader_parameter((StringName *)pRVar2,(Variant *)&local_60);
        if ((StringName::configured != '\0') && (local_60 != 0)) {
          StringName::unref();
        }
        if (Variant::needs_deinit[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
        lVar8 = *(long *)(lVar8 + 0x30);
      } while (lVar8 != 0);
    }
    Material::get_render_priority();
    Material::set_render_priority((int)pRVar2);
    *(undefined8 *)param_1 = 0;
    Ref<Resource>::operator=((Ref<Resource> *)param_1,pRVar2);
    List<PropertyInfo,DefaultAllocator>::~List((List<PropertyInfo,DefaultAllocator> *)&local_68);
    CowData<char32_t>::_unref(local_70);
    if (((local_78 == (String *)0x0) ||
        (cVar4 = RefCounted::unreference(), pSVar3 = local_78, cVar4 == '\0')) ||
       (cVar4 = predelete_handler((Object *)local_78), cVar4 == '\0')) {
      cVar4 = RefCounted::unreference();
    }
    else {
      (**(code **)(*(long *)pSVar3 + 0x140))(pSVar3);
      Memory::free_static(pSVar3,false);
      cVar4 = RefCounted::unreference();
    }
    if ((cVar4 != '\0') && (cVar4 = predelete_handler((Object *)pRVar2), cVar4 != '\0')) {
      (**(code **)(*(long *)pRVar2 + 0x140))(pRVar2);
      Memory::free_static(pRVar2,false);
    }
    cVar4 = RefCounted::unreference();
    if ((cVar4 != '\0') && (cVar4 = predelete_handler(pOVar5), cVar4 != '\0')) {
      (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
      Memory::free_static(pOVar5,false);
    }
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* EditorResourceConversionPlugin::initialize_class() [clone .part.0] */

void EditorResourceConversionPlugin::initialize_class(void)

{
  long in_FS_OFFSET;
  undefined8 local_70;
  undefined8 local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
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
    if ((code *)PTR__bind_methods_0011d008 != RefCounted::_bind_methods) {
      RefCounted::_bind_methods();
    }
    RefCounted::initialize_class()::initialized = '\x01';
  }
  local_58 = "RefCounted";
  local_68 = 0;
  local_50 = 10;
  String::parse_latin1((StrRange *)&local_68);
  StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
  local_58 = "EditorResourceConversionPlugin";
  local_70 = 0;
  local_50 = 0x1e;
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
    EditorResourceConversionPlugin::_bind_methods();
  }
  initialize_class()::initialized = 1;
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* Control::initialize_class() [clone .part.0] */

void Control::initialize_class(void)

{
  long in_FS_OFFSET;
  undefined8 local_70;
  long local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (CanvasItem::initialize_class()::initialized == '\0') {
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
      if ((code *)PTR__bind_methods_0011d008 != Node::_bind_methods) {
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
    if ((code *)PTR__bind_compatibility_methods_0011d010 != Object::_bind_compatibility_methods) {
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
  if ((code *)PTR__bind_methods_0011d018 != CanvasItem::_bind_methods) {
    Control::_bind_methods();
  }
  initialize_class()::initialized = 1;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Removing unreachable block (ram,0x001063d3) */
/* WARNING: Removing unreachable block (ram,0x001063fe) */
/* WARNING: Removing unreachable block (ram,0x0010640a) */
/* EditorInspectorPluginMaterial::_undo_redo_inspector_callback(Object*, Object*, String const&,
   Variant const&) */

void __thiscall
EditorInspectorPluginMaterial::_undo_redo_inspector_callback
          (EditorInspectorPluginMaterial *this,Object *param_1,Object *param_2,String *param_3,
          Variant *param_4)

{
  char cVar1;
  Object *pOVar2;
  long lVar3;
  Object *pOVar4;
  long lVar5;
  char *pcVar6;
  long in_FS_OFFSET;
  long local_60;
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_1 == (Object *)0x0) ||
     (pOVar2 = (Object *)
               __dynamic_cast(param_1,&Object::typeinfo,&EditorUndoRedoManager::typeinfo,0),
     pOVar2 == (Object *)0x0)) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      _err_print_error("_undo_redo_inspector_callback","editor/plugins/material_editor_plugin.cpp",
                       0x187,"Parameter \"undo_redo\" is null.",0,0);
      return;
    }
    goto LAB_00106424;
  }
  if ((param_2 != (Object *)0x0) &&
     (((lVar3 = __dynamic_cast(param_2,&Object::typeinfo,&StandardMaterial3D::typeinfo,0),
       lVar3 != 0 && (pOVar4 = Variant::operator_cast_to_Object_(param_4), pOVar4 != (Object *)0x0))
      && (lVar5 = __dynamic_cast(pOVar4,&Object::typeinfo,&Texture2D::typeinfo,0), lVar5 != 0)))) {
    cVar1 = String::operator==(param_3,"roughness_texture");
    if (cVar1 == '\0') {
      cVar1 = String::operator==(param_3,"metallic_texture");
      if (cVar1 != '\0') {
        BaseMaterial3D::get_texture((Ref<Texture2D> *)&local_60,lVar3,1);
        lVar3 = local_60;
        Ref<Texture2D>::unref((Ref<Texture2D> *)&local_60);
        if (lVar3 == 0) {
          pcVar6 = "metallic";
          Variant::Variant((Variant *)local_58,_LC133);
          goto LAB_001062a8;
        }
      }
    }
    else {
      BaseMaterial3D::get_texture((Ref<Texture2D> *)&local_60,lVar3,2);
      lVar3 = local_60;
      Ref<Texture2D>::unref((Ref<Texture2D> *)&local_60);
      if (lVar3 == 0) {
        pcVar6 = "roughness";
        Variant::Variant((Variant *)local_58,_LC133);
LAB_001062a8:
        StringName::StringName((StringName *)&local_60,pcVar6,false);
        EditorUndoRedoManager::add_do_property(pOVar2,(StringName *)param_2,(Variant *)&local_60);
        if ((StringName::configured != '\0') && (local_60 != 0)) {
          StringName::unref();
        }
        if (Variant::needs_deinit[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
        StringName::StringName((StringName *)&local_60,pcVar6,false);
        Object::get((StringName *)local_58,(bool *)param_2);
        if ((StringName::configured != '\0') && (local_60 != 0)) {
          StringName::unref();
        }
        if (Variant::needs_deinit[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
      }
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00106424:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MaterialEditor::_update_theme_item_cache() */

void __thiscall MaterialEditor::_update_theme_item_cache(MaterialEditor *this)

{
  Object *pOVar1;
  char cVar2;
  int iVar3;
  Object *pOVar4;
  long in_FS_OFFSET;
  Object *local_40;
  Object *local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  Control::_update_theme_item_cache();
  if ((_update_theme_item_cache()::{lambda()#1}::operator()()::sname == '\0') &&
     (iVar3 = __cxa_guard_acquire(&_update_theme_item_cache()::{lambda()#1}::operator()()::sname),
     iVar3 != 0)) {
    _scs_create((char *)&_update_theme_item_cache()::{lambda()#1}::operator()()::sname,true);
    __cxa_atexit(StringName::~StringName,
                 &_update_theme_item_cache()::{lambda()#1}::operator()()::sname,&__dso_handle);
    __cxa_guard_release(&_update_theme_item_cache()::{lambda()#1}::operator()()::sname);
  }
  Control::get_editor_theme_icon((StringName *)&local_40);
  pOVar1 = *(Object **)(this + 0xaa8);
  if (local_40 != pOVar1) {
    *(Object **)(this + 0xaa8) = local_40;
    local_38 = pOVar1;
    if ((local_40 != (Object *)0x0) && (cVar2 = RefCounted::reference(), cVar2 == '\0')) {
      *(undefined8 *)(this + 0xaa8) = 0;
    }
    Ref<Texture2D>::unref((Ref<Texture2D> *)&local_38);
  }
  if (((local_40 != (Object *)0x0) &&
      (cVar2 = RefCounted::unreference(), pOVar1 = local_40, cVar2 != '\0')) &&
     (cVar2 = predelete_handler(local_40), cVar2 != '\0')) {
    (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
    Memory::free_static(pOVar1,false);
  }
  if ((_update_theme_item_cache()::{lambda()#2}::operator()()::sname == '\0') &&
     (iVar3 = __cxa_guard_acquire(&_update_theme_item_cache()::{lambda()#2}::operator()()::sname),
     iVar3 != 0)) {
    _scs_create((char *)&_update_theme_item_cache()::{lambda()#2}::operator()()::sname,true);
    __cxa_atexit(StringName::~StringName,
                 &_update_theme_item_cache()::{lambda()#2}::operator()()::sname,&__dso_handle);
    __cxa_guard_release(&_update_theme_item_cache()::{lambda()#2}::operator()()::sname);
  }
  Control::get_editor_theme_icon((StringName *)&local_40);
  pOVar1 = *(Object **)(this + 0xab0);
  if (local_40 != pOVar1) {
    *(Object **)(this + 0xab0) = local_40;
    local_38 = pOVar1;
    if ((local_40 != (Object *)0x0) && (cVar2 = RefCounted::reference(), cVar2 == '\0')) {
      *(undefined8 *)(this + 0xab0) = 0;
    }
    Ref<Texture2D>::unref((Ref<Texture2D> *)&local_38);
  }
  if (((local_40 != (Object *)0x0) &&
      (cVar2 = RefCounted::unreference(), pOVar1 = local_40, cVar2 != '\0')) &&
     (cVar2 = predelete_handler(local_40), cVar2 != '\0')) {
    (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
    Memory::free_static(pOVar1,false);
  }
  if ((_update_theme_item_cache()::{lambda()#3}::operator()()::sname == '\0') &&
     (iVar3 = __cxa_guard_acquire(&_update_theme_item_cache()::{lambda()#3}::operator()()::sname),
     iVar3 != 0)) {
    _scs_create((char *)&_update_theme_item_cache()::{lambda()#3}::operator()()::sname,true);
    __cxa_atexit(StringName::~StringName,
                 &_update_theme_item_cache()::{lambda()#3}::operator()()::sname,&__dso_handle);
    __cxa_guard_release(&_update_theme_item_cache()::{lambda()#3}::operator()()::sname);
  }
  Control::get_editor_theme_icon((StringName *)&local_40);
  pOVar1 = *(Object **)(this + 0xab8);
  if (local_40 != pOVar1) {
    *(Object **)(this + 0xab8) = local_40;
    local_38 = pOVar1;
    if ((local_40 != (Object *)0x0) && (cVar2 = RefCounted::reference(), cVar2 == '\0')) {
      *(undefined8 *)(this + 0xab8) = 0;
    }
    Ref<Texture2D>::unref((Ref<Texture2D> *)&local_38);
  }
  if (((local_40 != (Object *)0x0) &&
      (cVar2 = RefCounted::unreference(), pOVar1 = local_40, cVar2 != '\0')) &&
     (cVar2 = predelete_handler(local_40), cVar2 != '\0')) {
    (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
    Memory::free_static(pOVar1,false);
  }
  if ((_update_theme_item_cache()::{lambda()#4}::operator()()::sname == '\0') &&
     (iVar3 = __cxa_guard_acquire(&_update_theme_item_cache()::{lambda()#4}::operator()()::sname),
     iVar3 != 0)) {
    _scs_create((char *)&_update_theme_item_cache()::{lambda()#4}::operator()()::sname,true);
    __cxa_atexit(StringName::~StringName,
                 &_update_theme_item_cache()::{lambda()#4}::operator()()::sname,&__dso_handle);
    __cxa_guard_release(&_update_theme_item_cache()::{lambda()#4}::operator()()::sname);
  }
  Control::get_editor_theme_icon((StringName *)&local_40);
  pOVar1 = *(Object **)(this + 0xac0);
  if (local_40 != pOVar1) {
    *(Object **)(this + 0xac0) = local_40;
    local_38 = pOVar1;
    if ((local_40 != (Object *)0x0) && (cVar2 = RefCounted::reference(), cVar2 == '\0')) {
      *(undefined8 *)(this + 0xac0) = 0;
    }
    Ref<Texture2D>::unref((Ref<Texture2D> *)&local_38);
  }
  if (((local_40 != (Object *)0x0) &&
      (cVar2 = RefCounted::unreference(), pOVar1 = local_40, cVar2 != '\0')) &&
     (cVar2 = predelete_handler(local_40), cVar2 != '\0')) {
    (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
    Memory::free_static(pOVar1,false);
  }
  if ((_update_theme_item_cache()::{lambda()#5}::operator()()::sname == '\0') &&
     (iVar3 = __cxa_guard_acquire(&_update_theme_item_cache()::{lambda()#5}::operator()()::sname),
     iVar3 != 0)) {
    _scs_create((char *)&_update_theme_item_cache()::{lambda()#5}::operator()()::sname,true);
    __cxa_atexit(StringName::~StringName,
                 &_update_theme_item_cache()::{lambda()#5}::operator()()::sname,&__dso_handle);
    __cxa_guard_release(&_update_theme_item_cache()::{lambda()#5}::operator()()::sname);
  }
  Control::get_editor_theme_icon((StringName *)&local_38);
  pOVar1 = *(Object **)(this + 0xac8);
  pOVar4 = pOVar1;
  if (local_38 != pOVar1) {
    *(Object **)(this + 0xac8) = local_38;
    if (local_38 == (Object *)0x0) {
      if (pOVar1 == (Object *)0x0) goto LAB_001066d3;
      cVar2 = RefCounted::unreference();
    }
    else {
      cVar2 = RefCounted::reference();
      if (cVar2 == '\0') {
        *(undefined8 *)(this + 0xac8) = 0;
      }
      pOVar4 = local_38;
      if (pOVar1 == (Object *)0x0) goto LAB_001066be;
      cVar2 = RefCounted::unreference();
    }
    pOVar4 = local_38;
    if ((cVar2 != '\0') && (cVar2 = predelete_handler(pOVar1), pOVar4 = local_38, cVar2 != '\0')) {
      (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
      Memory::free_static(pOVar1,false);
      pOVar4 = local_38;
    }
  }
LAB_001066be:
  if (((pOVar4 != (Object *)0x0) &&
      (cVar2 = RefCounted::unreference(), pOVar1 = local_38, cVar2 != '\0')) &&
     (cVar2 = predelete_handler(local_38), cVar2 != '\0')) {
    (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
    Memory::free_static(pOVar1,false);
  }
LAB_001066d3:
  if ((_update_theme_item_cache()::{lambda()#6}::operator()()::sname == '\0') &&
     (iVar3 = __cxa_guard_acquire(&_update_theme_item_cache()::{lambda()#6}::operator()()::sname),
     iVar3 != 0)) {
    _scs_create((char *)&_update_theme_item_cache()::{lambda()#6}::operator()()::sname,true);
    __cxa_atexit(StringName::~StringName,
                 &_update_theme_item_cache()::{lambda()#6}::operator()()::sname,&__dso_handle);
    __cxa_guard_release(&_update_theme_item_cache()::{lambda()#6}::operator()()::sname);
  }
  Control::get_editor_theme_icon((StringName *)&local_40);
  pOVar1 = *(Object **)(this + 0xad0);
  if (local_40 != pOVar1) {
    *(Object **)(this + 0xad0) = local_40;
    local_38 = pOVar1;
    if ((local_40 != (Object *)0x0) && (cVar2 = RefCounted::reference(), cVar2 == '\0')) {
      *(undefined8 *)(this + 0xad0) = 0;
    }
    Ref<Texture2D>::unref((Ref<Texture2D> *)&local_38);
  }
  if (((local_40 != (Object *)0x0) && (cVar2 = RefCounted::unreference(), cVar2 != '\0')) &&
     (cVar2 = predelete_handler(local_40), cVar2 != '\0')) {
    (**(code **)(*(long *)local_40 + 0x140))(local_40);
    Memory::free_static(local_40,false);
  }
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



/* RefCounted::is_class_ptr(void*) const */

uint __thiscall RefCounted::is_class_ptr(RefCounted *this,void *param_1)

{
  return (uint)CONCAT71(0x1170,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x116f,(undefined4 *)param_1 == &get_class_ptr_static()::ptr);
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



/* QuadMesh::_getv(StringName const&, Variant&) const */

undefined8 QuadMesh::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* QuadMesh::_setv(StringName const&, Variant const&) */

undefined8 QuadMesh::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* QuadMesh::_validate_propertyv(PropertyInfo&) const */

void QuadMesh::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* QuadMesh::_property_can_revertv(StringName const&) const */

undefined8 QuadMesh::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* QuadMesh::_property_get_revertv(StringName const&, Variant&) const */

undefined8 QuadMesh::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* QuadMesh::_notificationv(int, bool) */

void QuadMesh::_notificationv(int param_1,bool param_2)

{
  return;
}



/* MaterialEditor::is_class_ptr(void*) const */

uint __thiscall MaterialEditor::is_class_ptr(MaterialEditor *this,void *param_1)

{
  return (uint)CONCAT71(0x116f,(undefined4 *)param_1 == &Control::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x116e,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x116f,(undefined4 *)param_1 == &CanvasItem::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x116f,(undefined4 *)param_1 == &Node::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1170,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* EditorInspectorPluginMaterial::is_class_ptr(void*) const */

uint __thiscall
EditorInspectorPluginMaterial::is_class_ptr(EditorInspectorPluginMaterial *this,void *param_1)

{
  return (uint)CONCAT71(0x116e,(undefined4 *)param_1 ==
                               &EditorInspectorPlugin::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x116e,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x116f,(undefined4 *)param_1 == &RefCounted::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1170,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* EditorInspectorPluginMaterial::_getv(StringName const&, Variant&) const */

undefined8 EditorInspectorPluginMaterial::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* EditorInspectorPluginMaterial::_setv(StringName const&, Variant const&) */

undefined8 EditorInspectorPluginMaterial::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* EditorInspectorPluginMaterial::_validate_propertyv(PropertyInfo&) const */

void EditorInspectorPluginMaterial::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* EditorInspectorPluginMaterial::_property_can_revertv(StringName const&) const */

undefined8 EditorInspectorPluginMaterial::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* EditorInspectorPluginMaterial::_property_get_revertv(StringName const&, Variant&) const */

undefined8
EditorInspectorPluginMaterial::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* EditorInspectorPluginMaterial::_notificationv(int, bool) */

void EditorInspectorPluginMaterial::_notificationv(int param_1,bool param_2)

{
  return;
}



/* MaterialEditorPlugin::is_class_ptr(void*) const */

uint __thiscall MaterialEditorPlugin::is_class_ptr(MaterialEditorPlugin *this,void *param_1)

{
  return (uint)CONCAT71(0x116e,(undefined4 *)param_1 == &EditorPlugin::get_class_ptr_static()::ptr)
         | (uint)CONCAT71(0x116e,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x116f,(undefined4 *)param_1 == &Node::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1170,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* MaterialEditorPlugin::_getv(StringName const&, Variant&) const */

undefined8 MaterialEditorPlugin::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* MaterialEditorPlugin::_setv(StringName const&, Variant const&) */

undefined8 MaterialEditorPlugin::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* MaterialEditorPlugin::_property_can_revertv(StringName const&) const */

undefined8 MaterialEditorPlugin::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* MaterialEditorPlugin::_property_get_revertv(StringName const&, Variant&) const */

undefined8 MaterialEditorPlugin::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* StandardMaterial3DConversionPlugin::is_class_ptr(void*) const */

uint __thiscall
StandardMaterial3DConversionPlugin::is_class_ptr
          (StandardMaterial3DConversionPlugin *this,void *param_1)

{
  return (uint)CONCAT71(0x116e,(undefined4 *)param_1 ==
                               &EditorResourceConversionPlugin::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x116e,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x116f,(undefined4 *)param_1 == &RefCounted::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1170,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* StandardMaterial3DConversionPlugin::_getv(StringName const&, Variant&) const */

undefined8 StandardMaterial3DConversionPlugin::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* StandardMaterial3DConversionPlugin::_setv(StringName const&, Variant const&) */

undefined8 StandardMaterial3DConversionPlugin::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* StandardMaterial3DConversionPlugin::_validate_propertyv(PropertyInfo&) const */

void StandardMaterial3DConversionPlugin::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* StandardMaterial3DConversionPlugin::_property_can_revertv(StringName const&) const */

undefined8 StandardMaterial3DConversionPlugin::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* StandardMaterial3DConversionPlugin::_property_get_revertv(StringName const&, Variant&) const */

undefined8
StandardMaterial3DConversionPlugin::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* StandardMaterial3DConversionPlugin::_notificationv(int, bool) */

void StandardMaterial3DConversionPlugin::_notificationv(int param_1,bool param_2)

{
  return;
}



/* ORMMaterial3DConversionPlugin::is_class_ptr(void*) const */

uint __thiscall
ORMMaterial3DConversionPlugin::is_class_ptr(ORMMaterial3DConversionPlugin *this,void *param_1)

{
  return (uint)CONCAT71(0x116e,(undefined4 *)param_1 ==
                               &EditorResourceConversionPlugin::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x116e,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x116f,(undefined4 *)param_1 == &RefCounted::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1170,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* ORMMaterial3DConversionPlugin::_getv(StringName const&, Variant&) const */

undefined8 ORMMaterial3DConversionPlugin::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* ORMMaterial3DConversionPlugin::_setv(StringName const&, Variant const&) */

undefined8 ORMMaterial3DConversionPlugin::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* ORMMaterial3DConversionPlugin::_validate_propertyv(PropertyInfo&) const */

void ORMMaterial3DConversionPlugin::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* ORMMaterial3DConversionPlugin::_property_can_revertv(StringName const&) const */

undefined8 ORMMaterial3DConversionPlugin::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* ORMMaterial3DConversionPlugin::_property_get_revertv(StringName const&, Variant&) const */

undefined8
ORMMaterial3DConversionPlugin::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* ORMMaterial3DConversionPlugin::_notificationv(int, bool) */

void ORMMaterial3DConversionPlugin::_notificationv(int param_1,bool param_2)

{
  return;
}



/* ParticleProcessMaterialConversionPlugin::is_class_ptr(void*) const */

uint __thiscall
ParticleProcessMaterialConversionPlugin::is_class_ptr
          (ParticleProcessMaterialConversionPlugin *this,void *param_1)

{
  return (uint)CONCAT71(0x116e,(undefined4 *)param_1 ==
                               &EditorResourceConversionPlugin::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x116d,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x116f,(undefined4 *)param_1 == &RefCounted::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1170,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* ParticleProcessMaterialConversionPlugin::_getv(StringName const&, Variant&) const */

undefined8 ParticleProcessMaterialConversionPlugin::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* ParticleProcessMaterialConversionPlugin::_setv(StringName const&, Variant const&) */

undefined8 ParticleProcessMaterialConversionPlugin::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* ParticleProcessMaterialConversionPlugin::_validate_propertyv(PropertyInfo&) const */

void ParticleProcessMaterialConversionPlugin::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* ParticleProcessMaterialConversionPlugin::_property_can_revertv(StringName const&) const */

undefined8 ParticleProcessMaterialConversionPlugin::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* ParticleProcessMaterialConversionPlugin::_property_get_revertv(StringName const&, Variant&) const
    */

undefined8
ParticleProcessMaterialConversionPlugin::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* ParticleProcessMaterialConversionPlugin::_notificationv(int, bool) */

void ParticleProcessMaterialConversionPlugin::_notificationv(int param_1,bool param_2)

{
  return;
}



/* CanvasItemMaterialConversionPlugin::is_class_ptr(void*) const */

uint __thiscall
CanvasItemMaterialConversionPlugin::is_class_ptr
          (CanvasItemMaterialConversionPlugin *this,void *param_1)

{
  return (uint)CONCAT71(0x116e,(undefined4 *)param_1 ==
                               &EditorResourceConversionPlugin::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x116d,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x116f,(undefined4 *)param_1 == &RefCounted::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1170,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* CanvasItemMaterialConversionPlugin::_getv(StringName const&, Variant&) const */

undefined8 CanvasItemMaterialConversionPlugin::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* CanvasItemMaterialConversionPlugin::_setv(StringName const&, Variant const&) */

undefined8 CanvasItemMaterialConversionPlugin::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* CanvasItemMaterialConversionPlugin::_validate_propertyv(PropertyInfo&) const */

void CanvasItemMaterialConversionPlugin::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* CanvasItemMaterialConversionPlugin::_property_can_revertv(StringName const&) const */

undefined8 CanvasItemMaterialConversionPlugin::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* CanvasItemMaterialConversionPlugin::_property_get_revertv(StringName const&, Variant&) const */

undefined8
CanvasItemMaterialConversionPlugin::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* CanvasItemMaterialConversionPlugin::_notificationv(int, bool) */

void CanvasItemMaterialConversionPlugin::_notificationv(int param_1,bool param_2)

{
  return;
}



/* ProceduralSkyMaterialConversionPlugin::is_class_ptr(void*) const */

uint __thiscall
ProceduralSkyMaterialConversionPlugin::is_class_ptr
          (ProceduralSkyMaterialConversionPlugin *this,void *param_1)

{
  return (uint)CONCAT71(0x116e,(undefined4 *)param_1 ==
                               &EditorResourceConversionPlugin::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x116d,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x116f,(undefined4 *)param_1 == &RefCounted::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1170,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* ProceduralSkyMaterialConversionPlugin::_getv(StringName const&, Variant&) const */

undefined8 ProceduralSkyMaterialConversionPlugin::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* ProceduralSkyMaterialConversionPlugin::_setv(StringName const&, Variant const&) */

undefined8 ProceduralSkyMaterialConversionPlugin::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* ProceduralSkyMaterialConversionPlugin::_validate_propertyv(PropertyInfo&) const */

void ProceduralSkyMaterialConversionPlugin::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* ProceduralSkyMaterialConversionPlugin::_property_can_revertv(StringName const&) const */

undefined8 ProceduralSkyMaterialConversionPlugin::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* ProceduralSkyMaterialConversionPlugin::_property_get_revertv(StringName const&, Variant&) const
    */

undefined8
ProceduralSkyMaterialConversionPlugin::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* ProceduralSkyMaterialConversionPlugin::_notificationv(int, bool) */

void ProceduralSkyMaterialConversionPlugin::_notificationv(int param_1,bool param_2)

{
  return;
}



/* PanoramaSkyMaterialConversionPlugin::is_class_ptr(void*) const */

uint __thiscall
PanoramaSkyMaterialConversionPlugin::is_class_ptr
          (PanoramaSkyMaterialConversionPlugin *this,void *param_1)

{
  return (uint)CONCAT71(0x116e,(undefined4 *)param_1 ==
                               &EditorResourceConversionPlugin::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x116d,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x116f,(undefined4 *)param_1 == &RefCounted::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1170,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* PanoramaSkyMaterialConversionPlugin::_getv(StringName const&, Variant&) const */

undefined8 PanoramaSkyMaterialConversionPlugin::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* PanoramaSkyMaterialConversionPlugin::_setv(StringName const&, Variant const&) */

undefined8 PanoramaSkyMaterialConversionPlugin::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* PanoramaSkyMaterialConversionPlugin::_validate_propertyv(PropertyInfo&) const */

void PanoramaSkyMaterialConversionPlugin::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* PanoramaSkyMaterialConversionPlugin::_property_can_revertv(StringName const&) const */

undefined8 PanoramaSkyMaterialConversionPlugin::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* PanoramaSkyMaterialConversionPlugin::_property_get_revertv(StringName const&, Variant&) const */

undefined8
PanoramaSkyMaterialConversionPlugin::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* PanoramaSkyMaterialConversionPlugin::_notificationv(int, bool) */

void PanoramaSkyMaterialConversionPlugin::_notificationv(int param_1,bool param_2)

{
  return;
}



/* PhysicalSkyMaterialConversionPlugin::is_class_ptr(void*) const */

uint __thiscall
PhysicalSkyMaterialConversionPlugin::is_class_ptr
          (PhysicalSkyMaterialConversionPlugin *this,void *param_1)

{
  return (uint)CONCAT71(0x116e,(undefined4 *)param_1 ==
                               &EditorResourceConversionPlugin::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x116d,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x116f,(undefined4 *)param_1 == &RefCounted::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1170,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* PhysicalSkyMaterialConversionPlugin::_getv(StringName const&, Variant&) const */

undefined8 PhysicalSkyMaterialConversionPlugin::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* PhysicalSkyMaterialConversionPlugin::_setv(StringName const&, Variant const&) */

undefined8 PhysicalSkyMaterialConversionPlugin::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* PhysicalSkyMaterialConversionPlugin::_validate_propertyv(PropertyInfo&) const */

void PhysicalSkyMaterialConversionPlugin::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* PhysicalSkyMaterialConversionPlugin::_property_can_revertv(StringName const&) const */

undefined8 PhysicalSkyMaterialConversionPlugin::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* PhysicalSkyMaterialConversionPlugin::_property_get_revertv(StringName const&, Variant&) const */

undefined8
PhysicalSkyMaterialConversionPlugin::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* PhysicalSkyMaterialConversionPlugin::_notificationv(int, bool) */

void PhysicalSkyMaterialConversionPlugin::_notificationv(int param_1,bool param_2)

{
  return;
}



/* FogMaterialConversionPlugin::is_class_ptr(void*) const */

uint __thiscall
FogMaterialConversionPlugin::is_class_ptr(FogMaterialConversionPlugin *this,void *param_1)

{
  return (uint)CONCAT71(0x116e,(undefined4 *)param_1 ==
                               &EditorResourceConversionPlugin::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x116d,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x116f,(undefined4 *)param_1 == &RefCounted::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1170,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* FogMaterialConversionPlugin::_getv(StringName const&, Variant&) const */

undefined8 FogMaterialConversionPlugin::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* FogMaterialConversionPlugin::_setv(StringName const&, Variant const&) */

undefined8 FogMaterialConversionPlugin::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* FogMaterialConversionPlugin::_validate_propertyv(PropertyInfo&) const */

void FogMaterialConversionPlugin::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* FogMaterialConversionPlugin::_property_can_revertv(StringName const&) const */

undefined8 FogMaterialConversionPlugin::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* FogMaterialConversionPlugin::_property_get_revertv(StringName const&, Variant&) const */

undefined8 FogMaterialConversionPlugin::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* FogMaterialConversionPlugin::_notificationv(int, bool) */

void FogMaterialConversionPlugin::_notificationv(int param_1,bool param_2)

{
  return;
}



/* ColorRect::is_class_ptr(void*) const */

uint __thiscall ColorRect::is_class_ptr(ColorRect *this,void *param_1)

{
  return (uint)CONCAT71(0x116f,(undefined4 *)param_1 == &Control::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x116d,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x116f,(undefined4 *)param_1 == &CanvasItem::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x116f,(undefined4 *)param_1 == &Node::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1170,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* CallableCustomMethodPointer<EditorInspectorPluginMaterial, void, Object*, Object*, String const&,
   Variant const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorInspectorPluginMaterial,void,Object*,Object*,String_const&,Variant_const&>
::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorInspectorPluginMaterial,void,Object*,Object*,String_const&,Variant_const&>
           *this)

{
  return;
}



/* CallableCustomMethodPointer<MaterialEditor, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<MaterialEditor,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<MaterialEditor,void> *this)

{
  return;
}



/* CallableCustomMethodPointer<EditorInspectorPluginMaterial, void, Object*, Object*, String const&,
   Variant const&>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorInspectorPluginMaterial,void,Object*,Object*,String_const&,Variant_const&>
::get_argument_count
          (CallableCustomMethodPointer<EditorInspectorPluginMaterial,void,Object*,Object*,String_const&,Variant_const&>
           *this,bool *param_1)

{
  *param_1 = true;
  return 4;
}



/* CallableCustomMethodPointer<MaterialEditor, void>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<MaterialEditor,void>::get_argument_count
          (CallableCustomMethodPointer<MaterialEditor,void> *this,bool *param_1)

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



/* CallableCustomMethodPointer<MaterialEditor, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<MaterialEditor,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<MaterialEditor,void> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<EditorInspectorPluginMaterial, void, Object*, Object*, String const&,
   Variant const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorInspectorPluginMaterial,void,Object*,Object*,String_const&,Variant_const&>
::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorInspectorPluginMaterial,void,Object*,Object*,String_const&,Variant_const&>
           *this)

{
  operator_delete(this,0x48);
  return;
}



/* ColorRect::~ColorRect() */

void __thiscall ColorRect::~ColorRect(ColorRect *this)

{
  *(undefined ***)this = &PTR__initialize_classv_00115830;
  Control::~Control((Control *)this);
  return;
}



/* ColorRect::~ColorRect() */

void __thiscall ColorRect::~ColorRect(ColorRect *this)

{
  *(undefined ***)this = &PTR__initialize_classv_00115830;
  Control::~Control((Control *)this);
  operator_delete(this,0x9d8);
  return;
}



/* HBoxContainer::_property_get_revertv(StringName const&, Variant&) const */

undefined8 HBoxContainer::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_get_revert_0011d020 != Object::_property_get_revert) {
    uVar1 = Control::_property_get_revert(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* VBoxContainer::_property_get_revertv(StringName const&, Variant&) const */

undefined8 VBoxContainer::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_get_revert_0011d020 != Object::_property_get_revert) {
    uVar1 = Control::_property_get_revert(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* MaterialEditor::_property_get_revertv(StringName const&, Variant&) const */

undefined8 MaterialEditor::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_get_revert_0011d020 != Object::_property_get_revert) {
    uVar1 = Control::_property_get_revert(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* ColorRect::_property_get_revertv(StringName const&, Variant&) const */

undefined8 ColorRect::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_get_revert_0011d020 != Object::_property_get_revert) {
    uVar1 = Control::_property_get_revert(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* HBoxContainer::_property_can_revertv(StringName const&) const */

undefined8 HBoxContainer::_property_can_revertv(StringName *param_1)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_can_revert_0011d028 != Object::_property_can_revert) {
    uVar1 = Control::_property_can_revert(param_1);
    return uVar1;
  }
  return 0;
}



/* VBoxContainer::_property_can_revertv(StringName const&) const */

undefined8 VBoxContainer::_property_can_revertv(StringName *param_1)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_can_revert_0011d028 != Object::_property_can_revert) {
    uVar1 = Control::_property_can_revert(param_1);
    return uVar1;
  }
  return 0;
}



/* MaterialEditor::_property_can_revertv(StringName const&) const */

undefined8 MaterialEditor::_property_can_revertv(StringName *param_1)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_can_revert_0011d028 != Object::_property_can_revert) {
    uVar1 = Control::_property_can_revert(param_1);
    return uVar1;
  }
  return 0;
}



/* ColorRect::_property_can_revertv(StringName const&) const */

undefined8 ColorRect::_property_can_revertv(StringName *param_1)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_can_revert_0011d028 != Object::_property_can_revert) {
    uVar1 = Control::_property_can_revert(param_1);
    return uVar1;
  }
  return 0;
}



/* MaterialEditorPlugin::_validate_propertyv(PropertyInfo&) const */

void MaterialEditorPlugin::_validate_propertyv(PropertyInfo *param_1)

{
  if ((code *)PTR__validate_property_0011d030 != Object::_validate_property) {
    Node::_validate_property(param_1);
    return;
  }
  return;
}



/* QuadMesh::~QuadMesh() */

void __thiscall QuadMesh::~QuadMesh(QuadMesh *this)

{
  *(code **)this = Object::~Object;
  PrimitiveMesh::~PrimitiveMesh((PrimitiveMesh *)this);
  return;
}



/* QuadMesh::~QuadMesh() */

void __thiscall QuadMesh::~QuadMesh(QuadMesh *this)

{
  *(code **)this = Object::~Object;
  PrimitiveMesh::~PrimitiveMesh((PrimitiveMesh *)this);
  operator_delete(this,0x458);
  return;
}



/* RefCounted::~RefCounted() */

void __thiscall RefCounted::~RefCounted(RefCounted *this)

{
  *(undefined ***)this = &PTR__initialize_classv_00114ac8;
  Object::~Object((Object *)this);
  return;
}



/* RefCounted::~RefCounted() */

void __thiscall RefCounted::~RefCounted(RefCounted *this)

{
  *(undefined ***)this = &PTR__initialize_classv_00114ac8;
  Object::~Object((Object *)this);
  operator_delete(this,0x180);
  return;
}



/* CallableCustomMethodPointer<MaterialEditor, void>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<MaterialEditor,void>::get_object
          (CallableCustomMethodPointer<MaterialEditor,void> *this)

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
      goto LAB_0010789d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0010789d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0010789d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<EditorInspectorPluginMaterial, void, Object*, Object*, String const&,
   Variant const&>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorInspectorPluginMaterial,void,Object*,Object*,String_const&,Variant_const&>
::get_object(CallableCustomMethodPointer<EditorInspectorPluginMaterial,void,Object*,Object*,String_const&,Variant_const&>
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
      goto LAB_0010799d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0010799d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0010799d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* QuadMesh::is_class_ptr(void*) const */

uint QuadMesh::is_class_ptr(void *param_1)

{
  uint uVar1;
  undefined4 in_EDX;
  undefined4 *in_RSI;
  
  uVar1 = 1;
  if (in_RSI != &get_class_ptr_static()::ptr) {
    uVar1 = (uint)CONCAT71(0x116e,in_RSI == &PrimitiveMesh::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x116e,in_RSI == &PlaneMesh::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x116f,in_RSI == &Mesh::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x116f,in_RSI == &Resource::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x116f,in_RSI == &RefCounted::get_class_ptr_static()::ptr) |
            CONCAT31((int3)((uint)in_EDX >> 8),in_RSI == &Object::get_class_ptr_static()::ptr);
  }
  return uVar1;
}



/* MaterialEditorPlugin::_notificationv(int, bool) */

void __thiscall
MaterialEditorPlugin::_notificationv(MaterialEditorPlugin *this,int param_1,bool param_2)

{
  int iVar1;
  
  iVar1 = (int)this;
  if (param_2) {
    if ((code *)PTR__notification_0011d038 != Node::_notification) {
      EditorPlugin::_notification(iVar1);
    }
    Node::_notification(iVar1);
    return;
  }
  Node::_notification(iVar1);
  if ((code *)PTR__notification_0011d038 == Node::_notification) {
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
  if ((code *)PTR__validate_property_0011d040 == CanvasItem::_validate_property) {
    return;
  }
  Control::_validate_property(param_1);
  return;
}



/* MaterialEditor::_validate_propertyv(PropertyInfo&) const */

void MaterialEditor::_validate_propertyv(PropertyInfo *param_1)

{
  Node::_validate_property(param_1);
  CanvasItem::_validate_property(param_1);
  if ((code *)PTR__validate_property_0011d040 == CanvasItem::_validate_property) {
    return;
  }
  Control::_validate_property(param_1);
  return;
}



/* VBoxContainer::_validate_propertyv(PropertyInfo&) const */

void VBoxContainer::_validate_propertyv(PropertyInfo *param_1)

{
  Node::_validate_property(param_1);
  CanvasItem::_validate_property(param_1);
  Control::_validate_property(param_1);
  if ((code *)PTR__validate_property_0011d048 == Control::_validate_property) {
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
  if ((code *)PTR__validate_property_0011d048 == Control::_validate_property) {
    return;
  }
  BoxContainer::_validate_property(param_1);
  return;
}



/* HBoxContainer::is_class_ptr(void*) const */

uint HBoxContainer::is_class_ptr(void *param_1)

{
  uint uVar1;
  undefined4 in_EDX;
  undefined4 *in_RSI;
  
  uVar1 = 1;
  if (in_RSI != &get_class_ptr_static()::ptr) {
    uVar1 = (uint)CONCAT71(0x116f,in_RSI == &Container::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x116f,in_RSI == &BoxContainer::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x116f,in_RSI == &Control::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x116f,in_RSI == &CanvasItem::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x116f,in_RSI == &Node::get_class_ptr_static()::ptr) |
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
    uVar1 = (uint)CONCAT71(0x116f,in_RSI == &Container::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x116f,in_RSI == &BoxContainer::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x116f,in_RSI == &Control::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x116f,in_RSI == &CanvasItem::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x116f,in_RSI == &Node::get_class_ptr_static()::ptr) |
            CONCAT31((int3)((uint)in_EDX >> 8),in_RSI == &Object::get_class_ptr_static()::ptr);
  }
  return uVar1;
}



/* HBoxContainer::_setv(StringName const&, Variant const&) */

undefined8 HBoxContainer::_setv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  uVar1 = CanvasItem::_set(param_1,param_2);
  if ((char)uVar1 == '\0') {
    if ((code *)PTR__set_0011d050 != CanvasItem::_set) {
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
    if ((code *)PTR__set_0011d050 != CanvasItem::_set) {
      uVar1 = Control::_set(param_1,param_2);
      return uVar1;
    }
    uVar1 = 0;
  }
  return uVar1;
}



/* MaterialEditor::_setv(StringName const&, Variant const&) */

undefined8 MaterialEditor::_setv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  uVar1 = CanvasItem::_set(param_1,param_2);
  if ((char)uVar1 == '\0') {
    if ((code *)PTR__set_0011d050 != CanvasItem::_set) {
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
    if ((code *)PTR__set_0011d050 != CanvasItem::_set) {
      uVar1 = Control::_set(param_1,param_2);
      return uVar1;
    }
    uVar1 = 0;
  }
  return uVar1;
}



/* WARNING: Removing unreachable block (ram,0x00108008) */
/* HBoxContainer::_getv(StringName const&, Variant&) const */

undefined8 HBoxContainer::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if (((code *)PTR__get_0011d058 != CanvasItem::_get) &&
     (uVar1 = Control::_get(param_1,param_2), (char)uVar1 != '\0')) {
    return uVar1;
  }
  uVar1 = CanvasItem::_get(param_1,param_2);
  return uVar1;
}



/* WARNING: Removing unreachable block (ram,0x00108078) */
/* MaterialEditor::_getv(StringName const&, Variant&) const */

undefined8 MaterialEditor::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if (((code *)PTR__get_0011d058 != CanvasItem::_get) &&
     (uVar1 = Control::_get(param_1,param_2), (char)uVar1 != '\0')) {
    return uVar1;
  }
  uVar1 = CanvasItem::_get(param_1,param_2);
  return uVar1;
}



/* WARNING: Removing unreachable block (ram,0x001080e8) */
/* ColorRect::_getv(StringName const&, Variant&) const */

undefined8 ColorRect::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if (((code *)PTR__get_0011d058 != CanvasItem::_get) &&
     (uVar1 = Control::_get(param_1,param_2), (char)uVar1 != '\0')) {
    return uVar1;
  }
  uVar1 = CanvasItem::_get(param_1,param_2);
  return uVar1;
}



/* WARNING: Removing unreachable block (ram,0x00108158) */
/* VBoxContainer::_getv(StringName const&, Variant&) const */

undefined8 VBoxContainer::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if (((code *)PTR__get_0011d058 != CanvasItem::_get) &&
     (uVar1 = Control::_get(param_1,param_2), (char)uVar1 != '\0')) {
    return uVar1;
  }
  uVar1 = CanvasItem::_get(param_1,param_2);
  return uVar1;
}



/* WARNING: Removing unreachable block (ram,0x0010822a) */
/* ColorRect::_notificationv(int, bool) */

void __thiscall ColorRect::_notificationv(ColorRect *this,int param_1,bool param_2)

{
  int iVar1;
  
  iVar1 = (int)this;
  if (param_2) {
    if ((code *)PTR__notification_0011d060 != Control::_notification) {
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
  if ((code *)PTR__notification_0011d060 == Control::_notification) {
    return;
  }
  ColorRect::_notification(iVar1);
  return;
}



/* HBoxContainer::~HBoxContainer() */

void __thiscall HBoxContainer::~HBoxContainer(HBoxContainer *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(code **)this = strlen;
  if (bVar1) {
    if (*(long *)(this + 0x9e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001082c0;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_001082c0:
  Control::~Control((Control *)this);
  return;
}



/* VBoxContainer::~VBoxContainer() */

void __thiscall VBoxContainer::~VBoxContainer(VBoxContainer *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(code **)this = strlen;
  if (bVar1) {
    if (*(long *)(this + 0x9e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00108320;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_00108320:
  Control::~Control((Control *)this);
  return;
}



/* HBoxContainer::~HBoxContainer() */

void __thiscall HBoxContainer::~HBoxContainer(HBoxContainer *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(code **)this = strlen;
  if (bVar1) {
    if (*(long *)(this + 0x9e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00108380;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_00108380:
  Control::~Control((Control *)this);
  operator_delete(this,0xa10);
  return;
}



/* VBoxContainer::~VBoxContainer() */

void __thiscall VBoxContainer::~VBoxContainer(VBoxContainer *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(code **)this = strlen;
  if (bVar1) {
    if (*(long *)(this + 0x9e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001083f0;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_001083f0:
  Control::~Control((Control *)this);
  operator_delete(this,0xa10);
  return;
}



/* MaterialEditorPlugin::get_plugin_name() const */

MaterialEditorPlugin * __thiscall MaterialEditorPlugin::get_plugin_name(MaterialEditorPlugin *this)

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



/* EditorInspectorPluginMaterial::_get_class_namev() const */

undefined8 * EditorInspectorPluginMaterial::_get_class_namev(void)

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
LAB_00108893:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00108893;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,
                 "EditorInspectorPluginMaterial");
      goto LAB_001088fe;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"EditorInspectorPluginMaterial");
LAB_001088fe:
  return &_get_class_namev()::_class_name_static;
}



/* ParticleProcessMaterialConversionPlugin::_get_class_namev() const */

undefined8 * ParticleProcessMaterialConversionPlugin::_get_class_namev(void)

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
LAB_00108993:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00108993;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,
                 "ParticleProcessMaterialConversionPlugin");
      goto LAB_001089fe;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,
             "ParticleProcessMaterialConversionPlugin");
LAB_001089fe:
  return &_get_class_namev()::_class_name_static;
}



/* QuadMesh::_get_class_namev() const */

undefined8 * QuadMesh::_get_class_namev(void)

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
LAB_00108a73:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00108a73;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"QuadMesh");
      goto LAB_00108ade;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"QuadMesh");
LAB_00108ade:
  return &_get_class_namev()::_class_name_static;
}



/* StandardMaterial3DConversionPlugin::_get_class_namev() const */

undefined8 * StandardMaterial3DConversionPlugin::_get_class_namev(void)

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
LAB_00108b73:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00108b73;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,
                 "StandardMaterial3DConversionPlugin");
      goto LAB_00108bde;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,
             "StandardMaterial3DConversionPlugin");
LAB_00108bde:
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
LAB_00108c63:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00108c63;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"HBoxContainer");
      goto LAB_00108cce;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"HBoxContainer");
LAB_00108cce:
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
LAB_00108d43:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00108d43;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"RefCounted");
      goto LAB_00108dae;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"RefCounted");
LAB_00108dae:
  return &_get_class_namev()::_class_name_static;
}



/* MaterialEditor::_get_class_namev() const */

undefined8 * MaterialEditor::_get_class_namev(void)

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
LAB_00108e33:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00108e33;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"MaterialEditor");
      goto LAB_00108e9e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"MaterialEditor");
LAB_00108e9e:
  return &_get_class_namev()::_class_name_static;
}



/* PhysicalSkyMaterialConversionPlugin::_get_class_namev() const */

undefined8 * PhysicalSkyMaterialConversionPlugin::_get_class_namev(void)

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
LAB_00108f33:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00108f33;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,
                 "PhysicalSkyMaterialConversionPlugin");
      goto LAB_00108f9e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,
             "PhysicalSkyMaterialConversionPlugin");
LAB_00108f9e:
  return &_get_class_namev()::_class_name_static;
}



/* FogMaterialConversionPlugin::_get_class_namev() const */

undefined8 * FogMaterialConversionPlugin::_get_class_namev(void)

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
LAB_00109023:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00109023;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"FogMaterialConversionPlugin"
                );
      goto LAB_0010908e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"FogMaterialConversionPlugin");
LAB_0010908e:
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
LAB_00109113:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00109113;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"VBoxContainer");
      goto LAB_0010917e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"VBoxContainer");
LAB_0010917e:
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
LAB_001091f3:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_001091f3;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"ColorRect");
      goto LAB_0010925e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"ColorRect");
LAB_0010925e:
  return &_get_class_namev()::_class_name_static;
}



/* PanoramaSkyMaterialConversionPlugin::_get_class_namev() const */

undefined8 * PanoramaSkyMaterialConversionPlugin::_get_class_namev(void)

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
LAB_001092f3:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_001092f3;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,
                 "PanoramaSkyMaterialConversionPlugin");
      goto LAB_0010935e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,
             "PanoramaSkyMaterialConversionPlugin");
LAB_0010935e:
  return &_get_class_namev()::_class_name_static;
}



/* CanvasItemMaterialConversionPlugin::_get_class_namev() const */

undefined8 * CanvasItemMaterialConversionPlugin::_get_class_namev(void)

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
LAB_001093f3:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_001093f3;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,
                 "CanvasItemMaterialConversionPlugin");
      goto LAB_0010945e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,
             "CanvasItemMaterialConversionPlugin");
LAB_0010945e:
  return &_get_class_namev()::_class_name_static;
}



/* ProceduralSkyMaterialConversionPlugin::_get_class_namev() const */

undefined8 * ProceduralSkyMaterialConversionPlugin::_get_class_namev(void)

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
LAB_001094f3:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_001094f3;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,
                 "ProceduralSkyMaterialConversionPlugin");
      goto LAB_0010955e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,
             "ProceduralSkyMaterialConversionPlugin");
LAB_0010955e:
  return &_get_class_namev()::_class_name_static;
}



/* ORMMaterial3DConversionPlugin::_get_class_namev() const */

undefined8 * ORMMaterial3DConversionPlugin::_get_class_namev(void)

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
LAB_001095f3:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_001095f3;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,
                 "ORMMaterial3DConversionPlugin");
      goto LAB_0010965e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"ORMMaterial3DConversionPlugin");
LAB_0010965e:
  return &_get_class_namev()::_class_name_static;
}



/* MaterialEditorPlugin::_get_class_namev() const */

undefined8 * MaterialEditorPlugin::_get_class_namev(void)

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
LAB_001096e3:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_001096e3;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"MaterialEditorPlugin");
      goto LAB_0010974e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"MaterialEditorPlugin");
LAB_0010974e:
  return &_get_class_namev()::_class_name_static;
}



/* HBoxContainer::_notificationv(int, bool) */

void __thiscall HBoxContainer::_notificationv(HBoxContainer *this,int param_1,bool param_2)

{
  int iVar1;
  
  iVar1 = (int)this;
  if (param_2) {
    if ((code *)PTR__notification_0011d068 != Container::_notification) {
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
  if ((code *)PTR__notification_0011d068 == Container::_notification) {
    return;
  }
  BoxContainer::_notification(iVar1);
  return;
}



/* VBoxContainer::_notificationv(int, bool) */

void __thiscall VBoxContainer::_notificationv(VBoxContainer *this,int param_1,bool param_2)

{
  int iVar1;
  
  iVar1 = (int)this;
  if (param_2) {
    if ((code *)PTR__notification_0011d068 != Container::_notification) {
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
  if ((code *)PTR__notification_0011d068 == Container::_notification) {
    return;
  }
  BoxContainer::_notification(iVar1);
  return;
}



/* MaterialEditor::~MaterialEditor() */

void __thiscall MaterialEditor::~MaterialEditor(MaterialEditor *this)

{
  Object *pOVar1;
  char cVar2;
  
  *(undefined ***)this = &PTR__initialize_classv_00115b98;
  if (*(long *)(this + 0xad0) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0xad0);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  if (*(long *)(this + 0xac8) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0xac8);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  if (*(long *)(this + 0xac0) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0xac0);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  if (*(long *)(this + 0xab8) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0xab8);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  if (*(long *)(this + 0xab0) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0xab0);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  if (*(long *)(this + 0xaa8) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0xaa8);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  if (*(long *)(this + 0xa78) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0xa78);
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
  if (*(long *)(this + 0xa38) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0xa38);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
        Control::~Control((Control *)this);
        return;
      }
    }
  }
  Control::~Control((Control *)this);
  return;
}



/* MaterialEditor::~MaterialEditor() */

void __thiscall MaterialEditor::~MaterialEditor(MaterialEditor *this)

{
  Object *pOVar1;
  char cVar2;
  
  *(undefined ***)this = &PTR__initialize_classv_00115b98;
  if (*(long *)(this + 0xad0) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0xad0);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  if (*(long *)(this + 0xac8) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0xac8);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  if (*(long *)(this + 0xac0) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0xac0);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  if (*(long *)(this + 0xab8) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0xab8);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  if (*(long *)(this + 0xab0) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0xab0);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  if (*(long *)(this + 0xaa8) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0xaa8);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  if (*(long *)(this + 0xa78) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0xa78);
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
  if (*(long *)(this + 0xa38) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0xa38);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  Control::~Control((Control *)this);
  operator_delete(this,0xad8);
  return;
}



/* FogMaterialConversionPlugin::~FogMaterialConversionPlugin() */

void __thiscall
FogMaterialConversionPlugin::~FogMaterialConversionPlugin(FogMaterialConversionPlugin *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(code **)this = Control::get_theme_color;
  if (bVar1) {
    if (*(long *)(this + 0x1b0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010a18f;
    }
    if (*(long *)(this + 0x198) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010a18f;
    }
    if (*(long *)(this + 0x180) != 0) {
      StringName::unref();
    }
  }
LAB_0010a18f:
  *(undefined ***)this = &PTR__initialize_classv_00114ac8;
  Object::~Object((Object *)this);
  return;
}



/* ProceduralSkyMaterialConversionPlugin::~ProceduralSkyMaterialConversionPlugin() */

void __thiscall
ProceduralSkyMaterialConversionPlugin::~ProceduralSkyMaterialConversionPlugin
          (ProceduralSkyMaterialConversionPlugin *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(code **)this = Control::get_theme_color;
  if (bVar1) {
    if (*(long *)(this + 0x1b0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010a21f;
    }
    if (*(long *)(this + 0x198) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010a21f;
    }
    if (*(long *)(this + 0x180) != 0) {
      StringName::unref();
    }
  }
LAB_0010a21f:
  *(undefined ***)this = &PTR__initialize_classv_00114ac8;
  Object::~Object((Object *)this);
  return;
}



/* CanvasItemMaterialConversionPlugin::~CanvasItemMaterialConversionPlugin() */

void __thiscall
CanvasItemMaterialConversionPlugin::~CanvasItemMaterialConversionPlugin
          (CanvasItemMaterialConversionPlugin *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(code **)this = Control::get_theme_color;
  if (bVar1) {
    if (*(long *)(this + 0x1b0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010a2af;
    }
    if (*(long *)(this + 0x198) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010a2af;
    }
    if (*(long *)(this + 0x180) != 0) {
      StringName::unref();
    }
  }
LAB_0010a2af:
  *(undefined ***)this = &PTR__initialize_classv_00114ac8;
  Object::~Object((Object *)this);
  return;
}



/* ParticleProcessMaterialConversionPlugin::~ParticleProcessMaterialConversionPlugin() */

void __thiscall
ParticleProcessMaterialConversionPlugin::~ParticleProcessMaterialConversionPlugin
          (ParticleProcessMaterialConversionPlugin *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(code **)this = Control::get_theme_color;
  if (bVar1) {
    if (*(long *)(this + 0x1b0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010a33f;
    }
    if (*(long *)(this + 0x198) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010a33f;
    }
    if (*(long *)(this + 0x180) != 0) {
      StringName::unref();
    }
  }
LAB_0010a33f:
  *(undefined ***)this = &PTR__initialize_classv_00114ac8;
  Object::~Object((Object *)this);
  return;
}



/* ORMMaterial3DConversionPlugin::~ORMMaterial3DConversionPlugin() */

void __thiscall
ORMMaterial3DConversionPlugin::~ORMMaterial3DConversionPlugin(ORMMaterial3DConversionPlugin *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(code **)this = Control::get_theme_color;
  if (bVar1) {
    if (*(long *)(this + 0x1b0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010a3cf;
    }
    if (*(long *)(this + 0x198) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010a3cf;
    }
    if (*(long *)(this + 0x180) != 0) {
      StringName::unref();
    }
  }
LAB_0010a3cf:
  *(undefined ***)this = &PTR__initialize_classv_00114ac8;
  Object::~Object((Object *)this);
  return;
}



/* PhysicalSkyMaterialConversionPlugin::~PhysicalSkyMaterialConversionPlugin() */

void __thiscall
PhysicalSkyMaterialConversionPlugin::~PhysicalSkyMaterialConversionPlugin
          (PhysicalSkyMaterialConversionPlugin *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(code **)this = Control::get_theme_color;
  if (bVar1) {
    if (*(long *)(this + 0x1b0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010a45f;
    }
    if (*(long *)(this + 0x198) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010a45f;
    }
    if (*(long *)(this + 0x180) != 0) {
      StringName::unref();
    }
  }
LAB_0010a45f:
  *(undefined ***)this = &PTR__initialize_classv_00114ac8;
  Object::~Object((Object *)this);
  return;
}



/* PanoramaSkyMaterialConversionPlugin::~PanoramaSkyMaterialConversionPlugin() */

void __thiscall
PanoramaSkyMaterialConversionPlugin::~PanoramaSkyMaterialConversionPlugin
          (PanoramaSkyMaterialConversionPlugin *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(code **)this = Control::get_theme_color;
  if (bVar1) {
    if (*(long *)(this + 0x1b0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010a4ef;
    }
    if (*(long *)(this + 0x198) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010a4ef;
    }
    if (*(long *)(this + 0x180) != 0) {
      StringName::unref();
    }
  }
LAB_0010a4ef:
  *(undefined ***)this = &PTR__initialize_classv_00114ac8;
  Object::~Object((Object *)this);
  return;
}



/* StandardMaterial3DConversionPlugin::~StandardMaterial3DConversionPlugin() */

void __thiscall
StandardMaterial3DConversionPlugin::~StandardMaterial3DConversionPlugin
          (StandardMaterial3DConversionPlugin *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(code **)this = Control::get_theme_color;
  if (bVar1) {
    if (*(long *)(this + 0x1b0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010a57f;
    }
    if (*(long *)(this + 0x198) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010a57f;
    }
    if (*(long *)(this + 0x180) != 0) {
      StringName::unref();
    }
  }
LAB_0010a57f:
  *(undefined ***)this = &PTR__initialize_classv_00114ac8;
  Object::~Object((Object *)this);
  return;
}



/* StandardMaterial3DConversionPlugin::~StandardMaterial3DConversionPlugin() */

void __thiscall
StandardMaterial3DConversionPlugin::~StandardMaterial3DConversionPlugin
          (StandardMaterial3DConversionPlugin *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(code **)this = Control::get_theme_color;
  if (bVar1) {
    if (*(long *)(this + 0x1b0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010a60f;
    }
    if (*(long *)(this + 0x198) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010a60f;
    }
    if (*(long *)(this + 0x180) != 0) {
      StringName::unref();
    }
  }
LAB_0010a60f:
  *(undefined ***)this = &PTR__initialize_classv_00114ac8;
  Object::~Object((Object *)this);
  operator_delete(this,0x1c8);
  return;
}



/* PanoramaSkyMaterialConversionPlugin::~PanoramaSkyMaterialConversionPlugin() */

void __thiscall
PanoramaSkyMaterialConversionPlugin::~PanoramaSkyMaterialConversionPlugin
          (PanoramaSkyMaterialConversionPlugin *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(code **)this = Control::get_theme_color;
  if (bVar1) {
    if (*(long *)(this + 0x1b0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010a69f;
    }
    if (*(long *)(this + 0x198) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010a69f;
    }
    if (*(long *)(this + 0x180) != 0) {
      StringName::unref();
    }
  }
LAB_0010a69f:
  *(undefined ***)this = &PTR__initialize_classv_00114ac8;
  Object::~Object((Object *)this);
  operator_delete(this,0x1c8);
  return;
}



/* ProceduralSkyMaterialConversionPlugin::~ProceduralSkyMaterialConversionPlugin() */

void __thiscall
ProceduralSkyMaterialConversionPlugin::~ProceduralSkyMaterialConversionPlugin
          (ProceduralSkyMaterialConversionPlugin *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(code **)this = Control::get_theme_color;
  if (bVar1) {
    if (*(long *)(this + 0x1b0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010a72f;
    }
    if (*(long *)(this + 0x198) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010a72f;
    }
    if (*(long *)(this + 0x180) != 0) {
      StringName::unref();
    }
  }
LAB_0010a72f:
  *(undefined ***)this = &PTR__initialize_classv_00114ac8;
  Object::~Object((Object *)this);
  operator_delete(this,0x1c8);
  return;
}



/* FogMaterialConversionPlugin::~FogMaterialConversionPlugin() */

void __thiscall
FogMaterialConversionPlugin::~FogMaterialConversionPlugin(FogMaterialConversionPlugin *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(code **)this = Control::get_theme_color;
  if (bVar1) {
    if (*(long *)(this + 0x1b0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010a7bf;
    }
    if (*(long *)(this + 0x198) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010a7bf;
    }
    if (*(long *)(this + 0x180) != 0) {
      StringName::unref();
    }
  }
LAB_0010a7bf:
  *(undefined ***)this = &PTR__initialize_classv_00114ac8;
  Object::~Object((Object *)this);
  operator_delete(this,0x1c8);
  return;
}



/* PhysicalSkyMaterialConversionPlugin::~PhysicalSkyMaterialConversionPlugin() */

void __thiscall
PhysicalSkyMaterialConversionPlugin::~PhysicalSkyMaterialConversionPlugin
          (PhysicalSkyMaterialConversionPlugin *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(code **)this = Control::get_theme_color;
  if (bVar1) {
    if (*(long *)(this + 0x1b0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010a84f;
    }
    if (*(long *)(this + 0x198) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010a84f;
    }
    if (*(long *)(this + 0x180) != 0) {
      StringName::unref();
    }
  }
LAB_0010a84f:
  *(undefined ***)this = &PTR__initialize_classv_00114ac8;
  Object::~Object((Object *)this);
  operator_delete(this,0x1c8);
  return;
}



/* CanvasItemMaterialConversionPlugin::~CanvasItemMaterialConversionPlugin() */

void __thiscall
CanvasItemMaterialConversionPlugin::~CanvasItemMaterialConversionPlugin
          (CanvasItemMaterialConversionPlugin *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(code **)this = Control::get_theme_color;
  if (bVar1) {
    if (*(long *)(this + 0x1b0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010a8df;
    }
    if (*(long *)(this + 0x198) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010a8df;
    }
    if (*(long *)(this + 0x180) != 0) {
      StringName::unref();
    }
  }
LAB_0010a8df:
  *(undefined ***)this = &PTR__initialize_classv_00114ac8;
  Object::~Object((Object *)this);
  operator_delete(this,0x1c8);
  return;
}



/* ParticleProcessMaterialConversionPlugin::~ParticleProcessMaterialConversionPlugin() */

void __thiscall
ParticleProcessMaterialConversionPlugin::~ParticleProcessMaterialConversionPlugin
          (ParticleProcessMaterialConversionPlugin *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(code **)this = Control::get_theme_color;
  if (bVar1) {
    if (*(long *)(this + 0x1b0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010a96f;
    }
    if (*(long *)(this + 0x198) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010a96f;
    }
    if (*(long *)(this + 0x180) != 0) {
      StringName::unref();
    }
  }
LAB_0010a96f:
  *(undefined ***)this = &PTR__initialize_classv_00114ac8;
  Object::~Object((Object *)this);
  operator_delete(this,0x1c8);
  return;
}



/* ORMMaterial3DConversionPlugin::~ORMMaterial3DConversionPlugin() */

void __thiscall
ORMMaterial3DConversionPlugin::~ORMMaterial3DConversionPlugin(ORMMaterial3DConversionPlugin *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(code **)this = Control::get_theme_color;
  if (bVar1) {
    if (*(long *)(this + 0x1b0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010a9ff;
    }
    if (*(long *)(this + 0x198) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010a9ff;
    }
    if (*(long *)(this + 0x180) != 0) {
      StringName::unref();
    }
  }
LAB_0010a9ff:
  *(undefined ***)this = &PTR__initialize_classv_00114ac8;
  Object::~Object((Object *)this);
  operator_delete(this,0x1c8);
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



/* WARNING: Removing unreachable block (ram,0x0010aaf0) */
/* MaterialEditor::_notificationv(int, bool) */

void __thiscall MaterialEditor::_notificationv(MaterialEditor *this,int param_1,bool param_2)

{
  int iVar1;
  
  iVar1 = (int)this;
  if (param_2) {
    _notification(this,param_1);
    if ((code *)PTR__notification_0011d070 != CanvasItem::_notification) {
      Control::_notification(iVar1);
    }
    CanvasItem::_notification(iVar1);
    Node::_notification(iVar1);
    return;
  }
  Node::_notification(iVar1);
  CanvasItem::_notification(iVar1);
  if ((code *)PTR__notification_0011d070 != CanvasItem::_notification) {
    Control::_notification(iVar1);
  }
  _notification(this,param_1);
  return;
}



/* Callable create_custom_callable_function_pointer<MaterialEditor>(MaterialEditor*, char const*,
   void (MaterialEditor::*)()) */

MaterialEditor *
create_custom_callable_function_pointer<MaterialEditor>
          (MaterialEditor *param_1,char *param_2,_func_void *param_3)

{
  undefined8 uVar1;
  CallableCustom *this;
  undefined8 in_RCX;
  undefined8 in_R8;
  
  this = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(this);
  *(undefined **)(this + 0x20) = &_LC37;
  *(undefined1 (*) [16])(this + 0x30) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined ***)this = &PTR_hash_00116c50;
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



/* void Ref<ShaderMaterial>::instantiate<>() */

void __thiscall Ref<ShaderMaterial>::instantiate<>(Ref<ShaderMaterial> *this)

{
  char cVar1;
  ShaderMaterial *this_00;
  Object *pOVar2;
  Object *pOVar3;
  
  this_00 = (ShaderMaterial *)operator_new(0x348,"");
  ShaderMaterial::ShaderMaterial(this_00);
  postinitialize_handler((Object *)this_00);
  cVar1 = RefCounted::init_ref();
  if (cVar1 == '\0') {
    pOVar3 = *(Object **)this;
    if (pOVar3 == (Object *)0x0) {
      return;
    }
    *(undefined8 *)this = 0;
    cVar1 = RefCounted::unreference();
    if (cVar1 == '\0') {
      return;
    }
    this_00 = (ShaderMaterial *)0x0;
    cVar1 = predelete_handler(pOVar3);
    if (cVar1 == '\0') {
      return;
    }
  }
  else {
    pOVar3 = *(Object **)this;
    pOVar2 = pOVar3;
    if (this_00 == (ShaderMaterial *)pOVar3) goto LAB_0010afc5;
    *(ShaderMaterial **)this = this_00;
    cVar1 = RefCounted::reference();
    if (cVar1 == '\0') {
      *(undefined8 *)this = 0;
    }
    pOVar2 = (Object *)this_00;
    if (((pOVar3 == (Object *)0x0) || (cVar1 = RefCounted::unreference(), cVar1 == '\0')) ||
       (cVar1 = predelete_handler(pOVar3), cVar1 == '\0')) goto LAB_0010afc5;
  }
  (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
  Memory::free_static(pOVar3,false);
  pOVar2 = (Object *)this_00;
  if (this_00 == (ShaderMaterial *)0x0) {
    return;
  }
LAB_0010afc5:
  cVar1 = RefCounted::unreference();
  if ((cVar1 != '\0') && (cVar1 = predelete_handler(pOVar2), cVar1 != '\0')) {
    (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
    Memory::free_static(pOVar2,false);
    return;
  }
  return;
}



/* void Ref<Shader>::instantiate<>() */

void __thiscall Ref<Shader>::instantiate<>(Ref<Shader> *this)

{
  char cVar1;
  Shader *this_00;
  Object *pOVar2;
  Object *pOVar3;
  
  this_00 = (Shader *)operator_new(0x2e8,"");
  Shader::Shader(this_00);
  postinitialize_handler((Object *)this_00);
  cVar1 = RefCounted::init_ref();
  if (cVar1 == '\0') {
    pOVar3 = *(Object **)this;
    if (pOVar3 == (Object *)0x0) {
      return;
    }
    *(undefined8 *)this = 0;
    cVar1 = RefCounted::unreference();
    if (cVar1 == '\0') {
      return;
    }
    this_00 = (Shader *)0x0;
    cVar1 = predelete_handler(pOVar3);
    if (cVar1 == '\0') {
      return;
    }
  }
  else {
    pOVar3 = *(Object **)this;
    pOVar2 = pOVar3;
    if (this_00 == (Shader *)pOVar3) goto LAB_0010b0f5;
    *(Shader **)this = this_00;
    cVar1 = RefCounted::reference();
    if (cVar1 == '\0') {
      *(undefined8 *)this = 0;
    }
    pOVar2 = (Object *)this_00;
    if (((pOVar3 == (Object *)0x0) || (cVar1 = RefCounted::unreference(), cVar1 == '\0')) ||
       (cVar1 = predelete_handler(pOVar3), cVar1 == '\0')) goto LAB_0010b0f5;
  }
  (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
  Memory::free_static(pOVar3,false);
  pOVar2 = (Object *)this_00;
  if (this_00 == (Shader *)0x0) {
    return;
  }
LAB_0010b0f5:
  cVar1 = RefCounted::unreference();
  if ((cVar1 != '\0') && (cVar1 = predelete_handler(pOVar2), cVar1 != '\0')) {
    (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
    Memory::free_static(pOVar2,false);
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



/* EditorPlugin::~EditorPlugin() */

void __thiscall EditorPlugin::~EditorPlugin(EditorPlugin *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(undefined **)this = &EditorInspectorPlugin::typeinfo;
  if (bVar1) {
    if (*(long *)(this + 0x648) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010b6ba;
    }
    if (*(long *)(this + 0x630) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010b6ba;
    }
    if (*(long *)(this + 0x618) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010b6ba;
    }
    if (*(long *)(this + 0x600) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010b6ba;
    }
    if (*(long *)(this + 0x5e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010b6ba;
    }
    if (*(long *)(this + 0x5d0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010b6ba;
    }
    if (*(long *)(this + 0x5b8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010b6ba;
    }
    if (*(long *)(this + 0x5a0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010b6ba;
    }
    if (*(long *)(this + 0x588) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010b6ba;
    }
    if (*(long *)(this + 0x570) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010b6ba;
    }
    if (*(long *)(this + 0x558) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010b6ba;
    }
    if (*(long *)(this + 0x540) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010b6ba;
    }
    if (*(long *)(this + 0x528) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010b6ba;
    }
    if (*(long *)(this + 0x510) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010b6ba;
    }
    if (*(long *)(this + 0x4f8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010b6ba;
    }
    if (*(long *)(this + 0x4e0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010b6ba;
    }
    if (*(long *)(this + 0x4c8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010b6ba;
    }
    if (*(long *)(this + 0x4b0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010b6ba;
    }
    if (*(long *)(this + 0x498) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010b6ba;
    }
    if (*(long *)(this + 0x480) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010b6ba;
    }
    if (*(long *)(this + 0x468) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010b6ba;
    }
    if (*(long *)(this + 0x450) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010b6ba;
    }
    if (*(long *)(this + 0x438) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010b6ba;
    }
    if (*(long *)(this + 0x420) != 0) {
      StringName::unref();
    }
  }
LAB_0010b6ba:
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



/* MaterialEditorPlugin::~MaterialEditorPlugin() */

void __thiscall MaterialEditorPlugin::~MaterialEditorPlugin(MaterialEditorPlugin *this)

{
  *(undefined ***)this = &PTR__initialize_classv_00115588;
  EditorPlugin::~EditorPlugin((EditorPlugin *)this);
  return;
}



/* MaterialEditorPlugin::~MaterialEditorPlugin() */

void __thiscall MaterialEditorPlugin::~MaterialEditorPlugin(MaterialEditorPlugin *this)

{
  *(undefined ***)this = &PTR__initialize_classv_00115588;
  EditorPlugin::~EditorPlugin((EditorPlugin *)this);
  operator_delete(this,0x660);
  return;
}



/* EditorInspectorPluginMaterial::_initialize_classv() */

void EditorInspectorPluginMaterial::_initialize_classv(void)

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
    if (EditorInspectorPlugin::initialize_class()::initialized == '\0') {
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
        if ((code *)PTR__bind_methods_0011d008 != RefCounted::_bind_methods) {
          RefCounted::_bind_methods();
        }
        RefCounted::initialize_class()::initialized = '\x01';
      }
      local_60 = 0;
      String::parse_latin1((String *)&local_60,"RefCounted");
      StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
      local_70 = 0;
      String::parse_latin1((String *)&local_70,"EditorInspectorPlugin");
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
      if ((code *)PTR__bind_methods_0011d078 != RefCounted::_bind_methods) {
        EditorInspectorPlugin::_bind_methods();
      }
      if ((code *)PTR__bind_compatibility_methods_0011d080 != Object::_bind_compatibility_methods) {
        EditorInspectorPlugin::_bind_compatibility_methods();
      }
      EditorInspectorPlugin::initialize_class()::initialized = '\x01';
    }
    local_58 = "EditorInspectorPlugin";
    local_68 = 0;
    local_50 = 0x15;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "EditorInspectorPluginMaterial";
    local_70 = 0;
    local_50 = 0x1d;
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



/* MaterialEditorPlugin::_initialize_classv() */

void MaterialEditorPlugin::_initialize_classv(void)

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
    if (EditorPlugin::initialize_class()::initialized == '\0') {
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
        if ((code *)PTR__bind_methods_0011d008 != Node::_bind_methods) {
          Node::_bind_methods();
        }
        Node::initialize_class()::initialized = '\x01';
      }
      local_60 = 0;
      String::parse_latin1((String *)&local_60,"Node");
      StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
      local_70 = 0;
      String::parse_latin1((String *)&local_70,"EditorPlugin");
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
      if ((code *)PTR__bind_methods_0011d088 != Node::_bind_methods) {
        EditorPlugin::_bind_methods();
      }
      if ((code *)PTR__bind_compatibility_methods_0011d090 != Object::_bind_compatibility_methods) {
        EditorPlugin::_bind_compatibility_methods();
      }
      EditorPlugin::initialize_class()::initialized = '\x01';
    }
    local_58 = "EditorPlugin";
    local_68 = 0;
    local_50 = 0xc;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "MaterialEditorPlugin";
    local_70 = 0;
    local_50 = 0x14;
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



/* CowData<char32_t>::_ref(CowData<char32_t> const&) */

void __thiscall CowData<char32_t>::_ref(CowData<char32_t> *this,CowData *param_1)

{
  if (*(long *)this != *(long *)param_1) {
    _ref(this,param_1);
    return;
  }
  return;
}



/* MaterialEditorPlugin::get_class() const */

void MaterialEditorPlugin::get_class(void)

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



/* MaterialEditor::get_class() const */

void MaterialEditor::get_class(void)

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



/* FogMaterialConversionPlugin::get_class() const */

void FogMaterialConversionPlugin::get_class(void)

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



/* PhysicalSkyMaterialConversionPlugin::get_class() const */

void PhysicalSkyMaterialConversionPlugin::get_class(void)

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



/* PanoramaSkyMaterialConversionPlugin::get_class() const */

void PanoramaSkyMaterialConversionPlugin::get_class(void)

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



/* ProceduralSkyMaterialConversionPlugin::get_class() const */

void ProceduralSkyMaterialConversionPlugin::get_class(void)

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



/* CanvasItemMaterialConversionPlugin::get_class() const */

void CanvasItemMaterialConversionPlugin::get_class(void)

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



/* ParticleProcessMaterialConversionPlugin::get_class() const */

void ParticleProcessMaterialConversionPlugin::get_class(void)

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



/* ORMMaterial3DConversionPlugin::get_class() const */

void ORMMaterial3DConversionPlugin::get_class(void)

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



/* StandardMaterial3DConversionPlugin::get_class() const */

void StandardMaterial3DConversionPlugin::get_class(void)

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



/* EditorInspectorPluginMaterial::get_class() const */

void EditorInspectorPluginMaterial::get_class(void)

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



/* QuadMesh::get_class() const */

void QuadMesh::get_class(void)

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



/* CallableCustomMethodPointer<MaterialEditor, void>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<MaterialEditor,void>::call
          (CallableCustomMethodPointer<MaterialEditor,void> *this,Variant **param_1,int param_2,
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
      goto LAB_0010cddf;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] == 0) goto LAB_0010cddf;
    lVar1 = *(long *)(this + 0x28);
    UNRECOVERED_JUMPTABLE = *(code **)(this + 0x38);
    lVar2 = *(long *)(this + 0x40);
    if (param_2 == 0) {
      *(undefined4 *)param_4 = 0;
      if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
        UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar1 + lVar2) + -1);
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0010cdb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),uVar5,UNRECOVERED_JUMPTABLE);
        return;
      }
      goto LAB_0010ce90;
    }
    *(undefined4 *)param_4 = 3;
    *(undefined4 *)(param_4 + 8) = 0;
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
LAB_0010cddf:
    local_40 = 0;
    String::parse_latin1((String *)&local_40,"\', can\'t call method.");
    uitos((ulong)local_50);
    operator+((char *)local_48,(String *)"Invalid Object id \'");
    String::operator+(local_38,(String *)local_48);
    _err_print_error(&_LC116,"./core/object/callable_method_pointer.h",0x67,
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
LAB_0010ce90:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<EditorInspectorPluginMaterial, void, Object*, Object*, String const&,
   Variant const&>::call(Variant const**, int, Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<EditorInspectorPluginMaterial,void,Object*,Object*,String_const&,Variant_const&>
::call(CallableCustomMethodPointer<EditorInspectorPluginMaterial,void,Object*,Object*,String_const&,Variant_const&>
       *this,Variant **param_1,int param_2,Variant *param_3,CallError *param_4)

{
  long lVar1;
  long lVar2;
  Variant *pVVar3;
  undefined8 uVar4;
  char cVar5;
  Object *pOVar6;
  Object *pOVar7;
  Object *pOVar8;
  uint uVar9;
  ulong *puVar10;
  code *pcVar11;
  long in_FS_OFFSET;
  bool bVar12;
  CowData<char32_t> local_78 [8];
  CowData<char32_t> local_70 [8];
  undefined8 local_68;
  Variant local_60 [8];
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar9 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar9 < (uint)ObjectDB::slot_max) {
    while( true ) {
      local_60[0] = (Variant)0x0;
      LOCK();
      bVar12 = (char)ObjectDB::spin_lock == '\0';
      if (bVar12) {
        ObjectDB::spin_lock._0_1_ = '\x01';
      }
      UNLOCK();
      if (bVar12) break;
      do {
      } while ((char)ObjectDB::spin_lock != '\0');
    }
    puVar10 = (ulong *)((ulong)uVar9 * 0x10 + ObjectDB::object_slots);
    if ((*(ulong *)(this + 0x30) >> 0x18 & 0x7fffffffff) == (*puVar10 & 0x7fffffffff)) {
      ObjectDB::spin_lock._0_1_ = '\0';
      if (puVar10[1] != 0) {
        lVar1 = *(long *)(this + 0x28);
        pcVar11 = *(code **)(this + 0x38);
        lVar2 = *(long *)(this + 0x40);
        if (4 < (uint)param_2) {
          *(undefined4 *)param_4 = 3;
          *(undefined4 *)(param_4 + 8) = 4;
          goto LAB_0010cf64;
        }
        if (param_2 != 4) {
          *(undefined4 *)param_4 = 4;
          *(undefined4 *)(param_4 + 8) = 4;
          goto LAB_0010cf64;
        }
        *(undefined4 *)param_4 = 0;
        if (((ulong)pcVar11 & 1) != 0) {
          pcVar11 = *(code **)(pcVar11 + *(long *)(lVar1 + lVar2) + -1);
        }
        cVar5 = Variant::can_convert_strict(*(undefined4 *)param_1[3],0);
        if (cVar5 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = 3;
        }
        Variant::Variant((Variant *)local_58,param_1[3]);
        cVar5 = Variant::can_convert_strict(*(undefined4 *)param_1[2],4);
        uVar4 = _LC118;
        if (cVar5 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar4;
        }
        Variant::operator_cast_to_String(local_60);
        cVar5 = Variant::can_convert_strict(*(undefined4 *)param_1[1],0x18);
        if (cVar5 == '\0') {
LAB_0010d054:
          uVar4 = _LC119;
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar4;
        }
        else {
          pVVar3 = param_1[1];
          pOVar6 = Variant::operator_cast_to_Object_(pVVar3);
          pOVar7 = Variant::operator_cast_to_Object_(pVVar3);
          if ((pOVar7 == (Object *)0x0) && (pOVar6 != (Object *)0x0)) goto LAB_0010d054;
        }
        pOVar6 = Variant::operator_cast_to_Object_(param_1[1]);
        cVar5 = Variant::can_convert_strict(*(undefined4 *)*param_1,0x18);
        if (cVar5 == '\0') {
LAB_0010d08d:
          uVar4 = _LC120;
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar4;
        }
        else {
          pVVar3 = *param_1;
          pOVar7 = Variant::operator_cast_to_Object_(pVVar3);
          pOVar8 = Variant::operator_cast_to_Object_(pVVar3);
          if ((pOVar7 != (Object *)0x0) && (pOVar8 == (Object *)0x0)) goto LAB_0010d08d;
        }
        pOVar7 = Variant::operator_cast_to_Object_(*param_1);
        (*pcVar11)((long *)(lVar1 + lVar2),pOVar7,pOVar6,local_60,(Variant *)local_58);
        CowData<char32_t>::_unref((CowData<char32_t> *)local_60);
        if (Variant::needs_deinit[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
        goto LAB_0010cf64;
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
  local_68 = 0;
  String::parse_latin1((String *)&local_68,"\', can\'t call method.");
  uitos((ulong)local_78);
  operator+((char *)local_70,(String *)"Invalid Object id \'");
  String::operator+((String *)local_60,(String *)local_70);
  _err_print_error(&_LC116,"./core/object/callable_method_pointer.h",0x67,
                   "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                   local_60,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_60);
  CowData<char32_t>::_unref(local_70);
  CowData<char32_t>::_unref(local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
LAB_0010cf64:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
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
    if ((code *)PTR__bind_methods_0011d098 != Object::_bind_methods) {
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



/* StandardMaterial3DConversionPlugin::_initialize_classv() */

void StandardMaterial3DConversionPlugin::_initialize_classv(void)

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
    if (EditorResourceConversionPlugin::initialize_class()::initialized == '\0') {
      EditorResourceConversionPlugin::initialize_class();
    }
    local_58 = 0;
    local_40 = 0x1e;
    local_48 = "EditorResourceConversionPlugin";
    String::parse_latin1((StrRange *)&local_58);
    StringName::StringName((StringName *)&local_50,(String *)&local_58,false);
    local_48 = "StandardMaterial3DConversionPlugin";
    local_60 = 0;
    local_40 = 0x22;
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



/* ORMMaterial3DConversionPlugin::_initialize_classv() */

void ORMMaterial3DConversionPlugin::_initialize_classv(void)

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
    if (EditorResourceConversionPlugin::initialize_class()::initialized == '\0') {
      EditorResourceConversionPlugin::initialize_class();
    }
    local_58 = 0;
    local_40 = 0x1e;
    local_48 = "EditorResourceConversionPlugin";
    String::parse_latin1((StrRange *)&local_58);
    StringName::StringName((StringName *)&local_50,(String *)&local_58,false);
    local_48 = "ORMMaterial3DConversionPlugin";
    local_60 = 0;
    local_40 = 0x1d;
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



/* ParticleProcessMaterialConversionPlugin::_initialize_classv() */

void ParticleProcessMaterialConversionPlugin::_initialize_classv(void)

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
    if (EditorResourceConversionPlugin::initialize_class()::initialized == '\0') {
      EditorResourceConversionPlugin::initialize_class();
    }
    local_58 = 0;
    local_40 = 0x1e;
    local_48 = "EditorResourceConversionPlugin";
    String::parse_latin1((StrRange *)&local_58);
    StringName::StringName((StringName *)&local_50,(String *)&local_58,false);
    local_48 = "ParticleProcessMaterialConversionPlugin";
    local_60 = 0;
    local_40 = 0x27;
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



/* CanvasItemMaterialConversionPlugin::_initialize_classv() */

void CanvasItemMaterialConversionPlugin::_initialize_classv(void)

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
    if (EditorResourceConversionPlugin::initialize_class()::initialized == '\0') {
      EditorResourceConversionPlugin::initialize_class();
    }
    local_58 = 0;
    local_40 = 0x1e;
    local_48 = "EditorResourceConversionPlugin";
    String::parse_latin1((StrRange *)&local_58);
    StringName::StringName((StringName *)&local_50,(String *)&local_58,false);
    local_48 = "CanvasItemMaterialConversionPlugin";
    local_60 = 0;
    local_40 = 0x22;
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



/* ProceduralSkyMaterialConversionPlugin::_initialize_classv() */

void ProceduralSkyMaterialConversionPlugin::_initialize_classv(void)

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
    if (EditorResourceConversionPlugin::initialize_class()::initialized == '\0') {
      EditorResourceConversionPlugin::initialize_class();
    }
    local_58 = 0;
    local_40 = 0x1e;
    local_48 = "EditorResourceConversionPlugin";
    String::parse_latin1((StrRange *)&local_58);
    StringName::StringName((StringName *)&local_50,(String *)&local_58,false);
    local_48 = "ProceduralSkyMaterialConversionPlugin";
    local_60 = 0;
    local_40 = 0x25;
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



/* PanoramaSkyMaterialConversionPlugin::_initialize_classv() */

void PanoramaSkyMaterialConversionPlugin::_initialize_classv(void)

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
    if (EditorResourceConversionPlugin::initialize_class()::initialized == '\0') {
      EditorResourceConversionPlugin::initialize_class();
    }
    local_58 = 0;
    local_40 = 0x1e;
    local_48 = "EditorResourceConversionPlugin";
    String::parse_latin1((StrRange *)&local_58);
    StringName::StringName((StringName *)&local_50,(String *)&local_58,false);
    local_48 = "PanoramaSkyMaterialConversionPlugin";
    local_60 = 0;
    local_40 = 0x23;
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



/* PhysicalSkyMaterialConversionPlugin::_initialize_classv() */

void PhysicalSkyMaterialConversionPlugin::_initialize_classv(void)

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
    if (EditorResourceConversionPlugin::initialize_class()::initialized == '\0') {
      EditorResourceConversionPlugin::initialize_class();
    }
    local_58 = 0;
    local_40 = 0x1e;
    local_48 = "EditorResourceConversionPlugin";
    String::parse_latin1((StrRange *)&local_58);
    StringName::StringName((StringName *)&local_50,(String *)&local_58,false);
    local_48 = "PhysicalSkyMaterialConversionPlugin";
    local_60 = 0;
    local_40 = 0x23;
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



/* FogMaterialConversionPlugin::_initialize_classv() */

void FogMaterialConversionPlugin::_initialize_classv(void)

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
    if (EditorResourceConversionPlugin::initialize_class()::initialized == '\0') {
      EditorResourceConversionPlugin::initialize_class();
    }
    local_58 = 0;
    local_40 = 0x1e;
    local_48 = "EditorResourceConversionPlugin";
    String::parse_latin1((StrRange *)&local_58);
    StringName::StringName((StringName *)&local_50,(String *)&local_58,false);
    local_48 = "FogMaterialConversionPlugin";
    local_60 = 0;
    local_40 = 0x1b;
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



/* QuadMesh::_initialize_classv() */

void QuadMesh::_initialize_classv(void)

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
    if (PlaneMesh::initialize_class()::initialized == '\0') {
      if (PrimitiveMesh::initialize_class()::initialized == '\0') {
        if (Mesh::initialize_class()::initialized == '\0') {
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
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
              if ((StringName::configured != '\0') && (local_60 != 0)) {
                StringName::unref();
              }
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
              if ((code *)PTR__bind_methods_0011d008 != RefCounted::_bind_methods) {
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
            Resource::_bind_methods();
            Resource::initialize_class()::initialized = '\x01';
          }
          local_60 = 0;
          String::parse_latin1((String *)&local_60,"Resource");
          StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
          local_70 = 0;
          String::parse_latin1((String *)&local_70,"Mesh");
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
          Mesh::_bind_methods();
          Mesh::initialize_class()::initialized = '\x01';
        }
        local_60 = 0;
        String::parse_latin1((String *)&local_60,"Mesh");
        StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
        local_70 = 0;
        String::parse_latin1((String *)&local_70,"PrimitiveMesh");
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
        PrimitiveMesh::_bind_methods();
        PrimitiveMesh::initialize_class()::initialized = '\x01';
      }
      local_60 = 0;
      String::parse_latin1((String *)&local_60,"PrimitiveMesh");
      StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
      local_70 = 0;
      String::parse_latin1((String *)&local_70,"PlaneMesh");
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
      if ((code *)PTR__bind_methods_0011d0a0 != PrimitiveMesh::_bind_methods) {
        PlaneMesh::_bind_methods();
      }
      PlaneMesh::initialize_class()::initialized = '\x01';
    }
    local_60 = 0;
    String::parse_latin1((String *)&local_60,"PlaneMesh");
    StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
    local_70 = 0;
    String::parse_latin1((String *)&local_70,"QuadMesh");
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
    initialize_class()::initialized = '\x01';
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* MaterialEditor::_initialize_classv() */

void MaterialEditor::_initialize_classv(void)

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
    local_48 = "MaterialEditor";
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
    initialize_class()::initialized = '\x01';
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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
    if ((code *)PTR__bind_methods_0011d0a8 != Control::_bind_methods) {
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



/* HBoxContainer::_initialize_classv() */

void HBoxContainer::_initialize_classv(void)

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
    if (BoxContainer::initialize_class()::initialized == '\0') {
      if (Container::initialize_class()::initialized == '\0') {
        if (Control::initialize_class()::initialized == '\0') {
          Control::initialize_class();
        }
        local_60 = 0;
        String::parse_latin1((String *)&local_60,"Control");
        StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
        local_70 = 0;
        String::parse_latin1((String *)&local_70,"Container");
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
        if ((code *)PTR__bind_methods_0011d018 != Container::_bind_methods) {
          Container::_bind_methods();
        }
        Container::initialize_class()::initialized = '\x01';
      }
      local_60 = 0;
      String::parse_latin1((String *)&local_60,"Container");
      StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
      local_70 = 0;
      String::parse_latin1((String *)&local_70,"BoxContainer");
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
      if ((code *)PTR__bind_methods_0011d0b0 != Container::_bind_methods) {
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



/* VBoxContainer::_initialize_classv() */

void VBoxContainer::_initialize_classv(void)

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
    if (BoxContainer::initialize_class()::initialized == '\0') {
      if (Container::initialize_class()::initialized == '\0') {
        if (Control::initialize_class()::initialized == '\0') {
          Control::initialize_class();
        }
        local_60 = 0;
        String::parse_latin1((String *)&local_60,"Control");
        StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
        local_70 = 0;
        String::parse_latin1((String *)&local_70,"Container");
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
        if ((code *)PTR__bind_methods_0011d018 != Container::_bind_methods) {
          Container::_bind_methods();
        }
        Container::initialize_class()::initialized = '\x01';
      }
      local_60 = 0;
      String::parse_latin1((String *)&local_60,"Container");
      StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
      local_70 = 0;
      String::parse_latin1((String *)&local_70,"BoxContainer");
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
      if ((code *)PTR__bind_methods_0011d0b0 != Container::_bind_methods) {
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
    if (cVar4 != '\0') goto LAB_0010ec93;
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
      if (cVar4 != '\0') goto LAB_0010ec93;
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar5 = String::operator==(param_1,"Object");
      return uVar5;
    }
  }
  else {
LAB_0010ec93:
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
    if (cVar4 != '\0') goto LAB_0010ee9b;
  }
  cVar4 = String::operator==(param_1,"Resource");
  if (cVar4 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar5 = RefCounted::is_class((RefCounted *)this,param_1);
      return uVar5;
    }
  }
  else {
LAB_0010ee9b:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* PlaneMesh::is_class(String const&) const */

undefined8 __thiscall PlaneMesh::is_class(PlaneMesh *this,String *param_1)

{
  long lVar1;
  char *__s;
  long lVar2;
  char cVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  undefined8 local_60;
  char *local_58;
  size_t local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  for (lVar1 = *(long *)(this + 8); lVar1 != 0; lVar1 = *(long *)(lVar1 + 8)) {
    lVar2 = *(long *)(lVar1 + 0x20);
    if (lVar2 == 0) {
      local_60 = 0;
    }
    else {
      __s = *(char **)(lVar2 + 8);
      local_60 = 0;
      if (__s == (char *)0x0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar2 + 0x10));
      }
      else {
        local_50 = strlen(__s);
        local_58 = __s;
        String::parse_latin1((StrRange *)&local_60);
      }
    }
    cVar3 = String::operator==(param_1,(String *)&local_60);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    if (cVar3 != '\0') goto LAB_0010efc3;
  }
  cVar3 = String::operator==(param_1,"PlaneMesh");
  if (cVar3 == '\0') {
    for (lVar1 = *(long *)(this + 8); lVar1 != 0; lVar1 = *(long *)(lVar1 + 8)) {
      lVar2 = *(long *)(lVar1 + 0x20);
      if (lVar2 == 0) {
        local_58 = (char *)0x0;
      }
      else {
        local_58 = (char *)0x0;
        if (*(char **)(lVar2 + 8) == (char *)0x0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)(lVar2 + 0x10));
        }
        else {
          String::parse_latin1((String *)&local_58,*(char **)(lVar2 + 8));
        }
      }
      cVar3 = String::operator==(param_1,(String *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      if (cVar3 != '\0') goto LAB_0010efc3;
    }
    cVar3 = String::operator==(param_1,"PrimitiveMesh");
    if (cVar3 == '\0') {
      for (lVar1 = *(long *)(this + 8); lVar1 != 0; lVar1 = *(long *)(lVar1 + 8)) {
        lVar2 = *(long *)(lVar1 + 0x20);
        if (lVar2 == 0) {
          local_58 = (char *)0x0;
        }
        else {
          local_58 = (char *)0x0;
          if (*(char **)(lVar2 + 8) == (char *)0x0) {
            CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)(lVar2 + 0x10));
          }
          else {
            String::parse_latin1((String *)&local_58,*(char **)(lVar2 + 8));
          }
        }
        cVar3 = String::operator==(param_1,(String *)&local_58);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
        if (cVar3 != '\0') goto LAB_0010efc3;
      }
      cVar3 = String::operator==(param_1,"Mesh");
      if (cVar3 == '\0') {
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          uVar4 = Resource::is_class((Resource *)this,param_1);
          return uVar4;
        }
        goto LAB_0010f14e;
      }
    }
  }
LAB_0010efc3:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0010f14e:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* QuadMesh::is_class(String const&) const */

undefined8 __thiscall QuadMesh::is_class(QuadMesh *this,String *param_1)

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
    if (cVar4 != '\0') goto LAB_0010f25b;
  }
  cVar4 = String::operator==(param_1,"QuadMesh");
  if (cVar4 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar5 = PlaneMesh::is_class((PlaneMesh *)this,param_1);
      return uVar5;
    }
  }
  else {
LAB_0010f25b:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorResourceConversionPlugin::is_class(String const&) const */

undefined8 __thiscall
EditorResourceConversionPlugin::is_class(EditorResourceConversionPlugin *this,String *param_1)

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
    if (cVar4 != '\0') goto LAB_0010f3ab;
  }
  cVar4 = String::operator==(param_1,"EditorResourceConversionPlugin");
  if (cVar4 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar5 = RefCounted::is_class((RefCounted *)this,param_1);
      return uVar5;
    }
  }
  else {
LAB_0010f3ab:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* FogMaterialConversionPlugin::is_class(String const&) const */

undefined8 __thiscall
FogMaterialConversionPlugin::is_class(FogMaterialConversionPlugin *this,String *param_1)

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
    if (cVar4 != '\0') goto LAB_0010f4fb;
  }
  cVar4 = String::operator==(param_1,"FogMaterialConversionPlugin");
  if (cVar4 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar5 = EditorResourceConversionPlugin::is_class
                        ((EditorResourceConversionPlugin *)this,param_1);
      return uVar5;
    }
  }
  else {
LAB_0010f4fb:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* PhysicalSkyMaterialConversionPlugin::is_class(String const&) const */

undefined8 __thiscall
PhysicalSkyMaterialConversionPlugin::is_class
          (PhysicalSkyMaterialConversionPlugin *this,String *param_1)

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
    if (cVar4 != '\0') goto LAB_0010f64b;
  }
  cVar4 = String::operator==(param_1,"PhysicalSkyMaterialConversionPlugin");
  if (cVar4 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar5 = EditorResourceConversionPlugin::is_class
                        ((EditorResourceConversionPlugin *)this,param_1);
      return uVar5;
    }
  }
  else {
LAB_0010f64b:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* PanoramaSkyMaterialConversionPlugin::is_class(String const&) const */

undefined8 __thiscall
PanoramaSkyMaterialConversionPlugin::is_class
          (PanoramaSkyMaterialConversionPlugin *this,String *param_1)

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
    if (cVar4 != '\0') goto LAB_0010f79b;
  }
  cVar4 = String::operator==(param_1,"PanoramaSkyMaterialConversionPlugin");
  if (cVar4 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar5 = EditorResourceConversionPlugin::is_class
                        ((EditorResourceConversionPlugin *)this,param_1);
      return uVar5;
    }
  }
  else {
LAB_0010f79b:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ProceduralSkyMaterialConversionPlugin::is_class(String const&) const */

undefined8 __thiscall
ProceduralSkyMaterialConversionPlugin::is_class
          (ProceduralSkyMaterialConversionPlugin *this,String *param_1)

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
    if (cVar4 != '\0') goto LAB_0010f8eb;
  }
  cVar4 = String::operator==(param_1,"ProceduralSkyMaterialConversionPlugin");
  if (cVar4 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar5 = EditorResourceConversionPlugin::is_class
                        ((EditorResourceConversionPlugin *)this,param_1);
      return uVar5;
    }
  }
  else {
LAB_0010f8eb:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CanvasItemMaterialConversionPlugin::is_class(String const&) const */

undefined8 __thiscall
CanvasItemMaterialConversionPlugin::is_class
          (CanvasItemMaterialConversionPlugin *this,String *param_1)

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
    if (cVar4 != '\0') goto LAB_0010fa3b;
  }
  cVar4 = String::operator==(param_1,"CanvasItemMaterialConversionPlugin");
  if (cVar4 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar5 = EditorResourceConversionPlugin::is_class
                        ((EditorResourceConversionPlugin *)this,param_1);
      return uVar5;
    }
  }
  else {
LAB_0010fa3b:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ParticleProcessMaterialConversionPlugin::is_class(String const&) const */

undefined8 __thiscall
ParticleProcessMaterialConversionPlugin::is_class
          (ParticleProcessMaterialConversionPlugin *this,String *param_1)

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
    if (cVar4 != '\0') goto LAB_0010fb8b;
  }
  cVar4 = String::operator==(param_1,"ParticleProcessMaterialConversionPlugin");
  if (cVar4 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar5 = EditorResourceConversionPlugin::is_class
                        ((EditorResourceConversionPlugin *)this,param_1);
      return uVar5;
    }
  }
  else {
LAB_0010fb8b:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ORMMaterial3DConversionPlugin::is_class(String const&) const */

undefined8 __thiscall
ORMMaterial3DConversionPlugin::is_class(ORMMaterial3DConversionPlugin *this,String *param_1)

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
    if (cVar4 != '\0') goto LAB_0010fcdb;
  }
  cVar4 = String::operator==(param_1,"ORMMaterial3DConversionPlugin");
  if (cVar4 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar5 = EditorResourceConversionPlugin::is_class
                        ((EditorResourceConversionPlugin *)this,param_1);
      return uVar5;
    }
  }
  else {
LAB_0010fcdb:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* StandardMaterial3DConversionPlugin::is_class(String const&) const */

undefined8 __thiscall
StandardMaterial3DConversionPlugin::is_class
          (StandardMaterial3DConversionPlugin *this,String *param_1)

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
    if (cVar4 != '\0') goto LAB_0010fe2b;
  }
  cVar4 = String::operator==(param_1,"StandardMaterial3DConversionPlugin");
  if (cVar4 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar5 = EditorResourceConversionPlugin::is_class
                        ((EditorResourceConversionPlugin *)this,param_1);
      return uVar5;
    }
  }
  else {
LAB_0010fe2b:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorInspectorPluginMaterial::is_class(String const&) const */

undefined8 __thiscall
EditorInspectorPluginMaterial::is_class(EditorInspectorPluginMaterial *this,String *param_1)

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
    if (cVar4 != '\0') goto LAB_0010ff53;
  }
  cVar4 = String::operator==(param_1,"EditorInspectorPluginMaterial");
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
      if (cVar4 != '\0') goto LAB_0010ff53;
    }
    cVar4 = String::operator==(param_1,"EditorInspectorPlugin");
    if (cVar4 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar5 = RefCounted::is_class((RefCounted *)this,param_1);
        return uVar5;
      }
      goto LAB_0011005e;
    }
  }
LAB_0010ff53:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0011005e:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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
    if (cVar4 != '\0') goto LAB_00110143;
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
      if (cVar4 != '\0') goto LAB_00110143;
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar5 = String::operator==(param_1,"Object");
      return uVar5;
    }
  }
  else {
LAB_00110143:
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
    if (cVar4 != '\0') goto LAB_00110323;
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
      if (cVar4 != '\0') goto LAB_00110323;
    }
    cVar4 = String::operator==(param_1,"CanvasItem");
    if (cVar4 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar5 = Node::is_class((Node *)this,param_1);
        return uVar5;
      }
      goto LAB_0011042e;
    }
  }
LAB_00110323:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0011042e:
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
    if (cVar4 != '\0') goto LAB_0011053b;
  }
  cVar4 = String::operator==(param_1,"ColorRect");
  if (cVar4 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar5 = Control::is_class((Control *)this,param_1);
      return uVar5;
    }
  }
  else {
LAB_0011053b:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MaterialEditor::is_class(String const&) const */

undefined8 __thiscall MaterialEditor::is_class(MaterialEditor *this,String *param_1)

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
    if (cVar4 != '\0') goto LAB_0011068b;
  }
  cVar4 = String::operator==(param_1,"MaterialEditor");
  if (cVar4 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar5 = Control::is_class((Control *)this,param_1);
      return uVar5;
    }
  }
  else {
LAB_0011068b:
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
    if (cVar4 != '\0') goto LAB_001107b3;
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
      if (cVar4 != '\0') goto LAB_001107b3;
    }
    cVar4 = String::operator==(param_1,"Container");
    if (cVar4 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar5 = Control::is_class((Control *)this,param_1);
        return uVar5;
      }
      goto LAB_001108be;
    }
  }
LAB_001107b3:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_001108be:
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
    if (cVar4 != '\0') goto LAB_001109cb;
  }
  cVar4 = String::operator==(param_1,"HBoxContainer");
  if (cVar4 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar5 = BoxContainer::is_class((BoxContainer *)this,param_1);
      return uVar5;
    }
  }
  else {
LAB_001109cb:
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
    if (cVar4 != '\0') goto LAB_00110b1b;
  }
  cVar4 = String::operator==(param_1,"VBoxContainer");
  if (cVar4 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar5 = BoxContainer::is_class((BoxContainer *)this,param_1);
      return uVar5;
    }
  }
  else {
LAB_00110b1b:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MaterialEditorPlugin::is_class(String const&) const */

undefined8 __thiscall MaterialEditorPlugin::is_class(MaterialEditorPlugin *this,String *param_1)

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
    if (cVar4 != '\0') goto LAB_00110c43;
  }
  cVar4 = String::operator==(param_1,"MaterialEditorPlugin");
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
      if (cVar4 != '\0') goto LAB_00110c43;
    }
    cVar4 = String::operator==(param_1,"EditorPlugin");
    if (cVar4 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar5 = Node::is_class((Node *)this,param_1);
        return uVar5;
      }
      goto LAB_00110d4e;
    }
  }
LAB_00110c43:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_00110d4e:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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
        if (pvVar3 == (void *)0x0) goto LAB_00110e4f;
      }
    }
    Memory::free_static(pvVar3,false);
    Memory::free_static(*(void **)(this + 0x20),false);
  }
LAB_00110e4f:
  CowData<char32_t>::_unref((CowData<char32_t> *)this);
  return;
}



/* RefCounted::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void RefCounted::_get_property_listv(List *param_1,bool param_2)

{
  undefined7 in_register_00000031;
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
  local_78 = "RefCounted";
  local_80 = 0;
  local_88 = 0;
  local_70 = 10;
  String::parse_latin1((StrRange *)&local_88);
  local_78 = "RefCounted";
  local_90 = 0;
  local_70 = 10;
  String::parse_latin1((StrRange *)&local_90);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_78,0,(StrRange *)&local_90,0,(StrRange *)&local_88,0x80,
             &local_80);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)CONCAT71(in_register_00000031,param_2),
             (PropertyInfo *)&local_78);
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
  undefined8 local_90;
  undefined8 local_88;
  long local_80;
  undefined *local_78;
  undefined8 local_70;
  long local_68;
  CowData<char32_t> local_58 [24];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_78 = &_LC88;
  local_80 = 0;
  local_88 = 0;
  local_70 = 4;
  String::parse_latin1((StrRange *)&local_88);
  local_78 = &_LC88;
  local_90 = 0;
  local_70 = 4;
  String::parse_latin1((StrRange *)&local_90);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_78,0,(StrRange *)&local_90,0,(StrRange *)&local_88,0x80,
             &local_80);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)CONCAT71(in_register_00000031,param_2),
             (PropertyInfo *)&local_78);
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



/* EditorInspectorPlugin::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall
EditorInspectorPlugin::_get_property_listv(EditorInspectorPlugin *this,List *param_1,bool param_2)

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
  local_78 = "EditorInspectorPlugin";
  local_70 = 0x15;
  String::parse_latin1((StrRange *)&local_88);
  local_78 = "EditorInspectorPlugin";
  local_90 = 0;
  local_70 = 0x15;
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



/* EditorInspectorPluginMaterial::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool)
   const */

void __thiscall
EditorInspectorPluginMaterial::_get_property_listv
          (EditorInspectorPluginMaterial *this,List *param_1,bool param_2)

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
    EditorInspectorPlugin::_get_property_listv((EditorInspectorPlugin *)this,param_1,false);
  }
  local_80 = 0;
  local_88 = 0;
  local_78 = "EditorInspectorPluginMaterial";
  local_70 = 0x1d;
  String::parse_latin1((StrRange *)&local_88);
  local_78 = "EditorInspectorPluginMaterial";
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
  StringName::StringName((StringName *)&local_78,"EditorInspectorPluginMaterial",false);
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



/* Mesh::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall Mesh::_get_property_listv(Mesh *this,List *param_1,bool param_2)

{
  long in_FS_OFFSET;
  undefined8 local_90;
  undefined8 local_88;
  long local_80;
  undefined *local_78;
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
  local_78 = &_LC123;
  local_70 = 4;
  String::parse_latin1((StrRange *)&local_88);
  local_78 = &_LC123;
  local_90 = 0;
  local_70 = 4;
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
  StringName::StringName((StringName *)&local_78,"Mesh",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (undefined *)0x0)) {
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



/* MaterialEditorPlugin::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall
MaterialEditorPlugin::_get_property_listv(MaterialEditorPlugin *this,List *param_1,bool param_2)

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
  local_78 = "MaterialEditorPlugin";
  local_70 = 0x14;
  String::parse_latin1((StrRange *)&local_88);
  local_78 = "MaterialEditorPlugin";
  local_90 = 0;
  local_70 = 0x14;
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
  StringName::StringName((StringName *)&local_78,"MaterialEditorPlugin",false);
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



/* PrimitiveMesh::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall PrimitiveMesh::_get_property_listv(PrimitiveMesh *this,List *param_1,bool param_2)

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
    Mesh::_get_property_listv((Mesh *)this,param_1,false);
  }
  local_80 = 0;
  local_88 = 0;
  local_78 = "PrimitiveMesh";
  local_70 = 0xd;
  String::parse_latin1((StrRange *)&local_88);
  local_78 = "PrimitiveMesh";
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
  StringName::StringName((StringName *)&local_78,"PrimitiveMesh",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      Mesh::_get_property_listv((Mesh *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* PlaneMesh::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall PlaneMesh::_get_property_listv(PlaneMesh *this,List *param_1,bool param_2)

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
    PrimitiveMesh::_get_property_listv((PrimitiveMesh *)this,param_1,false);
  }
  local_80 = 0;
  local_88 = 0;
  local_78 = "PlaneMesh";
  local_70 = 9;
  String::parse_latin1((StrRange *)&local_88);
  local_78 = "PlaneMesh";
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
  StringName::StringName((StringName *)&local_78,"PlaneMesh",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      PrimitiveMesh::_get_property_listv((PrimitiveMesh *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* QuadMesh::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall QuadMesh::_get_property_listv(QuadMesh *this,List *param_1,bool param_2)

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
    PlaneMesh::_get_property_listv((PlaneMesh *)this,param_1,false);
  }
  local_80 = 0;
  local_88 = 0;
  local_78 = "QuadMesh";
  local_70 = 8;
  String::parse_latin1((StrRange *)&local_88);
  local_78 = "QuadMesh";
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
  StringName::StringName((StringName *)&local_78,"QuadMesh",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      PlaneMesh::_get_property_listv((PlaneMesh *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorResourceConversionPlugin::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool)
   const */

void __thiscall
EditorResourceConversionPlugin::_get_property_listv
          (EditorResourceConversionPlugin *this,List *param_1,bool param_2)

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
  local_78 = "EditorResourceConversionPlugin";
  local_70 = 0x1e;
  String::parse_latin1((StrRange *)&local_88);
  local_78 = "EditorResourceConversionPlugin";
  local_90 = 0;
  local_70 = 0x1e;
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
  StringName::StringName((StringName *)&local_78,"EditorResourceConversionPlugin",false);
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



/* FogMaterialConversionPlugin::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool)
   const */

void __thiscall
FogMaterialConversionPlugin::_get_property_listv
          (FogMaterialConversionPlugin *this,List *param_1,bool param_2)

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
    EditorResourceConversionPlugin::_get_property_listv
              ((EditorResourceConversionPlugin *)this,param_1,false);
  }
  local_80 = 0;
  local_88 = 0;
  local_78 = "FogMaterialConversionPlugin";
  local_70 = 0x1b;
  String::parse_latin1((StrRange *)&local_88);
  local_78 = "FogMaterialConversionPlugin";
  local_90 = 0;
  local_70 = 0x1b;
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
  StringName::StringName((StringName *)&local_78,"FogMaterialConversionPlugin",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      EditorResourceConversionPlugin::_get_property_listv
                ((EditorResourceConversionPlugin *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* PhysicalSkyMaterialConversionPlugin::_get_property_listv(List<PropertyInfo, DefaultAllocator>*,
   bool) const */

void __thiscall
PhysicalSkyMaterialConversionPlugin::_get_property_listv
          (PhysicalSkyMaterialConversionPlugin *this,List *param_1,bool param_2)

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
    EditorResourceConversionPlugin::_get_property_listv
              ((EditorResourceConversionPlugin *)this,param_1,false);
  }
  local_80 = 0;
  local_88 = 0;
  local_78 = "PhysicalSkyMaterialConversionPlugin";
  local_70 = 0x23;
  String::parse_latin1((StrRange *)&local_88);
  local_78 = "PhysicalSkyMaterialConversionPlugin";
  local_90 = 0;
  local_70 = 0x23;
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
  StringName::StringName((StringName *)&local_78,"PhysicalSkyMaterialConversionPlugin",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      EditorResourceConversionPlugin::_get_property_listv
                ((EditorResourceConversionPlugin *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* PanoramaSkyMaterialConversionPlugin::_get_property_listv(List<PropertyInfo, DefaultAllocator>*,
   bool) const */

void __thiscall
PanoramaSkyMaterialConversionPlugin::_get_property_listv
          (PanoramaSkyMaterialConversionPlugin *this,List *param_1,bool param_2)

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
    EditorResourceConversionPlugin::_get_property_listv
              ((EditorResourceConversionPlugin *)this,param_1,false);
  }
  local_80 = 0;
  local_88 = 0;
  local_78 = "PanoramaSkyMaterialConversionPlugin";
  local_70 = 0x23;
  String::parse_latin1((StrRange *)&local_88);
  local_78 = "PanoramaSkyMaterialConversionPlugin";
  local_90 = 0;
  local_70 = 0x23;
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
  StringName::StringName((StringName *)&local_78,"PanoramaSkyMaterialConversionPlugin",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      EditorResourceConversionPlugin::_get_property_listv
                ((EditorResourceConversionPlugin *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ProceduralSkyMaterialConversionPlugin::_get_property_listv(List<PropertyInfo, DefaultAllocator>*,
   bool) const */

void __thiscall
ProceduralSkyMaterialConversionPlugin::_get_property_listv
          (ProceduralSkyMaterialConversionPlugin *this,List *param_1,bool param_2)

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
    EditorResourceConversionPlugin::_get_property_listv
              ((EditorResourceConversionPlugin *)this,param_1,false);
  }
  local_80 = 0;
  local_88 = 0;
  local_78 = "ProceduralSkyMaterialConversionPlugin";
  local_70 = 0x25;
  String::parse_latin1((StrRange *)&local_88);
  local_78 = "ProceduralSkyMaterialConversionPlugin";
  local_90 = 0;
  local_70 = 0x25;
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
  StringName::StringName((StringName *)&local_78,"ProceduralSkyMaterialConversionPlugin",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      EditorResourceConversionPlugin::_get_property_listv
                ((EditorResourceConversionPlugin *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CanvasItemMaterialConversionPlugin::_get_property_listv(List<PropertyInfo, DefaultAllocator>*,
   bool) const */

void __thiscall
CanvasItemMaterialConversionPlugin::_get_property_listv
          (CanvasItemMaterialConversionPlugin *this,List *param_1,bool param_2)

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
    EditorResourceConversionPlugin::_get_property_listv
              ((EditorResourceConversionPlugin *)this,param_1,false);
  }
  local_80 = 0;
  local_88 = 0;
  local_78 = "CanvasItemMaterialConversionPlugin";
  local_70 = 0x22;
  String::parse_latin1((StrRange *)&local_88);
  local_78 = "CanvasItemMaterialConversionPlugin";
  local_90 = 0;
  local_70 = 0x22;
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
  StringName::StringName((StringName *)&local_78,"CanvasItemMaterialConversionPlugin",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      EditorResourceConversionPlugin::_get_property_listv
                ((EditorResourceConversionPlugin *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ParticleProcessMaterialConversionPlugin::_get_property_listv(List<PropertyInfo,
   DefaultAllocator>*, bool) const */

void __thiscall
ParticleProcessMaterialConversionPlugin::_get_property_listv
          (ParticleProcessMaterialConversionPlugin *this,List *param_1,bool param_2)

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
    EditorResourceConversionPlugin::_get_property_listv
              ((EditorResourceConversionPlugin *)this,param_1,false);
  }
  local_80 = 0;
  local_88 = 0;
  local_78 = "ParticleProcessMaterialConversionPlugin";
  local_70 = 0x27;
  String::parse_latin1((StrRange *)&local_88);
  local_78 = "ParticleProcessMaterialConversionPlugin";
  local_90 = 0;
  local_70 = 0x27;
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
  StringName::StringName((StringName *)&local_78,"ParticleProcessMaterialConversionPlugin",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      EditorResourceConversionPlugin::_get_property_listv
                ((EditorResourceConversionPlugin *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ORMMaterial3DConversionPlugin::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool)
   const */

void __thiscall
ORMMaterial3DConversionPlugin::_get_property_listv
          (ORMMaterial3DConversionPlugin *this,List *param_1,bool param_2)

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
    EditorResourceConversionPlugin::_get_property_listv
              ((EditorResourceConversionPlugin *)this,param_1,false);
  }
  local_80 = 0;
  local_88 = 0;
  local_78 = "ORMMaterial3DConversionPlugin";
  local_70 = 0x1d;
  String::parse_latin1((StrRange *)&local_88);
  local_78 = "ORMMaterial3DConversionPlugin";
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
  StringName::StringName((StringName *)&local_78,"ORMMaterial3DConversionPlugin",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      EditorResourceConversionPlugin::_get_property_listv
                ((EditorResourceConversionPlugin *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* StandardMaterial3DConversionPlugin::_get_property_listv(List<PropertyInfo, DefaultAllocator>*,
   bool) const */

void __thiscall
StandardMaterial3DConversionPlugin::_get_property_listv
          (StandardMaterial3DConversionPlugin *this,List *param_1,bool param_2)

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
    EditorResourceConversionPlugin::_get_property_listv
              ((EditorResourceConversionPlugin *)this,param_1,false);
  }
  local_80 = 0;
  local_88 = 0;
  local_78 = "StandardMaterial3DConversionPlugin";
  local_70 = 0x22;
  String::parse_latin1((StrRange *)&local_88);
  local_78 = "StandardMaterial3DConversionPlugin";
  local_90 = 0;
  local_70 = 0x22;
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
  StringName::StringName((StringName *)&local_78,"StandardMaterial3DConversionPlugin",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      EditorResourceConversionPlugin::_get_property_listv
                ((EditorResourceConversionPlugin *)this,param_1,true);
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
  if ((code *)PTR__get_property_list_0011d0b8 != Object::_get_property_list) {
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
  if ((code *)PTR__get_property_list_0011d0c0 != CanvasItem::_get_property_list) {
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



/* ColorRect::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall ColorRect::_get_property_listv(ColorRect *this,List *param_1,bool param_2)

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
  local_78 = "ColorRect";
  local_70 = 9;
  String::parse_latin1((StrRange *)&local_88);
  local_78 = "ColorRect";
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



/* VBoxContainer::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall VBoxContainer::_get_property_listv(VBoxContainer *this,List *param_1,bool param_2)

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
  local_78 = "VBoxContainer";
  local_70 = 0xd;
  String::parse_latin1((StrRange *)&local_88);
  local_78 = "VBoxContainer";
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



/* MaterialEditor::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall MaterialEditor::_get_property_listv(MaterialEditor *this,List *param_1,bool param_2)

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
  local_78 = "MaterialEditor";
  local_70 = 0xe;
  String::parse_latin1((StrRange *)&local_88);
  local_78 = "MaterialEditor";
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
  StringName::StringName((StringName *)&local_78,"MaterialEditor",false);
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



/* void memdelete_allocator<List<EditorInspectorPlugin::AddedEditor, DefaultAllocator>::Element,
   DefaultAllocator>(List<EditorInspectorPlugin::AddedEditor, DefaultAllocator>::Element*) */

void memdelete_allocator<List<EditorInspectorPlugin::AddedEditor,DefaultAllocator>::Element,DefaultAllocator>
               (Element *param_1)

{
  long *plVar1;
  CowData<char32_t> *pCVar2;
  long lVar3;
  code *pcVar4;
  long lVar5;
  CowData<char32_t> *this;
  
  CowData<char32_t>::_unref((CowData<char32_t> *)(param_1 + 0x18));
  if (*(long *)(param_1 + 0x10) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(param_1 + 0x10) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      pCVar2 = *(CowData<char32_t> **)(param_1 + 0x10);
      if (pCVar2 == (CowData<char32_t> *)0x0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      lVar3 = *(long *)(pCVar2 + -8);
      *(undefined8 *)(param_1 + 0x10) = 0;
      if (lVar3 != 0) {
        lVar5 = 0;
        this = pCVar2;
        do {
          lVar5 = lVar5 + 1;
          CowData<char32_t>::_unref(this);
          this = this + 8;
        } while (lVar3 != lVar5);
      }
      Memory::free_static(pCVar2 + -0x10,false);
    }
  }
  Memory::free_static(param_1,false);
  return;
}



/* EditorInspectorPlugin::~EditorInspectorPlugin() */

void __thiscall EditorInspectorPlugin::~EditorInspectorPlugin(EditorInspectorPlugin *this)

{
  Element *pEVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  bool bVar5;
  
  bVar5 = StringName::configured != '\0';
  *(code **)this = Environment::Environment;
  if (bVar5) {
    if (*(long *)(this + 0x200) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001142e9;
    }
    if (*(long *)(this + 0x1e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001142e9;
    }
    if (*(long *)(this + 0x1d0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001142e9;
    }
    if (*(long *)(this + 0x1b8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001142e9;
    }
    if (*(long *)(this + 0x1a0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001142e9;
    }
    if (*(long *)(this + 0x188) != 0) {
      StringName::unref();
    }
  }
LAB_001142e9:
  plVar4 = *(long **)(this + 0x180);
  if (plVar4 != (long *)0x0) {
    do {
      pEVar1 = (Element *)*plVar4;
      if (pEVar1 == (Element *)0x0) {
        if ((int)plVar4[2] != 0) {
          _err_print_error("~List","./core/templates/list.h",0x316,
                           "Condition \"_data->size_cache\" is true.",0,0);
          goto LAB_00114355;
        }
        break;
      }
      if (*(long **)(pEVar1 + 0x38) == plVar4) {
        lVar3 = *(long *)(pEVar1 + 0x28);
        lVar2 = *(long *)(pEVar1 + 0x30);
        *plVar4 = lVar3;
        if (pEVar1 == (Element *)plVar4[1]) {
          plVar4[1] = lVar2;
        }
        if (lVar2 != 0) {
          *(long *)(lVar2 + 0x28) = lVar3;
          lVar3 = *(long *)(pEVar1 + 0x28);
        }
        if (lVar3 != 0) {
          *(long *)(lVar3 + 0x30) = lVar2;
        }
        memdelete_allocator<List<EditorInspectorPlugin::AddedEditor,DefaultAllocator>::Element,DefaultAllocator>
                  (pEVar1);
        *(int *)(plVar4 + 2) = (int)plVar4[2] + -1;
      }
      else {
        _err_print_error("erase","./core/templates/list.h",0xe7,
                         "Condition \"p_I->data != this\" is true. Returning: false",0,0);
      }
      plVar4 = *(long **)(this + 0x180);
    } while ((int)plVar4[2] != 0);
    Memory::free_static(plVar4,false);
  }
LAB_00114355:
  *(undefined ***)this = &PTR__initialize_classv_00114ac8;
  Object::~Object((Object *)this);
  return;
}



/* EditorInspectorPlugin::~EditorInspectorPlugin() */

void __thiscall EditorInspectorPlugin::~EditorInspectorPlugin(EditorInspectorPlugin *this)

{
  ~EditorInspectorPlugin(this);
  operator_delete(this,0x218);
  return;
}



/* EditorInspectorPluginMaterial::~EditorInspectorPluginMaterial() */

void __thiscall
EditorInspectorPluginMaterial::~EditorInspectorPluginMaterial(EditorInspectorPluginMaterial *this)

{
  Object *pOVar1;
  char cVar2;
  
  *(undefined ***)this = &PTR__initialize_classv_00115f00;
  if (*(long *)(this + 0x218) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0x218);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
        EditorInspectorPlugin::~EditorInspectorPlugin((EditorInspectorPlugin *)this);
        return;
      }
    }
  }
  EditorInspectorPlugin::~EditorInspectorPlugin((EditorInspectorPlugin *)this);
  return;
}



/* EditorInspectorPluginMaterial::~EditorInspectorPluginMaterial() */

void __thiscall
EditorInspectorPluginMaterial::~EditorInspectorPluginMaterial(EditorInspectorPluginMaterial *this)

{
  Object *pOVar1;
  char cVar2;
  
  *(undefined ***)this = &PTR__initialize_classv_00115f00;
  if (*(long *)(this + 0x218) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0x218);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  EditorInspectorPlugin::~EditorInspectorPlugin((EditorInspectorPlugin *)this);
  operator_delete(this,0x220);
  return;
}



/* MaterialEditor::gui_input(Ref<InputEvent> const&) */

void MaterialEditor::_GLOBAL__sub_I_gui_input(void)

{
  undefined8 uStack_8;
  
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
  if (OptionButton::base_property_helper != '\0') {
    return;
  }
  OptionButton::base_property_helper = 1;
  OptionButton::base_property_helper._64_8_ = 0;
  OptionButton::base_property_helper._56_8_ = 2;
  OptionButton::base_property_helper._0_16_ = (undefined1  [16])0x0;
  OptionButton::base_property_helper._24_16_ = (undefined1  [16])0x0;
  OptionButton::base_property_helper._40_16_ = (undefined1  [16])0x0;
  __cxa_atexit(PropertyListHelper::~PropertyListHelper,OptionButton::base_property_helper,
               &__dso_handle,uStack_8);
  return;
}



/* WARNING: Control flow encountered bad instruction data */
/* EditorInspectorPluginMaterial::~EditorInspectorPluginMaterial() */

void __thiscall
EditorInspectorPluginMaterial::~EditorInspectorPluginMaterial(EditorInspectorPluginMaterial *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* EditorInspectorPlugin::~EditorInspectorPlugin() */

void __thiscall EditorInspectorPlugin::~EditorInspectorPlugin(EditorInspectorPlugin *this)

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
/* PropertyInfo::PropertyInfo(Variant::Type, String const&, PropertyHint, String const&, unsigned
   int, StringName const&) */

void __thiscall PropertyInfo::PropertyInfo(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MaterialEditorPlugin::~MaterialEditorPlugin() */

void __thiscall MaterialEditorPlugin::~MaterialEditorPlugin(MaterialEditorPlugin *this)

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
/* List<PropertyInfo, DefaultAllocator>::~List() */

void __thiscall
List<PropertyInfo,DefaultAllocator>::~List(List<PropertyInfo,DefaultAllocator> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* StandardMaterial3DConversionPlugin::~StandardMaterial3DConversionPlugin() */

void __thiscall
StandardMaterial3DConversionPlugin::~StandardMaterial3DConversionPlugin
          (StandardMaterial3DConversionPlugin *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* PanoramaSkyMaterialConversionPlugin::~PanoramaSkyMaterialConversionPlugin() */

void __thiscall
PanoramaSkyMaterialConversionPlugin::~PanoramaSkyMaterialConversionPlugin
          (PanoramaSkyMaterialConversionPlugin *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* PhysicalSkyMaterialConversionPlugin::~PhysicalSkyMaterialConversionPlugin() */

void __thiscall
PhysicalSkyMaterialConversionPlugin::~PhysicalSkyMaterialConversionPlugin
          (PhysicalSkyMaterialConversionPlugin *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* ORMMaterial3DConversionPlugin::~ORMMaterial3DConversionPlugin() */

void __thiscall
ORMMaterial3DConversionPlugin::~ORMMaterial3DConversionPlugin(ORMMaterial3DConversionPlugin *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* ParticleProcessMaterialConversionPlugin::~ParticleProcessMaterialConversionPlugin() */

void __thiscall
ParticleProcessMaterialConversionPlugin::~ParticleProcessMaterialConversionPlugin
          (ParticleProcessMaterialConversionPlugin *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CanvasItemMaterialConversionPlugin::~CanvasItemMaterialConversionPlugin() */

void __thiscall
CanvasItemMaterialConversionPlugin::~CanvasItemMaterialConversionPlugin
          (CanvasItemMaterialConversionPlugin *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* ProceduralSkyMaterialConversionPlugin::~ProceduralSkyMaterialConversionPlugin() */

void __thiscall
ProceduralSkyMaterialConversionPlugin::~ProceduralSkyMaterialConversionPlugin
          (ProceduralSkyMaterialConversionPlugin *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* FogMaterialConversionPlugin::~FogMaterialConversionPlugin() */

void __thiscall
FogMaterialConversionPlugin::~FogMaterialConversionPlugin(FogMaterialConversionPlugin *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MaterialEditor::~MaterialEditor() */

void __thiscall MaterialEditor::~MaterialEditor(MaterialEditor *this)

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
/* HBoxContainer::~HBoxContainer() */

void __thiscall HBoxContainer::~HBoxContainer(HBoxContainer *this)

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
/* QuadMesh::~QuadMesh() */

void __thiscall QuadMesh::~QuadMesh(QuadMesh *this)

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
/* CallableCustomMethodPointer<MaterialEditor, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<MaterialEditor,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<MaterialEditor,void> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<EditorInspectorPluginMaterial, void, Object*, Object*, String const&,
   Variant const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorInspectorPluginMaterial,void,Object*,Object*,String_const&,Variant_const&>
::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorInspectorPluginMaterial,void,Object*,Object*,String_const&,Variant_const&>
           *this)

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



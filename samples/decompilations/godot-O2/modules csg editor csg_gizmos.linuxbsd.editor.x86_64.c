
/* CSGShape3DGizmoPlugin::get_priority() const */

undefined8 CSGShape3DGizmoPlugin::get_priority(void)

{
  return 0xffffffff;
}



/* CSGShape3DGizmoPlugin::is_selectable_when_hidden() const */

undefined8 CSGShape3DGizmoPlugin::is_selectable_when_hidden(void)

{
  return 1;
}



/* CSGShape3DGizmoPlugin::begin_handle_action(EditorNode3DGizmo const*, int, bool) */

void __thiscall
CSGShape3DGizmoPlugin::begin_handle_action
          (CSGShape3DGizmoPlugin *this,EditorNode3DGizmo *param_1,int param_2,bool param_3)

{
  Variant *pVVar1;
  long in_FS_OFFSET;
  int local_98 [22];
  long local_40;
  
  pVVar1 = *(Variant **)(this + 0x450);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Node3D::get_global_transform();
  (**(code **)(*(long *)this + 0x210))((Transform3D *)local_98,this,param_1,param_2,param_3);
  Gizmo3DHelper::initialize_handle_action(pVVar1,(Transform3D *)local_98);
  if (Variant::needs_deinit[local_98[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorPluginCSG::handles(Object*) const */

undefined8 __thiscall EditorPluginCSG::handles(EditorPluginCSG *this,Object *param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  if (param_1 == (Object *)0x0) {
    return 0;
  }
  lVar1 = __dynamic_cast(param_1,&Object::typeinfo,&CSGShape3D::typeinfo,0);
  if (lVar1 != 0) {
    uVar2 = CSGShape3D::is_root_shape();
    return uVar2;
  }
  return 0;
}



/* CSGShapeEditor::_notification(int) [clone .part.0] */

void CSGShapeEditor::_notification(int param_1)

{
  Ref *pRVar1;
  char cVar2;
  int iVar3;
  undefined4 in_register_0000003c;
  long in_FS_OFFSET;
  Object *local_38;
  long local_30;
  
  pRVar1 = *(Ref **)(CONCAT44(in_register_0000003c,param_1) + 0x9d0);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (_notification(int)::{lambda()#1}::operator()()::sname == '\0') {
    iVar3 = __cxa_guard_acquire(&_notification(int)::{lambda()#1}::operator()()::sname);
    if (iVar3 != 0) {
      _scs_create((char *)&_notification(int)::{lambda()#1}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#1}::operator()()::sname,
                   &__dso_handle);
      __cxa_guard_release(&_notification(int)::{lambda()#1}::operator()()::sname);
    }
  }
  Control::get_editor_theme_icon((StringName *)&local_38);
  Button::set_button_icon(pRVar1);
  if (local_38 != (Object *)0x0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      cVar2 = predelete_handler(local_38);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)local_38 + 0x140))(local_38);
        Memory::free_static(local_38,false);
      }
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CSGShape3DGizmoPlugin::~CSGShape3DGizmoPlugin() */

void __thiscall CSGShape3DGizmoPlugin::~CSGShape3DGizmoPlugin(CSGShape3DGizmoPlugin *this)

{
  Object *pOVar1;
  char cVar2;
  
  *(undefined ***)this = &PTR__initialize_classv_0010b6a8;
  if (*(long *)(this + 0x450) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0x450);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
        EditorNode3DGizmoPlugin::~EditorNode3DGizmoPlugin((EditorNode3DGizmoPlugin *)this);
        return;
      }
    }
  }
  EditorNode3DGizmoPlugin::~EditorNode3DGizmoPlugin((EditorNode3DGizmoPlugin *)this);
  return;
}



/* CSGShape3DGizmoPlugin::~CSGShape3DGizmoPlugin() */

void __thiscall CSGShape3DGizmoPlugin::~CSGShape3DGizmoPlugin(CSGShape3DGizmoPlugin *this)

{
  Object *pOVar1;
  char cVar2;
  
  *(undefined ***)this = &PTR__initialize_classv_0010b6a8;
  if (*(long *)(this + 0x450) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0x450);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  EditorNode3DGizmoPlugin::~EditorNode3DGizmoPlugin((EditorNode3DGizmoPlugin *)this);
  operator_delete(this,0x458);
  return;
}



/* EditorPluginCSG::edit(Object*) */

void __thiscall EditorPluginCSG::edit(EditorPluginCSG *this,Object *param_1)

{
  char cVar1;
  long lVar2;
  
  if (param_1 != (Object *)0x0) {
    lVar2 = __dynamic_cast(param_1,&Object::typeinfo,&CSGShape3D::typeinfo,0);
    if (lVar2 != 0) {
      cVar1 = CSGShape3D::is_root_shape();
      if (cVar1 != '\0') {
        *(long *)(*(long *)(this + 0x660) + 0x9c8) = lVar2;
        CanvasItem::show();
        return;
      }
    }
  }
  *(undefined8 *)(*(long *)(this + 0x660) + 0x9c8) = 0;
  CanvasItem::hide();
  return;
}



/* void Ref<Material>::TEMPNAMEPLACEHOLDERVALUE(Ref<StandardMaterial3D> const&) [clone .isra.0] */

void __thiscall Ref<Material>::operator=(Ref<Material> *this,Ref *param_1)

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
    pOVar3 = (Object *)__dynamic_cast(param_1,&Object::typeinfo,&Material::typeinfo,0);
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



/* CSGShape3DGizmoPlugin::set_handle(EditorNode3DGizmo const*, int, bool, Camera3D*, Vector2 const&)
    */

void CSGShape3DGizmoPlugin::set_handle
               (EditorNode3DGizmo *param_1,int param_2,bool param_3,Camera3D *param_4,
               Vector2 *param_5)

{
  Camera3D *pCVar1;
  long lVar2;
  long lVar3;
  Vector3 *pVVar4;
  undefined7 in_register_00000011;
  int iVar5;
  undefined4 in_register_00000034;
  Vector3 *in_R9;
  int iVar6;
  float *pfVar7;
  long in_FS_OFFSET;
  float fVar8;
  double dVar9;
  undefined4 in_XMM1_Da;
  float fVar10;
  float local_90;
  float local_8c;
  undefined8 local_88;
  undefined4 local_80;
  undefined8 local_7c;
  float local_74;
  undefined8 local_70;
  undefined4 local_68;
  undefined8 local_64;
  undefined4 local_5c;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_4c;
  undefined4 local_44;
  long local_40;
  
  lVar2 = *(long *)(CONCAT44(in_register_00000034,param_2) + 0x1f0);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  pCVar1 = *(Camera3D **)(param_1 + 0x450);
  if (lVar2 == 0) {
    local_58 = 0;
    local_50 = 0;
    local_4c = 0;
    local_44 = 0;
    Gizmo3DHelper::get_segment(pCVar1,param_5,in_R9);
  }
  else {
    pfVar7 = (float *)(CONCAT71(in_register_00000011,param_3) & 0xffffffff);
    lVar2 = __dynamic_cast(lVar2,&Object::typeinfo,&CSGShape3D::typeinfo,0);
    local_58 = 0;
    local_50 = 0;
    local_4c = 0;
    local_44 = 0;
    Gizmo3DHelper::get_segment(pCVar1,param_5,in_R9);
    if (lVar2 != 0) {
      lVar3 = __dynamic_cast(lVar2,&Object::typeinfo,&CSGSphere3D::typeinfo,0);
      if (lVar3 != 0) {
        local_7c = 0;
        local_74 = 0.0;
        local_70 = 0;
        local_68 = 0;
        local_88 = 0x45800000;
        local_80 = 0;
        local_64 = 0;
        local_5c = 0;
        Geometry3D::get_closest_points_between_segments
                  ((Vector3 *)&local_64,(Vector3 *)&local_88,(Vector3 *)&local_58,
                   (Vector3 *)&local_4c,(Vector3 *)&local_7c,(Vector3 *)&local_70);
        fVar10 = (float)local_7c;
        if (*(char *)(Node3DEditor::singleton + 0xe00) != *(char *)(Node3DEditor::singleton + 0xe01)
           ) {
          fVar8 = (float)Node3DEditor::get_translate_snap();
          dVar9 = (double)Math::snapped((double)fVar10,(double)fVar8);
          fVar10 = (float)dVar9;
        }
        in_XMM1_Da = SUB84(_LC7,0);
        if ((double)fVar10 < _LC7) {
          fVar10 = _LC4;
        }
        CSGSphere3D::set_radius(fVar10);
      }
      pVVar4 = (Vector3 *)__dynamic_cast(lVar2,&Object::typeinfo,&CSGBox3D::typeinfo,0);
      iVar6 = (int)CONCAT71(in_register_00000011,param_3);
      iVar5 = (int)&local_58;
      if (pVVar4 != (Vector3 *)0x0) {
        local_70 = CSGBox3D::get_size();
        local_64 = 0;
        local_5c = 0;
        local_68 = in_XMM1_Da;
        Gizmo3DHelper::box_set_handle
                  (*(Vector3 **)(param_1 + 0x450),iVar5,(Vector3 *)pfVar7,(Vector3 *)&local_70);
        CSGBox3D::set_size(pVVar4);
        Node3D::set_global_position(pVVar4);
      }
      pVVar4 = (Vector3 *)__dynamic_cast(lVar2,&Object::typeinfo,&CSGCylinder3D::typeinfo,0);
      if (pVVar4 != (Vector3 *)0x0) {
        local_90 = (float)CSGCylinder3D::get_height();
        local_8c = (float)CSGCylinder3D::get_radius();
        local_64 = 0;
        local_5c = 0;
        Gizmo3DHelper::cylinder_set_handle
                  (*(Vector3 **)(param_1 + 0x450),iVar5,pfVar7,&local_90,(Vector3 *)&local_8c);
        CSGCylinder3D::set_height(local_90);
        CSGCylinder3D::set_radius(local_8c);
        Node3D::set_global_position(pVVar4);
      }
      lVar2 = __dynamic_cast(lVar2,&Object::typeinfo,&CSGTorus3D::typeinfo,0);
      if (lVar2 != 0) {
        local_7c = 0;
        local_74 = 0.0;
        local_70 = 0;
        local_68 = 0;
        local_88 = 0x45800000;
        local_80 = 0;
        local_64 = 0;
        local_5c = 0;
        Geometry3D::get_closest_points_between_segments
                  ((Vector3 *)&local_64,(Vector3 *)&local_88,(Vector3 *)&local_58,
                   (Vector3 *)&local_4c,(Vector3 *)&local_7c,(Vector3 *)&local_70);
        fVar10 = local_7c._4_4_ * 0.0 + (float)local_7c + local_74 * 0.0;
        if (*(char *)(Node3DEditor::singleton + 0xe00) != *(char *)(Node3DEditor::singleton + 0xe01)
           ) {
          fVar8 = (float)Node3DEditor::get_translate_snap();
          dVar9 = (double)Math::snapped((double)fVar10,(double)fVar8);
          fVar10 = (float)dVar9;
        }
        if ((double)fVar10 < _LC7) {
          fVar10 = _LC4;
        }
        if (iVar6 == 0) {
          CSGTorus3D::set_inner_radius(fVar10);
        }
        else if (iVar6 == 1) {
          CSGTorus3D::set_outer_radius(fVar10);
        }
      }
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CSGShape3DGizmoPlugin::get_handle_value(EditorNode3DGizmo const*, int, bool) const */

CSGShape3DGizmoPlugin * __thiscall
CSGShape3DGizmoPlugin::get_handle_value
          (CSGShape3DGizmoPlugin *this,EditorNode3DGizmo *param_1,int param_2,bool param_3)

{
  long lVar1;
  long lVar2;
  undefined7 in_register_00000009;
  undefined4 in_register_00000014;
  int iVar3;
  long in_FS_OFFSET;
  float fVar4;
  undefined1 local_3c [12];
  long local_30;
  
  lVar1 = *(long *)(CONCAT44(in_register_00000014,param_2) + 0x1f0);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (lVar1 != 0) {
    lVar1 = __dynamic_cast(lVar1,&Object::typeinfo,&CSGShape3D::typeinfo,0);
    if (lVar1 != 0) {
      lVar2 = __dynamic_cast(lVar1,&Object::typeinfo,&CSGSphere3D::typeinfo,0);
      if (lVar2 != 0) {
        fVar4 = (float)CSGSphere3D::get_radius();
        Variant::Variant((Variant *)this,fVar4);
        goto LAB_00100991;
      }
      lVar2 = __dynamic_cast(lVar1,&Object::typeinfo,&CSGBox3D::typeinfo,0);
      if (lVar2 != 0) {
        local_3c = CSGBox3D::get_size();
        Variant::Variant((Variant *)this,local_3c);
        goto LAB_00100991;
      }
      lVar2 = __dynamic_cast(lVar1,&Object::typeinfo,&CSGCylinder3D::typeinfo,0);
      iVar3 = (int)CONCAT71(in_register_00000009,param_3);
      if (lVar2 == 0) {
        lVar1 = __dynamic_cast(lVar1,&Object::typeinfo,&CSGTorus3D::typeinfo,0);
        if (lVar1 == 0) goto LAB_00100a70;
        if (iVar3 == 0) {
          fVar4 = (float)CSGTorus3D::get_inner_radius();
        }
        else {
          fVar4 = (float)CSGTorus3D::get_outer_radius();
        }
      }
      else if (iVar3 == 0) {
        fVar4 = (float)CSGCylinder3D::get_radius();
      }
      else {
        fVar4 = (float)CSGCylinder3D::get_height();
      }
      Variant::Variant((Variant *)this,fVar4);
      goto LAB_00100991;
    }
  }
LAB_00100a70:
  *(undefined4 *)this = 0;
  *(undefined1 (*) [16])(this + 8) = (undefined1  [16])0x0;
LAB_00100991:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CSGShape3DGizmoPlugin::get_gizmo_name() const */

CSGShape3DGizmoPlugin * __thiscall
CSGShape3DGizmoPlugin::get_gizmo_name(CSGShape3DGizmoPlugin *this)

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



/* CSGShape3DGizmoPlugin::has_gizmo(Node3D*) */

bool __thiscall CSGShape3DGizmoPlugin::has_gizmo(CSGShape3DGizmoPlugin *this,Node3D *param_1)

{
  long lVar1;
  bool bVar2;
  
  if (param_1 != (Node3D *)0x0) {
    bVar2 = true;
    lVar1 = __dynamic_cast(param_1,&Object::typeinfo,&CSGSphere3D::typeinfo,0);
    if (lVar1 == 0) {
      lVar1 = __dynamic_cast(param_1,&Object::typeinfo,&CSGBox3D::typeinfo,0);
      if (lVar1 == 0) {
        lVar1 = __dynamic_cast(param_1,&Object::typeinfo,&CSGCylinder3D::typeinfo,0);
        if (lVar1 == 0) {
          lVar1 = __dynamic_cast(param_1,&Object::typeinfo,&CSGTorus3D::typeinfo,0);
          if (lVar1 == 0) {
            lVar1 = __dynamic_cast(param_1,&Object::typeinfo,&CSGMesh3D::typeinfo,0);
            if (lVar1 == 0) {
              lVar1 = __dynamic_cast(param_1,&Object::typeinfo,&CSGPolygon3D::typeinfo,0);
              bVar2 = lVar1 != 0;
            }
          }
        }
      }
    }
    return bVar2;
  }
  return false;
}



/* CSGShape3DGizmoPlugin::get_handle_name(EditorNode3DGizmo const*, int, bool) const */

CSGShape3DGizmoPlugin * __thiscall
CSGShape3DGizmoPlugin::get_handle_name
          (CSGShape3DGizmoPlugin *this,EditorNode3DGizmo *param_1,int param_2,bool param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined7 in_register_00000009;
  undefined4 in_register_00000014;
  char *pcVar4;
  long in_FS_OFFSET;
  
  lVar2 = *(long *)(CONCAT44(in_register_00000014,param_2) + 0x1f0);
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if ((lVar2 == 0) ||
     (lVar2 = __dynamic_cast(lVar2,&Object::typeinfo,&CSGShape3D::typeinfo,0), lVar2 == 0)) {
LAB_00100d58:
    *(undefined8 *)this = 0;
    String::parse_latin1((String *)this,"");
  }
  else {
    lVar3 = __dynamic_cast(lVar2,&Object::typeinfo,&CSGSphere3D::typeinfo,0);
    if (lVar3 == 0) {
      lVar3 = __dynamic_cast(lVar2,&Object::typeinfo,&CSGBox3D::typeinfo,0);
      if (lVar3 != 0) {
        Gizmo3DHelper::box_get_handle_name((int)this);
        goto LAB_00100c7c;
      }
      lVar3 = __dynamic_cast(lVar2,&Object::typeinfo,&CSGCylinder3D::typeinfo,0);
      if (lVar3 == 0) {
        lVar2 = __dynamic_cast(lVar2,&Object::typeinfo,&CSGTorus3D::typeinfo,0);
        if (lVar2 != 0) {
          *(undefined8 *)this = 0;
          pcVar4 = "OuterRadius";
          if ((int)CONCAT71(in_register_00000009,param_3) == 0) {
            pcVar4 = "InnerRadius";
          }
          String::parse_latin1((String *)this,pcVar4);
          goto LAB_00100c7c;
        }
        goto LAB_00100d58;
      }
      *(undefined8 *)this = 0;
    }
    else {
      *(undefined8 *)this = 0;
    }
    String::parse_latin1((StrRange *)this);
  }
LAB_00100c7c:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return this;
}



/* CSGShapeEditor::_node_removed(Node*) */

void __thiscall CSGShapeEditor::_node_removed(CSGShapeEditor *this,Node *param_1)

{
  if (*(Node **)(this + 0x9c8) != param_1) {
    return;
  }
  *(undefined8 *)(this + 0x9c8) = 0;
  CanvasItem::hide();
  return;
}



/* CSGShapeEditor::edit(CSGShape3D*) */

void __thiscall CSGShapeEditor::edit(CSGShapeEditor *this,CSGShape3D *param_1)

{
  *(CSGShape3D **)(this + 0x9c8) = param_1;
  if (param_1 != (CSGShape3D *)0x0) {
    CanvasItem::show();
    return;
  }
  CanvasItem::hide();
  return;
}



/* CSGShapeEditor::_notification(int) */

void __thiscall CSGShapeEditor::_notification(CSGShapeEditor *this,int param_1)

{
  if (param_1 != 0x2d) {
    return;
  }
  _notification((int)this);
  return;
}



/* CSGShape3DGizmoPlugin::commit_handle(EditorNode3DGizmo const*, int, bool, Variant const&, bool)
    */

void __thiscall
CSGShape3DGizmoPlugin::commit_handle
          (CSGShape3DGizmoPlugin *this,EditorNode3DGizmo *param_1,int param_2,bool param_3,
          Variant *param_4,bool param_5)

{
  String *pSVar1;
  undefined8 uVar2;
  Object *pOVar3;
  StringName *pSVar4;
  Object *pOVar5;
  long lVar6;
  char *pcVar7;
  long in_FS_OFFSET;
  float fVar8;
  undefined8 local_f0;
  undefined8 local_e8;
  String local_e0 [8];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  long local_c0;
  long local_b8;
  long local_b0;
  Variant *local_a8 [2];
  Variant *local_98 [4];
  int local_78 [6];
  undefined8 local_60;
  undefined1 local_58 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(param_1 + 0x1f0) != 0) {
    pOVar3 = (Object *)
             __dynamic_cast(*(long *)(param_1 + 0x1f0),&Object::typeinfo,&CSGShape3D::typeinfo,0);
    if (pOVar3 != (Object *)0x0) {
      pSVar4 = (StringName *)__dynamic_cast(pOVar3,&Object::typeinfo,&CSGSphere3D::typeinfo,0);
      if (pSVar4 != (StringName *)0x0) {
        if (param_5) {
          fVar8 = Variant::operator_cast_to_float(param_4);
          if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
            CSGSphere3D::set_radius(fVar8);
            return;
          }
          goto LAB_00101918;
        }
        pOVar5 = (Object *)EditorUndoRedoManager::get_singleton();
        local_b8 = 0;
        String::parse_latin1((String *)&local_b8,"");
        local_c0 = 0;
        String::parse_latin1((String *)&local_c0,"Change Sphere Shape Radius");
        TTR((String *)&local_b0,(String *)&local_c0);
        EditorUndoRedoManager::create_action(pOVar5,(String *)&local_b0,0,0,0);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
        fVar8 = (float)CSGSphere3D::get_radius();
        StringName::StringName((StringName *)&local_b0,"set_radius",false);
        Variant::Variant((Variant *)local_78,fVar8);
        local_60 = 0;
        local_58 = (undefined1  [16])0x0;
        local_98[0] = (Variant *)local_78;
        EditorUndoRedoManager::add_do_methodp
                  (pOVar5,pSVar4,(Variant **)&local_b0,(int)(Variant *)local_98);
        if (Variant::needs_deinit[(int)local_60] != '\0') {
          Variant::_clear_internal();
        }
        if (Variant::needs_deinit[local_78[0]] != '\0') {
          Variant::_clear_internal();
        }
        if ((StringName::configured != '\0') && (local_b0 != 0)) {
          StringName::unref();
        }
        Variant::Variant((Variant *)local_98,param_4);
        StringName::StringName((StringName *)&local_b0,"set_radius",false);
        Variant::Variant((Variant *)local_78,(Variant *)local_98);
        local_60 = 0;
        local_58 = (undefined1  [16])0x0;
        local_a8[0] = (Variant *)local_78;
        EditorUndoRedoManager::add_undo_methodp(pOVar5,pSVar4,(Variant **)&local_b0,(int)local_a8);
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
      }
      lVar6 = __dynamic_cast(pOVar3,&Object::typeinfo,&CSGBox3D::typeinfo,0);
      if (lVar6 != 0) {
        pSVar1 = *(String **)(this + 0x450);
        StringName::StringName((StringName *)&local_b0,"size",false);
        StringName::StringName((StringName *)&local_b8,"global_position",false);
        local_c8 = 0;
        String::parse_latin1((String *)&local_c8,"");
        local_d0 = 0;
        String::parse_latin1((String *)&local_d0,"Change CSG Box Size");
        TTR((String *)&local_c0,(String *)&local_d0);
        Gizmo3DHelper::box_commit_handle
                  (pSVar1,SUB81((String *)&local_c0,0),(Object *)(ulong)param_5,pOVar3,
                   (StringName *)0x0,(StringName *)&local_b8);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
        if (StringName::configured != '\0') {
          if (local_b8 != 0) {
            StringName::unref();
            if (StringName::configured == '\0') goto LAB_001011c9;
          }
          if (local_b0 != 0) {
            StringName::unref();
          }
        }
      }
LAB_001011c9:
      lVar6 = __dynamic_cast(pOVar3,&Object::typeinfo,&CSGCylinder3D::typeinfo,0);
      if (lVar6 != 0) {
        uVar2 = *(undefined8 *)(this + 0x450);
        StringName::StringName((StringName *)&local_b0,"radius",false);
        StringName::StringName((StringName *)&local_b8,"height",false);
        StringName::StringName((StringName *)&local_c0,"global_position",false);
        local_d0 = 0;
        String::parse_latin1((String *)&local_d0,"");
        local_d8 = 0;
        String::parse_latin1((String *)&local_d8,"Change CSG Cylinder Height");
        TTR((String *)&local_c8,(String *)&local_d8);
        local_e8 = 0;
        String::parse_latin1((String *)&local_e8,"");
        local_f0 = 0;
        String::parse_latin1((String *)&local_f0,"Change CSG Cylinder Radius");
        TTR(local_e0,(String *)&local_f0);
        Gizmo3DHelper::cylinder_commit_handle
                  ((int)uVar2,(String *)(ulong)(uint)param_2,local_e0,SUB81((String *)&local_c8,0),
                   (Object *)(ulong)param_5,pOVar3,(Object *)0x0,(StringName *)0x0,
                   (StringName *)&local_c0,(StringName *)&local_b8);
        CowData<char32_t>::_unref((CowData<char32_t> *)local_e0);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_f0);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
        if (StringName::configured != '\0') {
          if (local_c0 != 0) {
            StringName::unref();
            if (StringName::configured == '\0') goto LAB_001013a6;
          }
          if (local_b8 != 0) {
            StringName::unref();
            if (StringName::configured == '\0') goto LAB_001013a6;
          }
          if (local_b0 != 0) {
            StringName::unref();
          }
        }
      }
LAB_001013a6:
      pSVar4 = (StringName *)__dynamic_cast(pOVar3,&Object::typeinfo,&CSGTorus3D::typeinfo,0);
      if (pSVar4 != (StringName *)0x0) {
        if (param_5) {
          if (param_2 == 0) {
            fVar8 = Variant::operator_cast_to_float(param_4);
            if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
              CSGTorus3D::set_inner_radius(fVar8);
              return;
            }
          }
          else {
            fVar8 = Variant::operator_cast_to_float(param_4);
            if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
              CSGTorus3D::set_outer_radius(fVar8);
              return;
            }
          }
        }
        else {
          pOVar3 = (Object *)EditorUndoRedoManager::get_singleton();
          local_b8 = 0;
          if (param_2 == 0) {
            String::parse_latin1((String *)&local_b8,"");
            local_c0 = 0;
            String::parse_latin1((String *)&local_c0,"Change Torus Inner Radius");
            TTR((String *)&local_b0,(String *)&local_c0);
            EditorUndoRedoManager::create_action(pOVar3,(String *)&local_b0,0,0,0);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
            fVar8 = (float)CSGTorus3D::get_inner_radius();
            StringName::StringName((StringName *)&local_b0,"set_inner_radius",false);
            Variant::Variant((Variant *)local_78,fVar8);
            local_60 = 0;
            local_58 = (undefined1  [16])0x0;
            local_98[0] = (Variant *)local_78;
            EditorUndoRedoManager::add_do_methodp
                      (pOVar3,pSVar4,(Variant **)&local_b0,(int)(Variant *)local_98);
            if (Variant::needs_deinit[(int)local_60] != '\0') {
              Variant::_clear_internal();
            }
            if (Variant::needs_deinit[local_78[0]] != '\0') {
              Variant::_clear_internal();
            }
            if ((StringName::configured != '\0') && (local_b0 != 0)) {
              StringName::unref();
            }
            Variant::Variant((Variant *)local_98,param_4);
            pcVar7 = "set_inner_radius";
          }
          else {
            String::parse_latin1((String *)&local_b8,"");
            local_c0 = 0;
            String::parse_latin1((String *)&local_c0,"Change Torus Outer Radius");
            TTR((String *)&local_b0,(String *)&local_c0);
            EditorUndoRedoManager::create_action(pOVar3,(String *)&local_b0,0,0,0);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
            fVar8 = (float)CSGTorus3D::get_outer_radius();
            StringName::StringName((StringName *)&local_b0,"set_outer_radius",false);
            Variant::Variant((Variant *)local_78,fVar8);
            local_60 = 0;
            local_58 = (undefined1  [16])0x0;
            local_98[0] = (Variant *)local_78;
            EditorUndoRedoManager::add_do_methodp
                      (pOVar3,pSVar4,(Variant **)&local_b0,(int)(Variant *)local_98);
            if (Variant::needs_deinit[(int)local_60] != '\0') {
              Variant::_clear_internal();
            }
            if (Variant::needs_deinit[local_78[0]] != '\0') {
              Variant::_clear_internal();
            }
            if ((StringName::configured != '\0') && (local_b0 != 0)) {
              StringName::unref();
            }
            Variant::Variant((Variant *)local_98,param_4);
            pcVar7 = "set_outer_radius";
          }
          StringName::StringName((StringName *)&local_b0,pcVar7,false);
          Variant::Variant((Variant *)local_78,(Variant *)local_98);
          local_60 = 0;
          local_58 = (undefined1  [16])0x0;
          local_a8[0] = (Variant *)local_78;
          EditorUndoRedoManager::add_undo_methodp(pOVar3,pSVar4,(Variant **)&local_b0,(int)local_a8)
          ;
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
          if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
            EditorUndoRedoManager::commit_action(SUB81(pOVar3,0));
            return;
          }
        }
        goto LAB_00101918;
      }
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00101918:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CSGShapeEditor::CSGShapeEditor() */

void __thiscall CSGShapeEditor::CSGShapeEditor(CSGShapeEditor *this)

{
  String *pSVar1;
  code *pcVar2;
  MenuButton *this_00;
  undefined8 uVar3;
  long *plVar4;
  CallableCustom *this_01;
  AcceptDialog *this_02;
  long in_FS_OFFSET;
  undefined8 local_68;
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Control::Control((Control *)this);
  *(undefined8 *)(this + 0x9d8) = 0;
  *(undefined ***)this = &PTR__initialize_classv_0010b1e0;
  *(undefined1 (*) [16])(this + 0x9c8) = (undefined1  [16])0x0;
  this_00 = (MenuButton *)operator_new(0xc68,"");
  local_58 = (char *)0x0;
  MenuButton::MenuButton(this_00,(String *)&local_58);
  postinitialize_handler((Object *)this_00);
  *(MenuButton **)(this + 0x9d0) = this_00;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  CanvasItem::hide();
  local_58 = "";
  local_60 = 0;
  pSVar1 = *(String **)(this + 0x9d0);
  local_50 = 0;
  String::parse_latin1((StrRange *)&local_60);
  local_58 = "CSG";
  local_68 = 0;
  local_50 = 3;
  String::parse_latin1((StrRange *)&local_68);
  TTR((String *)&local_58,(String *)&local_68);
  Button::set_text(pSVar1);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  MenuButton::set_switch_on_hover(SUB81(*(undefined8 *)(this + 0x9d0),0));
  Node3DEditor::add_control_to_menu_panel(Node3DEditor::singleton);
  uVar3 = MenuButton::get_popup();
  local_58 = "";
  local_60 = 0;
  local_50 = 0;
  String::parse_latin1((StrRange *)&local_60);
  local_58 = "Bake Mesh Instance";
  local_68 = 0;
  local_50 = 0x12;
  String::parse_latin1((StrRange *)&local_68);
  TTR((String *)&local_58,(String *)&local_68);
  PopupMenu::add_item(uVar3,(CowData<char32_t> *)&local_58,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  uVar3 = MenuButton::get_popup();
  local_58 = "";
  local_60 = 0;
  local_50 = 0;
  String::parse_latin1((StrRange *)&local_60);
  local_58 = "Bake Collision Shape";
  local_68 = 0;
  local_50 = 0x14;
  String::parse_latin1((StrRange *)&local_68);
  TTR((String *)&local_58,(String *)&local_68);
  PopupMenu::add_item(uVar3,(CowData<char32_t> *)&local_58,1,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  plVar4 = (long *)MenuButton::get_popup();
  pcVar2 = *(code **)(*plVar4 + 0x108);
  this_01 = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(this_01);
  *(undefined **)(this_01 + 0x20) = &_LC19;
  *(undefined1 (*) [16])(this_01 + 0x30) = (undefined1  [16])0x0;
  *(undefined ***)this_01 = &PTR_hash_0010bbb8;
  *(undefined8 *)(this_01 + 0x40) = 0;
  uVar3 = *(undefined8 *)(this + 0x60);
  *(undefined8 *)(this_01 + 0x10) = 0;
  *(undefined8 *)(this_01 + 0x30) = uVar3;
  *(code **)(this_01 + 0x38) = _menu_option;
  *(CSGShapeEditor **)(this_01 + 0x28) = this;
  CallableCustomMethodPointerBase::_setup((uint *)this_01,(int)this_01 + 0x28);
  *(char **)(this_01 + 0x20) = "CSGShapeEditor::_menu_option";
  Callable::Callable((Callable *)&local_58,this_01);
  (*pcVar2)(plVar4,SceneStringNames::singleton + 0x240,(CowData<char32_t> *)&local_58,0);
  Callable::~Callable((Callable *)&local_58);
  this_02 = (AcceptDialog *)operator_new(0xdb0,"");
  AcceptDialog::AcceptDialog(this_02);
  postinitialize_handler((Object *)this_02);
  *(AcceptDialog **)(this + 0x9d8) = this_02;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    Node::add_child(this,this_02,0,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CSGShapeEditor::_create_baked_mesh_instance() */

void __thiscall CSGShapeEditor::_create_baked_mesh_instance(CSGShapeEditor *this)

{
  Variant *pVVar1;
  Variant **ppVVar2;
  long lVar3;
  undefined8 uVar4;
  char cVar5;
  long lVar6;
  Object *pOVar7;
  Object *pOVar8;
  MeshInstance3D *this_00;
  Object *pOVar9;
  Variant *pVVar10;
  StringName *pSVar11;
  int iVar12;
  long in_FS_OFFSET;
  Object *local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  Object *local_b8;
  undefined8 local_b0;
  Variant *local_a8;
  Variant *pVStack_a0;
  int local_88 [6];
  int local_70 [2];
  undefined1 local_68 [16];
  undefined8 local_58;
  undefined1 local_50 [16];
  long local_40 [2];
  
  lVar3 = *(long *)(this + 0x9c8);
  local_40[0] = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(this + 0x240) == 0) {
    _err_print_error("get_tree","./scene/main/node.h",0x1e5,"Parameter \"data.tree\" is null.",0,0);
  }
  lVar6 = SceneTree::get_edited_scene_root();
  if (lVar3 == lVar6) {
    uVar4 = *(undefined8 *)(this + 0x9d8);
    local_c0 = 0;
    String::parse_latin1((String *)&local_c0,"");
    local_c8 = 0;
    String::parse_latin1
              ((String *)&local_c8,
               "Can not add a baked mesh as sibling for the scene root.\nMove the CSG root node below a parent node."
              );
    TTR((String *)&local_b8,(String *)&local_c8);
    AcceptDialog::set_text(uVar4,(String *)&local_b8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
    local_88[0] = 0;
    local_88[1] = 0;
    Window::popup_centered(*(Vector2i **)(this + 0x9d8));
  }
  else {
    CSGShape3D::bake_static_mesh();
    if (local_d0 == (Object *)0x0) {
      uVar4 = *(undefined8 *)(this + 0x9d8);
      local_c0 = 0;
      String::parse_latin1((String *)&local_c0,"");
      local_c8 = 0;
      String::parse_latin1((String *)&local_c8,"CSG operation returned an empty mesh.");
      TTR((String *)&local_b8,(String *)&local_c8);
      AcceptDialog::set_text(uVar4,(String *)&local_b8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
      local_88[0] = 0;
      local_88[1] = 0;
      Window::popup_centered(*(Vector2i **)(this + 0x9d8));
    }
    else {
      pOVar7 = (Object *)EditorUndoRedoManager::get_singleton();
      local_c0 = 0;
      local_b0 = 0;
      local_b8 = (Object *)&_LC19;
      String::parse_latin1((StrRange *)&local_c0);
      local_b8 = (Object *)0x106630;
      local_c8 = 0;
      local_b0 = 0x25;
      String::parse_latin1((StrRange *)&local_c8);
      TTR((String *)&local_b8,(String *)&local_c8);
      EditorUndoRedoManager::create_action(pOVar7,(String *)&local_b8,0,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
      if (*(long *)(this + 0x240) == 0) {
        _err_print_error("get_tree","./scene/main/node.h",0x1e5,"Parameter \"data.tree\" is null.",0
                         ,0);
      }
      pOVar8 = (Object *)SceneTree::get_edited_scene_root();
      this_00 = (MeshInstance3D *)operator_new(0x6a0,"");
      MeshInstance3D::MeshInstance3D(this_00);
      postinitialize_handler((Object *)this_00);
      local_b8 = (Object *)0x0;
      if (((local_d0 != (Object *)0x0) &&
          (pOVar9 = (Object *)__dynamic_cast(local_d0,&Object::typeinfo,&Mesh::typeinfo,0),
          pOVar9 != (Object *)0x0)) &&
         (local_b8 = pOVar9, cVar5 = RefCounted::reference(), cVar5 == '\0')) {
        local_b8 = (Object *)0x0;
      }
      MeshInstance3D::set_mesh((Ref *)this_00);
      if (((local_b8 != (Object *)0x0) &&
          (cVar5 = RefCounted::unreference(), pOVar9 = local_b8, cVar5 != '\0')) &&
         (cVar5 = predelete_handler(local_b8), cVar5 != '\0')) {
        (**(code **)(*(long *)pOVar9 + 0x140))(pOVar9);
        Memory::free_static(pOVar9,false);
      }
      local_c0 = 0;
      local_b8 = (Object *)0x10535e;
      local_b0 = 0x16;
      String::parse_latin1((StrRange *)&local_c0);
      Node::set_name((String *)this_00);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
      Node3D::get_transform();
      Node3D::set_transform((Transform3D *)this_00);
      StringName::StringName((StringName *)&local_b8,"add_sibling",false);
      pSVar11 = *(StringName **)(this + 0x9c8);
      Variant::Variant((Variant *)local_88,(Object *)this_00);
      Variant::Variant((Variant *)local_70,true);
      local_50 = (undefined1  [16])0x0;
      local_58 = 0;
      iVar12 = (int)&local_a8;
      local_a8 = (Variant *)local_88;
      pVStack_a0 = (Variant *)local_70;
      EditorUndoRedoManager::add_do_methodp(pOVar7,pSVar11,(Variant **)&local_b8,iVar12);
      pVVar10 = (Variant *)local_40;
      do {
        pVVar1 = pVVar10 + -0x18;
        pVVar10 = pVVar10 + -0x18;
        if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
          Variant::_clear_internal();
        }
      } while (pVVar10 != (Variant *)local_88);
      if ((StringName::configured != '\0') && (local_b8 != (Object *)0x0)) {
        StringName::unref();
      }
      StringName::StringName((StringName *)&local_b8,"set_owner",false);
      Variant::Variant((Variant *)local_88,pOVar8);
      local_70[0] = 0;
      local_70[1] = 0;
      local_68 = (undefined1  [16])0x0;
      local_a8 = (Variant *)local_88;
      EditorUndoRedoManager::add_do_methodp
                (pOVar7,(StringName *)this_00,(Variant **)&local_b8,iVar12);
      if (Variant::needs_deinit[local_70[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[local_88[0]] != '\0') {
        Variant::_clear_internal();
      }
      if ((StringName::configured != '\0') && (local_b8 != (Object *)0x0)) {
        StringName::unref();
      }
      pSVar11 = Node3DEditor::singleton;
      ppVVar2 = (Variant **)(SceneStringNames::singleton + 0x188);
      Variant::Variant((Variant *)local_88,(Object *)this_00);
      local_70[0] = 0;
      local_70[1] = 0;
      local_68 = (undefined1  [16])0x0;
      local_a8 = (Variant *)local_88;
      EditorUndoRedoManager::add_do_methodp(pOVar7,pSVar11,ppVVar2,iVar12);
      if (Variant::needs_deinit[local_70[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[local_88[0]] != '\0') {
        Variant::_clear_internal();
      }
      EditorUndoRedoManager::add_do_reference(pOVar7);
      StringName::StringName((StringName *)&local_b8,"remove_child",false);
      pSVar11 = (StringName *)Node::get_parent();
      Variant::Variant((Variant *)local_88,(Object *)this_00);
      local_70[0] = 0;
      local_70[1] = 0;
      local_68 = (undefined1  [16])0x0;
      local_a8 = (Variant *)local_88;
      EditorUndoRedoManager::add_undo_methodp(pOVar7,pSVar11,(Variant **)&local_b8,iVar12);
      if (Variant::needs_deinit[local_70[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[local_88[0]] != '\0') {
        Variant::_clear_internal();
      }
      if ((StringName::configured != '\0') && (local_b8 != (Object *)0x0)) {
        StringName::unref();
      }
      EditorUndoRedoManager::commit_action(SUB81(pOVar7,0));
      if (((local_d0 != (Object *)0x0) && (cVar5 = RefCounted::unreference(), cVar5 != '\0')) &&
         (cVar5 = predelete_handler(local_d0), cVar5 != '\0')) {
        (**(code **)(*(long *)local_d0 + 0x140))(local_d0);
        Memory::free_static(local_d0,false);
      }
    }
  }
  if (local_40[0] != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* CSGShapeEditor::_create_baked_collision_shape() */

void __thiscall CSGShapeEditor::_create_baked_collision_shape(CSGShapeEditor *this)

{
  Variant *pVVar1;
  Variant **ppVVar2;
  long lVar3;
  undefined8 uVar4;
  char cVar5;
  long lVar6;
  Object *pOVar7;
  Object *pOVar8;
  CollisionShape3D *this_00;
  Variant *pVVar9;
  StringName *pSVar10;
  int iVar11;
  long in_FS_OFFSET;
  Object *local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  Object *local_b8;
  undefined8 local_b0;
  Variant *local_a8;
  Variant *pVStack_a0;
  undefined8 local_88 [3];
  undefined8 local_70;
  undefined1 local_68 [16];
  undefined8 local_58;
  undefined1 local_50 [16];
  long local_40 [2];
  
  lVar3 = *(long *)(this + 0x9c8);
  local_40[0] = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(this + 0x240) == 0) {
    _err_print_error("get_tree","./scene/main/node.h",0x1e5,"Parameter \"data.tree\" is null.",0,0);
  }
  lVar6 = SceneTree::get_edited_scene_root();
  if (lVar3 == lVar6) {
    uVar4 = *(undefined8 *)(this + 0x9d8);
    local_c0 = 0;
    String::parse_latin1((String *)&local_c0,"");
    local_c8 = 0;
    String::parse_latin1
              ((String *)&local_c8,
               "Can not add a baked collision shape as sibling for the scene root.\nMove the CSG root node below a parent node."
              );
    TTR((String *)&local_b8,(String *)&local_c8);
    AcceptDialog::set_text(uVar4,(String *)&local_b8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
    local_88[0] = 0;
    Window::popup_centered(*(Vector2i **)(this + 0x9d8));
    goto LAB_001028f3;
  }
  CSGShape3D::bake_collision_shape();
  local_d0 = (Object *)0x0;
  if (local_b8 == (Object *)0x0) {
LAB_00102a40:
    uVar4 = *(undefined8 *)(this + 0x9d8);
    local_c0 = 0;
    String::parse_latin1((String *)&local_c0,"");
    local_c8 = 0;
    String::parse_latin1((String *)&local_c8,"CSG operation returned an empty shape.");
    TTR((String *)&local_b8,(String *)&local_c8);
    AcceptDialog::set_text(uVar4,(String *)&local_b8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
    local_88[0] = 0;
    Window::popup_centered(*(Vector2i **)(this + 0x9d8));
  }
  else {
    pOVar7 = (Object *)__dynamic_cast(local_b8,&Object::typeinfo,&Shape3D::typeinfo,0);
    if (pOVar7 == (Object *)0x0) {
LAB_001024f0:
      cVar5 = RefCounted::unreference();
      pOVar7 = local_b8;
      if ((cVar5 != '\0') && (cVar5 = predelete_handler(local_b8), cVar5 != '\0')) {
        (**(code **)(*(long *)pOVar7 + 0x140))(pOVar7);
        Memory::free_static(pOVar7,false);
      }
    }
    else {
      cVar5 = RefCounted::reference();
      local_d0 = pOVar7;
      if (cVar5 == '\0') {
        local_d0 = (Object *)0x0;
      }
      if (local_b8 != (Object *)0x0) goto LAB_001024f0;
    }
    if (local_d0 == (Object *)0x0) goto LAB_00102a40;
    pOVar7 = (Object *)EditorUndoRedoManager::get_singleton();
    local_c0 = 0;
    local_b8 = (Object *)&_LC19;
    local_b0 = 0;
    String::parse_latin1((StrRange *)&local_c0);
    local_b8 = (Object *)0x1066f0;
    local_c8 = 0;
    local_b0 = 0x27;
    String::parse_latin1((StrRange *)&local_c8);
    TTR((String *)&local_b8,(String *)&local_c8);
    EditorUndoRedoManager::create_action(pOVar7,(String *)&local_b8,0,0,0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
    if (*(long *)(this + 0x240) == 0) {
      _err_print_error("get_tree","./scene/main/node.h",0x1e5,"Parameter \"data.tree\" is null.",0,0
                      );
    }
    pOVar8 = (Object *)SceneTree::get_edited_scene_root();
    this_00 = (CollisionShape3D *)operator_new(0x558,"");
    CollisionShape3D::CollisionShape3D(this_00);
    postinitialize_handler((Object *)this_00);
    CollisionShape3D::set_shape((Ref *)this_00);
    local_b8 = (Object *)0x105398;
    local_c0 = 0;
    local_b0 = 0x18;
    String::parse_latin1((StrRange *)&local_c0);
    Node::set_name((String *)this_00);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
    Node3D::get_transform();
    Node3D::set_transform((Transform3D *)this_00);
    StringName::StringName((StringName *)&local_b8,"add_sibling",false);
    pSVar10 = *(StringName **)(this + 0x9c8);
    Variant::Variant((Variant *)local_88,(Object *)this_00);
    Variant::Variant((Variant *)&local_70,true);
    local_50 = (undefined1  [16])0x0;
    local_58 = 0;
    iVar11 = (int)&local_a8;
    local_a8 = (Variant *)local_88;
    pVStack_a0 = (Variant *)&local_70;
    EditorUndoRedoManager::add_do_methodp(pOVar7,pSVar10,(Variant **)&local_b8,iVar11);
    pVVar9 = (Variant *)local_40;
    do {
      pVVar1 = pVVar9 + -0x18;
      pVVar9 = pVVar9 + -0x18;
      if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
        Variant::_clear_internal();
      }
    } while (pVVar9 != (Variant *)local_88);
    if ((StringName::configured != '\0') && (local_b8 != (Object *)0x0)) {
      StringName::unref();
    }
    StringName::StringName((StringName *)&local_b8,"set_owner",false);
    Variant::Variant((Variant *)local_88,pOVar8);
    local_70 = 0;
    local_68 = (undefined1  [16])0x0;
    local_a8 = (Variant *)local_88;
    EditorUndoRedoManager::add_do_methodp(pOVar7,(StringName *)this_00,(Variant **)&local_b8,iVar11)
    ;
    if (Variant::needs_deinit[(int)local_70] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[(int)local_88[0]] != '\0') {
      Variant::_clear_internal();
    }
    if ((StringName::configured != '\0') && (local_b8 != (Object *)0x0)) {
      StringName::unref();
    }
    pSVar10 = Node3DEditor::singleton;
    ppVVar2 = (Variant **)(SceneStringNames::singleton + 0x188);
    Variant::Variant((Variant *)local_88,(Object *)this_00);
    local_70 = 0;
    local_68 = (undefined1  [16])0x0;
    local_a8 = (Variant *)local_88;
    EditorUndoRedoManager::add_do_methodp(pOVar7,pSVar10,ppVVar2,iVar11);
    if (Variant::needs_deinit[(int)local_70] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[(int)local_88[0]] != '\0') {
      Variant::_clear_internal();
    }
    EditorUndoRedoManager::add_do_reference(pOVar7);
    StringName::StringName((StringName *)&local_b8,"remove_child",false);
    pSVar10 = (StringName *)Node::get_parent();
    Variant::Variant((Variant *)local_88,(Object *)this_00);
    local_70 = 0;
    local_68 = (undefined1  [16])0x0;
    local_a8 = (Variant *)local_88;
    EditorUndoRedoManager::add_undo_methodp(pOVar7,pSVar10,(Variant **)&local_b8,iVar11);
    if (Variant::needs_deinit[(int)local_70] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[(int)local_88[0]] != '\0') {
      Variant::_clear_internal();
    }
    if ((StringName::configured != '\0') && (local_b8 != (Object *)0x0)) {
      StringName::unref();
    }
    EditorUndoRedoManager::commit_action(SUB81(pOVar7,0));
  }
  if (((local_d0 != (Object *)0x0) && (cVar5 = RefCounted::unreference(), cVar5 != '\0')) &&
     (cVar5 = predelete_handler(local_d0), cVar5 != '\0')) {
    (**(code **)(*(long *)local_d0 + 0x140))(local_d0);
    Memory::free_static(local_d0,false);
  }
LAB_001028f3:
  if (local_40[0] == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CSGShapeEditor::_menu_option(int) */

void __thiscall CSGShapeEditor::_menu_option(CSGShapeEditor *this,int param_1)

{
  undefined8 uVar1;
  char cVar2;
  long in_FS_OFFSET;
  Array local_70 [8];
  undefined8 local_68;
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  CSGShape3D::get_meshes();
  cVar2 = Array::is_empty();
  if (cVar2 == '\0') {
    if (param_1 == 0) {
      _create_baked_mesh_instance(this);
    }
    else if (param_1 == 1) {
      _create_baked_collision_shape(this);
    }
    Array::~Array(local_70);
  }
  else {
    uVar1 = *(undefined8 *)(this + 0x9d8);
    local_60 = 0;
    local_58 = "";
    local_50 = 0;
    String::parse_latin1((StrRange *)&local_60);
    local_58 = "CSG operation returned an empty array.";
    local_68 = 0;
    local_50 = 0x26;
    String::parse_latin1((StrRange *)&local_68);
    TTR((String *)&local_58,(String *)&local_68);
    AcceptDialog::set_text(uVar1,(String *)&local_58);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    local_48 = 0;
    Window::popup_centered(*(Vector2i **)(this + 0x9d8));
    Array::~Array(local_70);
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



/* CSGShape3DGizmoPlugin::CSGShape3DGizmoPlugin() */

void __thiscall CSGShape3DGizmoPlugin::CSGShape3DGizmoPlugin(CSGShape3DGizmoPlugin *this)

{
  char cVar1;
  RefCounted *this_00;
  long lVar2;
  bool bVar3;
  RefCounted *pRVar4;
  Object *pOVar5;
  Object *pOVar6;
  long in_FS_OFFSET;
  byte bVar7;
  undefined1 auVar8 [16];
  undefined8 in_XMM1_Qa;
  undefined8 local_78;
  Object *local_70;
  char *local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  int local_48 [6];
  long local_30;
  
  uStack_4c = (undefined4)((ulong)in_XMM1_Qa >> 0x20);
  bVar7 = 0;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  EditorNode3DGizmoPlugin::EditorNode3DGizmoPlugin((EditorNode3DGizmoPlugin *)this);
  *(undefined8 *)(this + 0x450) = 0;
  *(undefined ***)this = &PTR__initialize_classv_0010b6a8;
  this_00 = (RefCounted *)operator_new(0x1c8,"");
  pRVar4 = this_00;
  for (lVar2 = 0x39; lVar2 != 0; lVar2 = lVar2 + -1) {
    *(undefined8 *)pRVar4 = 0;
    pRVar4 = pRVar4 + (ulong)bVar7 * -0x10 + 8;
  }
  RefCounted::RefCounted(this_00);
  *(undefined ***)this_00 = &PTR__initialize_classv_0010b548;
  *(undefined4 *)(this_00 + 0x180) = 0;
  *(undefined4 *)(this_00 + 0x1b8) = 0x3f800000;
  *(undefined8 *)(this_00 + 0x1bc) = 0;
  *(undefined4 *)(this_00 + 0x1c4) = 0;
  *(undefined1 (*) [16])(this_00 + 0x188) = (undefined1  [16])0x0;
  auVar8 = ZEXT416(_LC57);
  *(undefined1 (*) [16])(this_00 + 0x198) = auVar8;
  *(undefined1 (*) [16])(this_00 + 0x1a8) = auVar8;
  postinitialize_handler((Object *)this_00);
  cVar1 = RefCounted::init_ref();
  if (cVar1 == '\0') {
    pOVar6 = *(Object **)(this + 0x450);
    if (pOVar6 == (Object *)0x0) goto LAB_00102f88;
    *(undefined8 *)(this + 0x450) = 0;
    cVar1 = RefCounted::unreference();
    if (cVar1 == '\0') goto LAB_00102f88;
    this_00 = (RefCounted *)0x0;
    cVar1 = predelete_handler(pOVar6);
    if (cVar1 == '\0') goto LAB_00102f88;
LAB_00103313:
    (**(code **)(*(long *)pOVar6 + 0x140))(pOVar6);
    Memory::free_static(pOVar6,false);
    pOVar5 = (Object *)this_00;
    if (this_00 == (RefCounted *)0x0) goto LAB_00102f88;
  }
  else {
    pOVar6 = *(Object **)(this + 0x450);
    pOVar5 = pOVar6;
    if (this_00 != (RefCounted *)pOVar6) {
      *(RefCounted **)(this + 0x450) = this_00;
      cVar1 = RefCounted::reference();
      if (cVar1 == '\0') {
        *(undefined8 *)(this + 0x450) = 0;
      }
      pOVar5 = (Object *)this_00;
      if (((pOVar6 != (Object *)0x0) && (cVar1 = RefCounted::unreference(), cVar1 != '\0')) &&
         (cVar1 = predelete_handler(pOVar6), cVar1 != '\0')) goto LAB_00103313;
    }
  }
  cVar1 = RefCounted::unreference();
  if ((cVar1 != '\0') && (cVar1 = predelete_handler(pOVar5), cVar1 != '\0')) {
    (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
    Memory::free_static(pOVar5,false);
  }
LAB_00102f88:
  local_70 = (Object *)0x0;
  local_68 = "editors/3d_gizmos/gizmo_colors/csg";
  local_60 = 0x22;
  String::parse_latin1((StrRange *)&local_70);
  _EDITOR_GET((String *)local_48);
  local_58 = Variant::operator_cast_to_Color((Variant *)local_48);
  if (Variant::needs_deinit[local_48[0]] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  local_68 = "shape_union_material";
  local_70 = (Object *)0x0;
  local_60 = 0x14;
  String::parse_latin1((StrRange *)&local_70);
  bVar3 = SUB81(&local_58,0);
  EditorNode3DGizmoPlugin::create_material((String *)this,(StrRange *)&local_70,bVar3,false,false);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  local_68 = "shape_union_solid_material";
  local_70 = (Object *)0x0;
  local_60 = 0x1a;
  String::parse_latin1((StrRange *)&local_70);
  EditorNode3DGizmoPlugin::create_material((String *)this,(StrRange *)&local_70,bVar3,false,false);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  Color::invert();
  local_68 = "shape_subtraction_material";
  local_70 = (Object *)0x0;
  local_60 = 0x1a;
  String::parse_latin1((StrRange *)&local_70);
  EditorNode3DGizmoPlugin::create_material((String *)this,(StrRange *)&local_70,bVar3,false,false);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  local_68 = "shape_subtraction_solid_material";
  local_70 = (Object *)0x0;
  local_60 = 0x20;
  String::parse_latin1((StrRange *)&local_70);
  EditorNode3DGizmoPlugin::create_material((String *)this,(StrRange *)&local_70,bVar3,false,false);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  _local_50 = CONCAT44(uStack_4c,0x3f733333);
  local_58 = _LC63;
  local_68 = "shape_intersection_material";
  local_70 = (Object *)0x0;
  local_60 = 0x1b;
  String::parse_latin1((StrRange *)&local_70);
  EditorNode3DGizmoPlugin::create_material((String *)this,(StrRange *)&local_70,bVar3,false,false);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  local_68 = "shape_intersection_solid_material";
  local_70 = (Object *)0x0;
  local_60 = 0x21;
  String::parse_latin1((StrRange *)&local_70);
  EditorNode3DGizmoPlugin::create_material((String *)this,(StrRange *)&local_70,bVar3,false,false);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  local_68 = "handles";
  local_70 = (Object *)0x0;
  local_78 = 0;
  local_60 = 7;
  String::parse_latin1((StrRange *)&local_78);
  EditorNode3DGizmoPlugin::create_handle_material((String *)this,SUB81(&local_78,0),(Ref *)0x0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  if (((local_70 != (Object *)0x0) &&
      (cVar1 = RefCounted::unreference(), pOVar6 = local_70, cVar1 != '\0')) &&
     (cVar1 = predelete_handler(local_70), cVar1 != '\0')) {
    (**(code **)(*(long *)pOVar6 + 0x140))(pOVar6);
    Memory::free_static(pOVar6,false);
  }
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* EditorPluginCSG::EditorPluginCSG() */

void __thiscall EditorPluginCSG::EditorPluginCSG(EditorPluginCSG *this)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  char cVar4;
  CSGShape3DGizmoPlugin *this_00;
  CSGShapeEditor *this_01;
  Object *pOVar5;
  long in_FS_OFFSET;
  Object *local_38;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  Node::Node((Node *)this);
  *(code **)this = Node::_bind_methods;
  *(undefined2 *)(this + 0x408) = 0;
  *(undefined1 (*) [16])(this + 0x410) = (undefined1  [16])0x0;
  StringName::StringName((StringName *)(this + 0x420),"_forward_canvas_gui_input",false);
  this[0x428] = (EditorPluginCSG)0x0;
  *(undefined8 *)(this + 0x430) = 0;
  StringName::StringName((StringName *)(this + 0x438),"_forward_canvas_draw_over_viewport",false);
  this[0x440] = (EditorPluginCSG)0x0;
  *(undefined8 *)(this + 0x448) = 0;
  StringName::StringName
            ((StringName *)(this + 0x450),"_forward_canvas_force_draw_over_viewport",false);
  this[0x458] = (EditorPluginCSG)0x0;
  *(undefined8 *)(this + 0x460) = 0;
  StringName::StringName((StringName *)(this + 0x468),"_forward_3d_gui_input",false);
  this[0x470] = (EditorPluginCSG)0x0;
  *(undefined8 *)(this + 0x478) = 0;
  StringName::StringName((StringName *)(this + 0x480),"_forward_3d_draw_over_viewport",false);
  this[0x488] = (EditorPluginCSG)0x0;
  *(undefined8 *)(this + 0x490) = 0;
  StringName::StringName((StringName *)(this + 0x498),"_forward_3d_force_draw_over_viewport",false);
  this[0x4a0] = (EditorPluginCSG)0x0;
  *(undefined8 *)(this + 0x4a8) = 0;
  StringName::StringName((StringName *)(this + 0x4b0),"_get_plugin_name",false);
  this[0x4b8] = (EditorPluginCSG)0x0;
  *(undefined8 *)(this + 0x4c0) = 0;
  StringName::StringName((StringName *)(this + 0x4c8),"_get_plugin_icon",false);
  this[0x4d0] = (EditorPluginCSG)0x0;
  *(undefined8 *)(this + 0x4d8) = 0;
  StringName::StringName((StringName *)(this + 0x4e0),"_has_main_screen",false);
  this[0x4e8] = (EditorPluginCSG)0x0;
  *(undefined8 *)(this + 0x4f0) = 0;
  StringName::StringName((StringName *)(this + 0x4f8),"_make_visible",false);
  this[0x500] = (EditorPluginCSG)0x0;
  *(undefined8 *)(this + 0x508) = 0;
  StringName::StringName((StringName *)(this + 0x510),"_edit",false);
  this[0x518] = (EditorPluginCSG)0x0;
  *(undefined8 *)(this + 0x520) = 0;
  StringName::StringName((StringName *)(this + 0x528),"_handles",false);
  this[0x530] = (EditorPluginCSG)0x0;
  *(undefined8 *)(this + 0x538) = 0;
  StringName::StringName((StringName *)(this + 0x540),"_get_state",false);
  this[0x548] = (EditorPluginCSG)0x0;
  *(undefined8 *)(this + 0x550) = 0;
  StringName::StringName((StringName *)(this + 0x558),"_set_state",false);
  this[0x560] = (EditorPluginCSG)0x0;
  *(undefined8 *)(this + 0x568) = 0;
  StringName::StringName((StringName *)(this + 0x570),"_clear",false);
  this[0x578] = (EditorPluginCSG)0x0;
  *(undefined8 *)(this + 0x580) = 0;
  StringName::StringName((StringName *)(this + 0x588),"_get_unsaved_status",false);
  this[0x590] = (EditorPluginCSG)0x0;
  *(undefined8 *)(this + 0x598) = 0;
  StringName::StringName((StringName *)(this + 0x5a0),"_save_external_data",false);
  this[0x5a8] = (EditorPluginCSG)0x0;
  *(undefined8 *)(this + 0x5b0) = 0;
  StringName::StringName((StringName *)(this + 0x5b8),"_apply_changes",false);
  this[0x5c0] = (EditorPluginCSG)0x0;
  *(undefined8 *)(this + 0x5c8) = 0;
  StringName::StringName((StringName *)(this + 0x5d0),"_get_breakpoints",false);
  this[0x5d8] = (EditorPluginCSG)0x0;
  *(undefined8 *)(this + 0x5e0) = 0;
  StringName::StringName((StringName *)(this + 0x5e8),"_set_window_layout",false);
  this[0x5f0] = (EditorPluginCSG)0x0;
  *(undefined8 *)(this + 0x5f8) = 0;
  StringName::StringName((StringName *)(this + 0x600),"_get_window_layout",false);
  this[0x608] = (EditorPluginCSG)0x0;
  *(undefined8 *)(this + 0x610) = 0;
  StringName::StringName((StringName *)(this + 0x618),"_build",false);
  this[0x620] = (EditorPluginCSG)0x0;
  *(undefined8 *)(this + 0x628) = 0;
  StringName::StringName((StringName *)(this + 0x630),"_enable_plugin",false);
  this[0x638] = (EditorPluginCSG)0x0;
  *(undefined8 *)(this + 0x640) = 0;
  StringName::StringName((StringName *)(this + 0x648),"_disable_plugin",false);
  this[0x650] = (EditorPluginCSG)0x0;
  *(undefined ***)this = &PTR__initialize_classv_0010b910;
  *(undefined1 (*) [16])(this + 0x658) = (undefined1  [16])0x0;
  this_00 = (CSGShape3DGizmoPlugin *)operator_new(0x458,"");
  CSGShape3DGizmoPlugin::CSGShape3DGizmoPlugin(this_00);
  postinitialize_handler((Object *)this_00);
  cVar4 = RefCounted::init_ref();
  uVar2 = Node3DEditor::singleton;
  local_38 = (Object *)0x0;
  if (cVar4 == '\0') {
    this_00 = (CSGShape3DGizmoPlugin *)0x0;
  }
  else {
    pOVar5 = (Object *)
             __dynamic_cast(this_00,&Object::typeinfo,&EditorNode3DGizmoPlugin::typeinfo,0);
    if (pOVar5 != (Object *)0x0) {
      cVar4 = RefCounted::reference();
      local_38 = pOVar5;
      if (cVar4 == '\0') {
        local_38 = (Object *)0x0;
      }
    }
  }
  Node3DEditor::add_gizmo_plugin(uVar2);
  if (local_38 != (Object *)0x0) {
    cVar4 = RefCounted::unreference();
    if (cVar4 != '\0') {
      cVar4 = predelete_handler(local_38);
      if (cVar4 != '\0') {
        (**(code **)(*(long *)local_38 + 0x140))(local_38);
        Memory::free_static(local_38,false);
      }
    }
  }
  this_01 = (CSGShapeEditor *)operator_new(0x9e0,"");
  CSGShapeEditor::CSGShapeEditor(this_01);
  postinitialize_handler((Object *)this_01);
  lVar3 = EditorNode::singleton;
  *(CSGShapeEditor **)(this + 0x660) = this_01;
  Node::add_child(*(undefined8 *)(lVar3 + 0x6c8),this_01,0,0);
  if (this_00 != (CSGShape3DGizmoPlugin *)0x0) {
    cVar4 = RefCounted::unreference();
    if (cVar4 != '\0') {
      cVar4 = predelete_handler((Object *)this_00);
      if (cVar4 != '\0') {
        (**(code **)(*(long *)this_00 + 0x140))(this_00);
        if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
          Memory::free_static(this_00,false);
          return;
        }
        goto LAB_001038f8;
      }
    }
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_001038f8:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CowData<Vector3>::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<Vector3>::_copy_on_write(CowData<Vector3> *this)

{
  long lVar1;
  code *pcVar2;
  undefined8 *puVar3;
  size_t __n;
  ulong uVar4;
  
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
  __n = lVar1 * 0xc;
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



/* CSGShape3DGizmoPlugin::redraw(EditorNode3DGizmo*) */

void __thiscall
CSGShape3DGizmoPlugin::redraw(CSGShape3DGizmoPlugin *this,EditorNode3DGizmo *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  code *pcVar3;
  Object *pOVar4;
  Ref *pRVar5;
  char cVar6;
  uint uVar7;
  int iVar8;
  long *plVar9;
  ulong uVar10;
  long lVar11;
  Variant *pVVar12;
  bool bVar13;
  ulong uVar14;
  ulong uVar15;
  undefined8 *puVar16;
  char *pcVar17;
  long in_FS_OFFSET;
  float fVar18;
  float fVar19;
  undefined1 auVar20 [12];
  String *local_128;
  ArrayMesh *local_110;
  Object *local_e8;
  Object *local_e0;
  ArrayMesh *local_d8;
  Array local_d0 [8];
  Object *local_c8;
  undefined8 local_c0;
  Vector local_b8 [8];
  long local_b0;
  Ref local_a8 [8];
  long local_a0;
  long local_98;
  undefined8 local_90;
  Ref *local_88;
  undefined8 local_80;
  uint local_78;
  uint uStack_74;
  uint uStack_70;
  uint uStack_6c;
  ulong local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined8 local_54;
  undefined4 local_4c;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  (**(code **)(*(long *)param_1 + 0x160))(param_1);
  if (*(long *)(param_1 + 0x1f0) == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  plVar9 = (long *)__dynamic_cast(*(long *)(param_1 + 0x1f0),&Object::typeinfo,&CSGShape3D::typeinfo
                                  ,0);
  (**(code **)(*plVar9 + 0x1f0))(local_b8,plVar9);
  if ((local_b0 == 0) || (*(long *)(local_b0 + -8) == 0)) goto LAB_00103b9f;
  local_a0 = 0;
  CowData<Vector3>::resize<false>((CowData<Vector3> *)&local_a0,*(long *)(local_b0 + -8) * 2);
  for (uVar10 = 0; (local_a0 != 0 && ((long)uVar10 < *(long *)(local_a0 + -8))); uVar10 = uVar10 + 6
      ) {
    uVar7 = 0;
    iVar8 = (int)((uVar10 & 0xffffffff) / 6) * 3;
    puVar16 = (undefined8 *)(local_b0 + (long)iVar8 * 0xc);
    uVar15 = uVar10;
    do {
      uVar7 = uVar7 + 1;
      uVar14 = uVar15;
      if (local_a0 == 0) {
        lVar11 = 0;
LAB_00104179:
        _err_print_index_error
                  ("operator[]","./core/templates/vector.h",0x38,uVar14,lVar11,"p_index",
                   "((Vector<T> *)(this))->_cowdata.size()","",false,true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      lVar11 = *(long *)(local_a0 + -8);
      if (lVar11 <= (long)uVar15) goto LAB_00104179;
      CowData<Vector3>::_copy_on_write((CowData<Vector3> *)&local_a0);
      lVar2 = uVar15 * 0xc;
      *(undefined8 *)(local_a0 + uVar15 * 0xc) = *puVar16;
      *(undefined4 *)(local_a0 + 8 + lVar2) = *(undefined4 *)(puVar16 + 1);
      puVar1 = (undefined8 *)(local_b0 + (long)(int)(iVar8 + uVar7 % 3) * 0xc);
      uVar14 = uVar15 + 1;
      if (local_a0 == 0) {
        lVar11 = 0;
        goto LAB_00104179;
      }
      lVar11 = *(long *)(local_a0 + -8);
      if (lVar11 <= (long)uVar14) goto LAB_00104179;
      uVar15 = uVar15 + 2;
      puVar16 = (undefined8 *)((long)puVar16 + 0xc);
      CowData<Vector3>::_copy_on_write((CowData<Vector3> *)&local_a0);
      *(undefined8 *)(local_a0 + 0xc + lVar2) = *puVar1;
      *(undefined4 *)(local_a0 + 0x14 + lVar2) = *(undefined4 *)(puVar1 + 1);
    } while (uVar7 != 3);
  }
  local_e8 = (Object *)0x0;
  iVar8 = CSGShape3D::get_operation();
  if (iVar8 == 1) {
    local_98 = 0;
    Ref<EditorNode3DGizmo>::operator=((Ref<EditorNode3DGizmo> *)&local_98,param_1);
    pcVar17 = "shape_intersection_material";
LAB_001041f4:
    local_c0 = 0;
    String::parse_latin1((String *)&local_c0,pcVar17);
    EditorNode3DGizmoPlugin::get_material((String *)&local_88,(Ref *)this);
    Ref<Material>::operator=((Ref<Material> *)&local_e8,local_88);
    Ref<StandardMaterial3D>::unref((Ref<StandardMaterial3D> *)&local_88);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
    Ref<EditorNode3DGizmo>::unref((Ref<EditorNode3DGizmo> *)&local_98);
  }
  else {
    if (iVar8 == 2) {
      local_98 = 0;
      Ref<EditorNode3DGizmo>::operator=((Ref<EditorNode3DGizmo> *)&local_98,param_1);
      pcVar17 = "shape_subtraction_material";
      goto LAB_001041f4;
    }
    if (iVar8 == 0) {
      local_98 = 0;
      Ref<EditorNode3DGizmo>::operator=((Ref<EditorNode3DGizmo> *)&local_98,param_1);
      pcVar17 = "shape_union_material";
      goto LAB_001041f4;
    }
  }
  local_128 = (String *)&local_88;
  local_98 = 0;
  local_c0 = 0;
  String::parse_latin1((String *)&local_c0,"handles");
  EditorNode3DGizmoPlugin::get_material(local_128,(Ref *)this);
  local_e0 = (Object *)0x0;
  Ref<Material>::operator=((Ref<Material> *)&local_e0,local_88);
  Ref<StandardMaterial3D>::unref((Ref<StandardMaterial3D> *)local_128);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
  Ref<EditorNode3DGizmo>::unref((Ref<EditorNode3DGizmo> *)&local_98);
  local_78 = _LC57;
  uStack_74 = _LC57;
  uStack_70 = _LC57;
  uStack_6c = _LC57;
  EditorNode3DGizmo::add_lines((Vector *)param_1,local_a8,SUB81(&local_e8,0),(Color *)0x0);
  EditorNode3DGizmo::add_collision_segments((Vector *)param_1);
  cVar6 = CSGShape3D::is_root_shape();
  uVar7 = (uint)(String *)&local_c0;
  if (cVar6 != '\0') {
    CSGShape3D::get_meshes();
    iVar8 = Array::size();
    if (iVar8 == 2) {
      Array::operator[](uVar7);
      local_98 = 0;
      lVar11 = Variant::get_validated_object();
      if ((lVar11 != 0) &&
         (lVar11 = __dynamic_cast(lVar11,&Object::typeinfo,&Mesh::typeinfo,0), lVar11 != 0)) {
        local_98 = lVar11;
        cVar6 = RefCounted::reference();
        if (cVar6 == '\0') {
          local_98 = 0;
        }
        else {
          Mesh::generate_triangle_mesh();
          EditorNode3DGizmo::add_collision_triangles((Ref *)param_1);
          if (((local_88 != (Ref *)0x0) &&
              (cVar6 = RefCounted::unreference(), pRVar5 = local_88, cVar6 != '\0')) &&
             (cVar6 = predelete_handler((Object *)local_88), cVar6 != '\0')) {
            (**(code **)(*(long *)pRVar5 + 0x140))(pRVar5);
            Memory::free_static(pRVar5,false);
          }
        }
      }
      Ref<Mesh>::unref((Ref<Mesh> *)&local_98);
    }
    Array::~Array((Array *)&local_c0);
  }
  if (param_1[0x17c] != (EditorNode3DGizmo)0x0) {
    local_110 = (ArrayMesh *)operator_new(0x430,"");
    ArrayMesh::ArrayMesh(local_110);
    postinitialize_handler((Object *)local_110);
    local_88 = (Ref *)0x0;
    local_d8 = local_110;
    cVar6 = RefCounted::init_ref();
    if (cVar6 == '\0') {
      local_d8 = (ArrayMesh *)0x0;
      local_110 = (ArrayMesh *)0x0;
    }
    Ref<ArrayMesh>::unref((Ref<ArrayMesh> *)local_128);
    Array::Array(local_d0);
    iVar8 = (int)local_d0;
    Array::resize(iVar8);
    Variant::Variant((Variant *)&local_78,local_b8);
    pVVar12 = (Variant *)Array::operator[](iVar8);
    if (pVVar12 == (Variant *)&local_78) {
      if (Variant::needs_deinit[(int)local_78] != '\0') {
        Variant::_clear_internal();
      }
    }
    else {
      if (Variant::needs_deinit[*(int *)pVVar12] != '\0') {
        Variant::_clear_internal();
      }
      *(undefined4 *)pVVar12 = 0;
      *(uint *)pVVar12 = local_78;
      *(ulong *)(pVVar12 + 8) = CONCAT44(uStack_6c,uStack_70);
      *(ulong *)(pVVar12 + 0x10) = local_68;
    }
    Dictionary::Dictionary((Dictionary *)&local_98);
    Array::Array((Array *)&local_c0);
    local_78 = 0;
    uStack_74 = 0;
    uStack_70 = 0;
    uStack_6c = 0;
    local_68 = 0;
    local_88 = (Ref *)0x0;
    Array::set_typed(uVar7,(StringName *)0x1c,(Variant *)local_128);
    if ((StringName::configured != '\0') && (local_88 != (Ref *)0x0)) {
      StringName::unref();
    }
    if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
    }
    ArrayMesh::add_surface_from_arrays
              (local_110,3,local_d0,(String *)&local_c0,(Ref<EditorNode3DGizmo> *)&local_98,0);
    Array::~Array((Array *)&local_c0);
    Dictionary::~Dictionary((Dictionary *)&local_98);
    local_c8 = (Object *)0x0;
    iVar8 = CSGShape3D::get_operation();
    if (iVar8 == 1) {
      local_98 = 0;
      Ref<EditorNode3DGizmo>::operator=((Ref<EditorNode3DGizmo> *)&local_98,param_1);
      pcVar17 = "shape_intersection_solid_material";
LAB_00104694:
      local_c0 = 0;
      String::parse_latin1((String *)&local_c0,pcVar17);
      EditorNode3DGizmoPlugin::get_material(local_128,(Ref *)this);
LAB_00104478:
      Ref<Material>::operator=((Ref<Material> *)&local_c8,local_88);
      Ref<StandardMaterial3D>::unref((Ref<StandardMaterial3D> *)local_128);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
      Ref<EditorNode3DGizmo>::unref((Ref<EditorNode3DGizmo> *)&local_98);
    }
    else {
      if (iVar8 == 2) {
        local_98 = 0;
        Ref<EditorNode3DGizmo>::operator=((Ref<EditorNode3DGizmo> *)&local_98,param_1);
        pcVar17 = "shape_subtraction_solid_material";
        goto LAB_00104694;
      }
      if (iVar8 == 0) {
        local_98 = 0;
        Ref<EditorNode3DGizmo>::operator=((Ref<EditorNode3DGizmo> *)&local_98,param_1);
        local_c0 = 0;
        String::parse_latin1((String *)&local_c0,"shape_union_solid_material");
        EditorNode3DGizmoPlugin::get_material(local_128,(Ref *)this);
        goto LAB_00104478;
      }
    }
    local_88 = (Ref *)0x0;
    local_58 = 0x3f800000;
    local_54 = 0;
    local_4c = 0;
    local_98 = 0;
    local_78 = _LC57;
    uStack_74 = 0;
    uStack_70 = 0;
    uStack_6c = 0;
    local_68 = (ulong)_LC57;
    uStack_60 = 0;
    lVar11 = __dynamic_cast(local_110,&Object::typeinfo,&Mesh::typeinfo,0);
    if ((lVar11 != 0) && (local_98 = lVar11, cVar6 = RefCounted::reference(), cVar6 == '\0')) {
      local_98 = 0;
    }
    EditorNode3DGizmo::add_mesh
              ((Ref *)param_1,(Ref *)&local_98,(Transform3D *)&local_c8,(Ref *)&local_78);
    Ref<Mesh>::unref((Ref<Mesh> *)&local_98);
    if (((local_88 != (Ref *)0x0) &&
        (cVar6 = RefCounted::unreference(), pRVar5 = local_88, cVar6 != '\0')) &&
       (cVar6 = predelete_handler((Object *)local_88), cVar6 != '\0')) {
      (**(code **)(*(long *)pRVar5 + 0x140))(pRVar5);
      Memory::free_static(pRVar5,false);
    }
    if (((local_c8 != (Object *)0x0) &&
        (cVar6 = RefCounted::unreference(), pOVar4 = local_c8, cVar6 != '\0')) &&
       (cVar6 = predelete_handler(local_c8), cVar6 != '\0')) {
      (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
      Memory::free_static(pOVar4,false);
    }
    Array::~Array(local_d0);
    Ref<ArrayMesh>::unref((Ref<ArrayMesh> *)&local_d8);
  }
  lVar11 = __dynamic_cast(plVar9,&Object::typeinfo,&CSGSphere3D::typeinfo,0);
  bVar13 = SUB81(local_128,0);
  if (lVar11 != 0) {
    local_78 = CSGSphere3D::get_radius();
    uStack_74 = 0;
    uStack_70 = 0;
    local_90 = 0;
    Vector<Vector3>::push_back(local_78,0,(Ref<EditorNode3DGizmo> *)&local_98);
    local_80 = 0;
    EditorNode3DGizmo::add_handles
              ((Vector *)param_1,(Ref *)&local_98,(Vector *)&local_e0,bVar13,false);
    CowData<int>::_unref((CowData<int> *)&local_80);
    CowData<Vector3>::_unref((CowData<Vector3> *)&local_90);
  }
  lVar11 = __dynamic_cast(plVar9,&Object::typeinfo,&CSGBox3D::typeinfo,0);
  if (lVar11 != 0) {
    auVar20 = CSGBox3D::get_size();
    uStack_70 = auVar20._8_4_;
    local_78 = auVar20._0_4_;
    uStack_74 = auVar20._4_4_;
    Gizmo3DHelper::box_get_handles((Ref<EditorNode3DGizmo> *)&local_98);
    local_80 = 0;
    EditorNode3DGizmo::add_handles
              ((Vector *)param_1,(Ref *)&local_98,(Vector *)&local_e0,bVar13,false);
    CowData<int>::_unref((CowData<int> *)&local_80);
    CowData<Vector3>::_unref((CowData<Vector3> *)&local_90);
  }
  lVar11 = __dynamic_cast(plVar9,&Object::typeinfo,&CSGCylinder3D::typeinfo,0);
  if (lVar11 != 0) {
    fVar18 = (float)CSGCylinder3D::get_radius();
    fVar19 = (float)CSGCylinder3D::get_height();
    Gizmo3DHelper::cylinder_get_handles(fVar19,fVar18);
    local_80 = 0;
    EditorNode3DGizmo::add_handles
              ((Vector *)param_1,(Ref *)&local_98,(Vector *)&local_e0,bVar13,false);
    CowData<int>::_unref((CowData<int> *)&local_80);
    CowData<Vector3>::_unref((CowData<Vector3> *)&local_90);
  }
  lVar11 = __dynamic_cast(plVar9,&Object::typeinfo,&CSGTorus3D::typeinfo,0);
  if (lVar11 != 0) {
    local_90 = 0;
    local_78 = CSGTorus3D::get_inner_radius();
    uStack_74 = 0;
    uStack_70 = 0;
    Vector<Vector3>::push_back(local_78,0,(Ref<EditorNode3DGizmo> *)&local_98);
    local_78 = CSGTorus3D::get_outer_radius();
    uStack_74 = 0;
    uStack_70 = 0;
    Vector<Vector3>::push_back(local_78,0,(Ref<EditorNode3DGizmo> *)&local_98);
    local_80 = 0;
    EditorNode3DGizmo::add_handles
              ((Vector *)param_1,(Ref *)&local_98,(Vector *)&local_e0,bVar13,false);
    CowData<int>::_unref((CowData<int> *)&local_80);
    CowData<Vector3>::_unref((CowData<Vector3> *)&local_90);
  }
  if (((local_e0 != (Object *)0x0) &&
      (cVar6 = RefCounted::unreference(), pOVar4 = local_e0, cVar6 != '\0')) &&
     (cVar6 = predelete_handler(local_e0), cVar6 != '\0')) {
    (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
    Memory::free_static(pOVar4,false);
  }
  if (((local_e8 != (Object *)0x0) &&
      (cVar6 = RefCounted::unreference(), pOVar4 = local_e8, cVar6 != '\0')) &&
     (cVar6 = predelete_handler(local_e8), cVar6 != '\0')) {
    (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
    Memory::free_static(pOVar4,false);
  }
  CowData<Vector3>::_unref((CowData<Vector3> *)&local_a0);
LAB_00103b9f:
  CowData<Vector3>::_unref((CowData<Vector3> *)&local_b0);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
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
  return (uint)CONCAT71(0x10bd,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10bd,(undefined4 *)param_1 == &get_class_ptr_static()::ptr);
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



/* CSGShape3DGizmoPlugin::is_class_ptr(void*) const */

uint __thiscall CSGShape3DGizmoPlugin::is_class_ptr(CSGShape3DGizmoPlugin *this,void *param_1)

{
  return (uint)CONCAT71(0x10bd,(undefined4 *)param_1 ==
                               &EditorNode3DGizmoPlugin::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10bd,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10bd,(undefined4 *)param_1 == &Resource::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10bd,(undefined4 *)param_1 == &RefCounted::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10bd,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* CSGShape3DGizmoPlugin::_getv(StringName const&, Variant&) const */

undefined8 CSGShape3DGizmoPlugin::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* CSGShape3DGizmoPlugin::_setv(StringName const&, Variant const&) */

undefined8 CSGShape3DGizmoPlugin::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* CSGShape3DGizmoPlugin::_validate_propertyv(PropertyInfo&) const */

void CSGShape3DGizmoPlugin::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* CSGShape3DGizmoPlugin::_property_can_revertv(StringName const&) const */

undefined8 CSGShape3DGizmoPlugin::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* CSGShape3DGizmoPlugin::_property_get_revertv(StringName const&, Variant&) const */

undefined8 CSGShape3DGizmoPlugin::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* CSGShape3DGizmoPlugin::_notificationv(int, bool) */

void CSGShape3DGizmoPlugin::_notificationv(int param_1,bool param_2)

{
  return;
}



/* CSGShapeEditor::is_class_ptr(void*) const */

uint __thiscall CSGShapeEditor::is_class_ptr(CSGShapeEditor *this,void *param_1)

{
  return (uint)CONCAT71(0x10bd,(undefined4 *)param_1 == &Control::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10bd,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10bd,(undefined4 *)param_1 == &CanvasItem::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10bd,(undefined4 *)param_1 == &Node::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10bd,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* EditorPluginCSG::is_class_ptr(void*) const */

uint __thiscall EditorPluginCSG::is_class_ptr(EditorPluginCSG *this,void *param_1)

{
  return (uint)CONCAT71(0x10bd,(undefined4 *)param_1 == &EditorPlugin::get_class_ptr_static()::ptr)
         | (uint)CONCAT71(0x10bd,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10bd,(undefined4 *)param_1 == &Node::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10bd,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* EditorPluginCSG::_getv(StringName const&, Variant&) const */

undefined8 EditorPluginCSG::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* EditorPluginCSG::_setv(StringName const&, Variant const&) */

undefined8 EditorPluginCSG::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* EditorPluginCSG::_property_can_revertv(StringName const&) const */

undefined8 EditorPluginCSG::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* EditorPluginCSG::_property_get_revertv(StringName const&, Variant&) const */

undefined8 EditorPluginCSG::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* Gizmo3DHelper::is_class_ptr(void*) const */

uint __thiscall Gizmo3DHelper::is_class_ptr(Gizmo3DHelper *this,void *param_1)

{
  return (uint)CONCAT71(0x10bd,(undefined4 *)param_1 == &RefCounted::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10bc,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10bd,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* Gizmo3DHelper::_getv(StringName const&, Variant&) const */

undefined8 Gizmo3DHelper::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* Gizmo3DHelper::_setv(StringName const&, Variant const&) */

undefined8 Gizmo3DHelper::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* Gizmo3DHelper::_validate_propertyv(PropertyInfo&) const */

void Gizmo3DHelper::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* Gizmo3DHelper::_property_can_revertv(StringName const&) const */

undefined8 Gizmo3DHelper::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* Gizmo3DHelper::_property_get_revertv(StringName const&, Variant&) const */

undefined8 Gizmo3DHelper::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* Gizmo3DHelper::_notificationv(int, bool) */

void Gizmo3DHelper::_notificationv(int param_1,bool param_2)

{
  return;
}



/* CallableCustomMethodPointer<CSGShapeEditor, void, int>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<CSGShapeEditor,void,int>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<CSGShapeEditor,void,int> *this)

{
  return;
}



/* CallableCustomMethodPointer<CSGShapeEditor, void, int>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<CSGShapeEditor,void,int>::get_argument_count
          (CallableCustomMethodPointer<CSGShapeEditor,void,int> *this,bool *param_1)

{
  *param_1 = true;
  return 1;
}



/* CallableCustomMethodPointerBase::get_method() const */

void CallableCustomMethodPointerBase::get_method(void)

{
  long in_RSI;
  StringName *in_RDI;
  
  StringName::StringName(in_RDI,*(char **)(in_RSI + 0x20),false);
  return;
}



/* CallableCustomMethodPointer<CSGShapeEditor, void, int>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<CSGShapeEditor,void,int>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<CSGShapeEditor,void,int> *this)

{
  operator_delete(this,0x48);
  return;
}



/* RefCounted::~RefCounted() */

void __thiscall RefCounted::~RefCounted(RefCounted *this)

{
  *(undefined ***)this = &PTR__initialize_classv_0010b080;
  Object::~Object((Object *)this);
  return;
}



/* RefCounted::~RefCounted() */

void __thiscall RefCounted::~RefCounted(RefCounted *this)

{
  *(undefined ***)this = &PTR__initialize_classv_0010b080;
  Object::~Object((Object *)this);
  operator_delete(this,0x180);
  return;
}



/* Gizmo3DHelper::~Gizmo3DHelper() */

void __thiscall Gizmo3DHelper::~Gizmo3DHelper(Gizmo3DHelper *this)

{
  *(undefined ***)this = &PTR__initialize_classv_0010b548;
  if (Variant::needs_deinit[*(int *)(this + 0x180)] != '\0') {
    Variant::_clear_internal();
  }
  *(undefined ***)this = &PTR__initialize_classv_0010b080;
  Object::~Object((Object *)this);
  return;
}



/* CSGShapeEditor::~CSGShapeEditor() */

void __thiscall CSGShapeEditor::~CSGShapeEditor(CSGShapeEditor *this)

{
  *(undefined ***)this = &PTR__initialize_classv_0010b1e0;
  Control::~Control((Control *)this);
  return;
}



/* CSGShapeEditor::~CSGShapeEditor() */

void __thiscall CSGShapeEditor::~CSGShapeEditor(CSGShapeEditor *this)

{
  *(undefined ***)this = &PTR__initialize_classv_0010b1e0;
  Control::~Control((Control *)this);
  operator_delete(this,0x9e0);
  return;
}



/* CSGShapeEditor::_property_get_revertv(StringName const&, Variant&) const */

undefined8 CSGShapeEditor::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)_GLOBAL_OFFSET_TABLE_ != Object::_property_get_revert) {
    uVar1 = Control::_property_get_revert(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* CSGShapeEditor::_property_can_revertv(StringName const&) const */

undefined8 CSGShapeEditor::_property_can_revertv(StringName *param_1)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_can_revert_0010f008 != Object::_property_can_revert) {
    uVar1 = Control::_property_can_revert(param_1);
    return uVar1;
  }
  return 0;
}



/* EditorPluginCSG::_validate_propertyv(PropertyInfo&) const */

void EditorPluginCSG::_validate_propertyv(PropertyInfo *param_1)

{
  if ((code *)PTR__validate_property_0010f010 != Object::_validate_property) {
    Node::_validate_property(param_1);
    return;
  }
  return;
}



/* CallableCustomMethodPointer<CSGShapeEditor, void, int>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<CSGShapeEditor,void,int>::get_object
          (CallableCustomMethodPointer<CSGShapeEditor,void,int> *this)

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
      goto LAB_00104f2d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_00104f2d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_00104f2d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CSGShapeEditor::_validate_propertyv(PropertyInfo&) const */

void CSGShapeEditor::_validate_propertyv(PropertyInfo *param_1)

{
  Node::_validate_property(param_1);
  CanvasItem::_validate_property(param_1);
  if ((code *)PTR__validate_property_0010f018 == CanvasItem::_validate_property) {
    return;
  }
  Control::_validate_property(param_1);
  return;
}



/* CSGShapeEditor::_setv(StringName const&, Variant const&) */

undefined8 CSGShapeEditor::_setv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  uVar1 = CanvasItem::_set(param_1,param_2);
  if ((char)uVar1 == '\0') {
    if ((code *)PTR__set_0010f020 != CanvasItem::_set) {
      uVar1 = Control::_set(param_1,param_2);
      return uVar1;
    }
    uVar1 = 0;
  }
  return uVar1;
}



/* WARNING: Removing unreachable block (ram,0x001050e8) */
/* CSGShapeEditor::_getv(StringName const&, Variant&) const */

undefined8 CSGShapeEditor::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if (((code *)PTR__get_0010f028 != CanvasItem::_get) &&
     (uVar1 = Control::_get(param_1,param_2), (char)uVar1 != '\0')) {
    return uVar1;
  }
  uVar1 = CanvasItem::_get(param_1,param_2);
  return uVar1;
}



/* EditorPluginCSG::_notificationv(int, bool) */

void __thiscall EditorPluginCSG::_notificationv(EditorPluginCSG *this,int param_1,bool param_2)

{
  int iVar1;
  
  iVar1 = (int)this;
  if (param_2) {
    if ((code *)PTR__notification_0010f030 != Node::_notification) {
      EditorPlugin::_notification(iVar1);
    }
    Node::_notification(iVar1);
    return;
  }
  Node::_notification(iVar1);
  if ((code *)PTR__notification_0010f030 == Node::_notification) {
    return;
  }
  EditorPlugin::_notification(iVar1);
  return;
}



/* Gizmo3DHelper::~Gizmo3DHelper() */

void __thiscall Gizmo3DHelper::~Gizmo3DHelper(Gizmo3DHelper *this)

{
  *(undefined ***)this = &PTR__initialize_classv_0010b548;
  if (Variant::needs_deinit[*(int *)(this + 0x180)] != '\0') {
    Variant::_clear_internal();
  }
  *(undefined ***)this = &PTR__initialize_classv_0010b080;
  Object::~Object((Object *)this);
  operator_delete(this,0x1c8);
  return;
}



/* CSGShapeEditor::_notificationv(int, bool) */

void __thiscall CSGShapeEditor::_notificationv(CSGShapeEditor *this,int param_1,bool param_2)

{
  int iVar1;
  
  iVar1 = (int)this;
  if (param_2) {
    if (param_1 == 0x2d) {
      _notification(iVar1);
    }
    if ((code *)PTR__notification_0010f038 != CanvasItem::_notification) {
      Control::_notification(iVar1);
    }
    CanvasItem::_notification(iVar1);
    Node::_notification(iVar1);
    return;
  }
  Node::_notification(iVar1);
  CanvasItem::_notification(iVar1);
  if ((code *)PTR__notification_0010f038 != CanvasItem::_notification) {
    Control::_notification(iVar1);
  }
  if (param_1 != 0x2d) {
    return;
  }
  _notification(iVar1);
  return;
}



/* Gizmo3DHelper::_get_class_namev() const */

undefined8 * Gizmo3DHelper::_get_class_namev(void)

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
LAB_00105713:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00105713;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"Gizmo3DHelper");
      goto LAB_0010577e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"Gizmo3DHelper");
LAB_0010577e:
  return &_get_class_namev()::_class_name_static;
}



/* EditorPluginCSG::_get_class_namev() const */

undefined8 * EditorPluginCSG::_get_class_namev(void)

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
LAB_00105803:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00105803;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"EditorPluginCSG");
      goto LAB_0010586e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"EditorPluginCSG");
LAB_0010586e:
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
LAB_001058e3:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_001058e3;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"RefCounted");
      goto LAB_0010594e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"RefCounted");
LAB_0010594e:
  return &_get_class_namev()::_class_name_static;
}



/* CSGShapeEditor::_get_class_namev() const */

undefined8 * CSGShapeEditor::_get_class_namev(void)

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
LAB_001059d3:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_001059d3;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"CSGShapeEditor");
      goto LAB_00105a3e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"CSGShapeEditor");
LAB_00105a3e:
  return &_get_class_namev()::_class_name_static;
}



/* CSGShape3DGizmoPlugin::_get_class_namev() const */

undefined8 * CSGShape3DGizmoPlugin::_get_class_namev(void)

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
LAB_00105ac3:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00105ac3;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"CSGShape3DGizmoPlugin");
      goto LAB_00105b2e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"CSGShape3DGizmoPlugin");
LAB_00105b2e:
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



/* EditorPluginCSG::get_plugin_name() const */

EditorPluginCSG * __thiscall EditorPluginCSG::get_plugin_name(EditorPluginCSG *this)

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



/* EditorPlugin::~EditorPlugin() */

void __thiscall EditorPlugin::~EditorPlugin(EditorPlugin *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(code **)this = Node::_bind_methods;
  if (bVar1) {
    if (*(long *)(this + 0x648) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010608a;
    }
    if (*(long *)(this + 0x630) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010608a;
    }
    if (*(long *)(this + 0x618) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010608a;
    }
    if (*(long *)(this + 0x600) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010608a;
    }
    if (*(long *)(this + 0x5e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010608a;
    }
    if (*(long *)(this + 0x5d0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010608a;
    }
    if (*(long *)(this + 0x5b8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010608a;
    }
    if (*(long *)(this + 0x5a0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010608a;
    }
    if (*(long *)(this + 0x588) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010608a;
    }
    if (*(long *)(this + 0x570) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010608a;
    }
    if (*(long *)(this + 0x558) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010608a;
    }
    if (*(long *)(this + 0x540) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010608a;
    }
    if (*(long *)(this + 0x528) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010608a;
    }
    if (*(long *)(this + 0x510) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010608a;
    }
    if (*(long *)(this + 0x4f8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010608a;
    }
    if (*(long *)(this + 0x4e0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010608a;
    }
    if (*(long *)(this + 0x4c8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010608a;
    }
    if (*(long *)(this + 0x4b0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010608a;
    }
    if (*(long *)(this + 0x498) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010608a;
    }
    if (*(long *)(this + 0x480) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010608a;
    }
    if (*(long *)(this + 0x468) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010608a;
    }
    if (*(long *)(this + 0x450) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010608a;
    }
    if (*(long *)(this + 0x438) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010608a;
    }
    if (*(long *)(this + 0x420) != 0) {
      StringName::unref();
    }
  }
LAB_0010608a:
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



/* EditorPluginCSG::~EditorPluginCSG() */

void __thiscall EditorPluginCSG::~EditorPluginCSG(EditorPluginCSG *this)

{
  *(undefined ***)this = &PTR__initialize_classv_0010b910;
  EditorPlugin::~EditorPlugin((EditorPlugin *)this);
  return;
}



/* EditorPluginCSG::~EditorPluginCSG() */

void __thiscall EditorPluginCSG::~EditorPluginCSG(EditorPluginCSG *this)

{
  *(undefined ***)this = &PTR__initialize_classv_0010b910;
  EditorPlugin::~EditorPlugin((EditorPlugin *)this);
  operator_delete(this,0x668);
  return;
}



/* CSGShapeEditor::_initialize_classv() */

void CSGShapeEditor::_initialize_classv(void)

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
    if (Control::initialize_class()::initialized == '\0') {
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
          if ((code *)PTR__bind_methods_0010f050 != Node::_bind_methods) {
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
        if ((code *)PTR__bind_compatibility_methods_0010f040 != Object::_bind_compatibility_methods)
        {
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
      if ((code *)PTR__bind_methods_0010f048 != CanvasItem::_bind_methods) {
        Control::_bind_methods();
      }
      Control::initialize_class()::initialized = '\x01';
    }
    local_58 = "Control";
    local_68 = 0;
    local_50 = 7;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "CSGShapeEditor";
    local_70 = 0;
    local_50 = 0xe;
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
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
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



/* EditorPluginCSG::get_class() const */

void EditorPluginCSG::get_class(void)

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



/* CSGShapeEditor::get_class() const */

void CSGShapeEditor::get_class(void)

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



/* Gizmo3DHelper::get_class() const */

void Gizmo3DHelper::get_class(void)

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



/* CSGShape3DGizmoPlugin::get_class() const */

void CSGShape3DGizmoPlugin::get_class(void)

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



/* CallableCustomMethodPointer<CSGShapeEditor, void, int>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<CSGShapeEditor,void,int>::call
          (CallableCustomMethodPointer<CSGShapeEditor,void,int> *this,Variant **param_1,int param_2,
          Variant *param_3,CallError *param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  ulong *puVar7;
  code *UNRECOVERED_JUMPTABLE;
  long in_FS_OFFSET;
  bool bVar8;
  CowData<char32_t> local_50 [8];
  CowData<char32_t> local_48 [8];
  undefined8 local_40;
  String local_38 [8];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar6 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar6 < (uint)ObjectDB::slot_max) {
    while( true ) {
      local_38[0] = (String)0x0;
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
    puVar7 = (ulong *)((ulong)uVar6 * 0x10 + ObjectDB::object_slots);
    if ((*(ulong *)(this + 0x30) >> 0x18 & 0x7fffffffff) != (*puVar7 & 0x7fffffffff)) {
      ObjectDB::spin_lock._0_1_ = '\0';
      goto LAB_00106f38;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar7[1] == 0) goto LAB_00106f38;
    lVar1 = *(long *)(this + 0x28);
    UNRECOVERED_JUMPTABLE = *(code **)(this + 0x38);
    lVar2 = *(long *)(this + 0x40);
    if ((uint)param_2 < 2) {
      if (param_2 != 0) {
        *(undefined4 *)param_4 = 0;
        if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
          UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar1 + lVar2) + -1);
        }
        cVar4 = Variant::can_convert_strict(*(undefined4 *)*param_1,2);
        uVar3 = _LC98;
        if (cVar4 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar3;
        }
        iVar5 = Variant::operator_cast_to_int(*param_1);
        if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00106ee7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),iVar5);
          return;
        }
        goto LAB_00106fe9;
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
LAB_00106f38:
    local_40 = 0;
    String::parse_latin1((String *)&local_40,"\', can\'t call method.");
    uitos((ulong)local_50);
    operator+((char *)local_48,(String *)"Invalid Object id \'");
    String::operator+(local_38,(String *)local_48);
    _err_print_error(&_LC97,"./core/object/callable_method_pointer.h",0x67,
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
LAB_00106fe9:
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
    if ((code *)PTR__bind_methods_0010f058 != Object::_bind_methods) {
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



/* CSGShape3DGizmoPlugin::_initialize_classv() */

void CSGShape3DGizmoPlugin::_initialize_classv(void)

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
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
          if ((StringName::configured != '\0') && (local_60 != 0)) {
            StringName::unref();
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
          if ((code *)PTR__bind_methods_0010f050 != RefCounted::_bind_methods) {
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
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
        if ((StringName::configured != '\0') && (local_60 != 0)) {
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
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
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      if ((StringName::configured != '\0') && (local_60 != 0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      if ((code *)PTR__bind_methods_0010f060 != Resource::_bind_methods) {
        EditorNode3DGizmoPlugin::_bind_methods();
      }
      EditorNode3DGizmoPlugin::initialize_class()::initialized = '\x01';
    }
    local_58 = "EditorNode3DGizmoPlugin";
    local_68 = 0;
    local_50 = 0x17;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "CSGShape3DGizmoPlugin";
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
    initialize_class()::initialized = '\x01';
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Gizmo3DHelper::_initialize_classv() */

void Gizmo3DHelper::_initialize_classv(void)

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
      if ((code *)PTR__bind_methods_0010f058 != Object::_bind_methods) {
        RefCounted::_bind_methods();
      }
      RefCounted::initialize_class()::initialized = '\x01';
    }
    local_48 = "RefCounted";
    local_58 = 0;
    local_40 = 10;
    String::parse_latin1((StrRange *)&local_58);
    StringName::StringName((StringName *)&local_50,(String *)&local_58,false);
    local_48 = "Gizmo3DHelper";
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
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* EditorPluginCSG::_initialize_classv() */

void EditorPluginCSG::_initialize_classv(void)

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
        if ((code *)PTR__bind_methods_0010f050 != Node::_bind_methods) {
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
      if ((code *)PTR__bind_methods_0010f068 != Node::_bind_methods) {
        EditorPlugin::_bind_methods();
      }
      if ((code *)PTR__bind_compatibility_methods_0010f070 != Object::_bind_compatibility_methods) {
        EditorPlugin::_bind_compatibility_methods();
      }
      EditorPlugin::initialize_class()::initialized = '\x01';
    }
    local_58 = "EditorPlugin";
    local_68 = 0;
    local_50 = 0xc;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "EditorPluginCSG";
    local_70 = 0;
    local_50 = 0xf;
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
            CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar5 + 0x38));
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
        if (pvVar5 == (void *)0x0) goto LAB_00107c46;
      }
    }
    Memory::free_static(pvVar5,false);
    Memory::free_static(*(void **)(this + 0x20),false);
  }
LAB_00107c46:
  CowData<char32_t>::_unref((CowData<char32_t> *)this);
  return;
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
    if (cVar5 != '\0') goto LAB_00107d9b;
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
      if (cVar5 != '\0') goto LAB_00107d9b;
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar6 = String::operator==(param_1,"Object");
      return uVar6;
    }
  }
  else {
LAB_00107d9b:
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
    if (cVar5 != '\0') goto LAB_00107f9b;
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
      if (cVar5 != '\0') goto LAB_00107f9b;
    }
    cVar5 = String::operator==(param_1,"CanvasItem");
    if (cVar5 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar6 = Node::is_class((Node *)this,param_1);
        return uVar6;
      }
      goto LAB_0010809e;
    }
  }
LAB_00107f9b:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0010809e:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CSGShapeEditor::is_class(String const&) const */

undefined8 __thiscall CSGShapeEditor::is_class(CSGShapeEditor *this,String *param_1)

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
    if (cVar4 != '\0') goto LAB_001081ab;
  }
  cVar4 = String::operator==(param_1,"CSGShapeEditor");
  if (cVar4 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar5 = Control::is_class((Control *)this,param_1);
      return uVar5;
    }
  }
  else {
LAB_001081ab:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorPluginCSG::is_class(String const&) const */

undefined8 __thiscall EditorPluginCSG::is_class(EditorPluginCSG *this,String *param_1)

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
    if (cVar5 != '\0') goto LAB_001082fb;
  }
  cVar5 = String::operator==(param_1,"EditorPluginCSG");
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
      if (cVar5 != '\0') goto LAB_001082fb;
    }
    cVar5 = String::operator==(param_1,"EditorPlugin");
    if (cVar5 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar6 = Node::is_class((Node *)this,param_1);
        return uVar6;
      }
      goto LAB_001083fe;
    }
  }
LAB_001082fb:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_001083fe:
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
    if (cVar5 != '\0') goto LAB_0010850b;
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
      if (cVar5 != '\0') goto LAB_0010850b;
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar6 = String::operator==(param_1,"Object");
      return uVar6;
    }
  }
  else {
LAB_0010850b:
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
    if (cVar4 != '\0') goto LAB_0010870b;
  }
  cVar4 = String::operator==(param_1,"Resource");
  if (cVar4 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar5 = RefCounted::is_class((RefCounted *)this,param_1);
      return uVar5;
    }
  }
  else {
LAB_0010870b:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CSGShape3DGizmoPlugin::is_class(String const&) const */

undefined8 __thiscall CSGShape3DGizmoPlugin::is_class(CSGShape3DGizmoPlugin *this,String *param_1)

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
    if (cVar5 != '\0') goto LAB_0010885b;
  }
  cVar5 = String::operator==(param_1,"CSGShape3DGizmoPlugin");
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
      if (cVar5 != '\0') goto LAB_0010885b;
    }
    cVar5 = String::operator==(param_1,"EditorNode3DGizmoPlugin");
    if (cVar5 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar6 = Resource::is_class((Resource *)this,param_1);
        return uVar6;
      }
      goto LAB_0010895e;
    }
  }
LAB_0010885b:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0010895e:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Gizmo3DHelper::is_class(String const&) const */

undefined8 __thiscall Gizmo3DHelper::is_class(Gizmo3DHelper *this,String *param_1)

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
    if (cVar4 != '\0') goto LAB_00108a6b;
  }
  cVar4 = String::operator==(param_1,"Gizmo3DHelper");
  if (cVar4 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar5 = RefCounted::is_class((RefCounted *)this,param_1);
      return uVar5;
    }
  }
  else {
LAB_00108a6b:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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
  local_78 = &_LC21;
  local_88 = 0;
  local_90 = 0;
  local_70 = 4;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = &_LC21;
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
      goto LAB_00108c1c;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00108c1c:
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
      goto LAB_00108e6c;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00108e6c:
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



/* Gizmo3DHelper::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall Gizmo3DHelper::_get_property_listv(Gizmo3DHelper *this,List *param_1,bool param_2)

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
  local_78 = "Gizmo3DHelper";
  local_70 = 0xd;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "Gizmo3DHelper";
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
      goto LAB_001090d1;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_001090d1:
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
  StringName::StringName((StringName *)&local_78,"Gizmo3DHelper",false);
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
      goto LAB_00109381;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00109381:
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



/* Resource::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall Resource::_get_property_listv(Resource *this,List *param_1,bool param_2)

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
      goto LAB_00109631;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00109631:
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



/* EditorNode3DGizmoPlugin::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const
    */

void __thiscall
EditorNode3DGizmoPlugin::_get_property_listv
          (EditorNode3DGizmoPlugin *this,List *param_1,bool param_2)

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
      goto LAB_001098e1;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_001098e1:
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



/* CSGShape3DGizmoPlugin::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall
CSGShape3DGizmoPlugin::_get_property_listv(CSGShape3DGizmoPlugin *this,List *param_1,bool param_2)

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
    EditorNode3DGizmoPlugin::_get_property_listv((EditorNode3DGizmoPlugin *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "CSGShape3DGizmoPlugin";
  local_70 = 0x15;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "CSGShape3DGizmoPlugin";
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
      goto LAB_00109b91;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00109b91:
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
  StringName::StringName((StringName *)&local_78,"CSGShape3DGizmoPlugin",false);
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



/* EditorPluginCSG::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall
EditorPluginCSG::_get_property_listv(EditorPluginCSG *this,List *param_1,bool param_2)

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
  local_78 = "EditorPluginCSG";
  local_70 = 0xf;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "EditorPluginCSG";
  local_98 = 0;
  local_70 = 0xf;
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
      goto LAB_00109e41;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00109e41:
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
  StringName::StringName((StringName *)&local_78,"EditorPluginCSG",false);
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
      goto LAB_0010a0f1;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0010a0f1:
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
  if ((code *)PTR__get_property_list_0010f078 != Object::_get_property_list) {
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
      goto LAB_0010a3c1;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0010a3c1:
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
  if ((code *)PTR__get_property_list_0010f080 != CanvasItem::_get_property_list) {
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



/* CSGShapeEditor::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall CSGShapeEditor::_get_property_listv(CSGShapeEditor *this,List *param_1,bool param_2)

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
  local_78 = "CSGShapeEditor";
  local_70 = 0xe;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "CSGShapeEditor";
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
      goto LAB_0010a691;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0010a691:
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
  StringName::StringName((StringName *)&local_78,"CSGShapeEditor",false);
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



/* Ref<EditorNode3DGizmo>::unref() */

void __thiscall Ref<EditorNode3DGizmo>::unref(Ref<EditorNode3DGizmo> *this)

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



/* Ref<ArrayMesh>::unref() */

void __thiscall Ref<ArrayMesh>::unref(Ref<ArrayMesh> *this)

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



/* Ref<Mesh>::unref() */

void __thiscall Ref<Mesh>::unref(Ref<Mesh> *this)

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



/* Ref<EditorNode3DGizmo>::TEMPNAMEPLACEHOLDERVALUE(EditorNode3DGizmo*) */

void __thiscall
Ref<EditorNode3DGizmo>::operator=(Ref<EditorNode3DGizmo> *this,EditorNode3DGizmo *param_1)

{
  Object *pOVar1;
  char cVar2;
  
  pOVar1 = *(Object **)this;
  if (param_1 != (EditorNode3DGizmo *)pOVar1) {
    *(EditorNode3DGizmo **)this = param_1;
    if (param_1 != (EditorNode3DGizmo *)0x0) {
      cVar2 = RefCounted::init_ref();
      if (cVar2 == '\0') {
        *(undefined8 *)this = 0;
      }
    }
    if (pOVar1 != (Object *)0x0) {
      cVar2 = RefCounted::unreference();
      if (cVar2 != '\0') {
        cVar2 = predelete_handler(pOVar1);
        if (cVar2 != '\0') {
          (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
          Memory::free_static(pOVar1,false);
          return;
        }
      }
    }
  }
  return;
}



/* Ref<StandardMaterial3D>::unref() */

void __thiscall Ref<StandardMaterial3D>::unref(Ref<StandardMaterial3D> *this)

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



/* CowData<Vector3>::_unref() */

void __thiscall CowData<Vector3>::_unref(CowData<Vector3> *this)

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



/* CowData<Vector3>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<Vector3>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CSGShape3DGizmoPlugin::redraw(EditorNode3DGizmo*) [clone .cold] */

void CSGShape3DGizmoPlugin::redraw(EditorNode3DGizmo *param_1)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
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
  code *pcVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  
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
    lVar7 = 0;
    lVar2 = 0;
  }
  else {
    lVar7 = *(long *)(*(long *)this + -8);
    if (param_1 == lVar7) {
      return 0;
    }
    if (param_1 == 0) {
      _unref(this);
      return 0;
    }
    _copy_on_write(this);
    lVar2 = lVar7 * 0xc;
    if (lVar2 != 0) {
      uVar3 = lVar2 - 1U | lVar2 - 1U >> 1;
      uVar3 = uVar3 | uVar3 >> 2;
      uVar3 = uVar3 | uVar3 >> 4;
      uVar3 = uVar3 | uVar3 >> 8;
      uVar3 = uVar3 | uVar3 >> 0x10;
      lVar2 = (uVar3 | uVar3 >> 0x20) + 1;
    }
  }
  if (param_1 * 0xc == 0) {
LAB_0010adb0:
    _err_print_error("resize","./core/templates/cowdata.h",0x16a,
                     "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                     ,0,0);
    return 6;
  }
  uVar3 = param_1 * 0xc - 1;
  uVar3 = uVar3 >> 1 | uVar3;
  uVar3 = uVar3 | uVar3 >> 2;
  uVar3 = uVar3 | uVar3 >> 4;
  uVar3 = uVar3 | uVar3 >> 8;
  uVar3 = uVar3 | uVar3 >> 0x10;
  uVar3 = uVar3 | uVar3 >> 0x20;
  lVar6 = uVar3 + 1;
  if (lVar6 == 0) goto LAB_0010adb0;
  if (param_1 <= lVar7) {
    if ((lVar6 != lVar2) && (uVar5 = _realloc(this,lVar6), (int)uVar5 != 0)) {
      return uVar5;
    }
    if (*(long *)this != 0) {
      *(long *)(*(long *)this + -8) = param_1;
      return 0;
    }
    _DAT_00000000 = 0;
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  if (lVar6 == lVar2) {
LAB_0010ad3c:
    puVar8 = *(undefined8 **)this;
    if (puVar8 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    lVar7 = puVar8[-1];
    if (param_1 <= lVar7) goto LAB_0010acdf;
  }
  else {
    if (lVar7 != 0) {
      uVar5 = _realloc(this,lVar6);
      if ((int)uVar5 != 0) {
        return uVar5;
      }
      goto LAB_0010ad3c;
    }
    puVar4 = (undefined8 *)Memory::alloc_static(uVar3 + 0x11,false);
    if (puVar4 == (undefined8 *)0x0) {
      _err_print_error("resize","./core/templates/cowdata.h",0x171,"Parameter \"mem_new\" is null.",
                       0,0);
      return 6;
    }
    puVar8 = puVar4 + 2;
    *puVar4 = 1;
    puVar4[1] = 0;
    *(undefined8 **)this = puVar8;
    lVar7 = 0;
  }
  memset((void *)((long)puVar8 + lVar7 * 0xc),0,(param_1 - lVar7) * 0xc);
LAB_0010acdf:
  puVar8[-1] = param_1;
  return 0;
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



/* CSGShapeEditor::_node_removed(Node*) */

void CSGShapeEditor::_GLOBAL__sub_I__node_removed(void)

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
  if (MenuButton::base_property_helper != '\0') {
    return;
  }
  MenuButton::base_property_helper = 1;
  MenuButton::base_property_helper._64_8_ = 0;
  MenuButton::base_property_helper._56_8_ = 2;
  MenuButton::base_property_helper._0_16_ = (undefined1  [16])0x0;
  MenuButton::base_property_helper._24_16_ = (undefined1  [16])0x0;
  MenuButton::base_property_helper._40_16_ = (undefined1  [16])0x0;
  __cxa_atexit(PropertyListHelper::~PropertyListHelper,MenuButton::base_property_helper,
               &__dso_handle,uStack_8);
  return;
}



/* WARNING: Control flow encountered bad instruction data */
/* EditorPluginCSG::~EditorPluginCSG() */

void __thiscall EditorPluginCSG::~EditorPluginCSG(EditorPluginCSG *this)

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
/* CSGShapeEditor::~CSGShapeEditor() */

void __thiscall CSGShapeEditor::~CSGShapeEditor(CSGShapeEditor *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* Gizmo3DHelper::~Gizmo3DHelper() */

void __thiscall Gizmo3DHelper::~Gizmo3DHelper(Gizmo3DHelper *this)

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
/* CallableCustomMethodPointer<CSGShapeEditor, void, int>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<CSGShapeEditor,void,int>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<CSGShapeEditor,void,int> *this)

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
/* PropertyListHelper::~PropertyListHelper() */

void __thiscall PropertyListHelper::~PropertyListHelper(PropertyListHelper *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



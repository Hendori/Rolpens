
/* NavigationObstacle3DGizmoPlugin::can_be_hidden() const */

undefined8 NavigationObstacle3DGizmoPlugin::can_be_hidden(void)

{
  return 1;
}



/* NavigationObstacle3DGizmoPlugin::get_priority() const */

undefined8 NavigationObstacle3DGizmoPlugin::get_priority(void)

{
  return 0xffffffff;
}



/* NavigationObstacle3DEditorPlugin::make_visible(bool) */

void __thiscall
NavigationObstacle3DEditorPlugin::make_visible(NavigationObstacle3DEditorPlugin *this,bool param_1)

{
  if (param_1) {
    CanvasItem::show();
    return;
  }
  CanvasItem::hide();
                    /* WARNING: Could not recover jumptable at 0x00100055. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0x220))(this,0);
  return;
}



/* NavigationObstacle3DEditorPlugin::_node_removed(Node*) */

void __thiscall
NavigationObstacle3DEditorPlugin::_node_removed
          (NavigationObstacle3DEditorPlugin *this,Node *param_1)

{
  long *plVar1;
  
  if (*(Node **)(this + 0x668) != param_1) {
    return;
  }
  *(undefined8 *)(this + 0x668) = 0;
  plVar1 = (long *)RenderingServer::get_singleton();
  (**(code **)(*plVar1 + 0x3a8))(plVar1,*(undefined8 *)(this + 0x680));
  (**(code **)(*plVar1 + 0x3a8))(plVar1,*(undefined8 *)(this + 0x690));
  CanvasItem::hide();
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



/* Geometry2D::get_closest_point_to_segment(Vector2 const&, Vector2 const*) [clone .isra.0] */

void Geometry2D::get_closest_point_to_segment(Vector2 *param_1,Vector2 *param_2)

{
  long in_FS_OFFSET;
  float fVar1;
  undefined8 local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 8) >> 0x20) -
                      (float)((ulong)*(undefined8 *)param_1 >> 0x20),
                      (float)*(undefined8 *)(param_1 + 8) - (float)*(undefined8 *)param_1);
  fVar1 = (float)Vector2::length_squared();
  if (_LC4 <= fVar1) {
    Vector2::dot((Vector2 *)&local_28);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* NavigationObstacle3DEditorPlugin::handles(Object*) const */

bool __thiscall
NavigationObstacle3DEditorPlugin::handles(NavigationObstacle3DEditorPlugin *this,Object *param_1)

{
  long lVar1;
  
  if (param_1 != (Object *)0x0) {
    lVar1 = __dynamic_cast(param_1,&Object::typeinfo,&NavigationObstacle3D::typeinfo,0);
    return lVar1 != 0;
  }
  return false;
}



/* NavigationObstacle3DGizmoPlugin::subgizmos_intersect_ray(EditorNode3DGizmo const*, Camera3D*,
   Vector2 const&) const */

ulong NavigationObstacle3DGizmoPlugin::subgizmos_intersect_ray
                (EditorNode3DGizmo *param_1,Camera3D *param_2,Vector2 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long in_FS_OFFSET;
  float fVar6;
  float extraout_XMM0_Db;
  float fVar7;
  float fVar8;
  undefined1 local_114 [12];
  undefined1 local_108 [16];
  undefined1 local_f8 [16];
  undefined4 local_e8;
  undefined8 local_d8 [6];
  undefined1 local_a8 [48];
  float local_78;
  float fStack_74;
  undefined8 local_70;
  float local_68;
  float fStack_64;
  float local_60;
  float local_5c;
  float local_58;
  undefined8 local_54;
  float local_4c;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(int *)(NavigationObstacle3DEditorPlugin::singleton + 0x6a0) == 1) {
    if ((*(long *)(param_2 + 0x1f0) == 0) ||
       (lVar3 = __dynamic_cast(*(long *)(param_2 + 0x1f0),&Object::typeinfo,
                               &NavigationObstacle3D::typeinfo,0), lVar3 == 0)) {
      _err_print_error("subgizmos_intersect_ray",
                       "editor/plugins/navigation_obstacle_3d_editor_plugin.cpp",0x85,
                       "Parameter \"obstacle_node\" is null.",0,0);
    }
    else {
      Node3D::get_global_basis();
      local_a8._0_12_ = Basis::get_scale();
      local_114 = Node3D::get_global_position();
      local_108 = ZEXT416(_LC6);
      local_e8 = 0x3f800000;
      local_f8 = local_108;
      Basis::scaled((Vector3 *)local_d8);
      Node3D::get_global_rotation();
      Basis::rotated((Vector3 *)local_a8,extraout_XMM0_Db);
      Transform3D::Transform3D((Transform3D *)&local_78,(Basis *)local_a8,(Vector3 *)local_114);
      lVar4 = *(long *)(lVar3 + 0x558);
      if (lVar4 != 0) {
        uVar5 = 0;
        do {
          if (*(long *)(lVar4 + -8) <= (long)uVar5) break;
          puVar1 = (undefined8 *)(lVar4 + uVar5 * 0xc);
          uVar2 = *puVar1;
          fVar6 = *(float *)(puVar1 + 1);
          fVar7 = (float)uVar2;
          fVar8 = (float)((ulong)uVar2 >> 0x20);
          local_a8._8_4_ = local_60 * fVar7 + local_5c * fVar8 + local_58 * fVar6 + local_4c;
          local_a8._0_8_ =
               CONCAT44((float)((ulong)local_70 >> 0x20) * fVar7 + fVar8 * local_68 +
                        fStack_64 * fVar6 + (float)((ulong)local_54 >> 0x20),
                        local_78 * fVar7 + fVar8 * fStack_74 + (float)local_70 * fVar6 +
                        (float)local_54);
          local_d8[0] = (**(code **)(*(long *)param_3 + 0x218))(param_3,(Vector3 *)local_a8);
          fVar6 = (float)Vector2::distance_to((Vector2 *)local_d8);
          if (fVar6 < _LC17) {
            uVar5 = uVar5 & 0xffffffff;
            goto LAB_00100623;
          }
          lVar4 = *(long *)(lVar3 + 0x558);
          uVar5 = uVar5 + 1;
        } while (lVar4 != 0);
      }
    }
  }
  uVar5 = 0xffffffff;
LAB_00100623:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* NavigationObstacle3DGizmoPlugin::get_subgizmo_transform(EditorNode3DGizmo const*, int) const */

EditorNode3DGizmo *
NavigationObstacle3DGizmoPlugin::get_subgizmo_transform(EditorNode3DGizmo *param_1,int param_2)

{
  undefined8 *puVar1;
  float fVar2;
  undefined8 uVar3;
  code *pcVar4;
  long lVar5;
  int in_ECX;
  long in_RDX;
  long lVar6;
  long lVar7;
  long in_FS_OFFSET;
  undefined1 auVar8 [16];
  float fVar9;
  float fVar10;
  undefined8 local_100;
  undefined4 local_f8;
  undefined8 local_f0;
  float local_e8;
  undefined1 local_e4 [8];
  undefined4 local_dc;
  undefined1 local_d8 [16];
  float local_c8;
  float fStack_c4;
  undefined8 local_c0;
  float local_b8;
  float fStack_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  Basis local_98 [16];
  undefined1 local_88 [16];
  undefined4 local_78;
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined8 uStack_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if ((*(long *)(in_RDX + 0x1f0) == 0) ||
     (lVar5 = __dynamic_cast(*(long *)(in_RDX + 0x1f0),&Object::typeinfo,
                             &NavigationObstacle3D::typeinfo,0), lVar5 == 0)) {
    _err_print_error("get_subgizmo_transform",
                     "editor/plugins/navigation_obstacle_3d_editor_plugin.cpp",0xb6,
                     "Parameter \"obstacle_node\" is null.",0,0);
    auVar8 = ZEXT416(_LC6);
    *(undefined4 *)(param_1 + 0x20) = 0x3f800000;
    *(undefined8 *)(param_1 + 0x24) = 0;
    *(undefined4 *)(param_1 + 0x2c) = 0;
    *(undefined1 (*) [16])param_1 = auVar8;
    *(undefined1 (*) [16])(param_1 + 0x10) = auVar8;
    goto LAB_0010090d;
  }
  lVar6 = *(long *)(lVar5 + 0x558);
  lVar7 = (long)in_ECX;
  if (in_ECX < 0) {
    if (lVar6 == 0) goto LAB_00100aa8;
    lVar6 = *(long *)(lVar6 + -8);
  }
  else if (lVar6 == 0) {
LAB_00100aa8:
    lVar6 = 0;
  }
  else {
    lVar6 = *(long *)(lVar6 + -8);
    if (lVar7 < lVar6) {
      Node3D::get_global_basis();
      local_d8._0_12_ = Basis::get_scale();
      local_e8 = _LC11;
      if (_LC11 < ABS(SUB124(local_d8._0_12_,8))) {
        local_e8 = ABS(SUB124(local_d8._0_12_,8));
      }
      fVar2 = _LC11;
      if (_LC11 < ABS(SUB124(local_d8._0_12_,4))) {
        fVar2 = ABS(SUB124(local_d8._0_12_,4));
      }
      fVar9 = ABS(SUB124(local_d8._0_12_,0));
      if (ABS(SUB124(local_d8._0_12_,0)) <= _LC11) {
        fVar9 = _LC11;
      }
      local_f0 = CONCAT44(fVar2,fVar9);
      _local_e4 = Node3D::get_global_rotation();
      local_100 = _LC16;
      local_68 = ZEXT416(_LC6);
      local_58 = ZEXT416(_LC6);
      local_f8 = 0;
      local_48 = 0x3f800000;
      Basis::set_axis_angle_scale((Vector3 *)local_68,(float)local_e4._4_4_,(Vector3 *)&local_100);
      Basis::inverse();
      lVar5 = *(long *)(lVar5 + 0x558);
      if (lVar5 == 0) {
        lVar6 = 0;
      }
      else {
        lVar6 = *(long *)(lVar5 + -8);
        if (lVar7 < lVar6) {
          puVar1 = (undefined8 *)(lVar5 + lVar7 * 0xc);
          uVar3 = *puVar1;
          fVar2 = *(float *)(puVar1 + 1);
          local_78 = 0x3f800000;
          local_98 = (Basis  [16])ZEXT416(_LC6);
          fVar9 = (float)uVar3;
          fVar10 = (float)((ulong)uVar3 >> 0x20);
          local_88 = ZEXT416(_LC6);
          local_d8._8_4_ = local_b0 * fVar9 + local_ac * fVar10 + local_a8 * fVar2;
          local_d8._0_8_ =
               CONCAT44((float)((ulong)local_c0 >> 0x20) * fVar9 + fVar10 * local_b8 +
                        fStack_b4 * fVar2,
                        local_c8 * fVar9 + fVar10 * fStack_c4 + (float)local_c0 * fVar2);
          Transform3D::Transform3D((Transform3D *)local_68,local_98,(Vector3 *)local_d8);
          *(undefined8 *)param_1 = local_68._0_8_;
          *(undefined8 *)(param_1 + 8) = local_68._8_8_;
          *(undefined8 *)(param_1 + 0x10) = local_58._0_8_;
          *(undefined8 *)(param_1 + 0x18) = local_58._8_8_;
          *(ulong *)(param_1 + 0x20) = CONCAT44(uStack_44,local_48);
          *(undefined8 *)(param_1 + 0x28) = uStack_40;
          goto LAB_0010090d;
        }
      }
      _err_print_index_error
                ("get","./core/templates/cowdata.h",0xdb,lVar7,lVar6,"p_index","size()","",false,
                 true);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar4 = (code *)invalidInstructionException();
      (*pcVar4)();
    }
  }
  _err_print_index_error
            ("get_subgizmo_transform","editor/plugins/navigation_obstacle_3d_editor_plugin.cpp",0xb9
             ,lVar7,lVar6,"p_id","vertices.size()","",false,false);
  *(undefined4 *)(param_1 + 0x20) = 0x3f800000;
  auVar8 = ZEXT416(_LC6);
  *(undefined8 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined1 (*) [16])param_1 = auVar8;
  *(undefined1 (*) [16])(param_1 + 0x10) = auVar8;
LAB_0010090d:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* NavigationObstacle3DGizmoPlugin::get_gizmo_name() const */

NavigationObstacle3DGizmoPlugin * __thiscall
NavigationObstacle3DGizmoPlugin::get_gizmo_name(NavigationObstacle3DGizmoPlugin *this)

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



/* CowData<Vector3>::_ref(CowData<Vector3> const&) [clone .part.0] */

void __thiscall CowData<Vector3>::_ref(CowData<Vector3> *this,CowData *param_1)

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



/* NavigationObstacle3DGizmoPlugin::NavigationObstacle3DGizmoPlugin() */

void __thiscall
NavigationObstacle3DGizmoPlugin::NavigationObstacle3DGizmoPlugin
          (NavigationObstacle3DGizmoPlugin *this)

{
  EditorNode3DGizmoPlugin::EditorNode3DGizmoPlugin((EditorNode3DGizmoPlugin *)this);
  *(undefined4 *)(this + 0x240) = 0;
  *(undefined ***)this = &PTR__initialize_classv_001121e8;
  return;
}



/* Resource::initialize_class() [clone .part.0] */

void Resource::initialize_class(void)

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
    if ((code *)PTR__bind_methods_00116008 != RefCounted::_bind_methods) {
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



/* NavigationObstacle3DEditorPlugin::_update_theme() */

void __thiscall
NavigationObstacle3DEditorPlugin::_update_theme(NavigationObstacle3DEditorPlugin *this)

{
  String *pSVar1;
  Ref *pRVar2;
  Object *pOVar3;
  char cVar4;
  int iVar5;
  long in_FS_OFFSET;
  undefined8 local_68;
  undefined8 local_60;
  Object *local_58;
  undefined8 local_50;
  long local_40;
  
  pSVar1 = *(String **)(this + 0x6e0);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_58 = (Object *)&_LC23;
  local_60 = 0;
  local_50 = 0;
  String::parse_latin1((StrRange *)&local_60);
  local_58 = (Object *)0x10959d;
  local_68 = 0;
  local_50 = 10;
  String::parse_latin1((StrRange *)&local_68);
  TTR((String *)&local_58,(String *)&local_68);
  Control::set_tooltip_text(pSVar1);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  local_58 = (Object *)&_LC23;
  local_60 = 0;
  pSVar1 = *(String **)(this + 0x6e8);
  local_50 = 0;
  String::parse_latin1((StrRange *)&local_60);
  local_58 = (Object *)0x1095a8;
  local_68 = 0;
  local_50 = 0xb;
  String::parse_latin1((StrRange *)&local_68);
  TTR((String *)&local_58,(String *)&local_68);
  Control::set_tooltip_text(pSVar1);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  local_58 = (Object *)&_LC23;
  local_60 = 0;
  pSVar1 = *(String **)(this + 0x6f0);
  local_50 = 0;
  String::parse_latin1((StrRange *)&local_60);
  local_58 = (Object *)0x1095b4;
  local_68 = 0;
  local_50 = 0xd;
  String::parse_latin1((StrRange *)&local_68);
  TTR((String *)&local_58,(String *)&local_68);
  Control::set_tooltip_text(pSVar1);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  local_58 = (Object *)&_LC23;
  local_60 = 0;
  pSVar1 = *(String **)(this + 0x6f8);
  local_50 = 0;
  String::parse_latin1((StrRange *)&local_60);
  local_58 = (Object *)0x1095c2;
  local_68 = 0;
  local_50 = 0xc;
  String::parse_latin1((StrRange *)&local_68);
  TTR((String *)&local_58,(String *)&local_68);
  Control::set_tooltip_text(pSVar1);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  local_58 = (Object *)&_LC23;
  local_60 = 0;
  pSVar1 = *(String **)(this + 0x700);
  local_50 = 0;
  String::parse_latin1((StrRange *)&local_60);
  local_58 = (Object *)0x1095cf;
  local_68 = 0;
  local_50 = 0xe;
  String::parse_latin1((StrRange *)&local_68);
  TTR((String *)&local_58,(String *)&local_68);
  Control::set_tooltip_text(pSVar1);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  pRVar2 = *(Ref **)(this + 0x6e0);
  if (_update_theme()::{lambda()#1}::operator()()::sname == '\0') {
    iVar5 = __cxa_guard_acquire(&_update_theme()::{lambda()#1}::operator()()::sname);
    if (iVar5 != 0) {
      _scs_create((char *)&_update_theme()::{lambda()#1}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,&_update_theme()::{lambda()#1}::operator()()::sname,
                   &__dso_handle);
      __cxa_guard_release(&_update_theme()::{lambda()#1}::operator()()::sname);
    }
  }
  Control::get_editor_theme_icon((StringName *)&local_58);
  Button::set_button_icon(pRVar2);
  if (local_58 != (Object *)0x0) {
    cVar4 = RefCounted::unreference();
    pOVar3 = local_58;
    if (cVar4 != '\0') {
      cVar4 = predelete_handler(local_58);
      if (cVar4 != '\0') {
        (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
        Memory::free_static(pOVar3,false);
      }
    }
  }
  pRVar2 = *(Ref **)(this + 0x6e8);
  if (_update_theme()::{lambda()#2}::operator()()::sname == '\0') {
    iVar5 = __cxa_guard_acquire(&_update_theme()::{lambda()#2}::operator()()::sname);
    if (iVar5 != 0) {
      _scs_create((char *)&_update_theme()::{lambda()#2}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,&_update_theme()::{lambda()#2}::operator()()::sname,
                   &__dso_handle);
      __cxa_guard_release(&_update_theme()::{lambda()#2}::operator()()::sname);
    }
  }
  Control::get_editor_theme_icon((StringName *)&local_58);
  Button::set_button_icon(pRVar2);
  if (local_58 != (Object *)0x0) {
    cVar4 = RefCounted::unreference();
    pOVar3 = local_58;
    if (cVar4 != '\0') {
      cVar4 = predelete_handler(local_58);
      if (cVar4 != '\0') {
        (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
        Memory::free_static(pOVar3,false);
      }
    }
  }
  pRVar2 = *(Ref **)(this + 0x6f0);
  if (_update_theme()::{lambda()#3}::operator()()::sname == '\0') {
    iVar5 = __cxa_guard_acquire(&_update_theme()::{lambda()#3}::operator()()::sname);
    if (iVar5 != 0) {
      _scs_create((char *)&_update_theme()::{lambda()#3}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,&_update_theme()::{lambda()#3}::operator()()::sname,
                   &__dso_handle);
      __cxa_guard_release(&_update_theme()::{lambda()#3}::operator()()::sname);
    }
  }
  Control::get_editor_theme_icon((StringName *)&local_58);
  Button::set_button_icon(pRVar2);
  if (local_58 != (Object *)0x0) {
    cVar4 = RefCounted::unreference();
    pOVar3 = local_58;
    if (cVar4 != '\0') {
      cVar4 = predelete_handler(local_58);
      if (cVar4 != '\0') {
        (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
        Memory::free_static(pOVar3,false);
      }
    }
  }
  pRVar2 = *(Ref **)(this + 0x6f8);
  if (_update_theme()::{lambda()#4}::operator()()::sname == '\0') {
    iVar5 = __cxa_guard_acquire(&_update_theme()::{lambda()#4}::operator()()::sname);
    if (iVar5 != 0) {
      _scs_create((char *)&_update_theme()::{lambda()#4}::operator()()::sname,false);
      __cxa_atexit(StringName::~StringName,&_update_theme()::{lambda()#4}::operator()()::sname,
                   &__dso_handle);
      __cxa_guard_release(&_update_theme()::{lambda()#4}::operator()()::sname);
    }
  }
  Control::get_editor_theme_icon((StringName *)&local_58);
  Button::set_button_icon(pRVar2);
  if (local_58 != (Object *)0x0) {
    cVar4 = RefCounted::unreference();
    pOVar3 = local_58;
    if (cVar4 != '\0') {
      cVar4 = predelete_handler(local_58);
      if (cVar4 != '\0') {
        (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
        Memory::free_static(pOVar3,false);
      }
    }
  }
  pRVar2 = *(Ref **)(this + 0x700);
  if (_update_theme()::{lambda()#5}::operator()()::sname == '\0') {
    iVar5 = __cxa_guard_acquire(&_update_theme()::{lambda()#5}::operator()()::sname);
    if (iVar5 != 0) {
      _scs_create((char *)&_update_theme()::{lambda()#5}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,&_update_theme()::{lambda()#5}::operator()()::sname,
                   &__dso_handle);
      __cxa_guard_release(&_update_theme()::{lambda()#5}::operator()()::sname);
    }
  }
  Control::get_editor_theme_icon((StringName *)&local_58);
  Button::set_button_icon(pRVar2);
  if (local_58 != (Object *)0x0) {
    cVar4 = RefCounted::unreference();
    pOVar3 = local_58;
    if (cVar4 != '\0') {
      cVar4 = predelete_handler(local_58);
      if (cVar4 != '\0') {
        (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
        Memory::free_static(pOVar3,false);
      }
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* NavigationObstacle3DEditorPlugin::_notification(int) */

void __thiscall
NavigationObstacle3DEditorPlugin::_notification(NavigationObstacle3DEditorPlugin *this,int param_1)

{
  long *plVar1;
  code *pcVar2;
  long in_FS_OFFSET;
  long local_50;
  NavigationObstacle3DEditorPlugin local_48 [24];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == 0xb) {
    plVar1 = *(long **)(this + 0x240);
    if (plVar1 == (long *)0x0) {
NavigationObstacle3DEditorPlugin__notification:
      _err_print_error("get_tree","./scene/main/node.h",0x1e5,"Parameter \"data.tree\" is null.",0,0
                      );
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    pcVar2 = *(code **)(*plVar1 + 0x110);
    create_custom_callable_function_pointer<NavigationObstacle3DEditorPlugin,Node*>
              (local_48,(char *)this,
               (_func_void_Node_ptr *)"&NavigationObstacle3DEditorPlugin::_node_removed");
    StringName::StringName((StringName *)&local_50,"node_removed",false);
    (*pcVar2)(plVar1,(StringName *)&local_50,local_48);
    if ((StringName::configured != '\0') && (local_50 != 0)) {
      StringName::unref();
    }
    Callable::~Callable((Callable *)local_48);
    plVar1 = *(long **)(EditorNode::singleton + 0x6c8);
    pcVar2 = *(code **)(*plVar1 + 0x110);
    create_custom_callable_function_pointer<NavigationObstacle3DEditorPlugin>
              (local_48,(char *)this,
               (_func_void *)"&NavigationObstacle3DEditorPlugin::_update_theme");
    (*pcVar2)(plVar1,SceneStringNames::singleton + 0x210,local_48);
    Callable::~Callable((Callable *)local_48);
  }
  else if (param_1 == 0xd) {
    _update_theme(this);
    BaseButton::set_pressed(SUB81(*(undefined8 *)(this + 0x6e8),0));
    plVar1 = *(long **)(this + 0x240);
    if (plVar1 == (long *)0x0) goto NavigationObstacle3DEditorPlugin__notification;
    pcVar2 = *(code **)(*plVar1 + 0x108);
    create_custom_callable_function_pointer<NavigationObstacle3DEditorPlugin,Node*>
              (local_48,(char *)this,
               (_func_void_Node_ptr *)"&NavigationObstacle3DEditorPlugin::_node_removed");
    StringName::StringName((StringName *)&local_50,"node_removed",false);
    (*pcVar2)(plVar1,(StringName *)&local_50,local_48,0);
    if ((StringName::configured != '\0') && (local_50 != 0)) {
      StringName::unref();
    }
    Callable::~Callable((Callable *)local_48);
    plVar1 = *(long **)(EditorNode::singleton + 0x6c8);
    pcVar2 = *(code **)(*plVar1 + 0x108);
    create_custom_callable_function_pointer<NavigationObstacle3DEditorPlugin>
              (local_48,(char *)this,
               (_func_void *)"&NavigationObstacle3DEditorPlugin::_update_theme");
    (*pcVar2)(plVar1,SceneStringNames::singleton + 0x210,local_48,0);
    Callable::~Callable((Callable *)local_48);
  }
  else if (param_1 == 10) {
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      _update_theme(this);
      return;
    }
    goto LAB_00101918;
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00101918:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NavigationObstacle3DEditorPlugin::NavigationObstacle3DEditorPlugin() */

void __thiscall
NavigationObstacle3DEditorPlugin::NavigationObstacle3DEditorPlugin
          (NavigationObstacle3DEditorPlugin *this)

{
  long lVar1;
  code *pcVar2;
  String *pSVar3;
  Control *pCVar4;
  char cVar5;
  int iVar6;
  BaseMaterial3D *pBVar7;
  long *plVar8;
  undefined8 uVar9;
  BoxContainer *this_00;
  ButtonGroup *this_01;
  Button *pBVar10;
  ConfirmationDialog *this_02;
  EditorNode3DGizmoPlugin *this_03;
  Object *pOVar11;
  Object *pOVar12;
  long in_FS_OFFSET;
  Object *local_90;
  Object *local_88;
  undefined8 local_80;
  undefined8 local_78 [2];
  Object *local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Node::Node((Node *)this);
  *(code **)this = RefCounted::_bind_methods;
  *(undefined2 *)(this + 0x408) = 0;
  *(undefined1 (*) [16])(this + 0x410) = (undefined1  [16])0x0;
  StringName::StringName((StringName *)(this + 0x420),"_forward_canvas_gui_input",false);
  this[0x428] = (NavigationObstacle3DEditorPlugin)0x0;
  *(undefined8 *)(this + 0x430) = 0;
  StringName::StringName((StringName *)(this + 0x438),"_forward_canvas_draw_over_viewport",false);
  this[0x440] = (NavigationObstacle3DEditorPlugin)0x0;
  *(undefined8 *)(this + 0x448) = 0;
  StringName::StringName
            ((StringName *)(this + 0x450),"_forward_canvas_force_draw_over_viewport",false);
  this[0x458] = (NavigationObstacle3DEditorPlugin)0x0;
  *(undefined8 *)(this + 0x460) = 0;
  StringName::StringName((StringName *)(this + 0x468),"_forward_3d_gui_input",false);
  this[0x470] = (NavigationObstacle3DEditorPlugin)0x0;
  *(undefined8 *)(this + 0x478) = 0;
  StringName::StringName((StringName *)(this + 0x480),"_forward_3d_draw_over_viewport",false);
  this[0x488] = (NavigationObstacle3DEditorPlugin)0x0;
  *(undefined8 *)(this + 0x490) = 0;
  StringName::StringName((StringName *)(this + 0x498),"_forward_3d_force_draw_over_viewport",false);
  this[0x4a0] = (NavigationObstacle3DEditorPlugin)0x0;
  *(undefined8 *)(this + 0x4a8) = 0;
  StringName::StringName((StringName *)(this + 0x4b0),"_get_plugin_name",false);
  this[0x4b8] = (NavigationObstacle3DEditorPlugin)0x0;
  *(undefined8 *)(this + 0x4c0) = 0;
  StringName::StringName((StringName *)(this + 0x4c8),"_get_plugin_icon",false);
  this[0x4d0] = (NavigationObstacle3DEditorPlugin)0x0;
  *(undefined8 *)(this + 0x4d8) = 0;
  StringName::StringName((StringName *)(this + 0x4e0),"_has_main_screen",false);
  this[0x4e8] = (NavigationObstacle3DEditorPlugin)0x0;
  *(undefined8 *)(this + 0x4f0) = 0;
  StringName::StringName((StringName *)(this + 0x4f8),"_make_visible",false);
  this[0x500] = (NavigationObstacle3DEditorPlugin)0x0;
  *(undefined8 *)(this + 0x508) = 0;
  StringName::StringName((StringName *)(this + 0x510),"_edit",false);
  this[0x518] = (NavigationObstacle3DEditorPlugin)0x0;
  *(undefined8 *)(this + 0x520) = 0;
  StringName::StringName((StringName *)(this + 0x528),"_handles",false);
  this[0x530] = (NavigationObstacle3DEditorPlugin)0x0;
  *(undefined8 *)(this + 0x538) = 0;
  StringName::StringName((StringName *)(this + 0x540),"_get_state",false);
  this[0x548] = (NavigationObstacle3DEditorPlugin)0x0;
  *(undefined8 *)(this + 0x550) = 0;
  StringName::StringName((StringName *)(this + 0x558),"_set_state",false);
  this[0x560] = (NavigationObstacle3DEditorPlugin)0x0;
  *(undefined8 *)(this + 0x568) = 0;
  StringName::StringName((StringName *)(this + 0x570),"_clear",false);
  this[0x578] = (NavigationObstacle3DEditorPlugin)0x0;
  *(undefined8 *)(this + 0x580) = 0;
  StringName::StringName((StringName *)(this + 0x588),"_get_unsaved_status",false);
  this[0x590] = (NavigationObstacle3DEditorPlugin)0x0;
  *(undefined8 *)(this + 0x598) = 0;
  StringName::StringName((StringName *)(this + 0x5a0),"_save_external_data",false);
  this[0x5a8] = (NavigationObstacle3DEditorPlugin)0x0;
  *(undefined8 *)(this + 0x5b0) = 0;
  StringName::StringName((StringName *)(this + 0x5b8),"_apply_changes",false);
  this[0x5c0] = (NavigationObstacle3DEditorPlugin)0x0;
  *(undefined8 *)(this + 0x5c8) = 0;
  StringName::StringName((StringName *)(this + 0x5d0),"_get_breakpoints",false);
  this[0x5d8] = (NavigationObstacle3DEditorPlugin)0x0;
  *(undefined8 *)(this + 0x5e0) = 0;
  StringName::StringName((StringName *)(this + 0x5e8),"_set_window_layout",false);
  this[0x5f0] = (NavigationObstacle3DEditorPlugin)0x0;
  *(undefined8 *)(this + 0x5f8) = 0;
  StringName::StringName((StringName *)(this + 0x600),"_get_window_layout",false);
  this[0x608] = (NavigationObstacle3DEditorPlugin)0x0;
  *(undefined8 *)(this + 0x610) = 0;
  StringName::StringName((StringName *)(this + 0x618),"_build",false);
  this[0x620] = (NavigationObstacle3DEditorPlugin)0x0;
  *(undefined8 *)(this + 0x628) = 0;
  StringName::StringName((StringName *)(this + 0x630),"_enable_plugin",false);
  this[0x638] = (NavigationObstacle3DEditorPlugin)0x0;
  *(undefined8 *)(this + 0x640) = 0;
  StringName::StringName((StringName *)(this + 0x648),"_disable_plugin",false);
  *(undefined2 *)(this + 0x6d8) = 0;
  this[0x650] = (NavigationObstacle3DEditorPlugin)0x0;
  *(undefined ***)this = &PTR__initialize_classv_00112450;
  *(undefined8 *)(this + 0x678) = 0;
  *(undefined8 *)(this + 0x6a0) = 1;
  *(undefined8 *)(this + 0x6a8) = 0;
  *(undefined4 *)(this + 0x6b0) = 0;
  *(undefined8 *)(this + 0x6c0) = 0;
  *(undefined8 *)(this + 0x6d0) = 0;
  *(undefined8 *)(this + 0x710) = 0;
  *(undefined1 (*) [16])(this + 0x658) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x668) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x680) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x690) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x6e0) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x6f0) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x700) = (undefined1  [16])0x0;
  singleton = this;
  pBVar7 = (BaseMaterial3D *)operator_new(0x558,"");
  BaseMaterial3D::BaseMaterial3D(pBVar7,false);
  *(undefined ***)pBVar7 = &PTR__initialize_classv_00111c70;
  postinitialize_handler((Object *)pBVar7);
  cVar5 = RefCounted::init_ref();
  if (cVar5 == '\0') {
    pOVar12 = *(Object **)(this + 0x670);
    if (pOVar12 != (Object *)0x0) {
      *(undefined8 *)(this + 0x670) = 0;
      cVar5 = RefCounted::unreference();
      if (cVar5 != '\0') {
        pBVar7 = (BaseMaterial3D *)0x0;
        cVar5 = predelete_handler(pOVar12);
        if (cVar5 != '\0') {
LAB_00102d23:
          (**(code **)(*(long *)pOVar12 + 0x140))(pOVar12);
          Memory::free_static(pOVar12,false);
          pOVar11 = (Object *)pBVar7;
          if (pBVar7 != (BaseMaterial3D *)0x0) goto LAB_00102c26;
        }
      }
      goto LAB_00101e30;
    }
  }
  else {
    pOVar12 = *(Object **)(this + 0x670);
    pOVar11 = pOVar12;
    if (pBVar7 != (BaseMaterial3D *)pOVar12) {
      *(BaseMaterial3D **)(this + 0x670) = pBVar7;
      cVar5 = RefCounted::reference();
      pOVar11 = (Object *)pBVar7;
      if (cVar5 == '\0') {
        *(undefined8 *)(this + 0x670) = 0;
        if (pOVar12 != (Object *)0x0) {
          cVar5 = RefCounted::unreference();
joined_r0x00102d03:
          if ((cVar5 != '\0') && (cVar5 = predelete_handler(pOVar12), cVar5 != '\0'))
          goto LAB_00102d23;
        }
      }
      else if (pOVar12 != (Object *)0x0) {
        cVar5 = RefCounted::unreference();
        goto joined_r0x00102d03;
      }
    }
LAB_00102c26:
    cVar5 = RefCounted::unreference();
    if ((cVar5 == '\0') || (cVar5 = predelete_handler(pOVar11), cVar5 == '\0')) {
LAB_00101e30:
      pOVar12 = *(Object **)(this + 0x670);
    }
    else {
      (**(code **)(*(long *)pOVar11 + 0x140))(pOVar11);
      Memory::free_static(pOVar11,false);
      pOVar12 = *(Object **)(this + 0x670);
    }
  }
  BaseMaterial3D::set_shading_mode(pOVar12,0);
  BaseMaterial3D::set_flag(*(undefined8 *)(this + 0x670),1,1);
  BaseMaterial3D::set_flag(*(undefined8 *)(this + 0x670),2,1);
  BaseMaterial3D::set_flag(*(undefined8 *)(this + 0x670),0x15,1);
  local_58 = __LC85;
  uStack_50 = _UNK_00112aa8;
  BaseMaterial3D::set_albedo(*(Color **)(this + 0x670));
  BaseMaterial3D::set_flag(*(undefined8 *)(this + 0x670),0,1);
  pBVar7 = (BaseMaterial3D *)operator_new(0x558,"");
  BaseMaterial3D::BaseMaterial3D(pBVar7,false);
  *(undefined ***)pBVar7 = &PTR__initialize_classv_00111c70;
  postinitialize_handler((Object *)pBVar7);
  cVar5 = RefCounted::init_ref();
  if (cVar5 == '\0') {
    pOVar12 = *(Object **)(this + 0x678);
    if (pOVar12 != (Object *)0x0) {
      *(undefined8 *)(this + 0x678) = 0;
      cVar5 = RefCounted::unreference();
      if ((cVar5 == '\0') || (cVar5 = predelete_handler(pOVar12), cVar5 == '\0')) goto LAB_00101f0f;
      (**(code **)(*(long *)pOVar12 + 0x140))(pOVar12);
      Memory::free_static(pOVar12,false);
      pOVar12 = *(Object **)(this + 0x678);
    }
  }
  else {
    pOVar12 = *(Object **)(this + 0x678);
    pOVar11 = pOVar12;
    if (pBVar7 != (BaseMaterial3D *)pOVar12) {
      *(BaseMaterial3D **)(this + 0x678) = pBVar7;
      cVar5 = RefCounted::reference();
      if (cVar5 == '\0') {
        *(undefined8 *)(this + 0x678) = 0;
      }
      pOVar11 = (Object *)pBVar7;
      if (((pOVar12 != (Object *)0x0) && (cVar5 = RefCounted::unreference(), cVar5 != '\0')) &&
         (cVar5 = predelete_handler(pOVar12), cVar5 != '\0')) {
        (**(code **)(*(long *)pOVar12 + 0x140))(pOVar12);
        Memory::free_static(pOVar12,false);
      }
    }
    cVar5 = RefCounted::unreference();
    if ((cVar5 == '\0') || (cVar5 = predelete_handler(pOVar11), cVar5 == '\0')) {
LAB_00101f0f:
      pOVar12 = *(Object **)(this + 0x678);
    }
    else {
      (**(code **)(*(long *)pOVar11 + 0x140))(pOVar11);
      Memory::free_static(pOVar11,false);
      pOVar12 = *(Object **)(this + 0x678);
    }
  }
  BaseMaterial3D::set_shading_mode(pOVar12,0);
  BaseMaterial3D::set_transparency(*(undefined8 *)(this + 0x678),1);
  BaseMaterial3D::set_flag(*(undefined8 *)(this + 0x678),3,1);
  BaseMaterial3D::set_flag(*(undefined8 *)(this + 0x678),1,1);
  BaseMaterial3D::set_flag(*(undefined8 *)(this + 0x678),2,1);
  BaseMaterial3D::set_flag(*(undefined8 *)(this + 0x678),0x15,1);
  pOVar12 = *(Object **)(EditorNode::singleton + 0x838);
  if (pOVar12 == (Object *)0x0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  cVar5 = RefCounted::reference();
  if (cVar5 == '\0') {
    pOVar12 = (Object *)0x0;
  }
  pcVar2 = *(code **)(*(long *)pOVar12 + 0x1c8);
  lVar1 = EditorStringNames::singleton + 0x10;
  if ((NavigationObstacle3DEditorPlugin()::{lambda()#1}::operator()()::sname == '\0') &&
     (iVar6 = __cxa_guard_acquire(&NavigationObstacle3DEditorPlugin()::{lambda()#1}::operator()()::
                                   sname), iVar6 != 0)) {
    _scs_create((char *)&NavigationObstacle3DEditorPlugin()::{lambda()#1}::operator()()::sname,true)
    ;
    __cxa_atexit(StringName::~StringName,
                 &NavigationObstacle3DEditorPlugin()::{lambda()#1}::operator()()::sname,
                 &__dso_handle);
    __cxa_guard_release(&NavigationObstacle3DEditorPlugin()::{lambda()#1}::operator()()::sname);
  }
  (*pcVar2)(&local_90,pOVar12,&NavigationObstacle3DEditorPlugin()::{lambda()#1}::operator()()::sname
            ,lVar1);
  cVar5 = RefCounted::unreference();
  if ((cVar5 != '\0') && (cVar5 = predelete_handler(pOVar12), cVar5 != '\0')) {
    (**(code **)(*(long *)pOVar12 + 0x140))(pOVar12);
    Memory::free_static(pOVar12,false);
  }
  iVar6 = (**(code **)(*(long *)local_90 + 0x1c8))();
  BaseMaterial3D::set_point_size((float)iVar6);
  BaseMaterial3D::set_texture(*(undefined8 *)(this + 0x678),0,&local_90);
  BaseMaterial3D::set_flag(*(undefined8 *)(this + 0x678),0,1);
  plVar8 = (long *)RenderingServer::get_singleton();
  uVar9 = (**(code **)(*plVar8 + 0x2d0))(plVar8);
  *(undefined8 *)(this + 0x680) = uVar9;
  uVar9 = (**(code **)(*plVar8 + 0x2d0))(plVar8);
  *(undefined8 *)(this + 0x690) = uVar9;
  uVar9 = (**(code **)(*plVar8 + 0xd18))(plVar8);
  *(undefined8 *)(this + 0x688) = uVar9;
  uVar9 = (**(code **)(*plVar8 + 0xd18))(plVar8);
  *(undefined8 *)(this + 0x698) = uVar9;
  (**(code **)(*plVar8 + 0xd20))(plVar8,*(undefined8 *)(this + 0x688),*(undefined8 *)(this + 0x680))
  ;
  (**(code **)(*plVar8 + 0xd20))(plVar8,*(undefined8 *)(this + 0x698),*(undefined8 *)(this + 0x690))
  ;
  this_00 = (BoxContainer *)operator_new(0xa10,"");
  BoxContainer::BoxContainer(this_00,false);
  this_00[0xa0c] = (BoxContainer)0x1;
  *(undefined ***)this_00 = &PTR__initialize_classv_00111e70;
  postinitialize_handler((Object *)this_00);
  *(BoxContainer **)(this + 0x710) = this_00;
  CanvasItem::hide();
  local_88 = (Object *)0x0;
  this_01 = (ButtonGroup *)operator_new(0x270,"");
  ButtonGroup::ButtonGroup(this_01);
  postinitialize_handler((Object *)this_01);
  cVar5 = RefCounted::init_ref();
  pOVar12 = local_88;
  if (cVar5 == '\0') {
    if (local_88 != (Object *)0x0) {
      local_88 = (Object *)0x0;
      cVar5 = RefCounted::unreference();
      goto joined_r0x00102a23;
    }
  }
  else {
    if (local_88 != (Object *)this_01) {
      local_88 = (Object *)this_01;
      cVar5 = RefCounted::reference();
      if (cVar5 == '\0') {
        local_88 = (Object *)0x0;
      }
      if (((pOVar12 != (Object *)0x0) && (cVar5 = RefCounted::unreference(), cVar5 != '\0')) &&
         (cVar5 = predelete_handler(pOVar12), cVar5 != '\0')) {
        (**(code **)(*(long *)pOVar12 + 0x140))(pOVar12);
        Memory::free_static(pOVar12,false);
      }
    }
    cVar5 = RefCounted::unreference();
    pOVar12 = (Object *)this_01;
joined_r0x00102a23:
    if ((cVar5 != '\0') && (cVar5 = predelete_handler(pOVar12), cVar5 != '\0')) {
      (**(code **)(*(long *)pOVar12 + 0x140))(pOVar12);
      Memory::free_static(pOVar12,false);
    }
  }
  pBVar10 = (Button *)operator_new(0xc10,"");
  local_68 = (Object *)0x0;
  Button::Button(pBVar10,(String *)&local_68);
  postinitialize_handler((Object *)pBVar10);
  *(Button **)(this + 0x6e0) = pBVar10;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  Control::set_theme_type_variation(*(StringName **)(this + 0x6e0));
  Node::add_child(*(undefined8 *)(this + 0x710),*(undefined8 *)(this + 0x6e0),0,0);
  local_68 = (Object *)&_LC23;
  local_78[0] = 0;
  pSVar3 = *(String **)(this + 0x6e0);
  local_60 = 0;
  String::parse_latin1((StrRange *)local_78);
  local_68 = (Object *)0x10959d;
  local_80 = 0;
  local_60 = 10;
  String::parse_latin1((StrRange *)&local_80);
  TTR((String *)&local_68,(String *)&local_80);
  Control::set_tooltip_text(pSVar3);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
  plVar8 = *(long **)(this + 0x6e0);
  pcVar2 = *(code **)(*plVar8 + 0x108);
  create_custom_callable_function_pointer<NavigationObstacle3DEditorPlugin,int>
            ((NavigationObstacle3DEditorPlugin *)&local_68,(char *)this,
             (_func_void_int *)"&NavigationObstacle3DEditorPlugin::set_mode");
  Callable::bind<NavigationObstacle3DEditorPlugin::Mode>
            ((StrRange *)local_78,(CowData<char32_t> *)&local_68,0);
  (*pcVar2)(plVar8,SceneStringNames::singleton + 0x238,(StrRange *)local_78,0);
  Callable::~Callable((Callable *)local_78);
  Callable::~Callable((Callable *)&local_68);
  BaseButton::set_toggle_mode(SUB81(*(undefined8 *)(this + 0x6e0),0));
  BaseButton::set_button_group(*(Ref **)(this + 0x6e0));
  pBVar10 = (Button *)operator_new(0xc10,"");
  local_68 = (Object *)0x0;
  Button::Button(pBVar10,(String *)&local_68);
  postinitialize_handler((Object *)pBVar10);
  *(Button **)(this + 0x6e8) = pBVar10;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  Control::set_theme_type_variation(*(StringName **)(this + 0x6e8));
  Node::add_child(*(undefined8 *)(this + 0x710),*(undefined8 *)(this + 0x6e8),0,0);
  plVar8 = *(long **)(this + 0x6e8);
  pcVar2 = *(code **)(*plVar8 + 0x108);
  create_custom_callable_function_pointer<NavigationObstacle3DEditorPlugin,int>
            ((NavigationObstacle3DEditorPlugin *)&local_68,(char *)this,
             (_func_void_int *)"&NavigationObstacle3DEditorPlugin::set_mode");
  Callable::bind<NavigationObstacle3DEditorPlugin::Mode>
            ((StrRange *)local_78,(CowData<char32_t> *)&local_68,1);
  (*pcVar2)(plVar8,SceneStringNames::singleton + 0x238,(StrRange *)local_78,0);
  Callable::~Callable((Callable *)local_78);
  Callable::~Callable((Callable *)&local_68);
  BaseButton::set_toggle_mode(SUB81(*(undefined8 *)(this + 0x6e8),0));
  BaseButton::set_button_group(*(Ref **)(this + 0x6e8));
  pBVar10 = (Button *)operator_new(0xc10,"");
  local_68 = (Object *)0x0;
  Button::Button(pBVar10,(String *)&local_68);
  postinitialize_handler((Object *)pBVar10);
  *(Button **)(this + 0x6f0) = pBVar10;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  Control::set_theme_type_variation(*(StringName **)(this + 0x6f0));
  Node::add_child(*(undefined8 *)(this + 0x710),*(undefined8 *)(this + 0x6f0),0,0);
  plVar8 = *(long **)(this + 0x6f0);
  pcVar2 = *(code **)(*plVar8 + 0x108);
  create_custom_callable_function_pointer<NavigationObstacle3DEditorPlugin,int>
            ((NavigationObstacle3DEditorPlugin *)&local_68,(char *)this,
             (_func_void_int *)"&NavigationObstacle3DEditorPlugin::set_mode");
  Callable::bind<NavigationObstacle3DEditorPlugin::Mode>
            ((StrRange *)local_78,(CowData<char32_t> *)&local_68,2);
  (*pcVar2)(plVar8,SceneStringNames::singleton + 0x238,(StrRange *)local_78,0);
  Callable::~Callable((Callable *)local_78);
  Callable::~Callable((Callable *)&local_68);
  BaseButton::set_toggle_mode(SUB81(*(undefined8 *)(this + 0x6f0),0));
  BaseButton::set_button_group(*(Ref **)(this + 0x6f0));
  pBVar10 = (Button *)operator_new(0xc10,"");
  local_68 = (Object *)0x0;
  Button::Button(pBVar10,(String *)&local_68);
  postinitialize_handler((Object *)pBVar10);
  *(Button **)(this + 0x6f8) = pBVar10;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  Control::set_theme_type_variation(*(StringName **)(this + 0x6f8));
  Node::add_child(*(undefined8 *)(this + 0x710),*(undefined8 *)(this + 0x6f8),0,0);
  plVar8 = *(long **)(this + 0x6f8);
  pcVar2 = *(code **)(*plVar8 + 0x108);
  create_custom_callable_function_pointer<NavigationObstacle3DEditorPlugin,int>
            ((NavigationObstacle3DEditorPlugin *)&local_68,(char *)this,
             (_func_void_int *)"&NavigationObstacle3DEditorPlugin::set_mode");
  Callable::bind<NavigationObstacle3DEditorPlugin::Mode>
            ((StrRange *)local_78,(CowData<char32_t> *)&local_68,3);
  (*pcVar2)(plVar8,SceneStringNames::singleton + 0x238,(StrRange *)local_78,0);
  Callable::~Callable((Callable *)local_78);
  Callable::~Callable((Callable *)&local_68);
  BaseButton::set_toggle_mode(SUB81(*(undefined8 *)(this + 0x6f8),0));
  pBVar10 = (Button *)operator_new(0xc10,"");
  local_68 = (Object *)0x0;
  Button::Button(pBVar10,(String *)&local_68);
  postinitialize_handler((Object *)pBVar10);
  *(Button **)(this + 0x700) = pBVar10;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  Control::set_theme_type_variation(*(StringName **)(this + 0x700));
  Node::add_child(*(undefined8 *)(this + 0x710),*(undefined8 *)(this + 0x700),0,0);
  plVar8 = *(long **)(this + 0x700);
  pcVar2 = *(code **)(*plVar8 + 0x108);
  create_custom_callable_function_pointer<NavigationObstacle3DEditorPlugin,int>
            ((NavigationObstacle3DEditorPlugin *)&local_68,(char *)this,
             (_func_void_int *)"&NavigationObstacle3DEditorPlugin::set_mode");
  Callable::bind<NavigationObstacle3DEditorPlugin::Mode>
            ((StrRange *)local_78,(CowData<char32_t> *)&local_68,4);
  (*pcVar2)(plVar8,SceneStringNames::singleton + 0x238,(StrRange *)local_78,0);
  Callable::~Callable((Callable *)local_78);
  Callable::~Callable((Callable *)&local_68);
  BaseButton::set_toggle_mode(SUB81(*(undefined8 *)(this + 0x700),0));
  this_02 = (ConfirmationDialog *)operator_new(0xdb8,"");
  ConfirmationDialog::ConfirmationDialog(this_02);
  postinitialize_handler((Object *)this_02);
  local_68 = (Object *)&_LC23;
  *(ConfirmationDialog **)(this + 0x708) = this_02;
  local_78[0] = 0;
  local_60 = 0;
  String::parse_latin1((StrRange *)local_78);
  local_68 = (Object *)0x10977c;
  local_80 = 0;
  local_60 = 0x11;
  String::parse_latin1((StrRange *)&local_80);
  TTR((String *)&local_68,(String *)&local_80);
  Window::set_title((String *)this_02);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
  local_68 = (Object *)&_LC23;
  local_78[0] = 0;
  uVar9 = *(undefined8 *)(this + 0x708);
  local_60 = 0;
  String::parse_latin1((StrRange *)local_78);
  local_68 = (Object *)0x10978e;
  local_80 = 0;
  local_60 = 0x14;
  String::parse_latin1((StrRange *)&local_80);
  TTR((String *)&local_68,(String *)&local_80);
  AcceptDialog::set_text(uVar9,(CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
  plVar8 = *(long **)(this + 0x708);
  pcVar2 = *(code **)(*plVar8 + 0x108);
  create_custom_callable_function_pointer<NavigationObstacle3DEditorPlugin>
            ((NavigationObstacle3DEditorPlugin *)&local_68,(char *)singleton,
             (_func_void *)"&NavigationObstacle3DEditorPlugin::action_clear_vertices");
  (*pcVar2)(plVar8,SceneStringNames::singleton + 0x268,(CowData<char32_t> *)&local_68,0);
  Callable::~Callable((Callable *)&local_68);
  Node::add_child(*(undefined8 *)(this + 0x710),*(undefined8 *)(this + 0x708),0,0);
  Node3DEditor::add_control_to_menu_panel(Node3DEditor::singleton);
  this_03 = (EditorNode3DGizmoPlugin *)operator_new(0x450,"");
  EditorNode3DGizmoPlugin::EditorNode3DGizmoPlugin(this_03);
  *(undefined4 *)(this_03 + 0x240) = 0;
  *(undefined ***)this_03 = &PTR__initialize_classv_001121e8;
  postinitialize_handler((Object *)this_03);
  cVar5 = RefCounted::init_ref();
  pOVar12 = *(Object **)(this + 0x660);
  if (cVar5 == '\0') {
    if (pOVar12 != (Object *)0x0) {
      *(undefined8 *)(this + 0x660) = 0;
      cVar5 = RefCounted::unreference();
      if ((cVar5 != '\0') && (cVar5 = predelete_handler(pOVar12), cVar5 != '\0')) {
        this_03 = (EditorNode3DGizmoPlugin *)0x0;
LAB_00102df8:
        (**(code **)(*(long *)pOVar12 + 0x140))(pOVar12);
        Memory::free_static(pOVar12,false);
        if (this_03 != (EditorNode3DGizmoPlugin *)0x0) goto LAB_00102aa8;
      }
    }
    local_68 = (Object *)0x0;
    Node3DEditor::add_gizmo_plugin(Node3DEditor::singleton);
    if ((local_68 == (Object *)0x0) ||
       (cVar5 = RefCounted::unreference(), pOVar12 = local_68, cVar5 == '\0')) goto LAB_00102987;
    this_03 = (EditorNode3DGizmoPlugin *)0x0;
    cVar5 = predelete_handler(local_68);
    if (cVar5 == '\0') goto LAB_00102987;
LAB_00102968:
    (**(code **)(*(long *)pOVar12 + 0x140))(pOVar12);
    Memory::free_static(pOVar12,false);
    if (this_03 == (EditorNode3DGizmoPlugin *)0x0) goto LAB_00102987;
  }
  else {
    if (this_03 != (EditorNode3DGizmoPlugin *)pOVar12) {
      *(EditorNode3DGizmoPlugin **)(this + 0x660) = this_03;
      cVar5 = RefCounted::reference();
      if (cVar5 == '\0') {
        *(undefined8 *)(this + 0x660) = 0;
        if (pOVar12 != (Object *)0x0) {
          cVar5 = RefCounted::unreference();
joined_r0x00102ce3:
          if ((cVar5 != '\0') && (cVar5 = predelete_handler(pOVar12), cVar5 != '\0'))
          goto LAB_00102df8;
        }
      }
      else if (pOVar12 != (Object *)0x0) {
        cVar5 = RefCounted::unreference();
        goto joined_r0x00102ce3;
      }
    }
LAB_00102aa8:
    pCVar4 = Node3DEditor::singleton;
    local_68 = (Object *)0x0;
    pOVar12 = (Object *)
              __dynamic_cast(this_03,&Object::typeinfo,&EditorNode3DGizmoPlugin::typeinfo,0);
    if ((pOVar12 != (Object *)0x0) &&
       (local_68 = pOVar12, cVar5 = RefCounted::reference(), cVar5 == '\0')) {
      local_68 = (Object *)0x0;
    }
    Node3DEditor::add_gizmo_plugin(pCVar4);
    if (((local_68 != (Object *)0x0) &&
        (cVar5 = RefCounted::unreference(), pOVar12 = local_68, cVar5 != '\0')) &&
       (cVar5 = predelete_handler(local_68), cVar5 != '\0')) goto LAB_00102968;
  }
  cVar5 = RefCounted::unreference();
  if ((cVar5 != '\0') && (cVar5 = predelete_handler((Object *)this_03), cVar5 != '\0')) {
    (**(code **)(*(long *)this_03 + 0x140))(this_03);
    Memory::free_static(this_03,false);
  }
LAB_00102987:
  if (((local_88 != (Object *)0x0) &&
      (cVar5 = RefCounted::unreference(), pOVar12 = local_88, cVar5 != '\0')) &&
     (cVar5 = predelete_handler(local_88), cVar5 != '\0')) {
    (**(code **)(*(long *)pOVar12 + 0x140))(pOVar12);
    Memory::free_static(pOVar12,false);
  }
  if (((local_90 != (Object *)0x0) && (cVar5 = RefCounted::unreference(), cVar5 != '\0')) &&
     (cVar5 = predelete_handler(local_90), cVar5 != '\0')) {
    (**(code **)(*(long *)local_90 + 0x140))(local_90);
    Memory::free_static(local_90,false);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* NavigationObstacle3DEditorPlugin::action_clear_vertices() */

void __thiscall
NavigationObstacle3DEditorPlugin::action_clear_vertices(NavigationObstacle3DEditorPlugin *this)

{
  StringName *pSVar1;
  Object *pOVar2;
  long in_FS_OFFSET;
  undefined8 local_a8;
  long local_a0;
  char *local_98;
  undefined8 local_90;
  Variant *local_88 [2];
  int local_78 [6];
  undefined8 local_60;
  undefined1 local_58 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(this + 0x668) == 0) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
  else {
    pOVar2 = (Object *)EditorUndoRedoManager::get_singleton();
    local_a8 = 0;
    local_98 = "";
    local_90 = 0;
    String::parse_latin1((StrRange *)&local_a8);
    local_98 = "Edit Obstacle (Clear Vertices)";
    local_a0 = 0;
    local_90 = 0x1e;
    String::parse_latin1((StrRange *)&local_a0);
    TTR((String *)&local_98,(String *)&local_a0);
    EditorUndoRedoManager::create_action(pOVar2,(String *)&local_98,0,0,0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
    local_90 = 0;
    StringName::StringName((StringName *)&local_a0,"set_vertices",false);
    pSVar1 = *(StringName **)(this + 0x668);
    Variant::Variant((Variant *)local_78,(Vector *)&local_98);
    local_60 = 0;
    local_58 = (undefined1  [16])0x0;
    local_88[0] = (Variant *)local_78;
    EditorUndoRedoManager::add_do_methodp(pOVar2,pSVar1,(Variant **)&local_a0,(int)local_88);
    if (Variant::needs_deinit[(int)local_60] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
    if ((StringName::configured != '\0') && (local_a0 != 0)) {
      StringName::unref();
    }
    CowData<Vector3>::_unref((CowData<Vector3> *)&local_90);
    local_90 = 0;
    if (*(long *)(*(long *)(this + 0x668) + 0x558) != 0) {
      CowData<Vector3>::_ref
                ((CowData<Vector3> *)&local_90,(CowData *)(*(long *)(this + 0x668) + 0x558));
    }
    StringName::StringName((StringName *)&local_a0,"set_vertices",false);
    pSVar1 = *(StringName **)(this + 0x668);
    Variant::Variant((Variant *)local_78,(Vector *)&local_98);
    local_60 = 0;
    local_58 = (undefined1  [16])0x0;
    local_88[0] = (Variant *)local_78;
    EditorUndoRedoManager::add_undo_methodp(pOVar2,pSVar1,(Variant **)&local_a0,(int)local_88);
    if (Variant::needs_deinit[(int)local_60] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
    if ((StringName::configured != '\0') && (local_a0 != 0)) {
      StringName::unref();
    }
    CowData<Vector3>::_unref((CowData<Vector3> *)&local_90);
    EditorUndoRedoManager::commit_action(SUB81(pOVar2,0));
    Node3D::update_gizmos();
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x001031b2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)this + 0x220))(this,*(undefined8 *)(this + 0x668));
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* NavigationObstacle3DEditorPlugin::~NavigationObstacle3DEditorPlugin() */

void __thiscall
NavigationObstacle3DEditorPlugin::~NavigationObstacle3DEditorPlugin
          (NavigationObstacle3DEditorPlugin *this)

{
  Object *pOVar1;
  char cVar2;
  long *plVar3;
  
  *(undefined ***)this = &PTR__initialize_classv_00112450;
  plVar3 = (long *)RenderingServer::get_singleton();
  if (plVar3 == (long *)0x0) {
    _err_print_error("~NavigationObstacle3DEditorPlugin",
                     "editor/plugins/navigation_obstacle_3d_editor_plugin.cpp",0x372,
                     "Parameter \"rs\" is null.",0,0);
  }
  else {
    if (*(long *)(this + 0x688) != 0) {
      (**(code **)(*plVar3 + 0x11b0))(plVar3);
      *(undefined8 *)(this + 0x688) = 0;
    }
    if (*(long *)(this + 0x680) != 0) {
      (**(code **)(*plVar3 + 0x11b0))(plVar3);
      *(undefined8 *)(this + 0x680) = 0;
    }
    if (*(long *)(this + 0x698) != 0) {
      (**(code **)(*plVar3 + 0x11b0))(plVar3);
      *(undefined8 *)(this + 0x698) = 0;
    }
    if (*(long *)(this + 0x690) != 0) {
      (**(code **)(*plVar3 + 0x11b0))(plVar3);
      *(undefined8 *)(this + 0x690) = 0;
    }
  }
  CowData<Vector3>::_unref((CowData<Vector3> *)(this + 0x6d0));
  CowData<Vector3>::_unref((CowData<Vector3> *)(this + 0x6c0));
  if (*(long *)(this + 0x678) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0x678);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  if (*(long *)(this + 0x670) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0x670);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  if (*(long *)(this + 0x660) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0x660);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
        EditorPlugin::~EditorPlugin((EditorPlugin *)this);
        return;
      }
    }
  }
  EditorPlugin::~EditorPlugin((EditorPlugin *)this);
  return;
}



/* NavigationObstacle3DEditorPlugin::~NavigationObstacle3DEditorPlugin() */

void __thiscall
NavigationObstacle3DEditorPlugin::~NavigationObstacle3DEditorPlugin
          (NavigationObstacle3DEditorPlugin *this)

{
  ~NavigationObstacle3DEditorPlugin(this);
  operator_delete(this,0x718);
  return;
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



/* NavigationObstacle3DGizmoPlugin::commit_subgizmos(EditorNode3DGizmo const*, Vector<int> const&,
   Vector<Transform3D> const&, bool) */

void __thiscall
NavigationObstacle3DGizmoPlugin::commit_subgizmos
          (NavigationObstacle3DGizmoPlugin *this,EditorNode3DGizmo *param_1,Vector *param_2,
          Vector *param_3,bool param_4)

{
  float *pfVar1;
  code *pcVar2;
  Vector *pVVar3;
  long lVar4;
  EditorUndoRedoManager *pEVar5;
  float fVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long in_FS_OFFSET;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  CowData *local_130;
  long local_128;
  undefined8 local_118;
  long local_110 [2];
  long local_100 [2];
  long local_f0;
  String local_e8 [8];
  undefined8 local_e0 [2];
  undefined8 local_d0;
  undefined4 local_c8;
  undefined8 local_c0;
  float local_b8;
  undefined1 local_b0 [8];
  undefined4 local_a8;
  undefined1 local_a4 [12];
  undefined1 local_98 [8];
  float fStack_90;
  undefined1 local_88 [12];
  float fStack_7c;
  float local_78;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((*(long *)(param_1 + 0x1f0) == 0) ||
     (pVVar3 = (Vector *)
               __dynamic_cast(*(long *)(param_1 + 0x1f0),&Object::typeinfo,
                              &NavigationObstacle3D::typeinfo,0), pVVar3 == (Vector *)0x0)) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      _err_print_error("commit_subgizmos","editor/plugins/navigation_obstacle_3d_editor_plugin.cpp",
                       0xd3,"Parameter \"obstacle_node\" is null.",0,0);
      return;
    }
  }
  else {
    Node3D::get_global_basis();
    local_a4 = Basis::get_scale();
    fVar6 = ABS(local_a4._4_4_);
    local_b8 = _LC11;
    if (_LC11 < ABS(local_a4._8_4_)) {
      local_b8 = ABS(local_a4._8_4_);
    }
    if (fVar6 <= _LC11) {
      fVar6 = _LC11;
    }
    fVar10 = ABS(local_a4._0_4_);
    if (ABS(local_a4._0_4_) <= _LC11) {
      fVar10 = _LC11;
    }
    local_c0 = CONCAT44(fVar6,fVar10);
    _local_b0 = Node3D::get_global_rotation();
    _local_98 = ZEXT416(_LC6);
    local_d0 = _LC16;
    local_c8 = 0;
    local_78 = 1.0;
    _local_88 = _local_98;
    Basis::set_axis_angle_scale((Vector3 *)local_98,(float)local_b0._4_4_,(Vector3 *)&local_d0);
    local_100[0] = 0;
    if (*(long *)(pVVar3 + 0x558) == 0) {
      local_f0 = 0;
      local_128 = 0;
    }
    else {
      CowData<Vector3>::_ref((CowData<Vector3> *)local_100,(CowData *)(pVVar3 + 0x558));
      local_f0 = 0;
      local_128 = local_100[0];
      if (local_100[0] != 0) {
        CowData<Vector3>::_ref((CowData<Vector3> *)&local_f0,(CowData *)local_100);
      }
    }
    lVar9 = *(long *)(param_2 + 8);
    for (lVar8 = 0; (lVar9 != 0 && (lVar8 < *(long *)(lVar9 + -8))); lVar8 = lVar8 + 1) {
      lVar4 = *(long *)(param_3 + 8);
      if (lVar4 == 0) {
        lVar7 = 0;
LAB_00103a93:
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar8,lVar7,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar7 = *(long *)(lVar4 + -8);
      if (lVar7 <= lVar8) goto LAB_00103a93;
      lVar9 = (long)*(int *)(lVar9 + lVar8 * 4);
      lVar4 = lVar4 + lVar8 * 0x30;
      fVar13 = fStack_7c * *(float *)(lVar4 + 0x28);
      fVar10 = (float)local_88._8_4_ * *(float *)(lVar4 + 0x24);
      fVar12 = *(float *)(lVar4 + 0x28) * (float)local_98._4_4_;
      fVar6 = *(float *)(lVar4 + 0x24) * (float)local_98._0_4_;
      fVar14 = local_78 * *(float *)(lVar4 + 0x2c);
      fVar11 = *(float *)(lVar4 + 0x2c) * fStack_90;
      if (lVar9 < 0) {
        if (local_f0 != 0) {
LAB_00103a49:
          lVar8 = *(long *)(local_f0 + -8);
          goto LAB_00103a4d;
        }
LAB_00103ad8:
        lVar8 = 0;
LAB_00103a4d:
        _err_print_index_error
                  ("operator[]","./core/templates/vector.h",0x38,lVar9,lVar8,"p_index",
                   "((Vector<T> *)(this))->_cowdata.size()","",false,true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      if (local_f0 == 0) goto LAB_00103ad8;
      if (*(long *)(local_f0 + -8) <= lVar9) goto LAB_00103a49;
      CowData<Vector3>::_copy_on_write((CowData<Vector3> *)&local_f0);
      pfVar1 = (float *)(local_f0 + lVar9 * 0xc);
      pfVar1[1] = 0.0;
      *pfVar1 = fVar6 + fVar12 + fVar11;
      pfVar1[2] = fVar10 + fVar13 + fVar14;
      lVar9 = *(long *)(param_2 + 8);
    }
    local_130 = (CowData *)&local_f0;
    if (param_4) {
      NavigationObstacle3D::set_vertices(pVVar3);
      CowData<Vector3>::_unref((CowData<Vector3> *)local_130);
      CowData<Vector3>::_unref((CowData<Vector3> *)local_100);
    }
    else {
      pEVar5 = (EditorUndoRedoManager *)EditorUndoRedoManager::get_singleton();
      local_110[0] = 0;
      String::parse_latin1((String *)local_110,"");
      local_118 = 0;
      String::parse_latin1((String *)&local_118,"Set Obstacle Vertices");
      TTR(local_e8,(String *)&local_118);
      EditorUndoRedoManager::create_action(pEVar5,local_e8,0,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_e8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_118);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_110);
      local_e0[0] = 0;
      if (local_128 != 0) {
        CowData<Vector3>::_ref((CowData<Vector3> *)local_e0,(CowData *)local_100);
      }
      StringName::StringName((StringName *)local_110,"set_vertices",false);
      EditorUndoRedoManager::add_do_method<Vector<Vector3>>
                (pEVar5,pVVar3,(String *)local_110,local_e8);
      if ((StringName::configured != '\0') && (local_110[0] != 0)) {
        StringName::unref();
      }
      CowData<Vector3>::_unref((CowData<Vector3> *)local_e0);
      local_e0[0] = 0;
      if (local_f0 != 0) {
        CowData<Vector3>::_ref((CowData<Vector3> *)local_e0,local_130);
      }
      StringName::StringName((StringName *)local_110,"set_vertices",false);
      EditorUndoRedoManager::add_undo_method<Vector<Vector3>>
                (pEVar5,pVVar3,(String *)local_110,local_e8);
      if ((StringName::configured != '\0') && (local_110[0] != 0)) {
        StringName::unref();
      }
      CowData<Vector3>::_unref((CowData<Vector3> *)local_e0);
      EditorUndoRedoManager::commit_action(SUB81(pEVar5,0));
      CowData<Vector3>::_unref((CowData<Vector3> *)local_130);
      CowData<Vector3>::_unref((CowData<Vector3> *)local_100);
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* NavigationObstacle3DGizmoPlugin::set_subgizmo_transform(EditorNode3DGizmo const*, int,
   Transform3D) */

void NavigationObstacle3DGizmoPlugin::set_subgizmo_transform
               (undefined8 param_1,long param_2,int param_3)

{
  float *pfVar1;
  Vector *pVVar2;
  long lVar3;
  long lVar4;
  long in_FS_OFFSET;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined8 in_stack_00000028;
  float fStack0000000000000030;
  float fStack0000000000000034;
  long local_d0 [2];
  undefined8 local_c0;
  undefined4 local_b8;
  undefined8 local_b0;
  float local_a8;
  undefined1 local_a0 [8];
  undefined4 local_98;
  undefined1 local_94 [12];
  undefined1 local_88 [8];
  float fStack_80;
  undefined1 local_78 [12];
  float fStack_6c;
  float local_68;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if ((*(long *)(param_2 + 0x1f0) == 0) ||
     (pVVar2 = (Vector *)
               __dynamic_cast(*(long *)(param_2 + 0x1f0),&Object::typeinfo,
                              &NavigationObstacle3D::typeinfo,0), pVVar2 == (Vector *)0x0)) {
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      _err_print_error("set_subgizmo_transform",
                       "editor/plugins/navigation_obstacle_3d_editor_plugin.cpp",0xc2,
                       "Parameter \"obstacle_node\" is null.",0,0);
      return;
    }
    goto LAB_00103f28;
  }
  Node3D::get_global_basis();
  local_94 = Basis::get_scale();
  local_a8 = _LC11;
  if (_LC11 < ABS(local_94._8_4_)) {
    local_a8 = ABS(local_94._8_4_);
  }
  fVar5 = _LC11;
  if (_LC11 < ABS(local_94._4_4_)) {
    fVar5 = ABS(local_94._4_4_);
  }
  fVar6 = ABS(local_94._0_4_);
  if (ABS(local_94._0_4_) <= _LC11) {
    fVar6 = _LC11;
  }
  local_b0 = CONCAT44(fVar5,fVar6);
  lVar4 = (long)param_3;
  _local_a0 = Node3D::get_global_rotation();
  _local_88 = ZEXT416(_LC6);
  local_c0 = _LC16;
  local_b8 = 0;
  local_68 = 1.0;
  _local_78 = _local_88;
  Basis::set_axis_angle_scale((Vector3 *)local_88,(float)local_a0._4_4_,(Vector3 *)&local_c0);
  local_d0[0] = 0;
  if (*(long *)(pVVar2 + 0x558) == 0) {
LAB_00103f20:
    lVar3 = 0;
LAB_00103e8d:
    _err_print_index_error
              ("set_subgizmo_transform","editor/plugins/navigation_obstacle_3d_editor_plugin.cpp",
               200,lVar4,lVar3,"p_id","vertices.size()","",false,false);
    CowData<Vector3>::_unref((CowData<Vector3> *)local_d0);
  }
  else {
    CowData<Vector3>::_ref((CowData<Vector3> *)local_d0,(CowData *)(pVVar2 + 0x558));
    if (param_3 < 0) {
      if (local_d0[0] == 0) goto LAB_00103f20;
      lVar3 = *(long *)(local_d0[0] + -8);
      goto LAB_00103e8d;
    }
    if (local_d0[0] == 0) goto LAB_00103f20;
    lVar3 = *(long *)(local_d0[0] + -8);
    if (lVar3 <= lVar4) goto LAB_00103e8d;
    fVar6 = fStack_6c * fStack0000000000000030;
    fVar5 = (float)local_78._8_4_ * in_stack_00000028._4_4_;
    fStack0000000000000030 = fStack0000000000000030 * (float)local_88._4_4_;
    in_stack_00000028._4_4_ = in_stack_00000028._4_4_ * (float)local_88._0_4_;
    fVar7 = local_68 * fStack0000000000000034;
    fStack0000000000000034 = fStack0000000000000034 * fStack_80;
    CowData<Vector3>::_copy_on_write((CowData<Vector3> *)local_d0);
    pfVar1 = (float *)(local_d0[0] + lVar4 * 0xc);
    pfVar1[1] = 0.0;
    *pfVar1 = in_stack_00000028._4_4_ + fStack0000000000000030 + fStack0000000000000034;
    pfVar1[2] = fVar5 + fVar6 + fVar7;
    NavigationObstacle3D::set_vertices(pVVar2);
    CowData<Vector3>::_unref((CowData<Vector3> *)local_d0);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00103f28:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* NavigationObstacle3DEditorPlugin::action_flip_vertices() */

void __thiscall
NavigationObstacle3DEditorPlugin::action_flip_vertices(NavigationObstacle3DEditorPlugin *this)

{
  StringName *pSVar1;
  long lVar2;
  undefined8 *puVar3;
  Object *pOVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  long in_FS_OFFSET;
  undefined8 local_b8;
  long local_b0 [2];
  long local_a0;
  char *local_98;
  undefined8 local_90;
  Variant *local_88 [2];
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_60;
  undefined1 local_58 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar2 = *(long *)(this + 0x668);
  if (lVar2 == 0) goto LAB_001042c3;
  local_a0 = 0;
  if (*(long *)(lVar2 + 0x558) == 0) {
LAB_0010405e:
    lVar7 = 0;
  }
  else {
    CowData<Vector3>::_ref((CowData<Vector3> *)&local_a0,(CowData *)(lVar2 + 0x558));
    if (local_a0 == 0) goto LAB_0010405e;
    lVar2 = *(long *)(local_a0 + -8);
    for (lVar6 = 0; lVar7 = local_a0, lVar6 < lVar2 / 2; lVar6 = lVar6 + 1) {
      CowData<Vector3>::_copy_on_write((CowData<Vector3> *)&local_a0);
      puVar5 = (undefined8 *)(lVar6 * 0xc);
      if (local_a0 == 0) {
        local_78 = *puVar5;
        puVar3 = (undefined8 *)((lVar6 + 1) * -0xc);
        local_70 = *(undefined4 *)(puVar5 + 1);
        *puVar5 = *puVar3;
        *(undefined4 *)(puVar5 + 1) = *(undefined4 *)(puVar3 + 1);
        *puVar3 = local_78;
        *(undefined4 *)(puVar3 + 1) = local_70;
        goto LAB_0010405e;
      }
      lVar2 = *(long *)(local_a0 + -8);
      puVar5 = (undefined8 *)((long)puVar5 + local_a0);
      local_78 = *puVar5;
      local_70 = *(undefined4 *)(puVar5 + 1);
      puVar3 = (undefined8 *)(local_a0 + -0xc + (lVar2 - lVar6) * 0xc);
      *puVar5 = *puVar3;
      *(undefined4 *)(puVar5 + 1) = *(undefined4 *)(puVar3 + 1);
      *puVar3 = local_78;
      *(undefined4 *)(puVar3 + 1) = local_70;
    }
  }
  pOVar4 = (Object *)EditorUndoRedoManager::get_singleton();
  local_b0[0] = 0;
  local_98 = "";
  local_90 = 0;
  String::parse_latin1((StrRange *)local_b0);
  local_b8 = 0;
  local_98 = "Edit Obstacle (Flip Winding)";
  local_90 = 0x1c;
  String::parse_latin1((StrRange *)&local_b8);
  TTR((String *)&local_98,(String *)&local_b8);
  EditorUndoRedoManager::create_action(pOVar4,(String *)&local_98,0,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_b0);
  local_90 = 0;
  if (lVar7 != 0) {
    CowData<Vector3>::_ref((CowData<Vector3> *)&local_90,(CowData *)&local_a0);
  }
  StringName::StringName((StringName *)local_b0,"set_vertices",false);
  pSVar1 = *(StringName **)(this + 0x668);
  Variant::Variant((Variant *)&local_78,(Vector *)&local_98);
  local_60 = 0;
  local_58 = (undefined1  [16])0x0;
  local_88[0] = (Variant *)&local_78;
  EditorUndoRedoManager::add_do_methodp(pOVar4,pSVar1,(Variant **)local_b0,(int)local_88);
  if (Variant::needs_deinit[(int)local_60] != '\0') {
    Variant::_clear_internal();
  }
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_b0[0] != 0)) {
    StringName::unref();
  }
  CowData<Vector3>::_unref((CowData<Vector3> *)&local_90);
  local_90 = 0;
  if (*(long *)(*(long *)(this + 0x668) + 0x558) != 0) {
    CowData<Vector3>::_ref
              ((CowData<Vector3> *)&local_90,(CowData *)(*(long *)(this + 0x668) + 0x558));
  }
  StringName::StringName((StringName *)local_b0,"set_vertices",false);
  pSVar1 = *(StringName **)(this + 0x668);
  Variant::Variant((Variant *)&local_78,(Vector *)&local_98);
  local_60 = 0;
  local_58 = (undefined1  [16])0x0;
  local_88[0] = (Variant *)&local_78;
  EditorUndoRedoManager::add_undo_methodp(pOVar4,pSVar1,(Variant **)local_b0,(int)local_88);
  if (Variant::needs_deinit[(int)local_60] != '\0') {
    Variant::_clear_internal();
  }
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_b0[0] != 0)) {
    StringName::unref();
  }
  CowData<Vector3>::_unref((CowData<Vector3> *)&local_90);
  EditorUndoRedoManager::commit_action(SUB81(pOVar4,0));
  Node3D::update_gizmos();
  CowData<Vector3>::_unref((CowData<Vector3> *)&local_a0);
LAB_001042c3:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* NavigationObstacle3DEditorPlugin::set_mode(int) */

void __thiscall
NavigationObstacle3DEditorPlugin::set_mode(NavigationObstacle3DEditorPlugin *this,int param_1)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == 3) {
    BaseButton::set_pressed(SUB81(*(undefined8 *)(this + 0x6f8),0));
    if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
      action_flip_vertices(this);
      return;
    }
  }
  else if (param_1 == 4) {
    BaseButton::set_pressed(SUB81(*(undefined8 *)(this + 0x700),0));
    Window::reset_size();
    Window::popup_centered(*(Vector2i **)(this + 0x708));
    if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
  else {
    *(int *)(this + 0x6a0) = param_1;
    BaseButton::set_pressed(SUB81(*(undefined8 *)(this + 0x6e0),0));
    BaseButton::set_pressed(SUB81(*(undefined8 *)(this + 0x6e8),0));
    BaseButton::set_pressed(SUB81(*(undefined8 *)(this + 0x6f0),0));
    BaseButton::set_pressed(SUB81(*(undefined8 *)(this + 0x6f8),0));
    if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
      BaseButton::set_pressed(SUB81(*(undefined8 *)(this + 0x700),0));
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* NavigationObstacle3DEditorPlugin::redraw() */

void __thiscall NavigationObstacle3DEditorPlugin::redraw(NavigationObstacle3DEditorPlugin *this)

{
  long lVar1;
  undefined8 *puVar2;
  NavigationObstacle3DEditorPlugin NVar3;
  int iVar4;
  long lVar5;
  code *pcVar6;
  float fVar7;
  float fVar8;
  undefined8 *puVar9;
  char cVar10;
  long *plVar11;
  Variant *pVVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  int iVar15;
  long lVar16;
  int iVar17;
  undefined8 *puVar18;
  long in_FS_OFFSET;
  CowData<Vector3> *local_1c8;
  Array local_198 [8];
  Array local_190 [8];
  Array local_188 [8];
  Dictionary local_180 [16];
  undefined8 *local_170;
  Vector local_168 [8];
  undefined8 *local_160;
  Dictionary local_158 [8];
  long local_150 [2];
  undefined8 local_140;
  float local_138;
  undefined8 local_130;
  undefined4 local_128;
  undefined1 local_120 [8];
  undefined4 local_118;
  undefined1 local_114 [12];
  undefined1 local_108 [16];
  undefined1 local_f8 [16];
  undefined4 local_e8;
  Vector3 local_d8 [48];
  undefined1 local_a8 [12];
  undefined4 uStack_9c;
  undefined8 uStack_98;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined8 uStack_68;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(this + 0x668) == 0) goto LAB_0010465f;
  plVar11 = (long *)RenderingServer::get_singleton();
  (**(code **)(*plVar11 + 0x3a8))(plVar11,*(undefined8 *)(this + 0x680));
  (**(code **)(*plVar11 + 0x3a8))(plVar11,*(undefined8 *)(this + 0x690));
  cVar10 = Node3D::is_visible_in_tree();
  if (cVar10 == '\0') goto LAB_0010465f;
  local_170 = (undefined8 *)0x0;
  if (this[0x6d8] == (NavigationObstacle3DEditorPlugin)0x0) {
    if (*(long *)(*(long *)(this + 0x668) + 0x558) != 0) {
      CowData<Vector3>::_ref
                ((CowData<Vector3> *)&local_170,(CowData *)(*(long *)(this + 0x668) + 0x558));
      goto LAB_001046be;
    }
  }
  else if (*(long *)(this + 0x6d0) != 0) {
    CowData<Vector3>::_ref((CowData<Vector3> *)&local_170,(CowData *)(this + 0x6d0));
LAB_001046be:
    puVar9 = local_170;
    local_1c8 = (CowData<Vector3> *)&local_170;
    if (local_170 != (undefined8 *)0x0) {
      Array::Array(local_198);
      iVar17 = (int)local_198;
      Array::resize(iVar17);
      local_160 = (undefined8 *)0x0;
      CowData<Vector3>::resize<false>((CowData<Vector3> *)&local_160,puVar9[-1] * 2);
      CowData<Vector3>::_copy_on_write((CowData<Vector3> *)&local_160);
      lVar5 = puVar9[-1];
      if (0 < lVar5) {
        iVar4 = *(int *)(this + 0x6a4);
        NVar3 = this[0x6d8];
        lVar16 = 0;
        puVar14 = local_160;
        puVar18 = puVar9;
        do {
          if (iVar4 == (int)lVar16) {
            local_a8._0_8_ = *(undefined8 *)(this + 0x6a8);
            local_a8._8_4_ = *(undefined4 *)(this + 0x6b0);
          }
          else {
            local_a8._0_8_ = *puVar18;
            local_a8._8_4_ = *(undefined4 *)(puVar18 + 1);
          }
          lVar1 = lVar16 + 1;
          if (((NVar3 == (NavigationObstacle3DEditorPlugin)0x0) || (lVar5 + -1 != lVar16)) &&
             (lVar16 = lVar1 % lVar5, lVar16 != iVar4)) {
            if (lVar5 <= lVar16) {
              _err_print_index_error
                        ("get","./core/templates/cowdata.h",0xdb,lVar16,lVar5,"p_index","size()","",
                         false,true);
              _err_flush_stdout();
                    /* WARNING: Does not return */
              pcVar6 = (code *)invalidInstructionException();
              (*pcVar6)();
            }
            puVar2 = (undefined8 *)((long)puVar9 + lVar16 * 0xc);
            local_78 = *puVar2;
            local_70 = *(undefined4 *)(puVar2 + 1);
          }
          else {
            local_78 = *(undefined8 *)(this + 0x6a8);
            local_70 = *(undefined4 *)(this + 0x6b0);
          }
          puVar18 = (undefined8 *)((long)puVar18 + 0xc);
          *puVar14 = local_a8._0_8_;
          *(undefined4 *)(puVar14 + 1) = local_a8._8_4_;
          *(undefined8 *)((long)puVar14 + 0xc) = local_78;
          *(undefined4 *)((long)puVar14 + 0x14) = local_70;
          lVar16 = lVar1;
          puVar14 = puVar14 + 3;
        } while (lVar5 != lVar1);
      }
      Variant::Variant((Variant *)&local_78,local_168);
      pVVar12 = (Variant *)Array::operator[](iVar17);
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
        *(int *)pVVar12 = (int)local_78;
        *(ulong *)(pVVar12 + 8) = CONCAT44(uStack_6c,local_70);
        *(undefined8 *)(pVVar12 + 0x10) = uStack_68;
      }
      pcVar6 = *(code **)(*plVar11 + 0x318);
      Dictionary::Dictionary(local_158);
      Array::Array((Array *)local_180);
      (*pcVar6)(plVar11,*(undefined8 *)(this + 0x680),1,local_198,local_180,local_158,0);
      Array::~Array((Array *)local_180);
      Dictionary::~Dictionary(local_158);
      pcVar6 = *(code **)(*plVar11 + 0xd68);
      uVar13 = (**(code **)(**(long **)(this + 0x670) + 0x1c0))();
      (*pcVar6)(plVar11,*(undefined8 *)(this + 0x688),0,uVar13);
      Node3D::get_global_basis();
      local_a8 = Basis::get_scale();
      local_138 = ABS(local_a8._8_4_);
      if (ABS(local_a8._8_4_) <= _LC11) {
        local_138 = _LC11;
      }
      fVar7 = ABS(local_a8._4_4_);
      if (ABS(local_a8._4_4_) <= _LC11) {
        fVar7 = _LC11;
      }
      fVar8 = ABS(local_a8._0_4_);
      if (ABS(local_a8._0_4_) <= _LC11) {
        fVar8 = _LC11;
      }
      local_140 = CONCAT44(fVar7,fVar8);
      local_114 = Node3D::get_global_position();
      local_e8 = 0x3f800000;
      local_108 = ZEXT416(_LC6);
      local_f8 = local_108;
      Basis::scaled(local_d8);
      _local_120 = Node3D::get_global_rotation();
      local_130 = _LC16;
      local_128 = 0;
      Basis::rotated((Vector3 *)local_a8,(float)local_120._4_4_);
      Transform3D::Transform3D((Transform3D *)&local_78,(Basis *)local_a8,(Vector3 *)local_114);
      (**(code **)(*plVar11 + 0xd40))(plVar11,*(undefined8 *)(this + 0x688),(Variant *)&local_78);
      Array::Array(local_190);
      iVar17 = (int)local_190;
      Array::resize(iVar17);
      local_150[0] = 0;
      CowData<Vector3>::resize<false>((CowData<Vector3> *)local_150,puVar9[-1]);
      CowData<Vector3>::_copy_on_write((CowData<Vector3> *)local_150);
      lVar5 = puVar9[-1];
      if (0 < lVar5) {
        iVar4 = *(int *)(this + 0x6a4);
        lVar16 = 0;
        iVar15 = 0;
        do {
          if (iVar4 == iVar15) {
            local_a8._0_8_ = *(undefined8 *)(this + 0x6a8);
            local_a8._8_4_ = *(undefined4 *)(this + 0x6b0);
          }
          else {
            local_a8._0_8_ = *(undefined8 *)((long)puVar9 + lVar16);
            local_a8._8_4_ = *(undefined4 *)((long)puVar9 + lVar16 + 8);
          }
          iVar15 = iVar15 + 1;
          *(undefined8 *)(local_150[0] + lVar16) = local_a8._0_8_;
          *(undefined4 *)(local_150[0] + 8 + lVar16) = local_a8._8_4_;
          lVar16 = lVar16 + 0xc;
        } while (iVar15 != (int)lVar5);
      }
      Variant::Variant((Variant *)local_a8,(Vector *)local_158);
      pVVar12 = (Variant *)Array::operator[](iVar17);
      if (pVVar12 == (Variant *)local_a8) {
        if (Variant::needs_deinit[(int)local_a8._0_4_] != '\0') {
          Variant::_clear_internal();
        }
      }
      else {
        if (Variant::needs_deinit[*(int *)pVVar12] != '\0') {
          Variant::_clear_internal();
        }
        *(undefined4 *)pVVar12 = 0;
        *(undefined4 *)pVVar12 = local_a8._0_4_;
        *(ulong *)(pVVar12 + 8) = CONCAT44(uStack_9c,local_a8._8_4_);
        *(undefined8 *)(pVVar12 + 0x10) = uStack_98;
      }
      pcVar6 = *(code **)(*plVar11 + 0x318);
      Dictionary::Dictionary(local_180);
      Array::Array(local_188);
      (*pcVar6)(plVar11,*(undefined8 *)(this + 0x690),0,local_190,local_188,local_180,0);
      Array::~Array(local_188);
      Dictionary::~Dictionary(local_180);
      pcVar6 = *(code **)(*plVar11 + 0xd68);
      uVar13 = (**(code **)(**(long **)(this + 0x678) + 0x1c0))();
      (*pcVar6)(plVar11,*(undefined8 *)(this + 0x698),0,uVar13);
      (**(code **)(*plVar11 + 0xd40))(plVar11,*(undefined8 *)(this + 0x698),(Variant *)&local_78);
      CowData<Vector3>::_unref((CowData<Vector3> *)local_150);
      Array::~Array(local_190);
      CowData<Vector3>::_unref((CowData<Vector3> *)&local_160);
      Array::~Array(local_198);
      CowData<Vector3>::_unref(local_1c8);
      goto LAB_0010465f;
    }
  }
  local_1c8 = (CowData<Vector3> *)&local_170;
  CowData<Vector3>::_unref(local_1c8);
LAB_0010465f:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* NavigationObstacle3DEditorPlugin::_wip_cancel() */

void __thiscall
NavigationObstacle3DEditorPlugin::_wip_cancel(NavigationObstacle3DEditorPlugin *this)

{
  if ((*(long *)(this + 0x6d0) != 0) && (*(long *)(*(long *)(this + 0x6d0) + -8) != 0)) {
    CowData<Vector3>::_unref((CowData<Vector3> *)(this + 0x6d0));
  }
  this[0x6d8] = (NavigationObstacle3DEditorPlugin)0x0;
  *(undefined4 *)(this + 0x6a4) = 0xffffffff;
  redraw(this);
  return;
}



/* NavigationObstacle3DEditorPlugin::edit(Object*) */

void __thiscall
NavigationObstacle3DEditorPlugin::edit(NavigationObstacle3DEditorPlugin *this,Object *param_1)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  char cVar4;
  long *plVar5;
  undefined8 uVar6;
  long in_FS_OFFSET;
  Object *local_38;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 != (Object *)0x0) {
    param_1 = (Object *)__dynamic_cast(param_1,&Object::typeinfo,&NavigationObstacle3D::typeinfo,0);
  }
  *(Object **)(this + 0x668) = param_1;
  plVar5 = (long *)RenderingServer::get_singleton();
  if (*(long *)(this + 0x668) == 0) {
    (**(code **)(*plVar5 + 0x3a8))(plVar5,*(undefined8 *)(this + 0x680));
    (**(code **)(*plVar5 + 0x3a8))(plVar5,*(undefined8 *)(this + 0x690));
    (**(code **)(*plVar5 + 0xd28))(plVar5,*(undefined8 *)(this + 0x688),0);
    if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00104ec3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar5 + 0xd28))(plVar5,*(undefined8 *)(this + 0x698),0);
      return;
    }
  }
  else {
    if (*(long *)(*(long *)(this + 0x668) + 0x558) == 0) {
      set_mode(this,0);
    }
    else {
      set_mode(this,1);
    }
    CowData<Vector3>::resize<false>((CowData<Vector3> *)(this + 0x6d0),0);
    this[0x6d8] = (NavigationObstacle3DEditorPlugin)0x0;
    lVar2 = *plVar5;
    *(undefined4 *)(this + 0x6a4) = 0xffffffff;
    pcVar3 = *(code **)(lVar2 + 0xd28);
    Node3D::get_world_3d();
    uVar6 = World3D::get_scenario();
    (*pcVar3)(plVar5,*(undefined8 *)(this + 0x688),uVar6);
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
    pcVar3 = *(code **)(*plVar5 + 0xd28);
    Node3D::get_world_3d();
    uVar6 = World3D::get_scenario();
    (*pcVar3)(plVar5,*(undefined8 *)(this + 0x698),uVar6);
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
    if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
      redraw(this);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NavigationObstacle3DGizmoPlugin::redraw(EditorNode3DGizmo*) */

void __thiscall
NavigationObstacle3DGizmoPlugin::redraw
          (NavigationObstacle3DGizmoPlugin *this,EditorNode3DGizmo *param_1)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float *pfVar7;
  code *pcVar8;
  undefined1 auVar9 [12];
  undefined1 auVar10 [12];
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  float fVar17;
  char cVar18;
  int iVar19;
  long lVar20;
  Object *pOVar21;
  float fVar22;
  ulong uVar23;
  undefined8 *puVar24;
  float *pfVar25;
  long lVar26;
  ulong uVar27;
  long in_FS_OFFSET;
  bool bVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  CowData<Vector3> *local_120;
  long local_118;
  Object *local_110;
  Ref local_108 [8];
  undefined8 *local_100 [2];
  undefined8 local_f0;
  undefined4 local_e8;
  undefined8 local_e0;
  float local_d8;
  undefined1 local_d4 [8];
  undefined4 local_cc;
  undefined1 local_c8 [8];
  float fStack_c0;
  float fStack_bc;
  undefined1 local_b8 [8];
  float fStack_b0;
  float fStack_ac;
  float local_a8;
  undefined1 local_98 [8];
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  float local_78;
  uint local_68;
  uint uStack_64;
  uint uStack_60;
  uint uStack_5c;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  (**(code **)(*(long *)param_1 + 0x160))(param_1);
  if (param_1[0x17c] == (EditorNode3DGizmo)0x0) {
    iVar19 = EditorNode3DGizmoPlugin::get_state();
    if (iVar19 == 1) goto LAB_00105a68;
  }
  if (*(long *)(param_1 + 0x1f0) != 0) {
    lVar20 = __dynamic_cast(*(long *)(param_1 + 0x1f0),&Object::typeinfo,
                            &NavigationObstacle3D::typeinfo,0);
    auVar10._8_4_ = local_90;
    auVar10._0_8_ = local_98;
    auVar9._8_4_ = local_cc;
    auVar9._0_8_ = local_d4;
    if ((lVar20 != 0) && (_local_d4 = auVar9, _local_98 = auVar10, *(long *)(lVar20 + 0x558) != 0))
    {
      fVar2 = *(float *)(lVar20 + 0x548);
      Node3D::get_global_basis();
      _local_98 = Basis::get_scale();
      fVar22 = ABS(SUB124(_local_98,4));
      local_d8 = _LC11;
      if (_LC11 < ABS(SUB124(_local_98,8))) {
        local_d8 = ABS(SUB124(_local_98,8));
      }
      if (fVar22 <= _LC11) {
        fVar22 = _LC11;
      }
      fVar31 = ABS(SUB124(_local_98,0));
      if (ABS(SUB124(_local_98,0)) <= _LC11) {
        fVar31 = _LC11;
      }
      local_e0 = CONCAT44(fVar22,fVar31);
      _local_d4 = Node3D::get_global_rotation();
      _local_c8 = ZEXT416(_LC6);
      local_f0 = _LC16;
      local_e8 = 0;
      local_a8 = 1.0;
      _local_b8 = _local_c8;
      Basis::set_axis_angle_scale((Vector3 *)local_c8,(float)local_d4._4_4_,(Vector3 *)&local_f0);
      Node3D::get_global_basis();
      Basis::inverse();
      fVar32 = local_a8;
      fVar17 = local_90;
      uVar14 = local_b8._4_4_;
      uVar12 = local_c8._4_4_;
      uVar13 = local_b8._0_4_;
      fVar22 = fStack_c0;
      fVar30 = fStack_ac;
      uVar11 = local_c8._0_4_;
      fVar31 = fStack_bc;
      fVar33 = fStack_b0;
      uVar15 = local_98._0_4_;
      uVar16 = local_98._4_4_;
      if (*(long *)(lVar20 + 0x558) == 0) {
        local_100[0] = (undefined8 *)0x0;
        CowData<Vector3>::resize<false>((CowData<Vector3> *)local_100,0);
        CowData<Vector3>::_copy_on_write((CowData<Vector3> *)local_100);
      }
      else {
        local_100[0] = (undefined8 *)0x0;
        iVar19 = (int)*(undefined8 *)(*(long *)(lVar20 + 0x558) + -8);
        CowData<Vector3>::resize<false>((CowData<Vector3> *)local_100,(long)(iVar19 * 8));
        CowData<Vector3>::_copy_on_write((CowData<Vector3> *)local_100);
        if (0 < iVar19) {
          pfVar7 = *(float **)(lVar20 + 0x558);
          if (pfVar7 == (float *)0x0) {
            uVar23 = 0;
            lVar26 = 0;
LAB_00105b23:
            _err_print_index_error
                      ("get","./core/templates/cowdata.h",0xdb,uVar23,lVar26,"p_index","size()","",
                       false,true);
            _err_flush_stdout();
                    /* WARNING: Does not return */
            pcVar8 = (code *)invalidInstructionException();
            (*pcVar8)();
          }
          lVar26 = *(long *)(pfVar7 + -2);
          fVar37 = local_7c * (float)uVar14 + local_80 * fVar22 + local_78 * fVar32;
          fVar38 = local_7c * (float)uVar13 + local_80 * (float)uVar12 + local_78 * fVar30;
          fVar39 = local_7c * fVar31 + local_80 * (float)uVar11 + local_78 * fVar33;
          fVar40 = local_88 * (float)uVar14 + local_8c * fVar22 + local_84 * fVar32;
          fVar41 = local_88 * (float)uVar13 + local_8c * (float)uVar12 + local_84 * fVar30;
          fVar42 = local_88 * fVar31 + local_8c * (float)uVar11 + local_84 * fVar33;
          fVar32 = (float)uVar14 * (float)uVar16 + fVar22 * (float)uVar15 + fVar32 * fVar17;
          fVar30 = (float)uVar13 * (float)uVar16 + (float)uVar12 * (float)uVar15 + fVar30 * fVar17;
          fVar22 = fVar31 * (float)uVar16 + (float)uVar11 * (float)uVar15 + fVar33 * fVar17;
          puVar24 = local_100[0];
          pfVar25 = pfVar7;
          uVar27 = 0;
          do {
            uVar23 = uVar27;
            if (lVar26 <= (long)uVar27) goto LAB_00105b23;
            fVar31 = *pfVar25;
            fVar33 = pfVar25[1];
            fVar3 = pfVar25[2];
            uVar23 = (ulong)(((int)uVar27 + 1) % iVar19);
            if (lVar26 <= (long)uVar23) goto LAB_00105b23;
            pfVar1 = pfVar7 + uVar23 * 3;
            fVar4 = *pfVar1;
            fVar5 = pfVar1[1];
            fVar6 = pfVar1[2];
            fVar29 = fVar33 - fVar5;
            fVar48 = fVar31 - fVar4;
            fVar35 = fVar3 - fVar6;
            fVar34 = fVar29 * fVar29 + fVar48 * fVar48 + fVar35 * fVar35;
            if (fVar34 == 0.0) {
              fVar35 = 0.0;
              fVar48 = 0.0;
              fVar29 = 0.0;
            }
            else {
              fVar34 = SQRT(fVar34);
              fVar48 = fVar48 / fVar34;
              fVar29 = fVar29 / fVar34;
              fVar35 = fVar35 / fVar34;
            }
            pfVar25 = pfVar25 + 3;
            fVar34 = fStack_ac * fVar29 + fStack_b0 * fVar48 + local_a8 * fVar35;
            fVar43 = fStack_c0 * fVar35 +
                     (float)local_c8._4_4_ * fVar29 + (float)local_c8._0_4_ * fVar48;
            fVar29 = (fVar29 * (float)local_b8._0_4_ + fVar48 * fStack_bc +
                     fVar35 * (float)local_b8._4_4_) * 0.0;
            fVar47 = fVar43 - fVar29;
            fVar29 = fVar29 - fVar34;
            fVar49 = fVar34 * 0.0 - fVar43 * 0.0;
            fVar35 = (fVar4 - fVar31) * __LC117 + fVar31;
            fVar48 = (fVar6 - fVar3) * __LC117 + fVar3;
            fVar34 = (fVar5 - fVar33) * __LC117 + fVar33;
            fVar44 = fVar38 * fVar34 + fVar39 * fVar35 + fVar37 * fVar48;
            fVar45 = fVar41 * fVar34 + fVar42 * fVar35 + fVar40 * fVar48;
            fVar34 = fVar34 * fVar30 + fVar35 * fVar22 + fVar48 * fVar32;
            fVar48 = fVar38 * fVar33 + fVar39 * fVar31 + fVar37 * fVar3;
            fVar46 = fVar41 * fVar33 + fVar42 * fVar31 + fVar40 * fVar3;
            fVar36 = fVar33 * fVar30 + fVar31 * fVar22 + fVar3 * fVar32;
            fVar43 = fVar39 * fVar31 + fVar38 * fVar2 + fVar37 * fVar3;
            fVar35 = fVar42 * fVar31 + fVar41 * fVar2 + fVar40 * fVar3;
            fVar31 = fVar31 * fVar22 + fVar30 * fVar2 + fVar3 * fVar32;
            fVar33 = ((float)uVar16 * fVar49 + (float)uVar15 * fVar29 + fVar17 * fVar47) * __LC117;
            *puVar24 = CONCAT44(fVar45,fVar34);
            puVar24[1] = CONCAT44(fVar33 + fVar34,fVar44);
            puVar24[2] = CONCAT44((local_7c * fVar49 + local_80 * fVar29 + local_78 * fVar47) *
                                  __LC117 + fVar44,
                                  (local_88 * fVar49 + local_8c * fVar29 + local_84 * fVar47) *
                                  __LC117 + fVar45);
            puVar24[3] = CONCAT44(fVar46,fVar36);
            *(float *)(puVar24 + 8) = fVar41 * fVar2 + fVar42 * fVar4 + fVar40 * fVar6;
            *(float *)((long)puVar24 + 0x44) = fVar38 * fVar2 + fVar39 * fVar4 + fVar37 * fVar6;
            *(float *)(puVar24 + 9) = fVar36;
            *(float *)((long)puVar24 + 0x4c) = fVar46;
            puVar24[4] = CONCAT44(fVar6 * fVar32 + fVar30 * fVar5 + fVar4 * fVar22,fVar48);
            puVar24[5] = CONCAT44(fVar5 * fVar38 + fVar39 * fVar4 + fVar37 * fVar6,
                                  fVar41 * fVar5 + fVar42 * fVar4 + fVar40 * fVar6);
            puVar24[6] = CONCAT44(fVar35,fVar31);
            puVar24[7] = CONCAT44(fVar30 * fVar2 + fVar4 * fVar22 + fVar6 * fVar32,fVar43);
            puVar24[10] = CONCAT44(fVar31,fVar48);
            puVar24[0xb] = CONCAT44(fVar43,fVar35);
            bVar28 = uVar27 != iVar19 - 1;
            puVar24 = puVar24 + 0xc;
            uVar27 = uVar27 + 1;
          } while (bVar28);
        }
      }
      local_120 = (CowData<Vector3> *)local_100;
      NavigationServer3D::get_singleton();
      local_68 = _LC6;
      uStack_64 = _LC6;
      uStack_60 = _LC6;
      uStack_5c = _LC6;
      if (*(char *)(lVar20 + 0x561) == '\0') {
        NavigationServer3D::get_debug_navigation_avoidance_static_obstacle_pushin_edge_material();
      }
      else {
        NavigationServer3D::get_debug_navigation_avoidance_static_obstacle_pushout_edge_material();
      }
      local_110 = (Object *)0x0;
      if (local_118 != 0) {
        local_110 = (Object *)0x0;
        pOVar21 = (Object *)__dynamic_cast(local_118,&Object::typeinfo,&Material::typeinfo);
        if (pOVar21 != (Object *)0x0) {
          local_110 = pOVar21;
          cVar18 = RefCounted::reference();
          if (cVar18 == '\0') {
            local_110 = (Object *)0x0;
          }
        }
      }
      EditorNode3DGizmo::add_lines((Vector *)param_1,local_108,SUB81(&local_110,0),(Color *)0x0);
      if (local_110 != (Object *)0x0) {
        cVar18 = RefCounted::unreference();
        pOVar21 = local_110;
        if (cVar18 != '\0') {
          cVar18 = predelete_handler(local_110);
          if (cVar18 != '\0') {
            (**(code **)(*(long *)pOVar21 + 0x140))(pOVar21);
            Memory::free_static(pOVar21,false);
          }
        }
      }
      Ref<StandardMaterial3D>::unref((Ref<StandardMaterial3D> *)&local_118);
      EditorNode3DGizmo::add_collision_segments((Vector *)param_1);
      if (param_1[0x17c] != (EditorNode3DGizmo)0x0) {
        NavigationObstacle3DEditorPlugin::redraw(NavigationObstacle3DEditorPlugin::singleton);
      }
      CowData<Vector3>::_unref(local_120);
    }
  }
LAB_00105a68:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CowData<Vector3>::insert(long, Vector3 const&) [clone .isra.0] */

void __thiscall CowData<Vector3>::insert(CowData<Vector3> *this,long param_1,Vector3 *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  if (*(long *)this == 0) {
    lVar3 = 1;
    lVar5 = 0;
  }
  else {
    lVar5 = *(long *)(*(long *)this + -8);
    lVar3 = lVar5 + 1;
  }
  if ((-1 < param_1) && (param_1 < lVar3)) {
    iVar2 = resize<false>(this,lVar3);
    if (iVar2 == 0) {
      _copy_on_write(this);
      lVar3 = *(long *)this;
      if (param_1 < lVar5) {
        lVar4 = (param_1 * 3 + 3) * 4;
        memmove((void *)(lVar4 + lVar3),(void *)(lVar3 + -0xc + lVar4),(lVar5 - param_1) * 0xc);
      }
      puVar1 = (undefined8 *)(lVar3 + param_1 * 0xc);
      *puVar1 = *(undefined8 *)param_2;
      *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_2 + 8);
      return;
    }
    _err_print_error("insert","./core/templates/cowdata.h",0xf2,
                     "Condition \"err\" is true. Returning: err",0,0);
    return;
  }
  _err_print_index_error
            ("insert","./core/templates/cowdata.h",0xf0,param_1,lVar3,"p_pos","new_size","",false,
             false);
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



/* NavigationObstacle3DEditorPlugin::_wip_close() */

void __thiscall NavigationObstacle3DEditorPlugin::_wip_close(NavigationObstacle3DEditorPlugin *this)

{
  undefined8 *__dest;
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  StringName *pSVar4;
  code *pcVar5;
  char cVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long lVar9;
  Object *pOVar10;
  undefined8 *puVar11;
  long lVar12;
  size_t sVar13;
  long *plVar14;
  long in_FS_OFFSET;
  undefined8 local_b8;
  long local_b0;
  Vector local_a8 [8];
  undefined8 *local_a0;
  char *local_98;
  long local_90;
  Variant *local_88 [2];
  int local_78 [6];
  undefined8 local_60;
  undefined1 local_58 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(this + 0x668) == 0) {
    _err_print_error("_wip_close","editor/plugins/navigation_obstacle_3d_editor_plugin.cpp",0x18a,
                     "Parameter \"obstacle_node\" is null.",
                     "Edited NavigationObstacle3D is not valid.",0,0);
    goto LAB_001062ed;
  }
  local_a0 = (undefined8 *)0x0;
  if (*(long *)(this + 0x6d0) != 0) {
    lVar9 = *(long *)(*(long *)(this + 0x6d0) + -8);
    if (lVar9 < 0) {
      _err_print_error("resize","./core/templates/cowdata.h",0x157,
                       "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER",0,0);
      lVar9 = *(long *)(this + 0x6d0);
    }
    else {
      if (lVar9 == 0) goto LAB_00105fc8;
      sVar13 = lVar9 * 8;
      if ((sVar13 == 0) ||
         (uVar7 = sVar13 - 1 | sVar13 - 1 >> 1, uVar7 = uVar7 | uVar7 >> 2,
         uVar7 = uVar7 | uVar7 >> 4, uVar7 = uVar7 | uVar7 >> 8, uVar7 = uVar7 | uVar7 >> 0x10,
         uVar7 = uVar7 | uVar7 >> 0x20, uVar7 == 0xffffffffffffffff)) {
        _err_print_error("resize","./core/templates/cowdata.h",0x16a,
                         "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                         ,0,0);
        lVar9 = *(long *)(this + 0x6d0);
      }
      else {
        puVar8 = (undefined8 *)Memory::alloc_static(uVar7 + 0x11,false);
        if (puVar8 == (undefined8 *)0x0) {
          _err_print_error("resize","./core/templates/cowdata.h",0x171,
                           "Parameter \"mem_new\" is null.",0,0);
          lVar9 = *(long *)(this + 0x6d0);
        }
        else {
          local_a0 = puVar8 + 2;
          *puVar8 = 1;
          memset(local_a0,0,sVar13);
          puVar8[1] = lVar9;
          lVar9 = *(long *)(this + 0x6d0);
        }
      }
    }
    if (lVar9 != 0) {
      lVar12 = 0;
      do {
        if (*(long *)(lVar9 + -8) <= lVar12) break;
        puVar1 = (undefined4 *)(lVar9 + lVar12 * 0xc);
        uVar2 = puVar1[2];
        uVar3 = *puVar1;
        if (local_a0 == (undefined8 *)0x0) {
          lVar9 = 0;
LAB_00105f81:
          _err_print_index_error
                    ("operator[]","./core/templates/vector.h",0x38,lVar12,lVar9,"p_index",
                     "((Vector<T> *)(this))->_cowdata.size()","",false,true);
          _err_flush_stdout();
                    /* WARNING: Does not return */
          pcVar5 = (code *)invalidInstructionException();
          (*pcVar5)();
        }
        lVar9 = local_a0[-1];
        if (lVar9 <= lVar12) goto LAB_00105f81;
        if (1 < (ulong)local_a0[-2]) {
          if (local_a0 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)invalidInstructionException();
            (*pcVar5)();
          }
          lVar9 = local_a0[-1];
          uVar7 = 0x10;
          sVar13 = lVar9 * 8;
          if (sVar13 != 0) {
            uVar7 = sVar13 - 1 | sVar13 - 1 >> 1;
            uVar7 = uVar7 | uVar7 >> 2;
            uVar7 = uVar7 | uVar7 >> 4;
            uVar7 = uVar7 | uVar7 >> 8;
            uVar7 = uVar7 | uVar7 >> 0x10;
            uVar7 = (uVar7 | uVar7 >> 0x20) + 0x11;
          }
          puVar11 = (undefined8 *)Memory::alloc_static(uVar7,false);
          puVar8 = local_a0;
          if (puVar11 == (undefined8 *)0x0) {
            _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                             "Parameter \"mem_new\" is null.",0,0);
          }
          else {
            __dest = puVar11 + 2;
            *puVar11 = 1;
            puVar11[1] = lVar9;
            memcpy(__dest,local_a0,sVar13);
            puVar11 = local_a0;
            LOCK();
            plVar14 = puVar8 + -2;
            *plVar14 = *plVar14 + -1;
            UNLOCK();
            local_a0 = __dest;
            if (*plVar14 == 0) {
              local_a0 = (undefined8 *)0x0;
              Memory::free_static(puVar11 + -2,false);
              local_a0 = __dest;
            }
          }
        }
        lVar9 = *(long *)(this + 0x6d0);
        local_a0[lVar12] = CONCAT44(uVar2,uVar3);
        lVar12 = lVar12 + 1;
      } while (lVar9 != 0);
    }
  }
LAB_00105fc8:
  local_90 = 0;
  cVar6 = Triangulate::triangulate(local_a8,(Vector *)&local_98);
  lVar9 = local_90;
  if (cVar6 == '\0') {
    if (local_90 != 0) {
      LOCK();
      plVar14 = (long *)(local_90 + -0x10);
      *plVar14 = *plVar14 + -1;
      UNLOCK();
      if (*plVar14 == 0) {
        local_90 = 0;
        Memory::free_static((void *)(lVar9 + -0x10),false);
      }
    }
  }
  else if (local_90 != 0) {
    pOVar10 = (Object *)EditorUndoRedoManager::get_singleton();
    local_b0 = 0;
    local_98 = "";
    local_90 = 0;
    String::parse_latin1((StrRange *)&local_b0);
    local_98 = "Set Obstacle Vertices";
    local_b8 = 0;
    local_90 = 0x15;
    String::parse_latin1((StrRange *)&local_b8);
    TTR((String *)&local_98,(String *)&local_b8);
    EditorUndoRedoManager::create_action(pOVar10,(String *)&local_98,0,0,0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
    local_90 = 0;
    if (*(long *)(this + 0x6d0) != 0) {
      CowData<Vector3>::_ref((CowData<Vector3> *)&local_90,(CowData *)(this + 0x6d0));
    }
    StringName::StringName((StringName *)&local_b0,"set_vertices",false);
    pSVar4 = *(StringName **)(this + 0x668);
    Variant::Variant((Variant *)local_78,(Vector *)&local_98);
    local_60 = 0;
    local_58 = (undefined1  [16])0x0;
    local_88[0] = (Variant *)local_78;
    EditorUndoRedoManager::add_do_methodp(pOVar10,pSVar4,(Variant **)&local_b0,(int)local_88);
    if (Variant::needs_deinit[(int)local_60] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
    if ((StringName::configured != '\0') && (local_b0 != 0)) {
      StringName::unref();
    }
    CowData<Vector3>::_unref((CowData<Vector3> *)&local_90);
    local_90 = 0;
    if (*(long *)(*(long *)(this + 0x668) + 0x558) != 0) {
      CowData<Vector3>::_ref
                ((CowData<Vector3> *)&local_90,(CowData *)(*(long *)(this + 0x668) + 0x558));
    }
    StringName::StringName((StringName *)&local_b0,"set_vertices",false);
    pSVar4 = *(StringName **)(this + 0x668);
    Variant::Variant((Variant *)local_78,(Vector *)&local_98);
    local_60 = 0;
    local_58 = (undefined1  [16])0x0;
    local_88[0] = (Variant *)local_78;
    EditorUndoRedoManager::add_undo_methodp(pOVar10,pSVar4,(Variant **)&local_b0,(int)local_88);
    if (Variant::needs_deinit[(int)local_60] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
    if ((StringName::configured != '\0') && (local_b0 != 0)) {
      StringName::unref();
    }
    CowData<Vector3>::_unref((CowData<Vector3> *)&local_90);
    EditorUndoRedoManager::commit_action(SUB81(pOVar10,0));
    CowData<Vector3>::resize<false>((CowData<Vector3> *)(this + 0x6d0),0);
    this[0x6d8] = (NavigationObstacle3DEditorPlugin)0x0;
    set_mode(singleton,1);
    BaseButton::set_pressed(SUB81(*(undefined8 *)(this + 0x6e8),0));
    BaseButton::set_pressed(SUB81(*(undefined8 *)(this + 0x6e0),0));
    *(undefined4 *)(this + 0x6a4) = 0xffffffff;
    plVar14 = (long *)(lVar9 + -0x10);
    LOCK();
    *plVar14 = *plVar14 + -1;
    UNLOCK();
    if (*plVar14 == 0) {
      Memory::free_static(plVar14,false);
    }
  }
  puVar8 = local_a0;
  if (local_a0 != (undefined8 *)0x0) {
    LOCK();
    plVar14 = local_a0 + -2;
    *plVar14 = *plVar14 + -1;
    UNLOCK();
    if (*plVar14 == 0) {
      local_a0 = (undefined8 *)0x0;
      Memory::free_static(puVar8 + -2,false);
    }
  }
LAB_001062ed:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* NavigationObstacle3DEditorPlugin::forward_3d_gui_input(Camera3D*, Ref<InputEvent> const&) [clone
   .part.0] */

undefined8 __thiscall
NavigationObstacle3DEditorPlugin::forward_3d_gui_input
          (NavigationObstacle3DEditorPlugin *this,Camera3D *param_1,Ref *param_2)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined1 auVar3 [16];
  char cVar4;
  int iVar5;
  undefined4 uVar6;
  Object *pOVar7;
  Object *pOVar8;
  Object *pOVar9;
  Object *pOVar10;
  ulong uVar11;
  EditorUndoRedoManager *pEVar12;
  undefined8 uVar13;
  long lVar14;
  Vector3 *pVVar15;
  Vector2 *pVVar16;
  long lVar17;
  long lVar18;
  ulong uVar19;
  long in_FS_OFFSET;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined1 auVar28 [12];
  EditorUndoRedoManager *local_270;
  float local_268;
  float local_1f8;
  int local_1f4;
  undefined8 local_1d8;
  long local_1d0;
  undefined1 local_1c8 [8];
  long local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  ulong local_1a0;
  undefined8 local_198;
  float local_190;
  ulong local_188;
  float local_180;
  undefined1 local_178 [8];
  float local_170;
  undefined1 local_168 [12];
  undefined1 local_15c [8];
  undefined4 local_154;
  undefined1 local_150 [8];
  float local_148;
  undefined1 local_144 [8];
  undefined4 local_13c;
  undefined1 local_138 [12];
  float fStack_12c;
  undefined1 local_128 [16];
  undefined4 local_118;
  undefined1 local_108 [8];
  undefined8 uStack_100;
  undefined1 local_f8 [16];
  undefined4 local_e8;
  float local_d8;
  float fStack_d4;
  undefined8 local_d0;
  float local_c8;
  float fStack_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  undefined8 local_b4;
  float local_ac;
  ulong local_a8;
  undefined8 local_a0;
  float local_84;
  float local_80;
  float local_7c;
  float local_78;
  float fStack_74;
  undefined8 local_70;
  float local_68;
  float fStack_64;
  float local_60;
  float fStack_5c;
  float local_58;
  float fStack_54;
  float local_50;
  float fStack_4c;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((*(long *)param_2 != 0) &&
     (pOVar7 = (Object *)
               __dynamic_cast(*(long *)param_2,&Object::typeinfo,&InputEventMouse::typeinfo,0),
     pOVar7 != (Object *)0x0)) {
    cVar4 = RefCounted::reference();
    if (cVar4 != '\0') {
      lVar18 = *(long *)param_2;
      if (lVar18 == 0) {
LAB_00106c06:
        uVar13 = 0;
      }
      else {
        pOVar8 = (Object *)
                 __dynamic_cast(lVar18,&Object::typeinfo,&InputEventMouseButton::typeinfo,0);
        if (pOVar8 == (Object *)0x0) {
LAB_00106b8c:
          pOVar9 = (Object *)
                   __dynamic_cast(lVar18,&Object::typeinfo,&InputEventMouseMotion::typeinfo,0);
          if (pOVar9 == (Object *)0x0) {
LAB_00106bc8:
            pOVar10 = (Object *)__dynamic_cast(lVar18,&Object::typeinfo,&InputEventKey::typeinfo,0);
            if (pOVar10 != (Object *)0x0) {
              cVar4 = RefCounted::reference();
              if (cVar4 != '\0') {
                cVar4 = InputEvent::is_pressed();
                if ((cVar4 != '\0') && (this[0x6d8] != (NavigationObstacle3DEditorPlugin)0x0)) {
                  iVar5 = InputEventKey::get_keycode();
                  if (iVar5 == 0x400005) {
                    _wip_close(this);
                  }
                  else if (this[0x6d8] != (NavigationObstacle3DEditorPlugin)0x0) {
                    iVar5 = InputEventKey::get_keycode();
                    if (iVar5 == 0x400001) {
                      _wip_cancel(this);
                    }
                  }
                }
                cVar4 = RefCounted::unreference();
                if (cVar4 != '\0') {
                  cVar4 = predelete_handler(pOVar10);
                  if (cVar4 != '\0') {
                    (**(code **)(*(long *)pOVar10 + 0x140))(pOVar10);
                    Memory::free_static(pOVar10,false);
                  }
                }
              }
            }
            if (pOVar9 != (Object *)0x0) {
LAB_00107080:
              cVar4 = RefCounted::unreference();
              if (cVar4 != '\0') {
                cVar4 = predelete_handler(pOVar9);
                if (cVar4 != '\0') {
                  (**(code **)(*(long *)pOVar9 + 0x140))(pOVar9);
                  Memory::free_static(pOVar9,false);
                }
              }
            }
          }
          else {
            cVar4 = RefCounted::reference();
            if (cVar4 != '\0') {
              if (*(int *)(this + 0x6a4) == -1) {
LAB_00107073:
                lVar18 = *(long *)param_2;
                if (lVar18 != 0) goto LAB_00106bc8;
              }
              else {
                if (this[0x6d8] == (NavigationObstacle3DEditorPlugin)0x0) {
                  uVar11 = InputEventMouse::get_button_mask();
                  if ((uVar11 & 1) == 0) goto LAB_00107073;
                }
                local_1a0 = InputEventMouse::get_position();
                _local_178 = (**(code **)(*(long *)param_1 + 0x208))(param_1,&local_1a0);
                auVar28 = (**(code **)(*(long *)param_1 + 0x200))(param_1,&local_1a0);
                local_168 = auVar28;
                Node3D::get_global_basis();
                auVar28 = Basis::get_scale();
                local_a8 = auVar28._0_8_;
                local_a0 = CONCAT44(local_a0._4_4_,auVar28._8_4_);
                fVar20 = ABS(auVar28._8_4_);
                local_190 = _LC11;
                if (_LC11 < fVar20) {
                  local_190 = fVar20;
                }
                fVar20 = _LC11;
                if (_LC11 < ABS(auVar28._4_4_)) {
                  fVar20 = ABS(auVar28._4_4_);
                }
                fVar24 = ABS(auVar28._0_4_);
                if (ABS(auVar28._0_4_) <= _LC11) {
                  fVar24 = _LC11;
                }
                local_198 = CONCAT44(fVar20,fVar24);
                _local_150 = Node3D::get_global_position();
                _local_138 = ZEXT416(_LC6);
                local_118 = 0x3f800000;
                local_128 = _local_138;
                Basis::scaled((Vector3 *)local_108);
                auVar28 = Node3D::get_global_rotation();
                local_15c._4_4_ = auVar28._4_4_;
                local_188 = _LC16;
                local_180 = 0.0;
                Basis::rotated((Vector3 *)&local_78,(float)local_15c._4_4_);
                _local_15c = auVar28;
                Transform3D::Transform3D
                          ((Transform3D *)&local_a8,(Basis *)&local_78,(Vector3 *)local_150);
                Transform3D::affine_inverse();
                local_138 = ZEXT812(0);
                uStack_100._0_4_ = 0;
                local_108 = (undefined1  [8])_LC16;
                uStack_100._4_4_ = local_84 * 0.0 + local_80 + local_7c * 0.0;
                cVar4 = Plane::intersects_ray
                                  ((Vector3 *)local_108,(Vector3 *)local_178,(Vector3 *)local_168);
                if (cVar4 != '\0') {
                  uVar6 = local_138._8_4_;
                  fVar20 = SUB164(_local_138,0);
                  fVar24 = SUB164(_local_138,4);
                  fStack_4c = local_60 * fVar20 + fStack_5c * fVar24 +
                              local_58 * (float)local_138._8_4_ + fStack_4c;
                  local_150 = (undefined1  [8])
                              CONCAT44(fStack_4c,
                                       local_78 * fVar20 + fStack_74 * fVar24 +
                                       (float)local_70 * (float)local_138._8_4_ + fStack_54);
                  local_138._8_4_ = fStack_4c;
                  auVar3 = _local_138;
                  local_138._4_4_ =
                       local_68 * fVar24 + (float)((ulong)local_70 >> 0x20) * fVar20 +
                       fStack_64 * (float)uVar6 + local_50;
                  local_138._0_4_ =
                       fStack_74 * fVar24 + local_78 * fVar20 + (float)local_70 * (float)uVar6 +
                       fStack_54;
                  stack0xfffffffffffffed0 = auVar3._8_8_;
                  if (this[0x6d9] == (NavigationObstacle3DEditorPlugin)0x0) {
LAB_00107025:
                    if (*(char *)(Node3DEditor::singleton + 0xe00) !=
                        *(char *)(Node3DEditor::singleton + 0xe01)) {
                      fVar20 = (float)Node3DEditor::get_translate_snap();
                      local_150 = (undefined1  [8])Vector2::snappedf(fVar20);
                    }
                  }
                  else {
                    uVar13 = Input::get_singleton();
                    cVar4 = Input::is_key_pressed(uVar13);
                    if (cVar4 == '\0') {
                      this[0x6d9] = (NavigationObstacle3DEditorPlugin)0x0;
                      goto LAB_00107025;
                    }
                    if (this[0x6d9] == (NavigationObstacle3DEditorPlugin)0x0) goto LAB_00107025;
                  }
                  *(undefined4 *)(this + 0x6ac) = 0;
                  *(undefined4 *)(this + 0x6a8) = local_150._0_4_;
                  *(undefined4 *)(this + 0x6b0) = local_150._4_4_;
                  redraw(this);
                  goto LAB_00107073;
                }
              }
              goto LAB_00107080;
            }
            lVar18 = *(long *)param_2;
            if (lVar18 != 0) {
              pOVar9 = (Object *)0x0;
              goto LAB_00106bc8;
            }
          }
          if (pOVar8 == (Object *)0x0) goto LAB_00106c06;
LAB_00106b40:
          uVar13 = 0;
        }
        else {
          cVar4 = RefCounted::reference();
          if (cVar4 == '\0') {
            lVar18 = *(long *)param_2;
            if (lVar18 == 0) goto LAB_00106c06;
            pOVar8 = (Object *)0x0;
            goto LAB_00106b8c;
          }
          local_1a8 = InputEventMouse::get_position();
          local_168 = (**(code **)(*(long *)param_1 + 0x208))(param_1,&local_1a8);
          _local_15c = (**(code **)(*(long *)param_1 + 0x200))(param_1,&local_1a8);
          Node3D::get_global_basis();
          auVar28 = Basis::get_scale();
          local_a8 = auVar28._0_8_;
          local_a0 = CONCAT44(local_a0._4_4_,auVar28._8_4_);
          local_190 = ABS(auVar28._8_4_);
          if (local_190 <= _LC11) {
            local_190 = _LC11;
          }
          fVar20 = ABS(auVar28._4_4_);
          if (ABS(auVar28._4_4_) <= _LC11) {
            fVar20 = _LC11;
          }
          fVar24 = ABS(auVar28._0_4_);
          if (ABS(auVar28._0_4_) <= _LC11) {
            fVar24 = _LC11;
          }
          local_198 = CONCAT44(fVar20,fVar24);
          local_138 = Node3D::get_global_position();
          _local_108 = ZEXT416(_LC6);
          local_e8 = 0x3f800000;
          local_f8 = _local_108;
          Basis::scaled((Vector3 *)&local_d8);
          _local_144 = Node3D::get_global_rotation();
          local_150 = (undefined1  [8])_LC16;
          local_148 = 0.0;
          Basis::rotated((Vector3 *)&local_a8,(float)local_144._4_4_);
          Transform3D::Transform3D((Transform3D *)&local_78,(Basis *)&local_a8,(Vector3 *)local_138)
          ;
          Transform3D::affine_inverse();
          local_188 = 0;
          local_180 = 0.0;
          local_138._8_4_ = 0;
          local_138._0_8_ = _LC16;
          fStack_12c = fStack_54 * 0.0 + local_50 + fStack_4c * 0.0;
          cVar4 = Plane::intersects_ray
                            ((Vector3 *)local_138,(Vector3 *)local_168,(Vector3 *)local_15c);
          if (cVar4 == '\0') goto LAB_00106b40;
          local_1c0 = 0;
          fVar23 = (float)((ulong)local_d0 >> 0x20);
          fVar24 = (float)local_188;
          fVar21 = (float)(local_188 >> 0x20);
          fVar20 = fVar24 * local_d8 + fVar21 * fStack_d4 + local_180 * (float)local_d0 +
                   (float)local_b4;
          fVar26 = (float)((ulong)local_b4 >> 0x20);
          local_188 = CONCAT44(fVar24 * fVar23 + fVar21 * local_c8 + local_180 * fStack_c4 + fVar26,
                               fVar20);
          fVar24 = fVar21 * local_bc + local_c0 * fVar24 + local_180 * local_b8 + local_ac;
          local_180 = fVar24;
          if (*(long *)(*(long *)(this + 0x668) + 0x558) != 0) {
            CowData<Vector3>::_ref
                      ((CowData<Vector3> *)&local_1c0,(CowData *)(*(long *)(this + 0x668) + 0x558));
          }
          local_1b8 = 0;
          String::parse_latin1((String *)&local_1b8,"editors/polygon_editor/point_grab_radius");
          _EDITOR_GET((String *)&local_a8);
          fVar21 = Variant::operator_cast_to_float((Variant *)&local_a8);
          if (Variant::needs_deinit[(int)local_a8] != '\0') {
            Variant::_clear_internal();
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_1b8);
          iVar5 = *(int *)(this + 0x6a0);
          if (iVar5 != 1) {
            if (iVar5 == 2) {
              iVar5 = InputEventMouseButton::get_button_index();
              if (iVar5 == 1) {
                cVar4 = InputEvent::is_pressed();
                if ((cVar4 != '\0') && (local_1c0 != 0)) {
                  lVar18 = 0;
                  iVar5 = -1;
                  fVar20 = _LC129;
                  do {
                    if (*(long *)(local_1c0 + -8) <= lVar18) break;
                    puVar1 = (undefined8 *)(local_1c0 + lVar18 * 0xc);
                    uVar13 = *puVar1;
                    fVar24 = *(float *)(puVar1 + 1);
                    fVar23 = (float)uVar13;
                    fVar26 = (float)((ulong)uVar13 >> 0x20);
                    local_a0 = CONCAT44(local_a0._4_4_,
                                        local_60 * fVar23 + fStack_5c * fVar26 + local_58 * fVar24 +
                                        fStack_4c);
                    local_a8 = CONCAT44((float)((ulong)local_70 >> 0x20) * fVar23 +
                                        local_68 * fVar26 + fStack_64 * fVar24 + local_50,
                                        local_78 * fVar23 + fStack_74 * fVar26 +
                                        (float)local_70 * fVar24 + fStack_54);
                    uVar13 = (**(code **)(*(long *)param_1 + 0x218))(param_1,(Vector3 *)&local_a8);
                    local_108 = (undefined1  [8])uVar13;
                    fVar24 = (float)Vector2::distance_to((Vector2 *)local_108);
                    if (fVar24 < fVar20) {
                      if (fVar24 < fVar21) {
                        iVar5 = (int)lVar18;
                      }
                      fVar20 = (float)((uint)fVar20 & -(uint)(fVar21 <= fVar24) |
                                      ~-(uint)(fVar21 <= fVar24) & (uint)fVar24);
                    }
                    lVar18 = lVar18 + 1;
                  } while (local_1c0 != 0);
                  if (-1 < iVar5) {
                    *(undefined4 *)(this + 0x6a4) = 0xffffffff;
                    local_270 = (EditorUndoRedoManager *)EditorUndoRedoManager::get_singleton();
                    local_1d0 = 0;
                    String::parse_latin1((String *)&local_1d0,"");
                    local_1d8 = 0;
                    String::parse_latin1((String *)&local_1d8,"Edit Obstacle (Remove Vertex)");
                    TTR((String *)&local_1b8,(String *)&local_1d8);
                    EditorUndoRedoManager::create_action(local_270,(String *)&local_1b8,0,0);
                    CowData<char32_t>::_unref((CowData<char32_t> *)&local_1b8);
                    CowData<char32_t>::_unref((CowData<char32_t> *)&local_1d8);
                    CowData<char32_t>::_unref((CowData<char32_t> *)&local_1d0);
                    local_1b0 = 0;
                    if (local_1c0 != 0) {
                      CowData<Vector3>::_ref((CowData<Vector3> *)&local_1b0,(CowData *)&local_1c0);
                    }
                    StringName::StringName((StringName *)&local_1d0,"set_vertices",false);
                    EditorUndoRedoManager::add_undo_method<Vector<Vector3>>
                              (local_270,*(undefined8 *)(this + 0x668),(String *)&local_1d0,
                               (String *)&local_1b8);
                    if ((StringName::configured != '\0') && (local_1d0 != 0)) {
                      StringName::unref();
                    }
                    CowData<Vector3>::_unref((CowData<Vector3> *)&local_1b0);
                    lVar18 = (long)iVar5;
                    if (local_1c0 == 0) {
                      lVar17 = 0;
LAB_001089bf:
                      _err_print_index_error
                                ("remove_at","./core/templates/cowdata.h",0xe4,lVar18,lVar17,
                                 "p_index","size()","",false,false);
                    }
                    else {
                      lVar17 = *(long *)(local_1c0 + -8);
                      if (lVar17 <= lVar18) goto LAB_001089bf;
                      CowData<Vector3>::_copy_on_write((CowData<Vector3> *)&local_1c0);
                      if (local_1c0 == 0) {
                        lVar17 = -1;
                      }
                      else {
                        lVar17 = *(long *)(local_1c0 + -8) + -1;
                        if (lVar18 < lVar17) {
                          memmove((void *)(local_1c0 + lVar18 * 0xc),
                                  (void *)(local_1c0 + 0xc + lVar18 * 0xc),
                                  (*(long *)(local_1c0 + -8) - lVar18) * 0xc - 0xc);
                        }
                      }
                      CowData<Vector3>::resize<false>((CowData<Vector3> *)&local_1c0,lVar17);
                    }
                    local_1b0 = 0;
                    if (local_1c0 != 0) {
                      CowData<Vector3>::_ref((CowData<Vector3> *)&local_1b0,(CowData *)&local_1c0);
                    }
LAB_00107507:
                    StringName::StringName((StringName *)&local_1d0,"set_vertices",false);
                    EditorUndoRedoManager::add_do_method<Vector<Vector3>>
                              (local_270,*(undefined8 *)(this + 0x668),(StringName *)&local_1d0,
                               (String *)&local_1b8);
                    if ((StringName::configured != '\0') && (local_1d0 != 0)) {
                      StringName::unref();
                    }
                    CowData<Vector3>::_unref((CowData<Vector3> *)&local_1b0);
                    EditorUndoRedoManager::commit_action(SUB81(local_270,0));
                    redraw(this);
                    goto LAB_001077f0;
                  }
                }
              }
            }
            else {
              if (iVar5 != 0) goto LAB_00106b28;
              iVar5 = InputEventMouseButton::get_button_index();
              if (iVar5 == 1) {
                cVar4 = InputEvent::is_pressed();
                auVar28._8_4_ = local_148;
                auVar28._0_8_ = local_150;
                if (cVar4 != '\0') {
                  if ((local_1c0 != 0) &&
                     (lVar18 = *(long *)(local_1c0 + -8), _local_150 = auVar28, 2 < lVar18)) {
                    local_1f4 = -1;
                    local_1a0 = 0;
                    local_1f8 = _LC129;
                    lVar17 = 0;
                    while (lVar17 < lVar18) {
                      puVar1 = (undefined8 *)(local_1c0 + lVar17 * 0xc);
                      uVar13 = *puVar1;
                      fVar22 = *(float *)(puVar1 + 1);
                      fVar25 = (float)uVar13;
                      fVar27 = (float)((ulong)uVar13 >> 0x20);
                      local_148 = local_60 * fVar25 + fStack_5c * fVar27 + local_58 * fVar22 +
                                  fStack_4c;
                      local_150 = (undefined1  [8])
                                  CONCAT44((float)((ulong)local_70 >> 0x20) * fVar25 +
                                           local_68 * fVar27 + fStack_64 * fVar22 + local_50,
                                           local_78 * fVar25 + fStack_74 * fVar27 +
                                           (float)local_70 * fVar22 + fStack_54);
                      uVar13 = (**(code **)(*(long *)param_1 + 0x218))(param_1,(Vector3 *)local_150)
                      ;
                      local_108 = (undefined1  [8])uVar13;
                      if (local_1c0 == 0)
                      goto NavigationObstacle3DEditorPlugin_forward_3d_gui_input;
                      lVar18 = *(long *)(local_1c0 + -8);
                      lVar14 = (lVar17 + 1) % lVar18;
                      if (lVar18 <= lVar14) goto LAB_00107c2f;
                      puVar1 = (undefined8 *)(local_1c0 + lVar14 * 0xc);
                      uVar13 = *puVar1;
                      fVar22 = *(float *)(puVar1 + 1);
                      fVar25 = (float)uVar13;
                      fVar27 = (float)((ulong)uVar13 >> 0x20);
                      local_a0 = CONCAT44(local_a0._4_4_,
                                          local_60 * fVar25 + fStack_5c * fVar27 + local_58 * fVar22
                                          + fStack_4c);
                      local_a8 = CONCAT44((float)((ulong)local_70 >> 0x20) * fVar25 +
                                          local_68 * fVar27 + fStack_64 * fVar22 + local_50,
                                          local_78 * fVar25 + fStack_74 * fVar27 +
                                          (float)local_70 * fVar22 + fStack_54);
                      pVVar15 = (Vector3 *)&local_a8;
                      uVar13 = (**(code **)(*(long *)param_1 + 0x218))(param_1);
                      uStack_100 = uVar13;
                      local_a8 = Geometry2D::get_closest_point_to_segment
                                           ((Vector2 *)local_108,(Vector2 *)pVVar15);
                      fVar22 = (float)Vector2::distance_squared_to((Vector2 *)&local_a8);
                      if (fVar21 <= fVar22) {
                        fVar22 = (float)Vector2::distance_squared_to((Vector2 *)&local_a8);
                        if (fVar21 <= fVar22) {
                          fVar22 = (float)Vector2::distance_to((Vector2 *)&local_a8);
                          if ((fVar22 < local_1f8) && (fVar22 < fVar21)) {
                            local_1f4 = (int)lVar17;
                            local_1a0 = local_a8;
                            local_1f8 = fVar22;
                          }
                        }
                      }
                      if (local_1c0 == 0) break;
                      lVar17 = lVar17 + 1;
                      lVar18 = *(long *)(local_1c0 + -8);
                    }
                    if (-1 < local_1f4) {
                      lVar18 = *(long *)param_1;
                      *(undefined4 *)(this + 0x6a4) = 0xffffffff;
                      _local_150 = (**(code **)(lVar18 + 0x208))(param_1,&local_1a0);
                      _local_108 = (**(code **)(*(long *)param_1 + 0x200))(param_1,&local_1a0);
                      auVar3 = _local_108;
                      local_170 = 0.0;
                      local_178 = (undefined1  [8])0x0;
                      uStack_100._4_4_ = auVar3._12_4_;
                      cVar4 = Plane::intersects_ray
                                        ((Vector3 *)local_138,(Vector3 *)local_150,
                                         (Vector3 *)local_108);
                      if (cVar4 == '\0') goto LAB_00107c82;
                      fVar20 = local_178._0_4_;
                      fVar24 = local_178._4_4_;
                      local_178 = (undefined1  [8])
                                  CONCAT44(fVar20 * fVar23 + fVar24 * local_c8 +
                                           local_170 * fStack_c4 + fVar26,
                                           fVar20 * local_d8 + fVar24 * fStack_d4 +
                                           local_170 * (float)local_d0 + (float)local_b4);
                      local_170 = local_b8 * local_170 + fVar24 * local_bc + local_c0 * fVar20 +
                                  local_ac;
                      local_270 = (EditorUndoRedoManager *)EditorUndoRedoManager::get_singleton();
                      local_1d0 = 0;
                      String::parse_latin1((String *)&local_1d0,"");
                      local_1d8 = 0;
                      String::parse_latin1((String *)&local_1d8,"Edit Obstacle (Add Vertex)");
                      TTR((String *)&local_1b8,(String *)&local_1d8);
                      EditorUndoRedoManager::create_action(local_270,(String *)&local_1b8,0,0,0);
                      CowData<char32_t>::_unref((CowData<char32_t> *)&local_1b8);
                      CowData<char32_t>::_unref((CowData<char32_t> *)&local_1d8);
                      CowData<char32_t>::_unref((CowData<char32_t> *)&local_1d0);
                      local_1b0 = 0;
                      if (local_1c0 != 0) {
                        CowData<Vector3>::_ref((CowData<Vector3> *)&local_1b0,(CowData *)&local_1c0)
                        ;
                      }
                      StringName::StringName((StringName *)&local_1d0,"set_vertices",false);
                      EditorUndoRedoManager::add_undo_method<Vector<Vector3>>
                                (local_270,*(undefined8 *)(this + 0x668),(String *)&local_1d0,
                                 (String *)&local_1b8);
                      if ((StringName::configured != '\0') && (local_1d0 != 0)) {
                        StringName::unref();
                      }
                      CowData<Vector3>::_unref((CowData<Vector3> *)&local_1b0);
                      local_a8 = (ulong)local_178;
                      local_a0 = CONCAT44(local_a0._4_4_,local_170);
                      CowData<Vector3>::insert
                                ((CowData<Vector3> *)&local_1c0,(long)(local_1f4 + 1),
                                 (Vector3 *)&local_a8);
                      local_1b0 = 0;
                      if (local_1c0 != 0) {
                        CowData<Vector3>::_ref((CowData<Vector3> *)&local_1b0,(CowData *)&local_1c0)
                        ;
                      }
                      goto LAB_00107507;
                    }
                  }
LAB_00107c82:
                  if (this[0x6d8] == (NavigationObstacle3DEditorPlugin)0x0) {
                    CowData<Vector3>::resize<false>((CowData<Vector3> *)(this + 0x6d0),0);
                    local_a8 = (ulong)(uint)fVar20;
                    local_a0 = CONCAT44(local_a0._4_4_,fVar24);
                    Vector<Vector3>::push_back(local_a8,fVar24,this + 0x6c8);
                    *(undefined2 *)(this + 0x6d8) = 1;
                    *(undefined4 *)(this + 0x6ac) = 0;
                    *(float *)(this + 0x6a8) = fVar20;
                    *(float *)(this + 0x6b0) = fVar24;
                    redraw(this);
                    *(undefined4 *)(this + 0x6a4) = 1;
                  }
                  else {
                    puVar1 = *(undefined8 **)(this + 0x6d0);
                    if ((puVar1 != (undefined8 *)0x0) && (1 < (long)puVar1[-1])) {
                      fVar23 = *(float *)(puVar1 + 1);
                      fVar26 = (float)*puVar1;
                      fVar22 = (float)((ulong)*puVar1 >> 0x20);
                      local_a0 = CONCAT44(local_a0._4_4_,
                                          local_60 * fVar26 + fStack_5c * fVar22 + local_58 * fVar23
                                          + fStack_4c);
                      local_a8 = CONCAT44((float)((ulong)local_70 >> 0x20) * fVar26 +
                                          fVar22 * local_68 + fStack_64 * fVar23 + local_50,
                                          local_78 * fVar26 + fVar22 * fStack_74 +
                                          (float)local_70 * fVar23 + fStack_54);
                      uVar13 = (**(code **)(*(long *)param_1 + 0x218))(param_1,(Vector3 *)&local_a8)
                      ;
                      local_108 = (undefined1  [8])uVar13;
                      fVar23 = (float)Vector2::distance_to((Vector2 *)local_108);
                      if (fVar23 < fVar21) {
                        _wip_close(this);
                        goto LAB_001077f0;
                      }
                    }
                    local_a8 = (ulong)(uint)fVar20;
                    local_a0 = CONCAT44(local_a0._4_4_,fVar24);
                    Vector<Vector3>::push_back(local_a8,fVar24,this + 0x6c8);
                    if (*(long *)(this + 0x6d0) == 0) {
                      uVar6 = 0;
                    }
                    else {
                      uVar6 = (undefined4)*(undefined8 *)(*(long *)(this + 0x6d0) + -8);
                    }
                    *(undefined4 *)(this + 0x6a4) = uVar6;
                    this[0x6d9] = (NavigationObstacle3DEditorPlugin)0x0;
                    redraw(this);
                  }
LAB_001077f0:
                  uVar13 = 1;
                  goto LAB_001077f5;
                }
              }
              iVar5 = InputEventMouseButton::get_button_index();
              if (iVar5 == 2) {
                cVar4 = InputEvent::is_pressed();
                if ((cVar4 != '\0') && (this[0x6d8] != (NavigationObstacle3DEditorPlugin)0x0)) {
                  _wip_close(this);
                }
              }
            }
LAB_00106b28:
            CowData<Vector3>::_unref((CowData<Vector3> *)&local_1c0);
            lVar18 = *(long *)param_2;
            if (lVar18 != 0) goto LAB_00106b8c;
            goto LAB_00106b40;
          }
          iVar5 = InputEventMouseButton::get_button_index();
          if (iVar5 != 1) goto LAB_00106b28;
          cVar4 = InputEvent::is_pressed();
          if (cVar4 != '\0') {
            cVar4 = InputEventWithModifiers::is_ctrl_pressed();
            if (cVar4 == '\0') {
              if (local_1c0 != 0) {
                uVar11 = 0;
                uVar19 = 0xffffffff;
                fVar20 = _LC129;
                do {
                  iVar5 = (int)uVar19;
                  if (*(long *)(local_1c0 + -8) <= (long)uVar11) break;
                  puVar1 = (undefined8 *)(local_1c0 + uVar11 * 0xc);
                  uVar13 = *puVar1;
                  fVar24 = *(float *)(puVar1 + 1);
                  fVar23 = (float)uVar13;
                  fVar26 = (float)((ulong)uVar13 >> 0x20);
                  local_a0 = CONCAT44(local_a0._4_4_,
                                      local_60 * fVar23 + fStack_5c * fVar26 + local_58 * fVar24 +
                                      fStack_4c);
                  local_a8 = CONCAT44((float)((ulong)local_70 >> 0x20) * fVar23 + local_68 * fVar26
                                      + fStack_64 * fVar24 + local_50,
                                      local_78 * fVar23 + fStack_74 * fVar26 +
                                      (float)local_70 * fVar24 + fStack_54);
                  uVar13 = (**(code **)(*(long *)param_1 + 0x218))(param_1,(Vector3 *)&local_a8);
                  local_108 = (undefined1  [8])uVar13;
                  fVar24 = (float)Vector2::distance_to((Vector2 *)local_108);
                  if (fVar24 < fVar20) {
                    if (fVar24 < fVar21) {
                      uVar19 = uVar11 & 0xffffffff;
                    }
                    fVar20 = (float)((uint)fVar20 & -(uint)(fVar21 <= fVar24) |
                                    ~-(uint)(fVar21 <= fVar24) & (uint)fVar24);
                  }
                  iVar5 = (int)uVar19;
                  uVar11 = uVar11 + 1;
                } while (local_1c0 != 0);
                if (-1 < iVar5) {
                  if (local_1c0 != *(long *)(this + 0x6c0)) {
                    CowData<Vector3>::_ref((CowData<Vector3> *)(this + 0x6c0),(CowData *)&local_1c0)
                    ;
                  }
                  *(int *)(this + 0x6a4) = iVar5;
                  lVar14 = (long)iVar5;
                  if (local_1c0 == 0) {
                    lVar18 = 0;
LAB_00107c2f:
                    _err_print_index_error
                              ("get","./core/templates/cowdata.h",0xdb,lVar14,lVar18,"p_index",
                               "size()","",false,true);
                    _err_flush_stdout();
                    /* WARNING: Does not return */
                    pcVar2 = (code *)invalidInstructionException();
                    (*pcVar2)();
                  }
                  lVar18 = *(long *)(local_1c0 + -8);
                  if (lVar18 <= lVar14) goto LAB_00107c2f;
                  puVar1 = (undefined8 *)(local_1c0 + lVar14 * 0xc);
                  *(undefined8 *)(this + 0x6a8) = *puVar1;
                  *(undefined4 *)(this + 0x6b0) = *(undefined4 *)(puVar1 + 1);
                  redraw(this);
                  this[0x6d9] = (NavigationObstacle3DEditorPlugin)0x0;
                  goto LAB_001077f0;
                }
              }
              goto LAB_00106b28;
            }
            if ((local_1c0 == 0) || (lVar18 = *(long *)(local_1c0 + -8), lVar18 < 3)) {
              pEVar12 = (EditorUndoRedoManager *)EditorUndoRedoManager::get_singleton();
              local_1d0 = 0;
              String::parse_latin1((String *)&local_1d0,"");
              local_1d8 = 0;
              String::parse_latin1((String *)&local_1d8,"Edit Obstacle (Add Vertex)");
              TTR((String *)&local_1b8,(String *)&local_1d8);
              EditorUndoRedoManager::create_action(pEVar12,(String *)&local_1b8,0,0,0);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_1b8);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_1d8);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_1d0);
              local_1b0 = 0;
              if (*(long *)(*(long *)(this + 0x668) + 0x558) != 0) {
                CowData<Vector3>::_ref
                          ((CowData<Vector3> *)&local_1b0,
                           (CowData *)(*(long *)(this + 0x668) + 0x558));
              }
              StringName::StringName((StringName *)&local_1d0,"set_vertices",false);
              EditorUndoRedoManager::add_undo_method<Vector<Vector3>>
                        (pEVar12,*(undefined8 *)(this + 0x668),(String *)&local_1d0,
                         (String *)&local_1b8);
              if ((StringName::configured != '\0') && (local_1d0 != 0)) {
                StringName::unref();
              }
              CowData<Vector3>::_unref((CowData<Vector3> *)&local_1b0);
              local_a8 = (ulong)(uint)fVar20;
              local_a0 = CONCAT44(local_a0._4_4_,fVar24);
              Vector<Vector3>::push_back(local_a8,fVar24,local_1c8);
              EditorUndoRedoManager::commit_action(SUB81(pEVar12,0));
            }
            else {
              local_270._0_4_ = -1;
              local_268 = _LC129;
              lVar17 = 0;
              while (lVar17 < lVar18) {
                puVar1 = (undefined8 *)(local_1c0 + lVar17 * 0xc);
                uVar13 = *puVar1;
                fVar23 = *(float *)(puVar1 + 1);
                fVar26 = (float)uVar13;
                fVar22 = (float)((ulong)uVar13 >> 0x20);
                local_170 = local_60 * fVar26 + fStack_5c * fVar22 + local_58 * fVar23 + fStack_4c;
                local_178 = (undefined1  [8])
                            CONCAT44(local_68 * fVar22 + (float)((ulong)local_70 >> 0x20) * fVar26 +
                                     fStack_64 * fVar23 + local_50,
                                     fStack_74 * fVar22 + local_78 * fVar26 +
                                     (float)local_70 * fVar23 + fStack_54);
                local_a8 = (**(code **)(*(long *)param_1 + 0x218))(param_1,local_178);
                if (local_1c0 == 0) {
NavigationObstacle3DEditorPlugin_forward_3d_gui_input:
                    /* WARNING: Does not return */
                  pcVar2 = (code *)invalidInstructionException();
                  (*pcVar2)();
                }
                lVar18 = *(long *)(local_1c0 + -8);
                lVar14 = (lVar17 + 1) % lVar18;
                if (lVar18 <= lVar14) goto LAB_00107c2f;
                puVar1 = (undefined8 *)(local_1c0 + lVar14 * 0xc);
                uVar13 = *puVar1;
                fVar23 = *(float *)(puVar1 + 1);
                fVar26 = (float)uVar13;
                fVar22 = (float)((ulong)uVar13 >> 0x20);
                uStack_100._0_4_ =
                     local_60 * fVar26 + fStack_5c * fVar22 + local_58 * fVar23 + fStack_4c;
                pVVar16 = (Vector2 *)local_108;
                local_108 = (undefined1  [8])
                            CONCAT44(local_68 * fVar22 + (float)((ulong)local_70 >> 0x20) * fVar26 +
                                     fStack_64 * fVar23 + local_50,
                                     fStack_74 * fVar22 + local_78 * fVar26 +
                                     (float)local_70 * fVar23 + fStack_54);
                local_a0 = (**(code **)(*(long *)param_1 + 0x218))(param_1);
                local_108 = (undefined1  [8])
                            Geometry2D::get_closest_point_to_segment((Vector2 *)&local_a8,pVVar16);
                fVar23 = (float)Vector2::distance_squared_to((Vector2 *)local_108);
                if (_LC133 <= (double)fVar23) {
                  fVar23 = (float)Vector2::distance_squared_to((Vector2 *)local_108);
                  if (_LC133 <= (double)fVar23) {
                    fVar23 = (float)Vector2::distance_to((Vector2 *)local_108);
                    if (fVar23 < local_268) {
                      iVar5 = (int)lVar17;
                      if (fVar21 <= fVar23) {
                        iVar5 = (int)local_270;
                      }
                      local_268 = (float)(~-(uint)(fVar21 <= fVar23) & (uint)fVar23 |
                                         (uint)local_268 & -(uint)(fVar21 <= fVar23));
                      local_270._0_4_ = iVar5;
                    }
                  }
                }
                if (local_1c0 == 0) break;
                lVar17 = lVar17 + 1;
                lVar18 = *(long *)(local_1c0 + -8);
              }
              if ((int)local_270 < 0) goto LAB_00106b28;
              if (*(long *)(this + 0x6c0) != local_1c0) {
                CowData<Vector3>::_ref((CowData<Vector3> *)(this + 0x6c0),(CowData *)&local_1c0);
              }
              local_a8 = (ulong)(uint)fVar20;
              local_a0 = CONCAT44(local_a0._4_4_,fVar24);
              CowData<Vector3>::insert
                        ((CowData<Vector3> *)&local_1c0,(long)((int)local_270 + 1),
                         (Vector3 *)&local_a8);
              *(int *)(this + 0x6a4) = (int)local_270 + 1;
              *(undefined4 *)(this + 0x6ac) = 0;
              *(float *)(this + 0x6a8) = fVar20;
              *(float *)(this + 0x6b0) = fVar24;
              NavigationObstacle3D::set_vertices(*(Vector **)(this + 0x668));
              redraw(this);
              this[0x6d9] = (NavigationObstacle3DEditorPlugin)0x1;
            }
            goto LAB_001077f0;
          }
          iVar5 = *(int *)(this + 0x6a4);
          this[0x6d9] = (NavigationObstacle3DEditorPlugin)0x0;
          if (iVar5 == -1) goto LAB_00106b28;
          lVar18 = (long)iVar5;
          if (iVar5 < 0) {
            if (local_1c0 != 0) goto LAB_00108710;
LAB_00108762:
            lVar17 = 0;
          }
          else {
            if (local_1c0 == 0) goto LAB_00108762;
            if (lVar18 < *(long *)(local_1c0 + -8)) {
              CowData<Vector3>::_copy_on_write((CowData<Vector3> *)&local_1c0);
              puVar1 = (undefined8 *)(local_1c0 + lVar18 * 0xc);
              *puVar1 = *(undefined8 *)(this + 0x6a8);
              *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(this + 0x6b0);
              pEVar12 = (EditorUndoRedoManager *)EditorUndoRedoManager::get_singleton();
              local_1d0 = 0;
              String::parse_latin1((String *)&local_1d0,"");
              local_1d8 = 0;
              String::parse_latin1((String *)&local_1d8,"Edit Obstacle (Move Vertex)");
              TTR((String *)&local_1b8,(String *)&local_1d8);
              EditorUndoRedoManager::create_action(pEVar12,(String *)&local_1b8,0,0,0);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_1b8);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_1d8);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_1d0);
              local_1b0 = 0;
              if (*(long *)(*(long *)(this + 0x668) + 0x558) != 0) {
                CowData<Vector3>::_ref
                          ((CowData<Vector3> *)&local_1b0,
                           (CowData *)(*(long *)(this + 0x668) + 0x558));
              }
              StringName::StringName((StringName *)&local_1d0,"set_vertices",false);
              EditorUndoRedoManager::add_undo_method<Vector<Vector3>>
                        (pEVar12,*(undefined8 *)(this + 0x668),(String *)&local_1d0,
                         (String *)&local_1b8);
              if ((StringName::configured != '\0') && (local_1d0 != 0)) {
                StringName::unref();
              }
              CowData<Vector3>::_unref((CowData<Vector3> *)&local_1b0);
              local_1b0 = 0;
              if (local_1c0 != 0) {
                CowData<Vector3>::_ref((CowData<Vector3> *)&local_1b0,(CowData *)&local_1c0);
              }
              StringName::StringName((StringName *)&local_1d0,"set_vertices",false);
              EditorUndoRedoManager::add_do_method<Vector<Vector3>>
                        (pEVar12,*(undefined8 *)(this + 0x668),(String *)&local_1d0,
                         (String *)&local_1b8);
              if ((StringName::configured != '\0') && (local_1d0 != 0)) {
                StringName::unref();
              }
              CowData<Vector3>::_unref((CowData<Vector3> *)&local_1b0);
              EditorUndoRedoManager::commit_action(SUB81(pEVar12,0));
              *(undefined4 *)(this + 0x6a4) = 0xffffffff;
              goto LAB_001077f0;
            }
LAB_00108710:
            lVar17 = *(long *)(local_1c0 + -8);
          }
          uVar13 = 0;
          _err_print_index_error
                    ("forward_3d_gui_input",
                     "editor/plugins/navigation_obstacle_3d_editor_plugin.cpp",0x260,lVar18,lVar17,
                     "edited_point","obstacle_vertices.size()","",false,false);
LAB_001077f5:
          CowData<Vector3>::_unref((CowData<Vector3> *)&local_1c0);
        }
        cVar4 = RefCounted::unreference();
        if (cVar4 != '\0') {
          cVar4 = predelete_handler(pOVar8);
          if (cVar4 != '\0') {
            (**(code **)(*(long *)pOVar8 + 0x140))(pOVar8);
            Memory::free_static(pOVar8,false);
          }
        }
      }
      cVar4 = RefCounted::unreference();
      if (cVar4 != '\0') {
        cVar4 = predelete_handler(pOVar7);
        if (cVar4 != '\0') {
          (**(code **)(*(long *)pOVar7 + 0x140))(pOVar7);
          Memory::free_static(pOVar7,false);
        }
      }
      goto LAB_00106602;
    }
  }
  uVar13 = 0;
LAB_00106602:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar13;
}



/* NavigationObstacle3DEditorPlugin::forward_3d_gui_input(Camera3D*, Ref<InputEvent> const&) */

undefined8 __thiscall
NavigationObstacle3DEditorPlugin::forward_3d_gui_input
          (NavigationObstacle3DEditorPlugin *this,Camera3D *param_1,Ref *param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  if (*(long *)(this + 0x668) != 0) {
    cVar1 = Node3D::is_visible_in_tree();
    if (cVar1 != '\0') {
      uVar2 = forward_3d_gui_input(this,param_1,param_2);
      return uVar2;
    }
  }
  return 0;
}



/* NavigationObstacle3DGizmoPlugin::subgizmos_intersect_frustum(EditorNode3DGizmo const*, Camera3D
   const*, Vector<Plane> const&) const */

EditorNode3DGizmo *
NavigationObstacle3DGizmoPlugin::subgizmos_intersect_frustum
          (EditorNode3DGizmo *param_1,Camera3D *param_2,Vector *param_3)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float *pfVar8;
  int iVar9;
  long lVar10;
  long lVar11;
  float *pfVar12;
  long lVar13;
  long in_R8;
  long lVar14;
  long in_FS_OFFSET;
  float extraout_XMM0_Db;
  undefined1 local_114 [12];
  undefined1 local_108 [16];
  undefined1 local_f8 [16];
  undefined4 local_e8;
  Vector3 local_d8 [48];
  undefined1 local_a8 [4] [12];
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  long local_40;
  
  lVar10 = NavigationObstacle3DEditorPlugin::singleton;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined8 *)(param_1 + 8) = 0;
  if (*(int *)(lVar10 + 0x6a0) == 1) {
    if ((*(long *)(param_3 + 0x1f0) == 0) ||
       (lVar10 = __dynamic_cast(*(long *)(param_3 + 0x1f0),&Object::typeinfo,
                                &NavigationObstacle3D::typeinfo,0), lVar10 == 0)) {
      _err_print_error("subgizmos_intersect_frustum",
                       "editor/plugins/navigation_obstacle_3d_editor_plugin.cpp",0x9c,
                       "Parameter \"obstacle_node\" is null.",0,0);
    }
    else {
      Node3D::get_global_basis();
      local_a8[0] = Basis::get_scale();
      local_114 = Node3D::get_global_position();
      local_108 = ZEXT416(_LC6);
      local_e8 = 0x3f800000;
      local_f8 = local_108;
      Basis::scaled(local_d8);
      Node3D::get_global_rotation();
      Basis::rotated((Vector3 *)local_a8,extraout_XMM0_Db);
      Transform3D::Transform3D((Transform3D *)&local_78,(Basis *)local_a8,(Vector3 *)local_114);
      lVar13 = *(long *)(lVar10 + 0x558);
      if (lVar13 != 0) {
        lVar14 = 0;
        do {
          while( true ) {
            if (*(long *)(lVar13 + -8) <= lVar14) goto LAB_00108ad3;
            pfVar8 = *(float **)(in_R8 + 8);
            pfVar12 = (float *)(lVar13 + lVar14 * 0xc);
            fVar4 = *pfVar12;
            fVar5 = pfVar12[1];
            fVar6 = pfVar12[2];
            if (pfVar8 == (float *)0x0) break;
            lVar11 = 0;
            pfVar12 = pfVar8;
            do {
              if (*(long *)(pfVar8 + -2) <= lVar11) goto LAB_00108da0;
              lVar11 = lVar11 + 1;
              fVar7 = *pfVar12;
              pfVar1 = pfVar12 + 1;
              pfVar2 = pfVar12 + 2;
              pfVar3 = pfVar12 + 3;
              pfVar12 = pfVar12 + 4;
            } while ((fVar7 * (fVar6 * local_70 + fVar4 * local_78 + fVar5 * local_74 + local_54) +
                      *pfVar1 * (local_6c * fVar4 + local_68 * fVar5 + local_64 * fVar6 + local_50)
                     + *pfVar2 * (local_60 * fVar4 + local_5c * fVar5 + local_58 * fVar6 + local_4c)
                     ) - *pfVar3 <= 0.0);
LAB_00108d8c:
            lVar14 = lVar14 + 1;
            if (lVar13 == 0) goto LAB_00108ad3;
          }
LAB_00108da0:
          if (*(long *)(param_1 + 8) == 0) {
            lVar13 = 1;
          }
          else {
            lVar13 = *(long *)(*(long *)(param_1 + 8) + -8) + 1;
          }
          iVar9 = CowData<int>::resize<false>((CowData<int> *)(param_1 + 8),lVar13);
          if (iVar9 != 0) {
            _err_print_error("push_back","./core/templates/vector.h",0x142,
                             "Condition \"err\" is true. Returning: true",0,0);
            lVar13 = *(long *)(lVar10 + 0x558);
            goto LAB_00108d8c;
          }
          if (*(long *)(param_1 + 8) == 0) {
            lVar11 = -1;
            lVar13 = 0;
LAB_00108e8a:
            _err_print_index_error
                      ("set","./core/templates/cowdata.h",0xcf,lVar11,lVar13,"p_index","size()","",
                       false,false);
            lVar13 = *(long *)(lVar10 + 0x558);
            goto LAB_00108d8c;
          }
          lVar13 = *(long *)(*(long *)(param_1 + 8) + -8);
          lVar11 = lVar13 + -1;
          if (lVar11 < 0) goto LAB_00108e8a;
          CowData<int>::_copy_on_write((CowData<int> *)(param_1 + 8));
          lVar13 = *(long *)(lVar10 + 0x558);
          *(int *)(*(long *)(param_1 + 8) + lVar11 * 4) = (int)lVar14;
          lVar14 = lVar14 + 1;
        } while (lVar13 != 0);
      }
    }
  }
LAB_00108ad3:
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
  
  return (uint)CONCAT71(0x1129,in_RSI == &BaseMaterial3D::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1129,in_RSI == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1129,in_RSI == &Material::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1129,in_RSI == &Resource::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1129,in_RSI == &RefCounted::get_class_ptr_static()::ptr) |
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



/* NavigationObstacle3DGizmoPlugin::is_class_ptr(void*) const */

uint __thiscall
NavigationObstacle3DGizmoPlugin::is_class_ptr(NavigationObstacle3DGizmoPlugin *this,void *param_1)

{
  return (uint)CONCAT71(0x1129,(undefined4 *)param_1 ==
                               &EditorNode3DGizmoPlugin::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1129,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1129,(undefined4 *)param_1 == &Resource::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1129,(undefined4 *)param_1 == &RefCounted::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1129,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* NavigationObstacle3DGizmoPlugin::_getv(StringName const&, Variant&) const */

undefined8 NavigationObstacle3DGizmoPlugin::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* NavigationObstacle3DGizmoPlugin::_setv(StringName const&, Variant const&) */

undefined8 NavigationObstacle3DGizmoPlugin::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* NavigationObstacle3DGizmoPlugin::_validate_propertyv(PropertyInfo&) const */

void NavigationObstacle3DGizmoPlugin::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* NavigationObstacle3DGizmoPlugin::_property_can_revertv(StringName const&) const */

undefined8 NavigationObstacle3DGizmoPlugin::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* NavigationObstacle3DGizmoPlugin::_property_get_revertv(StringName const&, Variant&) const */

undefined8
NavigationObstacle3DGizmoPlugin::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* NavigationObstacle3DGizmoPlugin::_notificationv(int, bool) */

void NavigationObstacle3DGizmoPlugin::_notificationv(int param_1,bool param_2)

{
  return;
}



/* NavigationObstacle3DEditorPlugin::is_class_ptr(void*) const */

uint __thiscall
NavigationObstacle3DEditorPlugin::is_class_ptr(NavigationObstacle3DEditorPlugin *this,void *param_1)

{
  return (uint)CONCAT71(0x1129,(undefined4 *)param_1 == &EditorPlugin::get_class_ptr_static()::ptr)
         | (uint)CONCAT71(0x1128,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1129,(undefined4 *)param_1 == &Node::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1129,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* NavigationObstacle3DEditorPlugin::_getv(StringName const&, Variant&) const */

undefined8 NavigationObstacle3DEditorPlugin::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* NavigationObstacle3DEditorPlugin::_setv(StringName const&, Variant const&) */

undefined8 NavigationObstacle3DEditorPlugin::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* NavigationObstacle3DEditorPlugin::_property_can_revertv(StringName const&) const */

undefined8 NavigationObstacle3DEditorPlugin::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* NavigationObstacle3DEditorPlugin::_property_get_revertv(StringName const&, Variant&) const */

undefined8
NavigationObstacle3DEditorPlugin::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* NavigationObstacle3DEditorPlugin::has_main_screen() const */

undefined8 NavigationObstacle3DEditorPlugin::has_main_screen(void)

{
  return 0;
}



/* CallableCustomMethodPointer<NavigationObstacle3DEditorPlugin, void,
   int>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<NavigationObstacle3DEditorPlugin,void,int>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<NavigationObstacle3DEditorPlugin,void,int> *this)

{
  return;
}



/* CallableCustomMethodPointer<NavigationObstacle3DEditorPlugin,
   void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<NavigationObstacle3DEditorPlugin,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<NavigationObstacle3DEditorPlugin,void> *this)

{
  return;
}



/* CallableCustomMethodPointer<NavigationObstacle3DEditorPlugin, void,
   Node*>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<NavigationObstacle3DEditorPlugin,void,Node*>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<NavigationObstacle3DEditorPlugin,void,Node*> *this)

{
  return;
}



/* CallableCustomMethodPointer<NavigationObstacle3DEditorPlugin, void,
   int>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<NavigationObstacle3DEditorPlugin,void,int>::get_argument_count
          (CallableCustomMethodPointer<NavigationObstacle3DEditorPlugin,void,int> *this,
          bool *param_1)

{
  *param_1 = true;
  return 1;
}



/* CallableCustomMethodPointer<NavigationObstacle3DEditorPlugin, void>::get_argument_count(bool&)
   const */

undefined8 __thiscall
CallableCustomMethodPointer<NavigationObstacle3DEditorPlugin,void>::get_argument_count
          (CallableCustomMethodPointer<NavigationObstacle3DEditorPlugin,void> *this,bool *param_1)

{
  *param_1 = true;
  return 0;
}



/* CallableCustomMethodPointer<NavigationObstacle3DEditorPlugin, void,
   Node*>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<NavigationObstacle3DEditorPlugin,void,Node*>::get_argument_count
          (CallableCustomMethodPointer<NavigationObstacle3DEditorPlugin,void,Node*> *this,
          bool *param_1)

{
  *param_1 = true;
  return 1;
}



/* StandardMaterial3D::~StandardMaterial3D() */

void __thiscall StandardMaterial3D::~StandardMaterial3D(StandardMaterial3D *this)

{
  *(undefined ***)this = &PTR__initialize_classv_00111c70;
  BaseMaterial3D::~BaseMaterial3D((BaseMaterial3D *)this);
  return;
}



/* CallableCustomMethodPointerBase::get_method() const */

void CallableCustomMethodPointerBase::get_method(void)

{
  long in_RSI;
  StringName *in_RDI;
  
  StringName::StringName(in_RDI,*(char **)(in_RSI + 0x20),false);
  return;
}



/* StandardMaterial3D::~StandardMaterial3D() */

void __thiscall StandardMaterial3D::~StandardMaterial3D(StandardMaterial3D *this)

{
  *(undefined ***)this = &PTR__initialize_classv_00111c70;
  BaseMaterial3D::~BaseMaterial3D((BaseMaterial3D *)this);
  operator_delete(this,0x558);
  return;
}



/* CallableCustomMethodPointer<NavigationObstacle3DEditorPlugin, void,
   Node*>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<NavigationObstacle3DEditorPlugin,void,Node*>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<NavigationObstacle3DEditorPlugin,void,Node*> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<NavigationObstacle3DEditorPlugin,
   void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<NavigationObstacle3DEditorPlugin,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<NavigationObstacle3DEditorPlugin,void> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<NavigationObstacle3DEditorPlugin, void,
   int>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<NavigationObstacle3DEditorPlugin,void,int>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<NavigationObstacle3DEditorPlugin,void,int> *this)

{
  operator_delete(this,0x48);
  return;
}



/* StandardMaterial3D::_setv(StringName const&, Variant const&) */

undefined8 StandardMaterial3D::_setv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)PTR__set_00116010 != Object::_set) {
    uVar1 = StandardMaterial3D::_set(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* HBoxContainer::_property_get_revertv(StringName const&, Variant&) const */

undefined8 HBoxContainer::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_get_revert_00116018 != Object::_property_get_revert) {
    uVar1 = Control::_property_get_revert(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* HBoxContainer::_property_can_revertv(StringName const&) const */

undefined8 HBoxContainer::_property_can_revertv(StringName *param_1)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_can_revert_00116020 != Object::_property_can_revert) {
    uVar1 = Control::_property_can_revert(param_1);
    return uVar1;
  }
  return 0;
}



/* NavigationObstacle3DEditorPlugin::_validate_propertyv(PropertyInfo&) const */

void NavigationObstacle3DEditorPlugin::_validate_propertyv(PropertyInfo *param_1)

{
  if ((code *)PTR__validate_property_00116028 != Object::_validate_property) {
    Node::_validate_property(param_1);
    return;
  }
  return;
}



/* NavigationObstacle3DGizmoPlugin::~NavigationObstacle3DGizmoPlugin() */

void __thiscall
NavigationObstacle3DGizmoPlugin::~NavigationObstacle3DGizmoPlugin
          (NavigationObstacle3DGizmoPlugin *this)

{
  *(undefined ***)this = &PTR__initialize_classv_001121e8;
  EditorNode3DGizmoPlugin::~EditorNode3DGizmoPlugin((EditorNode3DGizmoPlugin *)this);
  return;
}



/* NavigationObstacle3DGizmoPlugin::~NavigationObstacle3DGizmoPlugin() */

void __thiscall
NavigationObstacle3DGizmoPlugin::~NavigationObstacle3DGizmoPlugin
          (NavigationObstacle3DGizmoPlugin *this)

{
  *(undefined ***)this = &PTR__initialize_classv_001121e8;
  EditorNode3DGizmoPlugin::~EditorNode3DGizmoPlugin((EditorNode3DGizmoPlugin *)this);
  operator_delete(this,0x450);
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



/* NavigationObstacle3DEditorPlugin::_notification(int) [clone .cold] */

void NavigationObstacle3DEditorPlugin::_notification(int param_1)

{
  code *pcVar1;
  
  _err_print_error("get_tree","./scene/main/node.h",0x1e5,"Parameter \"data.tree\" is null.",0,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* NavigationObstacle3DEditorPlugin::NavigationObstacle3DEditorPlugin() [clone .cold] */

void __thiscall
NavigationObstacle3DEditorPlugin::NavigationObstacle3DEditorPlugin
          (NavigationObstacle3DEditorPlugin *this)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<Vector3>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<Vector3>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* NavigationObstacle3DEditorPlugin::_wip_close() [clone .cold] */

void NavigationObstacle3DEditorPlugin::_wip_close(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* NavigationObstacle3DEditorPlugin::forward_3d_gui_input(Camera3D*, Ref<InputEvent> const&) [clone
   .part.0] [clone .cold] */

void NavigationObstacle3DEditorPlugin::forward_3d_gui_input(Camera3D *param_1,Ref *param_2)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* NavigationObstacle3DGizmoPlugin::_get_class_namev() const */

undefined8 * NavigationObstacle3DGizmoPlugin::_get_class_namev(void)

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
LAB_001099e3:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_001099e3;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,
                 "NavigationObstacle3DGizmoPlugin");
      goto LAB_00109a4e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"NavigationObstacle3DGizmoPlugin"
            );
LAB_00109a4e:
  return &_get_class_namev()::_class_name_static;
}



/* CallableCustomMethodPointer<NavigationObstacle3DEditorPlugin, void>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<NavigationObstacle3DEditorPlugin,void>::get_object
          (CallableCustomMethodPointer<NavigationObstacle3DEditorPlugin,void> *this)

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
      goto LAB_00109b7d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_00109b7d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_00109b7d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<NavigationObstacle3DEditorPlugin, void, int>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<NavigationObstacle3DEditorPlugin,void,int>::get_object
          (CallableCustomMethodPointer<NavigationObstacle3DEditorPlugin,void,int> *this)

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
      goto LAB_00109c7d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_00109c7d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_00109c7d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<NavigationObstacle3DEditorPlugin, void, Node*>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<NavigationObstacle3DEditorPlugin,void,Node*>::get_object
          (CallableCustomMethodPointer<NavigationObstacle3DEditorPlugin,void,Node*> *this)

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
      goto LAB_00109d7d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_00109d7d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_00109d7d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* StandardMaterial3D::_validate_propertyv(PropertyInfo&) const */

void StandardMaterial3D::_validate_propertyv(PropertyInfo *param_1)

{
  Material::_validate_property(param_1);
  if ((code *)PTR__validate_property_00116030 == Material::_validate_property) {
    return;
  }
  BaseMaterial3D::_validate_property(param_1);
  return;
}



/* HBoxContainer::_validate_propertyv(PropertyInfo&) const */

void HBoxContainer::_validate_propertyv(PropertyInfo *param_1)

{
  Node::_validate_property(param_1);
  CanvasItem::_validate_property(param_1);
  Control::_validate_property(param_1);
  if ((code *)PTR__validate_property_00116038 == Control::_validate_property) {
    return;
  }
  BoxContainer::_validate_property(param_1);
  return;
}



/* HBoxContainer::_setv(StringName const&, Variant const&) */

undefined8 HBoxContainer::_setv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  uVar1 = CanvasItem::_set(param_1,param_2);
  if ((char)uVar1 == '\0') {
    if ((code *)PTR__set_00116040 != CanvasItem::_set) {
      uVar1 = Control::_set(param_1,param_2);
      return uVar1;
    }
    uVar1 = 0;
  }
  return uVar1;
}



/* WARNING: Removing unreachable block (ram,0x00109f98) */
/* HBoxContainer::_getv(StringName const&, Variant&) const */

undefined8 HBoxContainer::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if (((code *)PTR__get_00116048 != CanvasItem::_get) &&
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
    uVar1 = (uint)CONCAT71(0x1129,in_RSI == &Container::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x1129,in_RSI == &BoxContainer::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x1129,in_RSI == &Control::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x1129,in_RSI == &CanvasItem::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x1129,in_RSI == &Node::get_class_ptr_static()::ptr) |
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
    if ((code *)PTR__notification_00116050 != Container::_notification) {
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
  if ((code *)PTR__notification_00116050 == Container::_notification) {
    return;
  }
  BoxContainer::_notification(iVar1);
  return;
}



/* HBoxContainer::~HBoxContainer() */

void __thiscall HBoxContainer::~HBoxContainer(HBoxContainer *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(code **)this = Node3D::get_global_basis;
  if (bVar1) {
    if (*(long *)(this + 0x9e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010a190;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_0010a190:
  Control::~Control((Control *)this);
  return;
}



/* HBoxContainer::~HBoxContainer() */

void __thiscall HBoxContainer::~HBoxContainer(HBoxContainer *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(code **)this = Node3D::get_global_basis;
  if (bVar1) {
    if (*(long *)(this + 0x9e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010a1f0;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_0010a1f0:
  Control::~Control((Control *)this);
  operator_delete(this,0xa10);
  return;
}



/* NavigationObstacle3DEditorPlugin::_get_class_namev() const */

undefined8 * NavigationObstacle3DEditorPlugin::_get_class_namev(void)

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
LAB_0010a593:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_0010a593;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,
                 "NavigationObstacle3DEditorPlugin");
      goto LAB_0010a5fe;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,
             "NavigationObstacle3DEditorPlugin");
LAB_0010a5fe:
  return &_get_class_namev()::_class_name_static;
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
LAB_0010a683:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_0010a683;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"StandardMaterial3D");
      goto LAB_0010a6ee;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"StandardMaterial3D");
LAB_0010a6ee:
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
LAB_0010a773:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_0010a773;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"HBoxContainer");
      goto LAB_0010a7de;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"HBoxContainer");
LAB_0010a7de:
  return &_get_class_namev()::_class_name_static;
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



/* NavigationObstacle3DEditorPlugin::get_plugin_name() const */

NavigationObstacle3DEditorPlugin * __thiscall
NavigationObstacle3DEditorPlugin::get_plugin_name(NavigationObstacle3DEditorPlugin *this)

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



/* NavigationObstacle3DGizmoPlugin::get_class() const */

void NavigationObstacle3DGizmoPlugin::get_class(void)

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



/* NavigationObstacle3DEditorPlugin::get_class() const */

void NavigationObstacle3DEditorPlugin::get_class(void)

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



/* Node::is_class(String const&) const */

undefined8 __thiscall Node::is_class(Node *this,String *param_1)

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
            if (lVar5 == 0) goto LAB_0010ae6f;
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
LAB_0010ae6f:
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
    if (cVar6 != '\0') goto LAB_0010af23;
  }
  cVar6 = String::operator==(param_1,"Node");
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
              if (lVar5 == 0) goto LAB_0010afd3;
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
LAB_0010afd3:
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
      if (cVar6 != '\0') goto LAB_0010af23;
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = String::operator==(param_1,"Object");
      return uVar7;
    }
  }
  else {
LAB_0010af23:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* NavigationObstacle3DEditorPlugin::is_class(String const&) const */

undefined8 __thiscall
NavigationObstacle3DEditorPlugin::is_class(NavigationObstacle3DEditorPlugin *this,String *param_1)

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
            if (lVar5 == 0) goto LAB_0010b0ff;
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
LAB_0010b0ff:
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
    if (cVar6 != '\0') goto LAB_0010b1b3;
  }
  cVar6 = String::operator==(param_1,"NavigationObstacle3DEditorPlugin");
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
              if (lVar5 == 0) goto LAB_0010b273;
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
LAB_0010b273:
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
      if (cVar6 != '\0') goto LAB_0010b1b3;
    }
    cVar6 = String::operator==(param_1,"EditorPlugin");
    if (cVar6 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar7 = Node::is_class((Node *)this,param_1);
        return uVar7;
      }
      goto LAB_0010b31c;
    }
  }
LAB_0010b1b3:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0010b31c:
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
            if (lVar5 == 0) goto LAB_0010b3af;
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
LAB_0010b3af:
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
    if (cVar6 != '\0') goto LAB_0010b463;
  }
  cVar6 = String::operator==(param_1,"Control");
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
              if (lVar5 == 0) goto LAB_0010b523;
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
LAB_0010b523:
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
      if (cVar6 != '\0') goto LAB_0010b463;
    }
    cVar6 = String::operator==(param_1,"CanvasItem");
    if (cVar6 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar7 = Node::is_class((Node *)this,param_1);
        return uVar7;
      }
      goto LAB_0010b5cc;
    }
  }
LAB_0010b463:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0010b5cc:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void EditorUndoRedoManager::add_do_method<Vector<Vector3> >(Object*, StringName const&,
   Vector<Vector3>) */

void __thiscall
EditorUndoRedoManager::add_do_method<Vector<Vector3>>
          (EditorUndoRedoManager *this,StringName *param_1,Variant **param_2,Vector *param_4)

{
  char cVar1;
  long in_FS_OFFSET;
  Variant *local_78 [2];
  int local_68 [6];
  undefined8 local_50;
  undefined1 local_48 [16];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  Variant::Variant((Variant *)local_68,param_4);
  local_50 = 0;
  local_48 = (undefined1  [16])0x0;
  local_78[0] = (Variant *)local_68;
  EditorUndoRedoManager::add_do_methodp((Object *)this,param_1,param_2,(int)local_78);
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
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* void EditorUndoRedoManager::add_undo_method<Vector<Vector3> >(Object*, StringName const&,
   Vector<Vector3>) */

void __thiscall
EditorUndoRedoManager::add_undo_method<Vector<Vector3>>
          (EditorUndoRedoManager *this,StringName *param_1,Variant **param_2,Vector *param_4)

{
  char cVar1;
  long in_FS_OFFSET;
  Variant *local_78 [2];
  int local_68 [6];
  undefined8 local_50;
  undefined1 local_48 [16];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  Variant::Variant((Variant *)local_68,param_4);
  local_50 = 0;
  local_48 = (undefined1  [16])0x0;
  local_78[0] = (Variant *)local_68;
  EditorUndoRedoManager::add_undo_methodp((Object *)this,param_1,param_2,(int)local_78);
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
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* Callable create_custom_callable_function_pointer<NavigationObstacle3DEditorPlugin,
   Node*>(NavigationObstacle3DEditorPlugin*, char const*, void
   (NavigationObstacle3DEditorPlugin::*)(Node*)) */

NavigationObstacle3DEditorPlugin *
create_custom_callable_function_pointer<NavigationObstacle3DEditorPlugin,Node*>
          (NavigationObstacle3DEditorPlugin *param_1,char *param_2,_func_void_Node_ptr *param_3)

{
  undefined8 uVar1;
  CallableCustom *this;
  undefined8 in_RCX;
  undefined8 in_R8;
  
  this = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(this);
  *(undefined **)(this + 0x20) = &_LC23;
  *(undefined1 (*) [16])(this + 0x30) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined ***)this = &PTR_hash_001126f8;
  uVar1 = *(undefined8 *)(param_2 + 0x60);
  *(char **)(this + 0x28) = param_2;
  *(undefined8 *)(this + 0x30) = uVar1;
  *(undefined8 *)(this + 0x38) = in_RCX;
  *(undefined8 *)(this + 0x40) = in_R8;
  *(undefined8 *)(this + 0x10) = 0;
  CallableCustomMethodPointerBase::_setup((uint *)this,(int)this + 0x28);
  *(_func_void_Node_ptr **)(this + 0x20) = param_3 + 1;
  Callable::Callable((Callable *)param_1,this);
  return param_1;
}



/* Callable
   create_custom_callable_function_pointer<NavigationObstacle3DEditorPlugin>(NavigationObstacle3DEditorPlugin*,
   char const*, void (NavigationObstacle3DEditorPlugin::*)()) */

NavigationObstacle3DEditorPlugin *
create_custom_callable_function_pointer<NavigationObstacle3DEditorPlugin>
          (NavigationObstacle3DEditorPlugin *param_1,char *param_2,_func_void *param_3)

{
  undefined8 uVar1;
  CallableCustom *this;
  undefined8 in_RCX;
  undefined8 in_R8;
  
  this = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(this);
  *(undefined **)(this + 0x20) = &_LC23;
  *(undefined1 (*) [16])(this + 0x30) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined ***)this = &PTR_hash_00112788;
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



/* Callable create_custom_callable_function_pointer<NavigationObstacle3DEditorPlugin,
   int>(NavigationObstacle3DEditorPlugin*, char const*, void
   (NavigationObstacle3DEditorPlugin::*)(int)) */

NavigationObstacle3DEditorPlugin *
create_custom_callable_function_pointer<NavigationObstacle3DEditorPlugin,int>
          (NavigationObstacle3DEditorPlugin *param_1,char *param_2,_func_void_int *param_3)

{
  undefined8 uVar1;
  CallableCustom *this;
  undefined8 in_RCX;
  undefined8 in_R8;
  
  this = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(this);
  *(undefined **)(this + 0x20) = &_LC23;
  *(undefined1 (*) [16])(this + 0x30) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined ***)this = &PTR_hash_00112818;
  uVar1 = *(undefined8 *)(param_2 + 0x60);
  *(char **)(this + 0x28) = param_2;
  *(undefined8 *)(this + 0x30) = uVar1;
  *(undefined8 *)(this + 0x38) = in_RCX;
  *(undefined8 *)(this + 0x40) = in_R8;
  *(undefined8 *)(this + 0x10) = 0;
  CallableCustomMethodPointerBase::_setup((uint *)this,(int)this + 0x28);
  *(_func_void_int **)(this + 0x20) = param_3 + 1;
  Callable::Callable((Callable *)param_1,this);
  return param_1;
}



/* Callable
   Callable::bind<NavigationObstacle3DEditorPlugin::Mode>(NavigationObstacle3DEditorPlugin::Mode)
   const */

Variant **
Callable::bind<NavigationObstacle3DEditorPlugin::Mode>(Variant **param_1,int param_2,int param_3)

{
  char cVar1;
  long in_FS_OFFSET;
  int local_58 [6];
  undefined8 local_40;
  undefined1 local_38 [16];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  Variant::Variant((Variant *)local_58,param_3);
  local_40 = 0;
  local_38 = (undefined1  [16])0x0;
  Callable::bindp(param_1,param_2);
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
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
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



/* EditorPlugin::~EditorPlugin() */

void __thiscall EditorPlugin::~EditorPlugin(EditorPlugin *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(code **)this = RefCounted::_bind_methods;
  if (bVar1) {
    if (*(long *)(this + 0x648) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010be0a;
    }
    if (*(long *)(this + 0x630) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010be0a;
    }
    if (*(long *)(this + 0x618) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010be0a;
    }
    if (*(long *)(this + 0x600) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010be0a;
    }
    if (*(long *)(this + 0x5e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010be0a;
    }
    if (*(long *)(this + 0x5d0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010be0a;
    }
    if (*(long *)(this + 0x5b8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010be0a;
    }
    if (*(long *)(this + 0x5a0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010be0a;
    }
    if (*(long *)(this + 0x588) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010be0a;
    }
    if (*(long *)(this + 0x570) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010be0a;
    }
    if (*(long *)(this + 0x558) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010be0a;
    }
    if (*(long *)(this + 0x540) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010be0a;
    }
    if (*(long *)(this + 0x528) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010be0a;
    }
    if (*(long *)(this + 0x510) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010be0a;
    }
    if (*(long *)(this + 0x4f8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010be0a;
    }
    if (*(long *)(this + 0x4e0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010be0a;
    }
    if (*(long *)(this + 0x4c8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010be0a;
    }
    if (*(long *)(this + 0x4b0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010be0a;
    }
    if (*(long *)(this + 0x498) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010be0a;
    }
    if (*(long *)(this + 0x480) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010be0a;
    }
    if (*(long *)(this + 0x468) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010be0a;
    }
    if (*(long *)(this + 0x450) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010be0a;
    }
    if (*(long *)(this + 0x438) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010be0a;
    }
    if (*(long *)(this + 0x420) != 0) {
      StringName::unref();
    }
  }
LAB_0010be0a:
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
              if ((code *)PTR__bind_methods_00116008 != Node::_bind_methods) {
                Node::_bind_methods();
              }
              Node::initialize_class()::initialized = '\x01';
            }
            local_60 = 0;
            String::parse_latin1((String *)&local_60,"Node");
            StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
            local_70 = 0;
            String::parse_latin1((String *)&local_70,"CanvasItem");
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
            CanvasItem::_bind_methods();
            if ((code *)PTR__bind_compatibility_methods_00116058 !=
                Object::_bind_compatibility_methods) {
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
          Control::_bind_methods();
          Control::initialize_class()::initialized = '\x01';
        }
        local_68 = 0;
        local_58 = "Control";
        local_50 = 7;
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
        Container::_bind_methods();
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
      if ((code *)PTR__bind_methods_00116060 != Container::_bind_methods) {
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



/* NavigationObstacle3DGizmoPlugin::_initialize_classv() */

void NavigationObstacle3DGizmoPlugin::_initialize_classv(void)

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
    if (EditorNode3DGizmoPlugin::initialize_class()::initialized == '\0') {
      if (Resource::initialize_class()::initialized == '\0') {
        Resource::initialize_class();
      }
      local_58 = 0;
      local_40 = 8;
      local_48 = "Resource";
      String::parse_latin1((StrRange *)&local_58);
      StringName::StringName((StringName *)&local_50,(String *)&local_58,false);
      local_48 = "EditorNode3DGizmoPlugin";
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
      if ((code *)PTR__bind_methods_00116068 != Resource::_bind_methods) {
        EditorNode3DGizmoPlugin::_bind_methods();
      }
      EditorNode3DGizmoPlugin::initialize_class()::initialized = '\x01';
    }
    local_48 = "EditorNode3DGizmoPlugin";
    local_58 = 0;
    local_40 = 0x17;
    String::parse_latin1((StrRange *)&local_58);
    StringName::StringName((StringName *)&local_50,(String *)&local_58,false);
    local_48 = "NavigationObstacle3DGizmoPlugin";
    local_60 = 0;
    local_40 = 0x1f;
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



/* WARNING: Removing unreachable block (ram,0x0010c760) */
/* NavigationObstacle3DEditorPlugin::_notificationv(int, bool) */

void __thiscall
NavigationObstacle3DEditorPlugin::_notificationv
          (NavigationObstacle3DEditorPlugin *this,int param_1,bool param_2)

{
  int iVar1;
  
  iVar1 = (int)this;
  if (param_2) {
    _notification(this,param_1);
    if ((code *)PTR__notification_00116070 != Node::_notification) {
      EditorPlugin::_notification(iVar1);
    }
    Node::_notification(iVar1);
    return;
  }
  Node::_notification(iVar1);
  if ((code *)PTR__notification_00116070 != Node::_notification) {
    EditorPlugin::_notification(iVar1);
  }
  _notification(this,param_1);
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
        if (pvVar5 == (void *)0x0) goto LAB_0010c904;
      }
    }
    Memory::free_static(pvVar5,false);
    Memory::free_static(*(void **)(this + 0x20),false);
  }
LAB_0010c904:
  CowData<char32_t>::_unref((CowData<char32_t> *)this);
  return;
}



/* CallableCustomMethodPointer<NavigationObstacle3DEditorPlugin, void>::call(Variant const**, int,
   Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<NavigationObstacle3DEditorPlugin,void>::call
          (CallableCustomMethodPointer<NavigationObstacle3DEditorPlugin,void> *this,
          Variant **param_1,int param_2,Variant *param_3,CallError *param_4)

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
      goto LAB_0010cb4f;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] == 0) goto LAB_0010cb4f;
    lVar1 = *(long *)(this + 0x28);
    UNRECOVERED_JUMPTABLE = *(code **)(this + 0x38);
    lVar2 = *(long *)(this + 0x40);
    if (param_2 == 0) {
      *(undefined4 *)param_4 = 0;
      if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
        UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar1 + lVar2) + -1);
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0010cb28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),uVar5,UNRECOVERED_JUMPTABLE);
        return;
      }
      goto LAB_0010cc11;
    }
    *(undefined4 *)param_4 = 3;
    *(undefined4 *)(param_4 + 8) = 0;
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
LAB_0010cb4f:
    local_50 = 0;
    local_48 = "\', can\'t call method.";
    local_40 = 0x15;
    String::parse_latin1((StrRange *)&local_50);
    uitos((ulong)local_60);
    operator+((char *)local_58,(String *)"Invalid Object id \'");
    String::operator+((String *)&local_48,(String *)local_58);
    _err_print_error(&_LC97,"./core/object/callable_method_pointer.h",0x67,
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
LAB_0010cc11:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<NavigationObstacle3DEditorPlugin, void, int>::call(Variant const**,
   int, Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<NavigationObstacle3DEditorPlugin,void,int>::call
          (CallableCustomMethodPointer<NavigationObstacle3DEditorPlugin,void,int> *this,
          Variant **param_1,int param_2,Variant *param_3,CallError *param_4)

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
      goto LAB_0010cdd8;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar8[1] == 0) goto LAB_0010cdd8;
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
        uVar4 = _LC98;
        if (cVar5 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar4;
        }
        iVar6 = Variant::operator_cast_to_int(*param_1);
        if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0010cd87. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),iVar6);
          return;
        }
        goto LAB_0010ce9a;
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
LAB_0010cdd8:
    local_50 = 0;
    local_48 = "\', can\'t call method.";
    local_40 = 0x15;
    String::parse_latin1((StrRange *)&local_50);
    uitos((ulong)local_60);
    operator+((char *)local_58,(String *)"Invalid Object id \'");
    String::operator+((String *)&local_48,(String *)local_58);
    _err_print_error(&_LC97,"./core/object/callable_method_pointer.h",0x67,
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
LAB_0010ce9a:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<NavigationObstacle3DEditorPlugin, void, Node*>::call(Variant const**,
   int, Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<NavigationObstacle3DEditorPlugin,void,Node*>::call
          (CallableCustomMethodPointer<NavigationObstacle3DEditorPlugin,void,Node*> *this,
          Variant **param_1,int param_2,Variant *param_3,CallError *param_4)

{
  long lVar1;
  long lVar2;
  Variant *this_00;
  ulong uVar3;
  undefined8 uVar4;
  char cVar5;
  Object *pOVar6;
  Object *pOVar7;
  long lVar8;
  uint uVar9;
  ulong *puVar10;
  code *UNRECOVERED_JUMPTABLE;
  long in_FS_OFFSET;
  bool bVar11;
  CowData<char32_t> local_70 [8];
  CowData<char32_t> local_68 [8];
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar9 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar9 < (uint)ObjectDB::slot_max) {
    while( true ) {
      uVar3 = (ulong)local_58 >> 8;
      local_58 = (char *)(uVar3 << 8);
      LOCK();
      bVar11 = (char)ObjectDB::spin_lock == '\0';
      if (bVar11) {
        ObjectDB::spin_lock._0_1_ = '\x01';
      }
      UNLOCK();
      if (bVar11) break;
      local_58 = (char *)(uVar3 << 8);
      do {
      } while ((char)ObjectDB::spin_lock != '\0');
    }
    puVar10 = (ulong *)((ulong)uVar9 * 0x10 + ObjectDB::object_slots);
    if ((*(ulong *)(this + 0x30) >> 0x18 & 0x7fffffffff) != (*puVar10 & 0x7fffffffff)) {
      ObjectDB::spin_lock._0_1_ = '\0';
      goto LAB_0010d0d5;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar10[1] == 0) goto LAB_0010d0d5;
    lVar1 = *(long *)(this + 0x28);
    UNRECOVERED_JUMPTABLE = *(code **)(this + 0x38);
    lVar2 = *(long *)(this + 0x40);
    if ((uint)param_2 < 2) {
      if (param_2 != 0) {
        *(undefined4 *)param_4 = 0;
        if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
          UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar1 + lVar2) + -1);
        }
        cVar5 = Variant::can_convert_strict(*(undefined4 *)*param_1,0x18);
        if (cVar5 == '\0') {
LAB_0010cfe0:
          uVar4 = _LC99;
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar4;
        }
        else {
          this_00 = *param_1;
          pOVar6 = Variant::operator_cast_to_Object_(this_00);
          pOVar7 = Variant::operator_cast_to_Object_(this_00);
          if (((pOVar7 == (Object *)0x0) ||
              (lVar8 = __dynamic_cast(pOVar7,&Object::typeinfo,&Node::typeinfo,0), lVar8 == 0)) &&
             (pOVar6 != (Object *)0x0)) goto LAB_0010cfe0;
        }
        pOVar6 = Variant::operator_cast_to_Object_(*param_1);
        if (pOVar6 != (Object *)0x0) {
          pOVar6 = (Object *)__dynamic_cast(pOVar6,&Object::typeinfo,&Node::typeinfo,0);
        }
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0010d047. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),pOVar6);
          return;
        }
        goto LAB_0010d197;
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
LAB_0010d0d5:
    local_60 = 0;
    local_58 = "\', can\'t call method.";
    local_50 = 0x15;
    String::parse_latin1((StrRange *)&local_60);
    uitos((ulong)local_70);
    operator+((char *)local_68,(String *)"Invalid Object id \'");
    String::operator+((String *)&local_58,(String *)local_68);
    _err_print_error(&_LC97,"./core/object/callable_method_pointer.h",0x67,
                     "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                     (String *)&local_58,0,0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
    CowData<char32_t>::_unref(local_68);
    CowData<char32_t>::_unref(local_70);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_0010d197:
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
            if (lVar5 == 0) goto LAB_0010d20f;
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
LAB_0010d20f:
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
    if (cVar6 != '\0') goto LAB_0010d2c3;
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
      cVar6 = String::operator==(param_1,(String *)&local_60);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if (cVar6 != '\0') goto LAB_0010d2c3;
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
                if (lVar5 == 0) goto LAB_0010d42b;
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
LAB_0010d42b:
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
        if (cVar6 != '\0') goto LAB_0010d2c3;
      }
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar7 = String::operator==(param_1,"Object");
        return uVar7;
      }
      goto LAB_0010d4d4;
    }
  }
LAB_0010d2c3:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0010d4d4:
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
            if (lVar5 == 0) goto LAB_0010d55f;
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
LAB_0010d55f:
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
    if (cVar6 != '\0') goto LAB_0010d613;
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
              if (lVar5 == 0) goto LAB_0010d6d3;
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
LAB_0010d6d3:
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
      if (cVar6 != '\0') goto LAB_0010d613;
    }
    cVar6 = String::operator==(param_1,"Material");
    if (cVar6 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar7 = Resource::is_class((Resource *)this,param_1);
        return uVar7;
      }
      goto LAB_0010d77c;
    }
  }
LAB_0010d613:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0010d77c:
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
            if (lVar4 == 0) goto LAB_0010d7ff;
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
LAB_0010d7ff:
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
    if (cVar5 != '\0') goto LAB_0010d8b3;
  }
  cVar5 = String::operator==(param_1,"StandardMaterial3D");
  if (cVar5 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = BaseMaterial3D::is_class((BaseMaterial3D *)this,param_1);
      return uVar7;
    }
  }
  else {
LAB_0010d8b3:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* NavigationObstacle3DGizmoPlugin::is_class(String const&) const */

undefined8 __thiscall
NavigationObstacle3DGizmoPlugin::is_class(NavigationObstacle3DGizmoPlugin *this,String *param_1)

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
            if (lVar5 == 0) goto LAB_0010d97f;
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
LAB_0010d97f:
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
    if (cVar6 != '\0') goto LAB_0010da33;
  }
  cVar6 = String::operator==(param_1,"NavigationObstacle3DGizmoPlugin");
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
              if (lVar5 == 0) goto LAB_0010daf3;
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
LAB_0010daf3:
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
      if (cVar6 != '\0') goto LAB_0010da33;
    }
    cVar6 = String::operator==(param_1,"EditorNode3DGizmoPlugin");
    if (cVar6 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar7 = Resource::is_class((Resource *)this,param_1);
        return uVar7;
      }
      goto LAB_0010db9c;
    }
  }
LAB_0010da33:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0010db9c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* HBoxContainer::is_class(String const&) const */

undefined8 __thiscall HBoxContainer::is_class(HBoxContainer *this,String *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  char *pcVar4;
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
    lVar5 = *(long *)(lVar2 + 0x20);
    if (lVar5 == 0) {
      local_60 = 0;
    }
    else {
      pcVar4 = *(char **)(lVar5 + 8);
      local_60 = 0;
      if (pcVar4 == (char *)0x0) {
        plVar1 = (long *)(*(long *)(lVar5 + 0x10) + -0x10);
        if (*(long *)(lVar5 + 0x10) != 0) {
          do {
            lVar3 = *plVar1;
            if (lVar3 == 0) goto LAB_0010dc1f;
            LOCK();
            lVar7 = *plVar1;
            bVar9 = lVar3 == lVar7;
            if (bVar9) {
              *plVar1 = lVar3 + 1;
              lVar7 = lVar3;
            }
            UNLOCK();
          } while (!bVar9);
          if (lVar7 != -1) {
            local_60 = *(long *)(lVar5 + 0x10);
          }
        }
      }
      else {
        local_50 = strlen(pcVar4);
        local_58 = pcVar4;
        String::parse_latin1((StrRange *)&local_60);
      }
    }
LAB_0010dc1f:
    cVar6 = String::operator==(param_1,(String *)&local_60);
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
    if (cVar6 != '\0') goto LAB_0010dcd3;
  }
  cVar6 = String::operator==(param_1,"HBoxContainer");
  if (cVar6 == '\0') {
    for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
      lVar5 = *(long *)(lVar2 + 0x20);
      if (lVar5 == 0) {
        local_60 = 0;
      }
      else {
        pcVar4 = *(char **)(lVar5 + 8);
        local_60 = 0;
        if (pcVar4 == (char *)0x0) {
          if (*(long *)(lVar5 + 0x10) != 0) {
            CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar5 + 0x10));
          }
        }
        else {
          local_50 = strlen(pcVar4);
          local_58 = pcVar4;
          String::parse_latin1((StrRange *)&local_60);
        }
      }
      cVar6 = String::operator==(param_1,(String *)&local_60);
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
      if (cVar6 != '\0') goto LAB_0010dcd3;
    }
    cVar6 = String::operator==(param_1,"BoxContainer");
    if (cVar6 == '\0') {
      for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
        lVar5 = *(long *)(lVar2 + 0x20);
        if (lVar5 == 0) {
          local_60 = 0;
        }
        else {
          pcVar4 = *(char **)(lVar5 + 8);
          local_60 = 0;
          if (pcVar4 == (char *)0x0) {
            if (*(long *)(lVar5 + 0x10) != 0) {
              CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar5 + 0x10));
            }
          }
          else {
            local_50 = strlen(pcVar4);
            local_58 = pcVar4;
            String::parse_latin1((StrRange *)&local_60);
          }
        }
        cVar6 = String::operator==(param_1,(String *)&local_60);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
        if (cVar6 != '\0') goto LAB_0010dcd3;
      }
      cVar6 = String::operator==(param_1,"Container");
      if (cVar6 == '\0') {
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          uVar8 = Control::is_class((Control *)this,param_1);
          return uVar8;
        }
        goto LAB_0010dec5;
      }
    }
  }
LAB_0010dcd3:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0010dec5:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* StandardMaterial3D::_initialize_classv() */

void StandardMaterial3D::_initialize_classv(void)

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
    if (BaseMaterial3D::initialize_class()::initialized == '\0') {
      if (Material::initialize_class()::initialized == '\0') {
        if (Resource::initialize_class()::initialized == '\0') {
          Resource::initialize_class();
        }
        local_68 = 0;
        local_50 = 8;
        local_58 = "Resource";
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
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
        if ((StringName::configured != '\0') && (local_60 != 0)) {
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
        if ((code *)_GLOBAL_OFFSET_TABLE_ != Material::_bind_methods) {
          Material::_bind_methods();
        }
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
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      if ((StringName::configured != '\0') && (local_60 != 0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      if ((code *)PTR__bind_methods_00116078 != Material::_bind_methods) {
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



/* NavigationObstacle3DEditorPlugin::_initialize_classv() */

void NavigationObstacle3DEditorPlugin::_initialize_classv(void)

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
        if ((code *)PTR__bind_methods_00116008 != Node::_bind_methods) {
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
      if ((code *)PTR__bind_methods_00116080 != Node::_bind_methods) {
        EditorPlugin::_bind_methods();
      }
      if ((code *)PTR__bind_compatibility_methods_00116088 != Object::_bind_compatibility_methods) {
        EditorPlugin::_bind_compatibility_methods();
      }
      EditorPlugin::initialize_class()::initialized = '\x01';
    }
    local_58 = "EditorPlugin";
    local_68 = 0;
    local_50 = 0xc;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "NavigationObstacle3DEditorPlugin";
    local_70 = 0;
    local_50 = 0x20;
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



/* RefCounted::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void RefCounted::_get_property_listv(List *param_1,bool param_2)

{
  long *plVar1;
  long lVar2;
  undefined1 (*pauVar3) [16];
  undefined4 *puVar4;
  undefined7 in_register_00000031;
  List *pLVar5;
  long in_FS_OFFSET;
  StringName *local_a8;
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
  
  pLVar5 = (List *)CONCAT71(in_register_00000031,param_2);
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
  if (local_90 == 0) {
LAB_0010e6ed:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_0010e6ed;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)pLVar5;
      local_68 = local_80;
      goto joined_r0x0010e70f;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)pLVar5;
joined_r0x0010e70f:
  if (lVar2 == 0) {
    pauVar3 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])pLVar5 = pauVar3;
    *(undefined4 *)pauVar3[1] = 0;
    *pauVar3 = (undefined1  [16])0x0;
  }
  local_a8 = (StringName *)&local_68;
  puVar4 = (undefined4 *)operator_new(0x48,DefaultAllocator::alloc);
  *(undefined8 *)(puVar4 + 8) = 0;
  *(undefined1 (*) [16])(puVar4 + 2) = (undefined1  [16])0x0;
  *puVar4 = 0;
  puVar4[6] = 0;
  puVar4[10] = 6;
  *(undefined8 *)(puVar4 + 0x10) = 0;
  *(undefined1 (*) [16])(puVar4 + 0xc) = (undefined1  [16])0x0;
  *puVar4 = local_78._0_4_;
  if (local_70 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar4 + 2),(CowData *)&local_70);
  }
  StringName::operator=((StringName *)(puVar4 + 4),local_a8);
  puVar4[6] = local_60;
  if (*(long *)(puVar4 + 8) != local_58) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar4 + 8),(CowData *)&local_58);
  }
  puVar4[10] = local_50;
  plVar1 = *(long **)pLVar5;
  lVar2 = plVar1[1];
  *(undefined8 *)(puVar4 + 0xc) = 0;
  *(long **)(puVar4 + 0x10) = plVar1;
  *(long *)(puVar4 + 0xe) = lVar2;
  if (lVar2 != 0) {
    *(undefined4 **)(lVar2 + 0x30) = puVar4;
  }
  plVar1[1] = (long)puVar4;
  if (*plVar1 == 0) {
    *plVar1 = (long)puVar4;
  }
  *(int *)(plVar1 + 2) = (int)plVar1[2] + 1;
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
  ClassDB::get_property_list((StringName *)&local_78,pLVar5,true,(Object *)param_1);
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
  long *plVar1;
  long lVar2;
  undefined1 (*pauVar3) [16];
  undefined4 *puVar4;
  undefined7 in_register_00000031;
  List *pLVar5;
  long in_FS_OFFSET;
  StringName *local_a8;
  long local_98;
  long local_90;
  long local_88;
  long local_80;
  undefined *local_78;
  long local_70;
  long local_68;
  int local_60;
  long local_58;
  undefined4 local_50;
  long local_40;
  
  pLVar5 = (List *)CONCAT71(in_register_00000031,param_2);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_78 = &_LC33;
  local_88 = 0;
  local_90 = 0;
  local_70 = 4;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = &_LC33;
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
  if (local_90 == 0) {
LAB_0010ea5d:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_0010ea5d;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)pLVar5;
      local_68 = local_80;
      goto joined_r0x0010ea7f;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)pLVar5;
joined_r0x0010ea7f:
  if (lVar2 == 0) {
    pauVar3 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])pLVar5 = pauVar3;
    *(undefined4 *)pauVar3[1] = 0;
    *pauVar3 = (undefined1  [16])0x0;
  }
  local_a8 = (StringName *)&local_68;
  puVar4 = (undefined4 *)operator_new(0x48,DefaultAllocator::alloc);
  *(undefined8 *)(puVar4 + 8) = 0;
  *(undefined1 (*) [16])(puVar4 + 2) = (undefined1  [16])0x0;
  *puVar4 = 0;
  puVar4[6] = 0;
  puVar4[10] = 6;
  *(undefined8 *)(puVar4 + 0x10) = 0;
  *(undefined1 (*) [16])(puVar4 + 0xc) = (undefined1  [16])0x0;
  *puVar4 = local_78._0_4_;
  if (local_70 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar4 + 2),(CowData *)&local_70);
  }
  StringName::operator=((StringName *)(puVar4 + 4),local_a8);
  puVar4[6] = local_60;
  if (*(long *)(puVar4 + 8) != local_58) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar4 + 8),(CowData *)&local_58);
  }
  puVar4[10] = local_50;
  plVar1 = *(long **)pLVar5;
  lVar2 = plVar1[1];
  *(undefined8 *)(puVar4 + 0xc) = 0;
  *(long **)(puVar4 + 0x10) = plVar1;
  *(long *)(puVar4 + 0xe) = lVar2;
  if (lVar2 != 0) {
    *(undefined4 **)(lVar2 + 0x30) = puVar4;
  }
  plVar1[1] = (long)puVar4;
  if (*plVar1 == 0) {
    *plVar1 = (long)puVar4;
  }
  *(int *)(plVar1 + 2) = (int)plVar1[2] + 1;
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
  ClassDB::get_property_list((StringName *)&local_78,pLVar5,true,(Object *)param_1);
  if ((StringName::configured != '\0') && (local_78 != (undefined *)0x0)) {
    StringName::unref();
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
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
      goto LAB_0010edb1;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0010edb1:
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



/* NavigationObstacle3DEditorPlugin::_get_property_listv(List<PropertyInfo, DefaultAllocator>*,
   bool) const */

void __thiscall
NavigationObstacle3DEditorPlugin::_get_property_listv
          (NavigationObstacle3DEditorPlugin *this,List *param_1,bool param_2)

{
  long *plVar1;
  long lVar2;
  undefined1 (*pauVar3) [16];
  undefined4 *puVar4;
  long in_FS_OFFSET;
  StringName *local_a8;
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
    EditorPlugin::_get_property_listv((EditorPlugin *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "NavigationObstacle3DEditorPlugin";
  local_70 = 0x20;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "NavigationObstacle3DEditorPlugin";
  local_98 = 0;
  local_70 = 0x20;
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
LAB_0010f08d:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_0010f08d;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x0010f0af;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x0010f0af:
  if (lVar2 == 0) {
    pauVar3 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])param_1 = pauVar3;
    *(undefined4 *)pauVar3[1] = 0;
    *pauVar3 = (undefined1  [16])0x0;
  }
  local_a8 = (StringName *)&local_68;
  puVar4 = (undefined4 *)operator_new(0x48,DefaultAllocator::alloc);
  *(undefined8 *)(puVar4 + 8) = 0;
  *(undefined1 (*) [16])(puVar4 + 2) = (undefined1  [16])0x0;
  *puVar4 = 0;
  puVar4[6] = 0;
  puVar4[10] = 6;
  *(undefined8 *)(puVar4 + 0x10) = 0;
  *(undefined1 (*) [16])(puVar4 + 0xc) = (undefined1  [16])0x0;
  *puVar4 = local_78._0_4_;
  if (local_70 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar4 + 2),(CowData *)&local_70);
  }
  StringName::operator=((StringName *)(puVar4 + 4),local_a8);
  puVar4[6] = local_60;
  if (*(long *)(puVar4 + 8) != local_58) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar4 + 8),(CowData *)&local_58);
  }
  puVar4[10] = local_50;
  plVar1 = *(long **)param_1;
  lVar2 = plVar1[1];
  *(undefined8 *)(puVar4 + 0xc) = 0;
  *(long **)(puVar4 + 0x10) = plVar1;
  *(long *)(puVar4 + 0xe) = lVar2;
  if (lVar2 != 0) {
    *(undefined4 **)(lVar2 + 0x30) = puVar4;
  }
  plVar1[1] = (long)puVar4;
  if (*plVar1 == 0) {
    *plVar1 = (long)puVar4;
  }
  *(int *)(plVar1 + 2) = (int)plVar1[2] + 1;
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
  StringName::StringName((StringName *)&local_78,"NavigationObstacle3DEditorPlugin",false);
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
      goto LAB_0010f441;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0010f441:
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



/* Material::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall Material::_get_property_listv(Material *this,List *param_1,bool param_2)

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
      goto LAB_0010f6f1;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0010f6f1:
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



/* BaseMaterial3D::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall BaseMaterial3D::_get_property_listv(BaseMaterial3D *this,List *param_1,bool param_2)

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
      goto LAB_0010f9a1;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0010f9a1:
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
      goto LAB_0010fc51;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0010fc51:
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
  undefined1 (*pauVar3) [16];
  undefined4 *puVar4;
  long in_FS_OFFSET;
  StringName *local_a8;
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
LAB_0010ff2d:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_0010ff2d;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x0010ff4f;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x0010ff4f:
  if (lVar2 == 0) {
    pauVar3 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])param_1 = pauVar3;
    *(undefined4 *)pauVar3[1] = 0;
    *pauVar3 = (undefined1  [16])0x0;
  }
  local_a8 = (StringName *)&local_68;
  puVar4 = (undefined4 *)operator_new(0x48,DefaultAllocator::alloc);
  *(undefined8 *)(puVar4 + 8) = 0;
  *(undefined1 (*) [16])(puVar4 + 2) = (undefined1  [16])0x0;
  *puVar4 = 0;
  puVar4[6] = 0;
  puVar4[10] = 6;
  *(undefined8 *)(puVar4 + 0x10) = 0;
  *(undefined1 (*) [16])(puVar4 + 0xc) = (undefined1  [16])0x0;
  *puVar4 = local_78._0_4_;
  if (local_70 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar4 + 2),(CowData *)&local_70);
  }
  StringName::operator=((StringName *)(puVar4 + 4),local_a8);
  puVar4[6] = local_60;
  if (*(long *)(puVar4 + 8) != local_58) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar4 + 8),(CowData *)&local_58);
  }
  puVar4[10] = local_50;
  plVar1 = *(long **)param_1;
  lVar2 = plVar1[1];
  *(undefined8 *)(puVar4 + 0xc) = 0;
  *(long **)(puVar4 + 0x10) = plVar1;
  *(long *)(puVar4 + 0xe) = lVar2;
  if (lVar2 != 0) {
    *(undefined4 **)(lVar2 + 0x30) = puVar4;
  }
  plVar1[1] = (long)puVar4;
  if (*plVar1 == 0) {
    *plVar1 = (long)puVar4;
  }
  *(int *)(plVar1 + 2) = (int)plVar1[2] + 1;
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



/* NavigationObstacle3DGizmoPlugin::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool)
   const */

void __thiscall
NavigationObstacle3DGizmoPlugin::_get_property_listv
          (NavigationObstacle3DGizmoPlugin *this,List *param_1,bool param_2)

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
  local_78 = "NavigationObstacle3DGizmoPlugin";
  local_70 = 0x1f;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "NavigationObstacle3DGizmoPlugin";
  local_98 = 0;
  local_70 = 0x1f;
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
      goto LAB_001102e1;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_001102e1:
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
  StringName::StringName((StringName *)&local_78,"NavigationObstacle3DGizmoPlugin",false);
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
      goto LAB_00110591;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00110591:
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
  if ((code *)PTR__get_property_list_00116090 != Object::_get_property_list) {
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
      goto LAB_00110861;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00110861:
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
  if ((code *)PTR__get_property_list_00116098 != CanvasItem::_get_property_list) {
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
      goto LAB_00110b31;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00110b31:
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
      goto LAB_00110de1;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00110de1:
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
      goto LAB_00111091;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00111091:
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
LAB_001115d0:
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
  if (lVar6 == 0) goto LAB_001115d0;
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
LAB_0011155c:
    puVar8 = *(undefined8 **)this;
    if (puVar8 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    lVar7 = puVar8[-1];
    if (param_1 <= lVar7) goto LAB_001114ff;
  }
  else {
    if (lVar7 != 0) {
      uVar5 = _realloc(this,lVar6);
      if ((int)uVar5 != 0) {
        return uVar5;
      }
      goto LAB_0011155c;
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
LAB_001114ff:
  puVar8[-1] = param_1;
  return 0;
}



/* CowData<Vector2>::_realloc(long) */

undefined8 __thiscall CowData<Vector2>::_realloc(CowData<Vector2> *this,long param_1)

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
LAB_00111930:
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
  if (lVar8 == 0) goto LAB_00111930;
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
        goto LAB_00111841;
      }
      uVar6 = _realloc(this,lVar8);
      if ((int)uVar6 != 0) {
        return uVar6;
      }
    }
    puVar7 = *(undefined8 **)this;
    if (puVar7 != (undefined8 *)0x0) {
LAB_00111841:
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



/* NavigationObstacle3DGizmoPlugin::has_gizmo(Node3D*) */

void NavigationObstacle3DGizmoPlugin::_GLOBAL__sub_I_has_gizmo(void)

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
/* PropertyListHelper::~PropertyListHelper() */

void __thiscall PropertyListHelper::~PropertyListHelper(PropertyListHelper *this)

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
/* HBoxContainer::~HBoxContainer() */

void __thiscall HBoxContainer::~HBoxContainer(HBoxContainer *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* NavigationObstacle3DGizmoPlugin::~NavigationObstacle3DGizmoPlugin() */

void __thiscall
NavigationObstacle3DGizmoPlugin::~NavigationObstacle3DGizmoPlugin
          (NavigationObstacle3DGizmoPlugin *this)

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
/* CallableCustomMethodPointer<NavigationObstacle3DEditorPlugin, void,
   Node*>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<NavigationObstacle3DEditorPlugin,void,Node*>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<NavigationObstacle3DEditorPlugin,void,Node*> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<NavigationObstacle3DEditorPlugin,
   void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<NavigationObstacle3DEditorPlugin,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<NavigationObstacle3DEditorPlugin,void> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<NavigationObstacle3DEditorPlugin, void,
   int>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<NavigationObstacle3DEditorPlugin,void,int>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<NavigationObstacle3DEditorPlugin,void,int> *this)

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



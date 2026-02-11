
/* CollisionShape3DGizmoPlugin::get_priority() const */

undefined8 CollisionShape3DGizmoPlugin::get_priority(void)

{
  return 0xffffffff;
}



/* CollisionShape3DGizmoPlugin::begin_handle_action(EditorNode3DGizmo const*, int, bool) */

void __thiscall
CollisionShape3DGizmoPlugin::begin_handle_action
          (CollisionShape3DGizmoPlugin *this,EditorNode3DGizmo *param_1,int param_2,bool param_3)

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



/* LocalVector<Geometry3D::MeshData::Face, unsigned int, false, false>::resize(unsigned int) [clone
   .part.0] */

void LocalVector<Geometry3D::MeshData::Face,unsigned_int,false,false>::resize(uint param_1)

{
  code *pcVar1;
  
  _err_print_error("resize","./core/templates/local_vector.h",0xa3,
                   "FATAL: Condition \"!data\" is true.","Out of memory",0,0);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CollisionShape3DGizmoPlugin::has_gizmo(Node3D*) */

bool __thiscall
CollisionShape3DGizmoPlugin::has_gizmo(CollisionShape3DGizmoPlugin *this,Node3D *param_1)

{
  long lVar1;
  
  if (param_1 != (Node3D *)0x0) {
    lVar1 = __dynamic_cast(param_1,&Object::typeinfo,&CollisionShape3D::typeinfo,0);
    return lVar1 != 0;
  }
  return false;
}



/* CollisionShape3DGizmoPlugin::~CollisionShape3DGizmoPlugin() */

void __thiscall
CollisionShape3DGizmoPlugin::~CollisionShape3DGizmoPlugin(CollisionShape3DGizmoPlugin *this)

{
  Object *pOVar1;
  char cVar2;
  
  *(undefined ***)this = &PTR__initialize_classv_0010b4b8;
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



/* CollisionShape3DGizmoPlugin::~CollisionShape3DGizmoPlugin() */

void __thiscall
CollisionShape3DGizmoPlugin::~CollisionShape3DGizmoPlugin(CollisionShape3DGizmoPlugin *this)

{
  Object *pOVar1;
  char cVar2;
  
  *(undefined ***)this = &PTR__initialize_classv_0010b4b8;
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



/* void Ref<CylinderShape3D>::TEMPNAMEPLACEHOLDERVALUE(Ref<Shape3D> const&) [clone .isra.0] */

void __thiscall Ref<CylinderShape3D>::operator=(Ref<CylinderShape3D> *this,Ref *param_1)

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
    pOVar3 = (Object *)__dynamic_cast(param_1,&Object::typeinfo,&CylinderShape3D::typeinfo,0);
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



/* void Ref<CapsuleShape3D>::TEMPNAMEPLACEHOLDERVALUE(Ref<Shape3D> const&) [clone .isra.0] */

void __thiscall Ref<CapsuleShape3D>::operator=(Ref<CapsuleShape3D> *this,Ref *param_1)

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
    pOVar3 = (Object *)__dynamic_cast(param_1,&Object::typeinfo,&CapsuleShape3D::typeinfo,0);
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



/* void Ref<SeparationRayShape3D>::TEMPNAMEPLACEHOLDERVALUE(Ref<Shape3D> const&) [clone .isra.0] */

void __thiscall Ref<SeparationRayShape3D>::operator=(Ref<SeparationRayShape3D> *this,Ref *param_1)

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
    pOVar3 = (Object *)__dynamic_cast(param_1,&Object::typeinfo,&SeparationRayShape3D::typeinfo,0);
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



/* CollisionShape3DGizmoPlugin::get_gizmo_name() const */

CollisionShape3DGizmoPlugin * __thiscall
CollisionShape3DGizmoPlugin::get_gizmo_name(CollisionShape3DGizmoPlugin *this)

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



/* CollisionShape3DGizmoPlugin::get_handle_name(EditorNode3DGizmo const*, int, bool) const */

CollisionShape3DGizmoPlugin * __thiscall
CollisionShape3DGizmoPlugin::get_handle_name
          (CollisionShape3DGizmoPlugin *this,EditorNode3DGizmo *param_1,int param_2,bool param_3)

{
  long lVar1;
  char cVar2;
  long lVar3;
  undefined7 in_register_00000009;
  undefined4 in_register_00000014;
  char *pcVar4;
  long in_FS_OFFSET;
  Object *local_50;
  
  lVar3 = *(long *)(CONCAT44(in_register_00000014,param_2) + 0x1f0);
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (lVar3 != 0) {
    __dynamic_cast(lVar3,&Object::typeinfo,&CollisionShape3D::typeinfo,0);
  }
  CollisionShape3D::get_shape();
  if (local_50 == (Object *)0x0) {
    *(undefined8 *)this = 0;
    String::parse_latin1((String *)this,"");
  }
  else {
    lVar3 = __dynamic_cast(local_50,&Object::typeinfo,&SphereShape3D::typeinfo,0);
    if (lVar3 == 0) {
      lVar3 = __dynamic_cast(local_50,&Object::typeinfo,&BoxShape3D::typeinfo,0);
      if (lVar3 == 0) {
        lVar3 = __dynamic_cast(local_50,&Object::typeinfo,&CapsuleShape3D::typeinfo,0);
        if (lVar3 == 0) {
          lVar3 = __dynamic_cast(local_50,&Object::typeinfo,&CylinderShape3D::typeinfo,0);
          if (lVar3 == 0) {
            lVar3 = __dynamic_cast(local_50,&Object::typeinfo,&SeparationRayShape3D::typeinfo,0);
            *(undefined8 *)this = 0;
            if (lVar3 == 0) {
              String::parse_latin1((String *)this,"");
            }
            else {
              String::parse_latin1((String *)this,"Length");
            }
          }
          else {
            Gizmo3DHelper::cylinder_get_handle_name((int)this);
          }
        }
        else {
          *(undefined8 *)this = 0;
          pcVar4 = "Height";
          if ((int)CONCAT71(in_register_00000009,param_3) == 0) {
            pcVar4 = "Radius";
          }
          String::parse_latin1((String *)this,pcVar4);
        }
      }
      else {
        Gizmo3DHelper::box_get_handle_name((int)this);
      }
    }
    else {
      *(undefined8 *)this = 0;
      String::parse_latin1((StrRange *)this);
    }
  }
  if (local_50 != (Object *)0x0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      cVar2 = predelete_handler(local_50);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)local_50 + 0x140))(local_50);
        Memory::free_static(local_50,false);
      }
    }
  }
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
    if ((code *)PTR__bind_methods_0010f008 != RefCounted::_bind_methods) {
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



/* CollisionShape3DGizmoPlugin::set_handle(EditorNode3DGizmo const*, int, bool, Camera3D*, Vector2
   const&) */

void __thiscall
CollisionShape3DGizmoPlugin::set_handle
          (CollisionShape3DGizmoPlugin *this,EditorNode3DGizmo *param_1,int param_2,bool param_3,
          Camera3D *param_4,Vector2 *param_5)

{
  char cVar1;
  Vector3 *pVVar2;
  Object *pOVar3;
  long lVar4;
  Object *pOVar5;
  int iVar6;
  long in_FS_OFFSET;
  float fVar7;
  double dVar8;
  float fVar9;
  float local_a8;
  float local_a4;
  Object *local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined8 local_7c;
  float local_74;
  undefined1 local_70 [12];
  undefined8 local_64;
  undefined4 local_5c;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_4c;
  undefined4 local_44;
  long local_40;
  
  pVVar2 = *(Vector3 **)(param_1 + 0x1f0);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (pVVar2 != (Vector3 *)0x0) {
    pVVar2 = (Vector3 *)__dynamic_cast(pVVar2,&Object::typeinfo,&CollisionShape3D::typeinfo,0);
  }
  CollisionShape3D::get_shape();
  if (local_a0 == (Object *)0x0) {
    Ref<Shape3D>::unref((Ref<Shape3D> *)&local_a0);
    goto LAB_00101156;
  }
  local_58 = 0;
  local_50 = 0;
  local_4c = 0;
  local_44 = 0;
  Gizmo3DHelper::get_segment(*(Camera3D **)(this + 0x450),(Vector2 *)param_4,param_5);
  pOVar5 = local_a0;
  if (local_a0 == (Object *)0x0) goto LAB_00101156;
  pOVar3 = (Object *)__dynamic_cast(local_a0,&Object::typeinfo,&SphereShape3D::typeinfo,0);
  if (pOVar3 != (Object *)0x0) {
    cVar1 = RefCounted::reference();
    local_7c = 0;
    if (cVar1 == '\0') {
      pOVar3 = (Object *)0x0;
    }
    local_74 = 0.0;
    local_70._0_8_ = 0;
    local_70._8_4_ = 0;
    local_88 = 0x45800000;
    local_80 = 0;
    local_64 = 0;
    local_5c = 0;
    Geometry3D::get_closest_points_between_segments
              ((Vector3 *)&local_64,(Vector3 *)&local_88,(Vector3 *)&local_58,(Vector3 *)&local_4c,
               (Vector3 *)&local_7c,local_70);
    fVar9 = (float)local_7c;
    if (*(char *)(Node3DEditor::singleton + 0xe00) != *(char *)(Node3DEditor::singleton + 0xe01)) {
      fVar7 = (float)Node3DEditor::get_translate_snap();
      dVar8 = (double)Math::snapped((double)fVar9,(double)fVar7);
      fVar9 = (float)dVar8;
    }
    if ((double)fVar9 < _LC23) {
      fVar9 = _LC20;
    }
    SphereShape3D::set_radius(fVar9);
    cVar1 = RefCounted::unreference();
    if ((cVar1 != '\0') && (cVar1 = predelete_handler(pOVar3), cVar1 != '\0')) {
      (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
      Memory::free_static(pOVar3,false);
    }
    pOVar5 = local_a0;
    if (local_a0 == (Object *)0x0) goto LAB_00101156;
  }
  pOVar3 = (Object *)__dynamic_cast(pOVar5,&Object::typeinfo,&SeparationRayShape3D::typeinfo,0);
  if (pOVar3 != (Object *)0x0) {
    cVar1 = RefCounted::reference();
    local_7c = 0;
    if (cVar1 == '\0') {
      pOVar3 = (Object *)0x0;
    }
    local_74 = 0.0;
    local_70._0_8_ = 0;
    local_70._8_4_ = 0;
    local_88 = 0;
    local_80 = 0x45800000;
    local_64 = 0;
    local_5c = 0;
    Geometry3D::get_closest_points_between_segments
              ((Vector3 *)&local_64,(Vector3 *)&local_88,(Vector3 *)&local_58,(Vector3 *)&local_4c,
               (Vector3 *)&local_7c,local_70);
    fVar9 = local_74;
    if (*(char *)(Node3DEditor::singleton + 0xe00) != *(char *)(Node3DEditor::singleton + 0xe01)) {
      fVar7 = (float)Node3DEditor::get_translate_snap();
      dVar8 = (double)Math::snapped((double)fVar9,(double)fVar7);
      fVar9 = (float)dVar8;
    }
    if ((double)fVar9 < _LC23) {
      fVar9 = _LC20;
    }
    SeparationRayShape3D::set_length(fVar9);
    cVar1 = RefCounted::unreference();
    if ((cVar1 != '\0') && (cVar1 = predelete_handler(pOVar3), cVar1 != '\0')) {
      (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
      Memory::free_static(pOVar3,false);
    }
    pOVar5 = local_a0;
    if (local_a0 == (Object *)0x0) goto LAB_00101156;
  }
  pOVar3 = (Object *)__dynamic_cast(pOVar5,&Object::typeinfo,&BoxShape3D::typeinfo,0);
  iVar6 = (int)&local_58;
  if (pOVar3 != (Object *)0x0) {
    cVar1 = RefCounted::reference();
    if (cVar1 == '\0') {
      pOVar3 = (Object *)0x0;
    }
    local_70 = BoxShape3D::get_size();
    local_64 = 0;
    local_5c = 0;
    Gizmo3DHelper::box_set_handle
              (*(Vector3 **)(this + 0x450),iVar6,(Vector3 *)(ulong)(uint)param_2,local_70);
    BoxShape3D::set_size(pOVar3);
    Node3D::set_global_position(pVVar2);
    cVar1 = RefCounted::unreference();
    if (cVar1 != '\0') {
      cVar1 = predelete_handler(pOVar3);
      if (cVar1 != '\0') {
        (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
        Memory::free_static(pOVar3,false);
      }
    }
    pOVar5 = local_a0;
    if (local_a0 == (Object *)0x0) goto LAB_00101156;
  }
  lVar4 = __dynamic_cast(pOVar5,&Object::typeinfo,&CapsuleShape3D::typeinfo,0);
  if (lVar4 != 0) {
    local_98 = 0;
    local_90 = 0;
    *(undefined4 *)((long)&local_98 + (ulong)(param_2 != 0) * 4) = 0x3f800000;
    pOVar5 = (Object *)__dynamic_cast(pOVar5,&Object::typeinfo,&CapsuleShape3D::typeinfo,0);
    if (pOVar5 != (Object *)0x0) {
      cVar1 = RefCounted::reference();
      if (cVar1 == '\0') {
        pOVar5 = (Object *)0x0;
      }
    }
    local_7c = 0;
    fVar9 = (float)local_98;
    fVar7 = (float)((ulong)local_98 >> 0x20);
    local_88 = CONCAT44(_LC26._4_4_ * fVar7,(float)_LC26 * fVar9);
    local_74 = 0.0;
    local_70._0_8_ = 0;
    local_70._8_4_ = 0;
    local_80 = 0;
    local_64 = 0;
    local_5c = 0;
    Geometry3D::get_closest_points_between_segments
              ((Vector3 *)&local_64,(Vector3 *)&local_88,(Vector3 *)&local_58,(Vector3 *)&local_4c,
               (Vector3 *)&local_7c,local_70);
    fVar9 = local_7c._4_4_ * fVar7 + fVar9 * (float)local_7c + local_74 * 0.0;
    if (*(char *)(Node3DEditor::singleton + 0xe00) != *(char *)(Node3DEditor::singleton + 0xe01)) {
      fVar7 = (float)Node3DEditor::get_translate_snap();
      dVar8 = (double)Math::snapped((double)fVar9,(double)fVar7);
      fVar9 = (float)dVar8;
    }
    if ((double)fVar9 < _LC23) {
      fVar9 = _LC20;
    }
    if (param_2 == 0) {
      CapsuleShape3D::set_radius(fVar9);
LAB_001011c3:
      cVar1 = RefCounted::unreference();
      if ((cVar1 != '\0') && (cVar1 = predelete_handler(pOVar5), cVar1 != '\0')) {
        (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
        Memory::free_static(pOVar5,false);
      }
    }
    else {
      if (param_2 == 1) {
        CapsuleShape3D::set_height(fVar9 + fVar9);
        goto LAB_001011c3;
      }
      if (pOVar5 != (Object *)0x0) goto LAB_001011c3;
    }
    pOVar5 = local_a0;
    if (local_a0 == (Object *)0x0) goto LAB_00101156;
  }
  pOVar5 = (Object *)__dynamic_cast(pOVar5,&Object::typeinfo,&CylinderShape3D::typeinfo,0);
  if (pOVar5 != (Object *)0x0) {
    cVar1 = RefCounted::reference();
    if (cVar1 == '\0') {
      pOVar5 = (Object *)0x0;
    }
    local_a8 = (float)CylinderShape3D::get_height();
    local_a4 = (float)CylinderShape3D::get_radius();
    local_64 = 0;
    local_5c = 0;
    Gizmo3DHelper::cylinder_set_handle
              (*(Vector3 **)(this + 0x450),iVar6,(float *)(ulong)(uint)param_2,&local_a8,
               (Vector3 *)&local_a4);
    CylinderShape3D::set_height(local_a8);
    CylinderShape3D::set_radius(local_a4);
    Node3D::set_global_position(pVVar2);
    cVar1 = RefCounted::unreference();
    if (cVar1 != '\0') {
      cVar1 = predelete_handler(pOVar5);
      if (cVar1 != '\0') {
        (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
        Memory::free_static(pOVar5,false);
      }
    }
    if (local_a0 == (Object *)0x0) goto LAB_00101156;
  }
  cVar1 = RefCounted::unreference();
  if (cVar1 != '\0') {
    cVar1 = predelete_handler(local_a0);
    if (cVar1 != '\0') {
      (**(code **)(*(long *)local_a0 + 0x140))(local_a0);
      Memory::free_static(local_a0,false);
    }
  }
LAB_00101156:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* CollisionShape3DGizmoPlugin::get_handle_value(EditorNode3DGizmo const*, int, bool) const */

CollisionShape3DGizmoPlugin * __thiscall
CollisionShape3DGizmoPlugin::get_handle_value
          (CollisionShape3DGizmoPlugin *this,EditorNode3DGizmo *param_1,int param_2,bool param_3)

{
  undefined1 auVar1 [12];
  char cVar2;
  Object *pOVar3;
  long lVar4;
  undefined7 in_register_00000009;
  undefined4 in_register_00000014;
  long in_FS_OFFSET;
  float fVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  Ref *local_60;
  Object *local_58;
  undefined1 local_50 [12];
  long local_40;
  
  lVar4 = *(long *)(CONCAT44(in_register_00000014,param_2) + 0x1f0);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (lVar4 != 0) {
    __dynamic_cast(lVar4,&Object::typeinfo,&CollisionShape3D::typeinfo,0);
  }
  CollisionShape3D::get_shape();
  if (local_60 == (Ref *)0x0) {
    *(undefined4 *)this = 0;
    *(undefined1 (*) [16])(this + 8) = (undefined1  [16])0x0;
    goto LAB_001013ca;
  }
  pOVar3 = (Object *)__dynamic_cast(local_60,&Object::typeinfo,&SphereShape3D::typeinfo,0);
  if (pOVar3 == (Object *)0x0) {
    pOVar3 = (Object *)__dynamic_cast(local_60,&Object::typeinfo,&BoxShape3D::typeinfo,0);
    if (pOVar3 != (Object *)0x0) {
      cVar2 = RefCounted::reference();
      if (cVar2 == '\0') {
        pOVar3 = (Object *)0x0;
      }
      local_50 = BoxShape3D::get_size();
      Variant::Variant((Variant *)this,local_50);
      cVar2 = RefCounted::unreference();
      auVar1 = local_50;
      if (cVar2 != '\0') {
        cVar2 = predelete_handler(pOVar3);
        auVar1 = local_50;
        if (cVar2 != '\0') {
          (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
          Memory::free_static(pOVar3,false);
          auVar1 = local_50;
        }
      }
      goto LAB_001013b0;
    }
    lVar4 = __dynamic_cast(local_60,&Object::typeinfo,&CapsuleShape3D::typeinfo,0);
    if (lVar4 != 0) {
      local_58 = (Object *)0x0;
      Ref<CapsuleShape3D>::operator=((Ref<CapsuleShape3D> *)&local_58,local_60);
      pOVar3 = local_58;
      uVar6 = CapsuleShape3D::get_height();
      uVar7 = CapsuleShape3D::get_radius();
      local_50._0_8_ = CONCAT44(uVar6,uVar7);
      Variant::Variant((Variant *)this,(Vector2 *)local_50);
      cVar2 = RefCounted::unreference();
      auVar1._8_4_ = local_50._8_4_;
      auVar1._0_8_ = local_50._0_8_;
joined_r0x00101509:
      if (cVar2 != '\0') {
        cVar2 = predelete_handler(pOVar3);
        auVar1._8_4_ = local_50._8_4_;
        auVar1._0_8_ = local_50._0_8_;
        if (cVar2 != '\0') {
          (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
          Memory::free_static(pOVar3,false);
          auVar1._8_4_ = local_50._8_4_;
          auVar1._0_8_ = local_50._0_8_;
        }
      }
      goto LAB_001013b0;
    }
    lVar4 = __dynamic_cast(local_60,&Object::typeinfo,&CylinderShape3D::typeinfo,0);
    if (lVar4 != 0) {
      local_58 = (Object *)0x0;
      Ref<CylinderShape3D>::operator=((Ref<CylinderShape3D> *)&local_58,local_60);
      pOVar3 = local_58;
      if ((int)CONCAT71(in_register_00000009,param_3) == 0) {
        fVar5 = (float)CylinderShape3D::get_radius();
      }
      else {
        fVar5 = (float)CylinderShape3D::get_height();
      }
      Variant::Variant((Variant *)this,fVar5);
      cVar2 = RefCounted::unreference();
      auVar1._8_4_ = local_50._8_4_;
      auVar1._0_8_ = local_50._0_8_;
      goto joined_r0x00101509;
    }
    lVar4 = __dynamic_cast(local_60,&Object::typeinfo,&SeparationRayShape3D::typeinfo,0);
    auVar1._8_4_ = local_50._8_4_;
    auVar1._0_8_ = local_50._0_8_;
    if (lVar4 != 0) {
      local_58 = (Object *)0x0;
      Ref<SeparationRayShape3D>::operator=((Ref<SeparationRayShape3D> *)&local_58,local_60);
      fVar5 = (float)SeparationRayShape3D::get_length();
      Variant::Variant((Variant *)this,fVar5);
      Ref<SeparationRayShape3D>::unref((Ref<SeparationRayShape3D> *)&local_58);
      auVar1._8_4_ = local_50._8_4_;
      auVar1._0_8_ = local_50._0_8_;
      goto LAB_001013b0;
    }
    *(undefined4 *)this = 0;
    *(undefined1 (*) [16])(this + 8) = (undefined1  [16])0x0;
  }
  else {
    cVar2 = RefCounted::reference();
    if (cVar2 == '\0') {
      pOVar3 = (Object *)0x0;
    }
    fVar5 = (float)SphereShape3D::get_radius();
    Variant::Variant((Variant *)this,fVar5);
    cVar2 = RefCounted::unreference();
    auVar1._8_4_ = local_50._8_4_;
    auVar1._0_8_ = local_50._0_8_;
    if (cVar2 != '\0') {
      cVar2 = predelete_handler(pOVar3);
      auVar1._8_4_ = local_50._8_4_;
      auVar1._0_8_ = local_50._0_8_;
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
        Memory::free_static(pOVar3,false);
        auVar1._8_4_ = local_50._8_4_;
        auVar1._0_8_ = local_50._0_8_;
      }
    }
LAB_001013b0:
    local_50 = auVar1;
    if (local_60 == (Ref *)0x0) goto LAB_001013ca;
  }
  local_50 = auVar1;
  cVar2 = RefCounted::unreference();
  if (cVar2 != '\0') {
    cVar2 = predelete_handler((Object *)local_60);
    if (cVar2 != '\0') {
      (**(code **)(*(long *)local_60 + 0x140))(local_60);
      Memory::free_static(local_60,false);
    }
  }
LAB_001013ca:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CollisionShape3DGizmoPlugin::commit_handle(EditorNode3DGizmo const*, int, bool, Variant const&,
   bool) */

void __thiscall
CollisionShape3DGizmoPlugin::commit_handle
          (CollisionShape3DGizmoPlugin *this,EditorNode3DGizmo *param_1,int param_2,bool param_3,
          Variant *param_4,bool param_5)

{
  String *pSVar1;
  char cVar2;
  Object *pOVar3;
  Object *pOVar4;
  Object *pOVar5;
  long lVar6;
  EditorUndoRedoManager *pEVar7;
  long in_FS_OFFSET;
  float fVar8;
  float fVar9;
  undefined8 uVar10;
  StringName *local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  String local_e0 [8];
  undefined8 local_d8;
  undefined8 local_d0;
  Object *local_c8;
  long local_c0;
  long local_b8;
  long local_b0;
  Variant *local_a8 [2];
  Variant *local_98 [4];
  int local_78 [6];
  undefined8 local_60;
  undefined1 local_58 [16];
  long local_40;
  
  pOVar3 = *(Object **)(param_1 + 0x1f0);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (pOVar3 != (Object *)0x0) {
    pOVar3 = (Object *)__dynamic_cast(pOVar3,&Object::typeinfo,&CollisionShape3D::typeinfo,0);
  }
  CollisionShape3D::get_shape();
  if (local_f8 == (StringName *)0x0) goto LAB_00102233;
  pOVar4 = (Object *)__dynamic_cast(local_f8,&Object::typeinfo,&SphereShape3D::typeinfo,0);
  if (pOVar4 == (Object *)0x0) {
LAB_00101996:
    lVar6 = __dynamic_cast(local_f8,&Object::typeinfo,&BoxShape3D::typeinfo,0);
    if (lVar6 != 0) {
      pSVar1 = *(String **)(this + 0x450);
      StringName::StringName((StringName *)&local_b0,"size",false);
      StringName::StringName((StringName *)&local_b8,"global_position",false);
      local_c8 = (Object *)0x0;
      String::parse_latin1((String *)&local_c8,"");
      local_d0 = 0;
      String::parse_latin1((String *)&local_d0,"Change Box Shape Size");
      TTR((String *)&local_c0,(String *)&local_d0);
      Gizmo3DHelper::box_commit_handle
                (pSVar1,SUB81((String *)&local_c0,0),(Object *)(ulong)param_5,pOVar3,local_f8,
                 (StringName *)&local_b8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
      if ((StringName::configured != '\0') &&
         (((local_b8 == 0 || (StringName::unref(), StringName::configured != '\0')) &&
          (local_b0 != 0)))) {
        StringName::unref();
      }
      if (local_f8 == (StringName *)0x0) goto LAB_00102233;
    }
    pOVar4 = (Object *)__dynamic_cast(local_f8,&Object::typeinfo,&CapsuleShape3D::typeinfo,0);
    if (pOVar4 != (Object *)0x0) {
      cVar2 = RefCounted::reference();
      if (cVar2 == '\0') {
        pOVar4 = (Object *)0x0;
      }
      uVar10 = Variant::operator_cast_to_Vector2(param_4);
      fVar8 = (float)((ulong)uVar10 >> 0x20);
      if (param_5) {
        CapsuleShape3D::set_radius((float)uVar10);
        CapsuleShape3D::set_height(fVar8);
        cVar2 = RefCounted::unreference();
        goto joined_r0x00102218;
      }
      pEVar7 = (EditorUndoRedoManager *)EditorUndoRedoManager::get_singleton();
      local_b8 = 0;
      if (param_2 == 0) {
        String::parse_latin1((String *)&local_b8,"");
        local_c0 = 0;
        String::parse_latin1((String *)&local_c0,"Change Capsule Shape Radius");
        TTR((String *)&local_b0,(String *)&local_c0);
        EditorUndoRedoManager::create_action(pEVar7,(String *)&local_b0,0,0,0);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
        fVar9 = (float)CapsuleShape3D::get_radius();
        StringName::StringName((StringName *)&local_b0,"set_radius",false);
        EditorUndoRedoManager::add_do_method<float>(pEVar7,pOVar4,(StringName *)&local_b0,fVar9);
      }
      else {
        String::parse_latin1((String *)&local_b8,"");
        local_c0 = 0;
        String::parse_latin1((String *)&local_c0,"Change Capsule Shape Height");
        TTR((String *)&local_b0,(String *)&local_c0);
        EditorUndoRedoManager::create_action(pEVar7,(String *)&local_b0,0,0,0);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
        fVar9 = (float)CapsuleShape3D::get_height();
        StringName::StringName((StringName *)&local_b0,"set_height",false);
        EditorUndoRedoManager::add_do_method<float>(pEVar7,pOVar4,(StringName *)&local_b0,fVar9);
      }
      if ((StringName::configured != '\0') && (local_b0 != 0)) {
        StringName::unref();
      }
      StringName::StringName((StringName *)&local_b0,"set_radius",false);
      Variant::Variant((Variant *)local_78,(float)uVar10);
      local_60 = 0;
      local_58 = (undefined1  [16])0x0;
      local_98[0] = (Variant *)local_78;
      EditorUndoRedoManager::add_undo_methodp
                ((Object *)pEVar7,(StringName *)pOVar4,(Variant **)&local_b0,(int)local_98);
      if (Variant::needs_deinit[(int)local_60] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[local_78[0]] != '\0') {
        Variant::_clear_internal();
      }
      if ((StringName::configured != '\0') && (local_b0 != 0)) {
        StringName::unref();
      }
      StringName::StringName((StringName *)&local_b0,"set_height",false);
      Variant::Variant((Variant *)local_78,fVar8);
      local_60 = 0;
      local_58 = (undefined1  [16])0x0;
      local_98[0] = (Variant *)local_78;
      EditorUndoRedoManager::add_undo_methodp
                ((Object *)pEVar7,(StringName *)pOVar4,(Variant **)&local_b0,(int)local_98);
      if (Variant::needs_deinit[(int)local_60] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[local_78[0]] != '\0') {
        Variant::_clear_internal();
      }
      if ((StringName::configured != '\0') && (local_b0 != 0)) {
        StringName::unref();
      }
      EditorUndoRedoManager::commit_action(SUB81(pEVar7,0));
      if (((pOVar4 != (Object *)0x0) && (cVar2 = RefCounted::unreference(), cVar2 != '\0')) &&
         (cVar2 = predelete_handler(pOVar4), cVar2 != '\0')) {
        (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
        Memory::free_static(pOVar4,false);
      }
      if (local_f8 == (StringName *)0x0) goto LAB_00102233;
    }
    pOVar4 = (Object *)__dynamic_cast(local_f8,&Object::typeinfo,&CylinderShape3D::typeinfo,0);
    if (pOVar4 != (Object *)0x0) {
      cVar2 = RefCounted::reference();
      if (cVar2 == '\0') {
        pOVar4 = (Object *)0x0;
      }
      uVar10 = *(undefined8 *)(this + 0x450);
      StringName::StringName((StringName *)&local_b0,"radius",false);
      StringName::StringName((StringName *)&local_b8,"height",false);
      StringName::StringName((StringName *)&local_c0,"global_position",false);
      local_d0 = 0;
      String::parse_latin1((String *)&local_d0,"");
      local_d8 = 0;
      String::parse_latin1((String *)&local_d8,"Change Cylinder Shape Height");
      TTR((String *)&local_c8,(String *)&local_d8);
      local_e8 = 0;
      String::parse_latin1((String *)&local_e8,"");
      local_f0 = 0;
      String::parse_latin1((String *)&local_f0,"Change Cylinder Shape Radius");
      TTR(local_e0,(String *)&local_f0);
      Gizmo3DHelper::cylinder_commit_handle
                ((int)uVar10,(String *)(ulong)(uint)param_2,local_e0,SUB81((String *)&local_c8,0),
                 (Object *)(ulong)param_5,pOVar3,pOVar4,(StringName *)pOVar4,(StringName *)&local_c0
                 ,(StringName *)&local_b8);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_e0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_f0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
      if ((((StringName::configured != '\0') &&
           ((local_c0 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
          ((local_b8 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
         (local_b0 != 0)) {
        StringName::unref();
      }
      if (((pOVar4 != (Object *)0x0) && (cVar2 = RefCounted::unreference(), cVar2 != '\0')) &&
         (cVar2 = predelete_handler(pOVar4), cVar2 != '\0')) {
        (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
        Memory::free_static(pOVar4,false);
      }
      if (local_f8 == (StringName *)0x0) goto LAB_00102233;
    }
    lVar6 = __dynamic_cast(local_f8,&Object::typeinfo,&SeparationRayShape3D::typeinfo,0);
    if (lVar6 != 0) {
      local_c8 = (Object *)0x0;
      pOVar4 = (Object *)
               __dynamic_cast(local_f8,&Object::typeinfo,&SeparationRayShape3D::typeinfo,0);
      if (pOVar4 == (Object *)0x0) {
LAB_00102299:
        pOVar4 = (Object *)0x0;
      }
      else {
        local_c8 = pOVar4;
        cVar2 = RefCounted::reference();
        if (cVar2 == '\0') {
          local_c8 = (Object *)0x0;
          goto LAB_00102299;
        }
      }
      if (!param_5) {
        pEVar7 = (EditorUndoRedoManager *)EditorUndoRedoManager::get_singleton();
        local_b8 = 0;
        String::parse_latin1((String *)&local_b8,"");
        local_c0 = 0;
        String::parse_latin1((String *)&local_c0,"Change Separation Ray Shape Length");
        TTR((String *)&local_b0,(String *)&local_c0);
        EditorUndoRedoManager::create_action(pEVar7,(String *)&local_b0,0,0,0);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
        fVar8 = (float)SeparationRayShape3D::get_length();
        StringName::StringName((StringName *)&local_b0,"set_length",false);
        EditorUndoRedoManager::add_do_method<float>(pEVar7,pOVar4,(StringName *)&local_b0,fVar8);
        if ((StringName::configured != '\0') && (local_b0 != 0)) {
          StringName::unref();
        }
        Variant::Variant((Variant *)local_98,param_4);
        StringName::StringName((StringName *)&local_b0,"set_length",false);
        Variant::Variant((Variant *)local_78,(Variant *)local_98);
        local_60 = 0;
        local_58 = (undefined1  [16])0x0;
        local_a8[0] = (Variant *)local_78;
        EditorUndoRedoManager::add_undo_methodp
                  ((Object *)pEVar7,(StringName *)pOVar4,(Variant **)&local_b0,(int)local_a8);
        if (Variant::needs_deinit[(int)local_60] != '\0') {
          Variant::_clear_internal();
        }
        if (Variant::needs_deinit[local_78[0]] != '\0') {
          Variant::_clear_internal();
        }
        if ((StringName::configured != '\0') && (local_b0 != 0)) {
          StringName::unref();
        }
        if (Variant::needs_deinit[(int)local_98[0]] == '\0') {
          EditorUndoRedoManager::commit_action(SUB81(pEVar7,0));
        }
        else {
          Variant::_clear_internal();
          EditorUndoRedoManager::commit_action(SUB81(pEVar7,0));
        }
        cVar2 = RefCounted::unreference();
        goto joined_r0x00102218;
      }
      fVar8 = Variant::operator_cast_to_float(param_4);
      SeparationRayShape3D::set_length(fVar8);
      Ref<SeparationRayShape3D>::unref((Ref<SeparationRayShape3D> *)&local_c8);
      goto LAB_00102220;
    }
  }
  else {
    cVar2 = RefCounted::reference();
    if (cVar2 == '\0') {
      pOVar4 = (Object *)0x0;
    }
    if (!param_5) {
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
      fVar8 = (float)SphereShape3D::get_radius();
      StringName::StringName((StringName *)&local_b0,"set_radius",false);
      Variant::Variant((Variant *)local_78,fVar8);
      local_60 = 0;
      local_58 = (undefined1  [16])0x0;
      local_98[0] = (Variant *)local_78;
      EditorUndoRedoManager::add_do_methodp
                (pOVar5,(StringName *)pOVar4,(Variant **)&local_b0,(int)(Variant *)local_98);
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
      EditorUndoRedoManager::add_undo_methodp
                (pOVar5,(StringName *)pOVar4,(Variant **)&local_b0,(int)local_a8);
      if (Variant::needs_deinit[(int)local_60] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[local_78[0]] != '\0') {
        Variant::_clear_internal();
      }
      if ((StringName::configured != '\0') && (local_b0 != 0)) {
        StringName::unref();
      }
      if (Variant::needs_deinit[(int)local_98[0]] == '\0') {
        EditorUndoRedoManager::commit_action(SUB81(pOVar5,0));
      }
      else {
        Variant::_clear_internal();
        EditorUndoRedoManager::commit_action(SUB81(pOVar5,0));
      }
      cVar2 = RefCounted::unreference();
      if ((cVar2 != '\0') && (cVar2 = predelete_handler(pOVar4), cVar2 != '\0')) {
        (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
        Memory::free_static(pOVar4,false);
      }
      if (local_f8 == (StringName *)0x0) goto LAB_00102233;
      goto LAB_00101996;
    }
    fVar8 = Variant::operator_cast_to_float(param_4);
    SphereShape3D::set_radius(fVar8);
    cVar2 = RefCounted::unreference();
joined_r0x00102218:
    if ((cVar2 != '\0') && (cVar2 = predelete_handler(pOVar4), cVar2 != '\0')) {
      (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
      Memory::free_static(pOVar4,false);
    }
LAB_00102220:
    if (local_f8 == (StringName *)0x0) goto LAB_00102233;
  }
  cVar2 = RefCounted::unreference();
  if ((cVar2 != '\0') && (cVar2 = predelete_handler((Object *)local_f8), cVar2 != '\0')) {
    (**(code **)(*(long *)local_f8 + 0x140))(local_f8);
    Memory::free_static(local_f8,false);
  }
LAB_00102233:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
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



/* CowData<Ref<StandardMaterial3D> >::_ref(CowData<Ref<StandardMaterial3D> > const&) [clone .part.0]
    */

void __thiscall
CowData<Ref<StandardMaterial3D>>::_ref(CowData<Ref<StandardMaterial3D>> *this,CowData *param_1)

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



/* CowData<Ref<StandardMaterial3D> >::_copy_on_write() [clone .isra.0] */

void __thiscall
CowData<Ref<StandardMaterial3D>>::_copy_on_write(CowData<Ref<StandardMaterial3D>> *this)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  char cVar4;
  undefined8 *puVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  
  if ((*(long *)this == 0) || (*(ulong *)(*(long *)this + -0x10) < 2)) {
    return;
  }
  if (*(long *)this == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  lVar1 = *(long *)(*(long *)this + -8);
  uVar7 = 0x10;
  if (lVar1 * 8 != 0) {
    uVar7 = lVar1 * 8 - 1;
    uVar7 = uVar7 | uVar7 >> 1;
    uVar7 = uVar7 | uVar7 >> 2;
    uVar7 = uVar7 | uVar7 >> 4;
    uVar7 = uVar7 | uVar7 >> 8;
    uVar7 = uVar7 | uVar7 >> 0x10;
    uVar7 = (uVar7 | uVar7 >> 0x20) + 0x11;
  }
  puVar5 = (undefined8 *)Memory::alloc_static(uVar7,false);
  if (puVar5 == (undefined8 *)0x0) {
    _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                     "Parameter \"mem_new\" is null.",0,0);
    return;
  }
  lVar8 = 0;
  *puVar5 = 1;
  puVar5[1] = lVar1;
  plVar6 = puVar5 + 2;
  if (lVar1 != 0) {
    do {
      lVar2 = *(long *)this;
      *plVar6 = 0;
      lVar2 = *(long *)(lVar2 + lVar8 * 8);
      if (lVar2 != 0) {
        *plVar6 = lVar2;
        cVar4 = RefCounted::reference();
        if (cVar4 == '\0') {
          *plVar6 = 0;
        }
      }
      lVar8 = lVar8 + 1;
      plVar6 = plVar6 + 1;
    } while (lVar1 != lVar8);
  }
  _unref(this);
  *(undefined8 **)this = puVar5 + 2;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CollisionShape3DGizmoPlugin::create_collision_material(String const&, float) */

void __thiscall
CollisionShape3DGizmoPlugin::create_collision_material
          (CollisionShape3DGizmoPlugin *this,String *param_1,float param_2)

{
  undefined8 *puVar1;
  Object *pOVar2;
  undefined8 uVar3;
  char cVar4;
  int iVar5;
  BaseMaterial3D *this_00;
  long lVar6;
  long lVar7;
  int iVar8;
  Color *pCVar9;
  long in_FS_OFFSET;
  float fVar10;
  long local_60;
  undefined8 local_58;
  undefined8 local_50;
  long local_40;
  
  uVar3 = _LC83;
  iVar8 = 0;
  lVar7 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_60 = 0;
  do {
    this_00 = (BaseMaterial3D *)operator_new(0x558,"");
    BaseMaterial3D::BaseMaterial3D(this_00,false);
    *(undefined ***)this_00 = &PTR__initialize_classv_0010b158;
    postinitialize_handler((Object *)this_00);
    cVar4 = RefCounted::init_ref();
    if (cVar4 == '\0') {
      this_00 = (BaseMaterial3D *)0x0;
    }
    local_58 = uVar3;
    fVar10 = param_2;
    if (iVar8 < 2) {
      fVar10 = param_2 * __LC62;
    }
    local_50 = CONCAT44(fVar10,0x3f800000);
    BaseMaterial3D::set_albedo((Color *)this_00);
    BaseMaterial3D::set_shading_mode(this_00,0);
    BaseMaterial3D::set_transparency(this_00,1);
    Material::set_render_priority((int)this_00);
    BaseMaterial3D::set_cull_mode(this_00,0);
    BaseMaterial3D::set_flag(this_00,0x15,1);
    BaseMaterial3D::set_flag(this_00,1,1);
    BaseMaterial3D::set_flag(this_00,2,1);
    if (this_00 == (BaseMaterial3D *)0x0) {
      pCVar9 = (Color *)0x0;
      if (lVar7 == 0) goto LAB_00102c70;
LAB_00102a7c:
      lVar7 = *(long *)(lVar7 + -8) + 1;
    }
    else {
      cVar4 = RefCounted::reference();
      pCVar9 = (Color *)0x0;
      if (cVar4 != '\0') {
        pCVar9 = (Color *)this_00;
      }
      if (lVar7 != 0) goto LAB_00102a7c;
LAB_00102c70:
      lVar7 = 1;
    }
    iVar5 = CowData<Ref<StandardMaterial3D>>::resize<false>
                      ((CowData<Ref<StandardMaterial3D>> *)&local_60,lVar7);
    if (iVar5 == 0) {
      if (local_60 == 0) {
        lVar6 = -1;
        lVar7 = 0;
LAB_00102cf2:
        _err_print_index_error
                  ("set","./core/templates/cowdata.h",0xcf,lVar6,lVar7,"p_index","size()","",false,
                   false);
        lVar7 = local_60;
        goto joined_r0x00102bc8;
      }
      lVar7 = *(long *)(local_60 + -8);
      lVar6 = lVar7 + -1;
      if (lVar6 < 0) goto LAB_00102cf2;
      CowData<Ref<StandardMaterial3D>>::_copy_on_write
                ((CowData<Ref<StandardMaterial3D>> *)&local_60);
      lVar7 = local_60;
      puVar1 = (undefined8 *)(local_60 + lVar6 * 8);
      pOVar2 = (Object *)*puVar1;
      if (pCVar9 == (Color *)pOVar2) goto joined_r0x00102bc8;
      *puVar1 = pCVar9;
      if (pCVar9 != (Color *)0x0) {
        cVar4 = RefCounted::reference();
        if (cVar4 == '\0') {
          *puVar1 = 0;
          if (pOVar2 != (Object *)0x0) {
            cVar4 = RefCounted::unreference();
            goto joined_r0x00102c9a;
          }
        }
        else if (pOVar2 != (Object *)0x0) {
          cVar4 = RefCounted::unreference();
joined_r0x00102c9a:
          if ((cVar4 != '\0') && (cVar4 = predelete_handler(pOVar2), cVar4 != '\0'))
          goto LAB_00102c39;
        }
        cVar4 = RefCounted::unreference();
        lVar7 = local_60;
        goto joined_r0x00102b16;
      }
      if (((pOVar2 != (Object *)0x0) && (cVar4 = RefCounted::unreference(), cVar4 != '\0')) &&
         (cVar4 = predelete_handler(pOVar2), cVar4 != '\0')) {
LAB_00102c39:
        (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
        Memory::free_static(pOVar2,false);
        lVar7 = local_60;
        goto joined_r0x00102bc8;
      }
    }
    else {
      _err_print_error("push_back","./core/templates/vector.h",0x142,
                       "Condition \"err\" is true. Returning: true",0,0);
      lVar7 = local_60;
joined_r0x00102bc8:
      local_60 = lVar7;
      if (pCVar9 != (Color *)0x0) {
        cVar4 = RefCounted::unreference();
        lVar7 = local_60;
joined_r0x00102b16:
        local_60 = lVar7;
        if ((cVar4 != '\0') &&
           (cVar4 = predelete_handler((Object *)pCVar9), lVar7 = local_60, cVar4 != '\0')) {
          (**(code **)(*(long *)pCVar9 + 0x140))(pCVar9);
          Memory::free_static(pCVar9,false);
        }
      }
    }
    if (((this_00 != (BaseMaterial3D *)0x0) && (cVar4 = RefCounted::unreference(), cVar4 != '\0'))
       && (cVar4 = predelete_handler((Object *)this_00), cVar4 != '\0')) {
      (**(code **)(*(long *)this_00 + 0x140))(this_00);
      Memory::free_static(this_00,false);
    }
    iVar8 = iVar8 + 1;
    if (iVar8 == 4) {
      lVar6 = HashMap<String,Vector<Ref<StandardMaterial3D>>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Vector<Ref<StandardMaterial3D>>>>>
              ::operator[]((HashMap<String,Vector<Ref<StandardMaterial3D>>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Vector<Ref<StandardMaterial3D>>>>>
                            *)(this + 0x270),param_1);
      if (*(long *)(lVar6 + 8) != lVar7) {
        CowData<Ref<StandardMaterial3D>>::_ref
                  ((CowData<Ref<StandardMaterial3D>> *)(lVar6 + 8),(CowData *)&local_60);
      }
      CowData<Ref<StandardMaterial3D>>::_unref((CowData<Ref<StandardMaterial3D>> *)&local_60);
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  } while( true );
}



/* CollisionShape3DGizmoPlugin::CollisionShape3DGizmoPlugin() */

void __thiscall
CollisionShape3DGizmoPlugin::CollisionShape3DGizmoPlugin(CollisionShape3DGizmoPlugin *this)

{
  char cVar1;
  RefCounted *this_00;
  long lVar2;
  RefCounted *pRVar3;
  Object *pOVar4;
  Object *pOVar5;
  long in_FS_OFFSET;
  byte bVar6;
  undefined1 auVar7 [16];
  undefined8 local_58;
  Object *local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  bVar6 = 0;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  EditorNode3DGizmoPlugin::EditorNode3DGizmoPlugin((EditorNode3DGizmoPlugin *)this);
  *(undefined8 *)(this + 0x450) = 0;
  *(undefined ***)this = &PTR__initialize_classv_0010b4b8;
  this_00 = (RefCounted *)operator_new(0x1c8,"");
  pRVar3 = this_00;
  for (lVar2 = 0x39; lVar2 != 0; lVar2 = lVar2 + -1) {
    *(undefined8 *)pRVar3 = 0;
    pRVar3 = pRVar3 + (ulong)bVar6 * -0x10 + 8;
  }
  RefCounted::RefCounted(this_00);
  *(undefined ***)this_00 = &PTR__initialize_classv_0010b358;
  *(undefined4 *)(this_00 + 0x180) = 0;
  *(undefined4 *)(this_00 + 0x1b8) = 0x3f800000;
  *(undefined8 *)(this_00 + 0x1bc) = 0;
  *(undefined4 *)(this_00 + 0x1c4) = 0;
  *(undefined1 (*) [16])(this_00 + 0x188) = (undefined1  [16])0x0;
  auVar7 = ZEXT416(_LC25);
  *(undefined1 (*) [16])(this_00 + 0x198) = auVar7;
  *(undefined1 (*) [16])(this_00 + 0x1a8) = auVar7;
  postinitialize_handler((Object *)this_00);
  cVar1 = RefCounted::init_ref();
  if (cVar1 == '\0') {
    pOVar5 = *(Object **)(this + 0x450);
    if (pOVar5 == (Object *)0x0) goto LAB_00102e38;
    *(undefined8 *)(this + 0x450) = 0;
    cVar1 = RefCounted::unreference();
    if (cVar1 == '\0') goto LAB_00102e38;
    this_00 = (RefCounted *)0x0;
    cVar1 = predelete_handler(pOVar5);
    if (cVar1 == '\0') goto LAB_00102e38;
LAB_001030a3:
    (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
    Memory::free_static(pOVar5,false);
    pOVar4 = (Object *)this_00;
    if (this_00 == (RefCounted *)0x0) goto LAB_00102e38;
  }
  else {
    pOVar5 = *(Object **)(this + 0x450);
    pOVar4 = pOVar5;
    if (this_00 != (RefCounted *)pOVar5) {
      *(RefCounted **)(this + 0x450) = this_00;
      cVar1 = RefCounted::reference();
      if (cVar1 == '\0') {
        *(undefined8 *)(this + 0x450) = 0;
      }
      pOVar4 = (Object *)this_00;
      if (((pOVar5 != (Object *)0x0) && (cVar1 = RefCounted::unreference(), cVar1 != '\0')) &&
         (cVar1 = predelete_handler(pOVar5), cVar1 != '\0')) goto LAB_001030a3;
    }
  }
  cVar1 = RefCounted::unreference();
  if ((cVar1 != '\0') && (cVar1 = predelete_handler(pOVar4), cVar1 != '\0')) {
    (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
    Memory::free_static(pOVar4,false);
  }
LAB_00102e38:
  local_50 = (Object *)0x0;
  local_40 = 0xe;
  local_48 = "shape_material";
  String::parse_latin1((StrRange *)&local_50);
  create_collision_material(this,(String *)&local_50,_LC65);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
  local_48 = "shape_material_arraymesh";
  local_50 = (Object *)0x0;
  local_40 = 0x18;
  String::parse_latin1((StrRange *)&local_50);
  create_collision_material(this,(String *)&local_50,_LC67);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
  local_48 = "shape_material_disabled";
  local_50 = (Object *)0x0;
  local_40 = 0x17;
  String::parse_latin1((StrRange *)&local_50);
  create_collision_material(this,(String *)&local_50,_LC67);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
  local_48 = "shape_material_arraymesh_disabled";
  local_50 = (Object *)0x0;
  local_40 = 0x21;
  String::parse_latin1((StrRange *)&local_50);
  create_collision_material(this,(String *)&local_50,_LC70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
  local_48 = "handles";
  local_50 = (Object *)0x0;
  local_58 = 0;
  local_40 = 7;
  String::parse_latin1((StrRange *)&local_58);
  EditorNode3DGizmoPlugin::create_handle_material((String *)this,SUB81(&local_58,0),(Ref *)0x0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  if (((local_50 != (Object *)0x0) &&
      (cVar1 = RefCounted::unreference(), pOVar5 = local_50, cVar1 != '\0')) &&
     (cVar1 = predelete_handler(local_50), cVar1 != '\0')) {
    (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
    Memory::free_static(pOVar5,false);
  }
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CollisionShape3DGizmoPlugin::redraw(EditorNode3DGizmo*) */

void __thiscall
CollisionShape3DGizmoPlugin::redraw(CollisionShape3DGizmoPlugin *this,EditorNode3DGizmo *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  code *pcVar5;
  EditorNode3DGizmo *pEVar6;
  char cVar7;
  int iVar8;
  Object *pOVar9;
  Object *pOVar10;
  long lVar11;
  float *pfVar12;
  ulong uVar13;
  bool bVar14;
  bool bVar15;
  char *pcVar16;
  Ref *pRVar17;
  long lVar18;
  ulong uVar19;
  ulong uVar20;
  uint uVar21;
  Vector3 *pVVar22;
  long lVar23;
  ulong uVar24;
  long in_FS_OFFSET;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar32;
  float fVar33;
  undefined8 uVar31;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar38;
  undefined8 uVar37;
  undefined8 uVar39;
  float fVar40;
  float fVar41;
  undefined1 auVar42 [12];
  char *pcVar43;
  float local_418;
  float fStack_414;
  float local_408;
  float local_400;
  float local_360;
  float local_35c [3];
  Ref *local_350;
  Ref *local_348;
  Ref *local_340;
  undefined8 local_338;
  Object *local_330;
  Object *local_328;
  long local_320;
  Object *local_318;
  long local_310;
  Object *local_308;
  long local_300;
  EditorNode3DGizmo *local_2f8;
  long local_2f0;
  undefined8 local_2e8;
  long local_2e0;
  undefined8 local_2d8;
  long local_2d0;
  undefined8 local_2c8;
  float local_2c0;
  undefined8 local_2b8;
  float local_2b0;
  undefined8 local_2a8;
  float local_2a0;
  undefined8 local_298;
  float local_290;
  undefined8 local_288;
  float local_280;
  undefined8 local_278;
  float local_270;
  undefined8 local_268;
  undefined4 local_260;
  undefined8 local_258;
  undefined4 local_250;
  undefined8 local_248;
  float local_240;
  undefined8 local_238;
  float local_230;
  undefined8 local_228;
  float local_220;
  undefined8 local_218;
  float local_210;
  undefined8 local_208;
  float local_200;
  undefined8 local_1f8;
  float local_1f0;
  undefined8 local_1e8;
  undefined4 local_1e0;
  undefined8 local_1d8;
  undefined4 local_1d0;
  undefined8 local_1c8;
  float local_1c0;
  undefined8 local_1b8;
  float local_1b0;
  undefined8 local_1a8;
  float local_1a0;
  undefined8 local_198;
  float local_190;
  undefined8 local_188;
  float local_180;
  undefined8 local_178;
  float local_170;
  undefined8 local_168;
  float local_160;
  undefined8 local_158;
  float local_150;
  undefined8 local_148;
  float local_140;
  undefined8 local_138;
  float local_130;
  undefined8 local_128;
  float local_120;
  undefined8 local_118;
  float local_110;
  undefined1 local_108 [8];
  undefined4 local_100;
  undefined4 local_fc;
  float fStack_f8;
  float local_f4;
  undefined4 local_f0;
  float fStack_ec;
  float local_e8;
  long local_e4;
  float local_dc;
  undefined1 local_d8 [8];
  undefined4 local_d0;
  undefined1 local_c8 [16];
  float local_b8;
  float fStack_b4;
  float afStack_b0 [7];
  undefined8 local_94;
  float local_8c;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  float local_48;
  float local_44;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(param_1 + 0x1f0) != 0) {
    __dynamic_cast(*(long *)(param_1 + 0x1f0),&Object::typeinfo,&CollisionShape3D::typeinfo,0);
  }
  (**(code **)(*(long *)param_1 + 0x160))(param_1);
  CollisionShape3D::get_shape();
  if (local_350 == (Ref *)0x0) goto LAB_00105078;
  local_2f8 = param_1;
  cVar7 = RefCounted::init_ref();
  if (cVar7 == '\0') {
    local_2f8 = (EditorNode3DGizmo *)0x0;
  }
  cVar7 = CollisionShape3D::is_disabled();
  pcVar16 = "shape_material_disabled";
  local_308 = (Object *)0x0;
  if (cVar7 == '\0') {
    pcVar16 = "shape_material";
  }
  String::parse_latin1((String *)&local_308,pcVar16);
  EditorNode3DGizmoPlugin::get_material((String *)&local_348,(Ref *)this);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_308);
  if (((local_2f8 != (EditorNode3DGizmo *)0x0) &&
      (cVar7 = RefCounted::unreference(), pEVar6 = local_2f8, cVar7 != '\0')) &&
     (cVar7 = predelete_handler((Object *)local_2f8), cVar7 != '\0')) {
    (**(code **)(*(long *)pEVar6 + 0x140))(pEVar6);
    Memory::free_static(pEVar6,false);
  }
  local_2f8 = param_1;
  cVar7 = RefCounted::init_ref();
  if (cVar7 == '\0') {
    local_2f8 = (EditorNode3DGizmo *)0x0;
  }
  cVar7 = CollisionShape3D::is_disabled();
  pcVar16 = "shape_material_arraymesh_disabled";
  local_308 = (Object *)0x0;
  if (cVar7 == '\0') {
    pcVar16 = "shape_material_arraymesh";
  }
  String::parse_latin1((String *)&local_308,pcVar16);
  EditorNode3DGizmoPlugin::get_material((String *)&local_340,(Ref *)this);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_308);
  if (((local_2f8 != (EditorNode3DGizmo *)0x0) &&
      (cVar7 = RefCounted::unreference(), pEVar6 = local_2f8, cVar7 != '\0')) &&
     (cVar7 = predelete_handler((Object *)local_2f8), cVar7 != '\0')) {
    (**(code **)(*(long *)pEVar6 + 0x140))(pEVar6);
    Memory::free_static(pEVar6,false);
  }
  local_308 = (Object *)0x0;
  local_318 = (Object *)0x0;
  String::parse_latin1((String *)&local_318,"handles");
  EditorNode3DGizmoPlugin::get_material((String *)&local_2f8,(Ref *)this);
  local_338 = 0;
  Ref<Material>::operator=((Ref<Material> *)&local_338,(Ref *)local_2f8);
  Ref<StandardMaterial3D>::unref((Ref<StandardMaterial3D> *)&local_2f8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_318);
  if (((local_308 != (Object *)0x0) &&
      (cVar7 = RefCounted::unreference(), pOVar9 = local_308, cVar7 != '\0')) &&
     (cVar7 = predelete_handler(local_308), cVar7 != '\0')) {
    (**(code **)(*(long *)pOVar9 + 0x140))(pOVar9);
    Memory::free_static(pOVar9,false);
  }
  cVar7 = CollisionShape3D::is_disabled();
  if (cVar7 == '\0') {
    local_c8 = CollisionShape3D::get_debug_color();
  }
  else {
    local_c8._8_8_ = _UNK_0010ba48;
    local_c8._0_8_ = _LC83;
  }
  cVar7 = CollisionShape3D::get_debug_fill_enabled();
  if (cVar7 != '\0') {
    (**(code **)(*(long *)local_350 + 0x1d8))(&local_328,local_350,local_c8);
    if (local_328 != (Object *)0x0) {
      iVar8 = (**(code **)(*(long *)local_328 + 0x1c8))();
      if (0 < iVar8) {
        local_2f8 = (EditorNode3DGizmo *)0x0;
        afStack_b0[6] = 1.0;
        local_94 = 0;
        local_8c = 0.0;
        local_308 = (Object *)0x0;
        local_b8 = _LC25;
        fStack_b4 = 0.0;
        afStack_b0[0] = 0.0;
        afStack_b0[1] = 0.0;
        afStack_b0[2] = _LC25;
        afStack_b0[3] = 0.0;
        afStack_b0[4] = 0.0;
        afStack_b0[5] = 0.0;
        Ref<Material>::operator=((Ref<Material> *)&local_308,local_340);
        local_318 = (Object *)0x0;
        if (local_328 != (Object *)0x0) {
          pOVar9 = (Object *)__dynamic_cast(local_328,&Object::typeinfo,&Mesh::typeinfo,0);
          if (pOVar9 != (Object *)0x0) {
            local_318 = pOVar9;
            cVar7 = RefCounted::reference();
            if (cVar7 == '\0') {
              local_318 = (Object *)0x0;
            }
          }
        }
        EditorNode3DGizmo::add_mesh
                  ((Ref *)param_1,(Ref *)&local_318,(Transform3D *)&local_308,(Ref *)&local_b8);
        if (local_318 != (Object *)0x0) {
          cVar7 = RefCounted::unreference();
          pOVar9 = local_318;
          if (cVar7 != '\0') {
            cVar7 = predelete_handler(local_318);
            if (cVar7 != '\0') {
              (**(code **)(*(long *)pOVar9 + 0x140))(pOVar9);
              Memory::free_static(pOVar9,false);
            }
          }
        }
        Ref<Material>::unref((Ref<Material> *)&local_308);
        if (local_2f8 != (EditorNode3DGizmo *)0x0) {
          cVar7 = RefCounted::unreference();
          pEVar6 = local_2f8;
          if (cVar7 != '\0') {
            cVar7 = predelete_handler((Object *)local_2f8);
            if (cVar7 != '\0') {
              (**(code **)(*(long *)pEVar6 + 0x140))(pEVar6);
              Memory::free_static(pEVar6,false);
            }
          }
        }
      }
      if (local_328 != (Object *)0x0) {
        cVar7 = RefCounted::unreference();
        pOVar9 = local_328;
        if (cVar7 != '\0') {
          cVar7 = predelete_handler(local_328);
          if (cVar7 != '\0') {
            (**(code **)(*(long *)pOVar9 + 0x140))(pOVar9);
            Memory::free_static(pOVar9,false);
          }
        }
      }
    }
  }
  pRVar17 = local_350;
  if (local_350 != (Ref *)0x0) {
    pOVar9 = (Object *)__dynamic_cast(local_350,&Object::typeinfo,&SphereShape3D::typeinfo);
    bVar14 = SUB81((String *)&local_2f8,0);
    if (pOVar9 != (Object *)0x0) {
      cVar7 = RefCounted::reference();
      pOVar10 = (Object *)0x0;
      if (cVar7 != '\0') {
        pOVar10 = pOVar9;
      }
      iVar8 = 0;
      fVar25 = (float)SphereShape3D::get_radius();
      local_320 = 0;
      fVar28 = (float)_LC74;
      fVar32 = _LC74._4_4_;
      fVar34 = _LC79;
      fVar38 = __LC80;
      while( true ) {
        iVar8 = iVar8 + 1;
        fStack_b4 = 0.0;
        fVar34 = fVar34 * fVar25;
        fVar38 = fVar38 * fVar25;
        fVar28 = fVar28 * fVar25;
        fVar32 = fVar32 * fVar25;
        local_b8 = fVar28;
        afStack_b0[0] = fVar32;
        Vector<Vector3>::push_back(fVar28,fVar32,(Ref *)&local_328);
        fStack_b4 = 0.0;
        local_b8 = fVar34;
        afStack_b0[0] = fVar38;
        Vector<Vector3>::push_back(fVar34,fVar38,(Ref *)&local_328);
        local_b8 = 0.0;
        fStack_b4 = fVar28;
        afStack_b0[0] = fVar32;
        Vector<Vector3>::push_back((ulong)(uint)fVar28 << 0x20,fVar32,(Ref *)&local_328);
        local_b8 = 0.0;
        fStack_b4 = fVar34;
        afStack_b0[0] = fVar38;
        Vector<Vector3>::push_back((ulong)(uint)fVar34 << 0x20,fVar38,(Ref *)&local_328);
        afStack_b0[0] = 0.0;
        local_b8 = fVar28;
        fStack_b4 = fVar32;
        Vector<Vector3>::push_back(CONCAT44(fVar32,fVar28),0,(Ref *)&local_328);
        afStack_b0[0] = 0.0;
        local_b8 = fVar34;
        fStack_b4 = fVar38;
        Vector<Vector3>::push_back(CONCAT44(fVar38,fVar34),0,(Ref *)&local_328);
        if (iVar8 == 0x169) break;
        sincosf(_LC84 * (float)iVar8,local_35c,&local_360);
        fVar28 = local_35c[0];
        fVar32 = local_360;
        sincosf(_LC84 * ((float)iVar8 + _LC25),local_35c,&local_360);
        fVar34 = local_35c[0];
        fVar38 = local_360;
      }
      iVar8 = 1;
      local_310 = 0;
      fVar32 = (float)_LC74;
      fVar28 = _LC74._4_4_;
      local_418 = _LC81;
      fStack_414 = _LC82;
      while( true ) {
        iVar8 = iVar8 + 1;
        fStack_b4 = 0.0;
        fVar32 = fVar32 * fVar25;
        fVar28 = fVar28 * fVar25;
        fVar34 = fVar25 * local_418;
        fVar38 = fVar25 * fStack_414;
        local_b8 = fVar32;
        afStack_b0[0] = fVar28;
        Vector<Vector3>::push_back(fVar32,fVar28,(String *)&local_318);
        fStack_b4 = 0.0;
        local_b8 = fVar34;
        afStack_b0[0] = fVar38;
        Vector<Vector3>::push_back(fVar34,fVar38,(String *)&local_318);
        local_b8 = 0.0;
        fStack_b4 = fVar32;
        afStack_b0[0] = fVar28;
        Vector<Vector3>::push_back((ulong)(uint)fVar32 << 0x20,fVar28,(String *)&local_318);
        local_b8 = 0.0;
        fStack_b4 = fVar34;
        afStack_b0[0] = fVar38;
        Vector<Vector3>::push_back((ulong)(uint)fVar34 << 0x20,fVar38,(String *)&local_318);
        afStack_b0[0] = 0.0;
        local_b8 = fVar32;
        fStack_b4 = fVar28;
        Vector<Vector3>::push_back(CONCAT44(fVar28,fVar32),0,(String *)&local_318);
        afStack_b0[0] = 0.0;
        local_b8 = fVar34;
        fStack_b4 = fVar38;
        Vector<Vector3>::push_back(CONCAT44(fVar38,fVar34),0,(String *)&local_318);
        if (iVar8 == 0x41) break;
        sincosf((float)((double)iVar8 * __LC85),local_35c,&local_360);
        fVar32 = local_418;
        fVar28 = fStack_414;
        local_418 = local_35c[0];
        fStack_414 = local_360;
      }
      local_2f8 = (EditorNode3DGizmo *)0x0;
      Ref<Material>::operator=((Ref<Material> *)&local_2f8,local_348);
      EditorNode3DGizmo::add_lines((Vector *)param_1,(Ref *)&local_328,bVar14,(Color *)0x0);
      Ref<Material>::unref((Ref<Material> *)&local_2f8);
      EditorNode3DGizmo::add_collision_segments((Vector *)param_1);
      fStack_b4 = 0.0;
      afStack_b0[0] = 0.0;
      local_300 = 0;
      local_b8 = fVar25;
      Vector<Vector3>::push_back(fVar25,0,(String *)&local_308);
      local_2f0 = 0;
      EditorNode3DGizmo::add_handles
                ((Vector *)param_1,(Ref *)&local_308,(Vector *)&local_338,bVar14,false);
      CowData<int>::_unref((CowData<int> *)&local_2f0);
      CowData<Vector3>::_unref((CowData<Vector3> *)&local_300);
      CowData<Vector3>::_unref((CowData<Vector3> *)&local_310);
      CowData<Vector3>::_unref((CowData<Vector3> *)&local_320);
      cVar7 = RefCounted::unreference();
      if (cVar7 != '\0') {
        cVar7 = predelete_handler(pOVar10);
        if (cVar7 != '\0') {
          (**(code **)(*(long *)pOVar10 + 0x140))(pOVar10);
          Memory::free_static(pOVar10,false);
        }
      }
      pRVar17 = local_350;
      if (local_350 == (Ref *)0x0) goto LAB_00105051;
    }
    pOVar9 = (Object *)__dynamic_cast(pRVar17,&Object::typeinfo,&BoxShape3D::typeinfo);
    if (pOVar9 != (Object *)0x0) {
      cVar7 = RefCounted::reference();
      local_310 = 0;
      local_b8 = 0.0;
      fStack_b4 = 0.0;
      afStack_b0[0] = 0.0;
      pOVar10 = (Object *)0x0;
      if (cVar7 != '\0') {
        pOVar10 = pOVar9;
      }
      afStack_b0[1] = 0.0;
      afStack_b0[2] = 0.0;
      afStack_b0[3] = 0.0;
      _local_d8 = BoxShape3D::get_size();
      afStack_b0[0] = _LC95 * SUB124(_local_d8,8);
      local_b8 = SUB124(_local_d8,0) * _LC95;
      fStack_b4 = SUB124(_local_d8,4) * _UNK_0010ba24;
      auVar42 = BoxShape3D::get_size();
      afStack_b0[3] = auVar42._8_4_;
      afStack_b0[1] = auVar42._0_4_;
      afStack_b0[2] = auVar42._4_4_;
      pVVar22 = (Vector3 *)0x0;
      do {
        local_e4 = 0;
        uVar21 = (int)pVVar22 + 1;
        local_dc = 0.0;
        local_d8 = (undefined1  [8])0x0;
        local_d0 = 0.0;
        AABB::get_edge((int)&local_b8,pVVar22,(Vector3 *)&local_e4);
        Vector<Vector3>::push_back(local_e4,local_dc,(String *)&local_318);
        Vector<Vector3>::push_back(local_d8,local_d0,(String *)&local_318);
        pVVar22 = (Vector3 *)(ulong)uVar21;
      } while (uVar21 != 0xc);
      _local_d8 = BoxShape3D::get_size();
      Gizmo3DHelper::box_get_handles((String *)&local_308);
      local_2f8 = (EditorNode3DGizmo *)0x0;
      Ref<Material>::operator=((Ref<Material> *)&local_2f8,local_348);
      EditorNode3DGizmo::add_lines((Vector *)param_1,(Ref *)&local_318,bVar14,(Color *)0x0);
      Ref<Material>::unref((Ref<Material> *)&local_2f8);
      EditorNode3DGizmo::add_collision_segments((Vector *)param_1);
      local_2f0 = 0;
      EditorNode3DGizmo::add_handles
                ((Vector *)param_1,(Ref *)&local_308,(Vector *)&local_338,bVar14,false);
      CowData<int>::_unref((CowData<int> *)&local_2f0);
      CowData<Vector3>::_unref((CowData<Vector3> *)&local_300);
      CowData<Vector3>::_unref((CowData<Vector3> *)&local_310);
      cVar7 = RefCounted::unreference();
      if (cVar7 != '\0') {
        cVar7 = predelete_handler(pOVar10);
        if (cVar7 != '\0') {
          (**(code **)(*(long *)pOVar10 + 0x140))(pOVar10);
          Memory::free_static(pOVar10,false);
        }
      }
      pRVar17 = local_350;
      if (local_350 == (Ref *)0x0) goto LAB_00105051;
    }
    lVar11 = __dynamic_cast(pRVar17,&Object::typeinfo,&CapsuleShape3D::typeinfo);
    if (lVar11 != 0) {
      iVar8 = 0;
      local_330 = (Object *)0x0;
      Ref<CapsuleShape3D>::operator=((Ref<CapsuleShape3D> *)&local_330,pRVar17);
      pOVar9 = local_330;
      fVar26 = (float)CapsuleShape3D::get_radius();
      fVar32 = (float)CapsuleShape3D::get_height();
      fVar28 = _LC25;
      local_320 = 0;
      fVar34 = 0.0;
      fVar40 = (float)((double)fVar32 * __LC89 - (double)fVar26);
      fVar27 = fVar40 + 0.0;
      fVar41 = (float)((uint)fVar40 ^ (uint)_LC77);
      fVar32 = _LC25;
      fVar38 = (float)_LC76;
      fVar25 = _LC76._4_4_;
      while( true ) {
        fVar34 = fVar34 * fVar26;
        fVar38 = fVar38 * fVar26;
        fVar25 = fVar25 * fVar26;
        fVar32 = fVar32 * fVar26;
        fVar35 = fVar32 + 0.0;
        uVar31 = CONCAT44(fVar27,fVar34 + 0.0);
        local_2c8 = uVar31;
        local_2c0 = fVar35;
        Vector<Vector3>::push_back(uVar31,fVar35,(Ref *)&local_328);
        local_2b8 = CONCAT44(fVar27,fVar25 + 0.0);
        local_2b0 = fVar38 + 0.0;
        Vector<Vector3>::push_back(local_2b8,local_2b0,(Ref *)&local_328);
        fVar36 = 0.0 - fVar40;
        uVar37 = CONCAT44(fVar36,fVar34);
        local_2a8 = uVar37;
        local_2a0 = fVar32;
        Vector<Vector3>::push_back(uVar37,fVar32,(Ref *)&local_328);
        local_298 = CONCAT44(fVar36,fVar25);
        local_290 = fVar38;
        Vector<Vector3>::push_back(CONCAT44(fVar36,fVar25),fVar38,(Ref *)&local_328);
        if (((uint)(iVar8 * -0x5b05b05b) >> 1 | (uint)((iVar8 * -0x5b05b05b & 1U) != 0) << 0x1f) <
            0x2d82d83) {
          local_288 = uVar31;
          local_280 = fVar35;
          Vector<Vector3>::push_back(uVar31,fVar35,(Ref *)&local_328);
          local_278 = uVar37;
          local_270 = fVar32;
          Vector<Vector3>::push_back(uVar37,fVar32,(Ref *)&local_328);
        }
        fVar33 = fVar41;
        fVar29 = _LC77;
        if (iVar8 < 0xb4) {
          fVar33 = fVar40;
          fVar32 = fVar35;
          fVar29 = 0.0;
        }
        fStack_f8 = fVar33 + fVar34;
        iVar8 = iVar8 + 1;
        local_fc = 0;
        fVar29 = fVar29 + fVar38;
        fVar33 = fVar33 + fVar25;
        uVar31 = CONCAT44(fStack_f8,fVar32);
        local_f4 = fVar32;
        Vector<Vector3>::push_back((ulong)(uint)fStack_f8 << 0x20,fVar32,(Ref *)&local_328);
        local_f0 = 0;
        fStack_ec = fVar33;
        local_e8 = fVar29;
        Vector<Vector3>::push_back((ulong)(uint)fVar33 << 0x20,fVar29,(Ref *)&local_328);
        local_260 = 0;
        local_268 = uVar31;
        Vector<Vector3>::push_back(uVar31,0,(Ref *)&local_328);
        local_250 = 0;
        local_258 = CONCAT44(fVar33,fVar29);
        Vector<Vector3>::push_back(CONCAT44(fVar33,fVar29),0,(Ref *)&local_328);
        if (iVar8 == 0x168) break;
        sincosf(_LC84 * (float)iVar8,local_35c,&local_360);
        fVar34 = local_35c[0];
        fVar32 = local_360;
        sincosf(_LC84 * ((float)iVar8 + fVar28),local_35c,&local_360);
        fVar38 = local_360;
        fVar25 = local_35c[0];
      }
      local_2f8 = (EditorNode3DGizmo *)0x0;
      Ref<Material>::operator=((Ref<Material> *)&local_2f8,local_348);
      EditorNode3DGizmo::add_lines((Vector *)param_1,(Ref *)&local_328,bVar14,(Color *)0x0);
      Ref<Material>::unref((Ref<Material> *)&local_2f8);
      fVar25 = (float)((uint)fVar40 ^ (uint)_LC77);
      local_310 = 0;
      uVar21 = 0;
      fVar32 = (float)_LC78;
      fVar34 = _LC78._4_4_;
      fVar38 = 0.0;
      while( true ) {
        fVar41 = fVar34;
        fVar38 = fVar38 * fVar26;
        fVar34 = fVar26 * fVar32;
        fVar35 = fVar26 * fVar41;
        fVar28 = fVar28 * fVar26;
        uVar37 = CONCAT44(fVar36,fVar38);
        fVar33 = fVar28 + 0.0;
        uVar31 = CONCAT44(fVar27,fVar38 + 0.0);
        local_248 = uVar31;
        local_240 = fVar33;
        Vector<Vector3>::push_back(uVar31,fVar33,(String *)&local_318);
        local_238 = CONCAT44(fVar27,fVar35 + 0.0);
        local_230 = fVar34 + 0.0;
        Vector<Vector3>::push_back(local_238,local_230,(String *)&local_318);
        local_228 = uVar37;
        local_220 = fVar28;
        Vector<Vector3>::push_back(uVar37,fVar28,(String *)&local_318);
        local_218 = CONCAT44(fVar36,fVar35);
        local_210 = fVar34;
        Vector<Vector3>::push_back(CONCAT44(fVar36,fVar35),fVar34,(String *)&local_318);
        if ((uVar21 & 0xf) == 0) {
          local_208 = uVar31;
          local_200 = fVar33;
          Vector<Vector3>::push_back(uVar31,fVar33,(String *)&local_318);
          local_1f8 = uVar37;
          local_1f0 = fVar28;
          Vector<Vector3>::push_back(uVar37,fVar28,(String *)&local_318);
        }
        fVar29 = fVar25;
        fVar30 = _LC77;
        if (uVar21 < 0x20) {
          fVar29 = fVar40;
          fVar28 = fVar33;
          fVar30 = 0.0;
        }
        fVar30 = fVar30 + fVar34;
        uVar31 = CONCAT44(fVar29 + fVar35,fVar30);
        local_e4 = (ulong)(uint)(fVar29 + fVar38) << 0x20;
        uVar37 = CONCAT44(fVar29 + fVar38,fVar28);
        local_dc = fVar28;
        Vector<Vector3>::push_back(local_e4,fVar28,(String *)&local_318);
        local_d8 = (undefined1  [8])((ulong)(uint)(fVar29 + fVar35) << 0x20);
        local_d0 = fVar30;
        Vector<Vector3>::push_back(local_d8,fVar30,(String *)&local_318);
        local_1e0 = 0;
        local_1e8 = uVar37;
        Vector<Vector3>::push_back(uVar37,0,(String *)&local_318);
        local_1d0 = 0;
        local_1d8 = uVar31;
        Vector<Vector3>::push_back(uVar31,0,(String *)&local_318);
        if (uVar21 == 0x3f) break;
        sincosf((float)((double)(int)(uVar21 + 2) * __LC85),local_35c,&local_360);
        uVar21 = uVar21 + 1;
        fVar28 = fVar32;
        fVar32 = local_360;
        fVar34 = local_35c[0];
        fVar38 = fVar41;
      }
      EditorNode3DGizmo::add_collision_segments((Vector *)param_1);
      local_b8 = (float)CapsuleShape3D::get_radius();
      afStack_b0[2] = (float)CapsuleShape3D::get_height();
      afStack_b0[2] = afStack_b0[2] * _LC87;
      fStack_b4 = 0.0;
      afStack_b0[0] = 0.0;
      afStack_b0[1] = 0.0;
      afStack_b0[3] = 0.0;
      local_300 = 0;
      iVar8 = CowData<Vector3>::resize<false>((CowData<Vector3> *)&local_300,2);
      if (iVar8 == 0) {
        lVar11 = 0;
        lVar23 = 0;
        do {
          if (local_300 == 0) {
            lVar18 = 0;
LAB_00105884:
            _err_print_index_error
                      ("set","./core/templates/cowdata.h",0xcf,lVar23,lVar18,"p_index","size()","",
                       false,false);
          }
          else {
            lVar18 = *(long *)(local_300 + -8);
            if (lVar18 <= lVar23) goto LAB_00105884;
            CowData<Vector3>::_copy_on_write((CowData<Vector3> *)&local_300);
            *(undefined8 *)(local_300 + lVar11) = *(undefined8 *)((long)&local_b8 + lVar11);
            *(undefined4 *)(local_300 + 8 + lVar11) = *(undefined4 *)((long)afStack_b0 + lVar11);
          }
          lVar11 = lVar11 + 0xc;
          if (lVar23 != 0) break;
          lVar23 = 1;
        } while( true );
      }
      local_2f0 = 0;
      EditorNode3DGizmo::add_handles
                ((Vector *)param_1,(Ref *)&local_308,(Vector *)&local_338,bVar14,false);
      CowData<int>::_unref((CowData<int> *)&local_2f0);
      CowData<Vector3>::_unref((CowData<Vector3> *)&local_300);
      CowData<Vector3>::_unref((CowData<Vector3> *)&local_310);
      CowData<Vector3>::_unref((CowData<Vector3> *)&local_320);
      cVar7 = RefCounted::unreference();
      if (cVar7 != '\0') {
        cVar7 = predelete_handler(pOVar9);
        if (cVar7 != '\0') {
          (**(code **)(*(long *)pOVar9 + 0x140))(pOVar9);
          Memory::free_static(pOVar9,false);
        }
      }
      pRVar17 = local_350;
      if (local_350 == (Ref *)0x0) goto LAB_00105051;
    }
    lVar11 = __dynamic_cast(pRVar17,&Object::typeinfo,&CylinderShape3D::typeinfo);
    if (lVar11 != 0) {
      iVar8 = 0;
      local_330 = (Object *)0x0;
      Ref<CylinderShape3D>::operator=((Ref<CylinderShape3D> *)&local_330,pRVar17);
      pOVar9 = local_330;
      fVar26 = (float)CylinderShape3D::get_radius();
      fVar27 = (float)CylinderShape3D::get_height();
      fVar32 = _LC25;
      fVar25 = 0.0;
      local_320 = 0;
      fVar27 = _LC87 * fVar27;
      fVar40 = fVar27 + 0.0;
      fVar28 = _LC79;
      fVar34 = __LC80;
      fVar38 = _LC25;
      while( true ) {
        fVar38 = fVar38 * fVar26;
        fVar34 = fVar34 * fVar26;
        fVar35 = fVar38 + 0.0;
        uVar39 = CONCAT44(fVar40,fVar25 * fVar26 + 0.0);
        local_1c8 = uVar39;
        local_1c0 = fVar35;
        Vector<Vector3>::push_back(uVar39,fVar35,(Ref *)&local_328);
        local_1b8 = CONCAT44(fVar40,fVar28 * fVar26 + 0.0);
        local_1b0 = fVar34 + 0.0;
        Vector<Vector3>::push_back(local_1b8,local_1b0,(Ref *)&local_328);
        fVar41 = 0.0 - fVar27;
        uVar31 = CONCAT44(fVar41,fVar25 * fVar26);
        uVar37 = CONCAT44(fVar41,fVar28 * fVar26);
        local_1a8 = uVar31;
        local_1a0 = fVar38;
        Vector<Vector3>::push_back(uVar31,fVar38,(Ref *)&local_328);
        local_198 = uVar37;
        local_190 = fVar34;
        Vector<Vector3>::push_back(uVar37,fVar34,(Ref *)&local_328);
        if (((uint)(iVar8 * -0x5b05b05b) >> 1 | (uint)((iVar8 * -0x5b05b05b & 1U) != 0) << 0x1f) <
            0x2d82d83) {
          local_188 = uVar39;
          local_180 = fVar35;
          Vector<Vector3>::push_back(uVar39,fVar35,(Ref *)&local_328);
          local_178 = uVar31;
          local_170 = fVar38;
          Vector<Vector3>::push_back(uVar31,fVar38,(Ref *)&local_328);
        }
        if (iVar8 == 0x167) break;
        iVar8 = iVar8 + 1;
        sincosf(_LC84 * (float)iVar8,local_35c,&local_360);
        fVar25 = local_35c[0];
        fVar38 = local_360;
        sincosf(_LC84 * ((float)iVar8 + fVar32),local_35c,&local_360);
        fVar28 = local_35c[0];
        fVar34 = local_360;
      }
      local_2f8 = (EditorNode3DGizmo *)0x0;
      Ref<Material>::operator=((Ref<Material> *)&local_2f8,local_348);
      EditorNode3DGizmo::add_lines((Vector *)param_1,(Ref *)&local_328,bVar14,(Color *)0x0);
      Ref<Material>::unref((Ref<Material> *)&local_2f8);
      local_310 = 0;
      local_400 = _LC81;
      local_408 = _LC82;
      fVar28 = 0.0;
      uVar21 = 0;
      while( true ) {
        fVar38 = local_400;
        fVar34 = local_408;
        fVar32 = fVar32 * fVar26;
        uVar39 = CONCAT44(fVar41,fVar28 * fVar26);
        uVar37 = CONCAT44(fVar41,local_400 * fVar26);
        local_408 = local_408 * fVar26;
        fVar25 = fVar32 + 0.0;
        uVar31 = CONCAT44(fVar40,fVar28 * fVar26 + 0.0);
        local_168 = uVar31;
        local_160 = fVar25;
        Vector<Vector3>::push_back(uVar31,fVar25,(String *)&local_318);
        local_150 = local_408 + 0.0;
        local_158 = CONCAT44(fVar40,local_400 * fVar26 + 0.0);
        Vector<Vector3>::push_back(local_158,local_150,(String *)&local_318);
        local_148 = uVar39;
        local_140 = fVar32;
        Vector<Vector3>::push_back(uVar39,fVar32,(String *)&local_318);
        local_138 = uVar37;
        local_130 = local_408;
        Vector<Vector3>::push_back(uVar37,local_408,(String *)&local_318);
        if ((uVar21 & 0xf) == 0) {
          local_128 = uVar31;
          local_120 = fVar25;
          Vector<Vector3>::push_back(uVar31,fVar25,(String *)&local_318);
          local_118 = uVar39;
          local_110 = fVar32;
          Vector<Vector3>::push_back(uVar39,fVar32,(String *)&local_318);
        }
        if (uVar21 + 1 == 0x40) break;
        sincosf((float)((double)(int)(uVar21 + 2) * __LC85),local_35c,&local_360);
        local_400 = local_35c[0];
        local_408 = local_360;
        fVar32 = fVar34;
        fVar28 = fVar38;
        uVar21 = uVar21 + 1;
      }
      EditorNode3DGizmo::add_collision_segments((Vector *)param_1);
      fVar32 = (float)CylinderShape3D::get_radius();
      fVar28 = (float)CylinderShape3D::get_height();
      Gizmo3DHelper::cylinder_get_handles(fVar28,fVar32);
      local_2f0 = 0;
      EditorNode3DGizmo::add_handles
                ((Vector *)param_1,(Ref *)&local_308,(Vector *)&local_338,bVar14,false);
      CowData<int>::_unref((CowData<int> *)&local_2f0);
      CowData<Vector3>::_unref((CowData<Vector3> *)&local_300);
      CowData<Vector3>::_unref((CowData<Vector3> *)&local_310);
      CowData<Vector3>::_unref((CowData<Vector3> *)&local_320);
      cVar7 = RefCounted::unreference();
      if (cVar7 != '\0') {
        cVar7 = predelete_handler(pOVar9);
        if (cVar7 != '\0') {
          (**(code **)(*(long *)pOVar9 + 0x140))(pOVar9);
          Memory::free_static(pOVar9,false);
        }
      }
      pRVar17 = local_350;
      if (local_350 == (Ref *)0x0) goto LAB_00105051;
    }
    pOVar9 = (Object *)__dynamic_cast(pRVar17,&Object::typeinfo,&WorldBoundaryShape3D::typeinfo);
    bVar15 = SUB81((String *)&local_308,0);
    if (pOVar9 != (Object *)0x0) {
      cVar7 = RefCounted::reference();
      if (cVar7 == '\0') {
        pOVar9 = (Object *)0x0;
      }
      pfVar12 = (float *)WorldBoundaryShape3D::get_plane();
      _local_108 = Plane::get_any_perpendicular_normal();
      fVar25 = SUB124(_local_108,8);
      fVar32 = *pfVar12;
      fVar28 = pfVar12[1];
      fVar34 = pfVar12[2];
      fVar40 = (float)local_108._4_4_ * fVar32 - (float)local_108._0_4_ * fVar28;
      fVar27 = (float)local_108._0_4_ * fVar34 - fVar25 * fVar32;
      fVar26 = fVar25 * fVar28 - (float)local_108._4_4_ * fVar34;
      fVar38 = fVar26 * fVar26 + fVar27 * fVar27 + fVar40 * fVar40;
      if (fVar38 == 0.0) {
        fVar38 = 0.0;
        fVar27 = 0.0;
        fVar40 = 0.0;
      }
      else {
        fVar38 = SQRT(fVar38);
        fVar40 = (fVar40 / fVar38) * _LC90;
        fVar27 = (fVar27 / fVar38) * _LC90;
        fVar38 = (fVar26 / fVar38) * _LC90;
      }
      fVar26 = pfVar12[3];
      local_2f0 = 0;
      fVar41 = fVar26 * fVar34;
      local_48 = fVar26 * fVar28;
      fVar26 = fVar26 * fVar32;
      afStack_b0[0] = fVar41 + fVar25 * _LC90;
      afStack_b0[2] = local_48 + (float)local_108._4_4_ * _LC90;
      local_b8 = fVar26 + (float)local_108._0_4_ * _LC90;
      afStack_b0[3] = afStack_b0[0] - fVar40;
      afStack_b0[0] = afStack_b0[0] + fVar40;
      local_8c = fVar41 - fVar25 * _LC90;
      fStack_b4 = afStack_b0[2] + fVar27;
      afStack_b0[2] = afStack_b0[2] - fVar27;
      local_84 = local_48 - (float)local_108._4_4_ * _LC90;
      local_88 = fVar26 - (float)local_108._0_4_ * _LC90;
      local_74 = local_8c + fVar40;
      afStack_b0[1] = local_b8 - fVar38;
      local_b8 = local_b8 + fVar38;
      local_8c = local_8c - fVar40;
      local_78 = local_84 + fVar27;
      local_84 = local_84 - fVar27;
      local_7c = local_88 + fVar38;
      local_88 = local_88 - fVar38;
      local_94 = CONCAT44(local_84,local_88);
      local_58 = CONCAT44(local_48,fVar26);
      local_48 = fVar28 * _LC91 + local_48;
      local_44 = fVar34 * _LC91 + fVar41;
      uStack_50 = CONCAT44(fVar32 * _LC91 + fVar26,fVar41);
      afStack_b0[4] = afStack_b0[1];
      afStack_b0[5] = afStack_b0[2];
      afStack_b0[6] = afStack_b0[3];
      local_80 = local_8c;
      local_70 = local_7c;
      local_6c = local_78;
      local_68 = local_74;
      local_64 = local_b8;
      local_60 = fStack_b4;
      local_5c = afStack_b0[0];
      iVar8 = CowData<Vector3>::resize<false>((CowData<Vector3> *)&local_2f0,10);
      if (iVar8 == 0) {
        lVar11 = 0;
        lVar23 = 0;
        do {
          if (local_2f0 == 0) {
            lVar18 = 0;
LAB_001058c6:
            _err_print_index_error
                      ("set","./core/templates/cowdata.h",0xcf,lVar23,lVar18,"p_index","size()","",
                       false,false);
          }
          else {
            lVar18 = *(long *)(local_2f0 + -8);
            if (lVar18 <= lVar23) goto LAB_001058c6;
            CowData<Vector3>::_copy_on_write((CowData<Vector3> *)&local_2f0);
            *(undefined8 *)(local_2f0 + lVar11) = *(undefined8 *)((long)&local_b8 + lVar11);
            *(undefined4 *)(local_2f0 + 8 + lVar11) = *(undefined4 *)((long)afStack_b0 + lVar11);
          }
          lVar11 = lVar11 + 0xc;
          lVar23 = lVar23 + 1;
        } while (lVar11 != 0x78);
      }
      local_308 = (Object *)0x0;
      Ref<Material>::operator=((Ref<Material> *)&local_308,local_348);
      EditorNode3DGizmo::add_lines((Vector *)param_1,(Ref *)&local_2f8,bVar15,(Color *)0x0);
      Ref<Material>::unref((Ref<Material> *)&local_308);
      EditorNode3DGizmo::add_collision_segments((Vector *)param_1);
      CowData<Vector3>::_unref((CowData<Vector3> *)&local_2f0);
      cVar7 = RefCounted::unreference();
      if (cVar7 != '\0') {
        cVar7 = predelete_handler(pOVar9);
        if (cVar7 != '\0') {
          (**(code **)(*(long *)pOVar9 + 0x140))(pOVar9);
          Memory::free_static(pOVar9,false);
        }
      }
      pRVar17 = local_350;
      if (local_350 == (Ref *)0x0) goto LAB_00105051;
    }
    lVar11 = __dynamic_cast(pRVar17,&Object::typeinfo,&ConvexPolygonShape3D::typeinfo);
    if (lVar11 != 0) {
      ConvexPolygonShape3D::get_points();
      if ((local_320 != 0) && (1 < *(long *)(local_320 + -8))) {
        Variant::Variant((Variant *)&local_b8,(Vector *)&local_328);
        Variant::operator_cast_to_Vector((Variant *)&local_318);
        if (Variant::needs_deinit[(int)local_b8] != '\0') {
          Variant::_clear_internal();
        }
        local_2f8 = (EditorNode3DGizmo *)0x0;
        local_2f0 = 0;
        local_2e8 = 0;
        local_2e0 = 0;
        local_2d8 = 0;
        local_2d0 = 0;
        iVar8 = ConvexHullComputer::convex_hull((Vector *)&local_318,(MeshData *)&local_2f8);
        if (iVar8 == 0) {
          local_300 = 0;
          CowData<Vector3>::resize<false>
                    ((CowData<Vector3> *)&local_300,(ulong)((uint)local_2e8 * 2));
          if ((uint)local_2e8 != 0) {
            uVar21 = 1;
            uVar20 = 0;
            do {
              uVar3 = *(uint *)(local_2e0 + uVar20 * 0x10);
              uVar13 = (ulong)uVar3;
              uVar4 = (uint)local_2d8;
              if ((uint)local_2d8 <= uVar3) goto LAB_00105cfc;
              uVar24 = (ulong)((uint)uVar20 * 2);
              puVar1 = (undefined8 *)(local_2d0 + uVar13 * 0xc);
              if (local_300 == 0) {
LAB_00105d3a:
                uVar19 = 0;
                uVar13 = uVar24;
LAB_00105d3d:
                iVar8 = 0x38;
                pcVar16 = "./core/templates/vector.h";
                pcVar43 = "((Vector<T> *)(this))->_cowdata.size()";
LAB_00105d23:
                _err_print_index_error
                          ("operator[]",pcVar16,iVar8,uVar13,uVar19,"p_index",pcVar43,"",false,true)
                ;
                _err_flush_stdout();
                    /* WARNING: Does not return */
                pcVar5 = (code *)invalidInstructionException();
                (*pcVar5)();
              }
              uVar19 = *(ulong *)(local_300 + -8);
              uVar13 = uVar24;
              if ((long)uVar19 <= (long)uVar24) goto LAB_00105d3d;
              CowData<Vector3>::_copy_on_write((CowData<Vector3> *)&local_300);
              puVar2 = (undefined8 *)(local_300 + uVar24 * 0xc);
              *puVar2 = *puVar1;
              *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar1 + 1);
              if ((uint)local_2e8 <= (uint)uVar20) {
                uVar13 = uVar20 & 0xffffffff;
                uVar4 = (uint)local_2e8;
LAB_00105cfc:
                uVar19 = (ulong)uVar4;
                iVar8 = 0xb2;
                pcVar16 = "./core/templates/local_vector.h";
                pcVar43 = "count";
                goto LAB_00105d23;
              }
              uVar3 = *(uint *)(local_2e0 + 4 + uVar20 * 0x10);
              uVar13 = (ulong)uVar3;
              uVar4 = (uint)local_2d8;
              if ((uint)local_2d8 <= uVar3) goto LAB_00105cfc;
              uVar24 = (ulong)uVar21;
              puVar1 = (undefined8 *)(local_2d0 + uVar13 * 0xc);
              if (local_300 == 0) goto LAB_00105d3a;
              uVar19 = *(ulong *)(local_300 + -8);
              uVar13 = uVar24;
              if ((long)uVar19 <= (long)uVar24) goto LAB_00105d3d;
              uVar20 = uVar20 + 1;
              uVar21 = uVar21 + 2;
              CowData<Vector3>::_copy_on_write((CowData<Vector3> *)&local_300);
              puVar2 = (undefined8 *)(local_300 + uVar24 * 0xc);
              *puVar2 = *puVar1;
              *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar1 + 1);
            } while ((uint)uVar20 < (uint)local_2e8);
          }
          local_330 = (Object *)0x0;
          Ref<Material>::operator=((Ref<Material> *)&local_330,local_348);
          EditorNode3DGizmo::add_lines
                    ((Vector *)param_1,(Ref *)&local_308,SUB81((Ref<Material> *)&local_330,0),
                     (Color *)0x0);
          Ref<Material>::unref((Ref<Material> *)&local_330);
          EditorNode3DGizmo::add_collision_segments((Vector *)param_1);
          CowData<Vector3>::_unref((CowData<Vector3> *)&local_300);
        }
        Geometry3D::MeshData::~MeshData((MeshData *)&local_2f8);
        CowData<Vector3>::_unref((CowData<Vector3> *)&local_310);
      }
      CowData<Vector3>::_unref((CowData<Vector3> *)&local_320);
      pRVar17 = local_350;
      if (local_350 == (Ref *)0x0) goto LAB_00105051;
    }
    pOVar9 = (Object *)__dynamic_cast(pRVar17,&Object::typeinfo,&ConcavePolygonShape3D::typeinfo);
    if (pOVar9 != (Object *)0x0) {
      cVar7 = RefCounted::reference();
      if (cVar7 == '\0') {
        Shape3D::get_debug_mesh();
        local_308 = (Object *)0x0;
        Ref<Material>::operator=((Ref<Material> *)&local_308,local_348);
                    /* WARNING: Does not return */
        pcVar5 = (code *)invalidInstructionException();
        (*pcVar5)();
      }
      Shape3D::get_debug_mesh();
      local_308 = (Object *)0x0;
      Ref<Material>::operator=((Ref<Material> *)&local_308,local_348);
      (**(code **)(*(long *)pOVar9 + 0x1d0))((String *)&local_2f8,pOVar9);
      EditorNode3DGizmo::add_lines((Vector *)param_1,(Ref *)&local_2f8,bVar15,(Color *)0x0);
      CowData<Vector3>::_unref((CowData<Vector3> *)&local_2f0);
      Ref<Material>::unref((Ref<Material> *)&local_308);
      (**(code **)(*(long *)pOVar9 + 0x1d0))((String *)&local_2f8,pOVar9);
      EditorNode3DGizmo::add_collision_segments((Vector *)param_1);
      CowData<Vector3>::_unref((CowData<Vector3> *)&local_2f0);
      if (local_318 != (Object *)0x0) {
        cVar7 = RefCounted::unreference();
        pOVar10 = local_318;
        if (cVar7 != '\0') {
          cVar7 = predelete_handler(local_318);
          if (cVar7 != '\0') {
            (**(code **)(*(long *)pOVar10 + 0x140))(pOVar10);
            Memory::free_static(pOVar10,false);
          }
        }
      }
      cVar7 = RefCounted::unreference();
      if (cVar7 != '\0') {
        cVar7 = predelete_handler(pOVar9);
        if (cVar7 != '\0') {
          (**(code **)(*(long *)pOVar9 + 0x140))(pOVar9);
          Memory::free_static(pOVar9,false);
        }
      }
      pRVar17 = local_350;
      if (local_350 == (Ref *)0x0) goto LAB_00105051;
    }
    lVar11 = __dynamic_cast(pRVar17,&Object::typeinfo,&SeparationRayShape3D::typeinfo);
    if (lVar11 != 0) {
      local_328 = (Object *)0x0;
      Ref<SeparationRayShape3D>::operator=((Ref<SeparationRayShape3D> *)&local_328,pRVar17);
      pOVar9 = local_328;
      local_b8 = 0.0;
      fStack_b4 = 0.0;
      afStack_b0[0] = 0.0;
      afStack_b0[3] = (float)SeparationRayShape3D::get_length();
      afStack_b0[1] = 0.0;
      afStack_b0[2] = 0.0;
      local_310 = 0;
      iVar8 = CowData<Vector3>::resize<false>((CowData<Vector3> *)&local_310,2);
      if (iVar8 == 0) {
        lVar11 = 0;
        lVar23 = 0;
        do {
          if (local_310 == 0) {
            lVar18 = 0;
LAB_00105845:
            _err_print_index_error
                      ("set","./core/templates/cowdata.h",0xcf,lVar23,lVar18,"p_index","size()","",
                       false,false);
          }
          else {
            lVar18 = *(long *)(local_310 + -8);
            if (lVar18 <= lVar23) goto LAB_00105845;
            CowData<Vector3>::_copy_on_write((CowData<Vector3> *)&local_310);
            *(undefined8 *)(local_310 + lVar11) = *(undefined8 *)((long)&local_b8 + lVar11);
            *(undefined4 *)(local_310 + 8 + lVar11) = *(undefined4 *)((long)afStack_b0 + lVar11);
          }
          lVar11 = lVar11 + 0xc;
          if (lVar23 != 0) break;
          lVar23 = 1;
        } while( true );
      }
      local_2f8 = (EditorNode3DGizmo *)0x0;
      Ref<Material>::operator=((Ref<Material> *)&local_2f8,local_348);
      EditorNode3DGizmo::add_lines((Vector *)param_1,(Ref *)&local_318,bVar14,(Color *)0x0);
      Ref<Material>::unref((Ref<Material> *)&local_2f8);
      EditorNode3DGizmo::add_collision_segments((Vector *)param_1);
      local_300 = 0;
      afStack_b0[0] = (float)SeparationRayShape3D::get_length();
      local_b8 = 0.0;
      fStack_b4 = 0.0;
      Vector<Vector3>::push_back(0,afStack_b0[0],(String *)&local_308);
      local_2f0 = 0;
      EditorNode3DGizmo::add_handles
                ((Vector *)param_1,(Ref *)&local_308,(Vector *)&local_338,bVar14,false);
      CowData<int>::_unref((CowData<int> *)&local_2f0);
      CowData<Vector3>::_unref((CowData<Vector3> *)&local_300);
      CowData<Vector3>::_unref((CowData<Vector3> *)&local_310);
      cVar7 = RefCounted::unreference();
      if (cVar7 != '\0') {
        cVar7 = predelete_handler(pOVar9);
        if (cVar7 != '\0') {
          (**(code **)(*(long *)pOVar9 + 0x140))(pOVar9);
          Memory::free_static(pOVar9,false);
        }
      }
      pRVar17 = local_350;
      if (local_350 == (Ref *)0x0) goto LAB_00105051;
    }
    pOVar9 = (Object *)__dynamic_cast(pRVar17,&Object::typeinfo,&HeightMapShape3D::typeinfo);
    if (pOVar9 != (Object *)0x0) {
      cVar7 = RefCounted::reference();
      if (cVar7 == '\0') {
                    /* WARNING: Does not return */
        pcVar5 = (code *)invalidInstructionException();
        (*pcVar5)();
      }
      (**(code **)(*(long *)pOVar9 + 0x1d0))((String *)&local_2f8,pOVar9);
      local_308 = (Object *)0x0;
      Ref<Material>::operator=((Ref<Material> *)&local_308,local_348);
      EditorNode3DGizmo::add_lines((Vector *)param_1,(Ref *)&local_2f8,bVar15,(Color *)0x0);
      Ref<Material>::unref((Ref<Material> *)&local_308);
      CowData<Vector3>::_unref((CowData<Vector3> *)&local_2f0);
      cVar7 = RefCounted::unreference();
      if (cVar7 != '\0') {
        cVar7 = predelete_handler(pOVar9);
        if (cVar7 != '\0') {
          (**(code **)(*(long *)pOVar9 + 0x140))(pOVar9);
          Memory::free_static(pOVar9,false);
        }
      }
    }
  }
LAB_00105051:
  Ref<Material>::unref((Ref<Material> *)&local_338);
  Ref<StandardMaterial3D>::unref((Ref<StandardMaterial3D> *)&local_340);
  Ref<StandardMaterial3D>::unref((Ref<StandardMaterial3D> *)&local_348);
LAB_00105078:
  Ref<Shape3D>::unref((Ref<Shape3D> *)&local_350);
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



/* RefCounted::is_class_ptr(void*) const */

uint __thiscall RefCounted::is_class_ptr(RefCounted *this,void *param_1)

{
  return (uint)CONCAT71(0x10b7,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10b7,(undefined4 *)param_1 == &get_class_ptr_static()::ptr);
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
  
  return (uint)CONCAT71(0x10b7,in_RSI == &BaseMaterial3D::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10b7,in_RSI == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10b7,in_RSI == &Material::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10b7,in_RSI == &Resource::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10b7,in_RSI == &RefCounted::get_class_ptr_static()::ptr) |
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



/* CollisionShape3DGizmoPlugin::is_class_ptr(void*) const */

uint __thiscall
CollisionShape3DGizmoPlugin::is_class_ptr(CollisionShape3DGizmoPlugin *this,void *param_1)

{
  return (uint)CONCAT71(0x10b7,(undefined4 *)param_1 ==
                               &EditorNode3DGizmoPlugin::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10b7,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10b7,(undefined4 *)param_1 == &Resource::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10b7,(undefined4 *)param_1 == &RefCounted::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10b7,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* CollisionShape3DGizmoPlugin::_getv(StringName const&, Variant&) const */

undefined8 CollisionShape3DGizmoPlugin::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* CollisionShape3DGizmoPlugin::_setv(StringName const&, Variant const&) */

undefined8 CollisionShape3DGizmoPlugin::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* CollisionShape3DGizmoPlugin::_validate_propertyv(PropertyInfo&) const */

void CollisionShape3DGizmoPlugin::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* CollisionShape3DGizmoPlugin::_property_can_revertv(StringName const&) const */

undefined8 CollisionShape3DGizmoPlugin::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* CollisionShape3DGizmoPlugin::_property_get_revertv(StringName const&, Variant&) const */

undefined8 CollisionShape3DGizmoPlugin::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* CollisionShape3DGizmoPlugin::_notificationv(int, bool) */

void CollisionShape3DGizmoPlugin::_notificationv(int param_1,bool param_2)

{
  return;
}



/* Gizmo3DHelper::is_class_ptr(void*) const */

uint __thiscall Gizmo3DHelper::is_class_ptr(Gizmo3DHelper *this,void *param_1)

{
  return (uint)CONCAT71(0x10b7,(undefined4 *)param_1 == &RefCounted::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10b7,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10b7,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
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



/* RefCounted::~RefCounted() */

void __thiscall RefCounted::~RefCounted(RefCounted *this)

{
  *(undefined ***)this = &PTR__initialize_classv_0010aff8;
  Object::~Object((Object *)this);
  return;
}



/* RefCounted::~RefCounted() */

void __thiscall RefCounted::~RefCounted(RefCounted *this)

{
  *(undefined ***)this = &PTR__initialize_classv_0010aff8;
  Object::~Object((Object *)this);
  operator_delete(this,0x180);
  return;
}



/* Gizmo3DHelper::~Gizmo3DHelper() */

void __thiscall Gizmo3DHelper::~Gizmo3DHelper(Gizmo3DHelper *this)

{
  *(undefined ***)this = &PTR__initialize_classv_0010b358;
  if (Variant::needs_deinit[*(int *)(this + 0x180)] != '\0') {
    Variant::_clear_internal();
  }
  *(undefined ***)this = &PTR__initialize_classv_0010aff8;
  Object::~Object((Object *)this);
  return;
}



/* StandardMaterial3D::~StandardMaterial3D() */

void __thiscall StandardMaterial3D::~StandardMaterial3D(StandardMaterial3D *this)

{
  *(undefined ***)this = &PTR__initialize_classv_0010b158;
  BaseMaterial3D::~BaseMaterial3D((BaseMaterial3D *)this);
  return;
}



/* StandardMaterial3D::~StandardMaterial3D() */

void __thiscall StandardMaterial3D::~StandardMaterial3D(StandardMaterial3D *this)

{
  *(undefined ***)this = &PTR__initialize_classv_0010b158;
  BaseMaterial3D::~BaseMaterial3D((BaseMaterial3D *)this);
  operator_delete(this,0x558);
  return;
}



/* StandardMaterial3D::_setv(StringName const&, Variant const&) */

undefined8 StandardMaterial3D::_setv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)PTR__set_0010f010 != Object::_set) {
    uVar1 = StandardMaterial3D::_set(param_1,param_2);
    return uVar1;
  }
  return 0;
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
LAB_00106523:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00106523;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"StandardMaterial3D");
      goto LAB_0010658e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"StandardMaterial3D");
LAB_0010658e:
  return &_get_class_namev()::_class_name_static;
}



/* StandardMaterial3D::_validate_propertyv(PropertyInfo&) const */

void StandardMaterial3D::_validate_propertyv(PropertyInfo *param_1)

{
  Material::_validate_property(param_1);
  if ((code *)PTR__validate_property_0010f018 == Material::_validate_property) {
    return;
  }
  BaseMaterial3D::_validate_property(param_1);
  return;
}



/* Gizmo3DHelper::~Gizmo3DHelper() */

void __thiscall Gizmo3DHelper::~Gizmo3DHelper(Gizmo3DHelper *this)

{
  *(undefined ***)this = &PTR__initialize_classv_0010b358;
  if (Variant::needs_deinit[*(int *)(this + 0x180)] != '\0') {
    Variant::_clear_internal();
  }
  *(undefined ***)this = &PTR__initialize_classv_0010aff8;
  Object::~Object((Object *)this);
  operator_delete(this,0x1c8);
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
LAB_001066c3:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_001066c3;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"RefCounted");
      goto LAB_0010672e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"RefCounted");
LAB_0010672e:
  return &_get_class_namev()::_class_name_static;
}



/* CollisionShape3DGizmoPlugin::_get_class_namev() const */

undefined8 * CollisionShape3DGizmoPlugin::_get_class_namev(void)

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
LAB_001067b3:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_001067b3;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"CollisionShape3DGizmoPlugin"
                );
      goto LAB_0010681e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"CollisionShape3DGizmoPlugin");
LAB_0010681e:
  return &_get_class_namev()::_class_name_static;
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
LAB_001068a3:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_001068a3;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"Gizmo3DHelper");
      goto LAB_0010690e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"Gizmo3DHelper");
LAB_0010690e:
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



/* void EditorUndoRedoManager::add_do_method<float>(Object*, StringName const&, float) */

void __thiscall
EditorUndoRedoManager::add_do_method<float>
          (EditorUndoRedoManager *this,Object *param_1,StringName *param_2,float param_3)

{
  char cVar1;
  long in_FS_OFFSET;
  Variant *local_78 [2];
  int local_68 [6];
  undefined8 local_50;
  undefined1 local_48 [16];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  Variant::Variant((Variant *)local_68,param_3);
  local_50 = 0;
  local_48 = (undefined1  [16])0x0;
  local_78[0] = (Variant *)local_68;
  EditorUndoRedoManager::add_do_methodp
            ((Object *)this,(StringName *)param_1,(Variant **)param_2,(int)local_78);
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



/* CowData<char32_t>::_ref(CowData<char32_t> const&) */

void __thiscall CowData<char32_t>::_ref(CowData<char32_t> *this,CowData *param_1)

{
  if (*(long *)this != *(long *)param_1) {
    _ref(this,param_1);
    return;
  }
  return;
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



/* CollisionShape3DGizmoPlugin::get_class() const */

void CollisionShape3DGizmoPlugin::get_class(void)

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
    if (cVar5 != '\0') goto LAB_0010705b;
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
      if (cVar5 != '\0') goto LAB_0010705b;
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar6 = String::operator==(param_1,"Object");
      return uVar6;
    }
  }
  else {
LAB_0010705b:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
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
    if (cVar4 != '\0') goto LAB_0010725b;
  }
  cVar4 = String::operator==(param_1,"Gizmo3DHelper");
  if (cVar4 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar5 = RefCounted::is_class((RefCounted *)this,param_1);
      return uVar5;
    }
  }
  else {
LAB_0010725b:
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
    if (cVar4 != '\0') goto LAB_001073bb;
  }
  cVar4 = String::operator==(param_1,"Resource");
  if (cVar4 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar5 = RefCounted::is_class((RefCounted *)this,param_1);
      return uVar5;
    }
  }
  else {
LAB_001073bb:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
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
    if (cVar5 != '\0') goto LAB_0010751b;
  }
  cVar5 = String::operator==(param_1,"BaseMaterial3D");
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
      if (cVar5 != '\0') goto LAB_0010751b;
    }
    cVar5 = String::operator==(param_1,"Material");
    if (cVar5 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar6 = Resource::is_class((Resource *)this,param_1);
        return uVar6;
      }
      goto LAB_0010761e;
    }
  }
LAB_0010751b:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0010761e:
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
    if (cVar4 != '\0') goto LAB_0010772b;
  }
  cVar4 = String::operator==(param_1,"StandardMaterial3D");
  if (cVar4 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar5 = BaseMaterial3D::is_class((BaseMaterial3D *)this,param_1);
      return uVar5;
    }
  }
  else {
LAB_0010772b:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CollisionShape3DGizmoPlugin::is_class(String const&) const */

undefined8 __thiscall
CollisionShape3DGizmoPlugin::is_class(CollisionShape3DGizmoPlugin *this,String *param_1)

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
    if (cVar5 != '\0') goto LAB_0010789b;
  }
  cVar5 = String::operator==(param_1,"CollisionShape3DGizmoPlugin");
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
      if (cVar5 != '\0') goto LAB_0010789b;
    }
    cVar5 = String::operator==(param_1,"EditorNode3DGizmoPlugin");
    if (cVar5 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar6 = Resource::is_class((Resource *)this,param_1);
        return uVar6;
      }
      goto LAB_0010799e;
    }
  }
LAB_0010789b:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0010799e:
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
    if ((code *)PTR__bind_methods_0010f020 != Object::_bind_methods) {
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



/* CollisionShape3DGizmoPlugin::_initialize_classv() */

void CollisionShape3DGizmoPlugin::_initialize_classv(void)

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
      if ((code *)PTR__bind_methods_0010f028 != Resource::_bind_methods) {
        EditorNode3DGizmoPlugin::_bind_methods();
      }
      EditorNode3DGizmoPlugin::initialize_class()::initialized = '\x01';
    }
    local_48 = "EditorNode3DGizmoPlugin";
    local_58 = 0;
    local_40 = 0x17;
    String::parse_latin1((StrRange *)&local_58);
    StringName::StringName((StringName *)&local_50,(String *)&local_58,false);
    local_48 = "CollisionShape3DGizmoPlugin";
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
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
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
      if ((code *)PTR__bind_methods_0010f020 != Object::_bind_methods) {
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
      if ((code *)PTR__bind_methods_0010f030 != Material::_bind_methods) {
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
        if (pvVar3 == (void *)0x0) goto LAB_0010839f;
      }
    }
    Memory::free_static(pvVar3,false);
    Memory::free_static(*(void **)(this + 0x20),false);
  }
LAB_0010839f:
  CowData<char32_t>::_unref((CowData<char32_t> *)this);
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
      goto LAB_0010855c;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0010855c:
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
      goto LAB_001087c1;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_001087c1:
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
      goto LAB_00108a71;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00108a71:
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
      goto LAB_00108d21;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00108d21:
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
      goto LAB_00108fd1;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00108fd1:
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



/* CollisionShape3DGizmoPlugin::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool)
   const */

void __thiscall
CollisionShape3DGizmoPlugin::_get_property_listv
          (CollisionShape3DGizmoPlugin *this,List *param_1,bool param_2)

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
  local_78 = "CollisionShape3DGizmoPlugin";
  local_70 = 0x1b;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "CollisionShape3DGizmoPlugin";
  local_98 = 0;
  local_70 = 0x1b;
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
      goto LAB_00109281;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00109281:
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
  StringName::StringName((StringName *)&local_78,"CollisionShape3DGizmoPlugin",false);
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
      goto LAB_00109531;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00109531:
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
      goto LAB_001097e1;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_001097e1:
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



/* Ref<Material>::unref() */

void __thiscall Ref<Material>::unref(Ref<Material> *this)

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



/* Ref<Shape3D>::unref() */

void __thiscall Ref<Shape3D>::unref(Ref<Shape3D> *this)

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



/* Ref<SeparationRayShape3D>::unref() */

void __thiscall Ref<SeparationRayShape3D>::unref(Ref<SeparationRayShape3D> *this)

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



/* CowData<Ref<StandardMaterial3D> >::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<Ref<StandardMaterial3D>>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CollisionShape3DGizmoPlugin::redraw(EditorNode3DGizmo*) [clone .cold] */

void CollisionShape3DGizmoPlugin::redraw(EditorNode3DGizmo *param_1)

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
LAB_00109eb0:
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
  if (lVar6 == 0) goto LAB_00109eb0;
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
LAB_00109e3c:
    puVar8 = *(undefined8 **)this;
    if (puVar8 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    lVar7 = puVar8[-1];
    if (param_1 <= lVar7) goto LAB_00109ddf;
  }
  else {
    if (lVar7 != 0) {
      uVar5 = _realloc(this,lVar6);
      if ((int)uVar5 != 0) {
        return uVar5;
      }
      goto LAB_00109e3c;
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
LAB_00109ddf:
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



/* CowData<Ref<StandardMaterial3D> >::_unref() */

void __thiscall CowData<Ref<StandardMaterial3D>>::_unref(CowData<Ref<StandardMaterial3D>> *this)

{
  long *plVar1;
  long lVar2;
  Object *pOVar3;
  code *pcVar4;
  char cVar5;
  long *plVar6;
  long lVar7;
  
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
  plVar1 = *(long **)this;
  if (plVar1 == (long *)0x0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  lVar2 = plVar1[-1];
  *(undefined8 *)this = 0;
  if (lVar2 != 0) {
    lVar7 = 0;
    plVar6 = plVar1;
LAB_00109fbd:
    do {
      if (*plVar6 != 0) {
        cVar5 = RefCounted::unreference();
        if (cVar5 != '\0') {
          pOVar3 = (Object *)*plVar6;
          cVar5 = predelete_handler(pOVar3);
          if (cVar5 != '\0') {
            lVar7 = lVar7 + 1;
            plVar6 = plVar6 + 1;
            (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
            Memory::free_static(pOVar3,false);
            if (lVar2 == lVar7) break;
            goto LAB_00109fbd;
          }
        }
      }
      lVar7 = lVar7 + 1;
      plVar6 = plVar6 + 1;
    } while (lVar2 != lVar7);
  }
  Memory::free_static(plVar1 + -2,false);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashMap<String, Vector<Ref<StandardMaterial3D> >, HashMapHasherDefault,
   HashMapComparatorDefault<String>, DefaultTypedAllocator<HashMapElement<String,
   Vector<Ref<StandardMaterial3D> > > > >::operator[](String const&) */

undefined1 * __thiscall
HashMap<String,Vector<Ref<StandardMaterial3D>>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Vector<Ref<StandardMaterial3D>>>>>
::operator[](HashMap<String,Vector<Ref<StandardMaterial3D>>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Vector<Ref<StandardMaterial3D>>>>>
             *this,String *param_1)

{
  uint *puVar1;
  undefined8 *puVar2;
  void *pvVar3;
  void *__s;
  long lVar4;
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
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 (*pauVar37) [16];
  char cVar38;
  uint uVar39;
  uint uVar40;
  ulong uVar41;
  undefined8 uVar42;
  void *__s_00;
  undefined1 (*pauVar43) [16];
  void *pvVar44;
  int iVar45;
  long lVar46;
  long lVar47;
  ulong uVar48;
  undefined8 uVar49;
  uint uVar50;
  uint uVar51;
  ulong uVar52;
  long lVar53;
  uint uVar54;
  uint uVar55;
  undefined1 (*pauVar56) [16];
  long in_FS_OFFSET;
  undefined8 local_70;
  undefined1 local_68 [16];
  long local_58 [2];
  undefined8 local_48;
  long local_40;
  
  uVar55 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(this + 8) == 0) {
LAB_0010a79c:
    local_70 = 0;
    uVar48 = (ulong)uVar55;
    uVar41 = uVar48 * 4;
    uVar52 = uVar48 * 8;
    uVar42 = Memory::alloc_static(uVar41,false);
    *(undefined8 *)(this + 0x10) = uVar42;
    pvVar44 = (void *)Memory::alloc_static(uVar52,false);
    *(void **)(this + 8) = pvVar44;
    if (uVar55 != 0) {
      pvVar3 = *(void **)(this + 0x10);
      if ((pvVar3 < (void *)((long)pvVar44 + uVar52)) && (pvVar44 < (void *)((long)pvVar3 + uVar41))
         ) {
        uVar41 = 0;
        do {
          *(undefined4 *)((long)pvVar3 + uVar41 * 4) = 0;
          *(undefined8 *)((long)pvVar44 + uVar41 * 8) = 0;
          uVar41 = uVar41 + 1;
        } while (uVar48 != uVar41);
      }
      else {
        memset(pvVar3,0,uVar41);
        memset(pvVar44,0,uVar52);
      }
LAB_0010a685:
      iVar45 = *(int *)(this + 0x2c);
      if (iVar45 != 0) {
LAB_0010a695:
        uVar39 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
        lVar4 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
        uVar51 = String::hash();
        uVar41 = CONCAT44(0,uVar39);
        lVar53 = *(long *)(this + 0x10);
        uVar40 = 1;
        if (uVar51 != 0) {
          uVar40 = uVar51;
        }
        uVar54 = 0;
        auVar17._8_8_ = 0;
        auVar17._0_8_ = (ulong)uVar40 * lVar4;
        auVar33._8_8_ = 0;
        auVar33._0_8_ = uVar41;
        lVar46 = SUB168(auVar17 * auVar33,8);
        uVar51 = *(uint *)(lVar53 + lVar46 * 4);
        uVar50 = SUB164(auVar17 * auVar33,8);
        if (uVar51 != 0) {
          do {
            if (uVar40 == uVar51) {
              cVar38 = String::operator==((String *)
                                          (*(long *)(*(long *)(this + 8) + lVar46 * 8) + 0x10),
                                          param_1);
              if (cVar38 != '\0') {
                pauVar43 = *(undefined1 (**) [16])(*(long *)(this + 8) + (ulong)uVar50 * 8);
                if (*(long *)pauVar43[2] != 0) {
                  CowData<Ref<StandardMaterial3D>>::_ref
                            ((CowData<Ref<StandardMaterial3D>> *)(pauVar43 + 2),(CowData *)&local_70
                            );
                  pauVar43 = *(undefined1 (**) [16])(*(long *)(this + 8) + (ulong)uVar50 * 8);
                }
                goto LAB_0010a53b;
              }
              lVar53 = *(long *)(this + 0x10);
            }
            uVar54 = uVar54 + 1;
            auVar18._8_8_ = 0;
            auVar18._0_8_ = (ulong)(uVar50 + 1) * lVar4;
            auVar34._8_8_ = 0;
            auVar34._0_8_ = uVar41;
            lVar46 = SUB168(auVar18 * auVar34,8);
            uVar51 = *(uint *)(lVar53 + lVar46 * 4);
            uVar50 = SUB164(auVar18 * auVar34,8);
          } while ((uVar51 != 0) &&
                  (auVar19._8_8_ = 0, auVar19._0_8_ = (ulong)uVar51 * lVar4, auVar35._8_8_ = 0,
                  auVar35._0_8_ = uVar41, auVar20._8_8_ = 0,
                  auVar20._0_8_ = (ulong)((uVar39 + uVar50) - SUB164(auVar19 * auVar35,8)) * lVar4,
                  auVar36._8_8_ = 0, auVar36._0_8_ = uVar41, uVar54 <= SUB164(auVar20 * auVar36,8)))
          ;
        }
        iVar45 = *(int *)(this + 0x2c);
      }
      uVar48 = (ulong)uVar55;
      goto LAB_0010a157;
    }
    iVar45 = *(int *)(this + 0x2c);
    if (pvVar44 == (void *)0x0) goto LAB_0010a157;
    if (*(int *)(this + 0x2c) != 0) goto LAB_0010a695;
LAB_0010a17d:
    uVar55 = *(uint *)(this + 0x28);
    if (uVar55 == 0x1c) {
      pauVar43 = (undefined1 (*) [16])0x0;
      _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      goto LAB_0010a53b;
    }
    uVar41 = (ulong)(uVar55 + 1);
    uVar39 = *(uint *)(hash_table_size_primes + (ulong)uVar55 * 4);
    *(undefined4 *)(this + 0x2c) = 0;
    if (uVar55 + 1 < 2) {
      uVar41 = 2;
    }
    uVar55 = *(uint *)(hash_table_size_primes + uVar41 * 4);
    *(int *)(this + 0x28) = (int)uVar41;
    pvVar44 = *(void **)(this + 8);
    uVar48 = (ulong)uVar55;
    uVar41 = uVar48 * 4;
    pvVar3 = *(void **)(this + 0x10);
    uVar52 = uVar48 * 8;
    uVar42 = Memory::alloc_static(uVar41,false);
    *(undefined8 *)(this + 0x10) = uVar42;
    __s_00 = (void *)Memory::alloc_static(uVar52,false);
    *(void **)(this + 8) = __s_00;
    if (uVar55 != 0) {
      __s = *(void **)(this + 0x10);
      if ((__s < (void *)((long)__s_00 + uVar52)) && (__s_00 < (void *)((long)__s + uVar41))) {
        uVar41 = 0;
        do {
          *(undefined4 *)((long)__s + uVar41 * 4) = 0;
          *(undefined8 *)((long)__s_00 + uVar41 * 8) = 0;
          uVar41 = uVar41 + 1;
        } while (uVar41 != uVar48);
      }
      else {
        memset(__s,0,uVar41);
        memset(__s_00,0,uVar52);
      }
    }
    uVar41 = 0;
    if (uVar39 != 0) {
      do {
        uVar55 = *(uint *)((long)pvVar3 + uVar41 * 4);
        if (uVar55 != 0) {
          uVar50 = 0;
          lVar4 = *(long *)(this + 0x10);
          uVar40 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
          uVar52 = CONCAT44(0,uVar40);
          lVar53 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
          auVar5._8_8_ = 0;
          auVar5._0_8_ = (ulong)uVar55 * lVar53;
          auVar21._8_8_ = 0;
          auVar21._0_8_ = uVar52;
          lVar46 = SUB168(auVar5 * auVar21,8);
          puVar1 = (uint *)(lVar4 + lVar46 * 4);
          iVar45 = SUB164(auVar5 * auVar21,8);
          uVar51 = *puVar1;
          uVar42 = *(undefined8 *)((long)pvVar44 + uVar41 * 8);
          while (uVar51 != 0) {
            auVar6._8_8_ = 0;
            auVar6._0_8_ = (ulong)uVar51 * lVar53;
            auVar22._8_8_ = 0;
            auVar22._0_8_ = uVar52;
            auVar7._8_8_ = 0;
            auVar7._0_8_ = (ulong)((uVar40 + iVar45) - SUB164(auVar6 * auVar22,8)) * lVar53;
            auVar23._8_8_ = 0;
            auVar23._0_8_ = uVar52;
            uVar54 = SUB164(auVar7 * auVar23,8);
            uVar49 = uVar42;
            if (uVar54 < uVar50) {
              *puVar1 = uVar55;
              puVar2 = (undefined8 *)((long)__s_00 + lVar46 * 8);
              uVar49 = *puVar2;
              *puVar2 = uVar42;
              uVar55 = uVar51;
              uVar50 = uVar54;
            }
            uVar50 = uVar50 + 1;
            auVar8._8_8_ = 0;
            auVar8._0_8_ = (ulong)(iVar45 + 1) * lVar53;
            auVar24._8_8_ = 0;
            auVar24._0_8_ = uVar52;
            lVar46 = SUB168(auVar8 * auVar24,8);
            puVar1 = (uint *)(lVar4 + lVar46 * 4);
            iVar45 = SUB164(auVar8 * auVar24,8);
            uVar42 = uVar49;
            uVar51 = *puVar1;
          }
          *(undefined8 *)((long)__s_00 + lVar46 * 8) = uVar42;
          *puVar1 = uVar55;
          *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
        }
        uVar41 = uVar41 + 1;
      } while (uVar39 != uVar41);
      Memory::free_static(pvVar44,false);
      Memory::free_static(pvVar3,false);
    }
  }
  else {
    if (*(int *)(this + 0x2c) != 0) {
      uVar41 = CONCAT44(0,uVar55);
      lVar4 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
      uVar40 = String::hash();
      uVar39 = 1;
      if (uVar40 != 0) {
        uVar39 = uVar40;
      }
      auVar13._8_8_ = 0;
      auVar13._0_8_ = (ulong)uVar39 * lVar4;
      auVar29._8_8_ = 0;
      auVar29._0_8_ = uVar41;
      lVar46 = SUB168(auVar13 * auVar29,8);
      lVar53 = *(long *)(this + 0x10);
      uVar51 = SUB164(auVar13 * auVar29,8);
      uVar40 = *(uint *)(lVar53 + lVar46 * 4);
      if (uVar40 == 0) {
        lVar47 = *(long *)(this + 8);
      }
      else {
        uVar50 = 0;
        lVar47 = *(long *)(this + 8);
        do {
          if (uVar39 == uVar40) {
            cVar38 = String::operator==((String *)(*(long *)(lVar47 + lVar46 * 8) + 0x10),param_1);
            if (cVar38 != '\0') {
              pauVar43 = *(undefined1 (**) [16])(*(long *)(this + 8) + (ulong)uVar51 * 8);
              goto LAB_0010a547;
            }
            lVar53 = *(long *)(this + 0x10);
            lVar47 = *(long *)(this + 8);
          }
          uVar50 = uVar50 + 1;
          auVar14._8_8_ = 0;
          auVar14._0_8_ = (ulong)(uVar51 + 1) * lVar4;
          auVar30._8_8_ = 0;
          auVar30._0_8_ = uVar41;
          lVar46 = SUB168(auVar14 * auVar30,8);
          uVar40 = *(uint *)(lVar53 + lVar46 * 4);
          uVar51 = SUB164(auVar14 * auVar30,8);
        } while ((uVar40 != 0) &&
                (auVar15._8_8_ = 0, auVar15._0_8_ = (ulong)uVar40 * lVar4, auVar31._8_8_ = 0,
                auVar31._0_8_ = uVar41, auVar16._8_8_ = 0,
                auVar16._0_8_ = (ulong)((uVar51 + uVar55) - SUB164(auVar15 * auVar31,8)) * lVar4,
                auVar32._8_8_ = 0, auVar32._0_8_ = uVar41, uVar50 <= SUB164(auVar16 * auVar32,8)));
      }
      local_70 = 0;
      uVar55 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
      if (lVar47 == 0) goto LAB_0010a79c;
      goto LAB_0010a685;
    }
    local_70 = 0;
    uVar48 = (ulong)uVar55;
    iVar45 = 0;
LAB_0010a157:
    if ((float)uVar48 * __LC54 < (float)(iVar45 + 1)) goto LAB_0010a17d;
  }
  local_58[0] = 0;
  local_68 = (undefined1  [16])0x0;
  if (*(long *)param_1 == 0) {
    local_48 = 0;
    pauVar43 = (undefined1 (*) [16])operator_new(0x28,"");
    *(undefined8 *)pauVar43[1] = 0;
    *pauVar43 = (undefined1  [16])0x0;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)local_58,(CowData *)param_1);
    lVar4 = local_58[0];
    uVar42 = local_68._0_8_;
    uVar49 = local_68._8_8_;
    local_48 = 0;
    pauVar43 = (undefined1 (*) [16])operator_new(0x28,"");
    *(undefined8 *)pauVar43[1] = 0;
    *(undefined8 *)*pauVar43 = uVar42;
    *(undefined8 *)(*pauVar43 + 8) = uVar49;
    if (lVar4 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)(pauVar43 + 1),(CowData *)local_58);
    }
  }
  *(undefined8 *)pauVar43[2] = 0;
  CowData<Ref<StandardMaterial3D>>::_unref((CowData<Ref<StandardMaterial3D>> *)&local_48);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
  puVar2 = *(undefined8 **)(this + 0x20);
  if (puVar2 == (undefined8 *)0x0) {
    *(undefined1 (**) [16])(this + 0x18) = pauVar43;
  }
  else {
    *puVar2 = pauVar43;
    *(undefined8 **)(*pauVar43 + 8) = puVar2;
  }
  *(undefined1 (**) [16])(this + 0x20) = pauVar43;
  uVar39 = String::hash();
  lVar4 = *(long *)(this + 0x10);
  uVar55 = 1;
  if (uVar39 != 0) {
    uVar55 = uVar39;
  }
  uVar51 = 0;
  uVar39 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  uVar41 = CONCAT44(0,uVar39);
  lVar53 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
  auVar9._8_8_ = 0;
  auVar9._0_8_ = (ulong)uVar55 * lVar53;
  auVar25._8_8_ = 0;
  auVar25._0_8_ = uVar41;
  lVar47 = SUB168(auVar9 * auVar25,8);
  lVar46 = *(long *)(this + 8);
  puVar1 = (uint *)(lVar4 + lVar47 * 4);
  iVar45 = SUB164(auVar9 * auVar25,8);
  uVar40 = *puVar1;
  pauVar37 = pauVar43;
  while (uVar40 != 0) {
    auVar10._8_8_ = 0;
    auVar10._0_8_ = (ulong)uVar40 * lVar53;
    auVar26._8_8_ = 0;
    auVar26._0_8_ = uVar41;
    auVar11._8_8_ = 0;
    auVar11._0_8_ = (ulong)((uVar39 + iVar45) - SUB164(auVar10 * auVar26,8)) * lVar53;
    auVar27._8_8_ = 0;
    auVar27._0_8_ = uVar41;
    uVar50 = SUB164(auVar11 * auVar27,8);
    pauVar56 = pauVar37;
    if (uVar50 < uVar51) {
      *puVar1 = uVar55;
      puVar2 = (undefined8 *)(lVar46 + lVar47 * 8);
      pauVar56 = (undefined1 (*) [16])*puVar2;
      *puVar2 = pauVar37;
      uVar51 = uVar50;
      uVar55 = uVar40;
    }
    uVar51 = uVar51 + 1;
    auVar12._8_8_ = 0;
    auVar12._0_8_ = (ulong)(iVar45 + 1) * lVar53;
    auVar28._8_8_ = 0;
    auVar28._0_8_ = uVar41;
    lVar47 = SUB168(auVar12 * auVar28,8);
    puVar1 = (uint *)(lVar4 + lVar47 * 4);
    iVar45 = SUB164(auVar12 * auVar28,8);
    pauVar37 = pauVar56;
    uVar40 = *puVar1;
  }
  *(undefined1 (**) [16])(lVar46 + lVar47 * 8) = pauVar37;
  *puVar1 = uVar55;
  *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
LAB_0010a53b:
  CowData<Ref<StandardMaterial3D>>::_unref((CowData<Ref<StandardMaterial3D>> *)&local_70);
LAB_0010a547:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pauVar43[1] + 8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CowData<Ref<StandardMaterial3D> >::_realloc(long) */

undefined8 __thiscall
CowData<Ref<StandardMaterial3D>>::_realloc(CowData<Ref<StandardMaterial3D>> *this,long param_1)

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
/* Error CowData<Ref<StandardMaterial3D> >::resize<false>(long) */

undefined8 __thiscall
CowData<Ref<StandardMaterial3D>>::resize<false>(CowData<Ref<StandardMaterial3D>> *this,long param_1)

{
  long *plVar1;
  Object *pOVar2;
  code *pcVar3;
  char cVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  undefined8 *puVar10;
  long lVar11;
  
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
    lVar8 = 0;
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
    lVar8 = lVar7 * 8;
    if (lVar8 != 0) {
      uVar9 = lVar8 - 1U | lVar8 - 1U >> 1;
      uVar9 = uVar9 | uVar9 >> 2;
      uVar9 = uVar9 | uVar9 >> 4;
      uVar9 = uVar9 | uVar9 >> 8;
      uVar9 = uVar9 | uVar9 >> 0x10;
      lVar8 = (uVar9 | uVar9 >> 0x20) + 1;
    }
  }
  if (param_1 * 8 == 0) {
LAB_0010ac90:
    _err_print_error("resize","./core/templates/cowdata.h",0x16a,
                     "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                     ,0,0);
    return 6;
  }
  uVar9 = param_1 * 8 - 1;
  uVar9 = uVar9 >> 1 | uVar9;
  uVar9 = uVar9 | uVar9 >> 2;
  uVar9 = uVar9 | uVar9 >> 4;
  uVar9 = uVar9 | uVar9 >> 8;
  uVar9 = uVar9 | uVar9 >> 0x10;
  uVar9 = uVar9 | uVar9 >> 0x20;
  lVar11 = uVar9 + 1;
  if (lVar11 == 0) goto LAB_0010ac90;
  if (param_1 <= lVar7) {
    lVar7 = *(long *)this;
    uVar9 = param_1;
    while (lVar7 != 0) {
      if (*(ulong *)(lVar7 + -8) <= uVar9) {
LAB_0010ab3a:
        if (lVar11 != lVar8) {
          uVar5 = _realloc(this,lVar11);
          if ((int)uVar5 != 0) {
            return uVar5;
          }
          lVar7 = *(long *)this;
          if (lVar7 == 0) {
            _DAT_00000000 = 0;
                    /* WARNING: Does not return */
            pcVar3 = (code *)invalidInstructionException();
            (*pcVar3)();
          }
        }
        *(long *)(lVar7 + -8) = param_1;
        return 0;
      }
      while (plVar1 = (long *)(lVar7 + uVar9 * 8), *plVar1 == 0) {
        uVar9 = uVar9 + 1;
        if (*(ulong *)(lVar7 + -8) <= uVar9) goto LAB_0010ab3a;
      }
      cVar4 = RefCounted::unreference();
      if (cVar4 != '\0') {
        pOVar2 = (Object *)*plVar1;
        cVar4 = predelete_handler(pOVar2);
        if (cVar4 != '\0') {
          (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
          Memory::free_static(pOVar2,false);
        }
      }
      uVar9 = uVar9 + 1;
      lVar7 = *(long *)this;
    }
    goto LAB_0010ab00;
  }
  if (lVar11 == lVar8) {
LAB_0010ac0b:
    puVar10 = *(undefined8 **)this;
    if (puVar10 == (undefined8 *)0x0) {
LAB_0010ab00:
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    lVar7 = puVar10[-1];
    if (param_1 <= lVar7) goto LAB_0010abeb;
  }
  else {
    if (lVar7 != 0) {
      uVar5 = _realloc(this,lVar11);
      if ((int)uVar5 != 0) {
        return uVar5;
      }
      goto LAB_0010ac0b;
    }
    puVar6 = (undefined8 *)Memory::alloc_static(uVar9 + 0x11,false);
    if (puVar6 == (undefined8 *)0x0) {
      _err_print_error("resize","./core/templates/cowdata.h",0x171,"Parameter \"mem_new\" is null.",
                       0,0);
      return 6;
    }
    puVar10 = puVar6 + 2;
    *puVar6 = 1;
    puVar6[1] = 0;
    *(undefined8 **)this = puVar10;
    lVar7 = 0;
  }
  memset(puVar10 + lVar7,0,(param_1 - lVar7) * 8);
LAB_0010abeb:
  puVar10[-1] = param_1;
  return 0;
}



/* WARNING: Control flow encountered bad instruction data */
/* LocalVector<Geometry3D::MeshData::Face, unsigned int, false, false>::resize(unsigned int) */

void __thiscall
LocalVector<Geometry3D::MeshData::Face,unsigned_int,false,false>::resize
          (LocalVector<Geometry3D::MeshData::Face,unsigned_int,false,false> *this,uint param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  long lVar5;
  void *pvVar6;
  uint uVar7;
  
  uVar7 = *(uint *)this;
  if (param_1 < uVar7) {
    lVar5 = (ulong)param_1 << 5;
    uVar7 = param_1;
    do {
      lVar1 = *(long *)(this + 8) + lVar5;
      if (*(void **)(lVar1 + 0x18) != (void *)0x0) {
        if (*(int *)(lVar1 + 0x10) != 0) {
          *(undefined4 *)(lVar1 + 0x10) = 0;
        }
        Memory::free_static(*(void **)(lVar1 + 0x18),false);
      }
      uVar7 = uVar7 + 1;
      lVar5 = lVar5 + 0x20;
    } while (uVar7 < *(uint *)this);
  }
  else {
    if (param_1 <= uVar7) {
      return;
    }
    uVar4 = param_1 - 1;
    if (*(uint *)(this + 4) < param_1) {
      pvVar6 = *(void **)(this + 8);
      uVar7 = uVar4 >> 1 | uVar4;
      uVar7 = uVar7 >> 2 | uVar7;
      uVar7 = uVar7 >> 4 | uVar7;
      uVar7 = uVar7 | uVar7 >> 8;
      uVar7 = (uVar7 | uVar7 >> 0x10) + 1;
      *(uint *)(this + 4) = uVar7;
      lVar5 = Memory::realloc_static(pvVar6,(ulong)uVar7 << 5,false);
      *(long *)(this + 8) = lVar5;
      if (lVar5 == 0) {
        resize((uint)pvVar6);
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      uVar7 = *(uint *)this;
      if (param_1 <= uVar7) goto LAB_0010ad4b;
    }
    lVar5 = *(long *)(this + 8);
    puVar2 = (undefined8 *)((ulong)uVar7 * 0x20 + lVar5);
    do {
      *puVar2 = 0;
      puVar3 = puVar2 + 4;
      *(undefined4 *)(puVar2 + 1) = 0;
      *(undefined4 *)((long)puVar2 + 0xc) = 0;
      puVar2[2] = 0;
      puVar2[3] = 0;
      puVar2 = puVar3;
    } while (puVar3 != (undefined8 *)(lVar5 + 0x20 + ((ulong)(uVar4 - uVar7) + (ulong)uVar7) * 0x20)
            );
  }
LAB_0010ad4b:
  *(uint *)this = param_1;
  return;
}



/* Geometry3D::MeshData::~MeshData() */

void __thiscall Geometry3D::MeshData::~MeshData(MeshData *this)

{
  if (*(void **)(this + 0x28) != (void *)0x0) {
    if (*(int *)(this + 0x20) != 0) {
      *(undefined4 *)(this + 0x20) = 0;
    }
    Memory::free_static(*(void **)(this + 0x28),false);
  }
  if (*(void **)(this + 0x18) != (void *)0x0) {
    if (*(int *)(this + 0x10) != 0) {
      *(undefined4 *)(this + 0x10) = 0;
    }
    Memory::free_static(*(void **)(this + 0x18),false);
  }
  if (*(long *)(this + 8) != 0) {
    LocalVector<Geometry3D::MeshData::Face,unsigned_int,false,false>::resize
              ((LocalVector<Geometry3D::MeshData::Face,unsigned_int,false,false> *)this,0);
    if (*(void **)(this + 8) != (void *)0x0) {
      Memory::free_static(*(void **)(this + 8),false);
      return;
    }
  }
  return;
}



/* CollisionShape3DGizmoPlugin::CollisionShape3DGizmoPlugin() */

void CollisionShape3DGizmoPlugin::_GLOBAL__sub_I_CollisionShape3DGizmoPlugin(void)

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
/* StringName::~StringName() */

void __thiscall StringName::~StringName(StringName *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* Geometry3D::MeshData::~MeshData() */

void __thiscall Geometry3D::MeshData::~MeshData(MeshData *this)

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
/* StandardMaterial3D::~StandardMaterial3D() */

void __thiscall StandardMaterial3D::~StandardMaterial3D(StandardMaterial3D *this)

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



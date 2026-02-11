
/* GPUParticlesCollision3DGizmoPlugin::get_priority() const */

undefined8 GPUParticlesCollision3DGizmoPlugin::get_priority(void)

{
  return 0xffffffff;
}



/* GPUParticlesCollision3DGizmoPlugin::begin_handle_action(EditorNode3DGizmo const*, int, bool) */

void __thiscall
GPUParticlesCollision3DGizmoPlugin::begin_handle_action
          (GPUParticlesCollision3DGizmoPlugin *this,EditorNode3DGizmo *param_1,int param_2,
          bool param_3)

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



/* GPUParticlesCollision3DGizmoPlugin::has_gizmo(Node3D*) */

bool __thiscall
GPUParticlesCollision3DGizmoPlugin::has_gizmo
          (GPUParticlesCollision3DGizmoPlugin *this,Node3D *param_1)

{
  long lVar1;
  
  if (param_1 == (Node3D *)0x0) {
    return false;
  }
  lVar1 = __dynamic_cast(param_1,&Object::typeinfo,&GPUParticlesCollision3D::typeinfo,0);
  if (lVar1 != 0) {
    return true;
  }
  lVar1 = __dynamic_cast(param_1,&Object::typeinfo,&GPUParticlesAttractor3D::typeinfo,0);
  return lVar1 != 0;
}



/* GPUParticlesCollision3DGizmoPlugin::~GPUParticlesCollision3DGizmoPlugin() */

void __thiscall
GPUParticlesCollision3DGizmoPlugin::~GPUParticlesCollision3DGizmoPlugin
          (GPUParticlesCollision3DGizmoPlugin *this)

{
  Object *pOVar1;
  char cVar2;
  
  *(undefined ***)this = &PTR__initialize_classv_00106b58;
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



/* GPUParticlesCollision3DGizmoPlugin::~GPUParticlesCollision3DGizmoPlugin() */

void __thiscall
GPUParticlesCollision3DGizmoPlugin::~GPUParticlesCollision3DGizmoPlugin
          (GPUParticlesCollision3DGizmoPlugin *this)

{
  Object *pOVar1;
  char cVar2;
  
  *(undefined ***)this = &PTR__initialize_classv_00106b58;
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



/* GPUParticlesCollision3DGizmoPlugin::get_gizmo_name() const */

GPUParticlesCollision3DGizmoPlugin * __thiscall
GPUParticlesCollision3DGizmoPlugin::get_gizmo_name(GPUParticlesCollision3DGizmoPlugin *this)

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



/* GPUParticlesCollision3DGizmoPlugin::set_handle(EditorNode3DGizmo const*, int, bool, Camera3D*,
   Vector2 const&) */

void GPUParticlesCollision3DGizmoPlugin::set_handle
               (EditorNode3DGizmo *param_1,int param_2,bool param_3,Camera3D *param_4,
               Vector2 *param_5)

{
  long *plVar1;
  undefined1 auVar2 [16];
  long lVar3;
  undefined7 in_register_00000011;
  undefined4 in_register_00000034;
  Vector3 *in_R9;
  long in_FS_OFFSET;
  float fVar4;
  double dVar5;
  undefined4 in_XMM1_Da;
  float fVar6;
  Variant *local_148;
  long local_120;
  int local_118 [3];
  undefined8 local_10c;
  undefined4 local_104;
  undefined8 local_100;
  undefined4 local_f8;
  undefined8 local_f4;
  undefined4 local_ec;
  Variant *local_e8 [2];
  undefined8 local_d8;
  undefined4 local_d0;
  undefined8 local_cc;
  undefined4 local_c4;
  int local_b8 [2];
  undefined1 local_b0 [16];
  int local_98 [2];
  undefined1 local_90 [24];
  int local_78 [6];
  undefined8 local_60;
  undefined1 local_58 [16];
  long local_40;
  
  plVar1 = *(long **)(CONCAT44(in_register_00000034,param_2) + 0x1f0);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_d8 = 0;
  local_d0 = 0;
  local_cc = 0;
  local_c4 = 0;
  Gizmo3DHelper::get_segment(*(Camera3D **)(param_1 + 0x450),param_5,in_R9);
  if (plVar1 != (long *)0x0) {
    lVar3 = __dynamic_cast(plVar1,&Object::typeinfo,&GPUParticlesCollisionSphere3D::typeinfo,0);
    if ((lVar3 != 0) ||
       (lVar3 = __dynamic_cast(plVar1,&Object::typeinfo,&GPUParticlesAttractorSphere3D::typeinfo,0),
       lVar3 != 0)) {
      local_100 = 0;
      local_f8 = 0;
      local_f4 = 0;
      local_ec = 0;
      local_98[0] = 0x45800000;
      local_98[1] = 0;
      auVar2._12_4_ = 0;
      auVar2._0_12_ = local_90._4_12_;
      local_90._0_16_ = auVar2 << 0x20;
      local_78[0] = 0;
      local_78[1] = 0;
      local_78[2] = 0;
      Geometry3D::get_closest_points_between_segments
                ((Variant *)local_78,(Variant *)local_98,(Vector3 *)&local_d8,(Vector3 *)&local_cc,
                 (Vector3 *)&local_100,(Vector3 *)&local_f4);
      fVar6 = (float)local_100;
      if (*(char *)(Node3DEditor::singleton + 0xe00) != *(char *)(Node3DEditor::singleton + 0xe01))
      {
        fVar4 = (float)Node3DEditor::get_translate_snap();
        dVar5 = (double)Math::snapped((double)fVar6,(double)fVar4);
        fVar6 = (float)dVar5;
      }
      in_XMM1_Da = SUB84(_LC8,0);
      if ((double)fVar6 < _LC8) {
        fVar6 = _LC5;
      }
      StringName::StringName((StringName *)&local_120,"set_radius",false);
      Variant::Variant((Variant *)local_78,fVar6);
      local_60 = 0;
      local_58 = (undefined1  [16])0x0;
      local_118[0] = 0;
      local_118[1] = 0;
      local_118[2] = 0;
      local_e8[0] = (Variant *)local_78;
      (**(code **)(*plVar1 + 0x68))
                ((Variant *)local_98,plVar1,(StringName *)&local_120,local_e8,1,local_118);
      if (local_118[0] == 0) {
        Variant::Variant((Variant *)local_b8,(Variant *)local_98);
      }
      else {
        local_b8[0] = 0;
        local_b0 = (undefined1  [16])0x0;
      }
      if (Variant::needs_deinit[local_98[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[(int)local_60] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[local_78[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[local_b8[0]] != '\0') {
        Variant::_clear_internal();
      }
      if ((StringName::configured != '\0') && (local_120 != 0)) {
        StringName::unref();
      }
    }
    lVar3 = __dynamic_cast(plVar1,&Object::typeinfo,&GPUParticlesCollisionBox3D::typeinfo,0);
    if ((((lVar3 != 0) ||
         (lVar3 = __dynamic_cast(plVar1,&Object::typeinfo,&GPUParticlesAttractorBox3D::typeinfo,0),
         lVar3 != 0)) ||
        (lVar3 = __dynamic_cast(plVar1,&Object::typeinfo,
                                &GPUParticlesAttractorVectorField3D::typeinfo,0), lVar3 != 0)) ||
       ((lVar3 = __dynamic_cast(plVar1,&Object::typeinfo,&GPUParticlesCollisionSDF3D::typeinfo,0),
        lVar3 != 0 ||
        (lVar3 = __dynamic_cast(plVar1,&Object::typeinfo,
                                &GPUParticlesCollisionHeightField3D::typeinfo,0), lVar3 != 0)))) {
      StringName::StringName((StringName *)&local_120,"get_size",false);
      local_90._0_16_ = (undefined1  [16])0x0;
      local_98[0] = 0;
      local_98[1] = 0;
      local_118[0] = 0;
      local_118[1] = 0;
      local_118[2] = 0;
      (**(code **)(*plVar1 + 0x68))
                ((Variant *)local_78,plVar1,(StringName *)&local_120,0,0,local_118);
      if (local_118[0] == 0) {
        Variant::Variant((Variant *)local_b8,(Variant *)local_78);
      }
      else {
        local_b0 = (undefined1  [16])0x0;
        local_b8[0] = 0;
      }
      local_148 = (Variant *)local_b8;
      if (Variant::needs_deinit[local_78[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[local_98[0]] != '\0') {
        Variant::_clear_internal();
      }
      local_10c = Variant::operator_cast_to_Vector3(local_148);
      local_104 = in_XMM1_Da;
      if (Variant::needs_deinit[local_b8[0]] != '\0') {
        Variant::_clear_internal();
      }
      if ((StringName::configured != '\0') && (local_120 != 0)) {
        StringName::unref();
      }
      local_100 = 0;
      local_f8 = 0;
      Gizmo3DHelper::box_set_handle
                (*(Vector3 **)(param_1 + 0x450),(int)&local_d8,
                 (Vector3 *)(CONCAT71(in_register_00000011,param_3) & 0xffffffff),
                 (Vector3 *)&local_10c);
      StringName::StringName((StringName *)&local_120,"set_size",false);
      local_f4 = local_10c;
      local_ec = local_104;
      Variant::Variant((Variant *)local_78,(Vector3 *)&local_f4);
      local_58 = (undefined1  [16])0x0;
      local_60 = 0;
      local_118[0] = 0;
      local_118[1] = 0;
      local_118[2] = 0;
      local_e8[0] = (Variant *)local_78;
      (**(code **)(*plVar1 + 0x68))
                ((Variant *)local_98,plVar1,(StringName *)&local_120,local_e8,1,local_118);
      if (local_118[0] == 0) {
        Variant::Variant(local_148,(Variant *)local_98);
      }
      else {
        local_b8[0] = 0;
        local_b0 = (undefined1  [16])0x0;
      }
      if (Variant::needs_deinit[local_98[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[(int)local_60] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[local_78[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[local_b8[0]] != '\0') {
        Variant::_clear_internal();
      }
      if ((StringName::configured != '\0') && (local_120 != 0)) {
        StringName::unref();
      }
      Node3D::set_global_position((Vector3 *)plVar1);
    }
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
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



/* GPUParticlesCollision3DGizmoPlugin::get_handle_name(EditorNode3DGizmo const*, int, bool) const */

EditorNode3DGizmo *
GPUParticlesCollision3DGizmoPlugin::get_handle_name
          (EditorNode3DGizmo *param_1,int param_2,bool param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined7 in_register_00000011;
  long in_FS_OFFSET;
  
  lVar3 = *(long *)(CONCAT71(in_register_00000011,param_3) + 0x1f0);
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (lVar3 == 0) {
LAB_00100e08:
    *(undefined8 *)param_1 = 0;
    String::parse_latin1((String *)param_1,"");
  }
  else {
    lVar2 = __dynamic_cast(lVar3,&Object::typeinfo,&GPUParticlesCollisionSphere3D::typeinfo,0);
    if (lVar2 == 0) {
      lVar2 = __dynamic_cast(lVar3,&Object::typeinfo,&GPUParticlesAttractorSphere3D::typeinfo,0);
      if (lVar2 == 0) {
        lVar2 = __dynamic_cast(lVar3,&Object::typeinfo,&GPUParticlesCollisionBox3D::typeinfo,0);
        if (lVar2 == 0) {
          lVar2 = __dynamic_cast(lVar3,&Object::typeinfo,&GPUParticlesAttractorBox3D::typeinfo,0);
          if (lVar2 == 0) {
            lVar2 = __dynamic_cast(lVar3,&Object::typeinfo,
                                   &GPUParticlesAttractorVectorField3D::typeinfo,0);
            if (lVar2 == 0) {
              lVar2 = __dynamic_cast(lVar3,&Object::typeinfo,&GPUParticlesCollisionSDF3D::typeinfo,0
                                    );
              if (lVar2 == 0) {
                lVar3 = __dynamic_cast(lVar3,&Object::typeinfo,
                                       &GPUParticlesCollisionHeightField3D::typeinfo,0);
                if (lVar3 == 0) goto LAB_00100e08;
              }
            }
          }
        }
        Gizmo3DHelper::box_get_handle_name((int)param_1);
        goto LAB_00100d2f;
      }
    }
    *(undefined8 *)param_1 = 0;
    String::parse_latin1((StrRange *)param_1);
  }
LAB_00100d2f:
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GPUParticlesCollision3DGizmoPlugin::get_handle_value(EditorNode3DGizmo const*, int, bool) const
    */

EditorNode3DGizmo *
GPUParticlesCollision3DGizmoPlugin::get_handle_value
          (EditorNode3DGizmo *param_1,int param_2,bool param_3)

{
  long *plVar1;
  long lVar2;
  undefined7 in_register_00000011;
  long in_FS_OFFSET;
  undefined1 auVar3 [12];
  long local_80;
  int local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined8 local_68;
  undefined1 local_60 [16];
  int local_48 [6];
  long local_30;
  
  plVar1 = *(long **)(CONCAT71(in_register_00000011,param_3) + 0x1f0);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (plVar1 == (long *)0x0) {
LAB_001010c4:
    *(undefined4 *)param_1 = 0;
    *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  }
  else {
    lVar2 = __dynamic_cast(plVar1,&Object::typeinfo,&GPUParticlesCollisionSphere3D::typeinfo,0);
    if ((lVar2 == 0) &&
       (lVar2 = __dynamic_cast(plVar1,&Object::typeinfo,&GPUParticlesAttractorSphere3D::typeinfo,0),
       lVar2 == 0)) {
      lVar2 = __dynamic_cast(plVar1,&Object::typeinfo,&GPUParticlesCollisionBox3D::typeinfo,0);
      if ((((lVar2 == 0) &&
           (lVar2 = __dynamic_cast(plVar1,&Object::typeinfo,&GPUParticlesAttractorBox3D::typeinfo,0)
           , lVar2 == 0)) &&
          (lVar2 = __dynamic_cast(plVar1,&Object::typeinfo,
                                  &GPUParticlesAttractorVectorField3D::typeinfo,0), lVar2 == 0)) &&
         ((lVar2 = __dynamic_cast(plVar1,&Object::typeinfo,&GPUParticlesCollisionSDF3D::typeinfo,0),
          lVar2 == 0 &&
          (lVar2 = __dynamic_cast(plVar1,&Object::typeinfo,
                                  &GPUParticlesCollisionHeightField3D::typeinfo,0), lVar2 == 0))))
      goto LAB_001010c4;
      StringName::StringName((StringName *)&local_78,"get_size",false);
      Object::call<>((StringName *)local_48);
      auVar3 = Variant::operator_cast_to_Vector3((Variant *)local_48);
      local_68 = auVar3._0_8_;
      local_60._0_4_ = auVar3._8_4_;
      Variant::Variant((Variant *)param_1,(Vector3 *)&local_68);
      if (Variant::needs_deinit[local_48[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (StringName::configured == '\0') goto LAB_00100f37;
      local_80 = CONCAT44(uStack_74,local_78);
    }
    else {
      StringName::StringName((StringName *)&local_80,"get_radius",false);
      local_60 = (undefined1  [16])0x0;
      local_68 = 0;
      local_78 = 0;
      uStack_74 = 0;
      uStack_70 = 0;
      (**(code **)(*plVar1 + 0x68))
                ((Variant *)local_48,plVar1,(StringName *)&local_80,0,0,&local_78);
      if (local_78 == 0) {
        Variant::Variant((Variant *)param_1,(Variant *)local_48);
      }
      else {
        *(undefined4 *)param_1 = 0;
        *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
      }
      if (Variant::needs_deinit[local_48[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[(int)local_68] != '\0') {
        Variant::_clear_internal();
      }
      if (StringName::configured == '\0') goto LAB_00100f37;
    }
    if (local_80 != 0) {
      StringName::unref();
    }
  }
LAB_00100f37:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* GPUParticlesCollision3DGizmoPlugin::commit_handle(EditorNode3DGizmo const*, int, bool, Variant
   const&, bool) */

void __thiscall
GPUParticlesCollision3DGizmoPlugin::commit_handle
          (GPUParticlesCollision3DGizmoPlugin *this,EditorNode3DGizmo *param_1,int param_2,
          bool param_3,Variant *param_4,bool param_5)

{
  StringName *pSVar1;
  String *pSVar2;
  long lVar3;
  Object *pOVar4;
  long in_FS_OFFSET;
  undefined8 local_110;
  long local_108;
  long local_100;
  int local_f8;
  undefined4 uStack_f4;
  undefined4 local_f0;
  undefined4 uStack_ec;
  Variant *local_e8 [2];
  int local_d8 [8];
  Variant *local_b8;
  undefined1 local_b0 [16];
  int local_98 [8];
  int local_78 [6];
  undefined8 local_60;
  undefined1 local_58 [16];
  long local_40;
  
  pSVar1 = *(StringName **)(param_1 + 0x1f0);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (pSVar1 != (StringName *)0x0) {
    lVar3 = __dynamic_cast(pSVar1,&Object::typeinfo,&GPUParticlesCollisionSphere3D::typeinfo,0);
    if ((lVar3 != 0) ||
       (lVar3 = __dynamic_cast(pSVar1,&Object::typeinfo,&GPUParticlesAttractorSphere3D::typeinfo,0),
       lVar3 != 0)) {
      if (param_5) {
        Variant::Variant((Variant *)local_d8,param_4);
        StringName::StringName((StringName *)&local_100,"set_radius",false);
        Variant::Variant((Variant *)local_78,(Variant *)local_d8);
        local_60 = 0;
        local_58 = (undefined1  [16])0x0;
        local_f8 = 0;
        uStack_f4 = 0;
        local_f0 = 0;
        local_e8[0] = (Variant *)local_78;
        (**(code **)(*(long *)pSVar1 + 0x68))
                  ((Variant *)local_98,pSVar1,(StringName *)&local_100,local_e8,1,&local_f8);
        if (local_f8 == 0) {
          Variant::Variant((Variant *)&local_b8,(Variant *)local_98);
        }
        else {
          local_b8 = (Variant *)((ulong)local_b8 & 0xffffffff00000000);
          local_b0 = (undefined1  [16])0x0;
        }
        if (Variant::needs_deinit[local_98[0]] != '\0') {
          Variant::_clear_internal();
        }
        if (Variant::needs_deinit[(int)local_60] != '\0') {
          Variant::_clear_internal();
        }
        if (Variant::needs_deinit[local_78[0]] != '\0') {
          Variant::_clear_internal();
        }
        if (Variant::needs_deinit[(int)local_b8] != '\0') {
          Variant::_clear_internal();
        }
        if ((StringName::configured != '\0') && (local_100 != 0)) {
          StringName::unref();
        }
        if (Variant::needs_deinit[local_d8[0]] != '\0') {
          Variant::_clear_internal();
        }
        goto LAB_001014b8;
      }
      pOVar4 = (Object *)EditorUndoRedoManager::get_singleton();
      local_100 = 0;
      local_f0 = 0;
      uStack_ec = 0;
      local_f8 = 0x103c60;
      uStack_f4 = 0;
      String::parse_latin1((StrRange *)&local_100);
      local_f8 = 0x103c6c;
      uStack_f4 = 0;
      local_108 = 0;
      local_f0 = 0xd;
      uStack_ec = 0;
      String::parse_latin1((StrRange *)&local_108);
      TTR((String *)&local_f8,(String *)&local_108);
      EditorUndoRedoManager::create_action(pOVar4,(String *)&local_f8,0,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
      StringName::StringName((StringName *)&local_100,"get_radius",false);
      Object::call<>((StringName *)local_98);
      StringName::StringName((StringName *)&local_f8,"set_radius",false);
      Variant::Variant((Variant *)local_78,(Variant *)local_98);
      local_60 = 0;
      local_58 = (undefined1  [16])0x0;
      local_b8 = (Variant *)local_78;
      EditorUndoRedoManager::add_do_methodp(pOVar4,pSVar1,(Variant **)&local_f8,(int)&local_b8);
      if (Variant::needs_deinit[(int)local_60] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[local_78[0]] != '\0') {
        Variant::_clear_internal();
      }
      if ((StringName::configured != '\0') && (CONCAT44(uStack_f4,local_f8) != 0)) {
        StringName::unref();
      }
      if (Variant::needs_deinit[local_98[0]] != '\0') {
        Variant::_clear_internal();
      }
      if ((StringName::configured != '\0') && (local_100 != 0)) {
        StringName::unref();
      }
      Variant::Variant((Variant *)local_98,param_4);
      StringName::StringName((StringName *)&local_f8,"set_radius",false);
      Variant::Variant((Variant *)local_78,(Variant *)local_98);
      local_60 = 0;
      local_58 = (undefined1  [16])0x0;
      local_b8 = (Variant *)local_78;
      EditorUndoRedoManager::add_undo_methodp(pOVar4,pSVar1,(Variant **)&local_f8,(int)&local_b8);
      if (Variant::needs_deinit[(int)local_60] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[local_78[0]] != '\0') {
        Variant::_clear_internal();
      }
      if ((StringName::configured != '\0') && (CONCAT44(uStack_f4,local_f8) != 0)) {
        StringName::unref();
      }
      if (Variant::needs_deinit[local_98[0]] != '\0') {
        Variant::_clear_internal();
      }
      EditorUndoRedoManager::commit_action(SUB81(pOVar4,0));
    }
    lVar3 = __dynamic_cast(pSVar1,&Object::typeinfo,&GPUParticlesCollisionBox3D::typeinfo,0);
    if ((((lVar3 != 0) ||
         (lVar3 = __dynamic_cast(pSVar1,&Object::typeinfo,&GPUParticlesAttractorBox3D::typeinfo,0),
         lVar3 != 0)) ||
        (lVar3 = __dynamic_cast(pSVar1,&Object::typeinfo,
                                &GPUParticlesAttractorVectorField3D::typeinfo,0), lVar3 != 0)) ||
       ((lVar3 = __dynamic_cast(pSVar1,&Object::typeinfo,&GPUParticlesCollisionSDF3D::typeinfo,0),
        lVar3 != 0 ||
        (lVar3 = __dynamic_cast(pSVar1,&Object::typeinfo,
                                &GPUParticlesCollisionHeightField3D::typeinfo,0), lVar3 != 0)))) {
      pSVar2 = *(String **)(this + 0x450);
      StringName::StringName((StringName *)&local_100,"size",false);
      StringName::StringName((StringName *)&local_108,"global_position",false);
      local_110 = 0;
      local_f8 = 0x103c8f;
      uStack_f4 = 0;
      local_f0 = 0x15;
      uStack_ec = 0;
      String::parse_latin1((StrRange *)&local_110);
      Gizmo3DHelper::box_commit_handle
                (pSVar2,SUB81((StrRange *)&local_110,0),(Object *)(ulong)param_5,(Object *)pSVar1,
                 (StringName *)0x0,(StringName *)&local_108);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_110);
      if (((StringName::configured != '\0') &&
          ((local_108 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
         (local_100 != 0)) {
        StringName::unref();
      }
    }
  }
LAB_001014b8:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* GPUParticlesCollision3DGizmoPlugin::GPUParticlesCollision3DGizmoPlugin() */

void __thiscall
GPUParticlesCollision3DGizmoPlugin::GPUParticlesCollision3DGizmoPlugin
          (GPUParticlesCollision3DGizmoPlugin *this)

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
  undefined4 in_XMM1_Da;
  undefined8 local_98;
  Object *local_90;
  char *local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  int local_58 [6];
  long local_40;
  
  bVar6 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_70 = in_XMM1_Da;
  EditorNode3DGizmoPlugin::EditorNode3DGizmoPlugin((EditorNode3DGizmoPlugin *)this);
  *(undefined8 *)(this + 0x450) = 0;
  *(undefined ***)this = &PTR__initialize_classv_00106b58;
  this_00 = (RefCounted *)operator_new(0x1c8,"");
  pRVar3 = this_00;
  for (lVar2 = 0x39; lVar2 != 0; lVar2 = lVar2 + -1) {
    *(undefined8 *)pRVar3 = 0;
    pRVar3 = pRVar3 + (ulong)bVar6 * -0x10 + 8;
  }
  RefCounted::RefCounted(this_00);
  *(undefined ***)this_00 = &PTR__initialize_classv_001069f8;
  *(undefined4 *)(this_00 + 0x180) = 0;
  *(undefined4 *)(this_00 + 0x1b8) = 0x3f800000;
  *(undefined8 *)(this_00 + 0x1bc) = 0;
  *(undefined4 *)(this_00 + 0x1c4) = 0;
  *(undefined1 (*) [16])(this_00 + 0x188) = (undefined1  [16])0x0;
  auVar7 = ZEXT416(_LC28);
  *(undefined1 (*) [16])(this_00 + 0x198) = auVar7;
  *(undefined1 (*) [16])(this_00 + 0x1a8) = auVar7;
  postinitialize_handler((Object *)this_00);
  cVar1 = RefCounted::init_ref();
  if (cVar1 == '\0') {
    pOVar5 = *(Object **)(this + 0x450);
    if (pOVar5 == (Object *)0x0) goto LAB_001018cc;
    *(undefined8 *)(this + 0x450) = 0;
    cVar1 = RefCounted::unreference();
    if (cVar1 == '\0') goto LAB_001018cc;
    this_00 = (RefCounted *)0x0;
    cVar1 = predelete_handler(pOVar5);
    if (cVar1 == '\0') goto LAB_001018cc;
LAB_00101c23:
    (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
    Memory::free_static(pOVar5,false);
    pOVar4 = (Object *)this_00;
    if (this_00 == (RefCounted *)0x0) goto LAB_001018cc;
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
         (cVar1 = predelete_handler(pOVar5), cVar1 != '\0')) goto LAB_00101c23;
    }
  }
  cVar1 = RefCounted::unreference();
  if ((cVar1 != '\0') && (cVar1 = predelete_handler(pOVar4), cVar1 != '\0')) {
    (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
    Memory::free_static(pOVar4,false);
  }
LAB_001018cc:
  local_90 = (Object *)0x0;
  local_88 = "editors/3d_gizmos/gizmo_colors/particle_attractor";
  local_80 = 0x31;
  String::parse_latin1((StrRange *)&local_90);
  _EDITOR_GET((String *)local_58);
  local_78 = Variant::operator_cast_to_Color((Variant *)local_58);
  local_60 = local_70;
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  local_88 = "shape_material_attractor";
  local_90 = (Object *)0x0;
  local_80 = 0x18;
  String::parse_latin1((StrRange *)&local_90);
  EditorNode3DGizmoPlugin::create_material
            ((String *)this,(StrRange *)&local_90,SUB81(&local_78,0),false,false);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  local_88 = "shape_material_attractor_internal";
  _local_70 = CONCAT44(0x3e19999a,local_70);
  local_90 = (Object *)0x0;
  local_80 = 0x21;
  String::parse_latin1((StrRange *)&local_90);
  EditorNode3DGizmoPlugin::create_material
            ((String *)this,(StrRange *)&local_90,SUB81(&local_78,0),false,false);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  local_88 = "editors/3d_gizmos/gizmo_colors/particle_collision";
  local_90 = (Object *)0x0;
  local_80 = 0x31;
  String::parse_latin1((StrRange *)&local_90);
  _EDITOR_GET((String *)local_58);
  local_68 = Variant::operator_cast_to_Color((Variant *)local_58);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  local_88 = "shape_material_collision";
  local_90 = (Object *)0x0;
  local_80 = 0x18;
  String::parse_latin1((StrRange *)&local_90);
  EditorNode3DGizmoPlugin::create_material
            ((String *)this,(StrRange *)&local_90,SUB81(&local_68,0),false,false);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  local_88 = "shape_material_collision_internal";
  _local_60 = CONCAT44(0x3e19999a,local_60);
  local_90 = (Object *)0x0;
  local_80 = 0x21;
  String::parse_latin1((StrRange *)&local_90);
  EditorNode3DGizmoPlugin::create_material
            ((String *)this,(StrRange *)&local_90,SUB81(&local_68,0),false,false);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  local_88 = "handles";
  local_90 = (Object *)0x0;
  local_98 = 0;
  local_80 = 7;
  String::parse_latin1((StrRange *)&local_98);
  EditorNode3DGizmoPlugin::create_handle_material((String *)this,SUB81(&local_98,0),(Ref *)0x0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  if (((local_90 != (Object *)0x0) &&
      (cVar1 = RefCounted::unreference(), pOVar5 = local_90, cVar1 != '\0')) &&
     (cVar1 = predelete_handler(local_90), cVar1 != '\0')) {
    (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
    Memory::free_static(pOVar5,false);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
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



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GPUParticlesCollision3DGizmoPlugin::redraw(EditorNode3DGizmo*) */

void __thiscall
GPUParticlesCollision3DGizmoPlugin::redraw
          (GPUParticlesCollision3DGizmoPlugin *this,EditorNode3DGizmo *param_1)

{
  long *plVar1;
  EditorNode3DGizmo *pEVar2;
  char cVar3;
  uint uVar4;
  long lVar5;
  Object *pOVar6;
  Object *pOVar7;
  long lVar8;
  int iVar9;
  ulong uVar10;
  int iVar11;
  uint uVar12;
  Vector3 *pVVar13;
  long in_FS_OFFSET;
  bool bVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined8 local_160;
  String *local_120;
  Ref *local_108;
  float local_f0;
  float local_ec [3];
  Object *local_e0;
  Object *local_d8;
  Object *local_d0;
  Ref local_c8 [8];
  long local_c0;
  undefined8 local_b8;
  long local_b0;
  EditorNode3DGizmo *local_a8;
  long local_a0;
  Object *local_98;
  long local_90;
  float fStack_88;
  undefined8 local_84;
  float local_7c;
  undefined8 local_78;
  float local_70;
  undefined1 local_6c [8];
  float local_64;
  float local_58 [6];
  long local_40;
  
  lVar8 = *(long *)(param_1 + 0x1f0);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  (**(code **)(*(long *)param_1 + 0x160))(param_1);
  local_e0 = (Object *)0x0;
  local_d8 = (Object *)0x0;
  local_a8 = param_1;
  if ((lVar8 == 0) ||
     (lVar5 = __dynamic_cast(lVar8,&Object::typeinfo,&GPUParticlesAttractor3D::typeinfo,0),
     lVar5 == 0)) {
    cVar3 = RefCounted::init_ref();
    if (cVar3 == '\0') {
      local_a8 = (EditorNode3DGizmo *)0x0;
    }
    local_b8 = 0;
    String::parse_latin1((String *)&local_b8,"shape_material_collision");
    EditorNode3DGizmoPlugin::get_material((String *)&local_98,(Ref *)this);
    pOVar7 = local_e0;
    if (local_98 == (Object *)0x0) {
      if (local_e0 != (Object *)0x0) {
        local_e0 = (Object *)0x0;
        goto LAB_001032c1;
      }
    }
    else {
      pOVar6 = (Object *)__dynamic_cast(local_98,&Object::typeinfo,&Material::typeinfo,0);
      pOVar7 = local_e0;
      if (local_e0 != pOVar6) {
        if (pOVar6 == (Object *)0x0) {
          bVar14 = local_e0 != (Object *)0x0;
          local_e0 = pOVar6;
          if (bVar14) goto LAB_001032c1;
        }
        else {
          local_e0 = pOVar6;
          cVar3 = RefCounted::reference();
          if (cVar3 == '\0') {
            local_e0 = (Object *)0x0;
          }
          if (pOVar7 != (Object *)0x0) {
LAB_001032c1:
            cVar3 = RefCounted::unreference();
            if ((cVar3 != '\0') && (cVar3 = predelete_handler(pOVar7), cVar3 != '\0')) {
              (**(code **)(*(long *)pOVar7 + 0x140))(pOVar7);
              Memory::free_static(pOVar7,false);
            }
          }
          if (local_98 == (Object *)0x0) goto LAB_001030cd;
        }
      }
      cVar3 = RefCounted::unreference();
      pOVar7 = local_98;
      if ((cVar3 != '\0') && (cVar3 = predelete_handler(local_98), cVar3 != '\0')) {
        (**(code **)(*(long *)pOVar7 + 0x140))(pOVar7);
        Memory::free_static(pOVar7,false);
      }
    }
LAB_001030cd:
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
    if (((local_a8 != (EditorNode3DGizmo *)0x0) &&
        (cVar3 = RefCounted::unreference(), pEVar2 = local_a8, cVar3 != '\0')) &&
       (cVar3 = predelete_handler((Object *)local_a8), cVar3 != '\0')) {
      (**(code **)(*(long *)pEVar2 + 0x140))(pEVar2);
      Memory::free_static(pEVar2,false);
    }
    local_a8 = param_1;
    cVar3 = RefCounted::init_ref();
    if (cVar3 == '\0') {
      local_a8 = (EditorNode3DGizmo *)0x0;
    }
    local_b8 = 0;
    String::parse_latin1((String *)&local_b8,"shape_material_collision_internal");
    EditorNode3DGizmoPlugin::get_material((String *)&local_98,(Ref *)this);
    pOVar7 = local_d8;
    if (local_98 != (Object *)0x0) {
      pOVar6 = (Object *)__dynamic_cast(local_98,&Object::typeinfo,&Material::typeinfo,0);
      pOVar7 = local_d8;
      if (local_d8 != pOVar6) {
        if (pOVar6 == (Object *)0x0) {
          bVar14 = local_d8 != (Object *)0x0;
          local_d8 = pOVar6;
          if (bVar14) goto LAB_0010344b;
        }
        else {
          local_d8 = pOVar6;
          cVar3 = RefCounted::reference();
          if (cVar3 == '\0') {
            local_d8 = (Object *)0x0;
          }
          if (pOVar7 != (Object *)0x0) {
LAB_0010344b:
            cVar3 = RefCounted::unreference();
            if ((cVar3 != '\0') && (cVar3 = predelete_handler(pOVar7), cVar3 != '\0')) {
              (**(code **)(*(long *)pOVar7 + 0x140))(pOVar7);
              Memory::free_static(pOVar7,false);
            }
          }
          if (local_98 == (Object *)0x0) goto LAB_0010203f;
        }
      }
      cVar3 = RefCounted::unreference();
      pOVar7 = local_98;
      goto joined_r0x001031c9;
    }
    if (local_d8 != (Object *)0x0) {
      local_d8 = (Object *)0x0;
      goto LAB_0010344b;
    }
  }
  else {
    cVar3 = RefCounted::init_ref();
    if (cVar3 == '\0') {
      local_a8 = (EditorNode3DGizmo *)0x0;
    }
    local_b8 = 0;
    local_98 = (Object *)0x103ca5;
    local_90 = 0x18;
    String::parse_latin1((StrRange *)&local_b8);
    EditorNode3DGizmoPlugin::get_material((String *)&local_98,(Ref *)this);
    pOVar7 = local_e0;
    if (local_98 == (Object *)0x0) {
      if (local_e0 != (Object *)0x0) {
        local_e0 = (Object *)0x0;
        goto LAB_00102cb4;
      }
    }
    else {
      pOVar6 = (Object *)__dynamic_cast(local_98,&Object::typeinfo,&Material::typeinfo,0);
      pOVar7 = local_e0;
      if (local_e0 != pOVar6) {
        if (pOVar6 == (Object *)0x0) {
          bVar14 = local_e0 != (Object *)0x0;
          local_e0 = pOVar6;
          if (bVar14) goto LAB_00102cb4;
        }
        else {
          local_e0 = pOVar6;
          cVar3 = RefCounted::reference();
          if (cVar3 == '\0') {
            local_e0 = (Object *)0x0;
          }
          if (pOVar7 != (Object *)0x0) {
LAB_00102cb4:
            cVar3 = RefCounted::unreference();
            if ((cVar3 != '\0') && (cVar3 = predelete_handler(pOVar7), cVar3 != '\0')) {
              (**(code **)(*(long *)pOVar7 + 0x140))(pOVar7);
              Memory::free_static(pOVar7,false);
            }
          }
          if (local_98 == (Object *)0x0) goto LAB_00101f31;
        }
      }
      cVar3 = RefCounted::unreference();
      pOVar7 = local_98;
      if ((cVar3 != '\0') && (cVar3 = predelete_handler(local_98), cVar3 != '\0')) {
        (**(code **)(*(long *)pOVar7 + 0x140))(pOVar7);
        Memory::free_static(pOVar7,false);
      }
    }
LAB_00101f31:
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
    if (((local_a8 != (EditorNode3DGizmo *)0x0) &&
        (cVar3 = RefCounted::unreference(), pEVar2 = local_a8, cVar3 != '\0')) &&
       (cVar3 = predelete_handler((Object *)local_a8), cVar3 != '\0')) {
      (**(code **)(*(long *)pEVar2 + 0x140))(pEVar2);
      Memory::free_static(pEVar2,false);
    }
    local_a8 = param_1;
    cVar3 = RefCounted::init_ref();
    if (cVar3 == '\0') {
      local_a8 = (EditorNode3DGizmo *)0x0;
    }
    local_b8 = 0;
    local_98 = (Object *)0x104b78;
    local_90 = 0x21;
    String::parse_latin1((StrRange *)&local_b8);
    EditorNode3DGizmoPlugin::get_material((String *)&local_98,(Ref *)this);
    pOVar7 = local_d8;
    if (local_98 == (Object *)0x0) {
      if (local_d8 != (Object *)0x0) {
        local_d8 = (Object *)0x0;
        goto LAB_00102c5b;
      }
    }
    else {
      pOVar6 = (Object *)__dynamic_cast(local_98,&Object::typeinfo,&Material::typeinfo,0);
      pOVar7 = local_d8;
      if (local_d8 != pOVar6) {
        if (pOVar6 == (Object *)0x0) {
          bVar14 = local_d8 != (Object *)0x0;
          local_d8 = pOVar6;
          if (bVar14) goto LAB_00102c5b;
        }
        else {
          local_d8 = pOVar6;
          cVar3 = RefCounted::reference();
          if (cVar3 == '\0') {
            local_d8 = (Object *)0x0;
          }
          if (pOVar7 != (Object *)0x0) {
LAB_00102c5b:
            cVar3 = RefCounted::unreference();
            if ((cVar3 != '\0') && (cVar3 = predelete_handler(pOVar7), cVar3 != '\0')) {
              (**(code **)(*(long *)pOVar7 + 0x140))(pOVar7);
              Memory::free_static(pOVar7,false);
            }
          }
          if (local_98 == (Object *)0x0) goto LAB_0010203f;
        }
      }
      cVar3 = RefCounted::unreference();
      pOVar7 = local_98;
joined_r0x001031c9:
      local_98 = pOVar7;
      if ((cVar3 != '\0') && (cVar3 = predelete_handler(pOVar7), cVar3 != '\0')) {
        (**(code **)(*(long *)pOVar7 + 0x140))(pOVar7);
        Memory::free_static(pOVar7,false);
      }
    }
  }
LAB_0010203f:
  local_108 = (Ref *)&local_a8;
  local_120 = (String *)&local_98;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  if (((local_a8 != (EditorNode3DGizmo *)0x0) &&
      (cVar3 = RefCounted::unreference(), pEVar2 = local_a8, cVar3 != '\0')) &&
     (cVar3 = predelete_handler((Object *)local_a8), cVar3 != '\0')) {
    (**(code **)(*(long *)pEVar2 + 0x140))(pEVar2);
    Memory::free_static(pEVar2,false);
  }
  local_a8 = (EditorNode3DGizmo *)0x0;
  local_98 = (Object *)0x103cd7;
  local_b8 = 0;
  local_90 = 7;
  String::parse_latin1((StrRange *)&local_b8);
  EditorNode3DGizmoPlugin::get_material(local_120,(Ref *)this);
  local_d0 = (Object *)0x0;
  if (local_98 != (Object *)0x0) {
    pOVar7 = (Object *)__dynamic_cast(local_98,&Object::typeinfo,&Material::typeinfo);
    if (pOVar7 != (Object *)0x0) {
      local_d0 = pOVar7;
      cVar3 = RefCounted::reference();
      if (cVar3 == '\0') {
        local_d0 = (Object *)0x0;
      }
      if (local_98 == (Object *)0x0) goto LAB_0010212c;
    }
    cVar3 = RefCounted::unreference();
    pOVar7 = local_98;
    if ((cVar3 != '\0') && (cVar3 = predelete_handler(local_98), cVar3 != '\0')) {
      (**(code **)(*(long *)pOVar7 + 0x140))(pOVar7);
      Memory::free_static(pOVar7,false);
    }
  }
LAB_0010212c:
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  if (((local_a8 != (EditorNode3DGizmo *)0x0) &&
      (cVar3 = RefCounted::unreference(), pEVar2 = local_a8, cVar3 != '\0')) &&
     (cVar3 = predelete_handler((Object *)local_a8), cVar3 != '\0')) {
    (**(code **)(*(long *)pEVar2 + 0x140))(pEVar2);
    Memory::free_static(pEVar2,false);
  }
  if (lVar8 != 0) {
    lVar5 = __dynamic_cast(lVar8,&Object::typeinfo,&GPUParticlesCollisionSphere3D::typeinfo);
    if ((lVar5 != 0) ||
       (lVar5 = __dynamic_cast(lVar8,&Object::typeinfo,&GPUParticlesAttractorSphere3D::typeinfo),
       lVar5 != 0)) {
      StringName::StringName((StringName *)local_120,"get_radius",false);
      Object::call<>((StringName *)local_58);
      fVar15 = Variant::operator_cast_to_float((Variant *)local_58);
      if (Variant::needs_deinit[(int)local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      if ((StringName::configured != '\0') && (local_98 != (Object *)0x0)) {
        StringName::unref();
      }
      iVar9 = 0;
      local_c0 = 0;
      fVar16 = (float)_LC48;
      fVar18 = _LC48._4_4_;
      fVar20 = (float)_LC47;
      fVar21 = _LC47._4_4_;
      while( true ) {
        iVar9 = iVar9 + 1;
        local_58[1] = 0.0;
        fVar20 = fVar20 * fVar15;
        fVar21 = fVar21 * fVar15;
        fVar16 = fVar16 * fVar15;
        fVar18 = fVar18 * fVar15;
        local_58[0] = fVar16;
        local_58[2] = fVar18;
        Vector<Vector3>::push_back(fVar16,fVar18,local_c8);
        local_58[1] = 0.0;
        local_58[0] = fVar20;
        local_58[2] = fVar21;
        Vector<Vector3>::push_back(fVar20,fVar21,local_c8);
        local_58[0] = 0.0;
        local_58[1] = fVar16;
        local_58[2] = fVar18;
        Vector<Vector3>::push_back((ulong)(uint)fVar16 << 0x20,fVar18,local_c8);
        local_58[0] = 0.0;
        local_58[1] = fVar20;
        local_58[2] = fVar21;
        Vector<Vector3>::push_back((ulong)(uint)fVar20 << 0x20,fVar21,local_c8);
        local_58[2] = 0.0;
        local_58[0] = fVar16;
        local_58[1] = fVar18;
        Vector<Vector3>::push_back(CONCAT44(fVar18,fVar16),0,local_c8);
        local_58[2] = 0.0;
        local_58[0] = fVar20;
        local_58[1] = fVar21;
        Vector<Vector3>::push_back(CONCAT44(fVar21,fVar20),0,local_c8);
        if (iVar9 == 0x169) break;
        sincosf(_LC50 * (float)iVar9,local_ec,&local_f0);
        fVar16 = local_ec[0];
        fVar18 = local_f0;
        sincosf(_LC50 * ((float)iVar9 + _LC28),local_ec,&local_f0);
        fVar20 = local_ec[0];
        fVar21 = local_f0;
      }
      iVar9 = 1;
      local_b0 = 0;
      local_160 = _LC49;
      fVar18 = (float)_LC48;
      fVar16 = _LC48._4_4_;
      while( true ) {
        iVar9 = iVar9 + 1;
        local_58[1] = 0.0;
        fVar17 = fVar18 * fVar15;
        fVar19 = fVar16 * fVar15;
        fVar18 = (float)local_160;
        fVar16 = (float)((ulong)local_160 >> 0x20);
        fVar20 = fVar16 * fVar15;
        fVar21 = fVar18 * fVar15;
        local_58[0] = fVar17;
        local_58[2] = fVar19;
        Vector<Vector3>::push_back(fVar17,fVar19,(CowData<char32_t> *)&local_b8);
        local_58[1] = 0.0;
        local_58[0] = fVar21;
        local_58[2] = fVar20;
        Vector<Vector3>::push_back(fVar21,fVar20,(CowData<char32_t> *)&local_b8);
        local_58[0] = 0.0;
        local_58[1] = fVar17;
        local_58[2] = fVar19;
        Vector<Vector3>::push_back
                  ((ulong)(uint)fVar17 << 0x20,fVar19,(CowData<char32_t> *)&local_b8);
        local_58[0] = 0.0;
        local_58[1] = fVar21;
        local_58[2] = fVar20;
        Vector<Vector3>::push_back
                  ((ulong)(uint)fVar21 << 0x20,fVar20,(CowData<char32_t> *)&local_b8);
        local_58[2] = 0.0;
        local_58[0] = fVar17;
        local_58[1] = fVar19;
        Vector<Vector3>::push_back(CONCAT44(fVar19,fVar17),0,(CowData<char32_t> *)&local_b8);
        local_58[2] = 0.0;
        local_58[0] = fVar21;
        local_58[1] = fVar20;
        Vector<Vector3>::push_back(CONCAT44(fVar20,fVar21),0,(CowData<char32_t> *)&local_b8);
        if (iVar9 == 0x41) break;
        sincosf((float)((double)iVar9 * __LC51),local_ec,&local_f0);
        local_160 = CONCAT44(local_f0,local_ec[0]);
      }
      local_58[0] = _LC28;
      local_58[1] = _LC28;
      local_58[2] = _LC28;
      local_58[3] = _LC28;
      EditorNode3DGizmo::add_lines((Vector *)param_1,local_c8,SUB81(&local_e0,0),(Color *)0x0);
      EditorNode3DGizmo::add_collision_segments((Vector *)param_1);
      local_58[1] = 0.0;
      local_58[2] = 0.0;
      local_a0 = 0;
      local_58[0] = fVar15;
      Vector<Vector3>::push_back(fVar15,0,local_108);
      local_90 = 0;
      EditorNode3DGizmo::add_handles
                ((Vector *)param_1,local_108,(Vector *)&local_d0,SUB81(local_120,0),false);
      lVar5 = local_90;
      if (local_90 != 0) {
        LOCK();
        plVar1 = (long *)(local_90 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_90 = 0;
          Memory::free_static((void *)(lVar5 + -0x10),false);
        }
      }
      lVar5 = local_a0;
      if (local_a0 != 0) {
        LOCK();
        plVar1 = (long *)(local_a0 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_a0 = 0;
          Memory::free_static((void *)(lVar5 + -0x10),false);
        }
      }
      lVar5 = local_b0;
      if (local_b0 != 0) {
        LOCK();
        plVar1 = (long *)(local_b0 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_b0 = 0;
          Memory::free_static((void *)(lVar5 + -0x10),false);
        }
      }
      lVar5 = local_c0;
      if (local_c0 != 0) {
        LOCK();
        plVar1 = (long *)(local_c0 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_c0 = 0;
          Memory::free_static((void *)(lVar5 + -0x10),false);
        }
      }
    }
    lVar5 = __dynamic_cast(lVar8,&Object::typeinfo,&GPUParticlesCollisionBox3D::typeinfo,0);
    if ((((lVar5 == 0) &&
         (lVar5 = __dynamic_cast(lVar8,&Object::typeinfo,&GPUParticlesAttractorBox3D::typeinfo,0),
         lVar5 == 0)) &&
        (lVar5 = __dynamic_cast(lVar8,&Object::typeinfo,
                                &GPUParticlesAttractorVectorField3D::typeinfo,0), lVar5 == 0)) &&
       (lVar5 = __dynamic_cast(lVar8,&Object::typeinfo,&GPUParticlesCollisionSDF3D::typeinfo,0),
       lVar5 == 0)) {
      lVar5 = __dynamic_cast(lVar8,&Object::typeinfo,&GPUParticlesCollisionHeightField3D::typeinfo,0
                            );
      if (lVar5 == 0) goto LAB_00102bc7;
    }
    local_b0 = 0;
    local_78 = 0;
    local_70 = 0.0;
    local_6c = (undefined1  [8])0x0;
    local_64 = 0.0;
    StringName::StringName((StringName *)local_120,"get_size",false);
    Object::call<>((StringName *)local_58);
    _local_6c = Variant::operator_cast_to_Vector3((Variant *)local_58);
    if (Variant::needs_deinit[(int)local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    if ((StringName::configured != '\0') && (local_98 != (Object *)0x0)) {
      StringName::unref();
    }
    local_70 = (float)_LC53 * local_64;
    local_78 = CONCAT44(SUB124(_local_6c,4) * _LC53._4_4_,SUB124(_local_6c,0) * (float)_LC53);
    pVVar13 = (Vector3 *)0x0;
    do {
      local_84 = 0;
      uVar12 = (int)pVVar13 + 1;
      local_7c = 0.0;
      local_58[0] = 0.0;
      local_58[1] = 0.0;
      local_58[2] = 0.0;
      AABB::get_edge((int)&local_78,pVVar13,(Vector3 *)&local_84);
      Vector<Vector3>::push_back(local_84,local_7c,(CowData<char32_t> *)&local_b8);
      Vector<Vector3>::push_back
                (CONCAT44(local_58[1],local_58[0]),local_58[2],(CowData<char32_t> *)&local_b8);
      pVVar13 = (Vector3 *)(ulong)uVar12;
    } while (uVar12 != 0xc);
    Gizmo3DHelper::box_get_handles(local_108);
    local_58[0] = (float)__LC52;
    local_58[1] = (float)((ulong)__LC52 >> 0x20);
    local_58[2] = (float)_UNK_00106fa8;
    local_58[3] = (float)((ulong)_UNK_00106fa8 >> 0x20);
    EditorNode3DGizmo::add_lines((Vector *)param_1,(Ref *)&local_b8,SUB81(&local_e0,0),(Color *)0x0)
    ;
    EditorNode3DGizmo::add_collision_segments((Vector *)param_1);
    local_90 = 0;
    EditorNode3DGizmo::add_handles
              ((Vector *)param_1,local_108,(Vector *)&local_d0,SUB81(local_120,0),false);
    lVar5 = local_90;
    if (local_90 != 0) {
      LOCK();
      plVar1 = (long *)(local_90 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_90 = 0;
        Memory::free_static((void *)(lVar5 + -0x10),false);
      }
    }
    lVar8 = __dynamic_cast(lVar8,&Object::typeinfo,&GPUParticlesCollisionSDF3D::typeinfo);
    if (lVar8 != 0) {
      iVar9 = GPUParticlesCollisionSDF3D::get_resolution();
      lVar8 = local_b0;
      fVar15 = (float)local_6c._4_4_;
      if ((float)local_6c._4_4_ <= (float)local_6c._0_4_) {
        fVar15 = (float)local_6c._0_4_;
      }
      iVar9 = *(int *)(redraw(EditorNode3DGizmo*)::subdivs + (long)iVar9 * 4);
      fVar18 = local_64;
      if (local_64 <= fVar15) {
        fVar18 = fVar15;
      }
      if ((local_b0 != 0) && (*(long *)(local_b0 + -8) != 0)) {
        LOCK();
        plVar1 = (long *)(local_b0 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_b0 = 0;
          Memory::free_static((void *)(lVar8 + -0x10),false);
        }
        else {
          local_b0 = 0;
        }
      }
      if (1 < iVar9) {
        iVar11 = 1;
        do {
          uVar10 = 1;
          fVar15 = (float)iVar11 * (fVar18 / (float)iVar9);
          do {
            if (fVar15 < (&local_70)[uVar10] || fVar15 == (&local_70)[uVar10]) {
              lVar8 = (long)((int)uVar10 + (int)((uVar10 & 0xffffffff) / 3) * -3);
              uVar12 = ((int)uVar10 + 1U) % 3;
              uVar4 = 0;
LAB_00102dae:
              do {
                lVar5 = (long)(int)uVar12;
                local_84 = local_78;
                local_7c = local_70;
                local_58[0] = (float)local_78;
                local_58[1] = (float)((ulong)local_78 >> 0x20);
                local_58[2] = local_70;
                (&fStack_88)[uVar10] = (&fStack_88)[uVar10] + fVar15;
                local_58[uVar10 - 1] = local_58[uVar10 - 1] + fVar15;
                if ((uVar4 & 1) == 0) {
                  local_58[lVar5] = local_58[lVar5] + *(float *)(local_6c + lVar5 * 4);
                  if ((uVar4 & 2) == 0) {
                    uVar4 = 1;
                    Vector<Vector3>::push_back(local_84,local_7c,(CowData<char32_t> *)&local_b8);
                    Vector<Vector3>::push_back
                              (CONCAT44(local_58[1],local_58[0]),local_58[2],
                               (CowData<char32_t> *)&local_b8);
                    goto LAB_00102dae;
                  }
LAB_00102e2f:
                  lVar5 = (long)(int)uVar12;
                  *(float *)((long)&local_84 + lVar8 * 4) =
                       *(float *)((long)&local_84 + lVar8 * 4) + *(float *)(local_6c + lVar8 * 4);
                  *(float *)((long)&local_84 + lVar5 * 4) =
                       *(float *)((long)&local_84 + lVar5 * 4) + *(float *)(local_6c + lVar5 * 4);
                }
                else {
                  local_58[lVar8] = local_58[lVar8] + *(float *)(local_6c + lVar8 * 4);
                  if ((uVar4 & 2) != 0) goto LAB_00102e2f;
                }
                uVar4 = uVar4 + 1;
                Vector<Vector3>::push_back(local_84,local_7c,(CowData<char32_t> *)&local_b8);
                Vector<Vector3>::push_back
                          (CONCAT44(local_58[1],local_58[0]),local_58[2],
                           (CowData<char32_t> *)&local_b8);
              } while (uVar4 != 4);
            }
            uVar10 = uVar10 + 1;
          } while (uVar10 != 4);
          iVar11 = iVar11 + 1;
        } while (iVar9 != iVar11);
      }
      local_58[0] = (float)__LC52;
      local_58[1] = (float)((ulong)__LC52 >> 0x20);
      local_58[2] = (float)_UNK_00106fa8;
      local_58[3] = (float)((ulong)_UNK_00106fa8 >> 0x20);
      EditorNode3DGizmo::add_lines
                ((Vector *)param_1,(Ref *)&local_b8,SUB81(&local_d8,0),(Color *)0x0);
    }
    lVar8 = local_a0;
    if (local_a0 != 0) {
      LOCK();
      plVar1 = (long *)(local_a0 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_a0 = 0;
        Memory::free_static((void *)(lVar8 + -0x10),false);
      }
    }
    lVar8 = local_b0;
    if (local_b0 != 0) {
      LOCK();
      plVar1 = (long *)(local_b0 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_b0 = 0;
        Memory::free_static((void *)(lVar8 + -0x10),false);
      }
    }
  }
LAB_00102bc7:
  if (local_d0 != (Object *)0x0) {
    cVar3 = RefCounted::unreference();
    pOVar7 = local_d0;
    if (cVar3 != '\0') {
      cVar3 = predelete_handler(local_d0);
      if (cVar3 != '\0') {
        (**(code **)(*(long *)pOVar7 + 0x140))(pOVar7);
        Memory::free_static(pOVar7,false);
      }
    }
  }
  if (local_d8 != (Object *)0x0) {
    cVar3 = RefCounted::unreference();
    pOVar7 = local_d8;
    if (cVar3 != '\0') {
      cVar3 = predelete_handler(local_d8);
      if (cVar3 != '\0') {
        (**(code **)(*(long *)pOVar7 + 0x140))(pOVar7);
        Memory::free_static(pOVar7,false);
      }
    }
  }
  if (local_e0 != (Object *)0x0) {
    cVar3 = RefCounted::unreference();
    pOVar7 = local_e0;
    if (cVar3 != '\0') {
      cVar3 = predelete_handler(local_e0);
      if (cVar3 != '\0') {
        (**(code **)(*(long *)pOVar7 + 0x140))(pOVar7);
        Memory::free_static(pOVar7,false);
      }
    }
  }
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
  return (uint)CONCAT71(0x106e,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x106e,(undefined4 *)param_1 == &get_class_ptr_static()::ptr);
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



/* GPUParticlesCollision3DGizmoPlugin::is_class_ptr(void*) const */

uint __thiscall
GPUParticlesCollision3DGizmoPlugin::is_class_ptr
          (GPUParticlesCollision3DGizmoPlugin *this,void *param_1)

{
  return (uint)CONCAT71(0x106e,(undefined4 *)param_1 ==
                               &EditorNode3DGizmoPlugin::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x106e,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x106e,(undefined4 *)param_1 == &Resource::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x106e,(undefined4 *)param_1 == &RefCounted::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x106e,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* GPUParticlesCollision3DGizmoPlugin::_getv(StringName const&, Variant&) const */

undefined8 GPUParticlesCollision3DGizmoPlugin::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* GPUParticlesCollision3DGizmoPlugin::_setv(StringName const&, Variant const&) */

undefined8 GPUParticlesCollision3DGizmoPlugin::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* GPUParticlesCollision3DGizmoPlugin::_validate_propertyv(PropertyInfo&) const */

void GPUParticlesCollision3DGizmoPlugin::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* GPUParticlesCollision3DGizmoPlugin::_property_can_revertv(StringName const&) const */

undefined8 GPUParticlesCollision3DGizmoPlugin::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* GPUParticlesCollision3DGizmoPlugin::_property_get_revertv(StringName const&, Variant&) const */

undefined8
GPUParticlesCollision3DGizmoPlugin::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* GPUParticlesCollision3DGizmoPlugin::_notificationv(int, bool) */

void GPUParticlesCollision3DGizmoPlugin::_notificationv(int param_1,bool param_2)

{
  return;
}



/* Gizmo3DHelper::is_class_ptr(void*) const */

uint __thiscall Gizmo3DHelper::is_class_ptr(Gizmo3DHelper *this,void *param_1)

{
  return (uint)CONCAT71(0x106e,(undefined4 *)param_1 == &RefCounted::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x106e,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x106e,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
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
  *(undefined ***)this = &PTR__initialize_classv_00106898;
  Object::~Object((Object *)this);
  return;
}



/* RefCounted::~RefCounted() */

void __thiscall RefCounted::~RefCounted(RefCounted *this)

{
  *(undefined ***)this = &PTR__initialize_classv_00106898;
  Object::~Object((Object *)this);
  operator_delete(this,0x180);
  return;
}



/* Gizmo3DHelper::~Gizmo3DHelper() */

void __thiscall Gizmo3DHelper::~Gizmo3DHelper(Gizmo3DHelper *this)

{
  *(undefined ***)this = &PTR__initialize_classv_001069f8;
  if (Variant::needs_deinit[*(int *)(this + 0x180)] != '\0') {
    Variant::_clear_internal();
  }
  *(undefined ***)this = &PTR__initialize_classv_00106898;
  Object::~Object((Object *)this);
  return;
}



/* GPUParticlesCollision3DGizmoPlugin::_get_class_namev() const */

undefined8 * GPUParticlesCollision3DGizmoPlugin::_get_class_namev(void)

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
LAB_00103893:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00103893;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,
                 "GPUParticlesCollision3DGizmoPlugin");
      goto LAB_001038fe;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,
             "GPUParticlesCollision3DGizmoPlugin");
LAB_001038fe:
  return &_get_class_namev()::_class_name_static;
}



/* Gizmo3DHelper::~Gizmo3DHelper() */

void __thiscall Gizmo3DHelper::~Gizmo3DHelper(Gizmo3DHelper *this)

{
  *(undefined ***)this = &PTR__initialize_classv_001069f8;
  if (Variant::needs_deinit[*(int *)(this + 0x180)] != '\0') {
    Variant::_clear_internal();
  }
  *(undefined ***)this = &PTR__initialize_classv_00106898;
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
LAB_001039e3:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_001039e3;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"RefCounted");
      goto LAB_00103a4e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"RefCounted");
LAB_00103a4e:
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
LAB_00103ad3:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00103ad3;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"Gizmo3DHelper");
      goto LAB_00103b3e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"Gizmo3DHelper");
LAB_00103b3e:
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



/* GPUParticlesCollision3DGizmoPlugin::get_class() const */

void GPUParticlesCollision3DGizmoPlugin::get_class(void)

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



/* RefCounted::is_class(String const&) const */

undefined8 __thiscall RefCounted::is_class(RefCounted *this,String *param_1)

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
            if (lVar5 == 0) goto LAB_0010400f;
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
LAB_0010400f:
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
    if (cVar6 != '\0') goto LAB_001040c3;
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
              if (lVar5 == 0) goto LAB_00104173;
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
LAB_00104173:
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
      if (cVar6 != '\0') goto LAB_001040c3;
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = String::operator==(param_1,"Object");
      return uVar7;
    }
  }
  else {
LAB_001040c3:
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
            if (lVar4 == 0) goto LAB_0010429f;
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
LAB_0010429f:
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
    if (cVar5 != '\0') goto LAB_00104353;
  }
  cVar5 = String::operator==(param_1,"Gizmo3DHelper");
  if (cVar5 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = RefCounted::is_class((RefCounted *)this,param_1);
      return uVar7;
    }
  }
  else {
LAB_00104353:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CowData<Vector3>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<Vector3>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
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



/* Resource::is_class(String const&) const */

undefined8 __thiscall Resource::is_class(Resource *this,String *param_1)

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
            if (lVar4 == 0) goto LAB_0010449f;
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
LAB_0010449f:
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
    if (cVar5 != '\0') goto LAB_00104553;
  }
  cVar5 = String::operator==(param_1,"Resource");
  if (cVar5 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = RefCounted::is_class((RefCounted *)this,param_1);
      return uVar7;
    }
  }
  else {
LAB_00104553:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GPUParticlesCollision3DGizmoPlugin::is_class(String const&) const */

undefined8 __thiscall
GPUParticlesCollision3DGizmoPlugin::is_class
          (GPUParticlesCollision3DGizmoPlugin *this,String *param_1)

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
            if (lVar5 == 0) goto LAB_0010463f;
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
LAB_0010463f:
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
    if (cVar6 != '\0') goto LAB_001046f3;
  }
  cVar6 = String::operator==(param_1,"GPUParticlesCollision3DGizmoPlugin");
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
              if (lVar5 == 0) goto LAB_001047b3;
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
LAB_001047b3:
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
      if (cVar6 != '\0') goto LAB_001046f3;
    }
    cVar6 = String::operator==(param_1,"EditorNode3DGizmoPlugin");
    if (cVar6 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar7 = Resource::is_class((Resource *)this,param_1);
        return uVar7;
      }
      goto LAB_0010485c;
    }
  }
LAB_001046f3:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0010485c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Variant Object::call<>(StringName const&) */

StringName * Object::call<>(StringName *param_1)

{
  undefined8 in_RDX;
  long *in_RSI;
  long in_FS_OFFSET;
  int local_68 [4];
  undefined8 local_58;
  undefined1 local_50 [16];
  int local_38 [6];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = (undefined1  [16])0x0;
  local_58 = 0;
  local_68[0] = 0;
  local_68[1] = 0;
  local_68[2] = 0;
  (**(code **)(*in_RSI + 0x68))((Variant *)local_38,in_RSI,in_RDX,0,0,local_68);
  if (local_68[0] == 0) {
    Variant::Variant((Variant *)param_1,(Variant *)local_38);
  }
  else {
    *(undefined4 *)param_1 = 0;
    *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  }
  if (Variant::needs_deinit[local_38[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
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
        if (pvVar5 == (void *)0x0) goto LAB_00104ae4;
      }
    }
    Memory::free_static(pvVar5,false);
    Memory::free_static(*(void **)(this + 0x20),false);
  }
LAB_00104ae4:
  CowData<char32_t>::_unref((CowData<char32_t> *)this);
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



/* GPUParticlesCollision3DGizmoPlugin::_initialize_classv() */

void GPUParticlesCollision3DGizmoPlugin::_initialize_classv(void)

{
  long *plVar1;
  long lVar2;
  long in_FS_OFFSET;
  long local_70;
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
          if ((code *)PTR__bind_methods_00109010 != RefCounted::_bind_methods) {
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
      if ((code *)PTR__bind_methods_00109008 != Resource::_bind_methods) {
        EditorNode3DGizmoPlugin::_bind_methods();
      }
      EditorNode3DGizmoPlugin::initialize_class()::initialized = '\x01';
    }
    local_58 = "EditorNode3DGizmoPlugin";
    local_68 = 0;
    local_50 = 0x17;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "GPUParticlesCollision3DGizmoPlugin";
    local_70 = 0;
    local_50 = 0x22;
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
LAB_001055ad:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_001055ad;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)pLVar5;
      local_68 = local_80;
      goto joined_r0x001055cf;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)pLVar5;
joined_r0x001055cf:
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
      goto LAB_00105901;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00105901:
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
      goto LAB_00105bb1;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00105bb1:
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
LAB_00105e8d:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00105e8d;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x00105eaf;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x00105eaf:
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



/* GPUParticlesCollision3DGizmoPlugin::_get_property_listv(List<PropertyInfo, DefaultAllocator>*,
   bool) const */

void __thiscall
GPUParticlesCollision3DGizmoPlugin::_get_property_listv
          (GPUParticlesCollision3DGizmoPlugin *this,List *param_1,bool param_2)

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
  local_78 = "GPUParticlesCollision3DGizmoPlugin";
  local_70 = 0x22;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "GPUParticlesCollision3DGizmoPlugin";
  local_98 = 0;
  local_70 = 0x22;
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
      goto LAB_00106241;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00106241:
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
  StringName::StringName((StringName *)&local_78,"GPUParticlesCollision3DGizmoPlugin",false);
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
LAB_00106700:
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
  if (lVar7 == 0) goto LAB_00106700;
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
LAB_0010666c:
    puVar9 = *(undefined8 **)this;
    if (puVar9 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    lVar3 = puVar9[-1];
    if (param_1 <= lVar3) goto LAB_001065fb;
  }
  else {
    if (lVar8 != 0) {
      uVar6 = _realloc(this,lVar7);
      if ((int)uVar6 != 0) {
        return uVar6;
      }
      goto LAB_0010666c;
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
LAB_001065fb:
  puVar9[-1] = param_1;
  return 0;
}



/* GPUParticlesCollision3DGizmoPlugin::GPUParticlesCollision3DGizmoPlugin() */

void GPUParticlesCollision3DGizmoPlugin::_GLOBAL__sub_I_GPUParticlesCollision3DGizmoPlugin(void)

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
/* StringName::~StringName() */

void __thiscall StringName::~StringName(StringName *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



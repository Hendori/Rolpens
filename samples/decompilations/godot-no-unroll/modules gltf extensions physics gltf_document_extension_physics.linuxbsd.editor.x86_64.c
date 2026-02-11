
/* Ref<GLTFState>::TEMPNAMEPLACEHOLDERVALUE(Ref<GLTFState> const&) [clone .isra.0] */

void __thiscall Ref<GLTFState>::operator=(Ref<GLTFState> *this,Ref *param_1)

{
  Object *pOVar1;
  char cVar2;
  
  pOVar1 = *(Object **)this;
  if (pOVar1 != (Object *)param_1) {
    *(Ref **)this = param_1;
    if (param_1 != (Ref *)0x0) {
      cVar2 = RefCounted::reference();
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



/* Ref<GLTFNode>::TEMPNAMEPLACEHOLDERVALUE(Ref<GLTFNode> const&) [clone .isra.0] */

void __thiscall Ref<GLTFNode>::operator=(Ref<GLTFNode> *this,Ref *param_1)

{
  Object *pOVar1;
  char cVar2;
  
  pOVar1 = *(Object **)this;
  if (pOVar1 != (Object *)param_1) {
    *(Ref **)this = param_1;
    if (param_1 != (Ref *)0x0) {
      cVar2 = RefCounted::reference();
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



/* Ref<GLTFPhysicsShape>::TEMPNAMEPLACEHOLDERVALUE(Ref<GLTFPhysicsShape> const&) [clone .isra.0] */

void __thiscall Ref<GLTFPhysicsShape>::operator=(Ref<GLTFPhysicsShape> *this,Ref *param_1)

{
  Object *pOVar1;
  char cVar2;
  
  pOVar1 = *(Object **)this;
  if (pOVar1 != (Object *)param_1) {
    *(Ref **)this = param_1;
    if (param_1 != (Ref *)0x0) {
      cVar2 = RefCounted::reference();
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



/* GLTFDocumentExtensionPhysics::export_preserialize(Ref<GLTFState>) */

undefined8 __thiscall
GLTFDocumentExtensionPhysics::export_preserialize(undefined8 param_1,undefined8 *param_2)

{
  Object *pOVar1;
  char cVar2;
  Object *pOVar3;
  long lVar4;
  Object *pOVar5;
  Object *pOVar6;
  long in_FS_OFFSET;
  Object *local_b8;
  long local_a8;
  Array local_90 [8];
  Object *local_88;
  Object *local_80;
  Variant *local_78;
  Variant *local_70;
  Variant *local_68;
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  GLTFState::get_nodes();
  Array::begin();
  Array::end();
  if (local_78 != local_68) {
    do {
      if (local_70 != (Variant *)0x0) {
        Variant::operator=(local_70,local_78);
      }
      pOVar3 = (Object *)Variant::get_validated_object();
      if (((pOVar3 != (Object *)0x0) &&
          (pOVar3 = (Object *)__dynamic_cast(pOVar3,&Object::typeinfo,&GLTFNode::typeinfo,0),
          pOVar3 != (Object *)0x0)) && (cVar2 = RefCounted::reference(), cVar2 == '\0')) {
        pOVar3 = (Object *)0x0;
      }
      StringName::StringName((StringName *)&local_80,"GLTFPhysicsColliderShape",false);
      GLTFNode::get_additional_data((StringName *)local_58);
      lVar4 = Variant::get_validated_object();
      if ((lVar4 == 0) ||
         (pOVar5 = (Object *)__dynamic_cast(lVar4,&Object::typeinfo,&GLTFPhysicsShape::typeinfo,0),
         pOVar5 == (Object *)0x0)) {
        if (Variant::needs_deinit[local_58[0]] == '\0') goto LAB_00100f54;
LAB_001013de:
        pOVar5 = (Object *)0x0;
        Variant::_clear_internal();
        if (StringName::configured != '\0') {
LAB_001013f5:
          if (local_80 != (Object *)0x0) {
            StringName::unref();
          }
          if (pOVar5 != (Object *)0x0) goto LAB_00100f9b;
          pOVar5 = (Object *)0x0;
          goto LAB_0010106f;
        }
LAB_00100f6d:
        pOVar5 = (Object *)0x0;
      }
      else {
        cVar2 = RefCounted::reference();
        if (cVar2 == '\0') {
          if (Variant::needs_deinit[local_58[0]] != '\0') goto LAB_001013de;
LAB_00100f54:
          if ((StringName::configured != '\0') && (local_80 != (Object *)0x0)) {
            StringName::unref();
          }
          goto LAB_00100f6d;
        }
        if (Variant::needs_deinit[local_58[0]] == '\0') {
          if ((StringName::configured != '\0') && (local_80 != (Object *)0x0)) {
            StringName::unref();
          }
        }
        else {
          Variant::_clear_internal();
          if (StringName::configured != '\0') goto LAB_001013f5;
        }
LAB_00100f9b:
        local_80 = pOVar5;
        cVar2 = RefCounted::reference();
        pOVar6 = pOVar5;
        if (cVar2 == '\0') {
          local_80 = (Object *)0x0;
          pOVar6 = (Object *)0x0;
        }
        pOVar1 = (Object *)*param_2;
        if ((pOVar1 == (Object *)0x0) ||
           (local_88 = pOVar1, cVar2 = RefCounted::reference(), cVar2 == '\0')) {
          local_88 = (Object *)0x0;
          local_b8 = (Object *)_export_node_shape(&local_88);
        }
        else {
          local_b8 = (Object *)_export_node_shape(&local_88);
          cVar2 = RefCounted::unreference();
          if ((cVar2 != '\0') && (cVar2 = predelete_handler(pOVar1), cVar2 != '\0')) {
            (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
            Memory::free_static(pOVar1,false);
          }
        }
        if (((pOVar6 != (Object *)0x0) && (cVar2 = RefCounted::unreference(), cVar2 != '\0')) &&
           (cVar2 = predelete_handler(pOVar6), cVar2 != '\0')) {
          (**(code **)(*(long *)pOVar6 + 0x140))(pOVar6);
          Memory::free_static(pOVar6,false);
        }
        Variant::Variant((Variant *)local_58,(long)local_b8);
        StringName::StringName((StringName *)&local_80,"GLTFPhysicsColliderShapeIndex",false);
        GLTFNode::set_additional_data(pOVar3,(StringName *)&local_80,(StringName *)local_58);
        if ((StringName::configured != '\0') && (local_80 != (Object *)0x0)) {
          StringName::unref();
        }
        if (Variant::needs_deinit[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
      }
LAB_0010106f:
      StringName::StringName((StringName *)&local_80,"GLTFPhysicsTriggerShape",false);
      GLTFNode::get_additional_data((StringName *)local_58);
      lVar4 = Variant::get_validated_object();
      if ((lVar4 == 0) ||
         (pOVar6 = (Object *)__dynamic_cast(lVar4,&Object::typeinfo,&GLTFPhysicsShape::typeinfo,0),
         pOVar6 == (Object *)0x0)) {
        if (Variant::needs_deinit[local_58[0]] == '\0') goto LAB_001010e9;
LAB_0010142e:
        pOVar6 = (Object *)0x0;
        Variant::_clear_internal();
        if (StringName::configured != '\0') {
LAB_00101446:
          if (local_80 != (Object *)0x0) {
            StringName::unref();
          }
          if (pOVar6 != (Object *)0x0) goto LAB_0010119b;
        }
      }
      else {
        cVar2 = RefCounted::reference();
        if (cVar2 == '\0') {
          if (Variant::needs_deinit[local_58[0]] != '\0') goto LAB_0010142e;
LAB_001010e9:
          if ((StringName::configured != '\0') && (local_80 != (Object *)0x0)) {
            StringName::unref();
          }
        }
        else {
          if (Variant::needs_deinit[local_58[0]] == '\0') {
            if ((StringName::configured != '\0') && (local_80 != (Object *)0x0)) {
              StringName::unref();
            }
          }
          else {
            Variant::_clear_internal();
            if (StringName::configured != '\0') goto LAB_00101446;
          }
LAB_0010119b:
          local_80 = pOVar6;
          cVar2 = RefCounted::reference();
          local_b8 = pOVar6;
          if (cVar2 == '\0') {
            local_80 = (Object *)0x0;
            local_b8 = (Object *)0x0;
          }
          pOVar1 = (Object *)*param_2;
          if ((pOVar1 == (Object *)0x0) ||
             (local_88 = pOVar1, cVar2 = RefCounted::reference(), cVar2 == '\0')) {
            local_88 = (Object *)0x0;
            local_a8 = _export_node_shape(&local_88);
          }
          else {
            local_a8 = _export_node_shape(&local_88);
            cVar2 = RefCounted::unreference();
            if ((cVar2 != '\0') && (cVar2 = predelete_handler(pOVar1), cVar2 != '\0')) {
              (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
              Memory::free_static(pOVar1,false);
            }
          }
          if (((local_b8 != (Object *)0x0) && (cVar2 = RefCounted::unreference(), cVar2 != '\0')) &&
             (cVar2 = predelete_handler(local_b8), cVar2 != '\0')) {
            (**(code **)(*(long *)local_b8 + 0x140))(local_b8);
            Memory::free_static(local_b8,false);
          }
          Variant::Variant((Variant *)local_58,local_a8);
          StringName::StringName((StringName *)&local_80,"GLTFPhysicsTriggerShapeIndex",false);
          GLTFNode::set_additional_data(pOVar3,(StringName *)&local_80,(StringName *)local_58);
          if ((StringName::configured != '\0') && (local_80 != (Object *)0x0)) {
            StringName::unref();
          }
          if (Variant::needs_deinit[local_58[0]] != '\0') {
            Variant::_clear_internal();
          }
          cVar2 = RefCounted::unreference();
          if ((cVar2 != '\0') && (cVar2 = predelete_handler(pOVar6), cVar2 != '\0')) {
            (**(code **)(*(long *)pOVar6 + 0x140))(pOVar6);
            Memory::free_static(pOVar6,false);
          }
        }
      }
      if (((pOVar5 == (Object *)0x0) || (cVar2 = RefCounted::unreference(), cVar2 == '\0')) ||
         (cVar2 = predelete_handler(pOVar5), cVar2 == '\0')) {
        cVar2 = RefCounted::unreference();
      }
      else {
        (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
        Memory::free_static(pOVar5,false);
        cVar2 = RefCounted::unreference();
      }
      if ((cVar2 != '\0') && (cVar2 = predelete_handler(pOVar3), cVar2 != '\0')) {
        (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
        Memory::free_static(pOVar3,false);
      }
      local_78 = local_78 + 0x18;
    } while (local_78 != local_68);
  }
  Array::~Array(local_90);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GLTFDocumentExtensionPhysics::export_node(Ref<GLTFState>, Ref<GLTFNode>, Dictionary&, Node*) */

undefined8
GLTFDocumentExtensionPhysics::export_node
          (undefined8 param_1,undefined8 *param_2,undefined8 param_3,Variant *param_4)

{
  String *pSVar1;
  char cVar2;
  long lVar3;
  Object *pOVar4;
  StringName *pSVar5;
  Variant *pVVar6;
  long in_FS_OFFSET;
  StringName *local_138;
  Dictionary local_100 [8];
  Variant local_f8 [8];
  undefined8 local_f0;
  char *local_e8;
  undefined8 local_e0;
  int local_d8 [8];
  int local_b8 [8];
  int local_98 [8];
  undefined8 local_78;
  undefined1 local_70 [16];
  int local_58 [2];
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Dictionary::Dictionary(local_100);
  StringName::StringName((StringName *)&local_e8,"GLTFPhysicsBody",false);
  GLTFNode::get_additional_data((StringName *)local_58);
  lVar3 = Variant::get_validated_object();
  if ((lVar3 == 0) ||
     (pOVar4 = (Object *)__dynamic_cast(lVar3,&Object::typeinfo,&GLTFPhysicsBody::typeinfo,0),
     pOVar4 == (Object *)0x0)) {
    if (Variant::needs_deinit[local_58[0]] == '\0') goto LAB_00101c2c;
LAB_00101fba:
    pOVar4 = (Object *)0x0;
    Variant::_clear_internal();
    if (StringName::configured != '\0') {
LAB_00101fd2:
      if (local_e8 != (char *)0x0) {
        StringName::unref();
      }
      if (pOVar4 != (Object *)0x0) goto LAB_00101c84;
    }
  }
  else {
    cVar2 = RefCounted::reference();
    if (cVar2 != '\0') {
      if (Variant::needs_deinit[local_58[0]] == '\0') {
        if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
          StringName::unref();
        }
      }
      else {
        Variant::_clear_internal();
        if (StringName::configured != '\0') goto LAB_00101fd2;
      }
LAB_00101c84:
      GLTFPhysicsBody::to_dictionary();
      Dictionary::operator=(local_100,(Dictionary *)&local_e8);
      Dictionary::~Dictionary((Dictionary *)&local_e8);
      StringName::StringName((StringName *)&local_e8,"GLTFPhysicsCompoundTriggerNodes",false);
      GLTFNode::get_additional_data((StringName *)local_b8);
      if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
        StringName::unref();
      }
      if (0x1b < local_b8[0]) {
        local_78 = 0;
        local_70 = (undefined1  [16])0x0;
        Variant::Variant((Variant *)local_98,"trigger");
        Dictionary::get_or_add((Variant *)local_58,(Variant *)local_100);
        Variant::operator_cast_to_Dictionary((Variant *)&local_e8);
        if (Variant::needs_deinit[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
        if (Variant::needs_deinit[local_98[0]] != '\0') {
          Variant::_clear_internal();
        }
        if (Variant::needs_deinit[(int)local_78] != '\0') {
          Variant::_clear_internal();
        }
        Variant::Variant((Variant *)local_58,"nodes");
        pVVar6 = (Variant *)Dictionary::operator[]((Variant *)&local_e8);
        Variant::operator=(pVVar6,(Variant *)local_b8);
        if (Variant::needs_deinit[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
        Dictionary::~Dictionary((Dictionary *)&local_e8);
      }
      if (Variant::needs_deinit[local_b8[0]] != '\0') {
        Variant::_clear_internal();
      }
      goto LAB_00101d0c;
    }
    if (Variant::needs_deinit[local_58[0]] != '\0') goto LAB_00101fba;
LAB_00101c2c:
    if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pOVar4 = (Object *)0x0;
LAB_00101d0c:
  local_138 = (StringName *)local_b8;
  StringName::StringName((StringName *)&local_e8,"GLTFPhysicsColliderShapeIndex",false);
  GLTFNode::get_additional_data((StringName *)local_d8);
  if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
    StringName::unref();
  }
  if (local_d8[0] == 2) {
    Dictionary::Dictionary((Dictionary *)&local_e8);
    Variant::Variant((Variant *)local_58,"shape");
    pVVar6 = (Variant *)Dictionary::operator[]((Variant *)&local_e8);
    Variant::operator=(pVVar6,(Variant *)local_d8);
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    Variant::Variant((Variant *)local_58,(Dictionary *)&local_e8);
    Variant::Variant((Variant *)&local_78,"collider");
    pSVar5 = (StringName *)Dictionary::operator[]((Variant *)local_100);
    if (pSVar5 != (StringName *)local_58) {
      if (Variant::needs_deinit[*(int *)pSVar5] != '\0') {
        Variant::_clear_internal();
      }
      *(undefined4 *)pSVar5 = 0;
      *(int *)pSVar5 = local_58[0];
      *(undefined8 *)(pSVar5 + 8) = local_50;
      *(undefined8 *)(pSVar5 + 0x10) = uStack_48;
      local_58[0] = 0;
    }
    if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    Dictionary::~Dictionary((Dictionary *)&local_e8);
  }
  StringName::StringName((StringName *)&local_e8,"GLTFPhysicsTriggerShapeIndex",false);
  GLTFNode::get_additional_data(local_138);
  if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
    StringName::unref();
  }
  if (local_b8[0] == 2) {
    local_78 = 0;
    local_70 = (undefined1  [16])0x0;
    Variant::Variant((Variant *)local_98,"trigger");
    Dictionary::get_or_add((Variant *)local_58,(Variant *)local_100);
    Variant::operator_cast_to_Dictionary((Variant *)&local_e8);
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[local_98[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
    }
    Variant::Variant((Variant *)local_58,"shape");
    pVVar6 = (Variant *)Dictionary::operator[]((Variant *)&local_e8);
    Variant::operator=(pVVar6,(Variant *)local_138);
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    Dictionary::~Dictionary((Dictionary *)&local_e8);
  }
  cVar2 = Dictionary::is_empty();
  if (cVar2 == '\0') {
    Variant::Variant((Variant *)local_58,"extensions");
    Dictionary::operator[](param_4);
    Variant::operator_cast_to_Dictionary(local_f8);
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    Variant::Variant((Variant *)local_58,local_100);
    Variant::Variant((Variant *)&local_78,"OMI_physics_body");
    pSVar5 = (StringName *)Dictionary::operator[](local_f8);
    if (pSVar5 != (StringName *)local_58) {
      if (Variant::needs_deinit[*(int *)pSVar5] != '\0') {
        Variant::_clear_internal();
      }
      *(undefined4 *)pSVar5 = 0;
      *(int *)pSVar5 = local_58[0];
      *(undefined8 *)(pSVar5 + 8) = local_50;
      *(undefined8 *)(pSVar5 + 0x10) = uStack_48;
      local_58[0] = 0;
    }
    if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    local_e8 = "OMI_physics_body";
    local_f0 = 0;
    local_e0 = 0x10;
    pSVar1 = (String *)*param_2;
    String::parse_latin1((StrRange *)&local_f0);
    GLTFState::add_used_extension(pSVar1,SUB81((StrRange *)&local_f0,0));
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_f0);
    Dictionary::~Dictionary((Dictionary *)local_f8);
    cVar2 = Variant::needs_deinit[local_b8[0]];
  }
  else {
    cVar2 = Variant::needs_deinit[local_b8[0]];
  }
  if (cVar2 == '\0') {
    cVar2 = Variant::needs_deinit[local_d8[0]];
  }
  else {
    Variant::_clear_internal();
    cVar2 = Variant::needs_deinit[local_d8[0]];
  }
  if (cVar2 != '\0') {
    Variant::_clear_internal();
  }
  if (((pOVar4 != (Object *)0x0) && (cVar2 = RefCounted::unreference(), cVar2 != '\0')) &&
     (cVar2 = predelete_handler(pOVar4), cVar2 != '\0')) {
    (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
    Memory::free_static(pOVar4,false);
  }
  Dictionary::~Dictionary(local_100);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 0;
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
    if ((code *)PTR__bind_methods_00112008 != RefCounted::_bind_methods) {
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



/* GLTFDocumentExtensionPhysics::convert_scene_node(Ref<GLTFState>, Ref<GLTFNode>, Node*) */

void __thiscall
GLTFDocumentExtensionPhysics::convert_scene_node
          (undefined8 param_1,undefined8 *param_2,undefined8 *param_3,long param_4)

{
  undefined8 uVar1;
  Object *pOVar2;
  Object *pOVar3;
  char cVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  long in_FS_OFFSET;
  Object *local_a0;
  undefined8 local_98;
  Object *local_80;
  Array local_78 [8];
  Object *local_70;
  long local_68;
  Object *local_60;
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_4 == 0) goto LAB_00103226;
  lVar6 = __dynamic_cast(param_4,&Object::typeinfo,&CollisionShape3D::typeinfo,0);
  if (lVar6 == 0) {
    lVar6 = __dynamic_cast(param_4,&Object::typeinfo,&CollisionObject3D::typeinfo,0);
    if (lVar6 != 0) {
      uVar1 = *param_3;
      GLTFPhysicsBody::from_node((CollisionObject3D *)&local_60);
      Variant::Variant((Variant *)local_58,local_60);
      StringName::StringName((StringName *)&local_68,"GLTFPhysicsBody",false);
      GLTFNode::set_additional_data(uVar1,(StringName *)&local_68,(Variant *)local_58);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (local_60 != (Object *)0x0) {
        cVar4 = RefCounted::unreference();
        pOVar2 = local_60;
        if (cVar4 != '\0') {
          cVar4 = predelete_handler(local_60);
          if (cVar4 != '\0') {
            (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
            Memory::free_static(pOVar2,false);
          }
        }
      }
    }
    goto LAB_00103226;
  }
  GLTFPhysicsShape::from_node((CollisionShape3D *)&local_80);
  if (local_80 == (Object *)0x0) {
    _err_print_error("convert_scene_node",
                     "modules/gltf/extensions/physics/gltf_document_extension_physics.cpp",0x214,
                     "Condition \"gltf_shape.is_null()\" is true.",
                     "glTF Physics: Could not convert CollisionShape3D to GLTFPhysicsShape. Does it have a valid Shape3D?"
                     ,0,0);
    Ref<GLTFPhysicsShape>::unref((Ref<GLTFPhysicsShape> *)&local_80);
    goto LAB_00103226;
  }
  GLTFPhysicsShape::get_importer_mesh();
  pOVar3 = local_70;
  pOVar2 = local_80;
  if (local_70 != (Object *)0x0) {
    local_60 = local_70;
    cVar4 = RefCounted::reference();
    if (cVar4 == '\0') {
      local_60 = (Object *)0x0;
      local_68 = 0;
      Ref<GLTFState>::operator=((Ref<GLTFState> *)&local_68,(Ref *)*param_2);
      _get_or_insert_mesh_in_state((Ref<GLTFState> *)&local_68,&local_60);
      GLTFPhysicsShape::set_mesh_index((int)pOVar2);
      Ref<GLTFState>::unref((Ref<GLTFState> *)&local_68);
    }
    else {
      local_68 = 0;
      Ref<GLTFState>::operator=((Ref<GLTFState> *)&local_68,(Ref *)*param_2);
      _get_or_insert_mesh_in_state((Ref<GLTFState> *)&local_68,&local_60);
      GLTFPhysicsShape::set_mesh_index((int)pOVar2);
      Ref<GLTFState>::unref((Ref<GLTFState> *)&local_68);
      cVar4 = RefCounted::unreference();
      if (cVar4 != '\0') {
        cVar4 = predelete_handler(pOVar3);
        if (cVar4 != '\0') {
          (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
          Memory::free_static(pOVar3,false);
        }
      }
    }
    if (local_70 != (Object *)0x0) {
      cVar4 = RefCounted::unreference();
      if (cVar4 != '\0') {
        cVar4 = predelete_handler(local_70);
        if (cVar4 != '\0') {
          (**(code **)(*(long *)local_70 + 0x140))();
          Memory::free_static(local_70,false);
        }
      }
    }
  }
  lVar6 = Node::get_parent();
  if (lVar6 == 0) {
    local_a0 = local_80;
    local_98 = *param_3;
LAB_001033e3:
    Variant::Variant((Variant *)local_58,local_a0);
    StringName::StringName((StringName *)&local_60,"GLTFPhysicsColliderShape",false);
    GLTFNode::set_additional_data(local_98,(StringName *)&local_60,(Variant *)local_58);
    if ((StringName::configured != '\0') && (local_60 != (Object *)0x0)) {
      StringName::unref();
    }
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
  }
  else {
    lVar6 = __dynamic_cast(lVar6,&Object::typeinfo,&CollisionObject3D::typeinfo,0);
    local_98 = *param_3;
    local_a0 = local_80;
    if (lVar6 == 0) goto LAB_001033e3;
    lVar7 = __dynamic_cast(lVar6,&Object::typeinfo,&Area3D::typeinfo,0);
    if (lVar7 == 0) goto LAB_001033e3;
    Variant::Variant((Variant *)local_58,local_80);
    StringName::StringName((StringName *)&local_60,"GLTFPhysicsTriggerShape",false);
    GLTFNode::set_additional_data(local_98,(StringName *)&local_60,(Variant *)local_58);
    if ((StringName::configured != '\0') && (local_60 != (Object *)0x0)) {
      StringName::unref();
    }
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    GLTFState::get_nodes();
    iVar5 = Array::size();
    GLTFState::get_nodes();
    local_60 = (Object *)0x0;
    Ref<GLTFState>::operator=((Ref<GLTFState> *)&local_60,(Ref *)*param_2);
    _get_ancestor_compound_trigger_nodes
              ((Variant *)&local_70,(StringName *)&local_60,(Array *)&local_68,lVar6);
    pOVar2 = local_60;
    if (local_60 != (Object *)0x0) {
      cVar4 = RefCounted::unreference();
      if (cVar4 != '\0') {
        cVar4 = predelete_handler(pOVar2);
        if (cVar4 != '\0') {
          (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
          Memory::free_static(pOVar2,false);
        }
      }
    }
    Array::~Array((Array *)&local_68);
    Variant::Variant((Variant *)local_58,(double)iVar5);
    Array::push_back((Variant *)&local_70);
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    Array::~Array((Array *)&local_70);
    Array::~Array(local_78);
  }
  Ref<GLTFPhysicsShape>::unref((Ref<GLTFPhysicsShape> *)&local_80);
LAB_00103226:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GLTFDocumentExtensionPhysics::parse_node_extensions(Ref<GLTFState>, Ref<GLTFNode>, Dictionary&)
    */

undefined8 __thiscall
GLTFDocumentExtensionPhysics::parse_node_extensions
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,Variant *param_4)

{
  undefined8 uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  Variant *pVVar5;
  Resource *this;
  undefined8 uVar6;
  long lVar7;
  int iVar8;
  Resource *pRVar9;
  long in_FS_OFFSET;
  byte bVar10;
  CowData<char32_t> *local_168;
  CowData<char32_t> *local_158;
  CowData<char32_t> *local_150;
  CowData<char32_t> *local_148;
  CowData<char32_t> *local_140;
  CowData<char32_t> *local_138;
  CowData<char32_t> *local_130;
  CowData<char32_t> *local_128;
  Variant local_110 [8];
  Variant local_108 [8];
  Variant local_100 [8];
  CowData<char32_t> local_f8 [8];
  String local_f0 [8];
  undefined8 local_e8;
  String local_e0 [8];
  CowData<char32_t> local_d8 [8];
  String local_d0 [8];
  undefined8 local_c8;
  String local_c0 [8];
  CowData<char32_t> local_b8 [8];
  Resource *local_b0;
  Resource *local_a8;
  Object *local_a0;
  int local_98 [8];
  int local_78 [8];
  int local_58 [6];
  long local_40;
  
  bVar10 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Variant::Variant((Variant *)local_58,"OMI_collider");
  cVar2 = Dictionary::has(param_4);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (cVar2 != '\0') {
    Variant::Variant((Variant *)local_58,"OMI_collider");
    Dictionary::operator[](param_4);
    Variant::operator_cast_to_Dictionary(local_108);
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    Variant::Variant((Variant *)local_58,"collider");
    cVar2 = Dictionary::has(local_108);
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (cVar2 == '\0') {
      uVar6 = *param_3;
      Dictionary::Dictionary((Dictionary *)&local_a8,(Dictionary *)local_108);
      GLTFPhysicsShape::from_dictionary((Ref<GLTFPhysicsShape> *)&local_a0,(Dictionary *)&local_a8);
      Variant::Variant((Variant *)local_58,local_a0);
      StringName::StringName((StringName *)&local_b0,"GLTFPhysicsShape",false);
      GLTFNode::set_additional_data(uVar6,(StringName *)&local_b0,(Variant *)local_58);
      if ((StringName::configured != '\0') && (local_b0 != (Resource *)0x0)) {
        StringName::unref();
      }
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      Ref<GLTFPhysicsShape>::unref((Ref<GLTFPhysicsShape> *)&local_a0);
      Dictionary::~Dictionary((Dictionary *)&local_a8);
LAB_001036f6:
      Dictionary::~Dictionary((Dictionary *)local_108);
      goto LAB_001036fe;
    }
    Variant::Variant((Variant *)local_58,"collider");
    pVVar5 = (Variant *)Dictionary::operator[](local_108);
    iVar3 = Variant::operator_cast_to_int(pVVar5);
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    StringName::StringName((StringName *)&local_a0,"GLTFPhysicsShapes",false);
    GLTFState::get_additional_data((StringName *)local_58);
    Variant::operator_cast_to_Array(local_100);
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    if ((StringName::configured != '\0') && (local_a0 != (Object *)0x0)) {
      StringName::unref();
    }
    if ((-1 < iVar3) && (iVar4 = Array::size(), iVar3 < iVar4)) {
      uVar6 = *param_3;
      pVVar5 = (Variant *)Array::operator[]((int)local_100);
      Variant::Variant((Variant *)local_58,pVVar5);
      StringName::StringName((StringName *)&local_a0,"GLTFPhysicsShape",false);
      GLTFNode::set_additional_data(uVar6,(StringName *)&local_a0,(Variant *)local_58);
      if ((StringName::configured != '\0') && (local_a0 != (Object *)0x0)) {
        StringName::unref();
      }
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      Array::~Array((Array *)local_100);
      goto LAB_001036f6;
    }
    local_a8 = (Resource *)0x0;
    String::parse_latin1((String *)&local_a8,").");
    Array::size();
    itos((long)local_b8);
    local_c8 = 0;
    String::parse_latin1((String *)&local_c8," is not in the state colliders (size: ");
    itos((long)local_d8);
    local_e8 = 0;
    String::parse_latin1((String *)&local_e8,", the collider index ");
    Resource::get_name();
    operator+((char *)local_f0,(String *)"glTF Physics: On node ");
    String::operator+(local_e0,local_f0);
    String::operator+(local_d0,local_e0);
    String::operator+(local_c0,local_d0);
    String::operator+((String *)&local_b0,local_c0);
    String::operator+((String *)&local_a0,(String *)&local_b0);
    iVar4 = Array::size();
    _err_print_index_error
              ("parse_node_extensions",
               "modules/gltf/extensions/physics/gltf_document_extension_physics.cpp",0x5e,
               (long)iVar3,(long)iVar4,"node_collider_index","state_colliders.size()",
               (String *)&local_a0,false,false);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_c0);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_d0);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_e0);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_f0);
    CowData<char32_t>::_unref(local_f8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
    CowData<char32_t>::_unref(local_d8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
    CowData<char32_t>::_unref(local_b8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
    Array::~Array((Array *)local_100);
    Dictionary::~Dictionary((Dictionary *)local_108);
LAB_001043fa:
    uVar6 = 0x10;
    goto LAB_00103734;
  }
LAB_001036fe:
  Variant::Variant((Variant *)local_58,"OMI_physics_body");
  cVar2 = Dictionary::has(param_4);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (cVar2 != '\0') {
    Variant::Variant((Variant *)local_58,"OMI_physics_body");
    Dictionary::operator[](param_4);
    Variant::operator_cast_to_Dictionary(local_110);
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    Variant::Variant((Variant *)local_58,"collider");
    cVar2 = Dictionary::has(local_110);
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (cVar2 != '\0') {
      Variant::Variant((Variant *)local_58,"collider");
      Dictionary::operator[](local_110);
      Variant::operator_cast_to_Dictionary(local_108);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      Variant::Variant((Variant *)local_78,-1);
      Variant::Variant((Variant *)local_98,"shape");
      Dictionary::get((Variant *)local_58,local_108);
      iVar3 = Variant::operator_cast_to_int((Variant *)local_58);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[local_98[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[local_78[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (iVar3 == -1) {
        uVar6 = *param_3;
        Variant::Variant((Variant *)local_58,true);
        StringName::StringName((StringName *)&local_a0,"GLTFPhysicsCompoundCollider",false);
        GLTFNode::set_additional_data(uVar6,(StringName *)&local_a0,(Variant *)local_58);
        if ((StringName::configured != '\0') && (local_a0 != (Object *)0x0)) {
          StringName::unref();
        }
        if (Variant::needs_deinit[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
LAB_00103e75:
        Dictionary::~Dictionary((Dictionary *)local_108);
        goto LAB_001037e4;
      }
      StringName::StringName((StringName *)&local_a0,"GLTFPhysicsShapes",false);
      GLTFState::get_additional_data((StringName *)local_58);
      Variant::operator_cast_to_Array(local_100);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      if ((StringName::configured != '\0') && (local_a0 != (Object *)0x0)) {
        StringName::unref();
      }
      if ((-1 < iVar3) && (iVar4 = Array::size(), iVar3 < iVar4)) {
        uVar6 = *param_3;
        pVVar5 = (Variant *)Array::operator[]((int)local_100);
        Variant::Variant((Variant *)local_58,pVVar5);
        StringName::StringName((StringName *)&local_a0,"GLTFPhysicsColliderShape",false);
        GLTFNode::set_additional_data(uVar6,(StringName *)&local_a0,(Variant *)local_58);
        if ((StringName::configured != '\0') && (local_a0 != (Object *)0x0)) {
          StringName::unref();
        }
        if (Variant::needs_deinit[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
        uVar6 = *param_3;
        Variant::Variant((Variant *)local_58,iVar3);
        StringName::StringName((StringName *)&local_a0,"GLTFPhysicsColliderShapeIndex",false);
        GLTFNode::set_additional_data(uVar6,(StringName *)&local_a0,(Variant *)local_58);
        if ((StringName::configured != '\0') && (local_a0 != (Object *)0x0)) {
          StringName::unref();
        }
        if (Variant::needs_deinit[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
        Array::~Array((Array *)local_100);
        goto LAB_00103e75;
      }
      local_a8 = (Resource *)0x0;
      String::parse_latin1((String *)&local_a8,").");
      Array::size();
      itos((long)local_b8);
      local_c8 = 0;
      String::parse_latin1((String *)&local_c8," is not in the state shapes (size: ");
      itos((long)local_d8);
      local_e8 = 0;
      String::parse_latin1((String *)&local_e8,", the shape index ");
      Resource::get_name();
      operator+((char *)local_f0,(String *)"glTF Physics: On node ");
      String::operator+(local_e0,local_f0);
      String::operator+(local_d0,local_e0);
      String::operator+(local_c0,local_d0);
      String::operator+((String *)&local_b0,local_c0);
      String::operator+((String *)&local_a0,(String *)&local_b0);
      iVar4 = Array::size();
      iVar8 = 0x6d;
LAB_001046ac:
      local_128 = (CowData<char32_t> *)&local_e8;
      local_130 = local_d8;
      local_138 = (CowData<char32_t> *)&local_c8;
      local_140 = (CowData<char32_t> *)local_e0;
      local_148 = local_b8;
      local_150 = (CowData<char32_t> *)local_f0;
      local_158 = (CowData<char32_t> *)&local_a8;
      local_168 = local_f8;
      _err_print_index_error
                ("parse_node_extensions",
                 "modules/gltf/extensions/physics/gltf_document_extension_physics.cpp",iVar8,
                 (long)iVar3,(long)iVar4,"node_shape_index","state_shapes.size()",
                 (String *)&local_a0,false,false);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_c0);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_d0);
      CowData<char32_t>::_unref(local_140);
      CowData<char32_t>::_unref(local_150);
      CowData<char32_t>::_unref(local_168);
      CowData<char32_t>::_unref(local_128);
      CowData<char32_t>::_unref(local_130);
      CowData<char32_t>::_unref(local_138);
      CowData<char32_t>::_unref(local_148);
      CowData<char32_t>::_unref(local_158);
      Array::~Array((Array *)local_100);
      Dictionary::~Dictionary((Dictionary *)local_108);
      Dictionary::~Dictionary((Dictionary *)local_110);
      goto LAB_001043fa;
    }
LAB_001037e4:
    Variant::Variant((Variant *)local_58,"trigger");
    cVar2 = Dictionary::has(local_110);
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (cVar2 != '\0') {
      Variant::Variant((Variant *)local_58,"trigger");
      Dictionary::operator[](local_110);
      Variant::operator_cast_to_Dictionary(local_108);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      Variant::Variant((Variant *)local_78,-1);
      Variant::Variant((Variant *)local_98,"shape");
      Dictionary::get((Variant *)local_58,local_108);
      iVar3 = Variant::operator_cast_to_int((Variant *)local_58);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[local_98[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[local_78[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (iVar3 == -1) {
        local_b0 = (Resource *)0x0;
        this = (Resource *)operator_new(0x288,"");
        pRVar9 = this;
        for (lVar7 = 0x51; lVar7 != 0; lVar7 = lVar7 + -1) {
          *(undefined8 *)pRVar9 = 0;
          pRVar9 = pRVar9 + (ulong)bVar10 * -0x10 + 8;
        }
        Resource::Resource(this);
        uVar1 = _UNK_0010f188;
        uVar6 = __LC65;
        *(undefined ***)this = &PTR__initialize_classv_0010eb60;
        *(undefined8 *)(this + 0x240) = 0x3f80000000000003;
        *(undefined8 *)(this + 0x248) = 0;
        *(undefined4 *)(this + 0x250) = 0;
        *(undefined8 *)(this + 0x254) = 0;
        *(undefined4 *)(this + 0x25c) = 0;
        *(undefined8 *)(this + 0x260) = 0;
        *(undefined4 *)(this + 0x268) = 0;
        *(undefined8 *)(this + 0x26c) = 0;
        *(undefined4 *)(this + 0x274) = 0;
        *(undefined8 *)(this + 0x278) = uVar6;
        *(undefined8 *)(this + 0x280) = uVar1;
        postinitialize_handler((Object *)this);
        local_a0 = (Object *)0x0;
        local_a8 = this;
        cVar2 = RefCounted::init_ref();
        if (cVar2 == '\0') {
          this = (Resource *)0x0;
          local_a8 = (Resource *)0x0;
          Ref<GLTFPhysicsBody>::unref((Ref<GLTFPhysicsBody> *)&local_a0);
        }
        else {
          Ref<GLTFPhysicsBody>::unref((Ref<GLTFPhysicsBody> *)&local_a0);
          local_a0 = (Object *)0x0;
          local_b0 = this;
          cVar2 = RefCounted::reference();
          if (cVar2 == '\0') {
            local_b0 = (Resource *)0x0;
            this = (Resource *)0x0;
          }
          Ref<GLTFPhysicsBody>::unref((Ref<GLTFPhysicsBody> *)&local_a0);
        }
        Ref<GLTFPhysicsBody>::unref((Ref<GLTFPhysicsBody> *)&local_a8);
        local_a0 = (Object *)0x0;
        String::parse_latin1((String *)&local_a0,"trigger");
        GLTFPhysicsBody::set_body_type(this,(String *)&local_a0);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
        uVar6 = *param_3;
        Variant::Variant((Variant *)local_58,(Object *)this);
        StringName::StringName((StringName *)&local_a0,"GLTFPhysicsBody",false);
        GLTFNode::set_additional_data(uVar6,(String *)&local_a0,(Variant *)local_58);
        if ((StringName::configured != '\0') && (local_a0 != (Object *)0x0)) {
          StringName::unref();
        }
        if (Variant::needs_deinit[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
        Ref<GLTFPhysicsBody>::unref((Ref<GLTFPhysicsBody> *)&local_b0);
      }
      else {
        StringName::StringName((StringName *)&local_a0,"GLTFPhysicsShapes",false);
        GLTFState::get_additional_data((StringName *)local_58);
        Variant::operator_cast_to_Array(local_100);
        if (Variant::needs_deinit[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
        if ((StringName::configured != '\0') && (local_a0 != (Object *)0x0)) {
          StringName::unref();
        }
        if ((iVar3 < 0) || (iVar4 = Array::size(), iVar4 <= iVar3)) {
          local_a8 = (Resource *)0x0;
          String::parse_latin1((String *)&local_a8,").");
          Array::size();
          itos((long)local_b8);
          local_c8 = 0;
          String::parse_latin1((String *)&local_c8," is not in the state shapes (size: ");
          itos((long)local_d8);
          local_e8 = 0;
          String::parse_latin1((String *)&local_e8,", the shape index ");
          Resource::get_name();
          operator+((char *)local_f0,(String *)"glTF Physics: On node ");
          String::operator+(local_e0,local_f0);
          String::operator+(local_d0,local_e0);
          String::operator+(local_c0,local_d0);
          String::operator+((String *)&local_b0,local_c0);
          String::operator+((String *)&local_a0,(String *)&local_b0);
          iVar4 = Array::size();
          iVar8 = 0x7c;
          goto LAB_001046ac;
        }
        uVar6 = *param_3;
        pVVar5 = (Variant *)Array::operator[]((int)local_100);
        Variant::Variant((Variant *)local_58,pVVar5);
        StringName::StringName((StringName *)&local_a0,"GLTFPhysicsTriggerShape",false);
        GLTFNode::set_additional_data(uVar6,(StringName *)&local_a0,(Variant *)local_58);
        if ((StringName::configured != '\0') && (local_a0 != (Object *)0x0)) {
          StringName::unref();
        }
        if (Variant::needs_deinit[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
        uVar6 = *param_3;
        Variant::Variant((Variant *)local_58,iVar3);
        StringName::StringName((StringName *)&local_a0,"GLTFPhysicsTriggerShapeIndex",false);
        GLTFNode::set_additional_data(uVar6,(StringName *)&local_a0,(Variant *)local_58);
        if ((StringName::configured != '\0') && (local_a0 != (Object *)0x0)) {
          StringName::unref();
        }
        if (Variant::needs_deinit[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
        Array::~Array((Array *)local_100);
      }
      Variant::Variant((Variant *)local_58,"nodes");
      cVar2 = Dictionary::has(local_108);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (cVar2 != '\0') {
        Variant::Variant((Variant *)local_58,"nodes");
        Dictionary::operator[](local_108);
        Variant::operator_cast_to_Array((Variant *)&local_a8);
        if (Variant::needs_deinit[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
        uVar6 = *param_3;
        Variant::Variant((Variant *)local_58,(Variant *)&local_a8);
        StringName::StringName((StringName *)&local_a0,"GLTFPhysicsCompoundTriggerNodes",false);
        GLTFNode::set_additional_data(uVar6,(StringName *)&local_a0,(Variant *)local_58);
        if ((StringName::configured != '\0') && (local_a0 != (Object *)0x0)) {
          StringName::unref();
        }
        if (Variant::needs_deinit[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
        Array::~Array((Array *)&local_a8);
      }
      Dictionary::~Dictionary((Dictionary *)local_108);
    }
    Variant::Variant((Variant *)local_78,"motion");
    cVar2 = Dictionary::has(local_110);
    if (cVar2 == '\0') {
      Variant::Variant((Variant *)local_58,"type");
      cVar2 = Dictionary::has(local_110);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[local_78[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (cVar2 != '\0') goto LAB_00103ac8;
    }
    else {
      if (Variant::needs_deinit[local_78[0]] != '\0') {
        Variant::_clear_internal();
      }
LAB_00103ac8:
      uVar6 = *param_3;
      Dictionary::Dictionary((Dictionary *)&local_a8,(Dictionary *)local_110);
      GLTFPhysicsBody::from_dictionary((Ref<GLTFPhysicsBody> *)&local_a0,(Dictionary *)&local_a8);
      Variant::Variant((Variant *)local_58,local_a0);
      StringName::StringName((StringName *)&local_b0,"GLTFPhysicsBody",false);
      GLTFNode::set_additional_data(uVar6,(StringName *)&local_b0,(Variant *)local_58);
      if ((StringName::configured != '\0') && (local_b0 != (Resource *)0x0)) {
        StringName::unref();
      }
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      Ref<GLTFPhysicsBody>::unref((Ref<GLTFPhysicsBody> *)&local_a0);
      Dictionary::~Dictionary((Dictionary *)&local_a8);
    }
    Dictionary::~Dictionary((Dictionary *)local_110);
  }
  uVar6 = 0;
LAB_00103734:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar6;
}



/* GLTFDocumentExtensionPhysics::generate_scene_node(Ref<GLTFState>, Ref<GLTFNode>, Node*) */

Object * __thiscall
GLTFDocumentExtensionPhysics::generate_scene_node
          (undefined8 param_1,undefined8 *param_2,long *param_3,Object *param_4)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  Object *pOVar5;
  long lVar6;
  Ref *pRVar7;
  Object *this;
  undefined8 uVar8;
  Object *pOVar9;
  long in_FS_OFFSET;
  Object *local_d0;
  Ref<GLTFNode> *local_c8;
  Ref<GLTFState> *local_c0;
  Ref *local_90;
  Ref *local_88;
  Ref *local_80;
  undefined8 local_78;
  long local_70;
  Ref *local_68;
  Object *local_60;
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  StringName::StringName((StringName *)&local_60,"GLTFPhysicsBody",false);
  GLTFNode::get_additional_data((StringName *)local_58);
  pOVar5 = (Object *)Variant::get_validated_object();
  if (((pOVar5 != (Object *)0x0) &&
      (pOVar5 = (Object *)__dynamic_cast(pOVar5,&Object::typeinfo,&GLTFPhysicsBody::typeinfo,0),
      pOVar5 != (Object *)0x0)) && (cVar1 = RefCounted::reference(), cVar1 == '\0')) {
    pOVar5 = (Object *)0x0;
  }
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_60 != (Object *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_60,"GLTFPhysicsShape",false);
  GLTFNode::get_additional_data((StringName *)local_58);
  local_90 = (Ref *)0x0;
  lVar6 = Variant::get_validated_object();
  if ((lVar6 == 0) ||
     (pRVar7 = (Ref *)__dynamic_cast(lVar6,&Object::typeinfo,&GLTFPhysicsShape::typeinfo,0),
     pRVar7 == (Ref *)0x0)) {
LAB_00105499:
    if (Variant::needs_deinit[local_58[0]] == '\0') {
      if ((StringName::configured != '\0') && (local_60 != (Object *)0x0)) {
        StringName::unref();
      }
    }
    else {
      pRVar7 = (Ref *)0x0;
      Variant::_clear_internal();
      if (StringName::configured != '\0') goto LAB_00105a18;
    }
LAB_001054cb:
    StringName::StringName((StringName *)&local_60,"GLTFPhysicsColliderShape",false);
    GLTFNode::get_additional_data((StringName *)local_58);
    local_88 = (Ref *)0x0;
    Ref<GLTFPhysicsShape>::operator=((Ref<GLTFPhysicsShape> *)&local_88,(Variant *)local_58);
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    if ((StringName::configured != '\0') && (local_60 != (Object *)0x0)) {
      StringName::unref();
    }
    StringName::StringName((StringName *)&local_60,"GLTFPhysicsTriggerShape",false);
    GLTFNode::get_additional_data((StringName *)local_58);
    local_80 = (Ref *)0x0;
    Ref<GLTFPhysicsShape>::operator=((Ref<GLTFPhysicsShape> *)&local_80,(Variant *)local_58);
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    if ((StringName::configured != '\0') && (local_60 != (Object *)0x0)) {
      StringName::unref();
    }
    pRVar7 = local_80;
    if (pOVar5 == (Object *)0x0) {
      local_d0 = param_4;
      if ((param_4 == (Object *)0x0) ||
         (local_d0 = (Object *)
                     __dynamic_cast(param_4,&Object::typeinfo,&CollisionObject3D::typeinfo,0),
         local_d0 == (Object *)0x0)) {
LAB_00105d00:
        StringName::StringName((StringName *)&local_60,"GLTFPhysicsCompoundCollider",false);
        GLTFNode::get_additional_data((StringName *)local_58);
        bVar2 = Variant::operator_cast_to_bool((Variant *)local_58);
        if (Variant::needs_deinit[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
        if ((StringName::configured != '\0') && (local_60 != (Object *)0x0)) {
          StringName::unref();
        }
        this = (Object *)0x0;
        if (!bVar2) goto LAB_001055d4;
        this = (Object *)operator_new(0x648,"");
        StaticBody3D::StaticBody3D((StaticBody3D *)this,0);
        postinitialize_handler(this);
        local_d0 = this;
        goto LAB_001055e0;
      }
      lVar6 = __dynamic_cast(local_d0,&Object::typeinfo,&Area3D::typeinfo,0);
      if ((lVar6 == 0) || (pRVar7 == (Ref *)0x0)) {
        lVar6 = __dynamic_cast(local_d0,&Object::typeinfo,&PhysicsBody3D::typeinfo,0);
        if (lVar6 == 0) goto LAB_00105d00;
        this = (Object *)0x0;
        goto LAB_00105606;
      }
      GLTFState::get_nodes();
      Variant::Variant((Variant *)local_58,(Object *)*param_3);
      iVar3 = Array::find((Variant *)&local_78,(int)(StringName *)local_58);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      Array::Array((Array *)&local_60,(Array *)&local_78);
      local_68 = (Ref *)0x0;
      Ref<GLTFState>::operator=((Ref<GLTFState> *)&local_68,(Ref *)*param_2);
      _get_ancestor_compound_trigger_nodes
                ((Variant *)&local_70,(Ref<GLTFState> *)&local_68,(StringName *)&local_60,local_d0);
      Ref<GLTFState>::unref((Ref<GLTFState> *)&local_68);
      Array::~Array((Array *)&local_60);
      iVar4 = Array::size();
      if (0 < iVar4) {
        Variant::Variant((Variant *)local_58,(double)iVar3);
        cVar1 = Array::has((Variant *)&local_70);
        if (cVar1 == '\0') {
          if (Variant::needs_deinit[local_58[0]] != '\0') {
            Variant::_clear_internal();
          }
          this = (Object *)operator_new(0x6e8,"");
          Area3D::Area3D((Area3D *)this);
          postinitialize_handler(this);
          Array::~Array((Array *)&local_70);
          Array::~Array((Array *)&local_78);
          lVar6 = __dynamic_cast(this,&Object::typeinfo,&PhysicsBody3D::typeinfo,0);
          local_d0 = this;
          if ((lVar6 == 0) || (local_88 == (Ref *)0x0)) goto LAB_001056e9;
          goto LAB_00105628;
        }
        if (Variant::needs_deinit[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
      }
      local_c0 = (Ref<GLTFState> *)&local_70;
      Array::~Array((Array *)local_c0);
      Array::~Array((Array *)&local_78);
      lVar6 = __dynamic_cast(local_d0,&Object::typeinfo,&PhysicsBody3D::typeinfo,0);
      if (lVar6 == 0) {
        this = (Object *)0x0;
      }
      else {
        this = (Object *)0x0;
        if (local_88 != (Ref *)0x0) {
LAB_00105628:
          local_c0 = (Ref<GLTFState> *)&local_70;
          local_c8 = (Ref<GLTFNode> *)&local_68;
          local_60 = (Object *)0x0;
          Ref<GLTFPhysicsShape>::operator=((Ref<GLTFPhysicsShape> *)&local_60,local_88);
          local_68 = (Ref *)0x0;
          Ref<GLTFNode>::operator=(local_c8,(Ref *)*param_3);
          local_70 = 0;
          Ref<GLTFState>::operator=(local_c0,(Ref *)*param_2);
          uVar8 = _generate_shape_node_and_body_if_needed
                            (local_c0,local_c8,(StringName *)&local_60,local_d0,0);
          Ref<GLTFState>::unref(local_c0);
          Ref<GLTFNode>::unref(local_c8);
          Ref<GLTFPhysicsShape>::unref((Ref<GLTFPhysicsShape> *)&local_60);
          local_60 = (Object *)0x0;
          Ref<GLTFNode>::operator=((Ref<GLTFNode> *)&local_60,(Ref *)*param_3);
          this = (Object *)_add_physics_node_to_given_node(this,uVar8,(StringName *)&local_60);
          Ref<GLTFNode>::unref((Ref<GLTFNode> *)&local_60);
          if (pRVar7 == (Ref *)0x0) goto LAB_001057af;
        }
      }
LAB_001056e9:
      local_c0 = (Ref<GLTFState> *)&local_70;
      local_c8 = (Ref<GLTFNode> *)&local_68;
      local_60 = (Object *)0x0;
      Ref<GLTFPhysicsShape>::operator=((Ref<GLTFPhysicsShape> *)&local_60,pRVar7);
      local_68 = (Ref *)0x0;
      Ref<GLTFNode>::operator=(local_c8,(Ref *)*param_3);
      local_70 = 0;
      Ref<GLTFState>::operator=(local_c0,(Ref *)*param_2);
      uVar8 = _generate_shape_node_and_body_if_needed
                        (local_c0,local_c8,(StringName *)&local_60,local_d0,1);
      Ref<GLTFState>::unref(local_c0);
      Ref<GLTFNode>::unref(local_c8);
      Ref<GLTFPhysicsShape>::unref((Ref<GLTFPhysicsShape> *)&local_60);
      local_60 = (Object *)0x0;
      Ref<GLTFNode>::operator=((Ref<GLTFNode> *)&local_60,(Ref *)*param_3);
      this = (Object *)_add_physics_node_to_given_node(this,uVar8,(StringName *)&local_60);
      Ref<GLTFNode>::unref((Ref<GLTFNode> *)&local_60);
      if (lVar6 == 0) {
LAB_00105b5c:
        if (local_88 != (Ref *)0x0) {
          local_60 = (Object *)0x0;
          Ref<GLTFPhysicsShape>::operator=((Ref<GLTFPhysicsShape> *)&local_60,local_88);
          local_68 = (Ref *)0x0;
          Ref<GLTFNode>::operator=((Ref<GLTFNode> *)&local_68,(Ref *)*param_3);
          local_70 = 0;
          Ref<GLTFState>::operator=((Ref<GLTFState> *)&local_70,(Ref *)*param_2);
          uVar8 = _generate_shape_node_and_body_if_needed
                            ((Ref<GLTFState> *)&local_70,(Ref<GLTFNode> *)&local_68,
                             (StringName *)&local_60,local_d0,0);
          Ref<GLTFState>::unref((Ref<GLTFState> *)&local_70);
          Ref<GLTFNode>::unref((Ref<GLTFNode> *)&local_68);
          Ref<GLTFPhysicsShape>::unref((Ref<GLTFPhysicsShape> *)&local_60);
          local_60 = (Object *)0x0;
          Ref<GLTFNode>::operator=((Ref<GLTFNode> *)&local_60,(Ref *)*param_3);
          this = (Object *)_add_physics_node_to_given_node(this,uVar8,(StringName *)&local_60);
          Ref<GLTFNode>::unref((Ref<GLTFNode> *)&local_60);
        }
      }
    }
    else {
      this = (Object *)GLTFPhysicsBody::to_node();
      local_d0 = this;
LAB_001055d4:
      if (local_d0 == (Object *)0x0) {
LAB_00105b50:
        if (pRVar7 != (Ref *)0x0) {
          lVar6 = 0;
          goto LAB_001056e9;
        }
        goto LAB_00105b5c;
      }
LAB_001055e0:
      lVar6 = __dynamic_cast(local_d0,&Object::typeinfo,&PhysicsBody3D::typeinfo,0);
      if (lVar6 == 0) goto LAB_00105b50;
LAB_00105606:
      if (local_88 != (Ref *)0x0) goto LAB_00105628;
      if (pRVar7 != (Ref *)0x0) goto LAB_001056e9;
    }
LAB_001057af:
    Ref<GLTFPhysicsShape>::unref((Ref<GLTFPhysicsShape> *)&local_80);
    Ref<GLTFPhysicsShape>::unref((Ref<GLTFPhysicsShape> *)&local_88);
    Ref<GLTFPhysicsShape>::unref((Ref<GLTFPhysicsShape> *)&local_90);
    if (pOVar5 == (Object *)0x0) goto LAB_0010545f;
  }
  else {
    local_90 = pRVar7;
    cVar1 = RefCounted::reference();
    if (cVar1 == '\0') {
      local_90 = (Ref *)0x0;
      goto LAB_00105499;
    }
    if (Variant::needs_deinit[local_58[0]] == '\0') {
      if ((StringName::configured != '\0') && (local_60 != (Object *)0x0)) {
        StringName::unref();
      }
    }
    else {
      Variant::_clear_internal();
      if (StringName::configured == '\0') goto LAB_0010531f;
LAB_00105a18:
      if (local_60 != (Object *)0x0) {
        StringName::unref();
      }
      if (pRVar7 == (Ref *)0x0) goto LAB_001054cb;
    }
LAB_0010531f:
    local_60 = (Object *)pRVar7;
    cVar1 = RefCounted::reference();
    if (cVar1 == '\0') {
      local_60 = (Object *)0x0;
    }
    local_68 = (Ref *)0x0;
    Ref<GLTFState>::operator=((Ref<GLTFState> *)&local_68,(Ref *)*param_2);
    _setup_shape_mesh_resource_from_index_if_needed
              ((Ref<GLTFState> *)&local_68,(StringName *)&local_60);
    Ref<GLTFState>::unref((Ref<GLTFState> *)&local_68);
    Ref<GLTFPhysicsShape>::unref((Ref<GLTFPhysicsShape> *)&local_60);
    if (pOVar5 == (Object *)0x0) {
      if (param_4 == (Object *)0x0) {
        GLTFPhysicsShape::get_is_trigger();
LAB_00105ab8:
        local_60 = (Object *)0x0;
        local_68 = (Ref *)0x0;
        Ref<GLTFPhysicsShape>::operator=((Ref<GLTFPhysicsShape> *)&local_68,pRVar7);
        local_70 = 0;
        Ref<GLTFNode>::operator=((Ref<GLTFNode> *)&local_70,(Ref *)*param_3);
        local_78 = 0;
        Ref<GLTFState>::operator=((Ref<GLTFState> *)&local_78,(Ref *)*param_2);
        this = (Object *)
               _generate_shape_with_body
                         ((Ref<GLTFState> *)&local_78,(Ref<GLTFNode> *)&local_70,
                          (Ref<GLTFState> *)&local_68,(StringName *)&local_60);
        Ref<GLTFState>::unref((Ref<GLTFState> *)&local_78);
        Ref<GLTFNode>::unref((Ref<GLTFNode> *)&local_70);
        Ref<GLTFPhysicsShape>::unref((Ref<GLTFPhysicsShape> *)&local_68);
        Ref<GLTFPhysicsBody>::unref((Ref<GLTFPhysicsBody> *)&local_60);
      }
      else {
        lVar6 = __dynamic_cast(param_4,&Object::typeinfo,&CollisionObject3D::typeinfo,0);
        if (lVar6 == 0) {
          GLTFPhysicsShape::get_is_trigger();
          goto LAB_00105ab8;
        }
        cVar1 = GLTFPhysicsShape::get_is_trigger();
        if ((cVar1 != '\0') &&
           (lVar6 = __dynamic_cast(lVar6,&Object::typeinfo,&Area3D::typeinfo,0), lVar6 == 0))
        goto LAB_00105ab8;
        this = (Object *)GLTFPhysicsShape::to_node(SUB81(pRVar7,0));
      }
      Ref<GLTFPhysicsShape>::unref((Ref<GLTFPhysicsShape> *)&local_90);
      goto LAB_0010545f;
    }
    local_60 = pOVar5;
    cVar1 = RefCounted::reference();
    pOVar9 = pOVar5;
    if (cVar1 == '\0') {
      local_60 = (Object *)0x0;
      pOVar9 = (Object *)0x0;
    }
    local_68 = pRVar7;
    cVar1 = RefCounted::reference();
    if (cVar1 == '\0') {
      local_68 = (Ref *)0x0;
    }
    local_70 = 0;
    if ((*param_3 != 0) && (local_70 = *param_3, cVar1 = RefCounted::reference(), cVar1 == '\0')) {
      local_70 = 0;
    }
    local_78 = 0;
    Ref<GLTFState>::operator=((Ref<GLTFState> *)&local_78,(Ref *)*param_2);
    this = (Object *)
           _generate_shape_with_body
                     ((Ref<GLTFState> *)&local_78,(Ref<GLTFNode> *)&local_70,
                      (Ref<GLTFState> *)&local_68,(StringName *)&local_60);
    Ref<GLTFState>::unref((Ref<GLTFState> *)&local_78);
    Ref<GLTFNode>::unref((Ref<GLTFNode> *)&local_70);
    Ref<GLTFPhysicsShape>::unref((Ref<GLTFPhysicsShape> *)&local_68);
    if (((pOVar9 != (Object *)0x0) && (cVar1 = RefCounted::unreference(), cVar1 != '\0')) &&
       (cVar1 = predelete_handler(pOVar9), cVar1 != '\0')) {
      (**(code **)(*(long *)pOVar9 + 0x140))(pOVar9);
      Memory::free_static(pOVar9,false);
    }
    Ref<GLTFPhysicsShape>::unref((Ref<GLTFPhysicsShape> *)&local_90);
  }
  cVar1 = RefCounted::unreference();
  if ((cVar1 != '\0') && (cVar1 = predelete_handler(pOVar5), cVar1 != '\0')) {
    (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
    Memory::free_static(pOVar5,false);
  }
LAB_0010545f:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return this;
}



/* CowData<String>::_ref(CowData<String> const&) [clone .part.0] */

void __thiscall CowData<String>::_ref(CowData<String> *this,CowData *param_1)

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



/* CowData<StringName>::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<StringName>::_copy_on_write(CowData<StringName> *this)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  StringName *this_00;
  
  if ((*(long *)this == 0) || (*(ulong *)(*(long *)this + -0x10) < 2)) {
    return;
  }
  if (*(long *)this == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  lVar2 = *(long *)(*(long *)this + -8);
  uVar6 = 0x10;
  if (lVar2 * 8 != 0) {
    uVar6 = lVar2 * 8 - 1;
    uVar6 = uVar6 | uVar6 >> 1;
    uVar6 = uVar6 | uVar6 >> 2;
    uVar6 = uVar6 | uVar6 >> 4;
    uVar6 = uVar6 | uVar6 >> 8;
    uVar6 = uVar6 | uVar6 >> 0x10;
    uVar6 = (uVar6 | uVar6 >> 0x20) + 0x11;
  }
  puVar4 = (undefined8 *)Memory::alloc_static(uVar6,false);
  if (puVar4 != (undefined8 *)0x0) {
    lVar5 = 0;
    *puVar4 = 1;
    puVar4[1] = lVar2;
    this_00 = (StringName *)(puVar4 + 2);
    if (lVar2 != 0) {
      do {
        lVar1 = lVar5 * 8;
        lVar5 = lVar5 + 1;
        StringName::StringName(this_00,(StringName *)(*(long *)this + lVar1));
        this_00 = this_00 + 8;
      } while (lVar2 != lVar5);
    }
    _unref(this);
    *(StringName **)this = (StringName *)(puVar4 + 2);
    return;
  }
  _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                   "Parameter \"mem_new\" is null.",0,0);
  return;
}



/* Vector<StringName>::push_back(StringName) [clone .isra.0] */

void __thiscall Vector<StringName>::push_back(Vector<StringName> *this,StringName *param_2)

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
  iVar1 = CowData<StringName>::resize<false>((CowData<StringName> *)(this + 8),lVar2);
  if (iVar1 == 0) {
    if (*(long *)(this + 8) == 0) {
      lVar3 = -1;
      lVar2 = 0;
    }
    else {
      lVar2 = *(long *)(*(long *)(this + 8) + -8);
      lVar3 = lVar2 + -1;
      if (-1 < lVar3) {
        CowData<StringName>::_copy_on_write((CowData<StringName> *)(this + 8));
        StringName::operator=((StringName *)(*(long *)(this + 8) + lVar3 * 8),param_2);
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



/* GLTFDocumentExtensionPhysics::import_object_model_property(Ref<GLTFState>, Vector<String> const&,
   TypedArray<NodePath> const&) */

Ref<GLTFObjectModelProperty> *
GLTFDocumentExtensionPhysics::import_object_model_property
          (Ref<GLTFObjectModelProperty> *param_1,undefined8 param_2,undefined8 *param_3,long param_4
          ,int param_5)

{
  CowData *this;
  String *pSVar1;
  code *pcVar2;
  undefined8 uVar3;
  char cVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  Variant *pVVar8;
  long lVar9;
  char *pcVar10;
  long lVar11;
  NodePath *pNVar12;
  long in_FS_OFFSET;
  Array local_a0 [8];
  CowData<char32_t> local_98 [8];
  CowData<char32_t> local_90 [8];
  undefined8 local_88;
  NodePath local_80 [8];
  undefined8 local_78;
  long local_70;
  undefined8 local_68;
  undefined8 local_60;
  long local_58;
  CowData<StringName> local_50 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar11 = *(long *)(param_4 + 8);
  *(undefined8 *)param_1 = 0;
  if ((lVar11 == 0) || (*(long *)(lVar11 + -8) != 6)) goto LAB_001067e2;
  Ref<GLTFObjectModelProperty>::instantiate<>(param_1);
  pSVar1 = *(String **)(param_4 + 8);
  if (pSVar1 == (String *)0x0) {
    lVar11 = 0;
  }
  else {
    lVar11 = *(long *)(pSVar1 + -8);
    if (5 < lVar11) {
      this = (CowData *)(pSVar1 + 0x28);
      cVar4 = String::operator==(pSVar1,"extensions");
      if (cVar4 != '\0') {
        lVar9 = *(long *)(param_4 + 8);
        if (lVar9 == 0) {
LAB_00106d50:
          lVar11 = 0;
        }
        else {
          lVar11 = *(long *)(lVar9 + -8);
          if (2 < lVar11) {
            cVar4 = String::operator==((String *)(lVar9 + 0x10),"shapes");
            if (cVar4 == '\0') goto LAB_00106ae0;
            lVar9 = *(long *)(param_4 + 8);
            if (lVar9 == 0) {
LAB_00106e48:
              lVar11 = 0;
            }
            else {
              lVar11 = *(long *)(lVar9 + -8);
              if (1 < lVar11) {
                cVar4 = String::operator==((String *)(lVar9 + 8),"OMI_physics_shape");
                if (cVar4 == '\0') {
                  lVar9 = *(long *)(param_4 + 8);
                  if (lVar9 == 0) goto LAB_00106e48;
                  lVar11 = *(long *)(lVar9 + -8);
                  if (lVar11 < 2) goto LAB_00106e4b;
                  cVar4 = String::operator==((String *)(lVar9 + 8),"KHR_collision_shapes");
                  if (cVar4 == '\0') goto LAB_001067e2;
                }
                if (*(long *)(param_4 + 8) == 0) goto LAB_00106e70;
                lVar11 = *(long *)(*(long *)(param_4 + 8) + -8);
                if (lVar11 < 4) goto LAB_00106e73;
                uVar5 = String::to_int();
                local_58 = 0;
                Ref<GLTFState>::operator=((Ref<GLTFState> *)&local_58,(Ref *)*param_3);
                _get_scene_node_path_for_shape_index(local_80,(Ref<GLTFState> *)&local_58,uVar5);
                Ref<GLTFState>::unref((Ref<GLTFState> *)&local_58);
                cVar4 = NodePath::is_empty();
                if (cVar4 != '\0') {
LAB_00106df2:
                  NodePath::~NodePath(local_80);
                  goto LAB_001067e2;
                }
                local_78 = 0;
                if (*(long *)(pSVar1 + 0x28) != 0) {
                  CowData<char32_t>::_ref((CowData<char32_t> *)&local_78,this);
                }
                cVar4 = String::operator==((String *)this,"size");
                if (cVar4 == '\0') {
                  cVar4 = String::operator==((String *)this,"height");
                  if (cVar4 == '\0') {
                    cVar4 = String::operator==((String *)this,"radius");
                    if (cVar4 == '\0') {
                      cVar4 = String::operator==((String *)this,"radiusBottom");
                      if (cVar4 == '\0') {
                        cVar4 = String::operator==((String *)this,"radiusTop");
                        if (cVar4 == '\0') {
                          CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
                          goto LAB_00106df2;
                        }
                      }
                      String::parse_latin1((String *)&local_78,"radius");
                    }
                  }
                  GLTFObjectModelProperty::set_types(*(undefined8 *)param_1,3,2);
                }
                else {
                  GLTFObjectModelProperty::set_types(*(undefined8 *)param_1,9,5);
                }
                local_60 = 0;
                StringName::StringName((StringName *)&local_70,"shape",false);
                StringName::StringName((StringName *)&local_58,(StringName *)&local_70);
                Vector<StringName>::push_back
                          ((Vector<StringName> *)&local_68,(Ref<GLTFState> *)&local_58);
                if (StringName::configured != '\0') {
                  if (local_58 != 0) {
                    StringName::unref();
                    if (StringName::configured == '\0') goto LAB_00106a1f;
                  }
                  if (local_70 != 0) {
                    StringName::unref();
                  }
                }
LAB_00106a1f:
                StringName::StringName((StringName *)&local_70,(String *)&local_78,false);
                StringName::StringName((StringName *)&local_58,(StringName *)&local_70);
                Vector<StringName>::push_back
                          ((Vector<StringName> *)&local_68,(Ref<GLTFState> *)&local_58);
                if (StringName::configured != '\0') {
                  if (local_58 != 0) {
                    StringName::unref();
                    if (StringName::configured == '\0') goto LAB_00106a77;
                  }
                  if (local_70 != 0) {
                    StringName::unref();
                  }
                }
LAB_00106a77:
                NodePath::get_names();
                NodePath::NodePath((NodePath *)&local_70,(Vector *)&local_58,(Vector *)&local_68,
                                   false);
                NodePath::operator=(local_80,(NodePath *)&local_70);
                NodePath::~NodePath((NodePath *)&local_70);
                CowData<StringName>::_unref(local_50);
                GLTFObjectModelProperty::append_node_path(*(NodePath **)param_1);
                CowData<StringName>::_unref((CowData<StringName> *)&local_60);
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
                NodePath::~NodePath(local_80);
                goto LAB_001067e2;
              }
            }
LAB_00106e4b:
            lVar9 = 1;
            goto LAB_00106d73;
          }
        }
LAB_00106d53:
        lVar9 = 2;
        goto LAB_00106d73;
      }
LAB_00106ae0:
      pSVar1 = *(String **)(param_4 + 8);
      if (pSVar1 == (String *)0x0) {
        lVar11 = 0;
      }
      else {
        lVar11 = *(long *)(pSVar1 + -8);
        if (0 < lVar11) {
          cVar4 = String::operator==(pSVar1,"nodes");
          if (cVar4 == '\0') goto LAB_001067e2;
          lVar9 = *(long *)(param_4 + 8);
          if (lVar9 == 0) goto LAB_00106d50;
          lVar11 = *(long *)(lVar9 + -8);
          if (lVar11 < 3) goto LAB_00106d53;
          cVar4 = String::operator==((String *)(lVar9 + 0x10),"extensions");
          if (cVar4 == '\0') goto LAB_001067e2;
          lVar9 = *(long *)(param_4 + 8);
          if (lVar9 == 0) {
            lVar11 = 0;
          }
          else {
            lVar11 = *(long *)(lVar9 + -8);
            if (4 < lVar11) {
              cVar4 = String::operator==((String *)(lVar9 + 0x20),"motion");
              if (cVar4 == '\0') goto LAB_001067e2;
              lVar9 = *(long *)(param_4 + 8);
              if (lVar9 == 0) {
LAB_00106e70:
                lVar11 = 0;
              }
              else {
                lVar11 = *(long *)(lVar9 + -8);
                if (3 < lVar11) {
                  cVar4 = String::operator==((String *)(lVar9 + 0x18),"OMI_physics_body");
                  if (cVar4 == '\0') {
                    lVar9 = *(long *)(param_4 + 8);
                    if (lVar9 == 0) goto LAB_00106e70;
                    lVar11 = *(long *)(lVar9 + -8);
                    if (lVar11 < 4) goto LAB_00106e73;
                    cVar4 = String::operator==((String *)(lVar9 + 0x18),"KHR_physics_rigid_bodies");
                    if (cVar4 == '\0') goto LAB_001067e2;
                  }
                  if (*(long *)(param_4 + 8) == 0) goto LAB_00106e48;
                  lVar11 = *(long *)(*(long *)(param_4 + 8) + -8);
                  if (lVar11 < 2) goto LAB_00106e4b;
                  iVar6 = String::to_int();
                  GLTFState::get_nodes();
                  if (iVar6 < 0) {
LAB_00106fd6:
                    local_68 = 0;
                    String::parse_latin1((String *)&local_68,").");
                    Array::size();
                    itos((long)&local_78);
                    local_88 = 0;
                    String::parse_latin1((String *)&local_88," is not in the state nodes (size: ");
                    itos((long)local_98);
                    operator+((char *)local_90,(String *)"GLTF Physics: The node index ");
                    String::operator+((String *)local_80,(String *)local_90);
                    String::operator+((String *)&local_70,(String *)local_80);
                    String::operator+((String *)&local_58,(String *)&local_70);
                    iVar7 = Array::size();
                    _err_print_index_error
                              ("import_object_model_property",
                               "modules/gltf/extensions/physics/gltf_document_extension_physics.cpp"
                               ,0xfb,(long)iVar6,(long)iVar7,"node_index","all_gltf_nodes.size()",
                               (String *)&local_58,false,false);
                    CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
                    CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
                    CowData<char32_t>::_unref((CowData<char32_t> *)local_80);
                    CowData<char32_t>::_unref(local_90);
                    CowData<char32_t>::_unref(local_98);
                    CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
                    CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
                    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
                  }
                  else {
                    iVar7 = Array::size();
                    if (iVar7 <= iVar6) goto LAB_00106fd6;
                    pVVar8 = (Variant *)Array::operator[]((int)local_a0);
                    local_78 = 0;
                    Ref<GLTFNode>::operator=((Ref<GLTFNode> *)&local_78,pVVar8);
                    local_70 = 0;
                    cVar4 = Array::is_empty();
                    uVar3 = local_78;
                    if (cVar4 == '\0') {
                      Array::operator[](param_5);
                      Variant::operator_cast_to_NodePath((Variant *)&local_58);
                      NodePath::operator=((NodePath *)&local_70,(NodePath *)&local_58);
                      NodePath::~NodePath((NodePath *)&local_58);
                    }
                    else {
                      local_68 = 0;
                      Ref<GLTFState>::operator=((Ref<GLTFState> *)&local_68,(Ref *)*param_3);
                      GLTFNode::get_scene_node_path
                                ((NodePath *)&local_58,uVar3,(Ref<GLTFState> *)&local_68,1);
                      NodePath::operator=((NodePath *)&local_70,(NodePath *)&local_58);
                      NodePath::~NodePath((NodePath *)&local_58);
                      Ref<GLTFState>::unref((Ref<GLTFState> *)&local_68);
                    }
                    cVar4 = String::operator==((String *)this,"mass");
                    if (cVar4 == '\0') {
                      cVar4 = String::operator==((String *)this,"linearVelocity");
                      if (cVar4 == '\0') {
                        cVar4 = String::operator==((String *)this,"angularVelocity");
                        if (cVar4 == '\0') {
                          cVar4 = String::operator==((String *)this,"centerOfMass");
                          if (cVar4 == '\0') {
                            cVar4 = String::operator==((String *)this,"inertiaDiagonal");
                            if (cVar4 == '\0') {
                              cVar4 = String::operator==((String *)this,"inertiaOrientation");
                              if (cVar4 != '\0') {
                                _err_print_error("import_object_model_property",
                                                 "modules/gltf/extensions/physics/gltf_document_extension_physics.cpp"
                                                 ,0x114,
                                                 "GLTF Physics: The \'inertiaOrientation\' property is not supported by Godot."
                                                 ,0,1);
                              }
                              goto LAB_00106d2a;
                            }
                            pNVar12 = *(NodePath **)param_1;
                            pcVar10 = "inertia";
                          }
                          else {
                            pNVar12 = *(NodePath **)param_1;
                            pcVar10 = "center_of_mass";
                          }
                        }
                        else {
                          pNVar12 = *(NodePath **)param_1;
                          pcVar10 = "angular_velocity";
                        }
                        StringName::StringName((StringName *)&local_58,pcVar10,false);
                        GLTFObjectModelProperty::append_path_to_property
                                  (pNVar12,(StringName *)&local_70);
                        if ((StringName::configured != '\0') && (local_58 != 0)) {
                          StringName::unref();
                        }
                        GLTFObjectModelProperty::set_types(*(undefined8 *)param_1,9,5);
                      }
                      else {
                        pNVar12 = *(NodePath **)param_1;
                        StringName::StringName((StringName *)&local_58,"linear_velocity",false);
                        GLTFObjectModelProperty::append_path_to_property
                                  (pNVar12,(StringName *)&local_70);
                        if ((StringName::configured != '\0') && (local_58 != 0)) {
                          StringName::unref();
                        }
                        GLTFObjectModelProperty::set_types(*(undefined8 *)param_1,9,5);
                      }
                    }
                    else {
                      pNVar12 = *(NodePath **)param_1;
                      StringName::StringName((StringName *)&local_58,"mass",false);
                      GLTFObjectModelProperty::append_path_to_property
                                (pNVar12,(StringName *)&local_70);
                      if ((StringName::configured != '\0') && (local_58 != 0)) {
                        StringName::unref();
                      }
                      GLTFObjectModelProperty::set_types(*(undefined8 *)param_1,3,2);
                    }
LAB_00106d2a:
                    NodePath::~NodePath((NodePath *)&local_70);
                    Ref<GLTFNode>::unref((Ref<GLTFNode> *)&local_78);
                  }
                  Array::~Array(local_a0);
LAB_001067e2:
                  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                    return param_1;
                  }
                    /* WARNING: Subroutine does not return */
                  __stack_chk_fail();
                }
              }
LAB_00106e73:
              lVar9 = 3;
              goto LAB_00106d73;
            }
          }
          lVar9 = 4;
          goto LAB_00106d73;
        }
      }
      lVar9 = 0;
      goto LAB_00106d73;
    }
  }
  lVar9 = 5;
LAB_00106d73:
  _err_print_index_error
            ("get","./core/templates/cowdata.h",0xdb,lVar9,lVar11,"p_index","size()","",false,true);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
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



/* GLTFDocumentExtensionPhysics::get_supported_extensions() */

GLTFDocumentExtensionPhysics * __thiscall
GLTFDocumentExtensionPhysics::get_supported_extensions(GLTFDocumentExtensionPhysics *this)

{
  long *plVar1;
  long lVar2;
  long in_FS_OFFSET;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined8 *)(this + 8) = 0;
  local_40 = 0;
  local_38 = "OMI_collider";
  local_30 = 0xc;
  String::parse_latin1((StrRange *)&local_40);
  Vector<String>::push_back((Vector<String> *)this,(StrRange *)&local_40);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_40);
  local_38 = "OMI_physics_body";
  local_40 = 0;
  local_30 = 0x10;
  String::parse_latin1((StrRange *)&local_40);
  Vector<String>::push_back((Vector<String> *)this,(StrRange *)&local_40);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_40);
  local_38 = "OMI_physics_shape";
  local_40 = 0;
  local_30 = 0x11;
  String::parse_latin1((StrRange *)&local_40);
  Vector<String>::push_back((Vector<String> *)this);
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



/* GLTFDocumentExtensionPhysics::import_preflight(Ref<GLTFState>, Vector<String>) */

undefined8 __thiscall
GLTFDocumentExtensionPhysics::import_preflight(undefined8 param_1,undefined8 *param_2,long param_3)

{
  char cVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  CowData<String> *this;
  long in_FS_OFFSET;
  Dictionary *local_b0;
  int local_a4;
  Dictionary *local_a0;
  Variant local_98 [8];
  Variant local_90 [8];
  Variant local_88 [8];
  Variant local_80 [8];
  undefined8 local_78;
  undefined8 local_70;
  Object *local_68;
  undefined8 local_60;
  int local_58 [6];
  long local_40;
  
  this = (CowData<String> *)(param_3 + 8);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_78 = 0;
  local_68 = (Object *)0x109a06;
  local_60 = 0xc;
  String::parse_latin1((StrRange *)&local_78);
  lVar3 = CowData<String>::find(this,(StrRange *)&local_78,0);
  if (lVar3 == -1) {
    local_70 = 0;
    local_68 = (Object *)0x1099a1;
    local_60 = 0x10;
    String::parse_latin1((StrRange *)&local_70);
    lVar3 = CowData<String>::find(this,(StrRange *)&local_70,0);
    if (lVar3 == -1) {
      local_68 = (Object *)0x0;
      String::parse_latin1((String *)&local_68,"OMI_physics_shape");
      lVar3 = CowData<String>::find(this,(String *)&local_68,0);
      if (lVar3 == -1) {
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
        uVar4 = 0x2d;
        goto LAB_00107540;
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  GLTFState::get_json();
  Variant::Variant((Variant *)local_58,"extensions");
  cVar1 = Dictionary::has(local_98);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (cVar1 != '\0') {
    Variant::Variant((Variant *)local_58,"extensions");
    Dictionary::operator[](local_98);
    Variant::operator_cast_to_Dictionary(local_90);
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    Variant::Variant((Variant *)local_58,"OMI_physics_shape");
    cVar1 = Dictionary::has(local_90);
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (cVar1 == '\0') {
      Variant::Variant((Variant *)local_58,"OMI_collider");
      cVar1 = Dictionary::has(local_90);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (cVar1 != '\0') {
        Variant::Variant((Variant *)local_58,"OMI_collider");
        Dictionary::operator[](local_90);
        Variant::operator_cast_to_Dictionary(local_88);
        if (Variant::needs_deinit[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
        local_b0 = (Dictionary *)local_88;
        Variant::Variant((Variant *)local_58,"colliders");
        cVar1 = Dictionary::has((Variant *)local_b0);
        if (Variant::needs_deinit[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
        if (cVar1 != '\0') {
          Variant::Variant((Variant *)local_58,"colliders");
          Dictionary::operator[]((Variant *)local_b0);
          Variant::operator_cast_to_Array(local_80);
          if (Variant::needs_deinit[local_58[0]] != '\0') {
            Variant::_clear_internal();
          }
          iVar2 = Array::size();
          if (0 < iVar2) {
            Array::Array((Array *)&local_78);
            for (local_a4 = 0; iVar2 = Array::size(), local_a4 < iVar2; local_a4 = local_a4 + 1) {
              Array::operator[]((int)local_80);
              Variant::operator_cast_to_Dictionary((Variant *)&local_70);
              GLTFPhysicsShape::from_dictionary((String *)&local_68,(Variant *)&local_70);
              Variant::Variant((Variant *)local_58,local_68);
              Array::push_back((Variant *)&local_78);
              if (Variant::needs_deinit[local_58[0]] != '\0') {
                Variant::_clear_internal();
              }
              Ref<GLTFPhysicsShape>::unref((Ref<GLTFPhysicsShape> *)&local_68);
              Dictionary::~Dictionary((Dictionary *)&local_70);
            }
            goto LAB_00107935;
          }
          goto LAB_001077d8;
        }
        goto LAB_0010765d;
      }
    }
    else {
      Variant::Variant((Variant *)local_58,"OMI_physics_shape");
      Dictionary::operator[](local_90);
      Variant::operator_cast_to_Dictionary(local_88);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      Variant::Variant((Variant *)local_58,"shapes");
      cVar1 = Dictionary::has(local_88);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (cVar1 != '\0') {
        Variant::Variant((Variant *)local_58,"shapes");
        Dictionary::operator[](local_88);
        Variant::operator_cast_to_Array(local_80);
        if (Variant::needs_deinit[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
        iVar2 = Array::size();
        if (0 < iVar2) {
          Array::Array((Array *)&local_78);
          local_a4 = 0;
          while( true ) {
            local_a0 = (Dictionary *)&local_70;
            iVar2 = Array::size();
            if (iVar2 <= local_a4) break;
            Array::operator[]((int)local_80);
            Variant::operator_cast_to_Dictionary((Variant *)local_a0);
            GLTFPhysicsShape::from_dictionary((String *)&local_68,local_a0);
            Variant::Variant((Variant *)local_58,local_68);
            Array::push_back((Variant *)&local_78);
            if (Variant::needs_deinit[local_58[0]] != '\0') {
              Variant::_clear_internal();
            }
            local_a0 = (Dictionary *)&local_70;
            Ref<GLTFPhysicsShape>::unref((Ref<GLTFPhysicsShape> *)&local_68);
            Dictionary::~Dictionary(local_a0);
            local_a4 = local_a4 + 1;
          }
LAB_00107935:
          uVar4 = *param_2;
          Variant::Variant((Variant *)local_58,(StrRange *)&local_78);
          StringName::StringName((StringName *)&local_68,"GLTFPhysicsShapes",false);
          GLTFState::set_additional_data(uVar4,(String *)&local_68,(Variant *)local_58);
          if ((StringName::configured != '\0') && (local_68 != (Object *)0x0)) {
            StringName::unref();
          }
          if (Variant::needs_deinit[local_58[0]] != '\0') {
            Variant::_clear_internal();
          }
          Array::~Array((Array *)&local_78);
        }
LAB_001077d8:
        Array::~Array((Array *)local_80);
      }
LAB_0010765d:
      local_b0 = (Dictionary *)local_88;
      Dictionary::~Dictionary(local_b0);
    }
    Dictionary::~Dictionary((Dictionary *)local_90);
  }
  Dictionary::~Dictionary((Dictionary *)local_98);
  uVar4 = 0;
LAB_00107540:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar4;
}



/* CowData<Vector<String> >::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<Vector<String>>::_copy_on_write(CowData<Vector<String>> *this)

{
  long lVar1;
  code *pcVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  CowData<String> *this_00;
  long lVar6;
  
  if ((*(long *)this == 0) || (*(ulong *)(*(long *)this + -0x10) < 2)) {
    return;
  }
  if (*(long *)this == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  lVar1 = *(long *)(*(long *)this + -8);
  uVar5 = 0x10;
  if (lVar1 * 0x10 != 0) {
    uVar5 = lVar1 * 0x10 - 1;
    uVar5 = uVar5 | uVar5 >> 1;
    uVar5 = uVar5 | uVar5 >> 2;
    uVar5 = uVar5 | uVar5 >> 4;
    uVar5 = uVar5 | uVar5 >> 8;
    uVar5 = uVar5 | uVar5 >> 0x10;
    uVar5 = (uVar5 | uVar5 >> 0x20) + 0x11;
  }
  puVar3 = (undefined8 *)Memory::alloc_static(uVar5,false);
  if (puVar3 == (undefined8 *)0x0) {
    _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                     "Parameter \"mem_new\" is null.",0,0);
    return;
  }
  this_00 = (CowData<String> *)(puVar3 + 3);
  lVar6 = 0;
  *puVar3 = 1;
  puVar3[1] = lVar1;
  if (lVar1 != 0) {
    do {
      lVar4 = lVar6 * 0x10 + *(long *)this;
      *(undefined8 *)this_00 = 0;
      if (*(long *)(lVar4 + 8) != 0) {
        CowData<String>::_ref(this_00,(CowData *)(lVar4 + 8));
      }
      lVar6 = lVar6 + 1;
      this_00 = this_00 + 0x10;
    } while (lVar1 != lVar6);
  }
  _unref(this);
  *(undefined8 **)this = puVar3 + 2;
  return;
}



/* GLTFDocumentExtensionPhysics::export_object_model_property(Ref<GLTFState>, NodePath const&, Node
   const*, int, Object const*, int) */

Ref<GLTFObjectModelProperty> *
GLTFDocumentExtensionPhysics::export_object_model_property(Ref<GLTFObjectModelProperty> *param_1)

{
  char cVar1;
  Vector *pVVar2;
  code *pcVar3;
  long *plVar4;
  int iVar5;
  long lVar6;
  Variant *pVVar7;
  char *pcVar8;
  long in_R8;
  long lVar9;
  int in_R9D;
  long in_FS_OFFSET;
  long in_stack_00000008;
  Array local_c8 [8];
  undefined8 local_c0;
  long local_b8;
  long local_b0 [2];
  long *local_a0;
  Vector<String> local_98 [8];
  long local_90;
  long local_88;
  long local_80;
  int local_78 [2];
  long local_70;
  undefined8 uStack_68;
  int local_58 [2];
  long local_50;
  undefined8 uStack_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined8 *)param_1 = 0;
  NodePath::get_subnames();
  if (local_a0 == (long *)0x0) goto LAB_00107cfb;
  Ref<GLTFObjectModelProperty>::instantiate<>(param_1);
  plVar4 = local_a0;
  if (local_a0 == (long *)0x0) {
    lVar9 = 0;
  }
  else {
    lVar9 = local_a0[-1];
    if (0 < lVar9) {
      if ((in_stack_00000008 == 0) ||
         (lVar6 = __dynamic_cast(in_stack_00000008,&Object::typeinfo,&RigidBody3D::typeinfo),
         lVar6 == 0)) {
        if ((in_R8 == 0) ||
           ((lVar6 = __dynamic_cast(in_R8,&Object::typeinfo,&CollisionShape3D::typeinfo,0),
            lVar6 == 0 || (lVar9 != 2)))) goto LAB_00107cfb;
        local_90 = 0;
        local_b0[0] = 0;
        String::parse_latin1((String *)local_b0,"extensions");
        local_88 = 0;
        if (local_b0[0] != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_88,(CowData *)local_b0);
        }
        Vector<String>::push_back(local_98,(CowData<char32_t> *)&local_88);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
        CowData<char32_t>::_unref((CowData<char32_t> *)local_b0);
        local_b0[0] = 0;
        String::parse_latin1((String *)local_b0,"OMI_physics_shape");
        local_88 = 0;
        if (local_b0[0] != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_88,(CowData *)local_b0);
        }
        Vector<String>::push_back(local_98,(CowData<char32_t> *)&local_88);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
        CowData<char32_t>::_unref((CowData<char32_t> *)local_b0);
        local_b0[0] = 0;
        String::parse_latin1((String *)local_b0,"shapes");
        local_88 = 0;
        if (local_b0[0] != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_88,(CowData *)local_b0);
        }
        Vector<String>::push_back(local_98,(CowData<char32_t> *)&local_88);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
        CowData<char32_t>::_unref((CowData<char32_t> *)local_b0);
        GLTFState::get_nodes();
        if ((in_R9D < 0) || (iVar5 = Array::size(), iVar5 <= in_R9D)) {
          iVar5 = Array::size();
          _err_print_index_error
                    ("export_object_model_property",
                     "modules/gltf/extensions/physics/gltf_document_extension_physics.cpp",0x299,
                     (long)in_R9D,(long)iVar5,"p_gltf_node_index","state_gltf_nodes.size()","",false
                     ,false);
        }
        else {
          pVVar7 = (Variant *)Array::operator[]((int)local_c8);
          local_c0 = 0;
          Ref<GLTFNode>::operator=((Ref<GLTFNode> *)&local_c0,pVVar7);
          StringName::StringName((StringName *)&local_88,"GLTFPhysicsColliderShapeIndex",false);
          GLTFNode::get_additional_data((StringName *)local_78);
          if ((StringName::configured != '\0') && (local_88 != 0)) {
            StringName::unref();
          }
          local_b8 = 0;
          if (local_78[0] == 2) {
            StringName::StringName((StringName *)&local_88,"GLTFPhysicsColliderShape",false);
            GLTFNode::get_additional_data((StringName *)local_58);
            local_b0[0] = 0;
            Ref<GLTFPhysicsShape>::operator=((Ref<GLTFPhysicsShape> *)local_b0,(Variant *)local_58);
            cVar1 = Variant::needs_deinit[local_58[0]];
joined_r0x0010853e:
            if (cVar1 != '\0') {
              Variant::_clear_internal();
            }
            if ((StringName::configured != '\0') && (local_88 != 0)) {
              StringName::unref();
            }
            GLTFPhysicsShape::get_shape_type();
            if (local_88 != 0) {
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
              local_b8 = local_88;
              local_88 = 0;
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
            Ref<GLTFPhysicsShape>::unref((Ref<GLTFPhysicsShape> *)local_b0);
            if (local_78[0] != 2) goto LAB_00107fb2;
            Variant::operator_cast_to_long((Variant *)local_78);
            itos((long)local_b0);
            local_88 = 0;
            if (local_b0[0] != 0) {
              CowData<char32_t>::_ref((CowData<char32_t> *)&local_88,(CowData *)local_b0);
            }
            Vector<String>::push_back(local_98,(CowData<char32_t> *)&local_88);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
            CowData<char32_t>::_unref((CowData<char32_t> *)local_b0);
            local_88 = 0;
            if (local_b8 != 0) {
              CowData<char32_t>::_ref((CowData<char32_t> *)&local_88,(CowData *)&local_b8);
            }
            Vector<String>::push_back(local_98,(CowData<char32_t> *)&local_88);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
            if (local_a0 == (long *)0x0) {
              lVar9 = 0;
LAB_001089da:
              lVar6 = 1;
              goto LAB_00108310;
            }
            lVar9 = local_a0[-1];
            if (lVar9 < 2) goto LAB_001089da;
            StringName::StringName((StringName *)&local_88,"size",false);
            lVar6 = local_88;
            lVar9 = local_a0[1];
            if ((StringName::configured != '\0') && (local_88 != 0)) {
              StringName::unref();
            }
            if (lVar9 == lVar6) {
              local_b0[0] = 0;
              String::parse_latin1((String *)local_b0,"size");
              local_88 = 0;
              if (local_b0[0] != 0) {
                CowData<char32_t>::_ref((CowData<char32_t> *)&local_88,(CowData *)local_b0);
              }
              Vector<String>::push_back(local_98,(CowData<char32_t> *)&local_88);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
              CowData<char32_t>::_unref((CowData<char32_t> *)local_b0);
              GLTFObjectModelProperty::set_types(*(undefined8 *)param_1,9,5);
LAB_0010878a:
              pVVar2 = *(Vector **)param_1;
              local_50 = 0;
              if (local_90 != 0) {
                CowData<String>::_ref((CowData<String> *)&local_50,(CowData *)&local_90);
              }
              local_80 = 0;
              iVar5 = CowData<Vector<String>>::resize<false>((CowData<Vector<String>> *)&local_80,1)
              ;
              if (iVar5 == 0) {
                if (local_80 == 0) {
                  lVar9 = 0;
                }
                else {
                  lVar9 = *(long *)(local_80 + -8);
                  if (0 < lVar9) {
                    CowData<Vector<String>>::_copy_on_write((CowData<Vector<String>> *)&local_80);
                    if (*(long *)(local_80 + 8) != local_50) {
                      CowData<String>::_ref((CowData<String> *)(local_80 + 8),(CowData *)&local_50);
                    }
                    goto LAB_0010881f;
                  }
                }
                _err_print_index_error
                          ("set","./core/templates/cowdata.h",0xcf,0,lVar9,"p_index","size()","",
                           false,false);
              }
LAB_0010881f:
              GLTFObjectModelProperty::set_json_pointers(pVVar2);
              CowData<Vector<String>>::_unref((CowData<Vector<String>> *)&local_80);
              CowData<String>::_unref((CowData<String> *)&local_50);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
              if (Variant::needs_deinit[local_78[0]] != '\0') {
                Variant::_clear_internal();
              }
              Ref<GLTFNode>::unref((Ref<GLTFNode> *)&local_c0);
              Array::~Array(local_c8);
              CowData<String>::_unref((CowData<String> *)&local_90);
              goto LAB_00107cfb;
            }
            pcVar8 = "radius";
            StringName::StringName((StringName *)&local_88,"radius",false);
            lVar6 = local_88;
            lVar9 = local_a0[1];
            if ((StringName::configured != '\0') && (local_88 != 0)) {
              StringName::unref();
            }
            if (lVar9 == lVar6) {
LAB_0010872b:
              local_b0[0] = 0;
              String::parse_latin1((String *)local_b0,pcVar8);
              local_88 = 0;
              if (local_b0[0] != 0) {
                CowData<char32_t>::_ref((CowData<char32_t> *)&local_88,(CowData *)local_b0);
              }
              Vector<String>::push_back(local_98,(CowData<char32_t> *)&local_88);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
              CowData<char32_t>::_unref((CowData<char32_t> *)local_b0);
              GLTFObjectModelProperty::set_types(*(undefined8 *)param_1,3,2);
              goto LAB_0010878a;
            }
            pcVar8 = "height";
            StringName::StringName((StringName *)&local_88,"height",false);
            lVar6 = local_88;
            lVar9 = local_a0[1];
            if ((local_88 != 0) && (StringName::configured != '\0')) {
              StringName::unref();
            }
            if (lVar9 == lVar6) goto LAB_0010872b;
          }
          else {
            StringName::StringName((StringName *)&local_88,"GLTFPhysicsTriggerShapeIndex",false);
            GLTFNode::get_additional_data((StringName *)local_58);
            if (Variant::needs_deinit[local_78[0]] != '\0') {
              Variant::_clear_internal();
            }
            local_78[0] = local_58[0];
            local_70 = local_50;
            uStack_68 = uStack_48;
            if ((StringName::configured != '\0') && (local_88 != 0)) {
              StringName::unref();
            }
            if (local_78[0] == 2) {
              StringName::StringName((StringName *)&local_88,"GLTFPhysicsTriggerShape",false);
              GLTFNode::get_additional_data((StringName *)local_58);
              local_b0[0] = 0;
              Ref<GLTFPhysicsShape>::operator=
                        ((Ref<GLTFPhysicsShape> *)local_b0,(Variant *)local_58);
              cVar1 = Variant::needs_deinit[local_58[0]];
              goto joined_r0x0010853e;
            }
LAB_00107fb2:
            _err_print_error("export_object_model_property",
                             "modules/gltf/extensions/physics/gltf_document_extension_physics.cpp",
                             0x2a7,
                             "Condition \"shape_index_maybe.get_type() != Variant::INT\" is true. Returning: ret"
                             ,0,0);
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
          if (Variant::needs_deinit[local_78[0]] != '\0') {
            Variant::_clear_internal();
          }
          Ref<GLTFNode>::unref((Ref<GLTFNode> *)&local_c0);
        }
        Array::~Array(local_c8);
LAB_001082db:
        CowData<String>::_unref((CowData<String> *)&local_90);
        goto LAB_00107cfb;
      }
      if (lVar9 != 1) goto LAB_00107cfb;
      local_90 = 0;
      local_b0[0] = 0;
      String::parse_latin1((String *)local_b0,"nodes");
      local_88 = 0;
      if (local_b0[0] != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_88,(CowData *)local_b0);
      }
      Vector<String>::push_back(local_98,(CowData<char32_t> *)&local_88);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_b0);
      itos((long)local_b0);
      local_88 = 0;
      if (local_b0[0] != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_88,(CowData *)local_b0);
      }
      Vector<String>::push_back(local_98,(CowData<char32_t> *)&local_88);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_b0);
      local_b0[0] = 0;
      String::parse_latin1((String *)local_b0,"extensions");
      local_88 = 0;
      if (local_b0[0] != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_88,(CowData *)local_b0);
      }
      Vector<String>::push_back(local_98,(CowData<char32_t> *)&local_88);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_b0);
      local_b0[0] = 0;
      String::parse_latin1((String *)local_b0,"OMI_physics_body");
      local_88 = 0;
      if (local_b0[0] != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_88,(CowData *)local_b0);
      }
      Vector<String>::push_back(local_98,(CowData<char32_t> *)&local_88);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_b0);
      local_b0[0] = 0;
      String::parse_latin1((String *)local_b0,"motion");
      local_88 = 0;
      if (local_b0[0] != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_88,(CowData *)local_b0);
      }
      Vector<String>::push_back(local_98,(CowData<char32_t> *)&local_88);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_b0);
      StringName::StringName((StringName *)&local_88,"mass",false);
      lVar6 = local_88;
      lVar9 = *plVar4;
      if ((StringName::configured != '\0') && (local_88 != 0)) {
        StringName::unref();
      }
      if (lVar9 == lVar6) {
        local_b0[0] = 0;
        String::parse_latin1((String *)local_b0,"mass");
        local_88 = 0;
        if (local_b0[0] != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_88,(CowData *)local_b0);
        }
        Vector<String>::push_back(local_98,(CowData<char32_t> *)&local_88);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
        CowData<char32_t>::_unref((CowData<char32_t> *)local_b0);
        GLTFObjectModelProperty::set_types(*(undefined8 *)param_1,3,2);
      }
      else {
        StringName::StringName((StringName *)&local_88,"linear_velocity",false);
        lVar6 = local_88;
        lVar9 = *plVar4;
        if ((local_88 != 0) && (StringName::configured != '\0')) {
          StringName::unref();
        }
        if (lVar9 == lVar6) {
          pcVar8 = "linearVelocity";
        }
        else {
          StringName::StringName((StringName *)&local_88,"angular_velocity",false);
          lVar6 = local_88;
          lVar9 = *plVar4;
          if ((StringName::configured != '\0') && (local_88 != 0)) {
            StringName::unref();
          }
          if (lVar9 != lVar6) {
            StringName::StringName((StringName *)&local_88,"center_of_mass",false);
            lVar6 = local_88;
            lVar9 = *plVar4;
            if ((local_88 != 0) && (StringName::configured != '\0')) {
              StringName::unref();
            }
            if (lVar9 == lVar6) {
              pcVar8 = "centerOfMass";
              goto LAB_00108348;
            }
            StringName::StringName((StringName *)&local_88,"inertia",false);
            lVar6 = local_88;
            lVar9 = *plVar4;
            if ((local_88 != 0) && (StringName::configured != '\0')) {
              StringName::unref();
            }
            if (lVar9 == lVar6) {
              pcVar8 = "inertiaDiagonal";
              goto LAB_00108348;
            }
            goto LAB_001082db;
          }
          pcVar8 = "angularVelocity";
        }
LAB_00108348:
        local_b0[0] = 0;
        String::parse_latin1((String *)local_b0,pcVar8);
        local_88 = 0;
        if (local_b0[0] != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_88,(CowData *)local_b0);
        }
        Vector<String>::push_back(local_98,(CowData<char32_t> *)&local_88);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
        CowData<char32_t>::_unref((CowData<char32_t> *)local_b0);
        GLTFObjectModelProperty::set_types(*(undefined8 *)param_1,9,5);
      }
      pVVar2 = *(Vector **)param_1;
      local_50 = 0;
      if (local_90 != 0) {
        CowData<String>::_ref((CowData<String> *)&local_50,(CowData *)&local_90);
      }
      local_80 = 0;
      iVar5 = CowData<Vector<String>>::resize<false>((CowData<Vector<String>> *)&local_80,1);
      if (iVar5 == 0) {
        if (local_80 == 0) {
          lVar9 = 0;
        }
        else {
          lVar9 = *(long *)(local_80 + -8);
          if (0 < lVar9) {
            CowData<Vector<String>>::_copy_on_write((CowData<Vector<String>> *)&local_80);
            if (*(long *)(local_80 + 8) != local_50) {
              CowData<String>::_ref((CowData<String> *)(local_80 + 8),(CowData *)&local_50);
            }
            goto LAB_0010842b;
          }
        }
        _err_print_index_error
                  ("set","./core/templates/cowdata.h",0xcf,0,lVar9,"p_index","size()","",false,false
                  );
      }
LAB_0010842b:
      GLTFObjectModelProperty::set_json_pointers(pVVar2);
      CowData<Vector<String>>::_unref((CowData<Vector<String>> *)&local_80);
      CowData<String>::_unref((CowData<String> *)&local_50);
      CowData<String>::_unref((CowData<String> *)&local_90);
LAB_00107cfb:
      CowData<StringName>::_unref((CowData<StringName> *)&local_a0);
      if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return param_1;
    }
  }
  lVar6 = 0;
LAB_00108310:
  _err_print_index_error
            ("get","./core/templates/cowdata.h",0xdb,lVar6,lVar9,"p_index","size()","",false,true);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar3 = (code *)invalidInstructionException();
  (*pcVar3)();
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
  return (uint)CONCAT71(0x10f0,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10f0,(undefined4 *)param_1 == &get_class_ptr_static()::ptr);
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



/* GLTFMesh::is_class_ptr(void*) const */

uint __thiscall GLTFMesh::is_class_ptr(GLTFMesh *this,void *param_1)

{
  return (uint)CONCAT71(0x10f0,(undefined4 *)param_1 == &Resource::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10f0,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10f0,(undefined4 *)param_1 == &RefCounted::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10f0,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* GLTFMesh::_getv(StringName const&, Variant&) const */

undefined8 GLTFMesh::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* GLTFMesh::_setv(StringName const&, Variant const&) */

undefined8 GLTFMesh::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* GLTFMesh::_validate_propertyv(PropertyInfo&) const */

void GLTFMesh::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* GLTFMesh::_property_can_revertv(StringName const&) const */

undefined8 GLTFMesh::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* GLTFMesh::_property_get_revertv(StringName const&, Variant&) const */

undefined8 GLTFMesh::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* GLTFMesh::_notificationv(int, bool) */

void GLTFMesh::_notificationv(int param_1,bool param_2)

{
  return;
}



/* GLTFObjectModelProperty::is_class_ptr(void*) const */

uint __thiscall GLTFObjectModelProperty::is_class_ptr(GLTFObjectModelProperty *this,void *param_1)

{
  return (uint)CONCAT71(0x10f0,(undefined4 *)param_1 == &RefCounted::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10f0,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10f0,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* GLTFObjectModelProperty::_getv(StringName const&, Variant&) const */

undefined8 GLTFObjectModelProperty::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* GLTFObjectModelProperty::_setv(StringName const&, Variant const&) */

undefined8 GLTFObjectModelProperty::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* GLTFObjectModelProperty::_validate_propertyv(PropertyInfo&) const */

void GLTFObjectModelProperty::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* GLTFObjectModelProperty::_property_can_revertv(StringName const&) const */

undefined8 GLTFObjectModelProperty::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* GLTFObjectModelProperty::_property_get_revertv(StringName const&, Variant&) const */

undefined8 GLTFObjectModelProperty::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* GLTFObjectModelProperty::_notificationv(int, bool) */

void GLTFObjectModelProperty::_notificationv(int param_1,bool param_2)

{
  return;
}



/* GLTFPhysicsBody::is_class_ptr(void*) const */

uint __thiscall GLTFPhysicsBody::is_class_ptr(GLTFPhysicsBody *this,void *param_1)

{
  return (uint)CONCAT71(0x10f0,(undefined4 *)param_1 == &Resource::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10ef,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10f0,(undefined4 *)param_1 == &RefCounted::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10f0,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* GLTFPhysicsBody::_getv(StringName const&, Variant&) const */

undefined8 GLTFPhysicsBody::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* GLTFPhysicsBody::_setv(StringName const&, Variant const&) */

undefined8 GLTFPhysicsBody::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* GLTFPhysicsBody::_validate_propertyv(PropertyInfo&) const */

void GLTFPhysicsBody::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* GLTFPhysicsBody::_property_can_revertv(StringName const&) const */

undefined8 GLTFPhysicsBody::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* GLTFPhysicsBody::_property_get_revertv(StringName const&, Variant&) const */

undefined8 GLTFPhysicsBody::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* GLTFPhysicsBody::_notificationv(int, bool) */

void GLTFPhysicsBody::_notificationv(int param_1,bool param_2)

{
  return;
}



/* GLTFDocumentExtensionPhysics::is_class_ptr(void*) const */

uint __thiscall
GLTFDocumentExtensionPhysics::is_class_ptr(GLTFDocumentExtensionPhysics *this,void *param_1)

{
  return (uint)CONCAT71(0x10ef,(undefined4 *)param_1 ==
                               &GLTFDocumentExtension::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10ef,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10f0,(undefined4 *)param_1 == &Resource::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10f0,(undefined4 *)param_1 == &RefCounted::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10f0,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* GLTFDocumentExtensionPhysics::_getv(StringName const&, Variant&) const */

undefined8 GLTFDocumentExtensionPhysics::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* GLTFDocumentExtensionPhysics::_setv(StringName const&, Variant const&) */

undefined8 GLTFDocumentExtensionPhysics::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* GLTFDocumentExtensionPhysics::_validate_propertyv(PropertyInfo&) const */

void GLTFDocumentExtensionPhysics::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* GLTFDocumentExtensionPhysics::_property_can_revertv(StringName const&) const */

undefined8 GLTFDocumentExtensionPhysics::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* GLTFDocumentExtensionPhysics::_property_get_revertv(StringName const&, Variant&) const */

undefined8 GLTFDocumentExtensionPhysics::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* GLTFDocumentExtensionPhysics::_notificationv(int, bool) */

void GLTFDocumentExtensionPhysics::_notificationv(int param_1,bool param_2)

{
  return;
}



/* GLTFPhysicsBody::~GLTFPhysicsBody() */

void __thiscall GLTFPhysicsBody::~GLTFPhysicsBody(GLTFPhysicsBody *this)

{
  *(undefined ***)this = &PTR__initialize_classv_0010eb60;
  Resource::~Resource((Resource *)this);
  return;
}



/* GLTFPhysicsBody::~GLTFPhysicsBody() */

void __thiscall GLTFPhysicsBody::~GLTFPhysicsBody(GLTFPhysicsBody *this)

{
  *(undefined ***)this = &PTR__initialize_classv_0010eb60;
  Resource::~Resource((Resource *)this);
  operator_delete(this,0x288);
  return;
}



/* RefCounted::~RefCounted() */

void __thiscall RefCounted::~RefCounted(RefCounted *this)

{
  *(undefined ***)this = &PTR__initialize_classv_0010e6c8;
  Object::~Object((Object *)this);
  return;
}



/* RefCounted::~RefCounted() */

void __thiscall RefCounted::~RefCounted(RefCounted *this)

{
  *(undefined ***)this = &PTR__initialize_classv_0010e6c8;
  Object::~Object((Object *)this);
  operator_delete(this,0x180);
  return;
}



/* GLTFPhysicsBody::_get_class_namev() const */

undefined8 * GLTFPhysicsBody::_get_class_namev(void)

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
LAB_00108f03:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00108f03;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"GLTFPhysicsBody");
      goto LAB_00108f6e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"GLTFPhysicsBody");
LAB_00108f6e:
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



/* GLTFObjectModelProperty::_get_class_namev() const */

undefined8 * GLTFObjectModelProperty::_get_class_namev(void)

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
LAB_00109063:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00109063;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"GLTFObjectModelProperty");
      goto LAB_001090ce;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"GLTFObjectModelProperty");
LAB_001090ce:
  return &_get_class_namev()::_class_name_static;
}



/* GLTFMesh::_get_class_namev() const */

undefined8 * GLTFMesh::_get_class_namev(void)

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
LAB_00109143:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00109143;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"GLTFMesh");
      goto LAB_001091ae;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"GLTFMesh");
LAB_001091ae:
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
LAB_00109223:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00109223;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"RefCounted");
      goto LAB_0010928e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"RefCounted");
LAB_0010928e:
  return &_get_class_namev()::_class_name_static;
}



/* GLTFDocumentExtensionPhysics::_get_class_namev() const */

undefined8 * GLTFDocumentExtensionPhysics::_get_class_namev(void)

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
LAB_00109323:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00109323;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,
                 "GLTFDocumentExtensionPhysics");
      goto LAB_0010938e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"GLTFDocumentExtensionPhysics");
LAB_0010938e:
  return &_get_class_namev()::_class_name_static;
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



/* GLTFObjectModelProperty::get_class() const */

void GLTFObjectModelProperty::get_class(void)

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



/* GLTFMesh::get_class() const */

void GLTFMesh::get_class(void)

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



/* GLTFPhysicsBody::get_class() const */

void GLTFPhysicsBody::get_class(void)

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



/* GLTFDocumentExtensionPhysics::get_class() const */

void GLTFDocumentExtensionPhysics::get_class(void)

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



/* void Ref<GLTFObjectModelProperty>::instantiate<>() */

void __thiscall Ref<GLTFObjectModelProperty>::instantiate<>(Ref<GLTFObjectModelProperty> *this)

{
  char cVar1;
  RefCounted *this_00;
  long lVar2;
  RefCounted *pRVar3;
  Object *pOVar4;
  long in_FS_OFFSET;
  byte bVar5;
  long local_50;
  undefined8 local_48;
  undefined1 local_40 [16];
  long local_30;
  
  bVar5 = 0;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  this_00 = (RefCounted *)operator_new(0x1b8,"");
  pRVar3 = this_00;
  for (lVar2 = 0x37; lVar2 != 0; lVar2 = lVar2 + -1) {
    *(undefined8 *)pRVar3 = 0;
    pRVar3 = pRVar3 + (ulong)bVar5 * -0x10 + 8;
  }
  RefCounted::RefCounted(this_00);
  *(undefined ***)this_00 = &PTR__initialize_classv_0010ea00;
  *(undefined1 (*) [16])(this_00 + 0x180) = (undefined1  [16])0x0;
  Array::Array((Array *)(this_00 + 400));
  local_48 = 0;
  local_50 = 0;
  local_40 = (undefined1  [16])0x0;
  Array::set_typed((uint)(Array *)(this_00 + 400),(StringName *)0x16,(Variant *)&local_50);
  if ((StringName::configured != '\0') && (local_50 != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[(int)local_48] != '\0') {
    Variant::_clear_internal();
  }
  *(undefined4 *)(this_00 + 0x198) = 0;
  *(undefined8 *)(this_00 + 0x1a8) = 0;
  *(undefined4 *)(this_00 + 0x1b0) = 0;
  postinitialize_handler((Object *)this_00);
  cVar1 = RefCounted::init_ref();
  if (cVar1 == '\0') {
    pOVar4 = *(Object **)this;
    if (pOVar4 != (Object *)0x0) {
      *(undefined8 *)this = 0;
      cVar1 = RefCounted::unreference();
      if (cVar1 != '\0') {
        this_00 = (RefCounted *)0x0;
        cVar1 = predelete_handler(pOVar4);
        if (cVar1 != '\0') goto LAB_0010a37b;
      }
    }
  }
  else {
    pOVar4 = *(Object **)this;
    pRVar3 = (RefCounted *)pOVar4;
    if (this_00 != (RefCounted *)pOVar4) {
      *(RefCounted **)this = this_00;
      cVar1 = RefCounted::reference();
      if (cVar1 == '\0') {
        *(undefined8 *)this = 0;
      }
      pRVar3 = this_00;
      if (((pOVar4 != (Object *)0x0) && (cVar1 = RefCounted::unreference(), cVar1 != '\0')) &&
         (cVar1 = predelete_handler(pOVar4), cVar1 != '\0')) {
LAB_0010a37b:
        (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
        Memory::free_static(pOVar4,false);
        pRVar3 = this_00;
        if (this_00 == (RefCounted *)0x0) goto LAB_0010a2bb;
      }
    }
    cVar1 = RefCounted::unreference();
    if ((cVar1 != '\0') && (cVar1 = predelete_handler((Object *)pRVar3), cVar1 != '\0')) {
      (**(code **)(*(long *)pRVar3 + 0x140))(pRVar3);
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        Memory::free_static(pRVar3,false);
        return;
      }
      goto LAB_0010a3c8;
    }
  }
LAB_0010a2bb:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_0010a3c8:
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



/* GLTFObjectModelProperty::_initialize_classv() */

void GLTFObjectModelProperty::_initialize_classv(void)

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
      if ((code *)PTR__bind_methods_00112008 != RefCounted::_bind_methods) {
        RefCounted::_bind_methods();
      }
      RefCounted::initialize_class()::initialized = '\x01';
    }
    local_58 = "RefCounted";
    local_68 = 0;
    local_50 = 10;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "GLTFObjectModelProperty";
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
    if ((code *)PTR__bind_methods_00112010 != RefCounted::_bind_methods) {
      GLTFObjectModelProperty::_bind_methods();
    }
    initialize_class()::initialized = '\x01';
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* void Ref<GLTFMesh>::instantiate<>() */

void __thiscall Ref<GLTFMesh>::instantiate<>(Ref<GLTFMesh> *this)

{
  char cVar1;
  Resource *this_00;
  long lVar2;
  Resource *pRVar3;
  Object *pOVar4;
  long in_FS_OFFSET;
  byte bVar5;
  undefined8 local_70;
  char *local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined1 local_50 [16];
  long local_40;
  
  bVar5 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  this_00 = (Resource *)operator_new(0x270,"");
  pRVar3 = this_00;
  for (lVar2 = 0x4e; lVar2 != 0; lVar2 = lVar2 + -1) {
    *(undefined8 *)pRVar3 = 0;
    pRVar3 = pRVar3 + (ulong)bVar5 * -0x10 + 8;
  }
  Resource::Resource(this_00);
  *(undefined ***)this_00 = &PTR__initialize_classv_0010e828;
  *(undefined8 *)(this_00 + 600) = 0;
  *(undefined1 (*) [16])(this_00 + 0x240) = (undefined1  [16])0x0;
  Array::Array((Array *)(this_00 + 0x260));
  local_50 = (undefined1  [16])0x0;
  local_68 = "Material";
  local_58 = 0;
  local_70 = 0;
  local_60 = 8;
  String::parse_latin1((StrRange *)&local_70);
  StringName::StringName((StringName *)&local_68,(String *)&local_70,false);
  Array::set_typed((uint)(Array *)(this_00 + 0x260),(StringName *)0x18,(Variant *)&local_68);
  if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  Dictionary::Dictionary((Dictionary *)(this_00 + 0x268));
  postinitialize_handler((Object *)this_00);
  cVar1 = RefCounted::init_ref();
  if (cVar1 == '\0') {
    pOVar4 = *(Object **)this;
    if (pOVar4 != (Object *)0x0) {
      *(undefined8 *)this = 0;
      cVar1 = RefCounted::unreference();
      if (cVar1 != '\0') {
        this_00 = (Resource *)0x0;
        cVar1 = predelete_handler(pOVar4);
        if (cVar1 != '\0') goto LAB_0010a8a3;
      }
    }
  }
  else {
    pOVar4 = *(Object **)this;
    pRVar3 = (Resource *)pOVar4;
    if (this_00 != (Resource *)pOVar4) {
      *(Resource **)this = this_00;
      cVar1 = RefCounted::reference();
      if (cVar1 == '\0') {
        *(undefined8 *)this = 0;
      }
      pRVar3 = this_00;
      if (((pOVar4 != (Object *)0x0) && (cVar1 = RefCounted::unreference(), cVar1 != '\0')) &&
         (cVar1 = predelete_handler(pOVar4), cVar1 != '\0')) {
LAB_0010a8a3:
        (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
        Memory::free_static(pOVar4,false);
        pRVar3 = this_00;
        if (this_00 == (Resource *)0x0) goto LAB_0010a7df;
      }
    }
    cVar1 = RefCounted::unreference();
    if ((cVar1 != '\0') && (cVar1 = predelete_handler((Object *)pRVar3), cVar1 != '\0')) {
      (**(code **)(*(long *)pRVar3 + 0x140))(pRVar3);
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        Memory::free_static(pRVar3,false);
        return;
      }
      goto LAB_0010a8f0;
    }
  }
LAB_0010a7df:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_0010a8f0:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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
        if (pvVar5 == (void *)0x0) goto LAB_0010aa54;
      }
    }
    Memory::free_static(pvVar5,false);
    Memory::free_static(*(void **)(this + 0x20),false);
  }
LAB_0010aa54:
  CowData<char32_t>::_unref((CowData<char32_t> *)this);
  return;
}



/* GLTFMesh::~GLTFMesh() */

void __thiscall GLTFMesh::~GLTFMesh(GLTFMesh *this)

{
  long *plVar1;
  long lVar2;
  Object *pOVar3;
  char cVar4;
  
  *(undefined ***)this = &PTR__initialize_classv_0010e828;
  Dictionary::~Dictionary((Dictionary *)(this + 0x268));
  Array::~Array((Array *)(this + 0x260));
  if (*(long *)(this + 600) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 600) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 600);
      *(undefined8 *)(this + 600) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (*(long *)(this + 0x248) != 0) {
    cVar4 = RefCounted::unreference();
    if (cVar4 != '\0') {
      pOVar3 = *(Object **)(this + 0x248);
      cVar4 = predelete_handler(pOVar3);
      if (cVar4 != '\0') {
        (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
        Memory::free_static(pOVar3,false);
      }
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0x240));
  Resource::~Resource((Resource *)this);
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
    cVar5 = String::operator==((String *)param_1,(String *)&local_60);
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
    if (cVar5 != '\0') goto LAB_0010ac7b;
  }
  cVar5 = String::operator==((String *)param_1,"RefCounted");
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
      cVar5 = String::operator==((String *)param_1,(String *)&local_60);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if (cVar5 != '\0') goto LAB_0010ac7b;
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar6 = String::operator==((String *)param_1,"Object");
      return uVar6;
    }
  }
  else {
LAB_0010ac7b:
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
    cVar4 = String::operator==((String *)param_1,(String *)&local_60);
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
    if (cVar4 != '\0') goto LAB_0010ae8b;
  }
  cVar4 = String::operator==((String *)param_1,"Resource");
  if (cVar4 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar5 = RefCounted::is_class((RefCounted *)this,param_1);
      return uVar5;
    }
  }
  else {
LAB_0010ae8b:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GLTFPhysicsBody::is_class(String const&) const */

undefined8 __thiscall GLTFPhysicsBody::is_class(GLTFPhysicsBody *this,String *param_1)

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
    cVar4 = String::operator==((String *)param_1,(String *)&local_60);
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
    if (cVar4 != '\0') goto LAB_0010afdb;
  }
  cVar4 = String::operator==((String *)param_1,"GLTFPhysicsBody");
  if (cVar4 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar5 = Resource::is_class((Resource *)this,param_1);
      return uVar5;
    }
  }
  else {
LAB_0010afdb:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GLTFMesh::is_class(String const&) const */

undefined8 __thiscall GLTFMesh::is_class(GLTFMesh *this,String *param_1)

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
    cVar4 = String::operator==((String *)param_1,(String *)&local_60);
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
    if (cVar4 != '\0') goto LAB_0010b12b;
  }
  cVar4 = String::operator==((String *)param_1,"GLTFMesh");
  if (cVar4 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar5 = Resource::is_class((Resource *)this,param_1);
      return uVar5;
    }
  }
  else {
LAB_0010b12b:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GLTFObjectModelProperty::is_class(String const&) const */

undefined8 __thiscall
GLTFObjectModelProperty::is_class(GLTFObjectModelProperty *this,String *param_1)

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
    cVar4 = String::operator==((String *)param_1,(String *)&local_60);
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
    if (cVar4 != '\0') goto LAB_0010b27b;
  }
  cVar4 = String::operator==((String *)param_1,"GLTFObjectModelProperty");
  if (cVar4 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar5 = RefCounted::is_class((RefCounted *)this,param_1);
      return uVar5;
    }
  }
  else {
LAB_0010b27b:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GLTFMesh::~GLTFMesh() */

void __thiscall GLTFMesh::~GLTFMesh(GLTFMesh *this)

{
  long *plVar1;
  long lVar2;
  Object *pOVar3;
  char cVar4;
  
  *(undefined ***)this = &PTR__initialize_classv_0010e828;
  Dictionary::~Dictionary((Dictionary *)(this + 0x268));
  Array::~Array((Array *)(this + 0x260));
  if (*(long *)(this + 600) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 600) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 600);
      *(undefined8 *)(this + 600) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (*(long *)(this + 0x248) != 0) {
    cVar4 = RefCounted::unreference();
    if (cVar4 != '\0') {
      pOVar3 = *(Object **)(this + 0x248);
      cVar4 = predelete_handler(pOVar3);
      if (cVar4 != '\0') {
        (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
        Memory::free_static(pOVar3,false);
      }
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0x240));
  Resource::~Resource((Resource *)this);
  operator_delete(this,0x270);
  return;
}



/* GLTFDocumentExtensionPhysics::is_class(String const&) const */

undefined8 __thiscall
GLTFDocumentExtensionPhysics::is_class(GLTFDocumentExtensionPhysics *this,String *param_1)

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
    cVar5 = String::operator==((String *)param_1,(String *)&local_60);
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
    if (cVar5 != '\0') goto LAB_0010b4cb;
  }
  cVar5 = String::operator==((String *)param_1,"GLTFDocumentExtensionPhysics");
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
      cVar5 = String::operator==((String *)param_1,(String *)&local_60);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if (cVar5 != '\0') goto LAB_0010b4cb;
    }
    cVar5 = String::operator==((String *)param_1,"GLTFDocumentExtension");
    if (cVar5 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar6 = Resource::is_class((Resource *)this,param_1);
        return uVar6;
      }
      goto LAB_0010b5d5;
    }
  }
LAB_0010b4cb:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0010b5d5:
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
    if ((code *)PTR__bind_methods_00112018 != Object::_bind_methods) {
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



/* GLTFMesh::_initialize_classv() */

void GLTFMesh::_initialize_classv(void)

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
    local_48 = "GLTFMesh";
    local_60 = 0;
    local_40 = 8;
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
    if ((code *)PTR__bind_methods_00112020 != Resource::_bind_methods) {
      GLTFMesh::_bind_methods();
    }
    initialize_class()::initialized = '\x01';
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GLTFDocumentExtensionPhysics::_initialize_classv() */

void GLTFDocumentExtensionPhysics::_initialize_classv(void)

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
    if (GLTFDocumentExtension::initialize_class()::initialized == '\0') {
      if (Resource::initialize_class()::initialized == '\0') {
        Resource::initialize_class();
      }
      local_58 = 0;
      local_40 = 8;
      local_48 = "Resource";
      String::parse_latin1((StrRange *)&local_58);
      StringName::StringName((StringName *)&local_50,(String *)&local_58,false);
      local_48 = "GLTFDocumentExtension";
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
      if ((code *)PTR__bind_methods_00112028 != Resource::_bind_methods) {
        GLTFDocumentExtension::_bind_methods();
      }
      GLTFDocumentExtension::initialize_class()::initialized = '\x01';
    }
    local_48 = "GLTFDocumentExtension";
    local_58 = 0;
    local_40 = 0x15;
    String::parse_latin1((StrRange *)&local_58);
    StringName::StringName((StringName *)&local_50,(String *)&local_58,false);
    local_48 = "GLTFDocumentExtensionPhysics";
    local_60 = 0;
    local_40 = 0x1c;
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



/* GLTFPhysicsBody::_initialize_classv() */

void GLTFPhysicsBody::_initialize_classv(void)

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
    local_48 = "GLTFPhysicsBody";
    local_60 = 0;
    local_40 = 0xf;
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
    if ((code *)PTR__bind_methods_00112030 != Resource::_bind_methods) {
      GLTFPhysicsBody::_bind_methods();
    }
    initialize_class()::initialized = '\x01';
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
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
      goto LAB_0010bd6c;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0010bd6c:
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
      goto LAB_0010bfd1;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0010bfd1:
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



/* GLTFPhysicsBody::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall
GLTFPhysicsBody::_get_property_listv(GLTFPhysicsBody *this,List *param_1,bool param_2)

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
  local_78 = "GLTFPhysicsBody";
  local_70 = 0xf;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "GLTFPhysicsBody";
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
      goto LAB_0010c281;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0010c281:
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
  StringName::StringName((StringName *)&local_78,"GLTFPhysicsBody",false);
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



/* GLTFMesh::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall GLTFMesh::_get_property_listv(GLTFMesh *this,List *param_1,bool param_2)

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
  local_78 = "GLTFMesh";
  local_70 = 8;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "GLTFMesh";
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
      goto LAB_0010c531;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0010c531:
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
  StringName::StringName((StringName *)&local_78,"GLTFMesh",false);
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



/* GLTFDocumentExtension::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall
GLTFDocumentExtension::_get_property_listv(GLTFDocumentExtension *this,List *param_1,bool param_2)

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
  local_78 = "GLTFDocumentExtension";
  local_70 = 0x15;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "GLTFDocumentExtension";
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
      goto LAB_0010c7e1;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0010c7e1:
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
  StringName::StringName((StringName *)&local_78,"GLTFDocumentExtension",false);
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



/* GLTFDocumentExtensionPhysics::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool)
   const */

void __thiscall
GLTFDocumentExtensionPhysics::_get_property_listv
          (GLTFDocumentExtensionPhysics *this,List *param_1,bool param_2)

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
    GLTFDocumentExtension::_get_property_listv((GLTFDocumentExtension *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "GLTFDocumentExtensionPhysics";
  local_70 = 0x1c;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "GLTFDocumentExtensionPhysics";
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
      goto LAB_0010ca91;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0010ca91:
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
  StringName::StringName((StringName *)&local_78,"GLTFDocumentExtensionPhysics",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      GLTFDocumentExtension::_get_property_listv((GLTFDocumentExtension *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GLTFObjectModelProperty::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const
    */

void __thiscall
GLTFObjectModelProperty::_get_property_listv
          (GLTFObjectModelProperty *this,List *param_1,bool param_2)

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
  local_78 = "GLTFObjectModelProperty";
  local_70 = 0x17;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "GLTFObjectModelProperty";
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
      goto LAB_0010cd41;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0010cd41:
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
  StringName::StringName((StringName *)&local_78,"GLTFObjectModelProperty",false);
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



/* Ref<GLTFState>::unref() */

void __thiscall Ref<GLTFState>::unref(Ref<GLTFState> *this)

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



/* Ref<GLTFNode>::unref() */

void __thiscall Ref<GLTFNode>::unref(Ref<GLTFNode> *this)

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



/* Ref<ImporterMesh>::unref() */

void __thiscall Ref<ImporterMesh>::unref(Ref<ImporterMesh> *this)

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



/* Ref<GLTFPhysicsShape>::unref() */

void __thiscall Ref<GLTFPhysicsShape>::unref(Ref<GLTFPhysicsShape> *this)

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



/* Ref<GLTFPhysicsBody>::unref() */

void __thiscall Ref<GLTFPhysicsBody>::unref(Ref<GLTFPhysicsBody> *this)

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



/* Ref<GLTFNode>::TEMPNAMEPLACEHOLDERVALUE(Variant const&) */

void __thiscall Ref<GLTFNode>::operator=(Ref<GLTFNode> *this,Variant *param_1)

{
  Object *pOVar1;
  char cVar2;
  Object *pOVar3;
  
  pOVar3 = (Object *)Variant::get_validated_object();
  pOVar1 = *(Object **)this;
  if (pOVar1 == pOVar3) {
    return;
  }
  if (pOVar3 == (Object *)0x0) {
    if (pOVar1 == (Object *)0x0) {
      return;
    }
    *(undefined8 *)this = 0;
  }
  else {
    pOVar3 = (Object *)__dynamic_cast(pOVar3,&Object::typeinfo,&GLTFNode::typeinfo,0);
    if (pOVar1 == pOVar3) {
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



/* Ref<GLTFPhysicsShape>::TEMPNAMEPLACEHOLDERVALUE(Variant const&) */

void __thiscall Ref<GLTFPhysicsShape>::operator=(Ref<GLTFPhysicsShape> *this,Variant *param_1)

{
  Object *pOVar1;
  char cVar2;
  Object *pOVar3;
  
  pOVar3 = (Object *)Variant::get_validated_object();
  pOVar1 = *(Object **)this;
  if (pOVar1 == pOVar3) {
    return;
  }
  if (pOVar3 == (Object *)0x0) {
    if (pOVar1 == (Object *)0x0) {
      return;
    }
    *(undefined8 *)this = 0;
  }
  else {
    pOVar3 = (Object *)__dynamic_cast(pOVar3,&Object::typeinfo,&GLTFPhysicsShape::typeinfo,0);
    if (pOVar1 == pOVar3) {
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



/* CowData<String>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<String>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<StringName>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<StringName>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<Vector<String> >::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<Vector<String>>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<StringName>::_unref() */

void __thiscall CowData<StringName>::_unref(CowData<StringName> *this)

{
  long *plVar1;
  long lVar2;
  code *pcVar3;
  long *plVar4;
  long lVar5;
  
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
      lVar2 = plVar1[-1];
      *(undefined8 *)this = 0;
      if (lVar2 != 0) {
        lVar5 = 0;
        plVar4 = plVar1;
        do {
          if ((StringName::configured != '\0') && (*plVar4 != 0)) {
            StringName::unref();
          }
          lVar5 = lVar5 + 1;
          plVar4 = plVar4 + 1;
        } while (lVar2 != lVar5);
      }
      Memory::free_static(plVar1 + -2,false);
      return;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  *(undefined8 *)this = 0;
  return;
}



/* CowData<StringName>::_realloc(long) */

undefined8 __thiscall CowData<StringName>::_realloc(CowData<StringName> *this,long param_1)

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
/* Error CowData<StringName>::resize<false>(long) */

undefined8 __thiscall CowData<StringName>::resize<false>(CowData<StringName> *this,long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
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
LAB_0010d750:
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
  lVar8 = uVar6 + 1;
  if (lVar8 == 0) goto LAB_0010d750;
  if (param_1 <= lVar4) {
    lVar4 = *(long *)this;
    uVar6 = param_1;
    while (lVar4 != 0) {
      if (*(ulong *)(lVar4 + -8) <= uVar6) {
LAB_0010d62a:
        if (lVar8 != lVar5) {
          uVar2 = _realloc(this,lVar8);
          if ((int)uVar2 != 0) {
            return uVar2;
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
      while ((StringName::configured == '\0' || (*(long *)(lVar4 + uVar6 * 8) == 0))) {
        uVar6 = uVar6 + 1;
        if (*(ulong *)(lVar4 + -8) <= uVar6) goto LAB_0010d62a;
      }
      StringName::unref();
      uVar6 = uVar6 + 1;
      lVar4 = *(long *)this;
    }
    goto LAB_0010d5f7;
  }
  if (lVar8 == lVar5) {
LAB_0010d6cb:
    puVar7 = *(undefined8 **)this;
    if (puVar7 == (undefined8 *)0x0) {
LAB_0010d5f7:
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    lVar4 = puVar7[-1];
    if (param_1 <= lVar4) goto LAB_0010d6ab;
  }
  else {
    if (lVar4 != 0) {
      uVar2 = _realloc(this,lVar8);
      if ((int)uVar2 != 0) {
        return uVar2;
      }
      goto LAB_0010d6cb;
    }
    puVar3 = (undefined8 *)Memory::alloc_static(uVar6 + 0x11,false);
    if (puVar3 == (undefined8 *)0x0) {
      _err_print_error("resize","./core/templates/cowdata.h",0x171,"Parameter \"mem_new\" is null.",
                       0,0);
      return 6;
    }
    puVar7 = puVar3 + 2;
    *puVar3 = 1;
    puVar3[1] = 0;
    *(undefined8 **)this = puVar7;
    lVar4 = 0;
  }
  memset(puVar7 + lVar4,0,(param_1 - lVar4) * 8);
LAB_0010d6ab:
  puVar7[-1] = param_1;
  return 0;
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
LAB_0010da70:
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
  if (lVar9 == 0) goto LAB_0010da70;
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
    goto LAB_0010dac6;
  }
  if (lVar9 == lVar5) {
LAB_0010d9eb:
    puVar7 = *(undefined8 **)this;
    if (puVar7 == (undefined8 *)0x0) {
LAB_0010dac6:
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    lVar4 = puVar7[-1];
    if (param_1 <= lVar4) goto LAB_0010d95f;
  }
  else {
    if (lVar4 != 0) {
      uVar3 = _realloc(this,lVar9);
      if ((int)uVar3 != 0) {
        return uVar3;
      }
      goto LAB_0010d9eb;
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
LAB_0010d95f:
  puVar7[-1] = param_1;
  return 0;
}



/* CowData<String>::find(String const&, long) const */

long __thiscall CowData<String>::find(CowData<String> *this,String *param_1,long param_2)

{
  char cVar1;
  long lVar2;
  long lVar3;
  
  if (param_2 < 0) {
    return -1;
  }
  lVar2 = *(long *)this;
  if ((lVar2 != 0) && (lVar3 = *(long *)(lVar2 + -8), lVar3 != 0)) {
    while (param_2 < lVar3) {
      cVar1 = String::operator==((String *)(lVar2 + param_2 * 8),(String *)param_1);
      if (cVar1 != '\0') {
        return param_2;
      }
      lVar2 = *(long *)this;
      param_2 = param_2 + 1;
      if (lVar2 == 0) {
        return -1;
      }
      lVar3 = *(long *)(lVar2 + -8);
    }
  }
  return -1;
}



/* CowData<Vector<String> >::_unref() */

void __thiscall CowData<Vector<String>>::_unref(CowData<Vector<String>> *this)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  long lVar5;
  CowData<String> *this_00;
  
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
        lVar5 = 0;
        this_00 = (CowData<String> *)(lVar2 + 8);
        do {
          lVar5 = lVar5 + 1;
          CowData<String>::_unref(this_00);
          this_00 = this_00 + 0x10;
        } while (lVar3 != lVar5);
      }
      Memory::free_static((void *)(lVar2 + -0x10),false);
      return;
    }
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  *(undefined8 *)this = 0;
  return;
}



/* GLTFObjectModelProperty::~GLTFObjectModelProperty() */

void __thiscall GLTFObjectModelProperty::~GLTFObjectModelProperty(GLTFObjectModelProperty *this)

{
  Object *pOVar1;
  char cVar2;
  
  *(undefined ***)this = &PTR__initialize_classv_0010ea00;
  CowData<Vector<String>>::_unref((CowData<Vector<String>> *)(this + 0x1a8));
  Array::~Array((Array *)(this + 400));
  if (*(long *)(this + 0x188) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0x188);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  if (*(long *)(this + 0x180) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0x180);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  *(undefined ***)this = &PTR__initialize_classv_0010e6c8;
  Object::~Object((Object *)this);
  return;
}



/* GLTFObjectModelProperty::~GLTFObjectModelProperty() */

void __thiscall GLTFObjectModelProperty::~GLTFObjectModelProperty(GLTFObjectModelProperty *this)

{
  Object *pOVar1;
  char cVar2;
  
  *(undefined ***)this = &PTR__initialize_classv_0010ea00;
  CowData<Vector<String>>::_unref((CowData<Vector<String>> *)(this + 0x1a8));
  Array::~Array((Array *)(this + 400));
  if (*(long *)(this + 0x188) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0x188);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  if (*(long *)(this + 0x180) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0x180);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  *(undefined ***)this = &PTR__initialize_classv_0010e6c8;
  Object::~Object((Object *)this);
  operator_delete(this,0x1b8);
  return;
}



/* CowData<Vector<String> >::_realloc(long) */

undefined8 __thiscall CowData<Vector<String>>::_realloc(CowData<Vector<String>> *this,long param_1)

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
/* Error CowData<Vector<String> >::resize<false>(long) */

undefined8 __thiscall
CowData<Vector<String>>::resize<false>(CowData<Vector<String>> *this,long param_1)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 *puVar5;
  ulong uVar6;
  long lVar7;
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
    lVar7 = 0;
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
    lVar7 = lVar4 * 0x10;
    if (lVar7 != 0) {
      uVar8 = lVar7 - 1U | lVar7 - 1U >> 1;
      uVar8 = uVar8 | uVar8 >> 2;
      uVar8 = uVar8 | uVar8 >> 4;
      uVar8 = uVar8 | uVar8 >> 8;
      uVar8 = uVar8 | uVar8 >> 0x10;
      lVar7 = (uVar8 | uVar8 >> 0x20) + 1;
    }
  }
  if (param_1 * 0x10 == 0) {
LAB_0010e0a0:
    _err_print_error("resize","./core/templates/cowdata.h",0x16a,
                     "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                     ,0,0);
    return 6;
  }
  uVar8 = param_1 * 0x10 - 1;
  uVar8 = uVar8 >> 1 | uVar8;
  uVar8 = uVar8 | uVar8 >> 2;
  uVar8 = uVar8 | uVar8 >> 4;
  uVar8 = uVar8 | uVar8 >> 8;
  uVar8 = uVar8 | uVar8 >> 0x10;
  uVar8 = uVar8 | uVar8 >> 0x20;
  lVar9 = uVar8 + 1;
  if (lVar9 == 0) goto LAB_0010e0a0;
  uVar6 = param_1;
  if (param_1 <= lVar4) {
    while (lVar4 = *(long *)this, lVar4 != 0) {
      if (*(ulong *)(lVar4 + -8) <= uVar6) {
        if (lVar9 != lVar7) {
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
      CowData<String>::_unref((CowData<String> *)(lVar4 + 8 + uVar6 * 0x10));
      uVar6 = uVar6 + 1;
    }
    goto LAB_0010e0f6;
  }
  if (lVar9 == lVar7) {
LAB_0010e013:
    puVar5 = *(undefined8 **)this;
    if (puVar5 == (undefined8 *)0x0) {
LAB_0010e0f6:
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    lVar4 = puVar5[-1];
    if (param_1 <= lVar4) goto LAB_0010df71;
  }
  else {
    if (lVar4 != 0) {
      uVar3 = _realloc(this,lVar9);
      if ((int)uVar3 != 0) {
        return uVar3;
      }
      goto LAB_0010e013;
    }
    puVar2 = (undefined8 *)Memory::alloc_static(uVar8 + 0x11,false);
    if (puVar2 == (undefined8 *)0x0) {
      _err_print_error("resize","./core/templates/cowdata.h",0x171,"Parameter \"mem_new\" is null.",
                       0,0);
      return 6;
    }
    puVar5 = puVar2 + 2;
    *puVar2 = 1;
    puVar2[1] = 0;
    *(undefined8 **)this = puVar5;
    lVar4 = 0;
  }
  puVar2 = puVar5 + lVar4 * 2;
  do {
    puVar2[1] = 0;
    puVar2 = puVar2 + 2;
  } while (puVar2 != puVar5 + param_1 * 2);
LAB_0010df71:
  puVar5[-1] = param_1;
  return 0;
}



/* GLTFDocumentExtension::~GLTFDocumentExtension() */

void __thiscall GLTFDocumentExtension::~GLTFDocumentExtension(GLTFDocumentExtension *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(undefined **)this = &Resource::typeinfo;
  if (bVar1) {
    if (*(long *)(this + 0x450) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010e427;
    }
    if (*(long *)(this + 0x438) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010e427;
    }
    if (*(long *)(this + 0x420) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010e427;
    }
    if (*(long *)(this + 0x408) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010e427;
    }
    if (*(long *)(this + 0x3f0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010e427;
    }
    if (*(long *)(this + 0x3d8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010e427;
    }
    if (*(long *)(this + 0x3c0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010e427;
    }
    if (*(long *)(this + 0x3a8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010e427;
    }
    if (*(long *)(this + 0x390) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010e427;
    }
    if (*(long *)(this + 0x378) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010e427;
    }
    if (*(long *)(this + 0x360) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010e427;
    }
    if (*(long *)(this + 0x348) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010e427;
    }
    if (*(long *)(this + 0x330) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010e427;
    }
    if (*(long *)(this + 0x318) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010e427;
    }
    if (*(long *)(this + 0x300) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010e427;
    }
    if (*(long *)(this + 0x2e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010e427;
    }
    if (*(long *)(this + 0x2d0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010e427;
    }
    if (*(long *)(this + 0x2b8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010e427;
    }
    if (*(long *)(this + 0x2a0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010e427;
    }
    if (*(long *)(this + 0x288) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010e427;
    }
    if (*(long *)(this + 0x270) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010e427;
    }
    if (*(long *)(this + 600) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010e427;
    }
    if (*(long *)(this + 0x240) != 0) {
      StringName::unref();
    }
  }
LAB_0010e427:
  Resource::~Resource((Resource *)this);
  return;
}



/* GLTFDocumentExtensionPhysics::~GLTFDocumentExtensionPhysics() */

void __thiscall
GLTFDocumentExtensionPhysics::~GLTFDocumentExtensionPhysics(GLTFDocumentExtensionPhysics *this)

{
  *(undefined ***)this = &PTR__initialize_classv_0010ed38;
  GLTFDocumentExtension::~GLTFDocumentExtension((GLTFDocumentExtension *)this);
  return;
}



/* GLTFDocumentExtensionPhysics::~GLTFDocumentExtensionPhysics() */

void __thiscall
GLTFDocumentExtensionPhysics::~GLTFDocumentExtensionPhysics(GLTFDocumentExtensionPhysics *this)

{
  *(undefined ***)this = &PTR__initialize_classv_0010ed38;
  GLTFDocumentExtension::~GLTFDocumentExtension((GLTFDocumentExtension *)this);
  operator_delete(this,0x468);
  return;
}



/* GLTFDocumentExtension::~GLTFDocumentExtension() */

void __thiscall GLTFDocumentExtension::~GLTFDocumentExtension(GLTFDocumentExtension *this)

{
  ~GLTFDocumentExtension(this);
  operator_delete(this,0x468);
  return;
}



/* GLTFDocumentExtensionPhysics::import_preflight(Ref<GLTFState>, Vector<String>) */

void GLTFDocumentExtensionPhysics::_GLOBAL__sub_I_import_preflight(void)

{
  if (Animation::PARAMETERS_BASE_PATH == '\0') {
    Animation::PARAMETERS_BASE_PATH = '\x01';
    Animation::PARAMETERS_BASE_PATH = 0;
    String::parse_latin1((String *)&Animation::PARAMETERS_BASE_PATH,"parameters/");
    __cxa_atexit(String::~String,&Animation::PARAMETERS_BASE_PATH,&__dso_handle);
  }
  if (AudioStreamRandomizer::base_property_helper != '\0') {
    return;
  }
  AudioStreamRandomizer::base_property_helper = 1;
  AudioStreamRandomizer::base_property_helper._56_8_ = 2;
  AudioStreamRandomizer::base_property_helper._64_8_ = 0;
  AudioStreamRandomizer::base_property_helper._0_16_ = (undefined1  [16])0x0;
  AudioStreamRandomizer::base_property_helper._24_16_ = (undefined1  [16])0x0;
  AudioStreamRandomizer::base_property_helper._40_16_ = (undefined1  [16])0x0;
  __cxa_atexit(PropertyListHelper::~PropertyListHelper,AudioStreamRandomizer::base_property_helper,
               &__dso_handle);
  return;
}



/* WARNING: Control flow encountered bad instruction data */
/* String::~String() */

void __thiscall String::~String(String *this)

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
/* GLTFPhysicsBody::~GLTFPhysicsBody() */

void __thiscall GLTFPhysicsBody::~GLTFPhysicsBody(GLTFPhysicsBody *this)

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
/* GLTFDocumentExtensionPhysics::~GLTFDocumentExtensionPhysics() */

void __thiscall
GLTFDocumentExtensionPhysics::~GLTFDocumentExtensionPhysics(GLTFDocumentExtensionPhysics *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* GLTFDocumentExtension::~GLTFDocumentExtension() */

void __thiscall GLTFDocumentExtension::~GLTFDocumentExtension(GLTFDocumentExtension *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* GLTFObjectModelProperty::~GLTFObjectModelProperty() */

void __thiscall GLTFObjectModelProperty::~GLTFObjectModelProperty(GLTFObjectModelProperty *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* GLTFMesh::~GLTFMesh() */

void __thiscall GLTFMesh::~GLTFMesh(GLTFMesh *this)

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



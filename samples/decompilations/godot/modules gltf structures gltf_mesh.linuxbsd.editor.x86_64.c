
/* GLTFMesh::set_instance_materials(TypedArray<Material>) */

void __thiscall GLTFMesh::set_instance_materials(GLTFMesh *this,Array *param_2)

{
  Array::operator=((Array *)(this + 0x260),param_2);
  return;
}



/* GLTFMesh::get_instance_materials() */

void GLTFMesh::get_instance_materials(void)

{
  long in_RSI;
  Array *in_RDI;
  
  Array::Array(in_RDI,(Array *)(in_RSI + 0x260));
  return;
}



/* GLTFMesh::get_additional_data(StringName const&) */

StringName * GLTFMesh::get_additional_data(StringName *param_1)

{
  Variant *pVVar1;
  StringName *in_RDX;
  long in_RSI;
  long in_FS_OFFSET;
  int local_38 [6];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  Variant::Variant((Variant *)local_38,in_RDX);
  pVVar1 = (Variant *)Dictionary::operator[]((Variant *)(in_RSI + 0x268));
  Variant::Variant((Variant *)param_1,pVVar1);
  if (Variant::needs_deinit[local_38[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GLTFMesh::set_additional_data(StringName const&, Variant) */

void __thiscall GLTFMesh::set_additional_data(GLTFMesh *this,StringName *param_1,Variant *param_3)

{
  Variant *this_00;
  long in_FS_OFFSET;
  int local_38 [6];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  Variant::Variant((Variant *)local_38,param_1);
  this_00 = (Variant *)Dictionary::operator[](this + 0x268);
  Variant::operator=(this_00,param_3);
  if (Variant::needs_deinit[local_38[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GLTFMesh::set_mesh(Ref<ImporterMesh>) */

void __thiscall GLTFMesh::set_mesh(GLTFMesh *this,long *param_2)

{
  Object *pOVar1;
  Object *pOVar2;
  char cVar3;
  
  pOVar1 = (Object *)*param_2;
  pOVar2 = *(Object **)(this + 0x248);
  if (pOVar1 != pOVar2) {
    *(Object **)(this + 0x248) = pOVar1;
    if (pOVar1 != (Object *)0x0) {
      cVar3 = RefCounted::reference();
      if (cVar3 == '\0') {
        *(undefined8 *)(this + 0x248) = 0;
      }
    }
    if (pOVar2 != (Object *)0x0) {
      cVar3 = RefCounted::unreference();
      if (cVar3 != '\0') {
        cVar3 = predelete_handler(pOVar2);
        if (cVar3 != '\0') {
          (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
          Memory::free_static(pOVar2,false);
          return;
        }
      }
    }
  }
  return;
}



/* GLTFMesh::get_mesh() */

void GLTFMesh::get_mesh(void)

{
  char cVar1;
  long in_RSI;
  long *in_RDI;
  
  *in_RDI = 0;
  if (*(long *)(in_RSI + 0x248) != 0) {
    *in_RDI = *(long *)(in_RSI + 0x248);
    cVar1 = RefCounted::reference();
    if (cVar1 == '\0') {
      *in_RDI = 0;
    }
  }
  return;
}



/* CowData<float>::_ref(CowData<float> const&) [clone .part.0] */

void __thiscall CowData<float>::_ref(CowData<float> *this,CowData *param_1)

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



/* GLTFMesh::get_blend_weights() */

void GLTFMesh::get_blend_weights(void)

{
  long in_RSI;
  long in_RDI;
  
  *(undefined8 *)(in_RDI + 8) = 0;
  if (*(long *)(in_RSI + 600) != 0) {
    CowData<float>::_ref((CowData<float> *)(in_RDI + 8),(CowData *)(in_RSI + 600));
  }
  return;
}



/* GLTFMesh::set_blend_weights(Vector<float>) */

void __thiscall GLTFMesh::set_blend_weights(GLTFMesh *this,long param_2)

{
  if (*(long *)(this + 600) != *(long *)(param_2 + 8)) {
    CowData<float>::_ref((CowData<float> *)(this + 600),(CowData *)(param_2 + 8));
    return;
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



/* GLTFMesh::set_original_name(String) */

void __thiscall GLTFMesh::set_original_name(GLTFMesh *this,CowData *param_2)

{
  if (*(long *)(this + 0x240) != *(long *)param_2) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(this + 0x240),param_2);
    return;
  }
  return;
}



/* GLTFMesh::get_original_name() */

void GLTFMesh::get_original_name(void)

{
  long in_RSI;
  CowData<char32_t> *in_RDI;
  
  *(undefined8 *)in_RDI = 0;
  if (*(long *)(in_RSI + 0x240) != 0) {
    CowData<char32_t>::_ref(in_RDI,(CowData *)(in_RSI + 0x240));
  }
  return;
}



/* GLTFMesh::_bind_methods() */

void GLTFMesh::_bind_methods(void)

{
  long lVar1;
  code *pcVar2;
  undefined *puVar3;
  long *plVar4;
  MethodBind *pMVar5;
  uint uVar6;
  long *plVar7;
  long lVar8;
  long in_FS_OFFSET;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  long local_e0;
  long local_d8;
  long local_d0;
  char *local_c8;
  undefined8 local_c0;
  char *local_b8;
  undefined8 local_b0;
  long *local_a8;
  char *local_88;
  undefined8 local_80;
  char *local_78;
  char *pcStack_70;
  undefined8 local_68;
  char **local_58;
  undefined1 auStack_50 [16];
  long local_40;
  
  puVar3 = PTR__LC4_00109928;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  D_METHODP((char *)&local_b8,(char ***)"get_original_name",0);
  auStack_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar5 = create_method_bind<GLTFMesh,String>(get_original_name);
  ClassDB::bind_methodfi(1,pMVar5,false,(MethodDefinition *)&local_b8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  plVar4 = local_a8;
  if (local_a8 != (long *)0x0) {
    LOCK();
    plVar7 = local_a8 + -2;
    *plVar7 = *plVar7 + -1;
    UNLOCK();
    if (*plVar7 == 0) {
      if (local_a8 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar1 = local_a8[-1];
      lVar8 = 0;
      local_a8 = (long *)0x0;
      plVar7 = plVar4;
      if (lVar1 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar7 != 0)) {
            StringName::unref();
          }
          lVar8 = lVar8 + 1;
          plVar7 = plVar7 + 1;
        } while (lVar1 != lVar8);
      }
      Memory::free_static(plVar4 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  local_80 = 0;
  local_88 = "original_name";
  uVar6 = (uint)&local_58;
  local_58 = &local_88;
  D_METHODP((char *)&local_b8,(char ***)"set_original_name",uVar6);
  auStack_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar5 = create_method_bind<GLTFMesh,String>(set_original_name);
  ClassDB::bind_methodfi(1,pMVar5,false,(MethodDefinition *)&local_b8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  plVar4 = local_a8;
  if (local_a8 != (long *)0x0) {
    LOCK();
    plVar7 = local_a8 + -2;
    *plVar7 = *plVar7 + -1;
    UNLOCK();
    if (*plVar7 == 0) {
      if (local_a8 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar1 = local_a8[-1];
      lVar8 = 0;
      local_a8 = (long *)0x0;
      plVar7 = plVar4;
      if (lVar1 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar7 != 0)) {
            StringName::unref();
          }
          lVar8 = lVar8 + 1;
          plVar7 = plVar7 + 1;
        } while (lVar1 != lVar8);
      }
      Memory::free_static(plVar4 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  D_METHODP((char *)&local_b8,(char ***)"get_mesh",0);
  auStack_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar5 = create_method_bind<GLTFMesh,Ref<ImporterMesh>>(get_mesh);
  ClassDB::bind_methodfi(1,pMVar5,false,(MethodDefinition *)&local_b8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  plVar4 = local_a8;
  if (local_a8 != (long *)0x0) {
    LOCK();
    plVar7 = local_a8 + -2;
    *plVar7 = *plVar7 + -1;
    UNLOCK();
    if (*plVar7 == 0) {
      if (local_a8 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar1 = local_a8[-1];
      lVar8 = 0;
      local_a8 = (long *)0x0;
      plVar7 = plVar4;
      if (lVar1 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar7 != 0)) {
            StringName::unref();
          }
          lVar8 = lVar8 + 1;
          plVar7 = plVar7 + 1;
        } while (lVar1 != lVar8);
      }
      Memory::free_static(plVar4 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  local_88 = "mesh";
  local_80 = 0;
  local_58 = &local_88;
  D_METHODP((char *)&local_b8,(char ***)"set_mesh",uVar6);
  auStack_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar5 = create_method_bind<GLTFMesh,Ref<ImporterMesh>>(set_mesh);
  ClassDB::bind_methodfi(1,pMVar5,false,(MethodDefinition *)&local_b8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  plVar4 = local_a8;
  if (local_a8 != (long *)0x0) {
    LOCK();
    plVar7 = local_a8 + -2;
    *plVar7 = *plVar7 + -1;
    UNLOCK();
    if (*plVar7 == 0) {
      if (local_a8 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar1 = local_a8[-1];
      lVar8 = 0;
      local_a8 = (long *)0x0;
      plVar7 = plVar4;
      if (lVar1 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar7 != 0)) {
            StringName::unref();
          }
          lVar8 = lVar8 + 1;
          plVar7 = plVar7 + 1;
        } while (lVar1 != lVar8);
      }
      Memory::free_static(plVar4 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  D_METHODP((char *)&local_b8,(char ***)"get_blend_weights",0);
  auStack_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar5 = create_method_bind<GLTFMesh,Vector<float>>(get_blend_weights);
  ClassDB::bind_methodfi(1,pMVar5,false,(MethodDefinition *)&local_b8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  plVar4 = local_a8;
  if (local_a8 != (long *)0x0) {
    LOCK();
    plVar7 = local_a8 + -2;
    *plVar7 = *plVar7 + -1;
    UNLOCK();
    if (*plVar7 == 0) {
      if (local_a8 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar1 = local_a8[-1];
      lVar8 = 0;
      local_a8 = (long *)0x0;
      plVar7 = plVar4;
      if (lVar1 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar7 != 0)) {
            StringName::unref();
          }
          lVar8 = lVar8 + 1;
          plVar7 = plVar7 + 1;
        } while (lVar1 != lVar8);
      }
      Memory::free_static(plVar4 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  local_88 = "blend_weights";
  local_80 = 0;
  local_58 = &local_88;
  D_METHODP((char *)&local_b8,(char ***)"set_blend_weights",uVar6);
  auStack_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar5 = create_method_bind<GLTFMesh,Vector<float>>(set_blend_weights);
  ClassDB::bind_methodfi(1,pMVar5,false,(MethodDefinition *)&local_b8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  plVar4 = local_a8;
  if (local_a8 != (long *)0x0) {
    LOCK();
    plVar7 = local_a8 + -2;
    *plVar7 = *plVar7 + -1;
    UNLOCK();
    if (*plVar7 == 0) {
      if (local_a8 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar1 = local_a8[-1];
      lVar8 = 0;
      local_a8 = (long *)0x0;
      plVar7 = plVar4;
      if (lVar1 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar7 != 0)) {
            StringName::unref();
          }
          lVar8 = lVar8 + 1;
          plVar7 = plVar7 + 1;
        } while (lVar1 != lVar8);
      }
      Memory::free_static(plVar4 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  D_METHODP((char *)&local_b8,(char ***)"get_instance_materials",0);
  auStack_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar5 = create_method_bind<GLTFMesh,TypedArray<Material>>(get_instance_materials);
  ClassDB::bind_methodfi(1,pMVar5,false,(MethodDefinition *)&local_b8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  plVar4 = local_a8;
  if (local_a8 != (long *)0x0) {
    LOCK();
    plVar7 = local_a8 + -2;
    *plVar7 = *plVar7 + -1;
    UNLOCK();
    if (*plVar7 == 0) {
      if (local_a8 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar1 = local_a8[-1];
      lVar8 = 0;
      local_a8 = (long *)0x0;
      plVar7 = plVar4;
      if (lVar1 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar7 != 0)) {
            StringName::unref();
          }
          lVar8 = lVar8 + 1;
          plVar7 = plVar7 + 1;
        } while (lVar1 != lVar8);
      }
      Memory::free_static(plVar4 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  local_88 = "instance_materials";
  local_80 = 0;
  local_58 = &local_88;
  D_METHODP((char *)&local_b8,(char ***)"set_instance_materials",uVar6);
  auStack_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar5 = create_method_bind<GLTFMesh,TypedArray<Material>>(set_instance_materials);
  ClassDB::bind_methodfi(1,pMVar5,false,(MethodDefinition *)&local_b8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  plVar4 = local_a8;
  if (local_a8 != (long *)0x0) {
    LOCK();
    plVar7 = local_a8 + -2;
    *plVar7 = *plVar7 + -1;
    UNLOCK();
    if (*plVar7 == 0) {
      if (local_a8 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar1 = local_a8[-1];
      lVar8 = 0;
      local_a8 = (long *)0x0;
      plVar7 = plVar4;
      if (lVar1 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar7 != 0)) {
            StringName::unref();
          }
          lVar8 = lVar8 + 1;
          plVar7 = plVar7 + 1;
        } while (lVar1 != lVar8);
      }
      Memory::free_static(plVar4 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  local_88 = "extension_name";
  local_80 = 0;
  local_58 = &local_88;
  D_METHODP((char *)&local_b8,(char ***)"get_additional_data",uVar6);
  auStack_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar5 = create_method_bind<GLTFMesh,Variant,StringName_const&>(get_additional_data);
  ClassDB::bind_methodfi(1,pMVar5,false,(MethodDefinition *)&local_b8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  plVar4 = local_a8;
  if (local_a8 != (long *)0x0) {
    LOCK();
    plVar7 = local_a8 + -2;
    *plVar7 = *plVar7 + -1;
    UNLOCK();
    if (*plVar7 == 0) {
      if (local_a8 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar1 = local_a8[-1];
      lVar8 = 0;
      local_a8 = (long *)0x0;
      plVar7 = plVar4;
      if (lVar1 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar7 != 0)) {
            StringName::unref();
          }
          lVar8 = lVar8 + 1;
          plVar7 = plVar7 + 1;
        } while (lVar1 != lVar8);
      }
      Memory::free_static(plVar4 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  local_68 = 0;
  auStack_50._0_8_ = &pcStack_70;
  local_78 = puVar3;
  pcStack_70 = "additional_data";
  local_58 = &local_78;
  D_METHODP((char *)&local_b8,(char ***)"set_additional_data",uVar6);
  auStack_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar5 = create_method_bind<GLTFMesh,StringName_const&,Variant>(set_additional_data);
  ClassDB::bind_methodfi(1,pMVar5,false,(MethodDefinition *)&local_b8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  plVar4 = local_a8;
  if (local_a8 != (long *)0x0) {
    LOCK();
    plVar7 = local_a8 + -2;
    *plVar7 = *plVar7 + -1;
    UNLOCK();
    if (*plVar7 == 0) {
      if (local_a8 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar1 = local_a8[-1];
      lVar8 = 0;
      local_a8 = (long *)0x0;
      plVar7 = plVar4;
      if (lVar1 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar7 != 0)) {
            StringName::unref();
          }
          lVar8 = lVar8 + 1;
          plVar7 = plVar7 + 1;
        } while (lVar1 != lVar8);
      }
      Memory::free_static(plVar4 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  _scs_create((char *)&local_d0,true);
  _scs_create((char *)&local_d8,true);
  local_b8 = "";
  local_e0 = 0;
  local_e8 = 0;
  local_b0 = 0;
  String::parse_latin1((StrRange *)&local_e8);
  local_f0 = 0;
  local_b8 = "original_name";
  local_b0 = 0xd;
  String::parse_latin1((StrRange *)&local_f0);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_b8,4,(StrRange *)&local_f0,0,(StrRange *)&local_e8,6,&local_e0);
  local_f8 = 0;
  local_c0 = 8;
  local_c8 = "GLTFMesh";
  String::parse_latin1((StrRange *)&local_f8);
  StringName::StringName((StringName *)&local_c8,(StrRange *)&local_f8,false);
  ClassDB::add_property
            ((StringName *)&local_c8,(PropertyInfo *)&local_b8,(StringName *)&local_d8,
             (StringName *)&local_d0,-1);
  if ((StringName::configured != '\0') && (local_c8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
  if ((((StringName::configured != '\0') &&
       ((local_e0 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
      ((local_d8 == 0 || (StringName::unref(), StringName::configured != '\0')))) && (local_d0 != 0)
     ) {
    StringName::unref();
  }
  _scs_create((char *)&local_d0,true);
  _scs_create((char *)&local_d8,true);
  local_b8 = "";
  local_e0 = 0;
  local_e8 = 0;
  local_b0 = 0;
  String::parse_latin1((StrRange *)&local_e8);
  local_b8 = "mesh";
  local_f0 = 0;
  local_b0 = 4;
  String::parse_latin1((StrRange *)&local_f0);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_b8,0x18,(StrRange *)&local_f0,0,(StrRange *)&local_e8,6,
             &local_e0);
  local_c8 = "GLTFMesh";
  local_f8 = 0;
  local_c0 = 8;
  String::parse_latin1((StrRange *)&local_f8);
  StringName::StringName((StringName *)&local_c8,(StrRange *)&local_f8,false);
  ClassDB::add_property
            ((StringName *)&local_c8,(PropertyInfo *)&local_b8,(StringName *)&local_d8,
             (StringName *)&local_d0,-1);
  if ((StringName::configured != '\0') && (local_c8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
  if (((StringName::configured != '\0') &&
      ((local_e0 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (((local_d8 == 0 || (StringName::unref(), StringName::configured != '\0')) && (local_d0 != 0)))
     ) {
    StringName::unref();
  }
  _scs_create((char *)&local_d0,true);
  _scs_create((char *)&local_d8,true);
  local_b8 = "";
  local_e0 = 0;
  local_e8 = 0;
  local_b0 = 0;
  String::parse_latin1((StrRange *)&local_e8);
  local_b8 = "blend_weights";
  local_f0 = 0;
  local_b0 = 0xd;
  String::parse_latin1((StrRange *)&local_f0);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_b8,0x20,(StrRange *)&local_f0,0,(StrRange *)&local_e8,6,
             &local_e0);
  local_c8 = "GLTFMesh";
  local_f8 = 0;
  local_c0 = 8;
  String::parse_latin1((StrRange *)&local_f8);
  StringName::StringName((StringName *)&local_c8,(StrRange *)&local_f8,false);
  ClassDB::add_property
            ((StringName *)&local_c8,(PropertyInfo *)&local_b8,(StringName *)&local_d8,
             (StringName *)&local_d0,-1);
  if ((StringName::configured != '\0') && (local_c8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
  if ((((StringName::configured != '\0') &&
       ((local_e0 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
      ((local_d8 == 0 || (StringName::unref(), StringName::configured != '\0')))) && (local_d0 != 0)
     ) {
    StringName::unref();
  }
  _scs_create((char *)&local_d0,true);
  _scs_create((char *)&local_d8,true);
  local_b8 = "";
  local_e0 = 0;
  local_e8 = 0;
  local_b0 = 0;
  String::parse_latin1((StrRange *)&local_e8);
  local_b8 = "instance_materials";
  local_f0 = 0;
  local_b0 = 0x12;
  String::parse_latin1((StrRange *)&local_f0);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_b8,0x1c,(StrRange *)&local_f0,0,(StrRange *)&local_e8,6,
             &local_e0);
  local_c8 = "GLTFMesh";
  local_f8 = 0;
  local_c0 = 8;
  String::parse_latin1((StrRange *)&local_f8);
  StringName::StringName((StringName *)&local_c8,(StrRange *)&local_f8,false);
  ClassDB::add_property
            ((StringName *)&local_c8,(PropertyInfo *)&local_b8,(StringName *)&local_d8,
             (StringName *)&local_d0,-1);
  if ((StringName::configured != '\0') && (local_c8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
  if (((StringName::configured != '\0') &&
      ((local_e0 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (((local_d8 == 0 || (StringName::unref(), StringName::configured != '\0')) && (local_d0 != 0)))
     ) {
    StringName::unref();
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
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



/* MethodBindT<StringName const&, Variant>::_gen_argument_type(int) const */

byte __thiscall
MethodBindT<StringName_const&,Variant>::_gen_argument_type
          (MethodBindT<StringName_const&,Variant> *this,int param_1)

{
  return -(param_1 == 0) & 0x15;
}



/* MethodBindT<StringName const&, Variant>::get_argument_meta(int) const */

undefined8 MethodBindT<StringName_const&,Variant>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindTR<Variant, StringName const&>::_gen_argument_type(int) const */

byte __thiscall
MethodBindTR<Variant,StringName_const&>::_gen_argument_type
          (MethodBindTR<Variant,StringName_const&> *this,int param_1)

{
  return -(param_1 == 0) & 0x15;
}



/* MethodBindTR<Variant, StringName const&>::get_argument_meta(int) const */

undefined8 MethodBindTR<Variant,StringName_const&>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindT<TypedArray<Material> >::_gen_argument_type(int) const */

byte __thiscall
MethodBindT<TypedArray<Material>>::_gen_argument_type
          (MethodBindT<TypedArray<Material>> *this,int param_1)

{
  return -(param_1 == 0) & 0x1c;
}



/* MethodBindT<TypedArray<Material> >::get_argument_meta(int) const */

undefined8 MethodBindT<TypedArray<Material>>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindTR<TypedArray<Material>>::_gen_argument_type(int) const */

undefined8 MethodBindTR<TypedArray<Material>>::_gen_argument_type(int param_1)

{
  return 0x1c;
}



/* MethodBindTR<TypedArray<Material>>::get_argument_meta(int) const */

undefined8 MethodBindTR<TypedArray<Material>>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindT<Vector<float> >::_gen_argument_type(int) const */

long __thiscall
MethodBindT<Vector<float>>::_gen_argument_type(MethodBindT<Vector<float>> *this,int param_1)

{
  return (ulong)(param_1 == 0) << 5;
}



/* MethodBindT<Vector<float> >::get_argument_meta(int) const */

undefined8 MethodBindT<Vector<float>>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindTR<Vector<float>>::_gen_argument_type(int) const */

undefined8 MethodBindTR<Vector<float>>::_gen_argument_type(int param_1)

{
  return 0x20;
}



/* MethodBindTR<Vector<float>>::get_argument_meta(int) const */

undefined8 MethodBindTR<Vector<float>>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindT<Ref<ImporterMesh> >::_gen_argument_type(int) const */

byte __thiscall
MethodBindT<Ref<ImporterMesh>>::_gen_argument_type(MethodBindT<Ref<ImporterMesh>> *this,int param_1)

{
  return -(param_1 == 0) & 0x18;
}



/* MethodBindT<Ref<ImporterMesh> >::get_argument_meta(int) const */

undefined8 MethodBindT<Ref<ImporterMesh>>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindTR<Ref<ImporterMesh>>::_gen_argument_type(int) const */

undefined8 MethodBindTR<Ref<ImporterMesh>>::_gen_argument_type(int param_1)

{
  return 0x18;
}



/* MethodBindTR<Ref<ImporterMesh>>::get_argument_meta(int) const */

undefined8 MethodBindTR<Ref<ImporterMesh>>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindT<String>::_gen_argument_type(int) const */

long __thiscall MethodBindT<String>::_gen_argument_type(MethodBindT<String> *this,int param_1)

{
  return (ulong)(param_1 == 0) << 2;
}



/* MethodBindT<String>::get_argument_meta(int) const */

undefined8 MethodBindT<String>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindTR<String>::_gen_argument_type(int) const */

undefined8 MethodBindTR<String>::_gen_argument_type(int param_1)

{
  return 4;
}



/* MethodBindTR<String>::get_argument_meta(int) const */

undefined8 MethodBindTR<String>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindTR<String>::~MethodBindTR() */

void __thiscall MethodBindTR<String>::~MethodBindTR(MethodBindTR<String> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00109550;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTR<String>::~MethodBindTR() */

void __thiscall MethodBindTR<String>::~MethodBindTR(MethodBindTR<String> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00109550;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<String>::~MethodBindT() */

void __thiscall MethodBindT<String>::~MethodBindT(MethodBindT<String> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001095b0;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<String>::~MethodBindT() */

void __thiscall MethodBindT<String>::~MethodBindT(MethodBindT<String> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001095b0;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTR<Ref<ImporterMesh>>::~MethodBindTR() */

void __thiscall
MethodBindTR<Ref<ImporterMesh>>::~MethodBindTR(MethodBindTR<Ref<ImporterMesh>> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00109610;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTR<Ref<ImporterMesh>>::~MethodBindTR() */

void __thiscall
MethodBindTR<Ref<ImporterMesh>>::~MethodBindTR(MethodBindTR<Ref<ImporterMesh>> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00109610;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<Ref<ImporterMesh> >::~MethodBindT() */

void __thiscall MethodBindT<Ref<ImporterMesh>>::~MethodBindT(MethodBindT<Ref<ImporterMesh>> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00109670;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<Ref<ImporterMesh> >::~MethodBindT() */

void __thiscall MethodBindT<Ref<ImporterMesh>>::~MethodBindT(MethodBindT<Ref<ImporterMesh>> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00109670;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTR<Vector<float>>::~MethodBindTR() */

void __thiscall MethodBindTR<Vector<float>>::~MethodBindTR(MethodBindTR<Vector<float>> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001096d0;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTR<Vector<float>>::~MethodBindTR() */

void __thiscall MethodBindTR<Vector<float>>::~MethodBindTR(MethodBindTR<Vector<float>> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001096d0;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<Vector<float> >::~MethodBindT() */

void __thiscall MethodBindT<Vector<float>>::~MethodBindT(MethodBindT<Vector<float>> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00109730;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<Vector<float> >::~MethodBindT() */

void __thiscall MethodBindT<Vector<float>>::~MethodBindT(MethodBindT<Vector<float>> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00109730;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTR<TypedArray<Material>>::~MethodBindTR() */

void __thiscall
MethodBindTR<TypedArray<Material>>::~MethodBindTR(MethodBindTR<TypedArray<Material>> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00109790;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTR<TypedArray<Material>>::~MethodBindTR() */

void __thiscall
MethodBindTR<TypedArray<Material>>::~MethodBindTR(MethodBindTR<TypedArray<Material>> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00109790;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<TypedArray<Material> >::~MethodBindT() */

void __thiscall
MethodBindT<TypedArray<Material>>::~MethodBindT(MethodBindT<TypedArray<Material>> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001097f0;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<TypedArray<Material> >::~MethodBindT() */

void __thiscall
MethodBindT<TypedArray<Material>>::~MethodBindT(MethodBindT<TypedArray<Material>> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001097f0;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTR<Variant, StringName const&>::~MethodBindTR() */

void __thiscall
MethodBindTR<Variant,StringName_const&>::~MethodBindTR
          (MethodBindTR<Variant,StringName_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00109850;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTR<Variant, StringName const&>::~MethodBindTR() */

void __thiscall
MethodBindTR<Variant,StringName_const&>::~MethodBindTR
          (MethodBindTR<Variant,StringName_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00109850;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<StringName const&, Variant>::~MethodBindT() */

void __thiscall
MethodBindT<StringName_const&,Variant>::~MethodBindT(MethodBindT<StringName_const&,Variant> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001098b0;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<StringName const&, Variant>::~MethodBindT() */

void __thiscall
MethodBindT<StringName_const&,Variant>::~MethodBindT(MethodBindT<StringName_const&,Variant> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001098b0;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
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
    StringName::StringName((StringName *)&local_48,(CowData<char32_t> *)(this + 0x20),false);
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



/* MethodBindTR<String>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTR<String>::_gen_argument_type_info(int param_1)

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
  local_48 = &_LC0;
  local_40 = 0;
  String::parse_latin1((StrRange *)&local_58);
  local_60 = 0;
  *puVar1 = 4;
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
      StringName::StringName((StringName *)&local_48,(CowData<char32_t> *)(puVar1 + 8),false);
      if (*(undefined **)(puVar1 + 4) == local_48) {
        if ((StringName::configured != '\0') && (local_48 != (undefined *)0x0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        *(undefined **)(puVar1 + 4) = local_48;
      }
      goto LAB_00101dc5;
    }
  }
  StringName::operator=((StringName *)(puVar1 + 4),(StringName *)&local_50);
LAB_00101dc5:
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



/* MethodBindTR<Vector<float>>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTR<Vector<float>>::_gen_argument_type_info(int param_1)

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
  local_48 = &_LC0;
  local_40 = 0;
  String::parse_latin1((StrRange *)&local_58);
  local_60 = 0;
  *puVar1 = 0x20;
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
      StringName::StringName((StringName *)&local_48,(CowData<char32_t> *)(puVar1 + 8),false);
      if (*(undefined **)(puVar1 + 4) == local_48) {
        if ((StringName::configured != '\0') && (local_48 != (undefined *)0x0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        *(undefined **)(puVar1 + 4) = local_48;
      }
      goto LAB_00101f25;
    }
  }
  StringName::operator=((StringName *)(puVar1 + 4),(StringName *)&local_50);
LAB_00101f25:
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



/* MethodBindTR<Ref<ImporterMesh>>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTR<Ref<ImporterMesh>>::_gen_argument_type_info(int param_1)

{
  undefined4 in_register_0000003c;
  undefined4 *puVar1;
  long in_FS_OFFSET;
  undefined8 local_60;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  puVar1 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = 0;
  local_58 = 0;
  local_48 = "ImporterMesh";
  local_40 = 0xc;
  String::parse_latin1((StrRange *)&local_58);
  local_60 = 0;
  *puVar1 = 0x18;
  puVar1[6] = 0x11;
  *(undefined8 *)(puVar1 + 8) = 0;
  *(undefined1 (*) [16])(puVar1 + 2) = (undefined1  [16])0x0;
  if (local_58 == 0) {
    puVar1[10] = 6;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar1 + 8),(CowData *)&local_58);
    puVar1[10] = 6;
    if (puVar1[6] != 0x11) {
      StringName::operator=((StringName *)(puVar1 + 4),(StringName *)&local_50);
      goto LAB_00102055;
    }
  }
  StringName::StringName((StringName *)&local_48,(CowData<char32_t> *)(puVar1 + 8),false);
  if (*(char **)(puVar1 + 4) == local_48) {
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  else {
    StringName::unref();
    *(char **)(puVar1 + 4) = local_48;
  }
LAB_00102055:
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



/* MethodBindTR<TypedArray<Material>>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTR<TypedArray<Material>>::_gen_argument_type_info(int param_1)

{
  undefined4 in_register_0000003c;
  undefined4 *puVar1;
  long in_FS_OFFSET;
  undefined8 local_60;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  puVar1 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = 0;
  local_58 = 0;
  local_48 = "Material";
  local_40 = 8;
  String::parse_latin1((StrRange *)&local_58);
  local_60 = 0;
  *puVar1 = 0x1c;
  puVar1[6] = 0x1f;
  *(undefined8 *)(puVar1 + 8) = 0;
  *(undefined1 (*) [16])(puVar1 + 2) = (undefined1  [16])0x0;
  if (local_58 == 0) {
    puVar1[10] = 6;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar1 + 8),(CowData *)&local_58);
    puVar1[10] = 6;
    if (puVar1[6] == 0x11) {
      StringName::StringName((StringName *)&local_48,(CowData<char32_t> *)(puVar1 + 8),false);
      if (*(char **)(puVar1 + 4) == local_48) {
        if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        *(char **)(puVar1 + 4) = local_48;
      }
      goto LAB_00102205;
    }
  }
  StringName::operator=((StringName *)(puVar1 + 4),(StringName *)&local_50);
LAB_00102205:
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



/* MethodBindT<Vector<float> >::_gen_argument_type_info(int) const */

undefined4 * MethodBindT<Vector<float>>::_gen_argument_type_info(int param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined8 uVar3;
  long lVar4;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar5;
  long in_FS_OFFSET;
  undefined8 local_88;
  long local_80;
  long local_78;
  long local_70;
  undefined *local_68;
  undefined1 local_60 [16];
  int local_50;
  long local_48;
  undefined4 local_40;
  long local_30;
  
  puVar5 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *puVar5 = 0;
  puVar5[6] = 0;
  *(undefined8 *)(puVar5 + 8) = 0;
  puVar5[10] = 6;
  *(undefined1 (*) [16])(puVar5 + 2) = (undefined1  [16])0x0;
  if (in_EDX != 0) goto LAB_001022b9;
  local_78 = 0;
  local_68 = &_LC0;
  local_80 = 0;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = local_60._8_8_;
  local_60 = auVar1 << 0x40;
  String::parse_latin1((StrRange *)&local_80);
  local_88 = 0;
  local_68 = (undefined *)CONCAT44(local_68._4_4_,0x20);
  local_50 = 0;
  local_48 = 0;
  local_60 = (undefined1  [16])0x0;
  if (local_80 == 0) {
LAB_001023b5:
    local_40 = 6;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_78);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_80);
    local_40 = 6;
    if (local_50 != 0x11) goto LAB_001023b5;
    StringName::StringName((StringName *)&local_70,(CowData<char32_t> *)&local_48,false);
    if (local_60._8_8_ == local_70) {
      if ((StringName::configured != '\0') && (local_70 != 0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_60._8_8_ = local_70;
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  if ((StringName::configured != '\0') && (local_78 != 0)) {
    StringName::unref();
  }
  *puVar5 = local_68._0_4_;
  if (*(long *)(puVar5 + 2) != local_60._0_8_) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(puVar5 + 2));
    uVar3 = local_60._0_8_;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = local_60._8_8_;
    local_60 = auVar2 << 0x40;
    *(undefined8 *)(puVar5 + 2) = uVar3;
  }
  if (*(long *)(puVar5 + 4) != local_60._8_8_) {
    StringName::unref();
    uVar3 = local_60._8_8_;
    local_60._8_8_ = 0;
    *(undefined8 *)(puVar5 + 4) = uVar3;
  }
  puVar5[6] = local_50;
  if (*(long *)(puVar5 + 8) != local_48) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(puVar5 + 8));
    lVar4 = local_48;
    local_48 = 0;
    *(long *)(puVar5 + 8) = lVar4;
  }
  puVar5[10] = local_40;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
  if ((StringName::configured != '\0') && (local_60._8_8_ != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_60);
LAB_001022b9:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar5;
}



/* MethodBindT<String>::_gen_argument_type_info(int) const */

undefined4 * MethodBindT<String>::_gen_argument_type_info(int param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined8 uVar3;
  long lVar4;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar5;
  long in_FS_OFFSET;
  undefined8 local_88;
  long local_80;
  long local_78;
  long local_70;
  undefined *local_68;
  undefined1 local_60 [16];
  int local_50;
  long local_48;
  undefined4 local_40;
  long local_30;
  
  puVar5 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *puVar5 = 0;
  puVar5[6] = 0;
  *(undefined8 *)(puVar5 + 8) = 0;
  puVar5[10] = 6;
  *(undefined1 (*) [16])(puVar5 + 2) = (undefined1  [16])0x0;
  if (in_EDX != 0) goto LAB_00102529;
  local_78 = 0;
  local_68 = &_LC0;
  local_80 = 0;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = local_60._8_8_;
  local_60 = auVar1 << 0x40;
  String::parse_latin1((StrRange *)&local_80);
  local_88 = 0;
  local_68 = (undefined *)CONCAT44(local_68._4_4_,4);
  local_50 = 0;
  local_48 = 0;
  local_60 = (undefined1  [16])0x0;
  if (local_80 == 0) {
LAB_00102625:
    local_40 = 6;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_78);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_80);
    local_40 = 6;
    if (local_50 != 0x11) goto LAB_00102625;
    StringName::StringName((StringName *)&local_70,(CowData<char32_t> *)&local_48,false);
    if (local_60._8_8_ == local_70) {
      if ((StringName::configured != '\0') && (local_70 != 0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_60._8_8_ = local_70;
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  if ((StringName::configured != '\0') && (local_78 != 0)) {
    StringName::unref();
  }
  *puVar5 = local_68._0_4_;
  if (*(long *)(puVar5 + 2) != local_60._0_8_) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(puVar5 + 2));
    uVar3 = local_60._0_8_;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = local_60._8_8_;
    local_60 = auVar2 << 0x40;
    *(undefined8 *)(puVar5 + 2) = uVar3;
  }
  if (*(long *)(puVar5 + 4) != local_60._8_8_) {
    StringName::unref();
    uVar3 = local_60._8_8_;
    local_60._8_8_ = 0;
    *(undefined8 *)(puVar5 + 4) = uVar3;
  }
  puVar5[6] = local_50;
  if (*(long *)(puVar5 + 8) != local_48) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(puVar5 + 8));
    lVar4 = local_48;
    local_48 = 0;
    *(long *)(puVar5 + 8) = lVar4;
  }
  puVar5[10] = local_40;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
  if ((StringName::configured != '\0') && (local_60._8_8_ != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_60);
LAB_00102529:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar5;
}



/* MethodBindT<Ref<ImporterMesh> >::_gen_argument_type_info(int) const */

undefined4 * MethodBindT<Ref<ImporterMesh>>::_gen_argument_type_info(int param_1)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  long lVar3;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar4;
  long in_FS_OFFSET;
  undefined8 local_88;
  long local_80;
  long local_78;
  long local_70;
  char *local_68;
  undefined1 local_60 [16];
  int local_50;
  long local_48;
  undefined4 local_40;
  long local_30;
  
  puVar4 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *puVar4 = 0;
  puVar4[6] = 0;
  *(undefined8 *)(puVar4 + 8) = 0;
  puVar4[10] = 6;
  *(undefined1 (*) [16])(puVar4 + 2) = (undefined1  [16])0x0;
  if (in_EDX != 0) goto LAB_00102799;
  local_78 = 0;
  local_68 = "ImporterMesh";
  local_80 = 0;
  local_60._0_8_ = 0xc;
  String::parse_latin1((StrRange *)&local_80);
  local_88 = 0;
  local_68 = (char *)CONCAT44(local_68._4_4_,0x18);
  local_50 = 0x11;
  local_48 = 0;
  local_60 = (undefined1  [16])0x0;
  if (local_80 == 0) {
LAB_00102955:
    local_40 = 6;
    StringName::StringName((StringName *)&local_70,(String *)&local_48,false);
    if (local_60._8_8_ == local_70) {
      if ((StringName::configured != '\0') && (local_70 != 0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_60._8_8_ = local_70;
    }
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_80);
    local_40 = 6;
    if (local_50 == 0x11) goto LAB_00102955;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_78);
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  if ((StringName::configured != '\0') && (local_78 != 0)) {
    StringName::unref();
  }
  *puVar4 = local_68._0_4_;
  if (*(long *)(puVar4 + 2) != local_60._0_8_) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(puVar4 + 2));
    uVar2 = local_60._0_8_;
    auVar1._8_8_ = 0;
    auVar1._0_8_ = local_60._8_8_;
    local_60 = auVar1 << 0x40;
    *(undefined8 *)(puVar4 + 2) = uVar2;
  }
  if (*(long *)(puVar4 + 4) != local_60._8_8_) {
    StringName::unref();
    uVar2 = local_60._8_8_;
    local_60._8_8_ = 0;
    *(undefined8 *)(puVar4 + 4) = uVar2;
  }
  puVar4[6] = local_50;
  if (*(long *)(puVar4 + 8) != local_48) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(puVar4 + 8));
    lVar3 = local_48;
    local_48 = 0;
    *(long *)(puVar4 + 8) = lVar3;
  }
  puVar4[10] = local_40;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
  if ((StringName::configured != '\0') && (local_60._8_8_ != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_60);
LAB_00102799:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar4;
}



/* MethodBindT<TypedArray<Material> >::_gen_argument_type_info(int) const */

undefined4 * MethodBindT<TypedArray<Material>>::_gen_argument_type_info(int param_1)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  long lVar3;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar4;
  long in_FS_OFFSET;
  undefined8 local_88;
  long local_80;
  long local_78;
  long local_70;
  char *local_68;
  undefined1 local_60 [16];
  int local_50;
  long local_48;
  undefined4 local_40;
  long local_30;
  
  puVar4 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *puVar4 = 0;
  puVar4[6] = 0;
  *(undefined8 *)(puVar4 + 8) = 0;
  puVar4[10] = 6;
  *(undefined1 (*) [16])(puVar4 + 2) = (undefined1  [16])0x0;
  if (in_EDX != 0) goto LAB_00102a09;
  local_78 = 0;
  local_68 = "Material";
  local_80 = 0;
  local_60._0_8_ = 8;
  String::parse_latin1((StrRange *)&local_80);
  local_88 = 0;
  local_68 = (char *)CONCAT44(local_68._4_4_,0x1c);
  local_50 = 0x1f;
  local_48 = 0;
  local_60 = (undefined1  [16])0x0;
  if (local_80 == 0) {
LAB_00102b05:
    local_40 = 6;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_78);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_80);
    local_40 = 6;
    if (local_50 != 0x11) goto LAB_00102b05;
    StringName::StringName((StringName *)&local_70,(CowData<char32_t> *)&local_48,false);
    if (local_60._8_8_ == local_70) {
      if ((StringName::configured != '\0') && (local_70 != 0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_60._8_8_ = local_70;
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  if ((StringName::configured != '\0') && (local_78 != 0)) {
    StringName::unref();
  }
  *puVar4 = local_68._0_4_;
  if (*(long *)(puVar4 + 2) != local_60._0_8_) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(puVar4 + 2));
    uVar2 = local_60._0_8_;
    auVar1._8_8_ = 0;
    auVar1._0_8_ = local_60._8_8_;
    local_60 = auVar1 << 0x40;
    *(undefined8 *)(puVar4 + 2) = uVar2;
  }
  if (*(long *)(puVar4 + 4) != local_60._8_8_) {
    StringName::unref();
    uVar2 = local_60._8_8_;
    local_60._8_8_ = 0;
    *(undefined8 *)(puVar4 + 4) = uVar2;
  }
  puVar4[6] = local_50;
  if (*(long *)(puVar4 + 8) != local_48) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(puVar4 + 8));
    lVar3 = local_48;
    local_48 = 0;
    *(long *)(puVar4 + 8) = lVar3;
  }
  puVar4[10] = local_40;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
  if ((StringName::configured != '\0') && (local_60._8_8_ != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_60);
LAB_00102a09:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar4;
}



/* MethodBind* create_method_bind<GLTFMesh, String>(String (GLTFMesh::*)()) */

MethodBind * create_method_bind<GLTFMesh,String>(_func_String *param_1)

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
  *(_func_String **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00109550;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "GLTFMesh";
  local_30 = 8;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(StrRange *)&local_40,false);
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



/* MethodBind* create_method_bind<GLTFMesh, String>(void (GLTFMesh::*)(String)) */

MethodBind * create_method_bind<GLTFMesh,String>(_func_void_String *param_1)

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
  *(_func_void_String **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_001095b0;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "GLTFMesh";
  local_30 = 8;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(StrRange *)&local_40,false);
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



/* MethodBind* create_method_bind<GLTFMesh, Ref<ImporterMesh>>(Ref<ImporterMesh> (GLTFMesh::*)()) */

MethodBind * create_method_bind<GLTFMesh,Ref<ImporterMesh>>(_func_Ref *param_1)

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
  *(_func_Ref **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00109610;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "GLTFMesh";
  local_30 = 8;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(StrRange *)&local_40,false);
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



/* MethodBind* create_method_bind<GLTFMesh, Ref<ImporterMesh> >(void
   (GLTFMesh::*)(Ref<ImporterMesh>)) */

MethodBind * create_method_bind<GLTFMesh,Ref<ImporterMesh>>(_func_void_Ref *param_1)

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
  *(_func_void_Ref **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00109670;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "GLTFMesh";
  local_30 = 8;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(StrRange *)&local_40,false);
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



/* MethodBind* create_method_bind<GLTFMesh, Vector<float>>(Vector<float> (GLTFMesh::*)()) */

MethodBind * create_method_bind<GLTFMesh,Vector<float>>(_func_Vector *param_1)

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
  *(_func_Vector **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_001096d0;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "GLTFMesh";
  local_30 = 8;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(StrRange *)&local_40,false);
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



/* MethodBind* create_method_bind<GLTFMesh, Vector<float> >(void (GLTFMesh::*)(Vector<float>)) */

MethodBind * create_method_bind<GLTFMesh,Vector<float>>(_func_void_Vector *param_1)

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
  *(_func_void_Vector **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00109730;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "GLTFMesh";
  local_30 = 8;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(StrRange *)&local_40,false);
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



/* MethodBind* create_method_bind<GLTFMesh, TypedArray<Material>>(TypedArray<Material>
   (GLTFMesh::*)()) */

MethodBind * create_method_bind<GLTFMesh,TypedArray<Material>>(_func_TypedArray *param_1)

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
  *(_func_TypedArray **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00109790;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "GLTFMesh";
  local_30 = 8;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(StrRange *)&local_40,false);
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



/* MethodBind* create_method_bind<GLTFMesh, TypedArray<Material> >(void
   (GLTFMesh::*)(TypedArray<Material>)) */

MethodBind * create_method_bind<GLTFMesh,TypedArray<Material>>(_func_void_TypedArray *param_1)

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
  *(_func_void_TypedArray **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_001097f0;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "GLTFMesh";
  local_30 = 8;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(StrRange *)&local_40,false);
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



/* MethodBind* create_method_bind<GLTFMesh, Variant, StringName const&>(Variant
   (GLTFMesh::*)(StringName const&)) */

MethodBind *
create_method_bind<GLTFMesh,Variant,StringName_const&>(_func_Variant_StringName_ptr *param_1)

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
  *(_func_Variant_StringName_ptr **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00109850;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "GLTFMesh";
  local_30 = 8;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(StrRange *)&local_40,false);
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



/* MethodBind* create_method_bind<GLTFMesh, StringName const&, Variant>(void
   (GLTFMesh::*)(StringName const&, Variant)) */

MethodBind *
create_method_bind<GLTFMesh,StringName_const&,Variant>(_func_void_StringName_ptr_Variant *param_1)

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
  *(_func_void_StringName_ptr_Variant **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_001098b0;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 2;
  local_40 = 0;
  local_38 = "GLTFMesh";
  local_30 = 8;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(StrRange *)&local_40,false);
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



/* GLTFMesh::_bind_methods() [clone .cold] */

void GLTFMesh::_bind_methods(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* WARNING: Removing unreachable block (ram,0x00103ad8) */
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



/* MethodBindT<StringName const&, Variant>::validated_call(Object*, Variant const**, Variant*) const
    */

void MethodBindT<StringName_const&,Variant>::validated_call
               (Object *param_1,Variant **param_2,Variant *param_3)

{
  long lVar1;
  long *plVar2;
  code *pcVar3;
  long in_FS_OFFSET;
  long local_68;
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  int local_48 [6];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (Variant **)0x0) && (param_2[1] != (Variant *)0x0)) && (param_2[1][0x2e] != '\0')
     ) {
    StringName::StringName((StringName *)&local_58,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (Variant *)0x0) {
      plVar2 = (long *)param_2[0x23];
      if (plVar2 == (long *)0x0) {
        plVar2 = (long *)(**(code **)(*param_2 + 0x40))(param_2);
      }
    }
    else {
      plVar2 = (long *)(param_2[1] + 0x20);
    }
    if (local_58 == (char *)*plVar2) {
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0x35;
      local_60 = 0;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error("validated_call","./core/object/method_bind.h",0x160,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_00103e03;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar3 = *(code **)(param_1 + 0x58);
  lVar1 = *(long *)(param_1 + 0x60);
  if (((ulong)pcVar3 & 1) != 0) {
    pcVar3 = *(code **)(pcVar3 + *(long *)((long)param_2 + lVar1) + -1);
  }
  Variant::Variant((Variant *)local_48,*(Variant **)(param_3 + 8));
  (*pcVar3)((long *)((long)param_2 + lVar1),*(long *)param_3 + 8,(Variant *)local_48);
  if (Variant::needs_deinit[local_48[0]] != '\0') {
    Variant::_clear_internal();
  }
LAB_00103e03:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<StringName const&, Variant>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<StringName_const&,Variant>::ptrcall(Object *param_1,void **param_2,void *param_3)

{
  long lVar1;
  long *plVar2;
  code *pcVar3;
  long in_FS_OFFSET;
  long local_68;
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  int local_48 [6];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (void **)0x0) && (param_2[1] != (void *)0x0)) &&
     (*(char *)((long)param_2[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (void *)0x0) {
      plVar2 = (long *)param_2[0x23];
      if (plVar2 == (long *)0x0) {
        plVar2 = (long *)(**(code **)((long)*param_2 + 0x40))(param_2);
      }
    }
    else {
      plVar2 = (long *)((long)param_2[1] + 0x20);
    }
    if (local_58 == (char *)*plVar2) {
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0x35;
      local_60 = 0;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x16b,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_00103fff;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar3 = *(code **)(param_1 + 0x58);
  lVar1 = *(long *)(param_1 + 0x60);
  if (((ulong)pcVar3 & 1) != 0) {
    pcVar3 = *(code **)(pcVar3 + *(long *)((long)param_2 + lVar1) + -1);
  }
  Variant::Variant((Variant *)local_48,*(Variant **)((long)param_3 + 8));
                    /* WARNING: Load size is inaccurate */
  (*pcVar3)((long *)((long)param_2 + lVar1),*param_3,(Variant *)local_48);
  if (Variant::needs_deinit[local_48[0]] != '\0') {
    Variant::_clear_internal();
  }
LAB_00103fff:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Variant, StringName const&>::validated_call(Object*, Variant const**, Variant*)
   const */

void __thiscall
MethodBindTR<Variant,StringName_const&>::validated_call
          (MethodBindTR<Variant,StringName_const&> *this,Object *param_1,Variant **param_2,
          Variant *param_3)

{
  code *pcVar1;
  long *plVar2;
  long in_FS_OFFSET;
  long local_68;
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  int local_48 [6];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar2 = *(long **)(param_1 + 0x118);
      if (plVar2 == (long *)0x0) {
        plVar2 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar2 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_58 == (char *)*plVar2) {
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error("validated_call","./core/object/method_bind.h",0x213,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_001041ed;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar1 = *(code **)(this + 0x58);
  if (((ulong)pcVar1 & 1) != 0) {
    pcVar1 = *(code **)(pcVar1 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  (*pcVar1)((Variant *)local_48,param_1 + *(long *)(this + 0x60),*param_2 + 8);
  Variant::operator=((Variant *)param_3,(Variant *)local_48);
  if (Variant::needs_deinit[local_48[0]] != '\0') {
    Variant::_clear_internal();
  }
LAB_001041ed:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Variant, StringName const&>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTR<Variant,StringName_const&>::ptrcall
          (MethodBindTR<Variant,StringName_const&> *this,Object *param_1,void **param_2,
          void *param_3)

{
  code *pcVar1;
  long *plVar2;
  long in_FS_OFFSET;
  long local_68;
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  int local_48 [6];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar2 = *(long **)(param_1 + 0x118);
      if (plVar2 == (long *)0x0) {
        plVar2 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar2 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_58 == (char *)*plVar2) {
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x21e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_001043fb;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar1 = *(code **)(this + 0x58);
  if (((ulong)pcVar1 & 1) != 0) {
    pcVar1 = *(code **)(pcVar1 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  (*pcVar1)((Variant *)local_48,param_1 + *(long *)(this + 0x60),*param_2);
  Variant::operator=((Variant *)param_3,(Variant *)local_48);
  if (Variant::needs_deinit[local_48[0]] != '\0') {
    Variant::_clear_internal();
  }
LAB_001043fb:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<TypedArray<Material>>::call(Object*, Variant const**, int, Callable::CallError&)
   const */

Object * MethodBindTR<TypedArray<Material>>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  code *pcVar2;
  long *plVar3;
  undefined4 in_register_00000014;
  long *plVar4;
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
  
  plVar4 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar4 != (long *)0x0) && (plVar4[1] != 0)) && (*(char *)(plVar4[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(param_2 + 3));
    if (plVar4[1] == 0) {
      plVar3 = (long *)plVar4[0x23];
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*plVar4 + 0x40))(plVar4);
      }
    }
    else {
      plVar3 = (long *)(plVar4[1] + 0x20);
    }
    if (local_58 == (char *)*plVar3) {
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error(&_LC34,"./core/object/method_bind.h",0x207,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_00104700;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = (code *)param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D == 0) {
    if ((param_2[5] == (Variant *)0x0) || (-1 < *(int *)(param_2[5] + -8))) {
      *in_R9 = 0;
      if (((ulong)pcVar2 & 1) != 0) {
        pcVar2 = *(code **)(pcVar2 + *(long *)((long)plVar4 + (long)pVVar1) + -1);
      }
      (*pcVar2)((Array *)&local_58);
      Variant::Variant((Variant *)local_48,(Array *)&local_58);
      if (Variant::needs_deinit[*(int *)param_1] != '\0') {
        Variant::_clear_internal();
      }
      *(undefined4 *)param_1 = local_48[0];
      *(undefined8 *)(param_1 + 8) = local_40;
      *(undefined8 *)(param_1 + 0x10) = uStack_38;
      Array::~Array((Array *)&local_58);
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
LAB_00104700:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Vector<float> >::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<Vector<float>>::validated_call(Object *param_1,Variant **param_2,Variant *param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  code *pcVar6;
  long in_FS_OFFSET;
  bool bVar7;
  long local_58;
  undefined8 local_50;
  char *local_48;
  long local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (Variant **)0x0) && (param_2[1] != (Variant *)0x0)) && (param_2[1][0x2e] != '\0')
     ) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (Variant *)0x0) {
      plVar5 = (long *)param_2[0x23];
      if (plVar5 == (long *)0x0) {
        plVar5 = (long *)(**(code **)(*param_2 + 0x40))(param_2);
      }
    }
    else {
      plVar5 = (long *)(param_2[1] + 0x20);
    }
    if (local_48 == (char *)*plVar5) {
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
      goto LAB_0010498b;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar6 = *(code **)(param_1 + 0x58);
  lVar1 = *(long *)(param_1 + 0x60);
  if (((ulong)pcVar6 & 1) != 0) {
    pcVar6 = *(code **)(pcVar6 + *(long *)((long)param_2 + lVar1) + -1);
  }
  lVar2 = *(long *)(*(long *)param_3 + 8);
  local_40 = 0;
  lVar3 = *(long *)(lVar2 + 0x18);
  plVar5 = (long *)(lVar3 + -0x10);
  if (lVar3 != 0) {
    do {
      lVar3 = *plVar5;
      if (lVar3 == 0) goto LAB_0010495b;
      LOCK();
      lVar4 = *plVar5;
      bVar7 = lVar3 == lVar4;
      if (bVar7) {
        *plVar5 = lVar3 + 1;
        lVar4 = lVar3;
      }
      UNLOCK();
    } while (!bVar7);
    if (lVar4 != -1) {
      local_40 = *(long *)(lVar2 + 0x18);
    }
  }
LAB_0010495b:
  (*pcVar6)((long *)((long)param_2 + lVar1));
  lVar1 = local_40;
  if (local_40 != 0) {
    LOCK();
    plVar5 = (long *)(local_40 + -0x10);
    *plVar5 = *plVar5 + -1;
    UNLOCK();
    if (*plVar5 == 0) {
      local_40 = 0;
      Memory::free_static((void *)(lVar1 + -0x10),false);
    }
  }
LAB_0010498b:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* MethodBindT<Vector<float> >::ptrcall(Object*, void const**, void*) const */

void MethodBindT<Vector<float>>::ptrcall(Object *param_1,void **param_2,void *param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  code *pcVar6;
  long in_FS_OFFSET;
  bool bVar7;
  long local_58;
  undefined8 local_50;
  char *local_48;
  long local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (void **)0x0) && (param_2[1] != (void *)0x0)) &&
     (*(char *)((long)param_2[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (void *)0x0) {
      plVar5 = (long *)param_2[0x23];
      if (plVar5 == (long *)0x0) {
        plVar5 = (long *)(**(code **)((long)*param_2 + 0x40))(param_2);
      }
    }
    else {
      plVar5 = (long *)((long)param_2[1] + 0x20);
    }
    if (local_48 == (char *)*plVar5) {
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
      goto LAB_00104bc7;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar6 = *(code **)(param_1 + 0x58);
  lVar1 = *(long *)(param_1 + 0x60);
                    /* WARNING: Load size is inaccurate */
  lVar2 = *param_3;
  if (((ulong)pcVar6 & 1) != 0) {
    pcVar6 = *(code **)(pcVar6 + *(long *)((long)param_2 + lVar1) + -1);
  }
  local_40 = 0;
  lVar3 = *(long *)(lVar2 + 8);
  plVar5 = (long *)(lVar3 + -0x10);
  if (lVar3 != 0) {
    do {
      lVar3 = *plVar5;
      if (lVar3 == 0) goto LAB_00104b97;
      LOCK();
      lVar4 = *plVar5;
      bVar7 = lVar3 == lVar4;
      if (bVar7) {
        *plVar5 = lVar3 + 1;
        lVar4 = lVar3;
      }
      UNLOCK();
    } while (!bVar7);
    if (lVar4 != -1) {
      local_40 = *(long *)(lVar2 + 8);
    }
  }
LAB_00104b97:
  (*pcVar6)((long *)((long)param_2 + lVar1));
  lVar1 = local_40;
  if (local_40 != 0) {
    LOCK();
    plVar5 = (long *)(local_40 + -0x10);
    *plVar5 = *plVar5 + -1;
    UNLOCK();
    if (*plVar5 == 0) {
      local_40 = 0;
      Memory::free_static((void *)(lVar1 + -0x10),false);
    }
  }
LAB_00104bc7:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* MethodBindTR<Vector<float>>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTR<Vector<float>>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  long lVar2;
  code *pcVar3;
  long *plVar4;
  undefined4 in_register_00000014;
  long *plVar5;
  int in_R8D;
  undefined4 *in_R9;
  long in_FS_OFFSET;
  long local_68;
  undefined8 local_60;
  char *local_58;
  long local_50;
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  
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
      _err_print_error(&_LC34,"./core/object/method_bind.h",0x207,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_00104e50;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar3 = (code *)param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D == 0) {
    if ((param_2[5] == (Variant *)0x0) || (-1 < *(int *)(param_2[5] + -8))) {
      *in_R9 = 0;
      if (((ulong)pcVar3 & 1) != 0) {
        pcVar3 = *(code **)(pcVar3 + *(long *)((long)plVar5 + (long)pVVar1) + -1);
      }
      (*pcVar3)(&local_58);
      Variant::Variant((Variant *)local_48,(Vector *)&local_58);
      if (Variant::needs_deinit[*(int *)param_1] != '\0') {
        Variant::_clear_internal();
      }
      lVar2 = local_50;
      *(undefined4 *)param_1 = local_48[0];
      *(undefined8 *)(param_1 + 8) = local_40;
      *(undefined8 *)(param_1 + 0x10) = uStack_38;
      if (local_50 != 0) {
        LOCK();
        plVar5 = (long *)(local_50 + -0x10);
        *plVar5 = *plVar5 + -1;
        UNLOCK();
        if (*plVar5 == 0) {
          local_50 = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
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
LAB_00104e50:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Vector<float>>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTR<Vector<float>>::validated_call
          (MethodBindTR<Vector<float>> *this,Object *param_1,Variant **param_2,Variant *param_3)

{
  long lVar1;
  code *pcVar2;
  long *plVar3;
  Variant **extraout_RDX;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  Variant **local_48;
  long local_40 [2];
  long local_30;
  
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
    if (local_48 == (Variant **)*plVar3) {
      if ((StringName::configured != '\0') && (local_48 != (Variant **)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = (Variant **)0x103ca8;
      local_40[0] = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x213,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_001050bb;
    }
    param_2 = local_48;
    if ((StringName::configured != '\0') && (local_48 != (Variant **)0x0)) {
      StringName::unref();
      param_2 = extraout_RDX;
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    param_2 = *(Variant ***)(param_1 + *(long *)(this + 0x60));
    pcVar2 = *(code **)(pcVar2 + (long)param_2 + -1);
  }
  (*pcVar2)((StringName *)&local_48,param_1 + *(long *)(this + 0x60),param_2);
  if (*(long *)(*(long *)(param_3 + 8) + 0x18) != local_40[0]) {
    CowData<float>::_ref((CowData<float> *)(*(long *)(param_3 + 8) + 0x18),(CowData *)local_40);
  }
  lVar1 = local_40[0];
  if (local_40[0] != 0) {
    LOCK();
    plVar3 = (long *)(local_40[0] + -0x10);
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (*plVar3 == 0) {
      local_40[0] = 0;
      Memory::free_static((void *)(lVar1 + -0x10),false);
    }
  }
LAB_001050bb:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Vector<float>>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTR<Vector<float>>::ptrcall
          (MethodBindTR<Vector<float>> *this,Object *param_1,void **param_2,void *param_3)

{
  long lVar1;
  code *pcVar2;
  long *plVar3;
  void **extraout_RDX;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  void **local_48;
  long local_40 [2];
  long local_30;
  
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
    if (local_48 == (void **)*plVar3) {
      if ((StringName::configured != '\0') && (local_48 != (void **)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = (void **)0x103ca8;
      local_40[0] = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x21e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_001052b7;
    }
    param_2 = local_48;
    if ((StringName::configured != '\0') && (local_48 != (void **)0x0)) {
      StringName::unref();
      param_2 = extraout_RDX;
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    param_2 = *(void ***)(param_1 + *(long *)(this + 0x60));
    pcVar2 = *(code **)(pcVar2 + (long)param_2 + -1);
  }
  (*pcVar2)((StringName *)&local_48,param_1 + *(long *)(this + 0x60),param_2);
  if (*(long *)((long)param_3 + 8) != local_40[0]) {
    CowData<float>::_ref((CowData<float> *)((long)param_3 + 8),(CowData *)local_40);
  }
  lVar1 = local_40[0];
  if (local_40[0] != 0) {
    LOCK();
    plVar3 = (long *)(local_40[0] + -0x10);
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (*plVar3 == 0) {
      local_40[0] = 0;
      Memory::free_static((void *)(lVar1 + -0x10),false);
    }
  }
LAB_001052b7:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<String>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<String>::validated_call(Object *param_1,Variant **param_2,Variant *param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  code *pcVar6;
  long in_FS_OFFSET;
  bool bVar7;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (Variant **)0x0) && (param_2[1] != (Variant *)0x0)) && (param_2[1][0x2e] != '\0')
     ) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (Variant *)0x0) {
      plVar5 = (long *)param_2[0x23];
      if (plVar5 == (long *)0x0) {
        plVar5 = (long *)(**(code **)(*param_2 + 0x40))(param_2);
      }
    }
    else {
      plVar5 = (long *)(param_2[1] + 0x20);
    }
    if (local_48 == (char *)*plVar5) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((CowData<char32_t> *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x160,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(CowData<char32_t> *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_001054b4;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar6 = *(code **)(param_1 + 0x58);
  lVar1 = *(long *)(param_1 + 0x60);
  lVar2 = *(long *)param_3;
  if (((ulong)pcVar6 & 1) != 0) {
    pcVar6 = *(code **)(pcVar6 + *(long *)((long)param_2 + lVar1) + -1);
  }
  local_48 = (char *)0x0;
  lVar3 = *(long *)(lVar2 + 8);
  plVar5 = (long *)(lVar3 + -0x10);
  if (lVar3 != 0) {
    do {
      lVar3 = *plVar5;
      if (lVar3 == 0) goto LAB_001054a7;
      LOCK();
      lVar4 = *plVar5;
      bVar7 = lVar3 == lVar4;
      if (bVar7) {
        *plVar5 = lVar3 + 1;
        lVar4 = lVar3;
      }
      UNLOCK();
    } while (!bVar7);
    if (lVar4 != -1) {
      local_48 = *(char **)(lVar2 + 8);
    }
  }
LAB_001054a7:
  (*pcVar6)((long *)((long)param_2 + lVar1),(CowData<char32_t> *)&local_48);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
LAB_001054b4:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* MethodBindT<String>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<String>::ptrcall(Object *param_1,void **param_2,void *param_3)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  code *pcVar6;
  long in_FS_OFFSET;
  bool bVar7;
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
      plVar5 = (long *)param_2[0x23];
      if (plVar5 == (long *)0x0) {
        plVar5 = (long *)(**(code **)((long)*param_2 + 0x40))(param_2);
      }
    }
    else {
      plVar5 = (long *)((long)param_2[1] + 0x20);
    }
    if (local_48 == (char *)*plVar5) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((CowData<char32_t> *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x16b,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(CowData<char32_t> *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_001056d2;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar6 = *(code **)(param_1 + 0x58);
  lVar2 = *(long *)(param_1 + 0x60);
                    /* WARNING: Load size is inaccurate */
  plVar5 = *param_3;
  if (((ulong)pcVar6 & 1) != 0) {
    pcVar6 = *(code **)(pcVar6 + *(long *)((long)param_2 + lVar2) + -1);
  }
  local_48 = (char *)0x0;
  lVar3 = *plVar5;
  plVar1 = (long *)(lVar3 + -0x10);
  if (lVar3 != 0) {
    do {
      lVar3 = *plVar1;
      if (lVar3 == 0) goto LAB_001056c5;
      LOCK();
      lVar4 = *plVar1;
      bVar7 = lVar3 == lVar4;
      if (bVar7) {
        *plVar1 = lVar3 + 1;
        lVar4 = lVar3;
      }
      UNLOCK();
    } while (!bVar7);
    if (lVar4 != -1) {
      local_48 = (char *)*plVar5;
    }
  }
LAB_001056c5:
  (*pcVar6)((long *)((long)param_2 + lVar2),(CowData<char32_t> *)&local_48);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
LAB_001056d2:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* MethodBindTR<String>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTR<String>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  code *pcVar2;
  long *plVar3;
  undefined4 in_register_00000014;
  long *plVar4;
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
  
  plVar4 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar4 != (long *)0x0) && (plVar4[1] != 0)) && (*(char *)(plVar4[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(param_2 + 3));
    if (plVar4[1] == 0) {
      plVar3 = (long *)plVar4[0x23];
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*plVar4 + 0x40))(plVar4);
      }
    }
    else {
      plVar3 = (long *)(plVar4[1] + 0x20);
    }
    if (local_58 == (char *)*plVar3) {
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error(&_LC34,"./core/object/method_bind.h",0x207,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_00105930;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = (code *)param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D == 0) {
    if ((param_2[5] == (Variant *)0x0) || (-1 < *(int *)(param_2[5] + -8))) {
      *in_R9 = 0;
      if (((ulong)pcVar2 & 1) != 0) {
        pcVar2 = *(code **)(pcVar2 + *(long *)((long)plVar4 + (long)pVVar1) + -1);
      }
      (*pcVar2)((CowData<char32_t> *)&local_58);
      Variant::Variant((Variant *)local_48,(CowData<char32_t> *)&local_58);
      if (Variant::needs_deinit[*(int *)param_1] != '\0') {
        Variant::_clear_internal();
      }
      *(undefined4 *)param_1 = local_48[0];
      *(undefined8 *)(param_1 + 8) = local_40;
      *(undefined8 *)(param_1 + 0x10) = uStack_38;
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
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
LAB_00105930:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<String>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTR<String>::validated_call
          (MethodBindTR<String> *this,Object *param_1,Variant **param_2,Variant *param_3)

{
  code *pcVar1;
  long *plVar2;
  Variant **extraout_RDX;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  Variant **local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar2 = *(long **)(param_1 + 0x118);
      if (plVar2 == (long *)0x0) {
        plVar2 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar2 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (Variant **)*plVar2) {
      if ((StringName::configured != '\0') && (local_48 != (Variant **)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = (Variant **)0x103ca8;
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((CowData<char32_t> *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x213,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(CowData<char32_t> *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00105b6c;
    }
    param_2 = local_48;
    if ((StringName::configured != '\0') && (local_48 != (Variant **)0x0)) {
      StringName::unref();
      param_2 = extraout_RDX;
    }
  }
  pcVar1 = *(code **)(this + 0x58);
  if (((ulong)pcVar1 & 1) != 0) {
    param_2 = *(Variant ***)(param_1 + *(long *)(this + 0x60));
    pcVar1 = *(code **)(pcVar1 + (long)param_2 + -1);
  }
  (*pcVar1)((CowData<char32_t> *)&local_48,param_1 + *(long *)(this + 0x60),param_2);
  if (*(Variant ***)(param_3 + 8) != local_48) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(param_3 + 8),(CowData *)&local_48);
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
LAB_00105b6c:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<String>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTR<String>::ptrcall
          (MethodBindTR<String> *this,Object *param_1,void **param_2,void *param_3)

{
  code *pcVar1;
  long *plVar2;
  void **extraout_RDX;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  void **local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar2 = *(long **)(param_1 + 0x118);
      if (plVar2 == (long *)0x0) {
        plVar2 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar2 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (void **)*plVar2) {
      if ((StringName::configured != '\0') && (local_48 != (void **)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = (void **)0x103ca8;
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((CowData<char32_t> *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x21e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(CowData<char32_t> *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00105d3d;
    }
    param_2 = local_48;
    if ((StringName::configured != '\0') && (local_48 != (void **)0x0)) {
      StringName::unref();
      param_2 = extraout_RDX;
    }
  }
  pcVar1 = *(code **)(this + 0x58);
  if (((ulong)pcVar1 & 1) != 0) {
    param_2 = *(void ***)(param_1 + *(long *)(this + 0x60));
    pcVar1 = *(code **)(pcVar1 + (long)param_2 + -1);
  }
  (*pcVar1)((CowData<char32_t> *)&local_48,param_1 + *(long *)(this + 0x60),param_2);
                    /* WARNING: Load size is inaccurate */
  if (*param_3 != local_48) {
    CowData<char32_t>::_ref((CowData<char32_t> *)param_3,(CowData *)&local_48);
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
LAB_00105d3d:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<TypedArray<Material>>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTR<TypedArray<Material>>::validated_call
          (MethodBindTR<TypedArray<Material>> *this,Object *param_1,Variant **param_2,
          Variant *param_3)

{
  code *pcVar1;
  long *plVar2;
  Variant **extraout_RDX;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  Variant **local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar2 = *(long **)(param_1 + 0x118);
      if (plVar2 == (long *)0x0) {
        plVar2 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar2 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (Variant **)*plVar2) {
      if ((StringName::configured != '\0') && (local_48 != (Variant **)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = (Variant **)0x103ca8;
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((Array *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x213,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(Array *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00105ef9;
    }
    param_2 = local_48;
    if ((StringName::configured != '\0') && (local_48 != (Variant **)0x0)) {
      StringName::unref();
      param_2 = extraout_RDX;
    }
  }
  pcVar1 = *(code **)(this + 0x58);
  if (((ulong)pcVar1 & 1) != 0) {
    param_2 = *(Variant ***)(param_1 + *(long *)(this + 0x60));
    pcVar1 = *(code **)(pcVar1 + (long)param_2 + -1);
  }
  (*pcVar1)((Array *)&local_48,param_1 + *(long *)(this + 0x60),param_2);
  Array::operator=((Array *)(param_3 + 8),(Array *)&local_48);
  Array::~Array((Array *)&local_48);
LAB_00105ef9:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<TypedArray<Material>>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTR<TypedArray<Material>>::ptrcall
          (MethodBindTR<TypedArray<Material>> *this,Object *param_1,void **param_2,void *param_3)

{
  code *pcVar1;
  long *plVar2;
  void **extraout_RDX;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  void **local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar2 = *(long **)(param_1 + 0x118);
      if (plVar2 == (long *)0x0) {
        plVar2 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar2 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (void **)*plVar2) {
      if ((StringName::configured != '\0') && (local_48 != (void **)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = (void **)0x103ca8;
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((Array *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x21e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(Array *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_001060ca;
    }
    param_2 = local_48;
    if ((StringName::configured != '\0') && (local_48 != (void **)0x0)) {
      StringName::unref();
      param_2 = extraout_RDX;
    }
  }
  pcVar1 = *(code **)(this + 0x58);
  if (((ulong)pcVar1 & 1) != 0) {
    param_2 = *(void ***)(param_1 + *(long *)(this + 0x60));
    pcVar1 = *(code **)(pcVar1 + (long)param_2 + -1);
  }
  (*pcVar1)((Array *)&local_48,param_1 + *(long *)(this + 0x60),param_2);
  Array::operator=((Array *)param_3,(Array *)&local_48);
  Array::~Array((Array *)&local_48);
LAB_001060ca:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Ref<ImporterMesh> >::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<Ref<ImporterMesh>>::validated_call
               (Object *param_1,Variant **param_2,Variant *param_3)

{
  long lVar1;
  Object *pOVar2;
  char cVar3;
  Object *pOVar4;
  long *plVar5;
  code *pcVar6;
  long in_FS_OFFSET;
  long local_68;
  undefined8 local_60;
  Object *local_58;
  undefined8 local_50;
  int local_48 [6];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (Variant **)0x0) && (param_2[1] != (Variant *)0x0)) && (param_2[1][0x2e] != '\0')
     ) {
    StringName::StringName((StringName *)&local_58,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (Variant *)0x0) {
      plVar5 = (long *)param_2[0x23];
      if (plVar5 == (long *)0x0) {
        plVar5 = (long *)(**(code **)(*param_2 + 0x40))(param_2);
      }
    }
    else {
      plVar5 = (long *)(param_2[1] + 0x20);
    }
    if (local_58 == (Object *)*plVar5) {
      if ((StringName::configured != '\0') && (local_58 != (Object *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = (Object *)0x103ca8;
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error("validated_call","./core/object/method_bind.h",0x160,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_00106338;
    }
    if ((StringName::configured != '\0') && (local_58 != (Object *)0x0)) {
      StringName::unref();
    }
  }
  pcVar6 = *(code **)(param_1 + 0x58);
  lVar1 = *(long *)(param_1 + 0x60);
  if (((ulong)pcVar6 & 1) != 0) {
    pcVar6 = *(code **)(pcVar6 + *(long *)((long)param_2 + lVar1) + -1);
  }
  Variant::Variant((Variant *)local_48,*(Object **)(*(long *)param_3 + 0x10));
  local_58 = (Object *)0x0;
  pOVar4 = (Object *)Variant::get_validated_object();
  pOVar2 = local_58;
  if (pOVar4 != local_58) {
    if (pOVar4 == (Object *)0x0) {
      if (local_58 != (Object *)0x0) {
        local_58 = (Object *)0x0;
LAB_001062f6:
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
    else {
      pOVar4 = (Object *)__dynamic_cast(pOVar4,&Object::typeinfo,&ImporterMesh::typeinfo,0);
      if (pOVar2 != pOVar4) {
        local_58 = pOVar4;
        if (pOVar4 != (Object *)0x0) {
          cVar3 = RefCounted::reference();
          if (cVar3 == '\0') {
            local_58 = (Object *)0x0;
          }
        }
        if (pOVar2 != (Object *)0x0) goto LAB_001062f6;
      }
    }
  }
  if (Variant::needs_deinit[local_48[0]] != '\0') {
    Variant::_clear_internal();
  }
  (*pcVar6)((long *)((long)param_2 + lVar1));
  if (local_58 != (Object *)0x0) {
    cVar3 = RefCounted::unreference();
    pOVar2 = local_58;
    if (cVar3 != '\0') {
      cVar3 = predelete_handler(local_58);
      if (cVar3 != '\0') {
        (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
        Memory::free_static(pOVar2,false);
      }
    }
  }
LAB_00106338:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Ref<ImporterMesh> >::ptrcall(Object*, void const**, void*) const */

void MethodBindT<Ref<ImporterMesh>>::ptrcall(Object *param_1,void **param_2,void *param_3)

{
  long lVar1;
  Object *pOVar2;
  char cVar3;
  long *plVar4;
  code *pcVar5;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  Object *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (void **)0x0) && (param_2[1] != (void *)0x0)) &&
     (*(char *)((long)param_2[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (void *)0x0) {
      plVar4 = (long *)param_2[0x23];
      if (plVar4 == (long *)0x0) {
        plVar4 = (long *)(**(code **)((long)*param_2 + 0x40))(param_2);
      }
    }
    else {
      plVar4 = (long *)((long)param_2[1] + 0x20);
    }
    if (local_48 == (Object *)*plVar4) {
      if ((StringName::configured != '\0') && (local_48 != (Object *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = (Object *)0x103ca8;
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
      goto LAB_001065fc;
    }
    if ((StringName::configured != '\0') && (local_48 != (Object *)0x0)) {
      StringName::unref();
    }
  }
  pcVar5 = *(code **)(param_1 + 0x58);
                    /* WARNING: Load size is inaccurate */
  lVar1 = *(long *)(param_1 + 0x60);
  if (((ulong)pcVar5 & 1) != 0) {
    pcVar5 = *(code **)(pcVar5 + *(long *)((long)param_2 + lVar1) + -1);
  }
  if ((*param_3 == (long *)0x0) || (local_48 = (Object *)**param_3, local_48 == (Object *)0x0)) {
LAB_001065d8:
    local_48 = (Object *)0x0;
  }
  else {
    cVar3 = RefCounted::init_ref();
    if (cVar3 == '\0') goto LAB_001065d8;
  }
  (*pcVar5)((long *)((long)param_2 + lVar1));
  if (local_48 != (Object *)0x0) {
    cVar3 = RefCounted::unreference();
    pOVar2 = local_48;
    if (cVar3 != '\0') {
      cVar3 = predelete_handler(local_48);
      if (cVar3 != '\0') {
        (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
        Memory::free_static(pOVar2,false);
      }
    }
  }
LAB_001065fc:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Ref<ImporterMesh>>::call(Object*, Variant const**, int, Callable::CallError&) const
    */

Object * MethodBindTR<Ref<ImporterMesh>>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  Object *pOVar2;
  char cVar3;
  code *pcVar4;
  long *plVar5;
  undefined4 in_register_00000014;
  long *plVar6;
  int in_R8D;
  undefined4 *in_R9;
  long in_FS_OFFSET;
  long local_68;
  undefined8 local_60;
  Object *local_58;
  undefined8 local_50;
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  
  plVar6 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar6 != (long *)0x0) && (plVar6[1] != 0)) && (*(char *)(plVar6[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(param_2 + 3));
    if (plVar6[1] == 0) {
      plVar5 = (long *)plVar6[0x23];
      if (plVar5 == (long *)0x0) {
        plVar5 = (long *)(**(code **)(*plVar6 + 0x40))(plVar6);
      }
    }
    else {
      plVar5 = (long *)(plVar6[1] + 0x20);
    }
    if (local_58 == (Object *)*plVar5) {
      if ((StringName::configured != '\0') && (local_58 != (Object *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = (Object *)0x103ca8;
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error(&_LC34,"./core/object/method_bind.h",0x207,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_001068c0;
    }
    if ((StringName::configured != '\0') && (local_58 != (Object *)0x0)) {
      StringName::unref();
    }
  }
  pcVar4 = (code *)param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D == 0) {
    if ((param_2[5] == (Variant *)0x0) || (-1 < *(int *)(param_2[5] + -8))) {
      *in_R9 = 0;
      if (((ulong)pcVar4 & 1) != 0) {
        pcVar4 = *(code **)(pcVar4 + *(long *)((long)plVar6 + (long)pVVar1) + -1);
      }
      (*pcVar4)(&local_58);
      Variant::Variant((Variant *)local_48,local_58);
      if (Variant::needs_deinit[*(int *)param_1] != '\0') {
        Variant::_clear_internal();
      }
      *(undefined4 *)param_1 = local_48[0];
      *(undefined8 *)(param_1 + 8) = local_40;
      *(undefined8 *)(param_1 + 0x10) = uStack_38;
      if (local_58 != (Object *)0x0) {
        cVar3 = RefCounted::unreference();
        pOVar2 = local_58;
        if (cVar3 != '\0') {
          cVar3 = predelete_handler(local_58);
          if (cVar3 != '\0') {
            (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
            Memory::free_static(pOVar2,false);
          }
        }
      }
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
LAB_001068c0:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Ref<ImporterMesh>>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTR<Ref<ImporterMesh>>::ptrcall
          (MethodBindTR<Ref<ImporterMesh>> *this,Object *param_1,void **param_2,void *param_3)

{
  char cVar1;
  code *pcVar2;
  Object *pOVar3;
  long *plVar4;
  Object *extraout_RDX;
  Object *pOVar5;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  Object *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar4 = *(long **)(param_1 + 0x118);
      if (plVar4 == (long *)0x0) {
        plVar4 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar4 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (Object *)*plVar4) {
      if ((StringName::configured != '\0') && (local_48 != (Object *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = (Object *)0x103ca8;
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x21e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00106b46;
    }
    param_2 = (void **)local_48;
    if ((StringName::configured != '\0') && (local_48 != (Object *)0x0)) {
      StringName::unref();
      param_2 = (void **)extraout_RDX;
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    param_2 = *(void ***)(param_1 + *(long *)(this + 0x60));
    pcVar2 = *(code **)((Object *)((long)param_2 + -1) + (long)pcVar2);
  }
  (*pcVar2)((StringName *)&local_48,param_1 + *(long *)(this + 0x60),param_2);
  if (local_48 == (Object *)0x0) {
                    /* WARNING: Load size is inaccurate */
    pOVar5 = *param_3;
    if (pOVar5 == (Object *)0x0) goto LAB_00106b46;
    *(undefined8 *)param_3 = 0;
    goto LAB_00106b89;
  }
  pOVar3 = (Object *)__dynamic_cast(local_48,&Object::typeinfo,&RefCounted::typeinfo,0);
                    /* WARNING: Load size is inaccurate */
  pOVar5 = *param_3;
  if (pOVar5 != pOVar3) {
    *(Object **)param_3 = pOVar3;
    if (pOVar3 == (Object *)0x0) {
      if (pOVar5 != (Object *)0x0) goto LAB_00106b89;
    }
    else {
      cVar1 = RefCounted::reference();
      if (cVar1 == '\0') {
        *(undefined8 *)param_3 = 0;
      }
      if (pOVar5 != (Object *)0x0) {
LAB_00106b89:
        cVar1 = RefCounted::unreference();
        if (cVar1 != '\0') {
          cVar1 = predelete_handler(pOVar5);
          if (cVar1 != '\0') {
            (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
            Memory::free_static(pOVar5,false);
          }
        }
      }
      if (local_48 == (Object *)0x0) goto LAB_00106b46;
    }
  }
  cVar1 = RefCounted::unreference();
  pOVar5 = local_48;
  if (cVar1 != '\0') {
    cVar1 = predelete_handler(local_48);
    if (cVar1 != '\0') {
      (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
      Memory::free_static(pOVar5,false);
    }
  }
LAB_00106b46:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Variant, StringName const&>::call(Object*, Variant const**, int,
   Callable::CallError&) const */

Object * MethodBindTR<Variant,StringName_const&>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  Variant *pVVar2;
  long lVar3;
  undefined8 uVar4;
  char cVar5;
  undefined4 uVar6;
  long *plVar7;
  long lVar8;
  undefined4 in_register_00000014;
  long *plVar9;
  uint in_R8D;
  undefined4 *in_R9;
  undefined4 *puVar10;
  code *pcVar11;
  long in_FS_OFFSET;
  bool bVar12;
  long local_78;
  undefined8 local_70;
  char *local_68;
  undefined8 local_60;
  undefined4 local_58 [2];
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  
  plVar9 = (long *)CONCAT44(in_register_00000014,param_3);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar9 != (long *)0x0) && (plVar9[1] != 0)) && (*(char *)(plVar9[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_68,(StringName *)(param_2 + 3));
    if (plVar9[1] == 0) {
      plVar7 = (long *)plVar9[0x23];
      if (plVar7 == (long *)0x0) {
        plVar7 = (long *)(**(code **)(*plVar9 + 0x40))(plVar9);
      }
    }
    else {
      plVar7 = (long *)(plVar9[1] + 0x20);
    }
    if (local_68 == (char *)*plVar7) {
      if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_68 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_70 = 0;
      local_60 = 0x35;
      String::parse_latin1((StrRange *)&local_70);
      vformat<StringName>((StringName *)&local_68,(StrRange *)&local_70,&local_78);
      _err_print_error(&_LC34,"./core/object/method_bind.h",0x207,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_68,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      if ((StringName::configured != '\0') && (local_78 != 0)) {
        StringName::unref();
      }
      goto LAB_00106eb8;
    }
    if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar11 = (code *)param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D < 2) {
    pVVar2 = param_2[5];
    if (pVVar2 == (Variant *)0x0) {
      if (in_R8D != 1) goto LAB_00106f00;
LAB_00106ef0:
      puVar10 = *(undefined4 **)param_4;
    }
    else {
      lVar3 = *(long *)(pVVar2 + -8);
      if ((int)lVar3 < (int)(in_R8D ^ 1)) {
LAB_00106f00:
        uVar6 = 4;
        goto LAB_00106ead;
      }
      if (in_R8D == 1) goto LAB_00106ef0;
      lVar8 = (long)((int)lVar3 + -1);
      if (lVar3 <= lVar8) {
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar8,lVar3,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar11 = (code *)invalidInstructionException();
        (*pcVar11)();
      }
      puVar10 = (undefined4 *)(pVVar2 + lVar8 * 0x18);
    }
    *in_R9 = 0;
    if (((ulong)pcVar11 & 1) != 0) {
      pcVar11 = *(code **)(pcVar11 + *(long *)((long)plVar9 + (long)pVVar1) + -1);
    }
    cVar5 = Variant::can_convert_strict(*puVar10,0x15);
    uVar4 = _LC39;
    if (cVar5 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    Variant::operator_cast_to_StringName((Variant *)&local_68);
    (*pcVar11)(local_58,(long *)((long)plVar9 + (long)pVVar1),(Variant *)&local_68);
    if (Variant::needs_deinit[*(int *)param_1] != '\0') {
      Variant::_clear_internal();
    }
    bVar12 = StringName::configured != '\0';
    *(undefined4 *)param_1 = local_58[0];
    *(undefined8 *)(param_1 + 8) = local_50;
    *(undefined8 *)(param_1 + 0x10) = uStack_48;
    if ((bVar12) && (local_68 != (char *)0x0)) {
      StringName::unref();
    }
  }
  else {
    uVar6 = 3;
LAB_00106ead:
    *in_R9 = uVar6;
    in_R9[2] = 1;
  }
LAB_00106eb8:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* MethodBindT<StringName const&, Variant>::call(Object*, Variant const**, int,
   Callable::CallError&) const */

Object * MethodBindT<StringName_const&,Variant>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  Variant *pVVar2;
  long lVar3;
  undefined8 uVar4;
  char cVar5;
  int iVar6;
  undefined4 uVar7;
  long *plVar8;
  long lVar9;
  Variant *pVVar10;
  undefined4 in_register_00000014;
  long *plVar11;
  undefined4 *puVar12;
  int iVar13;
  uint in_R8D;
  undefined4 *in_R9;
  code *pcVar14;
  long in_FS_OFFSET;
  long local_78;
  undefined8 local_70;
  char *local_68;
  undefined8 local_60;
  int local_58 [6];
  long local_40;
  
  plVar11 = (long *)CONCAT44(in_register_00000014,param_3);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (((plVar11 != (long *)0x0) && (plVar11[1] != 0)) && (*(char *)(plVar11[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_68,(StringName *)(param_2 + 3));
    if (plVar11[1] == 0) {
      plVar8 = (long *)plVar11[0x23];
      if (plVar8 == (long *)0x0) {
        plVar8 = (long *)(**(code **)(*plVar11 + 0x40))(plVar11);
      }
    }
    else {
      plVar8 = (long *)(plVar11[1] + 0x20);
    }
    if (local_68 == (char *)*plVar8) {
      if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_68 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_70 = 0;
      local_60 = 0x35;
      String::parse_latin1((StrRange *)&local_70);
      vformat<StringName>((StringName *)&local_68,(StrRange *)&local_70,&local_78);
      _err_print_error(&_LC34,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_68,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      if ((StringName::configured != '\0') && (local_78 != 0)) {
        StringName::unref();
      }
      goto LAB_00107310;
    }
    if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar14 = (code *)param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D < 3) {
    pVVar2 = param_2[5];
    iVar6 = 2 - in_R8D;
    if (pVVar2 == (Variant *)0x0) {
      if (iVar6 != 0) goto LAB_00107360;
      puVar12 = *(undefined4 **)param_4;
LAB_0010737d:
      pVVar10 = *(Variant **)(param_4 + 8);
    }
    else {
      lVar3 = *(long *)(pVVar2 + -8);
      iVar13 = (int)lVar3;
      if (iVar13 < iVar6) {
LAB_00107360:
        uVar7 = 4;
        goto LAB_0010734d;
      }
      if (in_R8D == 0) {
        lVar9 = (long)(iVar13 + -2);
        if (lVar3 <= lVar9) goto LAB_00107440;
        puVar12 = (undefined4 *)(pVVar2 + lVar9 * 0x18);
      }
      else {
        puVar12 = *(undefined4 **)param_4;
        if (in_R8D == 2) goto LAB_0010737d;
      }
      lVar9 = (long)(int)((in_R8D ^ 1) + (iVar13 - iVar6));
      if (lVar3 <= lVar9) {
LAB_00107440:
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar9,lVar3,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar14 = (code *)invalidInstructionException();
        (*pcVar14)();
      }
      pVVar10 = (Variant *)(pVVar2 + lVar9 * 0x18);
    }
    *in_R9 = 0;
    if (((ulong)pcVar14 & 1) != 0) {
      pcVar14 = *(code **)(pcVar14 + *(long *)((long)plVar11 + (long)pVVar1) + -1);
    }
    cVar5 = Variant::can_convert_strict(*(undefined4 *)pVVar10,0);
    if (cVar5 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = 1;
    }
    Variant::Variant((Variant *)local_58,pVVar10);
    cVar5 = Variant::can_convert_strict(*puVar12,0x15);
    uVar4 = _LC39;
    if (cVar5 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    Variant::operator_cast_to_StringName((Variant *)&local_68);
    (*pcVar14)((long *)((long)plVar11 + (long)pVVar1),(Variant *)&local_68,(Variant *)local_58);
    if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
      StringName::unref();
    }
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
  }
  else {
    uVar7 = 3;
LAB_0010734d:
    *in_R9 = uVar7;
    in_R9[2] = 2;
  }
LAB_00107310:
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<TypedArray<Material> >::ptrcall(Object*, void const**, void*) const */

void MethodBindT<TypedArray<Material>>::ptrcall(Object *param_1,void **param_2,void *param_3)

{
  long lVar1;
  char cVar2;
  long *plVar3;
  code *pcVar4;
  long in_FS_OFFSET;
  long local_78;
  undefined8 local_70;
  char *local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined1 local_50 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (void **)0x0) && (param_2[1] != (void *)0x0)) &&
     (*(char *)((long)param_2[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_68,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (void *)0x0) {
      plVar3 = (long *)param_2[0x23];
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)((long)*param_2 + 0x40))(param_2);
      }
    }
    else {
      plVar3 = (long *)((long)param_2[1] + 0x20);
    }
    if (local_68 == (char *)*plVar3) {
      if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_68 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_70 = 0;
      local_60 = 0x35;
      String::parse_latin1((StrRange *)&local_70);
      vformat<StringName>((StringName *)&local_68,(StrRange *)&local_70,&local_78);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x16b,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_68,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      if ((StringName::configured != '\0') && (local_78 != 0)) {
        StringName::unref();
      }
      goto LAB_001076b6;
    }
    if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar4 = *(code **)(param_1 + 0x58);
  lVar1 = *(long *)(param_1 + 0x60);
  if (((ulong)pcVar4 & 1) != 0) {
    pcVar4 = *(code **)(pcVar4 + *(long *)((long)param_2 + lVar1) + -1);
  }
  Array::Array((Array *)&local_78);
  local_50 = (undefined1  [16])0x0;
  local_68 = "Material";
  local_58 = 0;
  local_70 = 0;
  local_60 = 8;
  String::parse_latin1((StrRange *)&local_70);
  StringName::StringName((StringName *)&local_68,(StrRange *)&local_70,false);
  Array::set_typed((uint)(Array *)&local_78,(StringName *)0x18,(Variant *)&local_68);
  if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  cVar2 = Array::is_same_typed((Array *)&local_78);
  if (cVar2 == '\0') {
    Array::assign((Array *)&local_78);
  }
  else {
    Array::_ref((Array *)&local_78);
  }
  (*pcVar4)((long *)((long)param_2 + lVar1),(Array *)&local_78);
  Array::~Array((Array *)&local_78);
LAB_001076b6:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<TypedArray<Material> >::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<TypedArray<Material>>::validated_call
               (Object *param_1,Variant **param_2,Variant *param_3)

{
  long lVar1;
  char cVar2;
  long *plVar3;
  code *pcVar4;
  long in_FS_OFFSET;
  long local_78;
  undefined8 local_70;
  char *local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined1 local_50 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (Variant **)0x0) && (param_2[1] != (Variant *)0x0)) && (param_2[1][0x2e] != '\0')
     ) {
    StringName::StringName((StringName *)&local_68,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (Variant *)0x0) {
      plVar3 = (long *)param_2[0x23];
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*param_2 + 0x40))(param_2);
      }
    }
    else {
      plVar3 = (long *)(param_2[1] + 0x20);
    }
    if (local_68 == (char *)*plVar3) {
      if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_68 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_70 = 0;
      local_60 = 0x35;
      String::parse_latin1((StrRange *)&local_70);
      vformat<StringName>((StringName *)&local_68,(StrRange *)&local_70,&local_78);
      _err_print_error("validated_call","./core/object/method_bind.h",0x160,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_68,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      if ((StringName::configured != '\0') && (local_78 != 0)) {
        StringName::unref();
      }
      goto LAB_0010799a;
    }
    if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar4 = *(code **)(param_1 + 0x58);
  lVar1 = *(long *)(param_1 + 0x60);
  if (((ulong)pcVar4 & 1) != 0) {
    pcVar4 = *(code **)(pcVar4 + *(long *)((long)param_2 + lVar1) + -1);
  }
  Array::Array((Array *)&local_78);
  local_50 = (undefined1  [16])0x0;
  local_68 = "Material";
  local_58 = 0;
  local_70 = 0;
  local_60 = 8;
  String::parse_latin1((StrRange *)&local_70);
  StringName::StringName((StringName *)&local_68,(StrRange *)&local_70,false);
  Array::set_typed((uint)(Array *)&local_78,(StringName *)0x18,(Variant *)&local_68);
  if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  cVar2 = Array::is_same_typed((Array *)&local_78);
  if (cVar2 == '\0') {
    Array::assign((Array *)&local_78);
  }
  else {
    Array::_ref((Array *)&local_78);
  }
  (*pcVar4)((long *)((long)param_2 + lVar1),(Array *)&local_78);
  Array::~Array((Array *)&local_78);
LAB_0010799a:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Vector<float> >::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindT<Vector<float>>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  Variant *pVVar2;
  long lVar3;
  undefined8 uVar4;
  char cVar5;
  undefined4 uVar6;
  long *plVar7;
  long lVar8;
  undefined4 in_register_00000014;
  long *plVar9;
  uint in_R8D;
  undefined4 *in_R9;
  undefined4 *puVar10;
  code *pcVar11;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  long local_40;
  long local_30;
  
  plVar9 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((plVar9 != (long *)0x0) && (plVar9[1] != 0)) && (*(char *)(plVar9[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_2 + 3));
    if (plVar9[1] == 0) {
      plVar7 = (long *)plVar9[0x23];
      if (plVar7 == (long *)0x0) {
        plVar7 = (long *)(**(code **)(*plVar9 + 0x40))(plVar9);
      }
    }
    else {
      plVar7 = (long *)(plVar9[1] + 0x20);
    }
    if (local_48 == (char *)*plVar7) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error(&_LC34,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00107c70;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar11 = (code *)param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D < 2) {
    pVVar2 = param_2[5];
    if (pVVar2 == (Variant *)0x0) {
      if (in_R8D != 1) goto LAB_00107cc0;
LAB_00107cb0:
      puVar10 = *(undefined4 **)param_4;
    }
    else {
      lVar3 = *(long *)(pVVar2 + -8);
      if ((int)lVar3 < (int)(in_R8D ^ 1)) {
LAB_00107cc0:
        uVar6 = 4;
        goto LAB_00107c65;
      }
      if (in_R8D == 1) goto LAB_00107cb0;
      lVar8 = (long)((int)lVar3 + -1);
      if (lVar3 <= lVar8) {
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar8,lVar3,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar11 = (code *)invalidInstructionException();
        (*pcVar11)();
      }
      puVar10 = (undefined4 *)(pVVar2 + lVar8 * 0x18);
    }
    *in_R9 = 0;
    if (((ulong)pcVar11 & 1) != 0) {
      pcVar11 = *(code **)(pcVar11 + *(long *)((long)plVar9 + (long)pVVar1) + -1);
    }
    cVar5 = Variant::can_convert_strict(*puVar10,0x20);
    uVar4 = _LC43;
    if (cVar5 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    Variant::operator_cast_to_Vector((Variant *)&local_48);
    (*pcVar11)((long *)((long)plVar9 + (long)pVVar1));
    lVar3 = local_40;
    if (local_40 != 0) {
      LOCK();
      plVar9 = (long *)(local_40 + -0x10);
      *plVar9 = *plVar9 + -1;
      UNLOCK();
      if (*plVar9 == 0) {
        local_40 = 0;
        Memory::free_static((void *)(lVar3 + -0x10),false);
      }
    }
  }
  else {
    uVar6 = 3;
LAB_00107c65:
    *in_R9 = uVar6;
    in_R9[2] = 1;
  }
LAB_00107c70:
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Ref<ImporterMesh> >::call(Object*, Variant const**, int, Callable::CallError&) const
    */

Object * MethodBindT<Ref<ImporterMesh>>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  Variant *pVVar2;
  long lVar3;
  undefined8 uVar4;
  Object *pOVar5;
  char cVar6;
  undefined4 uVar7;
  Object *pOVar8;
  long *plVar9;
  long lVar10;
  undefined4 in_register_00000014;
  long *plVar11;
  uint in_R8D;
  undefined4 *in_R9;
  undefined4 *puVar12;
  code *pcVar13;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  Object *local_48;
  undefined8 local_40;
  long local_30;
  
  plVar11 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((plVar11 != (long *)0x0) && (plVar11[1] != 0)) && (*(char *)(plVar11[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_2 + 3));
    if (plVar11[1] == 0) {
      plVar9 = (long *)plVar11[0x23];
      if (plVar9 == (long *)0x0) {
        plVar9 = (long *)(**(code **)(*plVar11 + 0x40))(plVar11);
      }
    }
    else {
      plVar9 = (long *)(plVar11[1] + 0x20);
    }
    if (local_48 == (Object *)*plVar9) {
      if ((StringName::configured != '\0') && (local_48 != (Object *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = (Object *)0x103ca8;
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error(&_LC34,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00108040;
    }
    if ((StringName::configured != '\0') && (local_48 != (Object *)0x0)) {
      StringName::unref();
    }
  }
  pcVar13 = (code *)param_2[0xb];
  pVVar1 = param_2[0xc];
  if (1 < in_R8D) {
    uVar7 = 3;
LAB_00108035:
    *in_R9 = uVar7;
    in_R9[2] = 1;
    goto LAB_00108040;
  }
  pVVar2 = param_2[5];
  if (pVVar2 == (Variant *)0x0) {
    if (in_R8D != 1) goto LAB_00108090;
LAB_00108080:
    puVar12 = *(undefined4 **)param_4;
  }
  else {
    lVar3 = *(long *)(pVVar2 + -8);
    if ((int)lVar3 < (int)(in_R8D ^ 1)) {
LAB_00108090:
      uVar7 = 4;
      goto LAB_00108035;
    }
    if (in_R8D == 1) goto LAB_00108080;
    lVar10 = (long)((int)lVar3 + -1);
    if (lVar3 <= lVar10) {
      _err_print_index_error
                ("get","./core/templates/cowdata.h",0xdb,lVar10,lVar3,"p_index","size()","",false,
                 true);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar13 = (code *)invalidInstructionException();
      (*pcVar13)();
    }
    puVar12 = (undefined4 *)(pVVar2 + lVar10 * 0x18);
  }
  *in_R9 = 0;
  if (((ulong)pcVar13 & 1) != 0) {
    pcVar13 = *(code **)(pcVar13 + *(long *)((long)plVar11 + (long)pVVar1) + -1);
  }
  cVar6 = Variant::can_convert_strict(*puVar12);
  uVar4 = _LC44;
  if (cVar6 == '\0') {
    *in_R9 = 2;
    *(undefined8 *)(in_R9 + 1) = uVar4;
  }
  local_48 = (Object *)0x0;
  pOVar8 = (Object *)Variant::get_validated_object();
  pOVar5 = local_48;
  if (pOVar8 != local_48) {
    if (pOVar8 == (Object *)0x0) {
      if (local_48 != (Object *)0x0) {
        local_48 = (Object *)0x0;
LAB_001081ad:
        cVar6 = RefCounted::unreference();
        if (cVar6 != '\0') {
          cVar6 = predelete_handler(pOVar5);
          if (cVar6 != '\0') {
            (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
            Memory::free_static(pOVar5,false);
          }
        }
      }
    }
    else {
      pOVar8 = (Object *)__dynamic_cast(pOVar8,&Object::typeinfo,&ImporterMesh::typeinfo,0);
      if (pOVar5 != pOVar8) {
        local_48 = pOVar8;
        if (pOVar8 != (Object *)0x0) {
          cVar6 = RefCounted::reference();
          if (cVar6 == '\0') {
            local_48 = (Object *)0x0;
          }
        }
        if (pOVar5 != (Object *)0x0) goto LAB_001081ad;
      }
    }
  }
  (*pcVar13)((long *)((long)plVar11 + (long)pVVar1));
  if (local_48 != (Object *)0x0) {
    cVar6 = RefCounted::unreference();
    pOVar5 = local_48;
    if (cVar6 != '\0') {
      cVar6 = predelete_handler(local_48);
      if (cVar6 != '\0') {
        (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
        Memory::free_static(pOVar5,false);
      }
    }
  }
LAB_00108040:
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<String>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindT<String>::call(Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  Variant *pVVar2;
  long lVar3;
  undefined8 uVar4;
  char cVar5;
  undefined4 uVar6;
  long *plVar7;
  long lVar8;
  undefined4 in_register_00000014;
  long *plVar9;
  uint in_R8D;
  undefined4 *in_R9;
  undefined4 *puVar10;
  code *pcVar11;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  plVar9 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((plVar9 != (long *)0x0) && (plVar9[1] != 0)) && (*(char *)(plVar9[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_2 + 3));
    if (plVar9[1] == 0) {
      plVar7 = (long *)plVar9[0x23];
      if (plVar7 == (long *)0x0) {
        plVar7 = (long *)(**(code **)(*plVar9 + 0x40))(plVar9);
      }
    }
    else {
      plVar7 = (long *)(plVar9[1] + 0x20);
    }
    if (local_48 == (char *)*plVar7) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error(&_LC34,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_001083f0;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar11 = (code *)param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D < 2) {
    pVVar2 = param_2[5];
    if (pVVar2 == (Variant *)0x0) {
      if (in_R8D != 1) goto LAB_00108440;
LAB_00108430:
      puVar10 = *(undefined4 **)param_4;
    }
    else {
      lVar3 = *(long *)(pVVar2 + -8);
      if ((int)lVar3 < (int)(in_R8D ^ 1)) {
LAB_00108440:
        uVar6 = 4;
        goto LAB_001083e5;
      }
      if (in_R8D == 1) goto LAB_00108430;
      lVar8 = (long)((int)lVar3 + -1);
      if (lVar3 <= lVar8) {
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar8,lVar3,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar11 = (code *)invalidInstructionException();
        (*pcVar11)();
      }
      puVar10 = (undefined4 *)(pVVar2 + lVar8 * 0x18);
    }
    *in_R9 = 0;
    if (((ulong)pcVar11 & 1) != 0) {
      pcVar11 = *(code **)(pcVar11 + *(long *)((long)plVar9 + (long)pVVar1) + -1);
    }
    cVar5 = Variant::can_convert_strict(*puVar10,4);
    uVar4 = _LC45;
    if (cVar5 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    Variant::operator_cast_to_String((Variant *)&local_48);
    (*pcVar11)((long *)((long)plVar9 + (long)pVVar1),(Variant *)&local_48);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
  }
  else {
    uVar6 = 3;
LAB_001083e5:
    *in_R9 = uVar6;
    in_R9[2] = 1;
  }
LAB_001083f0:
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<TypedArray<Material> >::call(Object*, Variant const**, int, Callable::CallError&)
   const */

Object * MethodBindT<TypedArray<Material>>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  Variant *pVVar2;
  long lVar3;
  undefined8 uVar4;
  char cVar5;
  undefined4 uVar6;
  long *plVar7;
  long lVar8;
  undefined4 in_register_00000014;
  long *plVar9;
  uint in_R8D;
  undefined4 *in_R9;
  undefined4 *puVar10;
  code *pcVar11;
  long in_FS_OFFSET;
  Array local_80 [8];
  long local_78;
  undefined8 local_70;
  char *local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined1 local_50 [16];
  long local_40;
  
  plVar9 = (long *)CONCAT44(in_register_00000014,param_3);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (((plVar9 != (long *)0x0) && (plVar9[1] != 0)) && (*(char *)(plVar9[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_68,(StringName *)(param_2 + 3));
    if (plVar9[1] == 0) {
      plVar7 = (long *)plVar9[0x23];
      if (plVar7 == (long *)0x0) {
        plVar7 = (long *)(**(code **)(*plVar9 + 0x40))(plVar9);
      }
    }
    else {
      plVar7 = (long *)(plVar9[1] + 0x20);
    }
    if (local_68 == (char *)*plVar7) {
      if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_68 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_70 = 0;
      local_60 = 0x35;
      String::parse_latin1((StrRange *)&local_70);
      vformat<StringName>((StringName *)&local_68,(StrRange *)&local_70,&local_78);
      _err_print_error(&_LC34,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_68,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      if ((StringName::configured != '\0') && (local_78 != 0)) {
        StringName::unref();
      }
      goto LAB_001087f0;
    }
    if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar11 = (code *)param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D < 2) {
    pVVar2 = param_2[5];
    if (pVVar2 == (Variant *)0x0) {
      if (in_R8D != 1) goto LAB_00108840;
LAB_00108830:
      puVar10 = *(undefined4 **)param_4;
    }
    else {
      lVar3 = *(long *)(pVVar2 + -8);
      if ((int)lVar3 < (int)(in_R8D ^ 1)) {
LAB_00108840:
        uVar6 = 4;
        goto LAB_001087e5;
      }
      if (in_R8D == 1) goto LAB_00108830;
      lVar8 = (long)((int)lVar3 + -1);
      if (lVar3 <= lVar8) {
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar8,lVar3,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar11 = (code *)invalidInstructionException();
        (*pcVar11)();
      }
      puVar10 = (undefined4 *)(pVVar2 + lVar8 * 0x18);
    }
    *in_R9 = 0;
    if (((ulong)pcVar11 & 1) != 0) {
      pcVar11 = *(code **)(pcVar11 + *(long *)((long)plVar9 + (long)pVVar1) + -1);
    }
    cVar5 = Variant::can_convert_strict(*puVar10,0x1c);
    uVar4 = _LC46;
    if (cVar5 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    Variant::operator_cast_to_Array((Variant *)&local_70);
    Array::Array(local_80);
    local_68 = "Material";
    local_50 = (undefined1  [16])0x0;
    local_58 = 0;
    local_78 = 0;
    local_60 = 8;
    String::parse_latin1((StrRange *)&local_78);
    StringName::StringName((StringName *)&local_68,(StrRange *)&local_78,false);
    Array::set_typed((uint)local_80,(StringName *)0x18,(Variant *)&local_68);
    if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
    if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
    }
    cVar5 = Array::is_same_typed(local_80);
    if (cVar5 == '\0') {
      Array::assign(local_80);
    }
    else {
      Array::_ref(local_80);
    }
    Array::~Array((Array *)&local_70);
    (*pcVar11)((long *)((long)plVar9 + (long)pVVar1),local_80);
    Array::~Array(local_80);
  }
  else {
    uVar6 = 3;
LAB_001087e5:
    *in_R9 = uVar6;
    in_R9[2] = 1;
  }
LAB_001087f0:
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Ref<ImporterMesh>>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTR<Ref<ImporterMesh>>::validated_call
          (MethodBindTR<Ref<ImporterMesh>> *this,Object *param_1,Variant **param_2,Variant *param_3)

{
  Object *pOVar1;
  char cVar2;
  code *pcVar3;
  long *plVar4;
  Variant **extraout_RDX;
  long in_FS_OFFSET;
  long local_58;
  Object *local_50;
  Variant **local_48;
  Object *local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar4 = *(long **)(param_1 + 0x118);
      if (plVar4 == (long *)0x0) {
        plVar4 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar4 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (Variant **)*plVar4) {
      if ((StringName::configured != '\0') && (local_48 != (Variant **)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = (Variant **)0x103ca8;
      local_50 = (Object *)0x0;
      local_40 = (Object *)0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x213,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00108ad6;
    }
    param_2 = local_48;
    if ((StringName::configured != '\0') && (local_48 != (Variant **)0x0)) {
      StringName::unref();
      param_2 = extraout_RDX;
    }
  }
  pcVar3 = *(code **)(this + 0x58);
  if (((ulong)pcVar3 & 1) != 0) {
    param_2 = *(Variant ***)(param_1 + *(long *)(this + 0x60));
    pcVar3 = *(code **)(pcVar3 + (long)param_2 + -1);
  }
  (*pcVar3)(&local_50,param_1 + *(long *)(this + 0x60),param_2);
  if (local_50 == (Object *)0x0) {
    Variant::ObjData::unref();
  }
  else {
    local_48 = *(Variant ***)(local_50 + 0x60);
    local_40 = local_50;
    Variant::ObjData::ref((ObjData *)(param_3 + 8));
  }
  if (local_50 != (Object *)0x0) {
    cVar2 = RefCounted::unreference();
    pOVar1 = local_50;
    if (cVar2 != '\0') {
      cVar2 = predelete_handler(local_50);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
LAB_00108ad6:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_get_argument_type_info_helper<StringName const&>(int, int&, PropertyInfo&) */

void call_get_argument_type_info_helper<StringName_const&>
               (int param_1,int *param_2,PropertyInfo *param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined8 uVar3;
  long lVar4;
  int iVar5;
  long in_FS_OFFSET;
  undefined8 local_88;
  long local_80;
  long local_78;
  long local_70;
  undefined *local_68;
  undefined1 local_60 [16];
  int local_50;
  long local_48;
  undefined4 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  iVar5 = *param_2;
  if (iVar5 != param_1) goto LAB_00108cb7;
  local_78 = 0;
  local_68 = &_LC0;
  local_80 = 0;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = local_60._8_8_;
  local_60 = auVar1 << 0x40;
  String::parse_latin1((StrRange *)&local_80);
  local_88 = 0;
  local_68 = (undefined *)CONCAT44(local_68._4_4_,0x15);
  local_50 = 0;
  local_48 = 0;
  local_60 = (undefined1  [16])0x0;
  if (local_80 == 0) {
LAB_00108db5:
    local_40 = 6;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_78);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_80);
    local_40 = 6;
    if (local_50 != 0x11) goto LAB_00108db5;
    StringName::StringName((StringName *)&local_70,(CowData<char32_t> *)&local_48,false);
    if (local_60._8_8_ == local_70) {
      if ((StringName::configured != '\0') && (local_70 != 0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_60._8_8_ = local_70;
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  if ((StringName::configured != '\0') && (local_78 != 0)) {
    StringName::unref();
  }
  *(undefined4 *)param_3 = local_68._0_4_;
  if (*(long *)(param_3 + 8) != local_60._0_8_) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(param_3 + 8));
    uVar3 = local_60._0_8_;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = local_60._8_8_;
    local_60 = auVar2 << 0x40;
    *(undefined8 *)(param_3 + 8) = uVar3;
  }
  if (*(long *)(param_3 + 0x10) != local_60._8_8_) {
    StringName::unref();
    uVar3 = local_60._8_8_;
    local_60._8_8_ = 0;
    *(undefined8 *)(param_3 + 0x10) = uVar3;
  }
  *(int *)(param_3 + 0x18) = local_50;
  if (*(long *)(param_3 + 0x20) != local_48) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(param_3 + 0x20));
    lVar4 = local_48;
    local_48 = 0;
    *(long *)(param_3 + 0x20) = lVar4;
  }
  *(undefined4 *)(param_3 + 0x28) = local_40;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
  if ((StringName::configured != '\0') && (local_60._8_8_ != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_60);
  iVar5 = *param_2;
LAB_00108cb7:
  *param_2 = iVar5 + 1;
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* MethodBindTR<Variant, StringName const&>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTR<Variant,StringName_const&>::_gen_argument_type_info(int param_1)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  undefined8 uVar3;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar4;
  long in_FS_OFFSET;
  undefined8 local_68;
  ulong local_60;
  long local_58;
  undefined1 local_50 [16];
  undefined8 local_40;
  undefined8 local_38;
  undefined4 local_30;
  long local_20;
  
  puVar4 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_58 = 0;
  if (in_EDX == 0) {
    local_40 = 0;
    local_38 = 0;
    local_30 = 6;
    local_60 = local_60 & 0xffffffff00000000;
    local_50 = (undefined1  [16])0x0;
    call_get_argument_type_info_helper<StringName_const&>
              (0,(int *)&local_60,(PropertyInfo *)&local_58);
    uVar2 = local_50._0_8_;
    uVar3 = local_50._8_8_;
    auVar1._8_8_ = 0;
    auVar1._0_8_ = local_50._8_8_;
    local_50 = auVar1 << 0x40;
    *puVar4 = (undefined4)local_58;
    *(undefined8 *)(puVar4 + 2) = uVar2;
    *(undefined8 *)(puVar4 + 4) = uVar3;
    puVar4[6] = (undefined4)local_40;
    *(undefined8 *)(puVar4 + 8) = local_38;
    puVar4[10] = local_30;
    CowData<char32_t>::_unref((CowData<char32_t> *)local_50);
  }
  else {
    *puVar4 = 0;
    puVar4[6] = 0;
    *(undefined8 *)(puVar4 + 8) = 0;
    puVar4[10] = 0x20006;
    *(undefined1 (*) [16])(puVar4 + 2) = (undefined1  [16])0x0;
    local_60 = 0;
    local_68 = 0;
    StringName::operator=((StringName *)(puVar4 + 4),(StringName *)&local_58);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    if ((StringName::configured != '\0') && (local_58 != 0)) {
      StringName::unref();
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<StringName const&, Variant>::_gen_argument_type_info(int) const */

PropertyInfo * MethodBindT<StringName_const&,Variant>::_gen_argument_type_info(int param_1)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  long lVar3;
  int in_EDX;
  undefined4 in_register_0000003c;
  PropertyInfo *pPVar4;
  long in_FS_OFFSET;
  int local_74;
  undefined8 local_70;
  undefined8 local_68;
  long local_60;
  undefined8 local_58;
  undefined1 local_50 [16];
  undefined8 local_40;
  long local_38;
  undefined4 local_30;
  long local_20;
  
  pPVar4 = (PropertyInfo *)CONCAT44(in_register_0000003c,param_1);
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)pPVar4 = 0;
  *(undefined4 *)(pPVar4 + 0x18) = 0;
  *(undefined8 *)(pPVar4 + 0x20) = 0;
  *(undefined4 *)(pPVar4 + 0x28) = 6;
  *(undefined1 (*) [16])(pPVar4 + 8) = (undefined1  [16])0x0;
  local_74 = 0;
  call_get_argument_type_info_helper<StringName_const&>(in_EDX,&local_74,pPVar4);
  if (in_EDX == local_74) {
    local_60 = 0;
    local_50 = (undefined1  [16])0x0;
    local_68 = 0;
    local_70 = 0;
    local_58 = 0;
    local_40 = 0;
    local_38 = 0;
    local_30 = 0x20006;
    StringName::operator=((StringName *)(local_50 + 8),(StringName *)&local_60);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    if ((StringName::configured != '\0') && (local_60 != 0)) {
      StringName::unref();
    }
    *(undefined4 *)pPVar4 = (undefined4)local_58;
    if (*(long *)(pPVar4 + 8) != local_50._0_8_) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(pPVar4 + 8));
      uVar2 = local_50._0_8_;
      auVar1._8_8_ = 0;
      auVar1._0_8_ = local_50._8_8_;
      local_50 = auVar1 << 0x40;
      *(undefined8 *)(pPVar4 + 8) = uVar2;
    }
    if (*(long *)(pPVar4 + 0x10) != local_50._8_8_) {
      StringName::unref();
      uVar2 = local_50._8_8_;
      local_50._8_8_ = 0;
      *(undefined8 *)(pPVar4 + 0x10) = uVar2;
    }
    *(undefined4 *)(pPVar4 + 0x18) = (undefined4)local_40;
    if (*(long *)(pPVar4 + 0x20) != local_38) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(pPVar4 + 0x20));
      lVar3 = local_38;
      local_38 = 0;
      *(long *)(pPVar4 + 0x20) = lVar3;
    }
    *(undefined4 *)(pPVar4 + 0x28) = local_30;
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_38);
    if ((StringName::configured != '\0') && (local_50._8_8_ != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)local_50);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pPVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<String>::~MethodBindT() */

void __thiscall MethodBindT<String>::~MethodBindT(MethodBindT<String> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTR<String>::~MethodBindTR() */

void __thiscall MethodBindTR<String>::~MethodBindTR(MethodBindTR<String> *this)

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
/* MethodBindT<StringName const&, Variant>::~MethodBindT() */

void __thiscall
MethodBindT<StringName_const&,Variant>::~MethodBindT(MethodBindT<StringName_const&,Variant> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTR<Variant, StringName const&>::~MethodBindTR() */

void __thiscall
MethodBindTR<Variant,StringName_const&>::~MethodBindTR
          (MethodBindTR<Variant,StringName_const&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<TypedArray<Material> >::~MethodBindT() */

void __thiscall
MethodBindT<TypedArray<Material>>::~MethodBindT(MethodBindT<TypedArray<Material>> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTR<TypedArray<Material>>::~MethodBindTR() */

void __thiscall
MethodBindTR<TypedArray<Material>>::~MethodBindTR(MethodBindTR<TypedArray<Material>> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<Vector<float> >::~MethodBindT() */

void __thiscall MethodBindT<Vector<float>>::~MethodBindT(MethodBindT<Vector<float>> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTR<Vector<float>>::~MethodBindTR() */

void __thiscall MethodBindTR<Vector<float>>::~MethodBindTR(MethodBindTR<Vector<float>> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<Ref<ImporterMesh> >::~MethodBindT() */

void __thiscall MethodBindT<Ref<ImporterMesh>>::~MethodBindT(MethodBindT<Ref<ImporterMesh>> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTR<Ref<ImporterMesh>>::~MethodBindTR() */

void __thiscall
MethodBindTR<Ref<ImporterMesh>>::~MethodBindTR(MethodBindTR<Ref<ImporterMesh>> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



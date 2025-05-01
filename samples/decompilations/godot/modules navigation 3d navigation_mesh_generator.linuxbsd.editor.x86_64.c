
/* NavigationMeshGenerator::~NavigationMeshGenerator() */

void __thiscall NavigationMeshGenerator::~NavigationMeshGenerator(NavigationMeshGenerator *this)

{
  *(undefined ***)this = &PTR__initialize_classv_00106448;
  Object::~Object((Object *)this);
  return;
}



/* NavigationMeshGenerator::~NavigationMeshGenerator() */

void __thiscall NavigationMeshGenerator::~NavigationMeshGenerator(NavigationMeshGenerator *this)

{
  *(undefined ***)this = &PTR__initialize_classv_00106448;
  Object::~Object((Object *)this);
  operator_delete(this,0x178);
  return;
}



/* NavigationMeshGenerator::parse_source_geometry_data(Ref<NavigationMesh> const&,
   Ref<NavigationMeshSourceGeometryData3D>, Node*, Callable const&) */

void __thiscall
NavigationMeshGenerator::parse_source_geometry_data
          (undefined8 param_1_00,undefined8 param_1,undefined8 param_3,undefined8 param_4,
          undefined8 param_5)

{
  long *plVar1;
  
  plVar1 = (long *)NavigationServer3D::get_singleton();
                    /* WARNING: Could not recover jumptable at 0x00100092. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x5d0))(plVar1,param_1,param_3,param_4,param_5);
  return;
}



/* NavigationMeshGenerator::bake_from_source_geometry_data(Ref<NavigationMesh>,
   Ref<NavigationMeshSourceGeometryData3D> const&, Callable const&) */

void __thiscall
NavigationMeshGenerator::bake_from_source_geometry_data
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  
  plVar1 = (long *)NavigationServer3D::get_singleton();
                    /* WARNING: Could not recover jumptable at 0x001000d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x5d8))(plVar1,param_2,param_3,param_4);
  return;
}



/* NavigationMeshGenerator::bake(Ref<NavigationMesh> const&, Node*) */

void NavigationMeshGenerator::bake(Ref *param_1,Node *param_2)

{
  if (bake(Ref<NavigationMesh>const&,Node*)::first_print == '\0') {
    return;
  }
  _err_print_error(&_LC2,"modules/navigation/3d/navigation_mesh_generator.cpp",0x34,
                   "NavigationMeshGenerator::bake() is deprecated due to core threading changes. To upgrade existing code, first create a NavigationMeshSourceGeometryData3D resource. Use this resource with method parse_source_geometry_data() to parse the SceneTree for nodes that should contribute to the navigation mesh baking. The SceneTree parsing needs to happen on the main thread. After the parsing is finished use the resource with method bake_from_source_geometry_data() to bake a navigation mesh.."
                   ,0,1);
  bake(Ref<NavigationMesh>const&,Node*)::first_print = 0;
  return;
}



/* WARNING: Removing unreachable block (ram,0x00100177) */
/* WARNING: Removing unreachable block (ram,0x001001a0) */
/* NavigationMeshGenerator::clear(Ref<NavigationMesh>) */

void __thiscall NavigationMeshGenerator::clear(undefined8 param_1,long *param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (*param_2 != 0) {
    NavigationMesh::clear_polygons();
    NavigationMesh::set_vertices((Vector *)*param_2);
  }
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
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



/* NavigationMeshGenerator::get_singleton() */

undefined8 NavigationMeshGenerator::get_singleton(void)

{
  return singleton;
}



/* NavigationMeshGenerator::NavigationMeshGenerator() */

void __thiscall NavigationMeshGenerator::NavigationMeshGenerator(NavigationMeshGenerator *this)

{
  Object::Object((Object *)this);
  singleton = this;
  *(undefined ***)this = &PTR__initialize_classv_00106448;
  return;
}



/* NavigationMeshGenerator::_bind_methods() */

void NavigationMeshGenerator::_bind_methods(void)

{
  char cVar1;
  long lVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  long *plVar6;
  MethodBind *pMVar7;
  uint uVar8;
  long *plVar9;
  long lVar10;
  long in_FS_OFFSET;
  undefined8 local_118;
  undefined8 local_110;
  long local_108 [2];
  long *local_f8;
  char *local_e8;
  char *pcStack_e0;
  undefined8 local_d8;
  undefined *local_c8;
  char *pcStack_c0;
  char *local_b8;
  undefined8 local_b0;
  Variant *local_a8;
  char *pcStack_a0;
  char *local_98;
  undefined *puStack_90;
  undefined8 local_88;
  Variant **local_78;
  undefined1 auStack_70 [16];
  undefined **ppuStack_60;
  undefined1 local_58 [16];
  long local_40;
  
  puVar5 = PTR__LC9_00106770;
  puVar4 = PTR__LC6_00106768;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_d8 = 0;
  local_e8 = PTR__LC6_00106768;
  pcStack_e0 = "root_node";
  auStack_70._8_8_ = auStack_70._0_8_;
  auStack_70._0_8_ = &pcStack_e0;
  uVar8 = (uint)(Variant *)&local_78;
  local_78 = (Variant **)&local_e8;
  D_METHODP((char *)local_108,(char ***)&_LC2,uVar8);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar7 = create_method_bind<NavigationMeshGenerator,Ref<NavigationMesh>const&,Node*>(bake);
  ClassDB::bind_methodfi(1,pMVar7,false,(MethodDefinition *)local_108,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  plVar6 = local_f8;
  if (local_f8 != (long *)0x0) {
    LOCK();
    plVar9 = local_f8 + -2;
    *plVar9 = *plVar9 + -1;
    UNLOCK();
    if (*plVar9 == 0) {
      if (local_f8 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      lVar2 = local_f8[-1];
      local_f8 = (long *)0x0;
      if (lVar2 != 0) {
        lVar10 = 0;
        plVar9 = plVar6;
        do {
          if ((StringName::configured != '\0') && (*plVar9 != 0)) {
            StringName::unref();
          }
          lVar10 = lVar10 + 1;
          plVar9 = plVar9 + 1;
        } while (lVar2 != lVar10);
      }
      Memory::free_static(plVar6 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_108[0] != 0)) {
    StringName::unref();
  }
  local_e8 = "navigation_mesh";
  pcStack_e0 = (char *)0x0;
  local_78 = (Variant **)&local_e8;
  D_METHODP((char *)local_108,(char ***)"clear",uVar8);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar7 = create_method_bind<NavigationMeshGenerator,Ref<NavigationMesh>>(clear);
  ClassDB::bind_methodfi(1,pMVar7,false,(MethodDefinition *)local_108,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  plVar6 = local_f8;
  if (local_f8 != (long *)0x0) {
    LOCK();
    plVar9 = local_f8 + -2;
    *plVar9 = *plVar9 + -1;
    UNLOCK();
    if (*plVar9 == 0) {
      if (local_f8 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      lVar2 = local_f8[-1];
      local_f8 = (long *)0x0;
      if (lVar2 != 0) {
        lVar10 = 0;
        plVar9 = plVar6;
        do {
          if ((StringName::configured != '\0') && (*plVar9 != 0)) {
            StringName::unref();
          }
          lVar10 = lVar10 + 1;
          plVar9 = plVar9 + 1;
        } while (lVar2 != lVar10);
      }
      Memory::free_static(plVar6 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_108[0] != 0)) {
    StringName::unref();
  }
  local_a8 = (Variant *)puVar4;
  pcStack_a0 = "source_geometry_data";
  local_98 = "root_node";
  puStack_90 = puVar5;
  auStack_70._8_8_ = &local_98;
  auStack_70._0_8_ = &pcStack_a0;
  local_118 = 0;
  local_110 = 0;
  local_88 = 0;
  local_78 = &local_a8;
  ppuStack_60 = &puStack_90;
  D_METHODP((char *)local_108,(char ***)"parse_source_geometry_data",uVar8);
  Variant::Variant((Variant *)&local_78,(Callable *)&local_118);
  local_58 = (undefined1  [16])0x0;
  ppuStack_60 = (undefined **)0x0;
  local_a8 = (Variant *)&local_78;
  pMVar7 = create_method_bind<NavigationMeshGenerator,Ref<NavigationMesh>const&,Ref<NavigationMeshSourceGeometryData3D>,Node*,Callable_const&>
                     (parse_source_geometry_data);
  ClassDB::bind_methodfi(1,pMVar7,false,(MethodDefinition *)local_108,&local_a8,1);
  if (Variant::needs_deinit[(int)ppuStack_60] == '\0') {
    cVar1 = Variant::needs_deinit[(int)local_78];
  }
  else {
    Variant::_clear_internal();
    cVar1 = Variant::needs_deinit[(int)local_78];
  }
  if (cVar1 != '\0') {
    Variant::_clear_internal();
  }
  plVar6 = local_f8;
  if (local_f8 != (long *)0x0) {
    LOCK();
    plVar9 = local_f8 + -2;
    *plVar9 = *plVar9 + -1;
    UNLOCK();
    if (*plVar9 == 0) {
      if (local_f8 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      lVar2 = local_f8[-1];
      local_f8 = (long *)0x0;
      if (lVar2 != 0) {
        lVar10 = 0;
        plVar9 = plVar6;
        do {
          if ((StringName::configured != '\0') && (*plVar9 != 0)) {
            StringName::unref();
          }
          lVar10 = lVar10 + 1;
          plVar9 = plVar9 + 1;
        } while (lVar2 != lVar10);
      }
      Memory::free_static(plVar6 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_108[0] != 0)) {
    StringName::unref();
  }
  Callable::~Callable((Callable *)&local_118);
  local_b8 = "callback";
  local_c8 = puVar4;
  pcStack_c0 = "source_geometry_data";
  auStack_70._8_8_ = &local_b8;
  auStack_70._0_8_ = &pcStack_c0;
  local_118 = 0;
  local_110 = 0;
  local_b0 = 0;
  local_78 = (Variant **)&local_c8;
  D_METHODP((char *)local_108,(char ***)"bake_from_source_geometry_data",uVar8);
  Variant::Variant((Variant *)&local_78,(Callable *)&local_118);
  local_58 = (undefined1  [16])0x0;
  ppuStack_60 = (undefined **)0x0;
  local_a8 = (Variant *)&local_78;
  pMVar7 = create_method_bind<NavigationMeshGenerator,Ref<NavigationMesh>,Ref<NavigationMeshSourceGeometryData3D>const&,Callable_const&>
                     (bake_from_source_geometry_data);
  ClassDB::bind_methodfi(1,pMVar7,false,(MethodDefinition *)local_108,&local_a8,1);
  if (Variant::needs_deinit[(int)ppuStack_60] != '\0') {
    Variant::_clear_internal();
  }
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  plVar6 = local_f8;
  if (local_f8 != (long *)0x0) {
    LOCK();
    plVar9 = local_f8 + -2;
    *plVar9 = *plVar9 + -1;
    UNLOCK();
    if (*plVar9 == 0) {
      if (local_f8 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      lVar2 = local_f8[-1];
      local_f8 = (long *)0x0;
      if (lVar2 != 0) {
        lVar10 = 0;
        plVar9 = plVar6;
        do {
          if ((StringName::configured != '\0') && (*plVar9 != 0)) {
            StringName::unref();
          }
          lVar10 = lVar10 + 1;
          plVar9 = plVar9 + 1;
        } while (lVar2 != lVar10);
      }
      Memory::free_static(plVar6 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_108[0] != 0)) {
    StringName::unref();
  }
  Callable::~Callable((Callable *)&local_118);
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



/* NavigationMeshGenerator::is_class_ptr(void*) const */

uint __thiscall NavigationMeshGenerator::is_class_ptr(NavigationMeshGenerator *this,void *param_1)

{
  return (uint)CONCAT71(0x1067,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1067,(undefined4 *)param_1 == &get_class_ptr_static()::ptr);
}



/* NavigationMeshGenerator::_getv(StringName const&, Variant&) const */

undefined8 NavigationMeshGenerator::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* NavigationMeshGenerator::_setv(StringName const&, Variant const&) */

undefined8 NavigationMeshGenerator::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* NavigationMeshGenerator::_validate_propertyv(PropertyInfo&) const */

void NavigationMeshGenerator::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* NavigationMeshGenerator::_property_can_revertv(StringName const&) const */

undefined8 NavigationMeshGenerator::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* NavigationMeshGenerator::_property_get_revertv(StringName const&, Variant&) const */

undefined8 NavigationMeshGenerator::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* NavigationMeshGenerator::_notificationv(int, bool) */

void NavigationMeshGenerator::_notificationv(int param_1,bool param_2)

{
  return;
}



/* MethodBindT<Ref<NavigationMesh>, Ref<NavigationMeshSourceGeometryData3D> const&, Callable
   const&>::get_argument_meta(int) const */

undefined8
MethodBindT<Ref<NavigationMesh>,Ref<NavigationMeshSourceGeometryData3D>const&,Callable_const&>::
get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindT<Ref<NavigationMesh> const&, Ref<NavigationMeshSourceGeometryData3D>, Node*, Callable
   const&>::get_argument_meta(int) const */

undefined8
MethodBindT<Ref<NavigationMesh>const&,Ref<NavigationMeshSourceGeometryData3D>,Node*,Callable_const&>
::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindT<Ref<NavigationMesh> >::_gen_argument_type(int) const */

byte __thiscall
MethodBindT<Ref<NavigationMesh>>::_gen_argument_type
          (MethodBindT<Ref<NavigationMesh>> *this,int param_1)

{
  return -(param_1 == 0) & 0x18;
}



/* MethodBindT<Ref<NavigationMesh> >::get_argument_meta(int) const */

undefined8 MethodBindT<Ref<NavigationMesh>>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindT<Ref<NavigationMesh> const&, Node*>::_gen_argument_type(int) const */

byte __thiscall
MethodBindT<Ref<NavigationMesh>const&,Node*>::_gen_argument_type
          (MethodBindT<Ref<NavigationMesh>const&,Node*> *this,int param_1)

{
  return -((uint)param_1 < 2) & 0x18;
}



/* MethodBindT<Ref<NavigationMesh> const&, Node*>::get_argument_meta(int) const */

undefined8 MethodBindT<Ref<NavigationMesh>const&,Node*>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindT<Ref<NavigationMesh> const&, Node*>::~MethodBindT() */

void __thiscall
MethodBindT<Ref<NavigationMesh>const&,Node*>::~MethodBindT
          (MethodBindT<Ref<NavigationMesh>const&,Node*> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001065a8;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<Ref<NavigationMesh> const&, Node*>::~MethodBindT() */

void __thiscall
MethodBindT<Ref<NavigationMesh>const&,Node*>::~MethodBindT
          (MethodBindT<Ref<NavigationMesh>const&,Node*> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001065a8;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<Ref<NavigationMesh> >::~MethodBindT() */

void __thiscall
MethodBindT<Ref<NavigationMesh>>::~MethodBindT(MethodBindT<Ref<NavigationMesh>> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00106608;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<Ref<NavigationMesh> >::~MethodBindT() */

void __thiscall
MethodBindT<Ref<NavigationMesh>>::~MethodBindT(MethodBindT<Ref<NavigationMesh>> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00106608;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<Ref<NavigationMesh> const&, Ref<NavigationMeshSourceGeometryData3D>, Node*, Callable
   const&>::~MethodBindT() */

void __thiscall
MethodBindT<Ref<NavigationMesh>const&,Ref<NavigationMeshSourceGeometryData3D>,Node*,Callable_const&>
::~MethodBindT(MethodBindT<Ref<NavigationMesh>const&,Ref<NavigationMeshSourceGeometryData3D>,Node*,Callable_const&>
               *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00106668;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<Ref<NavigationMesh> const&, Ref<NavigationMeshSourceGeometryData3D>, Node*, Callable
   const&>::~MethodBindT() */

void __thiscall
MethodBindT<Ref<NavigationMesh>const&,Ref<NavigationMeshSourceGeometryData3D>,Node*,Callable_const&>
::~MethodBindT(MethodBindT<Ref<NavigationMesh>const&,Ref<NavigationMeshSourceGeometryData3D>,Node*,Callable_const&>
               *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00106668;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<Ref<NavigationMesh>, Ref<NavigationMeshSourceGeometryData3D> const&, Callable
   const&>::~MethodBindT() */

void __thiscall
MethodBindT<Ref<NavigationMesh>,Ref<NavigationMeshSourceGeometryData3D>const&,Callable_const&>::
~MethodBindT(MethodBindT<Ref<NavigationMesh>,Ref<NavigationMeshSourceGeometryData3D>const&,Callable_const&>
             *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001066c8;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<Ref<NavigationMesh>, Ref<NavigationMeshSourceGeometryData3D> const&, Callable
   const&>::~MethodBindT() */

void __thiscall
MethodBindT<Ref<NavigationMesh>,Ref<NavigationMeshSourceGeometryData3D>const&,Callable_const&>::
~MethodBindT(MethodBindT<Ref<NavigationMesh>,Ref<NavigationMeshSourceGeometryData3D>const&,Callable_const&>
             *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001066c8;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<Ref<NavigationMesh>, Ref<NavigationMeshSourceGeometryData3D> const&, Callable
   const&>::_gen_argument_type(int) const */

char __thiscall
MethodBindT<Ref<NavigationMesh>,Ref<NavigationMeshSourceGeometryData3D>const&,Callable_const&>::
_gen_argument_type(MethodBindT<Ref<NavigationMesh>,Ref<NavigationMeshSourceGeometryData3D>const&,Callable_const&>
                   *this,int param_1)

{
  char cVar1;
  
  cVar1 = '\0';
  if ((uint)param_1 < 3) {
    cVar1 = (param_1 == 2) + '\x18';
  }
  return cVar1;
}



/* MethodBindT<Ref<NavigationMesh> const&, Ref<NavigationMeshSourceGeometryData3D>, Node*, Callable
   const&>::_gen_argument_type(int) const */

int __thiscall
MethodBindT<Ref<NavigationMesh>const&,Ref<NavigationMeshSourceGeometryData3D>,Node*,Callable_const&>
::_gen_argument_type
          (MethodBindT<Ref<NavigationMesh>const&,Ref<NavigationMeshSourceGeometryData3D>,Node*,Callable_const&>
           *this,int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if ((uint)param_1 < 4) {
    iVar1 = 0x19 - (uint)((uint)param_1 < 3);
  }
  return iVar1;
}



/* NavigationMeshGenerator::_get_class_namev() const */

undefined8 * NavigationMeshGenerator::_get_class_namev(void)

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
LAB_00100fa3:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00100fa3;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"NavigationMeshGenerator");
      goto LAB_0010100e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"NavigationMeshGenerator");
LAB_0010100e:
  return &_get_class_namev()::_class_name_static;
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



/* NavigationMeshGenerator::get_class() const */

void NavigationMeshGenerator::get_class(void)

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



/* NavigationMeshGenerator::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const
    */

void NavigationMeshGenerator::_get_property_listv(List *param_1,bool param_2)

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
  local_78 = "NavigationMeshGenerator";
  local_88 = 0;
  local_90 = 0;
  local_70 = 0x17;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "NavigationMeshGenerator";
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
LAB_0010130d:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_0010130d;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)pLVar5;
      local_68 = local_80;
      goto joined_r0x0010132f;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)pLVar5;
joined_r0x0010132f:
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
  StringName::StringName((StringName *)&local_78,"NavigationMeshGenerator",false);
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



/* NavigationMeshGenerator::is_class(String const&) const */

undefined8 __thiscall
NavigationMeshGenerator::is_class(NavigationMeshGenerator *this,String *param_1)

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
            if (lVar3 == 0) goto LAB_0010156f;
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
LAB_0010156f:
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
    if (cVar6 != '\0') goto LAB_00101623;
  }
  cVar6 = String::operator==(param_1,"NavigationMeshGenerator");
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
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar5 + 0x10));
        }
        else {
          local_50 = strlen(pcVar4);
          local_58 = pcVar4;
          String::parse_latin1((StrRange *)&local_60);
        }
      }
      cVar6 = String::operator==(param_1,(String *)&local_60);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if (cVar6 != '\0') goto LAB_00101623;
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar8 = String::operator==(param_1,"Object");
      return uVar8;
    }
  }
  else {
LAB_00101623:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBind* create_method_bind<NavigationMeshGenerator, Ref<NavigationMesh> const&, Node*>(void
   (NavigationMeshGenerator::*)(Ref<NavigationMesh> const&, Node*)) */

MethodBind *
create_method_bind<NavigationMeshGenerator,Ref<NavigationMesh>const&,Node*>
          (_func_void_Ref_ptr_Node_ptr *param_1)

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
  *(_func_void_Ref_ptr_Node_ptr **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_001065a8;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 2;
  local_40 = 0;
  local_38 = "NavigationMeshGenerator";
  local_30 = 0x17;
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



/* MethodBind* create_method_bind<NavigationMeshGenerator, Ref<NavigationMesh> >(void
   (NavigationMeshGenerator::*)(Ref<NavigationMesh>)) */

MethodBind *
create_method_bind<NavigationMeshGenerator,Ref<NavigationMesh>>(_func_void_Ref *param_1)

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
  *(undefined ***)this = &PTR__gen_argument_type_00106608;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "NavigationMeshGenerator";
  local_30 = 0x17;
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



/* MethodBind* create_method_bind<NavigationMeshGenerator, Ref<NavigationMesh> const&,
   Ref<NavigationMeshSourceGeometryData3D>, Node*, Callable const&>(void
   (NavigationMeshGenerator::*)(Ref<NavigationMesh> const&, Ref<NavigationMeshSourceGeometryData3D>,
   Node*, Callable const&)) */

MethodBind *
create_method_bind<NavigationMeshGenerator,Ref<NavigationMesh>const&,Ref<NavigationMeshSourceGeometryData3D>,Node*,Callable_const&>
          (_func_void_Ref_ptr_Ref_Node_ptr_Callable_ptr *param_1)

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
  *(_func_void_Ref_ptr_Ref_Node_ptr_Callable_ptr **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00106668;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 4;
  local_40 = 0;
  local_38 = "NavigationMeshGenerator";
  local_30 = 0x17;
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



/* MethodBind* create_method_bind<NavigationMeshGenerator, Ref<NavigationMesh>,
   Ref<NavigationMeshSourceGeometryData3D> const&, Callable const&>(void
   (NavigationMeshGenerator::*)(Ref<NavigationMesh>, Ref<NavigationMeshSourceGeometryData3D> const&,
   Callable const&)) */

MethodBind *
create_method_bind<NavigationMeshGenerator,Ref<NavigationMesh>,Ref<NavigationMeshSourceGeometryData3D>const&,Callable_const&>
          (_func_void_Ref_Ref_ptr_Callable_ptr *param_1)

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
  *(_func_void_Ref_Ref_ptr_Callable_ptr **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_001066c8;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 3;
  local_40 = 0;
  local_38 = "NavigationMeshGenerator";
  local_30 = 0x17;
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



/* NavigationMeshGenerator::_bind_methods() [clone .cold] */

void NavigationMeshGenerator::_bind_methods(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* NavigationMeshGenerator::_initialize_classv() */

void NavigationMeshGenerator::_initialize_classv(void)

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
    local_48 = "NavigationMeshGenerator";
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
    _bind_methods();
    initialize_class()::initialized = '\x01';
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Removing unreachable block (ram,0x00101eb8) */
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



/* MethodBindT<Ref<NavigationMesh> const&, Node*>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<Ref<NavigationMesh>const&,Node*>::ptrcall
               (Object *param_1,void **param_2,void *param_3)

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
      local_48 = (Object *)0x102088;
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
      goto LAB_001021f3;
    }
    if ((StringName::configured != '\0') && (local_48 != (Object *)0x0)) {
      StringName::unref();
    }
  }
  pcVar5 = *(code **)(param_1 + 0x58);
  lVar1 = *(long *)(param_1 + 0x60);
  if (((ulong)pcVar5 & 1) != 0) {
    pcVar5 = *(code **)(pcVar5 + *(long *)((long)param_2 + lVar1) + -1);
  }
  plVar4 = *(long **)((long)param_3 + 8);
  if (plVar4 != (long *)0x0) {
    plVar4 = (long *)*plVar4;
  }
                    /* WARNING: Load size is inaccurate */
  if ((*param_3 == (long *)0x0) || (local_48 = (Object *)**param_3, local_48 == (Object *)0x0)) {
LAB_001021cb:
    local_48 = (Object *)0x0;
  }
  else {
    cVar3 = RefCounted::init_ref();
    if (cVar3 == '\0') goto LAB_001021cb;
  }
  (*pcVar5)((long *)((long)param_2 + lVar1),(StringName *)&local_48,plVar4);
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
LAB_001021f3:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Ref<NavigationMesh> const&, Node*>::validated_call(Object*, Variant const**,
   Variant*) const */

void MethodBindT<Ref<NavigationMesh>const&,Node*>::validated_call
               (Object *param_1,Variant **param_2,Variant *param_3)

{
  long lVar1;
  undefined8 uVar2;
  Object *pOVar3;
  char cVar4;
  Object *pOVar5;
  Variant *pVVar6;
  code *pcVar7;
  long in_FS_OFFSET;
  long local_78;
  undefined8 local_70;
  Object *local_68;
  undefined8 local_60;
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (Variant **)0x0) && (param_2[1] != (Variant *)0x0)) &&
     (param_2[1][0x2e] != (Variant)0x0)) {
    StringName::StringName((StringName *)&local_68,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (Variant *)0x0) {
      pVVar6 = param_2[0x23];
      if (pVVar6 == (Variant *)0x0) {
        pVVar6 = (Variant *)(**(code **)(*param_2 + 0x40))(param_2);
      }
    }
    else {
      pVVar6 = param_2[1] + 0x20;
    }
    if (local_68 == (Object *)*(long *)pVVar6) {
      if ((StringName::configured != '\0') && (local_68 != (Object *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_68 = (Object *)0x102088;
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
      goto LAB_001024d9;
    }
    if ((StringName::configured != '\0') && (local_68 != (Object *)0x0)) {
      StringName::unref();
    }
  }
  pcVar7 = *(code **)(param_1 + 0x58);
  lVar1 = *(long *)(param_1 + 0x60);
  if (((ulong)pcVar7 & 1) != 0) {
    pcVar7 = *(code **)(pcVar7 + *(long *)((long)param_2 + lVar1) + -1);
  }
  uVar2 = *(undefined8 *)(*(long *)(param_3 + 8) + 0x10);
  Variant::Variant((Variant *)local_58,*(Object **)(*(long *)param_3 + 0x10));
  local_68 = (Object *)0x0;
  pOVar5 = (Object *)Variant::get_validated_object();
  pOVar3 = local_68;
  if (pOVar5 != local_68) {
    if (pOVar5 == (Object *)0x0) {
      if (local_68 != (Object *)0x0) {
        local_68 = (Object *)0x0;
LAB_00102494:
        cVar4 = RefCounted::unreference();
        if (cVar4 != '\0') {
          cVar4 = predelete_handler(pOVar3);
          if (cVar4 != '\0') {
            (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
            Memory::free_static(pOVar3,false);
          }
        }
      }
    }
    else {
      pOVar5 = (Object *)__dynamic_cast(pOVar5,&Object::typeinfo,&NavigationMesh::typeinfo,0);
      if (pOVar3 != pOVar5) {
        local_68 = pOVar5;
        if (pOVar5 != (Object *)0x0) {
          cVar4 = RefCounted::reference();
          if (cVar4 == '\0') {
            local_68 = (Object *)0x0;
          }
        }
        if (pOVar3 != (Object *)0x0) goto LAB_00102494;
      }
    }
  }
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  (*pcVar7)((long *)((long)param_2 + lVar1),(StringName *)&local_68,uVar2);
  if (local_68 != (Object *)0x0) {
    cVar4 = RefCounted::unreference();
    pOVar3 = local_68;
    if (cVar4 != '\0') {
      cVar4 = predelete_handler(local_68);
      if (cVar4 != '\0') {
        (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
        Memory::free_static(pOVar3,false);
      }
    }
  }
LAB_001024d9:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Ref<NavigationMesh> const&, Node*>::call(Object*, Variant const**, int,
   Callable::CallError&) const */

Object * MethodBindT<Ref<NavigationMesh>const&,Node*>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  code *pcVar2;
  undefined8 uVar3;
  char cVar4;
  int iVar5;
  undefined4 uVar6;
  Object *pOVar7;
  Object *pOVar8;
  long *plVar9;
  Object *pOVar10;
  long lVar11;
  long lVar12;
  undefined4 in_register_00000014;
  long *plVar13;
  Variant *pVVar14;
  int iVar15;
  uint in_R8D;
  undefined4 *in_R9;
  Variant *pVVar16;
  Variant *pVVar17;
  long in_FS_OFFSET;
  long local_68;
  undefined8 local_60;
  Object *local_58;
  undefined8 local_50;
  long local_40;
  
  plVar13 = (long *)CONCAT44(in_register_00000014,param_3);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (((plVar13 != (long *)0x0) && (plVar13[1] != 0)) && (*(char *)(plVar13[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(param_2 + 3));
    if (plVar13[1] == 0) {
      plVar9 = (long *)plVar13[0x23];
      if (plVar9 == (long *)0x0) {
        plVar9 = (long *)(**(code **)(*plVar13 + 0x40))(plVar13);
      }
    }
    else {
      plVar9 = (long *)(plVar13[1] + 0x20);
    }
    if (local_58 == (Object *)*plVar9) {
      if ((StringName::configured != '\0') && (local_58 != (Object *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = (Object *)0x102088;
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error(&_LC28,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_001029f0;
    }
    if ((StringName::configured != '\0') && (local_58 != (Object *)0x0)) {
      StringName::unref();
    }
  }
  pVVar16 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (2 < in_R8D) {
    uVar6 = 3;
LAB_001029e5:
    *in_R9 = uVar6;
    in_R9[2] = 2;
    goto LAB_001029f0;
  }
  pVVar17 = param_2[5];
  iVar5 = 2 - in_R8D;
  if (pVVar17 == (Variant *)0x0) {
    if (iVar5 != 0) goto LAB_00102a28;
    pVVar14 = *(Variant **)param_4;
LAB_00102a3d:
    pVVar17 = *(Variant **)(param_4 + 8);
  }
  else {
    lVar11 = *(long *)(pVVar17 + -8);
    iVar15 = (int)lVar11;
    if (iVar15 < iVar5) {
LAB_00102a28:
      uVar6 = 4;
      goto LAB_001029e5;
    }
    if (in_R8D == 0) {
      lVar12 = (long)(iVar15 + -2);
      if (lVar11 <= lVar12) goto LAB_00102ba0;
      pVVar14 = pVVar17 + lVar12 * 0x18;
    }
    else {
      pVVar14 = *(Variant **)param_4;
      if (in_R8D == 2) goto LAB_00102a3d;
    }
    lVar12 = (long)(int)((in_R8D ^ 1) + (iVar15 - iVar5));
    if (lVar11 <= lVar12) {
LAB_00102ba0:
      _err_print_index_error
                ("get","./core/templates/cowdata.h",0xdb,lVar12,lVar11,"p_index","size()","",false,
                 true);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    pVVar17 = pVVar17 + lVar12 * 0x18;
  }
  *in_R9 = 0;
  if (((ulong)pVVar16 & 1) != 0) {
    pVVar16 = *(Variant **)(pVVar16 + *(long *)((long)plVar13 + (long)pVVar1) + -1);
  }
  cVar4 = Variant::can_convert_strict(*(undefined4 *)pVVar17,0x18);
  if (cVar4 == '\0') {
LAB_001028c4:
    uVar3 = _LC33;
    *in_R9 = 2;
    *(undefined8 *)(in_R9 + 1) = uVar3;
  }
  else {
    pOVar7 = Variant::operator_cast_to_Object_(pVVar17);
    pOVar10 = Variant::operator_cast_to_Object_(pVVar17);
    if (((pOVar10 == (Object *)0x0) ||
        (lVar11 = __dynamic_cast(pOVar10,&Object::typeinfo,&Node::typeinfo,0), lVar11 == 0)) &&
       (pOVar7 != (Object *)0x0)) goto LAB_001028c4;
  }
  pOVar7 = Variant::operator_cast_to_Object_(pVVar17);
  if (pOVar7 != (Object *)0x0) {
    pOVar7 = (Object *)__dynamic_cast(pOVar7,&Object::typeinfo,&Node::typeinfo,0);
  }
  cVar4 = Variant::can_convert_strict(*(undefined4 *)pVVar14);
  uVar3 = _LC34;
  if (cVar4 == '\0') {
    *in_R9 = 2;
    *(undefined8 *)(in_R9 + 1) = uVar3;
  }
  local_58 = (Object *)0x0;
  pOVar8 = (Object *)Variant::get_validated_object();
  pOVar10 = local_58;
  if (pOVar8 != local_58) {
    if (pOVar8 == (Object *)0x0) {
      if (local_58 != (Object *)0x0) {
        local_58 = (Object *)0x0;
LAB_00102984:
        cVar4 = RefCounted::unreference();
        if ((cVar4 != '\0') && (cVar4 = predelete_handler(pOVar10), cVar4 != '\0')) {
          (**(code **)(*(long *)pOVar10 + 0x140))(pOVar10);
          Memory::free_static(pOVar10,false);
        }
      }
    }
    else {
      pOVar8 = (Object *)__dynamic_cast(pOVar8,&Object::typeinfo,&NavigationMesh::typeinfo,0);
      if (pOVar10 != pOVar8) {
        local_58 = pOVar8;
        if ((pOVar8 != (Object *)0x0) && (cVar4 = RefCounted::reference(), cVar4 == '\0')) {
          local_58 = (Object *)0x0;
        }
        if (pOVar10 != (Object *)0x0) goto LAB_00102984;
      }
    }
  }
  (*(code *)pVVar16)((Variant *)((long)plVar13 + (long)pVVar1),&local_58,pOVar7);
  if (((local_58 != (Object *)0x0) &&
      (cVar4 = RefCounted::unreference(), pOVar7 = local_58, cVar4 != '\0')) &&
     (cVar4 = predelete_handler(local_58), cVar4 != '\0')) {
    (**(code **)(*(long *)pOVar7 + 0x140))(pOVar7);
    Memory::free_static(pOVar7,false);
  }
LAB_001029f0:
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* MethodBindT<Ref<NavigationMesh> >::ptrcall(Object*, void const**, void*) const */

void MethodBindT<Ref<NavigationMesh>>::ptrcall(Object *param_1,void **param_2,void *param_3)

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
      local_48 = (Object *)0x102088;
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
      goto LAB_00102d6c;
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
LAB_00102d48:
    local_48 = (Object *)0x0;
  }
  else {
    cVar3 = RefCounted::init_ref();
    if (cVar3 == '\0') goto LAB_00102d48;
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
LAB_00102d6c:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Ref<NavigationMesh> >::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<Ref<NavigationMesh>>::validated_call
               (Object *param_1,Variant **param_2,Variant *param_3)

{
  long lVar1;
  Object *pOVar2;
  char cVar3;
  Object *pOVar4;
  Variant *pVVar5;
  code *pcVar6;
  long in_FS_OFFSET;
  long local_68;
  undefined8 local_60;
  Object *local_58;
  undefined8 local_50;
  int local_48 [6];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (Variant **)0x0) && (param_2[1] != (Variant *)0x0)) &&
     (param_2[1][0x2e] != (Variant)0x0)) {
    StringName::StringName((StringName *)&local_58,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (Variant *)0x0) {
      pVVar5 = param_2[0x23];
      if (pVVar5 == (Variant *)0x0) {
        pVVar5 = (Variant *)(**(code **)(*param_2 + 0x40))(param_2);
      }
    }
    else {
      pVVar5 = param_2[1] + 0x20;
    }
    if (local_58 == (Object *)*(long *)pVVar5) {
      if ((StringName::configured != '\0') && (local_58 != (Object *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = (Object *)0x102088;
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
      goto LAB_00103018;
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
LAB_00102fd6:
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
      pOVar4 = (Object *)__dynamic_cast(pOVar4,&Object::typeinfo,&NavigationMesh::typeinfo,0);
      if (pOVar2 != pOVar4) {
        local_58 = pOVar4;
        if (pOVar4 != (Object *)0x0) {
          cVar3 = RefCounted::reference();
          if (cVar3 == '\0') {
            local_58 = (Object *)0x0;
          }
        }
        if (pOVar2 != (Object *)0x0) goto LAB_00102fd6;
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
LAB_00103018:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Ref<NavigationMesh> const&, Ref<NavigationMeshSourceGeometryData3D>, Node*, Callable
   const&>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<Ref<NavigationMesh>const&,Ref<NavigationMeshSourceGeometryData3D>,Node*,Callable_const&>
     ::ptrcall(Object *param_1,void **param_2,void *param_3)

{
  long lVar1;
  undefined8 uVar2;
  Object *pOVar3;
  char cVar4;
  long *plVar5;
  code *pcVar6;
  long in_FS_OFFSET;
  long local_68;
  Object *local_60;
  Object *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (void **)0x0) && (param_2[1] != (void *)0x0)) &&
     (*(char *)((long)param_2[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (void *)0x0) {
      plVar5 = (long *)param_2[0x23];
      if (plVar5 == (long *)0x0) {
        plVar5 = (long *)(**(code **)((long)*param_2 + 0x40))(param_2);
      }
    }
    else {
      plVar5 = (long *)((long)param_2[1] + 0x20);
    }
    if (local_58 == (Object *)*plVar5) {
      if ((StringName::configured != '\0') && (local_58 != (Object *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = (Object *)0x102088;
      local_60 = (Object *)0x0;
      local_50 = 0x35;
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
      goto LAB_00103336;
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
  plVar5 = *(long **)((long)param_3 + 0x10);
  uVar2 = *(undefined8 *)((long)param_3 + 0x18);
  if (plVar5 != (long *)0x0) {
    plVar5 = (long *)*plVar5;
  }
  if ((*(long **)((long)param_3 + 8) == (long *)0x0) ||
     (local_60 = (Object *)**(long **)((long)param_3 + 8), local_60 == (Object *)0x0)) {
LAB_001032cd:
    local_60 = (Object *)0x0;
  }
  else {
    cVar4 = RefCounted::init_ref();
    if (cVar4 == '\0') goto LAB_001032cd;
  }
                    /* WARNING: Load size is inaccurate */
  if ((*param_3 == (long *)0x0) || (local_58 = (Object *)**param_3, local_58 == (Object *)0x0)) {
LAB_00103370:
    local_58 = (Object *)0x0;
  }
  else {
    cVar4 = RefCounted::init_ref();
    if (cVar4 == '\0') goto LAB_00103370;
  }
  (*pcVar6)((long *)((long)param_2 + lVar1),(StringName *)&local_58,&local_60,plVar5,uVar2);
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
  if (local_60 != (Object *)0x0) {
    cVar4 = RefCounted::unreference();
    pOVar3 = local_60;
    if (cVar4 != '\0') {
      cVar4 = predelete_handler(local_60);
      if (cVar4 != '\0') {
        (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
        Memory::free_static(pOVar3,false);
      }
    }
  }
LAB_00103336:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Ref<NavigationMesh> const&, Ref<NavigationMeshSourceGeometryData3D>, Node*, Callable
   const&>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<Ref<NavigationMesh>const&,Ref<NavigationMeshSourceGeometryData3D>,Node*,Callable_const&>
     ::validated_call(Object *param_1,Variant **param_2,Variant *param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  Object *pOVar4;
  char cVar5;
  Object *pOVar6;
  Variant *pVVar7;
  code *pcVar8;
  long in_FS_OFFSET;
  long local_78;
  Object *local_70;
  Object *local_68;
  undefined8 local_60;
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (Variant **)0x0) && (param_2[1] != (Variant *)0x0)) &&
     (param_2[1][0x2e] != (Variant)0x0)) {
    StringName::StringName((StringName *)&local_68,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (Variant *)0x0) {
      pVVar7 = param_2[0x23];
      if (pVVar7 == (Variant *)0x0) {
        pVVar7 = (Variant *)(**(code **)(*param_2 + 0x40))(param_2);
      }
    }
    else {
      pVVar7 = param_2[1] + 0x20;
    }
    if (local_68 == (Object *)*(long *)pVVar7) {
      if ((StringName::configured != '\0') && (local_68 != (Object *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_68 = (Object *)0x102088;
      local_70 = (Object *)0x0;
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
      goto LAB_001036f0;
    }
    if ((StringName::configured != '\0') && (local_68 != (Object *)0x0)) {
      StringName::unref();
    }
  }
  pcVar8 = *(code **)(param_1 + 0x58);
  lVar1 = *(long *)(param_1 + 0x60);
  if (((ulong)pcVar8 & 1) != 0) {
    pcVar8 = *(code **)(pcVar8 + *(long *)((long)param_2 + lVar1) + -1);
  }
  lVar2 = *(long *)(param_3 + 0x18);
  uVar3 = *(undefined8 *)(*(long *)(param_3 + 0x10) + 0x10);
  Variant::Variant((Variant *)local_58,*(Object **)(*(long *)(param_3 + 8) + 0x10));
  local_70 = (Object *)0x0;
  pOVar6 = (Object *)Variant::get_validated_object();
  pOVar4 = local_70;
  if (pOVar6 != local_70) {
    if (pOVar6 == (Object *)0x0) {
      if (local_70 != (Object *)0x0) {
        local_70 = (Object *)0x0;
LAB_001035f9:
        cVar5 = RefCounted::unreference();
        if (cVar5 != '\0') {
          cVar5 = predelete_handler(pOVar4);
          if (cVar5 != '\0') {
            (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
            Memory::free_static(pOVar4,false);
          }
        }
      }
    }
    else {
      pOVar6 = (Object *)
               __dynamic_cast(pOVar6,&Object::typeinfo,&NavigationMeshSourceGeometryData3D::typeinfo
                              ,0);
      if (pOVar4 != pOVar6) {
        local_70 = pOVar6;
        if (pOVar6 != (Object *)0x0) {
          cVar5 = RefCounted::reference();
          if (cVar5 == '\0') {
            local_70 = (Object *)0x0;
          }
        }
        if (pOVar4 != (Object *)0x0) goto LAB_001035f9;
      }
    }
  }
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_58,*(Object **)(*(long *)param_3 + 0x10));
  local_68 = (Object *)0x0;
  pOVar6 = (Object *)Variant::get_validated_object();
  pOVar4 = local_68;
  if (pOVar6 != local_68) {
    if (pOVar6 == (Object *)0x0) {
      if (local_68 != (Object *)0x0) {
        local_68 = (Object *)0x0;
LAB_0010368f:
        cVar5 = RefCounted::unreference();
        if (cVar5 != '\0') {
          cVar5 = predelete_handler(pOVar4);
          if (cVar5 != '\0') {
            (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
            Memory::free_static(pOVar4,false);
          }
        }
      }
    }
    else {
      pOVar6 = (Object *)__dynamic_cast(pOVar6,&Object::typeinfo,&NavigationMesh::typeinfo,0);
      if (pOVar4 != pOVar6) {
        local_68 = pOVar6;
        if (pOVar6 != (Object *)0x0) {
          cVar5 = RefCounted::reference();
          if (cVar5 == '\0') {
            local_68 = (Object *)0x0;
          }
        }
        if (pOVar4 != (Object *)0x0) goto LAB_0010368f;
      }
    }
  }
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  (*pcVar8)((long *)((long)param_2 + lVar1),(StringName *)&local_68,&local_70,uVar3,lVar2 + 8);
  if (local_68 != (Object *)0x0) {
    cVar5 = RefCounted::unreference();
    pOVar4 = local_68;
    if (cVar5 != '\0') {
      cVar5 = predelete_handler(local_68);
      if (cVar5 != '\0') {
        (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
        Memory::free_static(pOVar4,false);
      }
    }
  }
  if (local_70 != (Object *)0x0) {
    cVar5 = RefCounted::unreference();
    pOVar4 = local_70;
    if (cVar5 != '\0') {
      cVar5 = predelete_handler(local_70);
      if (cVar5 != '\0') {
        (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
        Memory::free_static(pOVar4,false);
      }
    }
  }
LAB_001036f0:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Ref<NavigationMesh> const&, Ref<NavigationMeshSourceGeometryData3D>, Node*, Callable
   const&>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindT<Ref<NavigationMesh>const&,Ref<NavigationMeshSourceGeometryData3D>,Node*,Callable_const&>
         ::call(Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  Variant *pVVar2;
  code *pcVar3;
  undefined8 uVar4;
  char cVar5;
  undefined4 uVar6;
  long lVar7;
  Object *pOVar8;
  Object *pOVar9;
  long *plVar10;
  Object *pOVar11;
  long lVar12;
  int iVar13;
  uint uVar14;
  Variant *pVVar15;
  undefined4 in_register_00000014;
  long *plVar16;
  uint in_R8D;
  undefined4 *in_R9;
  Variant *pVVar17;
  long in_FS_OFFSET;
  Object *local_88;
  Object *local_80;
  char *local_78;
  undefined8 local_70;
  Variant *local_68 [5];
  long local_40;
  
  plVar16 = (long *)CONCAT44(in_register_00000014,param_3);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (((plVar16 != (long *)0x0) && (plVar16[1] != 0)) && (*(char *)(plVar16[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_78,(StringName *)(param_2 + 3));
    if (plVar16[1] == 0) {
      plVar10 = (long *)plVar16[0x23];
      if (plVar10 == (long *)0x0) {
        plVar10 = (long *)(**(code **)(*plVar16 + 0x40))();
      }
    }
    else {
      plVar10 = (long *)(plVar16[1] + 0x20);
    }
    if (local_78 == (char *)*plVar10) {
      if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_78 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_80 = (Object *)0x0;
      local_70 = 0x35;
      String::parse_latin1((StrRange *)&local_80);
      vformat<StringName>((StringName *)&local_78,(StrRange *)&local_80,&local_88);
      _err_print_error(&_LC28,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_78,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
      if ((StringName::configured != '\0') && (local_88 != (Object *)0x0)) {
        StringName::unref();
      }
      goto LAB_00103cc2;
    }
    if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar17 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D < 5) {
    pVVar2 = param_2[5];
    if (pVVar2 == (Variant *)0x0) {
      iVar13 = 0;
      lVar12 = 0;
    }
    else {
      lVar12 = *(long *)(pVVar2 + -8);
      iVar13 = (int)lVar12;
    }
    if ((int)(4 - in_R8D) <= iVar13) {
      lVar7 = 0;
      do {
        if ((int)lVar7 < (int)in_R8D) {
          pVVar15 = *(Variant **)(param_4 + lVar7 * 8);
        }
        else {
          uVar14 = iVar13 + -4 + (int)lVar7;
          if (lVar12 <= (int)uVar14) {
            _err_print_index_error
                      ("get","./core/templates/cowdata.h",0xdb,(long)(int)uVar14,lVar12,"p_index",
                       "size()","",false,true);
            _err_flush_stdout();
                    /* WARNING: Does not return */
            pcVar3 = (code *)invalidInstructionException();
            (*pcVar3)();
          }
          pVVar15 = pVVar2 + (ulong)uVar14 * 0x18;
        }
        local_68[lVar7] = pVVar15;
        lVar7 = lVar7 + 1;
      } while (lVar7 != 4);
      *in_R9 = 0;
      if (((ulong)pVVar17 & 1) != 0) {
        pVVar17 = *(Variant **)(pVVar17 + *(long *)((long)plVar16 + (long)pVVar1) + -1);
      }
      cVar5 = Variant::can_convert_strict(*(undefined4 *)local_68[3],0x19);
      uVar4 = _LC36;
      if (cVar5 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = uVar4;
      }
      Variant::operator_cast_to_Callable((Variant *)&local_78);
      cVar5 = Variant::can_convert_strict(*(undefined4 *)local_68[2],0x18);
      if (cVar5 == '\0') {
LAB_00103ab6:
        uVar4 = _LC37;
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = uVar4;
      }
      else {
        pOVar8 = Variant::operator_cast_to_Object_(local_68[2]);
        pOVar11 = Variant::operator_cast_to_Object_(local_68[2]);
        if (((pOVar11 == (Object *)0x0) ||
            (lVar12 = __dynamic_cast(pOVar11,&Object::typeinfo,&Node::typeinfo,0), lVar12 == 0)) &&
           (pOVar8 != (Object *)0x0)) goto LAB_00103ab6;
      }
      pOVar8 = Variant::operator_cast_to_Object_(local_68[2]);
      if (pOVar8 != (Object *)0x0) {
        pOVar8 = (Object *)__dynamic_cast(pOVar8,&Object::typeinfo,&Node::typeinfo,0);
      }
      cVar5 = Variant::can_convert_strict(*(undefined4 *)local_68[1]);
      uVar4 = _LC33;
      if (cVar5 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = uVar4;
      }
      local_88 = (Object *)0x0;
      pOVar9 = (Object *)Variant::get_validated_object();
      pOVar11 = local_88;
      if (pOVar9 != local_88) {
        if (pOVar9 == (Object *)0x0) {
          if (local_88 != (Object *)0x0) {
            local_88 = (Object *)0x0;
LAB_00103b7f:
            cVar5 = RefCounted::unreference();
            if ((cVar5 != '\0') && (cVar5 = predelete_handler(pOVar11), cVar5 != '\0')) {
              (**(code **)(*(long *)pOVar11 + 0x140))(pOVar11);
              Memory::free_static(pOVar11,false);
            }
          }
        }
        else {
          pOVar9 = (Object *)
                   __dynamic_cast(pOVar9,&Object::typeinfo,
                                  &NavigationMeshSourceGeometryData3D::typeinfo,0);
          if (pOVar11 != pOVar9) {
            local_88 = pOVar9;
            if ((pOVar9 != (Object *)0x0) && (cVar5 = RefCounted::reference(), cVar5 == '\0')) {
              local_88 = (Object *)0x0;
            }
            if (pOVar11 != (Object *)0x0) goto LAB_00103b7f;
          }
        }
      }
      cVar5 = Variant::can_convert_strict(*(undefined4 *)local_68[0]);
      uVar4 = _LC34;
      if (cVar5 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = uVar4;
      }
      local_80 = (Object *)0x0;
      pOVar9 = (Object *)Variant::get_validated_object();
      pOVar11 = local_80;
      if (pOVar9 != local_80) {
        if (pOVar9 == (Object *)0x0) {
          if (local_80 != (Object *)0x0) {
            local_80 = (Object *)0x0;
LAB_00103c22:
            cVar5 = RefCounted::unreference();
            if ((cVar5 != '\0') && (cVar5 = predelete_handler(pOVar11), cVar5 != '\0')) {
              (**(code **)(*(long *)pOVar11 + 0x140))(pOVar11);
              Memory::free_static(pOVar11,false);
            }
          }
        }
        else {
          pOVar9 = (Object *)__dynamic_cast(pOVar9,&Object::typeinfo,&NavigationMesh::typeinfo,0);
          if (pOVar11 != pOVar9) {
            local_80 = pOVar9;
            if ((pOVar9 != (Object *)0x0) && (cVar5 = RefCounted::reference(), cVar5 == '\0')) {
              local_80 = (Object *)0x0;
            }
            if (pOVar11 != (Object *)0x0) goto LAB_00103c22;
          }
        }
      }
      (*(code *)pVVar17)((Variant *)((long)plVar16 + (long)pVVar1),&local_80,&local_88,pOVar8,
                         (Variant *)&local_78);
      if (((local_80 != (Object *)0x0) &&
          (cVar5 = RefCounted::unreference(), pOVar8 = local_80, cVar5 != '\0')) &&
         (cVar5 = predelete_handler(local_80), cVar5 != '\0')) {
        (**(code **)(*(long *)pOVar8 + 0x140))(pOVar8);
        Memory::free_static(pOVar8,false);
      }
      if (((local_88 != (Object *)0x0) &&
          (cVar5 = RefCounted::unreference(), pOVar8 = local_88, cVar5 != '\0')) &&
         (cVar5 = predelete_handler(local_88), cVar5 != '\0')) {
        (**(code **)(*(long *)pOVar8 + 0x140))(pOVar8);
        Memory::free_static(pOVar8,false);
      }
      Callable::~Callable((Callable *)&local_78);
      goto LAB_00103cc2;
    }
    uVar6 = 4;
  }
  else {
    uVar6 = 3;
  }
  *in_R9 = uVar6;
  in_R9[2] = 4;
LAB_00103cc2:
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* MethodBindT<Ref<NavigationMesh>, Ref<NavigationMeshSourceGeometryData3D> const&, Callable
   const&>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<Ref<NavigationMesh>,Ref<NavigationMeshSourceGeometryData3D>const&,Callable_const&>
     ::ptrcall(Object *param_1,void **param_2,void *param_3)

{
  long lVar1;
  undefined8 uVar2;
  Object *pOVar3;
  char cVar4;
  long *plVar5;
  code *pcVar6;
  long in_FS_OFFSET;
  long local_58;
  Object *local_50;
  Object *local_48;
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
    if (local_48 == (Object *)*plVar5) {
      if ((StringName::configured != '\0') && (local_48 != (Object *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = (Object *)0x102088;
      local_50 = (Object *)0x0;
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
      goto LAB_00104131;
    }
    if ((StringName::configured != '\0') && (local_48 != (Object *)0x0)) {
      StringName::unref();
    }
  }
  pcVar6 = *(code **)(param_1 + 0x58);
  lVar1 = *(long *)(param_1 + 0x60);
  if (((ulong)pcVar6 & 1) != 0) {
    pcVar6 = *(code **)(pcVar6 + *(long *)((long)param_2 + lVar1) + -1);
  }
  uVar2 = *(undefined8 *)((long)param_3 + 0x10);
  if ((*(long **)((long)param_3 + 8) == (long *)0x0) ||
     (local_50 = (Object *)**(long **)((long)param_3 + 8), local_50 == (Object *)0x0)) {
LAB_001040d3:
    local_50 = (Object *)0x0;
  }
  else {
    cVar4 = RefCounted::init_ref();
    if (cVar4 == '\0') goto LAB_001040d3;
  }
                    /* WARNING: Load size is inaccurate */
  if ((*param_3 == (long *)0x0) || (local_48 = (Object *)**param_3, local_48 == (Object *)0x0)) {
LAB_00104158:
    local_48 = (Object *)0x0;
  }
  else {
    cVar4 = RefCounted::init_ref();
    if (cVar4 == '\0') goto LAB_00104158;
  }
  (*pcVar6)((long *)((long)param_2 + lVar1),(StringName *)&local_48,&local_50,uVar2);
  if (local_48 != (Object *)0x0) {
    cVar4 = RefCounted::unreference();
    pOVar3 = local_48;
    if (cVar4 != '\0') {
      cVar4 = predelete_handler(local_48);
      if (cVar4 != '\0') {
        (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
        Memory::free_static(pOVar3,false);
      }
    }
  }
  if (local_50 != (Object *)0x0) {
    cVar4 = RefCounted::unreference();
    pOVar3 = local_50;
    if (cVar4 != '\0') {
      cVar4 = predelete_handler(local_50);
      if (cVar4 != '\0') {
        (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
        Memory::free_static(pOVar3,false);
      }
    }
  }
LAB_00104131:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Ref<NavigationMesh>, Ref<NavigationMeshSourceGeometryData3D> const&, Callable
   const&>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<Ref<NavigationMesh>,Ref<NavigationMeshSourceGeometryData3D>const&,Callable_const&>
     ::validated_call(Object *param_1,Variant **param_2,Variant *param_3)

{
  long lVar1;
  long lVar2;
  Object *pOVar3;
  char cVar4;
  Object *pOVar5;
  Variant *pVVar6;
  code *pcVar7;
  long in_FS_OFFSET;
  long local_78;
  Object *local_70;
  Object *local_68;
  undefined8 local_60;
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (Variant **)0x0) && (param_2[1] != (Variant *)0x0)) &&
     (param_2[1][0x2e] != (Variant)0x0)) {
    StringName::StringName((StringName *)&local_68,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (Variant *)0x0) {
      pVVar6 = param_2[0x23];
      if (pVVar6 == (Variant *)0x0) {
        pVVar6 = (Variant *)(**(code **)(*param_2 + 0x40))(param_2);
      }
    }
    else {
      pVVar6 = param_2[1] + 0x20;
    }
    if (local_68 == (Object *)*(long *)pVVar6) {
      if ((StringName::configured != '\0') && (local_68 != (Object *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_68 = (Object *)0x102088;
      local_70 = (Object *)0x0;
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
      goto LAB_001044d0;
    }
    if ((StringName::configured != '\0') && (local_68 != (Object *)0x0)) {
      StringName::unref();
    }
  }
  pcVar7 = *(code **)(param_1 + 0x58);
  lVar1 = *(long *)(param_1 + 0x60);
  if (((ulong)pcVar7 & 1) != 0) {
    pcVar7 = *(code **)(pcVar7 + *(long *)((long)param_2 + lVar1) + -1);
  }
  lVar2 = *(long *)(param_3 + 0x10);
  Variant::Variant((Variant *)local_58,*(Object **)(*(long *)(param_3 + 8) + 0x10));
  local_70 = (Object *)0x0;
  pOVar5 = (Object *)Variant::get_validated_object();
  pOVar3 = local_70;
  if (pOVar5 != local_70) {
    if (pOVar5 == (Object *)0x0) {
      if (local_70 != (Object *)0x0) {
        local_70 = (Object *)0x0;
LAB_001043dd:
        cVar4 = RefCounted::unreference();
        if (cVar4 != '\0') {
          cVar4 = predelete_handler(pOVar3);
          if (cVar4 != '\0') {
            (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
            Memory::free_static(pOVar3,false);
          }
        }
      }
    }
    else {
      pOVar5 = (Object *)
               __dynamic_cast(pOVar5,&Object::typeinfo,&NavigationMeshSourceGeometryData3D::typeinfo
                              ,0);
      if (pOVar3 != pOVar5) {
        local_70 = pOVar5;
        if (pOVar5 != (Object *)0x0) {
          cVar4 = RefCounted::reference();
          if (cVar4 == '\0') {
            local_70 = (Object *)0x0;
          }
        }
        if (pOVar3 != (Object *)0x0) goto LAB_001043dd;
      }
    }
  }
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_58,*(Object **)(*(long *)param_3 + 0x10));
  local_68 = (Object *)0x0;
  pOVar5 = (Object *)Variant::get_validated_object();
  pOVar3 = local_68;
  if (pOVar5 != local_68) {
    if (pOVar5 == (Object *)0x0) {
      if (local_68 != (Object *)0x0) {
        local_68 = (Object *)0x0;
LAB_00104473:
        cVar4 = RefCounted::unreference();
        if (cVar4 != '\0') {
          cVar4 = predelete_handler(pOVar3);
          if (cVar4 != '\0') {
            (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
            Memory::free_static(pOVar3,false);
          }
        }
      }
    }
    else {
      pOVar5 = (Object *)__dynamic_cast(pOVar5,&Object::typeinfo,&NavigationMesh::typeinfo,0);
      if (pOVar3 != pOVar5) {
        local_68 = pOVar5;
        if (pOVar5 != (Object *)0x0) {
          cVar4 = RefCounted::reference();
          if (cVar4 == '\0') {
            local_68 = (Object *)0x0;
          }
        }
        if (pOVar3 != (Object *)0x0) goto LAB_00104473;
      }
    }
  }
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  (*pcVar7)((long *)((long)param_2 + lVar1),(StringName *)&local_68,&local_70,lVar2 + 8);
  if (local_68 != (Object *)0x0) {
    cVar4 = RefCounted::unreference();
    pOVar3 = local_68;
    if (cVar4 != '\0') {
      cVar4 = predelete_handler(local_68);
      if (cVar4 != '\0') {
        (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
        Memory::free_static(pOVar3,false);
      }
    }
  }
  if (local_70 != (Object *)0x0) {
    cVar4 = RefCounted::unreference();
    pOVar3 = local_70;
    if (cVar4 != '\0') {
      cVar4 = predelete_handler(local_70);
      if (cVar4 != '\0') {
        (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
        Memory::free_static(pOVar3,false);
      }
    }
  }
LAB_001044d0:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Ref<NavigationMesh>, Ref<NavigationMeshSourceGeometryData3D> const&, Callable
   const&>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindT<Ref<NavigationMesh>,Ref<NavigationMeshSourceGeometryData3D>const&,Callable_const&>
         ::call(Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  Variant *pVVar2;
  code *pcVar3;
  undefined8 uVar4;
  Object *pOVar5;
  char cVar6;
  undefined4 uVar7;
  long lVar8;
  Object *pOVar9;
  long *plVar10;
  int iVar11;
  uint uVar12;
  Variant *pVVar13;
  undefined4 in_register_00000014;
  long *plVar14;
  long lVar15;
  uint in_R8D;
  undefined4 *in_R9;
  Variant *pVVar16;
  long in_FS_OFFSET;
  Object *local_78;
  Object *local_70;
  char *local_68;
  undefined8 local_60;
  undefined4 *local_58 [3];
  long local_40;
  
  plVar14 = (long *)CONCAT44(in_register_00000014,param_3);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (((plVar14 != (long *)0x0) && (plVar14[1] != 0)) && (*(char *)(plVar14[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_68,(StringName *)(param_2 + 3));
    if (plVar14[1] == 0) {
      plVar10 = (long *)plVar14[0x23];
      if (plVar10 == (long *)0x0) {
        plVar10 = (long *)(**(code **)(*plVar14 + 0x40))();
      }
    }
    else {
      plVar10 = (long *)(plVar14[1] + 0x20);
    }
    if (local_68 == (char *)*plVar10) {
      if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_68 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_70 = (Object *)0x0;
      local_60 = 0x35;
      String::parse_latin1((StrRange *)&local_70);
      vformat<StringName>((StringName *)&local_68,(StrRange *)&local_70,&local_78);
      _err_print_error(&_LC28,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_68,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      if ((StringName::configured != '\0') && (local_78 != (Object *)0x0)) {
        StringName::unref();
      }
      goto LAB_00104a12;
    }
    if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar16 = param_2[0xb];
  pVVar1 = param_2[0xc];
  uVar7 = 3;
  if (in_R8D < 4) {
    pVVar2 = param_2[5];
    if (pVVar2 == (Variant *)0x0) {
      iVar11 = 0;
      lVar15 = 0;
    }
    else {
      lVar15 = *(long *)(pVVar2 + -8);
      iVar11 = (int)lVar15;
    }
    if ((int)(3 - in_R8D) <= iVar11) {
      lVar8 = 0;
      do {
        if ((int)lVar8 < (int)in_R8D) {
          pVVar13 = *(Variant **)(param_4 + lVar8 * 8);
        }
        else {
          uVar12 = iVar11 + -3 + (int)lVar8;
          if (lVar15 <= (int)uVar12) {
            _err_print_index_error
                      ("get","./core/templates/cowdata.h",0xdb,(long)(int)uVar12,lVar15,"p_index",
                       "size()","",false,true);
            _err_flush_stdout();
                    /* WARNING: Does not return */
            pcVar3 = (code *)invalidInstructionException();
            (*pcVar3)();
          }
          pVVar13 = pVVar2 + (ulong)uVar12 * 0x18;
        }
        local_58[lVar8] = (undefined4 *)pVVar13;
        lVar8 = lVar8 + 1;
      } while (lVar8 != 3);
      *in_R9 = 0;
      if (((ulong)pVVar16 & 1) != 0) {
        pVVar16 = *(Variant **)(pVVar16 + *(long *)((long)plVar14 + (long)pVVar1) + -1);
      }
      cVar6 = Variant::can_convert_strict(*local_58[2],0x19);
      uVar4 = _LC38;
      if (cVar6 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = uVar4;
      }
      Variant::operator_cast_to_Callable((Variant *)&local_68);
      cVar6 = Variant::can_convert_strict(*local_58[1]);
      uVar4 = _LC33;
      if (cVar6 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = uVar4;
      }
      local_78 = (Object *)0x0;
      pOVar9 = (Object *)Variant::get_validated_object();
      pOVar5 = local_78;
      if (pOVar9 != local_78) {
        if (pOVar9 == (Object *)0x0) {
          if (local_78 != (Object *)0x0) {
            local_78 = (Object *)0x0;
LAB_00104903:
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
          pOVar9 = (Object *)
                   __dynamic_cast(pOVar9,&Object::typeinfo,
                                  &NavigationMeshSourceGeometryData3D::typeinfo,0);
          if (pOVar5 != pOVar9) {
            local_78 = pOVar9;
            if (pOVar9 != (Object *)0x0) {
              cVar6 = RefCounted::reference();
              if (cVar6 == '\0') {
                local_78 = (Object *)0x0;
              }
            }
            if (pOVar5 != (Object *)0x0) goto LAB_00104903;
          }
        }
      }
      cVar6 = Variant::can_convert_strict(*local_58[0]);
      uVar4 = _LC34;
      if (cVar6 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = uVar4;
      }
      local_70 = (Object *)0x0;
      pOVar9 = (Object *)Variant::get_validated_object();
      pOVar5 = local_70;
      if (pOVar9 != local_70) {
        if (pOVar9 == (Object *)0x0) {
          if (local_70 != (Object *)0x0) {
            local_70 = (Object *)0x0;
LAB_0010499d:
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
          pOVar9 = (Object *)__dynamic_cast(pOVar9,&Object::typeinfo,&NavigationMesh::typeinfo,0);
          if (pOVar5 != pOVar9) {
            local_70 = pOVar9;
            if (pOVar9 != (Object *)0x0) {
              cVar6 = RefCounted::reference();
              if (cVar6 == '\0') {
                local_70 = (Object *)0x0;
              }
            }
            if (pOVar5 != (Object *)0x0) goto LAB_0010499d;
          }
        }
      }
      (*(code *)pVVar16)((Variant *)((long)plVar14 + (long)pVVar1),&local_70,&local_78,
                         (Variant *)&local_68);
      if (local_70 != (Object *)0x0) {
        cVar6 = RefCounted::unreference();
        pOVar5 = local_70;
        if (cVar6 != '\0') {
          cVar6 = predelete_handler(local_70);
          if (cVar6 != '\0') {
            (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
            Memory::free_static(pOVar5,false);
          }
        }
      }
      if (local_78 != (Object *)0x0) {
        cVar6 = RefCounted::unreference();
        pOVar5 = local_78;
        if (cVar6 != '\0') {
          cVar6 = predelete_handler(local_78);
          if (cVar6 != '\0') {
            (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
            Memory::free_static(pOVar5,false);
          }
        }
      }
      Callable::~Callable((Callable *)&local_68);
      goto LAB_00104a12;
    }
    uVar7 = 4;
  }
  *in_R9 = uVar7;
  in_R9[2] = 3;
LAB_00104a12:
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_get_argument_type_info_helper<Ref<NavigationMesh> >(int, int&, PropertyInfo&) */

void call_get_argument_type_info_helper<Ref<NavigationMesh>>
               (int param_1,int *param_2,PropertyInfo *param_3)

{
  long lVar1;
  int iVar2;
  long in_FS_OFFSET;
  undefined8 local_98;
  undefined8 local_90;
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
  iVar2 = *param_2;
  if (iVar2 == param_1) {
    local_88 = 0;
    local_78 = "NavigationMesh";
    local_90 = 0;
    local_70 = 0xe;
    String::parse_latin1((StrRange *)&local_90);
    local_98 = 0;
    local_78 = (char *)CONCAT44(local_78._4_4_,0x18);
    local_70 = 0;
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)&local_98);
    local_68 = 0;
    local_60 = 0x11;
    local_58 = 0;
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 6;
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
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
    if ((StringName::configured != '\0') && (local_88 != 0)) {
      StringName::unref();
    }
    *(undefined4 *)param_3 = local_78._0_4_;
    if (*(long *)(param_3 + 8) != local_70) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(param_3 + 8));
      lVar1 = local_70;
      local_70 = 0;
      *(long *)(param_3 + 8) = lVar1;
    }
    if (*(long *)(param_3 + 0x10) != local_68) {
      StringName::unref();
      lVar1 = local_68;
      local_68 = 0;
      *(long *)(param_3 + 0x10) = lVar1;
    }
    *(int *)(param_3 + 0x18) = local_60;
    if (*(long *)(param_3 + 0x20) != local_58) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(param_3 + 0x20));
      lVar1 = local_58;
      local_58 = 0;
      *(long *)(param_3 + 0x20) = lVar1;
    }
    *(undefined4 *)(param_3 + 0x28) = local_50;
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
    if ((StringName::configured != '\0') && (local_68 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
    iVar2 = *param_2;
  }
  *param_2 = iVar2 + 1;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Ref<NavigationMesh> >::_gen_argument_type_info(int) const */

PropertyInfo * MethodBindT<Ref<NavigationMesh>>::_gen_argument_type_info(int param_1)

{
  int in_EDX;
  undefined4 in_register_0000003c;
  PropertyInfo *pPVar1;
  long in_FS_OFFSET;
  int local_14;
  long local_10;
  
  pPVar1 = (PropertyInfo *)CONCAT44(in_register_0000003c,param_1);
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)pPVar1 = 0;
  *(undefined4 *)(pPVar1 + 0x18) = 0;
  *(undefined8 *)(pPVar1 + 0x20) = 0;
  *(undefined4 *)(pPVar1 + 0x28) = 6;
  *(undefined1 (*) [16])(pPVar1 + 8) = (undefined1  [16])0x0;
  local_14 = 0;
  call_get_argument_type_info_helper<Ref<NavigationMesh>>(in_EDX,&local_14,pPVar1);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pPVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_get_argument_type_info_helper<Callable const&>(int, int&, PropertyInfo&) */

void call_get_argument_type_info_helper<Callable_const&>
               (int param_1,int *param_2,PropertyInfo *param_3)

{
  long lVar1;
  int iVar2;
  long in_FS_OFFSET;
  undefined8 local_98;
  undefined8 local_90;
  long local_88;
  long local_80;
  undefined *local_78;
  long local_70;
  long local_68;
  int local_60;
  long local_58;
  undefined4 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar2 = *param_2;
  if (iVar2 == param_1) {
    local_88 = 0;
    local_78 = &_LC5;
    local_90 = 0;
    local_70 = 0;
    String::parse_latin1((StrRange *)&local_90);
    local_98 = 0;
    local_78 = (undefined *)CONCAT44(local_78._4_4_,0x19);
    local_70 = 0;
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)&local_98);
    local_68 = 0;
    local_60 = 0;
    local_58 = 0;
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 6;
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
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
    if ((StringName::configured != '\0') && (local_88 != 0)) {
      StringName::unref();
    }
    *(undefined4 *)param_3 = local_78._0_4_;
    if (*(long *)(param_3 + 8) != local_70) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(param_3 + 8));
      lVar1 = local_70;
      local_70 = 0;
      *(long *)(param_3 + 8) = lVar1;
    }
    if (*(long *)(param_3 + 0x10) != local_68) {
      StringName::unref();
      lVar1 = local_68;
      local_68 = 0;
      *(long *)(param_3 + 0x10) = lVar1;
    }
    *(int *)(param_3 + 0x18) = local_60;
    if (*(long *)(param_3 + 0x20) != local_58) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(param_3 + 0x20));
      lVar1 = local_58;
      local_58 = 0;
      *(long *)(param_3 + 0x20) = lVar1;
    }
    *(undefined4 *)(param_3 + 0x28) = local_50;
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
    if ((StringName::configured != '\0') && (local_68 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
    iVar2 = *param_2;
  }
  *param_2 = iVar2 + 1;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_get_argument_type_info<Ref<NavigationMesh>, Ref<NavigationMeshSourceGeometryData3D>
   const&, Callable const&>(int, PropertyInfo&) */

void call_get_argument_type_info<Ref<NavigationMesh>,Ref<NavigationMeshSourceGeometryData3D>const&,Callable_const&>
               (int param_1,PropertyInfo *param_2)

{
  int iVar1;
  long lVar2;
  long in_FS_OFFSET;
  int local_9c;
  undefined8 local_98;
  undefined8 local_90;
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
  local_9c = 0;
  call_get_argument_type_info_helper<Ref<NavigationMesh>>(param_1,&local_9c,param_2);
  iVar1 = local_9c;
  if (param_1 == local_9c) {
    local_88 = 0;
    local_78 = "NavigationMeshSourceGeometryData3D";
    local_90 = 0;
    local_70 = 0x22;
    String::parse_latin1((StrRange *)&local_90);
    local_98 = 0;
    local_78 = (char *)CONCAT44(local_78._4_4_,0x18);
    local_70 = 0;
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)&local_98);
    local_68 = 0;
    local_60 = 0x11;
    local_58 = 0;
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 6;
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
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
    if ((StringName::configured != '\0') && (local_88 != 0)) {
      StringName::unref();
    }
    *(undefined4 *)param_2 = local_78._0_4_;
    if (*(long *)(param_2 + 8) != local_70) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(param_2 + 8));
      lVar2 = local_70;
      local_70 = 0;
      *(long *)(param_2 + 8) = lVar2;
    }
    if (*(long *)(param_2 + 0x10) != local_68) {
      StringName::unref();
      lVar2 = local_68;
      local_68 = 0;
      *(long *)(param_2 + 0x10) = lVar2;
    }
    *(int *)(param_2 + 0x18) = local_60;
    if (*(long *)(param_2 + 0x20) != local_58) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(param_2 + 0x20));
      lVar2 = local_58;
      local_58 = 0;
      *(long *)(param_2 + 0x20) = lVar2;
    }
    *(undefined4 *)(param_2 + 0x28) = local_50;
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
    if ((StringName::configured != '\0') && (local_68 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  }
  local_9c = iVar1 + 1;
  call_get_argument_type_info_helper<Callable_const&>(param_1,&local_9c,param_2);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Ref<NavigationMesh>, Ref<NavigationMeshSourceGeometryData3D> const&, Callable
   const&>::_gen_argument_type_info(int) const */

PropertyInfo *
MethodBindT<Ref<NavigationMesh>,Ref<NavigationMeshSourceGeometryData3D>const&,Callable_const&>::
_gen_argument_type_info(int param_1)

{
  int in_EDX;
  undefined4 in_register_0000003c;
  PropertyInfo *pPVar1;
  
  pPVar1 = (PropertyInfo *)CONCAT44(in_register_0000003c,param_1);
  *(undefined4 *)pPVar1 = 0;
  *(undefined4 *)(pPVar1 + 0x18) = 0;
  *(undefined8 *)(pPVar1 + 0x20) = 0;
  *(undefined4 *)(pPVar1 + 0x28) = 6;
  *(undefined1 (*) [16])(pPVar1 + 8) = (undefined1  [16])0x0;
  call_get_argument_type_info<Ref<NavigationMesh>,Ref<NavigationMeshSourceGeometryData3D>const&,Callable_const&>
            (in_EDX,pPVar1);
  return pPVar1;
}



/* void call_get_argument_type_info_helper<Ref<NavigationMesh> const&>(int, int&, PropertyInfo&) */

void call_get_argument_type_info_helper<Ref<NavigationMesh>const&>
               (int param_1,int *param_2,PropertyInfo *param_3)

{
  long lVar1;
  int iVar2;
  long in_FS_OFFSET;
  undefined8 local_98;
  undefined8 local_90;
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
  iVar2 = *param_2;
  if (iVar2 == param_1) {
    local_88 = 0;
    local_78 = "NavigationMesh";
    local_90 = 0;
    local_70 = 0xe;
    String::parse_latin1((StrRange *)&local_90);
    local_98 = 0;
    local_78 = (char *)CONCAT44(local_78._4_4_,0x18);
    local_70 = 0;
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)&local_98);
    local_68 = 0;
    local_60 = 0x11;
    local_58 = 0;
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 6;
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
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
    if ((StringName::configured != '\0') && (local_88 != 0)) {
      StringName::unref();
    }
    *(undefined4 *)param_3 = local_78._0_4_;
    if (*(long *)(param_3 + 8) != local_70) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(param_3 + 8));
      lVar1 = local_70;
      local_70 = 0;
      *(long *)(param_3 + 8) = lVar1;
    }
    if (*(long *)(param_3 + 0x10) != local_68) {
      StringName::unref();
      lVar1 = local_68;
      local_68 = 0;
      *(long *)(param_3 + 0x10) = lVar1;
    }
    *(int *)(param_3 + 0x18) = local_60;
    if (*(long *)(param_3 + 0x20) != local_58) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(param_3 + 0x20));
      lVar1 = local_58;
      local_58 = 0;
      *(long *)(param_3 + 0x20) = lVar1;
    }
    *(undefined4 *)(param_3 + 0x28) = local_50;
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
    if ((StringName::configured != '\0') && (local_68 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
    iVar2 = *param_2;
  }
  *param_2 = iVar2 + 1;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_get_argument_type_info_helper<Node*>(int, int&, PropertyInfo&) */

void call_get_argument_type_info_helper<Node*>(int param_1,int *param_2,PropertyInfo *param_3)

{
  long lVar1;
  int iVar2;
  long in_FS_OFFSET;
  undefined8 local_78;
  long local_70;
  undefined *local_68;
  long local_60;
  long local_58;
  undefined4 local_50;
  long local_48;
  undefined4 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  iVar2 = *param_2;
  if (iVar2 == param_1) {
    local_78 = 0;
    local_68 = &_LC41;
    local_60 = 4;
    String::parse_latin1((StrRange *)&local_78);
    StringName::StringName((StringName *)&local_70,(String *)&local_78,false);
    local_68 = (undefined *)CONCAT44(local_68._4_4_,0x18);
    local_60 = 0;
    StringName::StringName((StringName *)&local_58,(StringName *)&local_70);
    local_50 = 0;
    local_48 = 0;
    local_40 = 6;
    if ((StringName::configured != '\0') && (local_70 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
    *(undefined4 *)param_3 = local_68._0_4_;
    if (*(long *)(param_3 + 8) != local_60) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(param_3 + 8));
      lVar1 = local_60;
      local_60 = 0;
      *(long *)(param_3 + 8) = lVar1;
    }
    if (*(long *)(param_3 + 0x10) != local_58) {
      StringName::unref();
      lVar1 = local_58;
      local_58 = 0;
      *(long *)(param_3 + 0x10) = lVar1;
    }
    *(undefined4 *)(param_3 + 0x18) = local_50;
    if (*(long *)(param_3 + 0x20) != local_48) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(param_3 + 0x20));
      lVar1 = local_48;
      local_48 = 0;
      *(long *)(param_3 + 0x20) = lVar1;
    }
    *(undefined4 *)(param_3 + 0x28) = local_40;
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
    if ((StringName::configured != '\0') && (local_58 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    iVar2 = *param_2;
  }
  *param_2 = iVar2 + 1;
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Ref<NavigationMesh> const&, Node*>::_gen_argument_type_info(int) const */

PropertyInfo * MethodBindT<Ref<NavigationMesh>const&,Node*>::_gen_argument_type_info(int param_1)

{
  int in_EDX;
  undefined4 in_register_0000003c;
  PropertyInfo *pPVar1;
  long in_FS_OFFSET;
  int local_24;
  long local_20;
  
  pPVar1 = (PropertyInfo *)CONCAT44(in_register_0000003c,param_1);
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)pPVar1 = 0;
  *(undefined4 *)(pPVar1 + 0x18) = 0;
  *(undefined8 *)(pPVar1 + 0x20) = 0;
  *(undefined4 *)(pPVar1 + 0x28) = 6;
  *(undefined1 (*) [16])(pPVar1 + 8) = (undefined1  [16])0x0;
  local_24 = 0;
  call_get_argument_type_info_helper<Ref<NavigationMesh>const&>(in_EDX,&local_24,pPVar1);
  call_get_argument_type_info_helper<Node*>(in_EDX,&local_24,pPVar1);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pPVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_get_argument_type_info<Ref<NavigationMesh> const&,
   Ref<NavigationMeshSourceGeometryData3D>, Node*, Callable const&>(int, PropertyInfo&) */

void call_get_argument_type_info<Ref<NavigationMesh>const&,Ref<NavigationMeshSourceGeometryData3D>,Node*,Callable_const&>
               (int param_1,PropertyInfo *param_2)

{
  int iVar1;
  long lVar2;
  long in_FS_OFFSET;
  int local_9c;
  undefined8 local_98;
  undefined8 local_90;
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
  local_9c = 0;
  call_get_argument_type_info_helper<Ref<NavigationMesh>const&>(param_1,&local_9c,param_2);
  iVar1 = local_9c;
  if (param_1 == local_9c) {
    local_88 = 0;
    local_78 = "NavigationMeshSourceGeometryData3D";
    local_90 = 0;
    local_70 = 0x22;
    String::parse_latin1((StrRange *)&local_90);
    local_98 = 0;
    local_78 = (char *)CONCAT44(local_78._4_4_,0x18);
    local_70 = 0;
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)&local_98);
    local_68 = 0;
    local_60 = 0x11;
    local_58 = 0;
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 6;
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
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
    if ((StringName::configured != '\0') && (local_88 != 0)) {
      StringName::unref();
    }
    *(undefined4 *)param_2 = local_78._0_4_;
    if (*(long *)(param_2 + 8) != local_70) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(param_2 + 8));
      lVar2 = local_70;
      local_70 = 0;
      *(long *)(param_2 + 8) = lVar2;
    }
    if (*(long *)(param_2 + 0x10) != local_68) {
      StringName::unref();
      lVar2 = local_68;
      local_68 = 0;
      *(long *)(param_2 + 0x10) = lVar2;
    }
    *(int *)(param_2 + 0x18) = local_60;
    if (*(long *)(param_2 + 0x20) != local_58) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(param_2 + 0x20));
      lVar2 = local_58;
      local_58 = 0;
      *(long *)(param_2 + 0x20) = lVar2;
    }
    *(undefined4 *)(param_2 + 0x28) = local_50;
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
    if ((StringName::configured != '\0') && (local_68 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  }
  local_9c = iVar1 + 1;
  call_get_argument_type_info_helper<Node*>(param_1,&local_9c,param_2);
  call_get_argument_type_info_helper<Callable_const&>(param_1,&local_9c,param_2);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Ref<NavigationMesh> const&, Ref<NavigationMeshSourceGeometryData3D>, Node*, Callable
   const&>::_gen_argument_type_info(int) const */

PropertyInfo *
MethodBindT<Ref<NavigationMesh>const&,Ref<NavigationMeshSourceGeometryData3D>,Node*,Callable_const&>
::_gen_argument_type_info(int param_1)

{
  int in_EDX;
  undefined4 in_register_0000003c;
  PropertyInfo *pPVar1;
  
  pPVar1 = (PropertyInfo *)CONCAT44(in_register_0000003c,param_1);
  *(undefined4 *)pPVar1 = 0;
  *(undefined4 *)(pPVar1 + 0x18) = 0;
  *(undefined8 *)(pPVar1 + 0x20) = 0;
  *(undefined4 *)(pPVar1 + 0x28) = 6;
  *(undefined1 (*) [16])(pPVar1 + 8) = (undefined1  [16])0x0;
  call_get_argument_type_info<Ref<NavigationMesh>const&,Ref<NavigationMeshSourceGeometryData3D>,Node*,Callable_const&>
            (in_EDX,pPVar1);
  return pPVar1;
}



/* Ref<NavigationMesh>::unref() */

void __thiscall Ref<NavigationMesh>::unref(Ref<NavigationMesh> *this)

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



/* MethodBindT<Ref<NavigationMesh> >::call(Object*, Variant const**, int, Callable::CallError&)
   const */

Object * MethodBindT<Ref<NavigationMesh>>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  long lVar2;
  char *pcVar3;
  code *pcVar4;
  undefined8 uVar5;
  char cVar6;
  undefined4 uVar7;
  char *pcVar8;
  long *plVar9;
  long lVar10;
  undefined4 in_register_00000014;
  long *plVar11;
  uint in_R8D;
  undefined4 *in_R9;
  Variant *pVVar12;
  Variant *pVVar13;
  long in_FS_OFFSET;
  long local_58;
  char *local_50;
  char *local_48;
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
    if (local_48 == (char *)*plVar9) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = (char *)0x0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error(&_LC28,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00105f68;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar13 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (1 < in_R8D) {
    uVar7 = 3;
LAB_00105f5d:
    *in_R9 = uVar7;
    in_R9[2] = 1;
    goto LAB_00105f68;
  }
  pVVar12 = param_2[5];
  if (pVVar12 == (Variant *)0x0) {
    if (in_R8D != 1) goto LAB_00105fc0;
LAB_00105fb0:
    pVVar12 = *(Variant **)param_4;
  }
  else {
    lVar2 = *(long *)(pVVar12 + -8);
    if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_00105fc0:
      uVar7 = 4;
      goto LAB_00105f5d;
    }
    if (in_R8D == 1) goto LAB_00105fb0;
    lVar10 = (long)((int)lVar2 + -1);
    if (lVar2 <= lVar10) {
      _err_print_index_error
                ("get","./core/templates/cowdata.h",0xdb,lVar10,lVar2,"p_index","size()","",false,
                 true);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar4 = (code *)invalidInstructionException();
      (*pcVar4)();
    }
    pVVar12 = pVVar12 + lVar10 * 0x18;
  }
  *in_R9 = 0;
  if (((ulong)pVVar13 & 1) != 0) {
    pVVar13 = *(Variant **)(pVVar13 + *(long *)((long)plVar11 + (long)pVVar1) + -1);
  }
  cVar6 = Variant::can_convert_strict(*(undefined4 *)pVVar12,0x18);
  uVar5 = _LC34;
  if (cVar6 == '\0') {
    *in_R9 = 2;
    *(undefined8 *)(in_R9 + 1) = uVar5;
  }
  local_50 = (char *)0x0;
  pcVar8 = (char *)Variant::get_validated_object();
  pcVar3 = local_50;
  if (pcVar8 != local_50) {
    if (pcVar8 == (char *)0x0) {
      if (local_50 != (char *)0x0) {
        local_50 = (char *)0x0;
        local_48 = pcVar3;
        goto LAB_00105f2f;
      }
    }
    else {
      pcVar8 = (char *)__dynamic_cast(pcVar8,&Object::typeinfo,&NavigationMesh::typeinfo,0);
      if (pcVar3 != pcVar8) {
        local_48 = pcVar3;
        local_50 = pcVar8;
        if ((pcVar8 != (char *)0x0) && (cVar6 = RefCounted::reference(), cVar6 == '\0')) {
          local_50 = (char *)0x0;
        }
LAB_00105f2f:
        Ref<NavigationMesh>::unref((Ref<NavigationMesh> *)&local_48);
      }
    }
  }
  (*(code *)pVVar13)((Variant *)((long)plVar11 + (long)pVVar1),(Ref<NavigationMesh> *)&local_50);
  Ref<NavigationMesh>::unref((Ref<NavigationMesh> *)&local_50);
LAB_00105f68:
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<Ref<NavigationMesh>, Ref<NavigationMeshSourceGeometryData3D> const&, Callable
   const&>::~MethodBindT() */

void __thiscall
MethodBindT<Ref<NavigationMesh>,Ref<NavigationMeshSourceGeometryData3D>const&,Callable_const&>::
~MethodBindT(MethodBindT<Ref<NavigationMesh>,Ref<NavigationMeshSourceGeometryData3D>const&,Callable_const&>
             *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<Ref<NavigationMesh> const&, Ref<NavigationMeshSourceGeometryData3D>, Node*, Callable
   const&>::~MethodBindT() */

void __thiscall
MethodBindT<Ref<NavigationMesh>const&,Ref<NavigationMeshSourceGeometryData3D>,Node*,Callable_const&>
::~MethodBindT(MethodBindT<Ref<NavigationMesh>const&,Ref<NavigationMeshSourceGeometryData3D>,Node*,Callable_const&>
               *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<Ref<NavigationMesh> >::~MethodBindT() */

void __thiscall
MethodBindT<Ref<NavigationMesh>>::~MethodBindT(MethodBindT<Ref<NavigationMesh>> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<Ref<NavigationMesh> const&, Node*>::~MethodBindT() */

void __thiscall
MethodBindT<Ref<NavigationMesh>const&,Node*>::~MethodBindT
          (MethodBindT<Ref<NavigationMesh>const&,Node*> *this)

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



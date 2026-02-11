
/* MeshInstance2D::_edit_use_rect() const */

bool __thiscall MeshInstance2D::_edit_use_rect(MeshInstance2D *this)

{
  return *(long *)(this + 0x580) != 0;
}



/* MeshInstance2D::_edit_get_rect() const */

undefined1  [16] __thiscall MeshInstance2D::_edit_get_rect(MeshInstance2D *this)

{
  undefined1 auVar1 [16];
  long in_FS_OFFSET;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_1c;
  undefined4 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_38 = 0;
  uStack_34 = 0;
  uStack_30 = 0;
  uStack_2c = 0;
  if (*(long **)(this + 0x580) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x580) + 0x230))(&local_28);
    local_38 = local_28;
    uStack_34 = local_24;
    uStack_30 = local_1c;
    uStack_2c = local_18;
  }
  auVar1._4_4_ = uStack_34;
  auVar1._0_4_ = local_38;
  auVar1._8_4_ = uStack_30;
  auVar1._12_4_ = uStack_2c;
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return auVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MeshInstance2D::get_texture() const */

void MeshInstance2D::get_texture(void)

{
  char cVar1;
  long in_RSI;
  long *in_RDI;
  
  *in_RDI = 0;
  if (*(long *)(in_RSI + 0x588) != 0) {
    *in_RDI = *(long *)(in_RSI + 0x588);
    cVar1 = RefCounted::reference();
    if (cVar1 == '\0') {
      *in_RDI = 0;
    }
  }
  return;
}



/* MeshInstance2D::get_mesh() const */

void MeshInstance2D::get_mesh(void)

{
  char cVar1;
  long in_RSI;
  long *in_RDI;
  
  *in_RDI = 0;
  if (*(long *)(in_RSI + 0x580) != 0) {
    *in_RDI = *(long *)(in_RSI + 0x580);
    cVar1 = RefCounted::reference();
    if (cVar1 == '\0') {
      *in_RDI = 0;
    }
  }
  return;
}



/* MeshInstance2D::set_texture(Ref<Texture2D> const&) */

void __thiscall MeshInstance2D::set_texture(MeshInstance2D *this,Ref *param_1)

{
  Object *pOVar1;
  Object *pOVar2;
  long lVar3;
  char cVar4;
  long in_FS_OFFSET;
  
  pOVar1 = *(Object **)param_1;
  pOVar2 = *(Object **)(this + 0x588);
  lVar3 = *(long *)(in_FS_OFFSET + 0x28);
  if (pOVar2 != pOVar1) {
    *(Object **)(this + 0x588) = pOVar1;
    if (pOVar1 != (Object *)0x0) {
      cVar4 = RefCounted::reference();
      if (cVar4 == '\0') {
        *(undefined8 *)(this + 0x588) = 0;
      }
    }
    if (pOVar2 != (Object *)0x0) {
      cVar4 = RefCounted::unreference();
      if (cVar4 != '\0') {
        cVar4 = predelete_handler(pOVar2);
        if (cVar4 != '\0') {
          (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
          Memory::free_static(pOVar2,false);
        }
      }
    }
    CanvasItem::queue_redraw();
    (**(code **)(*(long *)this + 0xd0))(this,SceneStringNames::singleton + 0x1d0,0,0);
    if (Variant::needs_deinit[0] != '\0') {
      Variant::_clear_internal();
    }
  }
  if (lVar3 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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



/* MeshInstance2D::_notification(int) */

void __thiscall MeshInstance2D::_notification(MeshInstance2D *this,int param_1)

{
  long in_FS_OFFSET;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_1 == 0x1e) && (*(long *)(this + 0x580) != 0)) {
    local_20 = 0x3f80000000000000;
    local_28 = 0x3f800000;
    local_18 = 0;
    CanvasItem::draw_mesh
              ((Ref *)this,(Ref *)(this + 0x580),(Transform2D *)(this + 0x588),(Color *)&local_28);
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MeshInstance2D::navmesh_parse_init() */

void MeshInstance2D::navmesh_parse_init(void)

{
  long lVar1;
  CallableCustom *this;
  long *plVar2;
  long in_FS_OFFSET;
  Callable aCStack_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  lVar1 = NavigationServer2D::get_singleton();
  if (lVar1 == 0) {
    if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
      _err_print_error("navmesh_parse_init","scene/2d/mesh_instance_2d.cpp",0x79,
                       "Parameter \"NavigationServer2D::get_singleton()\" is null.",0,0);
      return;
    }
  }
  else if (_navmesh_source_geometry_parser == 0) {
    this = (CallableCustom *)operator_new(0x30,"");
    CallableCustom::CallableCustom(this);
    *(undefined **)(this + 0x20) = &_LC15;
    *(undefined8 *)(this + 0x10) = 0;
    *(undefined ***)this = &PTR_hash_0010b4a8;
    *(code **)(this + 0x28) = navmesh_parse_source_geometry;
    CallableCustomMethodPointerBase::_setup((uint *)this,(int)this + 0x28);
    *(char **)(this + 0x20) = "MeshInstance2D::navmesh_parse_source_geometry";
    Callable::Callable(aCStack_38,this);
    Callable::operator=((Callable *)_navmesh_source_geometry_parsing_callback,aCStack_38);
    Callable::~Callable(aCStack_38);
    plVar2 = (long *)NavigationServer2D::get_singleton();
    _navmesh_source_geometry_parser = (**(code **)(*plVar2 + 0x548))(plVar2);
    plVar2 = (long *)NavigationServer2D::get_singleton();
    if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0010068e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x550))
                (plVar2,_navmesh_source_geometry_parser,_navmesh_source_geometry_parsing_callback);
      return;
    }
  }
  else if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MeshInstance2D::MeshInstance2D() */

void __thiscall MeshInstance2D::MeshInstance2D(MeshInstance2D *this)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  CanvasItem::CanvasItem((CanvasItem *)this);
  *(code **)this = predelete_handler;
  this[0x548] = (MeshInstance2D)0x0;
  *(undefined8 *)(this + 0x56c) = 0x3f80000000000000;
  *(undefined8 *)(this + 0x54c) = 0;
  uVar2 = _UNK_0010b758;
  uVar1 = __LC17;
  *(undefined ***)this = &PTR__initialize_classv_0010b128;
  *(undefined8 *)(this + 0x564) = 0x3f800000;
  *(undefined8 *)(this + 0x554) = uVar1;
  *(undefined8 *)(this + 0x55c) = uVar2;
  *(undefined8 *)(this + 0x574) = 0;
  *(undefined1 (*) [16])(this + 0x580) = (undefined1  [16])0x0;
  return;
}



/* MeshInstance2D::set_mesh(Ref<Mesh> const&) */

void __thiscall MeshInstance2D::set_mesh(MeshInstance2D *this,Ref *param_1)

{
  Callable *pCVar1;
  Callable *pCVar2;
  Object *pOVar3;
  char cVar4;
  Object *pOVar5;
  long in_FS_OFFSET;
  CanvasItem aCStack_48 [24];
  long local_30;
  
  pCVar1 = *(Callable **)(this + 0x580);
  pCVar2 = *(Callable **)param_1;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (pCVar2 == pCVar1) {
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
    goto LAB_0010090b;
  }
  if (pCVar1 == (Callable *)0x0) {
    *(Callable **)(this + 0x580) = pCVar2;
    if (pCVar2 != (Callable *)0x0) {
      cVar4 = RefCounted::reference();
      if (cVar4 != '\0') goto LAB_00100828;
      *(undefined8 *)(this + 0x580) = 0;
    }
  }
  else {
    create_custom_callable_function_pointer<CanvasItem>
              (aCStack_48,(char *)this,(_func_void *)"&CanvasItem::queue_redraw");
    Resource::disconnect_changed(pCVar1);
    Callable::~Callable((Callable *)aCStack_48);
    pOVar3 = *(Object **)param_1;
    pOVar5 = *(Object **)(this + 0x580);
    if (pOVar3 != pOVar5) {
      *(Object **)(this + 0x580) = pOVar3;
      if (pOVar3 == (Object *)0x0) {
LAB_001008db:
        if (pOVar5 == (Object *)0x0) goto LAB_0010087c;
      }
      else {
        cVar4 = RefCounted::reference();
        if (cVar4 == '\0') {
          *(undefined8 *)(this + 0x580) = 0;
          goto LAB_001008db;
        }
        if (pOVar5 == (Object *)0x0) goto LAB_00100828;
      }
      cVar4 = RefCounted::unreference();
      if ((cVar4 != '\0') && (cVar4 = predelete_handler(pOVar5), cVar4 != '\0')) {
        (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
        Memory::free_static(pOVar5,false);
      }
LAB_00100828:
      pOVar5 = *(Object **)(this + 0x580);
    }
    if (pOVar5 != (Object *)0x0) {
      (**(code **)(*(long *)pOVar5 + 0x1c0))(pOVar5);
      pCVar1 = *(Callable **)(this + 0x580);
      create_custom_callable_function_pointer<CanvasItem>
                (aCStack_48,(char *)this,(_func_void *)"&CanvasItem::queue_redraw");
      Resource::connect_changed(pCVar1,(uint)aCStack_48);
      Callable::~Callable((Callable *)aCStack_48);
    }
  }
LAB_0010087c:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    CanvasItem::queue_redraw();
    return;
  }
LAB_0010090b:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MeshInstance2D::_bind_methods() */

void MeshInstance2D::_bind_methods(void)

{
  long lVar1;
  code *pcVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined8 uVar7;
  int *piVar8;
  MethodBind *pMVar9;
  long lVar10;
  long *plVar11;
  int *piVar12;
  long in_FS_OFFSET;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  long local_100;
  long local_f8;
  long local_f0;
  char *local_e8;
  undefined8 local_e0;
  char *local_d8;
  undefined8 local_d0;
  undefined1 local_c8 [16];
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98 [2];
  int *local_88;
  undefined8 local_80;
  long local_70;
  char *local_68;
  undefined8 local_60;
  char **local_58;
  undefined1 local_50 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_60 = 0;
  local_68 = "mesh";
  local_58 = &local_68;
  D_METHODP((char *)&local_d8,(char ***)"set_mesh",(uint)&local_58);
  local_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar9 = create_method_bind<MeshInstance2D,Ref<Mesh>const&>(set_mesh);
  ClassDB::bind_methodfi(1,pMVar9,false,(MethodDefinition *)&local_d8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  uVar7 = local_c8._0_8_;
  if ((long *)local_c8._0_8_ != (long *)0x0) {
    LOCK();
    plVar11 = (long *)(local_c8._0_8_ + -0x10);
    *plVar11 = *plVar11 + -1;
    UNLOCK();
    if (*plVar11 == 0) {
      if ((long *)local_c8._0_8_ == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar1 = *(long *)(local_c8._0_8_ + -8);
      lVar10 = 0;
      auVar3._8_8_ = 0;
      auVar3._0_8_ = local_c8._8_8_;
      local_c8 = auVar3 << 0x40;
      plVar11 = (long *)uVar7;
      if (lVar1 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar11 != 0)) {
            StringName::unref();
          }
          lVar10 = lVar10 + 1;
          plVar11 = plVar11 + 1;
        } while (lVar1 != lVar10);
      }
      Memory::free_static((long *)(uVar7 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_d8 != (char *)0x0)) {
    StringName::unref();
  }
  D_METHODP((char *)&local_d8,(char ***)"get_mesh",0);
  local_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar9 = create_method_bind<MeshInstance2D,Ref<Mesh>>(get_mesh);
  ClassDB::bind_methodfi(1,pMVar9,false,(MethodDefinition *)&local_d8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  uVar7 = local_c8._0_8_;
  if ((long *)local_c8._0_8_ != (long *)0x0) {
    LOCK();
    plVar11 = (long *)(local_c8._0_8_ + -0x10);
    *plVar11 = *plVar11 + -1;
    UNLOCK();
    if (*plVar11 == 0) {
      if ((long *)local_c8._0_8_ == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar1 = *(long *)(local_c8._0_8_ + -8);
      lVar10 = 0;
      auVar4._8_8_ = 0;
      auVar4._0_8_ = local_c8._8_8_;
      local_c8 = auVar4 << 0x40;
      plVar11 = (long *)uVar7;
      if (lVar1 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar11 != 0)) {
            StringName::unref();
          }
          lVar10 = lVar10 + 1;
          plVar11 = plVar11 + 1;
        } while (lVar1 != lVar10);
      }
      Memory::free_static((long *)(uVar7 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_d8 != (char *)0x0)) {
    StringName::unref();
  }
  local_68 = "texture";
  local_60 = 0;
  local_58 = &local_68;
  D_METHODP((char *)&local_d8,(char ***)"set_texture",(uint)&local_58);
  local_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar9 = create_method_bind<MeshInstance2D,Ref<Texture2D>const&>(set_texture);
  ClassDB::bind_methodfi(1,pMVar9,false,(MethodDefinition *)&local_d8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  uVar7 = local_c8._0_8_;
  if ((long *)local_c8._0_8_ != (long *)0x0) {
    LOCK();
    plVar11 = (long *)(local_c8._0_8_ + -0x10);
    *plVar11 = *plVar11 + -1;
    UNLOCK();
    if (*plVar11 == 0) {
      if ((long *)local_c8._0_8_ == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar1 = *(long *)(local_c8._0_8_ + -8);
      lVar10 = 0;
      auVar5._8_8_ = 0;
      auVar5._0_8_ = local_c8._8_8_;
      local_c8 = auVar5 << 0x40;
      plVar11 = (long *)uVar7;
      if (lVar1 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar11 != 0)) {
            StringName::unref();
          }
          lVar10 = lVar10 + 1;
          plVar11 = plVar11 + 1;
        } while (lVar1 != lVar10);
      }
      Memory::free_static((long *)(uVar7 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_d8 != (char *)0x0)) {
    StringName::unref();
  }
  D_METHODP((char *)&local_d8,(char ***)"get_texture",0);
  local_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar9 = create_method_bind<MeshInstance2D,Ref<Texture2D>>(get_texture);
  ClassDB::bind_methodfi(1,pMVar9,false,(MethodDefinition *)&local_d8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  uVar7 = local_c8._0_8_;
  if ((long *)local_c8._0_8_ != (long *)0x0) {
    LOCK();
    plVar11 = (long *)(local_c8._0_8_ + -0x10);
    *plVar11 = *plVar11 + -1;
    UNLOCK();
    if (*plVar11 == 0) {
      if ((long *)local_c8._0_8_ == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar1 = *(long *)(local_c8._0_8_ + -8);
      lVar10 = 0;
      auVar6._8_8_ = 0;
      auVar6._0_8_ = local_c8._8_8_;
      local_c8 = auVar6 << 0x40;
      plVar11 = (long *)uVar7;
      if (lVar1 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar11 != 0)) {
            StringName::unref();
          }
          lVar10 = lVar10 + 1;
          plVar11 = plVar11 + 1;
        } while (lVar1 != lVar10);
      }
      Memory::free_static((long *)(uVar7 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_d8 != (char *)0x0)) {
    StringName::unref();
  }
  local_f0 = 0;
  local_d8 = "texture_changed";
  local_d0 = 0xf;
  String::parse_latin1((StrRange *)&local_f0);
  local_c8 = (undefined1  [16])0x0;
  local_d8 = (char *)0x0;
  local_d0 = 0;
  local_b8 = 0;
  local_b0 = 0;
  local_a8 = 6;
  local_a0 = 1;
  local_98[0] = 0;
  local_88 = (int *)0x0;
  local_80 = 0;
  local_70 = 0;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_d8,(CowData *)&local_f0);
  local_f8 = 0;
  local_e8 = "MeshInstance2D";
  local_e0 = 0xe;
  String::parse_latin1((StrRange *)&local_f8);
  StringName::StringName((StringName *)&local_e8,(String *)&local_f8,false);
  ClassDB::add_signal((StringName *)&local_e8,(MethodInfo *)&local_d8);
  if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
  lVar1 = local_70;
  if (local_70 != 0) {
    LOCK();
    plVar11 = (long *)(local_70 + -0x10);
    *plVar11 = *plVar11 + -1;
    UNLOCK();
    if (*plVar11 == 0) {
      local_70 = 0;
      Memory::free_static((void *)(lVar1 + -0x10),false);
    }
  }
  piVar8 = local_88;
  if (local_88 != (int *)0x0) {
    LOCK();
    plVar11 = (long *)(local_88 + -4);
    *plVar11 = *plVar11 + -1;
    UNLOCK();
    if (*plVar11 == 0) {
      if (local_88 == (int *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar1 = *(long *)(local_88 + -2);
      lVar10 = 0;
      local_88 = (int *)0x0;
      piVar12 = piVar8;
      if (lVar1 != 0) {
        do {
          if (Variant::needs_deinit[*piVar12] != '\0') {
            Variant::_clear_internal();
          }
          lVar10 = lVar10 + 1;
          piVar12 = piVar12 + 6;
        } while (lVar1 != lVar10);
      }
      Memory::free_static(piVar8 + -4,false);
    }
  }
  List<PropertyInfo,DefaultAllocator>::~List((List<PropertyInfo,DefaultAllocator> *)local_98);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_d0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f0);
  _scs_create((char *)&local_f0,true);
  _scs_create((char *)&local_f8,true);
  local_d8 = "Mesh";
  local_100 = 0;
  local_108 = 0;
  local_d0 = 4;
  String::parse_latin1((StrRange *)&local_108);
  local_d8 = "mesh";
  local_110 = 0;
  local_d0 = 4;
  String::parse_latin1((StrRange *)&local_110);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_d8,0x18,(StrRange *)&local_110,0x11,(StrRange *)&local_108,6,
             &local_100);
  local_e8 = "MeshInstance2D";
  local_118 = 0;
  local_e0 = 0xe;
  String::parse_latin1((StrRange *)&local_118);
  StringName::StringName((StringName *)&local_e8,(String *)&local_118,false);
  ClassDB::add_property
            ((StringName *)&local_e8,(PropertyInfo *)&local_d8,(StringName *)&local_f8,
             (StringName *)&local_f0,-1);
  if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_118);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_d8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_110);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
  if ((((StringName::configured != '\0') &&
       ((local_100 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
      ((local_f8 == 0 || (StringName::unref(), StringName::configured != '\0')))) && (local_f0 != 0)
     ) {
    StringName::unref();
  }
  _scs_create((char *)&local_f0,true);
  _scs_create((char *)&local_f8,true);
  local_d8 = "Texture2D";
  local_100 = 0;
  local_108 = 0;
  local_d0 = 9;
  String::parse_latin1((StrRange *)&local_108);
  local_d8 = "texture";
  local_110 = 0;
  local_d0 = 7;
  String::parse_latin1((StrRange *)&local_110);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_d8,0x18,(StrRange *)&local_110,0x11,(StrRange *)&local_108,6,
             &local_100);
  local_e8 = "MeshInstance2D";
  local_118 = 0;
  local_e0 = 0xe;
  String::parse_latin1((StrRange *)&local_118);
  StringName::StringName((StringName *)&local_e8,(String *)&local_118,false);
  ClassDB::add_property
            ((StringName *)&local_e8,(PropertyInfo *)&local_d8,(StringName *)&local_f8,
             (StringName *)&local_f0,-1);
  if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_118);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_d8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_110);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
  if (((StringName::configured != '\0') &&
      ((local_100 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (((local_f8 == 0 || (StringName::unref(), StringName::configured != '\0')) && (local_f0 != 0)))
     ) {
    StringName::unref();
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* CowData<Vector2>::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<Vector2>::_copy_on_write(CowData<Vector2> *this)

{
  long lVar1;
  code *pcVar2;
  undefined8 *puVar3;
  ulong uVar4;
  size_t __n;
  
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
  __n = lVar1 * 8;
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



/* MeshInstance2D::navmesh_parse_source_geometry(Ref<NavigationPolygon> const&,
   Ref<NavigationMeshSourceGeometryData2D>, Node*) */

void MeshInstance2D::navmesh_parse_source_geometry(undefined8 param_1,long *param_2,long param_3)

{
  CowData<Vector2> *this;
  undefined8 uVar1;
  code *pcVar2;
  float fVar3;
  double dVar4;
  double dVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  char cVar8;
  uint uVar9;
  int iVar10;
  long *plVar11;
  ulong uVar12;
  void *pvVar13;
  double *pdVar14;
  long lVar15;
  undefined8 *puVar16;
  long lVar17;
  long *plVar18;
  void *pvVar19;
  undefined1 (*pauVar20) [16];
  double *pdVar21;
  int iVar22;
  int *piVar23;
  double *pdVar24;
  undefined8 *puVar25;
  int *piVar26;
  long in_FS_OFFSET;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  long *local_118;
  Array local_110 [8];
  Variant local_108 [8];
  undefined8 *local_100;
  Variant local_f8 [8];
  int *local_f0;
  double local_e8;
  double dStack_e0;
  undefined1 local_d8 [16];
  undefined1 (*local_c8) [16];
  undefined1 local_b8 [16];
  long local_a8;
  undefined1 local_98 [16];
  double *local_88;
  Transform2D local_78 [32];
  undefined1 local_58 [24];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_3 != 0) &&
      (plVar11 = (long *)__dynamic_cast(param_3,&Object::typeinfo,&typeinfo,0),
      plVar11 != (long *)0x0)) &&
     (uVar9 = NavigationPolygon::get_parsed_geometry_type(), (uVar9 & 0xfffffffd) == 0)) {
    plVar18 = (long *)plVar11[0xb0];
    local_118 = (long *)0x0;
    if (plVar18 != (long *)0x0) {
      local_118 = plVar18;
      cVar8 = RefCounted::reference();
      if (cVar8 == '\0') {
        local_118 = (long *)0x0;
      }
      else {
        iVar22 = 0;
        (**(code **)(*plVar11 + 0x298))(local_58,plVar11);
        Transform2D::operator*(local_78,(Transform2D *)(*param_2 + 0x2c0));
        local_c8 = (undefined1 (*) [16])0x0;
        local_a8 = 0;
        local_d8 = (undefined1  [16])0x0;
        local_b8 = (undefined1  [16])0x0;
        while (iVar10 = (**(code **)(*plVar18 + 0x1c8))(plVar18), iVar22 < iVar10) {
          iVar10 = (**(code **)(*plVar18 + 0x200))(plVar18,iVar22);
          if ((iVar10 == 3) &&
             (uVar12 = (**(code **)(*plVar18 + 0x1f8))(plVar18,iVar22), (uVar12 & 0x2000000) != 0))
          {
            local_88 = (double *)0x0;
            local_98 = (undefined1  [16])0x0;
            uVar12 = (**(code **)(*plVar18 + 0x1f8))(plVar18,iVar22);
            if ((uVar12 & 0x1000) == 0) {
              iVar10 = (**(code **)(*plVar18 + 0x1d0))(plVar18,iVar22);
            }
            else {
              iVar10 = (**(code **)(*plVar18 + 0x1d8))();
            }
            if ((iVar10 != 0) && (iVar10 * -0x55555555 + 0x2aaaaaaaU < 0x55555555)) {
              (**(code **)(*plVar18 + 0x1e0))(local_110,plVar18,iVar22);
              iVar10 = (int)local_110;
              Array::operator[](iVar10);
              Variant::operator_cast_to_Vector(local_108);
              uVar9 = (**(code **)(*plVar18 + 0x1f8))(plVar18,iVar22);
              uVar12 = (ulong)(uVar9 & 0x1000);
              if ((uVar9 & 0x1000) == 0) {
                CowData<Vector2>::_copy_on_write((CowData<Vector2> *)&local_100);
                puVar25 = local_100;
                CowData<Vector2>::_copy_on_write((CowData<Vector2> *)&local_100);
                puVar16 = local_100;
                if (local_100 != (undefined8 *)0x0) {
                  puVar16 = local_100 + local_100[-1];
                }
                if (puVar25 != puVar16) {
                  pdVar14 = (double *)0x0;
                  pdVar21 = (double *)0x0;
                  while( true ) {
                    local_e8 = (double)(float)*puVar25;
                    dStack_e0 = (double)(float)((ulong)*puVar25 >> 0x20);
                    if (pdVar21 == pdVar14) {
                      std::
                      vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>
                      ::_M_realloc_insert<Clipper2Lib::Point<double>const&>
                                ((vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>
                                  *)local_98,pdVar21,&local_e8);
                    }
                    else {
                      *pdVar14 = local_e8;
                      pdVar14[1] = dStack_e0;
                      local_98._8_8_ = pdVar14 + 2;
                    }
                    puVar25 = puVar25 + 1;
                    if (puVar16 == puVar25) break;
                    pdVar14 = (double *)local_98._8_8_;
                    pdVar21 = local_88;
                  }
                  goto LAB_00101738;
                }
                pvVar19 = (void *)0x0;
                if (local_c8 == (undefined1 (*) [16])local_d8._8_8_) goto LAB_00101960;
                *(undefined8 *)*(undefined1 (*) [16])(local_d8._8_8_ + 0x10) = 0;
                pvVar19 = (void *)0x0;
                pvVar13 = (void *)0x0;
                *(undefined1 (*) [16])local_d8._8_8_ = (undefined1  [16])0x0;
                *(undefined8 *)(undefined1 *)local_d8._8_8_ = 0;
                pauVar20 = (undefined1 (*) [16])local_d8._8_8_;
LAB_001017db:
                *(void **)(*pauVar20 + 8) = pvVar13;
                local_d8._8_8_ = pauVar20[1] + 8;
              }
              else {
                Array::operator[](iVar10);
                Variant::operator_cast_to_Vector(local_f8);
                CowData<int>::_copy_on_write((CowData<int> *)&local_f0);
                piVar23 = local_f0;
                CowData<int>::_copy_on_write((CowData<int> *)&local_f0);
                if (local_f0 == (int *)0x0) {
                  piVar26 = (int *)0x0;
                  if (piVar23 == (int *)0x0) goto LAB_00101738;
LAB_001016a6:
                  do {
                    lVar15 = (long)*piVar23;
                    if (lVar15 < 0) {
                      if (local_100 != (undefined8 *)0x0) {
LAB_001018f1:
                        lVar17 = local_100[-1];
                        goto LAB_001018f5;
                      }
LAB_001019d0:
                      lVar17 = 0;
LAB_001018f5:
                      _err_print_index_error
                                ("get","./core/templates/cowdata.h",0xdb,lVar15,lVar17,"p_index",
                                 "size()","",false,true);
                      _err_flush_stdout();
                    /* WARNING: Does not return */
                      pcVar2 = (code *)invalidInstructionException();
                      (*pcVar2)();
                    }
                    if (local_100 == (undefined8 *)0x0) goto LAB_001019d0;
                    if ((long)local_100[-1] <= lVar15) goto LAB_001018f1;
                    local_e8 = (double)(float)local_100[lVar15];
                    dStack_e0 = (double)(float)((ulong)local_100[lVar15] >> 0x20);
                    if ((double *)local_98._8_8_ == local_88) {
                      std::
                      vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>
                      ::_M_realloc_insert<Clipper2Lib::Point<double>const&>
                                ((vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>
                                  *)local_98,local_98._8_8_,&local_e8);
                    }
                    else {
                      *(double *)local_98._8_8_ = local_e8;
                      *(double *)(local_98._8_8_ + 8) = dStack_e0;
                      local_98._8_8_ = (double *)(local_98._8_8_ + 0x10);
                    }
                    piVar23 = piVar23 + 1;
                  } while (piVar26 != piVar23);
                  if (local_f0 == (int *)0x0) goto LAB_00101738;
                }
                else {
                  piVar26 = local_f0 + *(long *)(local_f0 + -2);
                  if (piVar23 != piVar26) goto LAB_001016a6;
                }
                piVar23 = local_f0;
                LOCK();
                plVar11 = (long *)(local_f0 + -4);
                *plVar11 = *plVar11 + -1;
                UNLOCK();
                if (*plVar11 == 0) {
                  local_f0 = (int *)0x0;
                  Memory::free_static(piVar23 + -4,false);
                }
LAB_00101738:
                pauVar20 = (undefined1 (*) [16])local_d8._8_8_;
                pvVar19 = (void *)local_98._0_8_;
                if ((undefined1 (*) [16])local_d8._8_8_ != local_c8) {
                  uVar7 = local_98._8_8_;
                  *(undefined8 *)*(undefined1 (*) [16])(local_d8._8_8_ + 0x10) = 0;
                  *(undefined1 (*) [16])local_d8._8_8_ = (undefined1  [16])0x0;
                  uVar12 = local_98._8_8_ - local_98._0_8_;
                  if (uVar12 == 0) {
                    lVar15 = 0;
                    pvVar13 = (void *)0x0;
                    uVar12 = (long)local_88 - local_98._0_8_;
                  }
                  else {
                    if (0x7ffffffffffffff0 < uVar12) {
                      if ((long)uVar12 < 0) {
                        std::__throw_bad_array_new_length();
                      }
                      std::__throw_bad_alloc();
                      goto LAB_00101d97;
                    }
                    pvVar13 = operator_new(uVar12);
                    lVar15 = (long)pvVar13 + uVar12;
                    uVar12 = (long)local_88 - (long)pvVar19;
                  }
                  *(long *)*(undefined1 (*) [16])((undefined8)pauVar20 + 1) = lVar15;
                  lVar15 = 0;
                  *(void **)*pauVar20 = pvVar13;
                  if ((void *)uVar7 != pvVar19) {
                    do {
                      uVar6 = ((undefined8 *)((long)pvVar19 + lVar15))[1];
                      *(undefined8 *)((long)pvVar13 + lVar15) =
                           *(undefined8 *)((long)pvVar19 + lVar15);
                      ((undefined8 *)((long)pvVar13 + lVar15))[1] = uVar6;
                      lVar15 = lVar15 + 0x10;
                    } while (lVar15 != uVar7 - (long)pvVar19);
                    pvVar13 = (void *)((long)pvVar13 + lVar15);
                  }
                  goto LAB_001017db;
                }
                uVar12 = (long)local_88 - local_98._0_8_;
LAB_00101960:
                std::
                vector<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>,std::allocator<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>>>
                ::
                _M_realloc_insert<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>const&>
                          ((vector<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>,std::allocator<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>>>
                            *)local_d8,local_d8._8_8_,local_98);
              }
              CowData<Vector2>::_unref((CowData<Vector2> *)&local_100);
              Array::~Array(local_110);
              if (pvVar19 != (void *)0x0) {
                operator_delete(pvVar19,uVar12);
              }
              goto LAB_00101810;
            }
            iVar22 = iVar22 + 1;
            _err_print_error("navmesh_parse_source_geometry","scene/2d/mesh_instance_2d.cpp",0xab,
                             "Condition \"(index_count == 0 || (index_count % 3) != 0)\" is true. Continuing."
                             ,0,0);
          }
          else {
LAB_00101810:
            iVar22 = iVar22 + 1;
          }
        }
        Clipper2Lib::BooleanOp((Clipper2Lib *)local_98,2,1,local_d8,local_b8,2);
        pdVar14 = local_88;
        uVar7 = local_98._0_8_;
        uVar6 = local_98._8_8_;
        plVar11 = (long *)local_98._0_8_;
        if (local_98._0_8_ != local_98._8_8_) {
          do {
            pdVar21 = (double *)plVar11[1];
            pdVar24 = (double *)*plVar11;
            lVar15 = 0;
            this = (CowData<Vector2> *)(local_98 + 8);
            local_98._8_8_ = 0;
            if (pdVar21 != pdVar24) {
              do {
                dVar4 = *pdVar24;
                dVar5 = pdVar24[1];
                if (lVar15 == 0) {
                  lVar15 = 1;
                }
                else {
                  lVar15 = *(long *)(lVar15 + -8) + 1;
                }
                iVar22 = CowData<Vector2>::resize<false>(this,lVar15);
                if (iVar22 == 0) {
                  if (local_98._8_8_ == 0) {
                    lVar17 = -1;
                    lVar15 = 0;
                  }
                  else {
                    lVar15 = *(long *)(local_98._8_8_ + -8);
                    lVar17 = lVar15 + -1;
                    if (-1 < lVar17) {
                      CowData<Vector2>::_copy_on_write(this);
                      *(ulong *)(local_98._8_8_ + lVar17 * 8) = CONCAT44((float)dVar5,(float)dVar4);
                      goto LAB_00101afa;
                    }
                  }
                  _err_print_index_error
                            ("set","./core/templates/cowdata.h",0xcf,lVar17,lVar15,"p_index",
                             "size()","",false,false);
                }
                else {
                  _err_print_error("push_back","./core/templates/vector.h",0x142,
                                   "Condition \"err\" is true. Returning: true",0,0);
                }
LAB_00101afa:
                pdVar24 = pdVar24 + 2;
                lVar15 = local_98._8_8_;
              } while (pdVar21 != pdVar24);
              if (local_98._8_8_ != 0) {
                lVar17 = 0;
                do {
                  if (*(long *)(lVar15 + -8) <= lVar17) break;
                  uVar1 = *(undefined8 *)(lVar15 + lVar17 * 8);
                  fVar27 = (float)uVar1;
                  fVar28 = (float)((ulong)uVar1 >> 0x20);
                  fVar30 = (float)local_78._8_8_;
                  fVar32 = SUB84(local_78._8_8_,4);
                  fVar31 = (float)local_78._0_8_;
                  fVar33 = SUB84(local_78._0_8_,4);
                  fVar29 = (float)local_78._16_8_;
                  fVar3 = SUB84(local_78._16_8_,4);
                  CowData<Vector2>::_copy_on_write(this);
                  *(ulong *)(local_98._8_8_ + lVar17 * 8) =
                       CONCAT44(fVar3 + fVar27 * fVar33 + fVar28 * fVar32,
                                fVar29 + fVar27 * fVar31 + fVar28 * fVar30);
                  lVar17 = lVar17 + 1;
                  lVar15 = local_98._8_8_;
                } while (local_98._8_8_ != 0);
              }
            }
            NavigationMeshSourceGeometryData2D::add_obstruction_outline((Vector *)*param_2);
            uVar1 = local_98._8_8_;
            if (local_98._8_8_ != 0) {
              LOCK();
              plVar18 = (long *)(local_98._8_8_ + -0x10);
              *plVar18 = *plVar18 + -1;
              UNLOCK();
              if (*plVar18 == 0) {
                local_98._8_8_ = 0;
                Memory::free_static((void *)(uVar1 + -0x10),false);
              }
            }
            plVar11 = plVar11 + 3;
            plVar18 = (long *)uVar7;
          } while ((long *)uVar6 != plVar11);
          do {
            pvVar19 = (void *)*plVar18;
            if (pvVar19 != (void *)0x0) {
              operator_delete(pvVar19,plVar18[2] - (long)pvVar19);
            }
            plVar18 = plVar18 + 3;
          } while ((long *)uVar6 != plVar18);
        }
        if ((long *)uVar7 != (long *)0x0) {
          operator_delete((void *)uVar7,(long)pdVar14 - uVar7);
        }
        uVar7 = local_b8._0_8_;
        uVar6 = local_b8._8_8_;
        for (puVar16 = (undefined8 *)local_b8._0_8_; (undefined8 *)uVar6 != puVar16;
            puVar16 = puVar16 + 3) {
          pvVar19 = (void *)*puVar16;
          if (pvVar19 != (void *)0x0) {
            operator_delete(pvVar19,puVar16[2] - (long)pvVar19);
          }
        }
        if ((undefined8 *)uVar7 != (undefined8 *)0x0) {
          operator_delete((void *)uVar7,local_a8 - uVar7);
        }
        uVar7 = local_d8._0_8_;
        uVar6 = local_d8._8_8_;
        for (puVar16 = (undefined8 *)local_d8._0_8_; (undefined8 *)uVar6 != puVar16;
            puVar16 = puVar16 + 3) {
          pvVar19 = (void *)*puVar16;
          if (pvVar19 != (void *)0x0) {
            operator_delete(pvVar19,puVar16[2] - (long)pvVar19);
          }
        }
        if ((undefined8 *)uVar7 != (undefined8 *)0x0) {
          operator_delete((void *)uVar7,(long)local_c8 - uVar7);
        }
      }
    }
    Ref<Mesh>::unref((Ref<Mesh> *)&local_118);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00101d97:
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



/* CanvasItem::_edit_get_minimum_size() const */

undefined8 CanvasItem::_edit_get_minimum_size(void)

{
  return 0xbf800000bf800000;
}



/* CanvasItem::_edit_use_pivot() const */

undefined8 CanvasItem::_edit_use_pivot(void)

{
  return 0;
}



/* CanvasItem::_edit_set_pivot(Vector2 const&) */

void CanvasItem::_edit_set_pivot(Vector2 *param_1)

{
  return;
}



/* CanvasItem::_edit_get_pivot() const */

undefined8 CanvasItem::_edit_get_pivot(void)

{
  return 0;
}



/* CanvasItem::get_anchorable_rect() const */

undefined1  [16] CanvasItem::get_anchorable_rect(void)

{
  return ZEXT816(0);
}



/* MeshInstance2D::is_class_ptr(void*) const */

uint __thiscall MeshInstance2D::is_class_ptr(MeshInstance2D *this,void *param_1)

{
  return (uint)CONCAT71(0x10b6,(undefined4 *)param_1 == &Node2D::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10b6,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10b6,(undefined4 *)param_1 == &CanvasItem::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10b6,(undefined4 *)param_1 == &Node::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10b7,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* MeshInstance2D::_property_can_revertv(StringName const&) const */

undefined8 MeshInstance2D::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* MeshInstance2D::_property_get_revertv(StringName const&, Variant&) const */

undefined8 MeshInstance2D::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* NavigationMeshSourceGeometryData2D::is_class_ptr(void*) const */

uint __thiscall
NavigationMeshSourceGeometryData2D::is_class_ptr
          (NavigationMeshSourceGeometryData2D *this,void *param_1)

{
  return (uint)CONCAT71(0x10b6,(undefined4 *)param_1 == &Resource::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10b6,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10b7,(undefined4 *)param_1 == &RefCounted::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10b7,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* NavigationMeshSourceGeometryData2D::_validate_propertyv(PropertyInfo&) const */

void NavigationMeshSourceGeometryData2D::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* NavigationMeshSourceGeometryData2D::_property_can_revertv(StringName const&) const */

undefined8 NavigationMeshSourceGeometryData2D::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* NavigationMeshSourceGeometryData2D::_property_get_revertv(StringName const&, Variant&) const */

undefined8
NavigationMeshSourceGeometryData2D::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* NavigationMeshSourceGeometryData2D::_notificationv(int, bool) */

void NavigationMeshSourceGeometryData2D::_notificationv(int param_1,bool param_2)

{
  return;
}



/* CallableCustomStaticMethodPointer<void, Ref<NavigationPolygon> const&,
   Ref<NavigationMeshSourceGeometryData2D>, Node*>::~CallableCustomStaticMethodPointer() */

void __thiscall
CallableCustomStaticMethodPointer<void,Ref<NavigationPolygon>const&,Ref<NavigationMeshSourceGeometryData2D>,Node*>
::~CallableCustomStaticMethodPointer
          (CallableCustomStaticMethodPointer<void,Ref<NavigationPolygon>const&,Ref<NavigationMeshSourceGeometryData2D>,Node*>
           *this)

{
  return;
}



/* CallableCustomMethodPointer<CanvasItem, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<CanvasItem,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<CanvasItem,void> *this)

{
  return;
}



/* MethodBindTRC<Ref<Texture2D>>::_gen_argument_type(int) const */

undefined8 MethodBindTRC<Ref<Texture2D>>::_gen_argument_type(int param_1)

{
  return 0x18;
}



/* MethodBindTRC<Ref<Texture2D>>::get_argument_meta(int) const */

undefined8 MethodBindTRC<Ref<Texture2D>>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindT<Ref<Texture2D> const&>::_gen_argument_type(int) const */

byte __thiscall
MethodBindT<Ref<Texture2D>const&>::_gen_argument_type
          (MethodBindT<Ref<Texture2D>const&> *this,int param_1)

{
  return -(param_1 == 0) & 0x18;
}



/* MethodBindT<Ref<Texture2D> const&>::get_argument_meta(int) const */

undefined8 MethodBindT<Ref<Texture2D>const&>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindTRC<Ref<Mesh>>::_gen_argument_type(int) const */

undefined8 MethodBindTRC<Ref<Mesh>>::_gen_argument_type(int param_1)

{
  return 0x18;
}



/* MethodBindTRC<Ref<Mesh>>::get_argument_meta(int) const */

undefined8 MethodBindTRC<Ref<Mesh>>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindT<Ref<Mesh> const&>::_gen_argument_type(int) const */

byte __thiscall
MethodBindT<Ref<Mesh>const&>::_gen_argument_type(MethodBindT<Ref<Mesh>const&> *this,int param_1)

{
  return -(param_1 == 0) & 0x18;
}



/* MethodBindT<Ref<Mesh> const&>::get_argument_meta(int) const */

undefined8 MethodBindT<Ref<Mesh>const&>::get_argument_meta(int param_1)

{
  return 0;
}



/* CallableCustomStaticMethodPointer<void, Ref<NavigationPolygon> const&,
   Ref<NavigationMeshSourceGeometryData2D>, Node*>::is_valid() const */

undefined8
CallableCustomStaticMethodPointer<void,Ref<NavigationPolygon>const&,Ref<NavigationMeshSourceGeometryData2D>,Node*>
::is_valid(void)

{
  return 1;
}



/* CallableCustomStaticMethodPointer<void, Ref<NavigationPolygon> const&,
   Ref<NavigationMeshSourceGeometryData2D>, Node*>::get_object() const */

undefined8
CallableCustomStaticMethodPointer<void,Ref<NavigationPolygon>const&,Ref<NavigationMeshSourceGeometryData2D>,Node*>
::get_object(void)

{
  return 0;
}



/* CallableCustomStaticMethodPointer<void, Ref<NavigationPolygon> const&,
   Ref<NavigationMeshSourceGeometryData2D>, Node*>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomStaticMethodPointer<void,Ref<NavigationPolygon>const&,Ref<NavigationMeshSourceGeometryData2D>,Node*>
::get_argument_count
          (CallableCustomStaticMethodPointer<void,Ref<NavigationPolygon>const&,Ref<NavigationMeshSourceGeometryData2D>,Node*>
           *this,bool *param_1)

{
  *param_1 = true;
  return 3;
}



/* CallableCustomMethodPointer<CanvasItem, void>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<CanvasItem,void>::get_argument_count
          (CallableCustomMethodPointer<CanvasItem,void> *this,bool *param_1)

{
  *param_1 = true;
  return 0;
}



/* CallableCustomMethodPointer<CanvasItem, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<CanvasItem,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<CanvasItem,void> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomStaticMethodPointer<void, Ref<NavigationPolygon> const&,
   Ref<NavigationMeshSourceGeometryData2D>, Node*>::~CallableCustomStaticMethodPointer() */

void __thiscall
CallableCustomStaticMethodPointer<void,Ref<NavigationPolygon>const&,Ref<NavigationMeshSourceGeometryData2D>,Node*>
::~CallableCustomStaticMethodPointer
          (CallableCustomStaticMethodPointer<void,Ref<NavigationPolygon>const&,Ref<NavigationMeshSourceGeometryData2D>,Node*>
           *this)

{
  operator_delete(this,0x30);
  return;
}



/* MethodBindT<Ref<Mesh> const&>::~MethodBindT() */

void __thiscall MethodBindT<Ref<Mesh>const&>::~MethodBindT(MethodBindT<Ref<Mesh>const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010b538;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<Ref<Mesh> const&>::~MethodBindT() */

void __thiscall MethodBindT<Ref<Mesh>const&>::~MethodBindT(MethodBindT<Ref<Mesh>const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010b538;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<Ref<Mesh>>::~MethodBindTRC() */

void __thiscall MethodBindTRC<Ref<Mesh>>::~MethodBindTRC(MethodBindTRC<Ref<Mesh>> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010b598;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<Ref<Mesh>>::~MethodBindTRC() */

void __thiscall MethodBindTRC<Ref<Mesh>>::~MethodBindTRC(MethodBindTRC<Ref<Mesh>> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010b598;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<Ref<Texture2D> const&>::~MethodBindT() */

void __thiscall
MethodBindT<Ref<Texture2D>const&>::~MethodBindT(MethodBindT<Ref<Texture2D>const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010b5f8;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<Ref<Texture2D> const&>::~MethodBindT() */

void __thiscall
MethodBindT<Ref<Texture2D>const&>::~MethodBindT(MethodBindT<Ref<Texture2D>const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010b5f8;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<Ref<Texture2D>>::~MethodBindTRC() */

void __thiscall MethodBindTRC<Ref<Texture2D>>::~MethodBindTRC(MethodBindTRC<Ref<Texture2D>> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010b658;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<Ref<Texture2D>>::~MethodBindTRC() */

void __thiscall MethodBindTRC<Ref<Texture2D>>::~MethodBindTRC(MethodBindTRC<Ref<Texture2D>> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010b658;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
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



/* NavigationMeshSourceGeometryData2D::_getv(StringName const&, Variant&) const */

undefined8 NavigationMeshSourceGeometryData2D::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)_GLOBAL_OFFSET_TABLE_ != Object::_get) {
    uVar1 = NavigationMeshSourceGeometryData2D::_get(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* NavigationMeshSourceGeometryData2D::_setv(StringName const&, Variant const&) */

undefined8 NavigationMeshSourceGeometryData2D::_setv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)PTR__set_0010f008 != Object::_set) {
    uVar1 = NavigationMeshSourceGeometryData2D::_set(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* Clipper2Lib::ClipperD::~ClipperD() */

void __thiscall Clipper2Lib::ClipperD::~ClipperD(ClipperD *this)

{
  *(undefined ***)this = &PTR__ClipperD_0010b108;
  Clipper2Lib::ClipperBase::~ClipperBase((ClipperBase *)this);
  return;
}



/* Clipper2Lib::ClipperD::~ClipperD() */

void __thiscall Clipper2Lib::ClipperD::~ClipperD(ClipperD *this)

{
  *(undefined ***)this = &PTR__ClipperD_0010b108;
  Clipper2Lib::ClipperBase::~ClipperBase((ClipperBase *)this);
  operator_delete(this,0x110);
  return;
}



/* MeshInstance2D::_getv(StringName const&, Variant&) const */

undefined8 MeshInstance2D::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)PTR__get_0010f010 != Object::_get) {
    uVar1 = CanvasItem::_get(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* MeshInstance2D::_setv(StringName const&, Variant const&) */

undefined8 MeshInstance2D::_setv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)PTR__set_0010f018 != Object::_set) {
    uVar1 = CanvasItem::_set(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* CallableCustomMethodPointer<CanvasItem, void>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<CanvasItem,void>::get_object
          (CallableCustomMethodPointer<CanvasItem,void> *this)

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
      goto LAB_0010248d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0010248d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0010248d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* MeshInstance2D::_validate_propertyv(PropertyInfo&) const */

void MeshInstance2D::_validate_propertyv(PropertyInfo *param_1)

{
  Node::_validate_property(param_1);
  if ((code *)PTR__validate_property_0010f020 == Node::_validate_property) {
    return;
  }
  CanvasItem::_validate_property(param_1);
  return;
}



/* MeshInstance2D::_notificationv(int, bool) */

void __thiscall MeshInstance2D::_notificationv(MeshInstance2D *this,int param_1,bool param_2)

{
  int iVar1;
  long in_FS_OFFSET;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = (int)this;
  if (param_2) {
    if ((param_1 == 0x1e) && (*(long *)(this + 0x580) != 0)) {
LAB_001025fa:
      local_48 = 0x3f800000;
      local_40 = 0x3f80000000000000;
      local_38 = 0;
      CanvasItem::draw_mesh
                ((Ref *)this,(Ref *)(this + 0x580),(Transform2D *)(this + 0x588),(Color *)&local_48)
      ;
      if (!param_2) goto LAB_00102652;
    }
    if ((code *)PTR__notification_0010f028 != CanvasItem::_notification) {
      Node2D::_notification(iVar1);
    }
    CanvasItem::_notification(iVar1);
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      Node::_notification(iVar1);
      return;
    }
  }
  else {
    Node::_notification(iVar1);
    CanvasItem::_notification(iVar1);
    if ((code *)PTR__notification_0010f028 != CanvasItem::_notification) {
      Node2D::_notification(iVar1);
    }
    if ((param_1 == 0x1e) && (*(long *)(this + 0x580) != 0)) goto LAB_001025fa;
LAB_00102652:
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MeshInstance2D::~MeshInstance2D() */

void __thiscall MeshInstance2D::~MeshInstance2D(MeshInstance2D *this)

{
  Object *pOVar1;
  char cVar2;
  
  *(undefined ***)this = &PTR__initialize_classv_0010b128;
  if (*(long *)(this + 0x588) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0x588);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  if (*(long *)(this + 0x580) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0x580);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  *(code **)this = predelete_handler;
  CanvasItem::~CanvasItem((CanvasItem *)this);
  return;
}



/* MeshInstance2D::~MeshInstance2D() */

void __thiscall MeshInstance2D::~MeshInstance2D(MeshInstance2D *this)

{
  Object *pOVar1;
  char cVar2;
  
  *(undefined ***)this = &PTR__initialize_classv_0010b128;
  if (*(long *)(this + 0x588) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0x588);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  if (*(long *)(this + 0x580) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0x580);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  *(code **)this = predelete_handler;
  CanvasItem::~CanvasItem((CanvasItem *)this);
  operator_delete(this,0x590);
  return;
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



/* MeshInstance2D::_get_class_namev() const */

undefined8 * MeshInstance2D::_get_class_namev(void)

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
LAB_00102983:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00102983;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"MeshInstance2D");
      goto LAB_001029ee;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"MeshInstance2D");
LAB_001029ee:
  return &_get_class_namev()::_class_name_static;
}



/* NavigationMeshSourceGeometryData2D::_get_class_namev() const */

undefined8 * NavigationMeshSourceGeometryData2D::_get_class_namev(void)

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
LAB_00102a83:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00102a83;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,
                 "NavigationMeshSourceGeometryData2D");
      goto LAB_00102aee;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,
             "NavigationMeshSourceGeometryData2D");
LAB_00102aee:
  return &_get_class_namev()::_class_name_static;
}



/* CowData<int>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<int>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* MeshInstance2D::_bind_methods() [clone .cold] */

void MeshInstance2D::_bind_methods(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<Vector2>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<Vector2>::_copy_on_write(void)

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



/* CowData<char32_t>::_ref(CowData<char32_t> const&) */

void __thiscall CowData<char32_t>::_ref(CowData<char32_t> *this,CowData *param_1)

{
  if (*(long *)this != *(long *)param_1) {
    _ref(this,param_1);
    return;
  }
  return;
}



/* MeshInstance2D::get_class() const */

void MeshInstance2D::get_class(void)

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



/* NavigationMeshSourceGeometryData2D::get_class() const */

void NavigationMeshSourceGeometryData2D::get_class(void)

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



/* std::vector<std::vector<Clipper2Lib::Point<long>, std::allocator<Clipper2Lib::Point<long> > >,
   std::allocator<std::vector<Clipper2Lib::Point<long>, std::allocator<Clipper2Lib::Point<long> > >
   > >::reserve(unsigned long) */

void __thiscall
std::
vector<std::vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>>,std::allocator<std::vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>>>>
::reserve(vector<std::vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>>,std::allocator<std::vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>>>>
          *this,ulong param_1)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  
  if (0x555555555555555 < param_1) {
                    /* WARNING: Subroutine does not return */
    std::__throw_length_error("vector::reserve");
  }
  lVar1 = *(long *)this;
  if (param_1 <= (ulong)((*(long *)(this + 0x10) - lVar1 >> 3) * -0x5555555555555555)) {
    return;
  }
  lVar2 = *(long *)(this + 8);
  puVar8 = (undefined8 *)operator_new(param_1 * 0x18);
  puVar3 = *(undefined8 **)(this + 8);
  puVar4 = *(undefined8 **)this;
  puVar7 = puVar8;
  for (puVar9 = puVar4; puVar3 != puVar9; puVar9 = puVar9 + 3) {
    uVar6 = puVar9[1];
    uVar5 = puVar9[2];
    *puVar7 = *puVar9;
    puVar7[1] = uVar6;
    puVar7[2] = uVar5;
    puVar7 = puVar7 + 3;
  }
  if (puVar4 != (undefined8 *)0x0) {
    operator_delete(puVar4,*(long *)(this + 0x10) - (long)puVar4);
  }
  *(undefined8 **)this = puVar8;
  *(long *)(this + 8) = (lVar2 - lVar1) + (long)puVar8;
  *(undefined8 **)(this + 0x10) = puVar8 + param_1 * 3;
  return;
}



/* Callable create_custom_callable_function_pointer<CanvasItem>(CanvasItem*, char const*, void
   (CanvasItem::*)()) */

CanvasItem *
create_custom_callable_function_pointer<CanvasItem>
          (CanvasItem *param_1,char *param_2,_func_void *param_3)

{
  undefined8 uVar1;
  CallableCustom *this;
  undefined8 in_RCX;
  undefined8 in_R8;
  
  this = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(this);
  *(undefined **)(this + 0x20) = &_LC15;
  *(undefined1 (*) [16])(this + 0x30) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined ***)this = &PTR_hash_0010b418;
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



/* PropertyInfo::~PropertyInfo() */

void __thiscall PropertyInfo::~PropertyInfo(PropertyInfo *this)

{
  long *plVar1;
  long lVar2;
  
  CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0x20));
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



/* MethodBindTRC<Ref<Texture2D>>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<Ref<Texture2D>>::_gen_argument_type_info(int param_1)

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
  local_48 = "Texture2D";
  local_40 = 9;
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
      goto LAB_001033f5;
    }
  }
  StringName::StringName((StringName *)&local_48,(String *)(puVar1 + 8),false);
  if (*(char **)(puVar1 + 4) == local_48) {
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  else {
    StringName::unref();
    *(char **)(puVar1 + 4) = local_48;
  }
LAB_001033f5:
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



/* MethodBindTRC<Ref<Mesh>>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<Ref<Mesh>>::_gen_argument_type_info(int param_1)

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
  local_48 = &_LC22;
  local_40 = 4;
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
      goto LAB_00103565;
    }
  }
  StringName::StringName((StringName *)&local_48,(String *)(puVar1 + 8),false);
  if (*(undefined **)(puVar1 + 4) == local_48) {
    if ((StringName::configured != '\0') && (local_48 != (undefined *)0x0)) {
      StringName::unref();
    }
  }
  else {
    StringName::unref();
    *(undefined **)(puVar1 + 4) = local_48;
  }
LAB_00103565:
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



/* CallableCustomMethodPointer<CanvasItem, void>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<CanvasItem,void>::call
          (CallableCustomMethodPointer<CanvasItem,void> *this,Variant **param_1,int param_2,
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
      goto LAB_001037ff;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] == 0) goto LAB_001037ff;
    lVar1 = *(long *)(this + 0x28);
    UNRECOVERED_JUMPTABLE = *(code **)(this + 0x38);
    lVar2 = *(long *)(this + 0x40);
    if (param_2 == 0) {
      *(undefined4 *)param_4 = 0;
      if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
        UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar1 + lVar2) + -1);
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x001037d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),uVar5,UNRECOVERED_JUMPTABLE);
        return;
      }
      goto LAB_001038b0;
    }
    *(undefined4 *)param_4 = 3;
    *(undefined4 *)(param_4 + 8) = 0;
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
LAB_001037ff:
    local_40 = 0;
    String::parse_latin1((String *)&local_40,"\', can\'t call method.");
    uitos((ulong)local_50);
    operator+((char *)local_48,(String *)"Invalid Object id \'");
    String::operator+(local_38,(String *)local_48);
    _err_print_error(&_LC27,"./core/object/callable_method_pointer.h",0x67,
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
LAB_001038b0:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CanvasItem::is_class(String const&) const */

undefined8 __thiscall CanvasItem::is_class(CanvasItem *this,String *param_1)

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
            if (lVar3 == 0) goto LAB_0010393f;
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
LAB_0010393f:
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
    if (cVar6 != '\0') goto LAB_001039f3;
  }
  cVar6 = String::operator==(param_1,"CanvasItem");
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
      if (cVar6 != '\0') goto LAB_001039f3;
    }
    cVar6 = String::operator==(param_1,"Node");
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
        if (cVar6 != '\0') goto LAB_001039f3;
      }
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar8 = String::operator==(param_1,"Object");
        return uVar8;
      }
      goto LAB_00103bd8;
    }
  }
LAB_001039f3:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_00103bd8:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MeshInstance2D::is_class(String const&) const */

undefined8 __thiscall MeshInstance2D::is_class(MeshInstance2D *this,String *param_1)

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
            if (lVar3 == 0) goto LAB_00103c5f;
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
LAB_00103c5f:
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
    if (cVar6 != '\0') goto LAB_00103d13;
  }
  cVar6 = String::operator==(param_1,"MeshInstance2D");
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
      if (cVar6 != '\0') goto LAB_00103d13;
    }
    cVar6 = String::operator==(param_1,"Node2D");
    if (cVar6 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar8 = CanvasItem::is_class((CanvasItem *)this,param_1);
        return uVar8;
      }
      goto LAB_00103e1e;
    }
  }
LAB_00103d13:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_00103e1e:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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
    if ((code *)PTR__bind_methods_0010f038 != RefCounted::_bind_methods) {
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
  if ((code *)PTR__bind_methods_0010f030 != RefCounted::_bind_methods) {
    Resource::_bind_methods();
  }
  initialize_class()::initialized = 1;
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* NavigationMeshSourceGeometryData2D::_initialize_classv() */

void NavigationMeshSourceGeometryData2D::_initialize_classv(void)

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
    local_48 = "NavigationMeshSourceGeometryData2D";
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
    if ((code *)PTR__bind_methods_0010f040 != Resource::_bind_methods) {
      NavigationMeshSourceGeometryData2D::_bind_methods();
    }
    initialize_class()::initialized = '\x01';
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
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
            if (lVar3 == 0) goto LAB_0010423f;
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
LAB_0010423f:
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
    if (cVar6 != '\0') goto LAB_001042f3;
  }
  cVar6 = String::operator==(param_1,"RefCounted");
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
      if (cVar6 != '\0') goto LAB_001042f3;
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar8 = String::operator==(param_1,"Object");
      return uVar8;
    }
  }
  else {
LAB_001042f3:
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
            if (lVar4 == 0) goto LAB_0010446f;
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
LAB_0010446f:
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
    if (cVar5 != '\0') goto LAB_00104523;
  }
  cVar5 = String::operator==(param_1,"Resource");
  if (cVar5 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = RefCounted::is_class((RefCounted *)this,param_1);
      return uVar7;
    }
  }
  else {
LAB_00104523:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* NavigationMeshSourceGeometryData2D::is_class(String const&) const */

undefined8 __thiscall
NavigationMeshSourceGeometryData2D::is_class
          (NavigationMeshSourceGeometryData2D *this,String *param_1)

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
            if (lVar4 == 0) goto LAB_001045ef;
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
LAB_001045ef:
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
    if (cVar5 != '\0') goto LAB_001046a3;
  }
  cVar5 = String::operator==(param_1,"NavigationMeshSourceGeometryData2D");
  if (cVar5 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = Resource::is_class((Resource *)this,param_1);
      return uVar7;
    }
  }
  else {
LAB_001046a3:
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
  local_78 = &_LC29;
  local_88 = 0;
  local_90 = 0;
  local_70 = 4;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = &_LC29;
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
      goto LAB_0010485c;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0010485c:
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
      goto LAB_00104aac;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00104aac:
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
      goto LAB_00104d11;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00104d11:
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



/* NavigationMeshSourceGeometryData2D::_get_property_listv(List<PropertyInfo, DefaultAllocator>*,
   bool) const */

void __thiscall
NavigationMeshSourceGeometryData2D::_get_property_listv
          (NavigationMeshSourceGeometryData2D *this,List *param_1,bool param_2)

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
  local_78 = "NavigationMeshSourceGeometryData2D";
  local_70 = 0x22;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "NavigationMeshSourceGeometryData2D";
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
      goto LAB_00104fc1;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00104fc1:
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
  StringName::StringName((StringName *)&local_78,"NavigationMeshSourceGeometryData2D",false);
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
      goto LAB_00105271;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00105271:
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
  if ((code *)PTR__get_property_list_0010f048 != Object::_get_property_list) {
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



/* Node2D::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall Node2D::_get_property_listv(Node2D *this,List *param_1,bool param_2)

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
  local_78 = "Node2D";
  local_70 = 6;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "Node2D";
  local_98 = 0;
  local_70 = 6;
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
      goto LAB_00105541;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00105541:
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
  StringName::StringName((StringName *)&local_78,"Node2D",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
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



/* MeshInstance2D::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall MeshInstance2D::_get_property_listv(MeshInstance2D *this,List *param_1,bool param_2)

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
    Node2D::_get_property_listv((Node2D *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "MeshInstance2D";
  local_70 = 0xe;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "MeshInstance2D";
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
      goto LAB_001057f1;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_001057f1:
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
  StringName::StringName((StringName *)&local_78,"MeshInstance2D",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      Node2D::_get_property_listv((Node2D *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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



/* MethodBindT<Ref<Mesh> const&>::_gen_argument_type_info(int) const */

undefined4 * MethodBindT<Ref<Mesh>const&>::_gen_argument_type_info(int param_1)

{
  long lVar1;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar2;
  long in_FS_OFFSET;
  undefined8 local_80;
  undefined8 local_78;
  long local_70;
  undefined *local_68;
  long local_60;
  long local_58;
  undefined4 local_50;
  long local_48;
  undefined4 local_40;
  long local_30;
  
  puVar2 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *puVar2 = 0;
  puVar2[6] = 0;
  *(undefined8 *)(puVar2 + 8) = 0;
  puVar2[10] = 6;
  *(undefined1 (*) [16])(puVar2 + 2) = (undefined1  [16])0x0;
  if (in_EDX == 0) {
    local_70 = 0;
    local_78 = 0;
    local_68 = &_LC22;
    local_60 = 4;
    String::parse_latin1((StrRange *)&local_78);
    local_80 = 0;
    PropertyInfo::PropertyInfo
              ((PropertyInfo *)&local_68,0x18,(CowData<char32_t> *)&local_80,0x11,
               (StrRange *)&local_78,6,&local_70);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
    if ((StringName::configured != '\0') && (local_70 != 0)) {
      StringName::unref();
    }
    *puVar2 = local_68._0_4_;
    if (*(long *)(puVar2 + 2) != local_60) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(puVar2 + 2));
      lVar1 = local_60;
      local_60 = 0;
      *(long *)(puVar2 + 2) = lVar1;
    }
    if (*(long *)(puVar2 + 4) != local_58) {
      StringName::unref();
      lVar1 = local_58;
      local_58 = 0;
      *(long *)(puVar2 + 4) = lVar1;
    }
    puVar2[6] = local_50;
    if (*(long *)(puVar2 + 8) != local_48) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(puVar2 + 8));
      lVar1 = local_48;
      local_48 = 0;
      *(long *)(puVar2 + 8) = lVar1;
    }
    puVar2[10] = local_40;
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
    if ((StringName::configured != '\0') && (local_58 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Ref<Texture2D> const&>::_gen_argument_type_info(int) const */

undefined4 * MethodBindT<Ref<Texture2D>const&>::_gen_argument_type_info(int param_1)

{
  long lVar1;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar2;
  long in_FS_OFFSET;
  undefined8 local_80;
  undefined8 local_78;
  long local_70;
  char *local_68;
  long local_60;
  long local_58;
  undefined4 local_50;
  long local_48;
  undefined4 local_40;
  long local_30;
  
  puVar2 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *puVar2 = 0;
  puVar2[6] = 0;
  *(undefined8 *)(puVar2 + 8) = 0;
  puVar2[10] = 6;
  *(undefined1 (*) [16])(puVar2 + 2) = (undefined1  [16])0x0;
  if (in_EDX == 0) {
    local_70 = 0;
    local_78 = 0;
    local_68 = "Texture2D";
    local_60 = 9;
    String::parse_latin1((StrRange *)&local_78);
    local_80 = 0;
    PropertyInfo::PropertyInfo
              ((PropertyInfo *)&local_68,0x18,(CowData<char32_t> *)&local_80,0x11,
               (StrRange *)&local_78,6,&local_70);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
    if ((StringName::configured != '\0') && (local_70 != 0)) {
      StringName::unref();
    }
    *puVar2 = local_68._0_4_;
    if (*(long *)(puVar2 + 2) != local_60) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(puVar2 + 2));
      lVar1 = local_60;
      local_60 = 0;
      *(long *)(puVar2 + 2) = lVar1;
    }
    if (*(long *)(puVar2 + 4) != local_58) {
      StringName::unref();
      lVar1 = local_58;
      local_58 = 0;
      *(long *)(puVar2 + 4) = lVar1;
    }
    puVar2[6] = local_50;
    if (*(long *)(puVar2 + 8) != local_48) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(puVar2 + 8));
      lVar1 = local_48;
      local_48 = 0;
      *(long *)(puVar2 + 8) = lVar1;
    }
    puVar2[10] = local_40;
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
    if ((StringName::configured != '\0') && (local_58 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void std::vector<std::vector<Clipper2Lib::Point<double>,
   std::allocator<Clipper2Lib::Point<double> > >,
   std::allocator<std::vector<Clipper2Lib::Point<double>, std::allocator<Clipper2Lib::Point<double>
   > > > >::_M_realloc_insert<std::vector<Clipper2Lib::Point<double>,
   std::allocator<Clipper2Lib::Point<double> > >
   const&>(__gnu_cxx::__normal_iterator<std::vector<Clipper2Lib::Point<double>,
   std::allocator<Clipper2Lib::Point<double> > >*,
   std::vector<std::vector<Clipper2Lib::Point<double>, std::allocator<Clipper2Lib::Point<double> >
   >, std::allocator<std::vector<Clipper2Lib::Point<double>,
   std::allocator<Clipper2Lib::Point<double> > > > > >, std::vector<Clipper2Lib::Point<double>,
   std::allocator<Clipper2Lib::Point<double> > > const&) */

void __thiscall
std::
vector<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>,std::allocator<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>>>
::
_M_realloc_insert<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>const&>
          (vector<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>,std::allocator<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>>>
           *this,undefined8 *param_2,long *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  void *pvVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long lVar12;
  undefined8 *puVar13;
  long *extraout_RDX;
  long lVar14;
  undefined1 (*pauVar15) [16];
  ulong uVar16;
  
  puVar1 = *(undefined8 **)(this + 8);
  puVar2 = *(undefined8 **)this;
  lVar5 = (long)puVar1 - (long)puVar2 >> 3;
  uVar6 = lVar5 * -0x5555555555555555;
  if (uVar6 == 0x555555555555555) {
                    /* WARNING: Subroutine does not return */
    std::__throw_length_error("vector::_M_realloc_insert");
  }
  pauVar15 = (undefined1 (*) [16])((long)param_2 - (long)puVar2);
  if (puVar2 == puVar1) {
    if (uVar6 != 0xffffffffffffffff) {
      uVar16 = 0x555555555555555;
      if (uVar6 + 1 < 0x555555555555556) {
        uVar16 = uVar6 + 1;
      }
      uVar6 = uVar16 * 0x18;
      goto LAB_00106085;
    }
  }
  else {
    uVar16 = lVar5 * 0x5555555555555556;
    if (uVar6 <= uVar16) {
      if (uVar16 != 0) goto LAB_001060f5;
      puVar11 = (undefined8 *)0x0;
      goto LAB_00105f12;
    }
  }
  uVar6 = 0x7ffffffffffffff8;
  uVar16 = 0x555555555555555;
LAB_00106085:
  while( true ) {
    puVar11 = (undefined8 *)operator_new(uVar6);
LAB_00105f12:
    lVar5 = param_3[1];
    lVar14 = *param_3;
    pauVar15 = (undefined1 (*) [16])(*pauVar15 + (long)puVar11);
    *(undefined8 *)pauVar15[1] = 0;
    *pauVar15 = (undefined1  [16])0x0;
    uVar6 = lVar5 - lVar14;
    if (uVar6 == 0) break;
    if (uVar6 < 0x7ffffffffffffff1) {
      pvVar7 = operator_new(uVar6);
      lVar5 = param_3[1];
      lVar14 = *param_3;
LAB_00105f75:
      *(void **)*pauVar15 = pvVar7;
      *(ulong *)pauVar15[1] = uVar6 + (long)pvVar7;
      if (lVar5 != lVar14) {
        lVar12 = 0;
        do {
          uVar3 = ((undefined8 *)(lVar14 + lVar12))[1];
          *(undefined8 *)((long)pvVar7 + lVar12) = *(undefined8 *)(lVar14 + lVar12);
          ((undefined8 *)((long)pvVar7 + lVar12))[1] = uVar3;
          lVar12 = lVar12 + 0x10;
        } while (lVar5 - lVar14 != lVar12);
        pvVar7 = (void *)((long)pvVar7 + (lVar5 - lVar14));
      }
      *(void **)(*pauVar15 + 8) = pvVar7;
      puVar8 = puVar2;
      puVar13 = puVar11;
      if (param_2 != puVar2) {
        do {
          uVar4 = puVar8[1];
          uVar3 = puVar8[2];
          puVar9 = puVar8 + 3;
          *puVar13 = *puVar8;
          puVar13[1] = uVar4;
          puVar13[2] = uVar3;
          puVar8 = puVar9;
          puVar13 = puVar13 + 3;
        } while (param_2 != puVar9);
        puVar13 = (undefined8 *)
                  ((long)puVar11 +
                  ((long)param_2 + (-0x18 - (long)puVar2) & 0xfffffffffffffff8U) + 0x18);
      }
      puVar8 = puVar13 + 3;
      puVar9 = param_2;
      if (param_2 != puVar1) {
        do {
          uVar4 = puVar9[1];
          uVar3 = puVar9[2];
          puVar10 = puVar9 + 3;
          *puVar8 = *puVar9;
          puVar8[1] = uVar4;
          puVar8[2] = uVar3;
          puVar9 = puVar10;
          puVar8 = puVar8 + 3;
        } while (puVar1 != puVar10);
        puVar8 = (undefined8 *)
                 ((long)puVar13 +
                 ((long)puVar1 + (-0x18 - (long)param_2) & 0xfffffffffffffff8U) + 0x30);
      }
      if (puVar2 != (undefined8 *)0x0) {
        operator_delete(puVar2,*(long *)(this + 0x10) - (long)puVar2);
      }
      *(undefined8 **)this = puVar11;
      *(undefined8 **)(this + 8) = puVar8;
      *(undefined8 **)(this + 0x10) = puVar11 + uVar16 * 3;
      return;
    }
    std::__throw_bad_array_new_length();
    param_3 = extraout_RDX;
LAB_001060f5:
    if (0x555555555555555 < uVar16) {
      uVar16 = 0x555555555555555;
    }
    uVar6 = uVar16 * 0x18;
  }
  pvVar7 = (void *)0x0;
  goto LAB_00105f75;
}



/* MethodBind* create_method_bind<MeshInstance2D, Ref<Mesh> const&>(void
   (MeshInstance2D::*)(Ref<Mesh> const&)) */

MethodBind * create_method_bind<MeshInstance2D,Ref<Mesh>const&>(_func_void_Ref_ptr *param_1)

{
  MethodBind *this;
  undefined8 in_RSI;
  long in_FS_OFFSET;
  undefined8 local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(this);
  *(_func_void_Ref_ptr **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0010b538;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "MeshInstance2D";
  local_30 = 0xe;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
  StringName::operator=((StringName *)(this + 0x18),(StringName *)&local_38);
  if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_40);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBind* create_method_bind<MeshInstance2D, Ref<Mesh>>(Ref<Mesh> (MeshInstance2D::*)() const)
    */

MethodBind * create_method_bind<MeshInstance2D,Ref<Mesh>>(_func_Ref *param_1)

{
  MethodBind *this;
  undefined8 in_RSI;
  long in_FS_OFFSET;
  undefined8 local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(this);
  *(_func_Ref **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0010b598;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "MeshInstance2D";
  local_30 = 0xe;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
  StringName::operator=((StringName *)(this + 0x18),(StringName *)&local_38);
  if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_40);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBind* create_method_bind<MeshInstance2D, Ref<Texture2D> const&>(void
   (MeshInstance2D::*)(Ref<Texture2D> const&)) */

MethodBind * create_method_bind<MeshInstance2D,Ref<Texture2D>const&>(_func_void_Ref_ptr *param_1)

{
  MethodBind *this;
  undefined8 in_RSI;
  long in_FS_OFFSET;
  undefined8 local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(this);
  *(_func_void_Ref_ptr **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0010b5f8;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "MeshInstance2D";
  local_30 = 0xe;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
  StringName::operator=((StringName *)(this + 0x18),(StringName *)&local_38);
  if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_40);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBind* create_method_bind<MeshInstance2D, Ref<Texture2D>>(Ref<Texture2D>
   (MeshInstance2D::*)() const) */

MethodBind * create_method_bind<MeshInstance2D,Ref<Texture2D>>(_func_Ref *param_1)

{
  MethodBind *this;
  undefined8 in_RSI;
  long in_FS_OFFSET;
  undefined8 local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(this);
  *(_func_Ref **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0010b658;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "MeshInstance2D";
  local_30 = 0xe;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
  StringName::operator=((StringName *)(this + 0x18),(StringName *)&local_38);
  if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_40);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MeshInstance2D::_initialize_classv() */

void MeshInstance2D::_initialize_classv(void)

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
    if (Node2D::initialize_class()::initialized == '\0') {
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
          if ((code *)PTR__bind_methods_0010f038 != Node::_bind_methods) {
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
        if ((code *)PTR__bind_compatibility_methods_0010f050 != Object::_bind_compatibility_methods)
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
      local_58 = "Node2D";
      local_70 = 0;
      local_50 = 6;
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
      if ((code *)PTR__bind_methods_0010f058 != CanvasItem::_bind_methods) {
        Node2D::_bind_methods();
      }
      Node2D::initialize_class()::initialized = '\x01';
    }
    local_58 = "Node2D";
    local_68 = 0;
    local_50 = 6;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "MeshInstance2D";
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
    _bind_methods();
    initialize_class()::initialized = '\x01';
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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



/* void std::vector<Clipper2Lib::Point<double>, std::allocator<Clipper2Lib::Point<double> >
   >::_M_realloc_insert<Clipper2Lib::Point<double>
   const&>(__gnu_cxx::__normal_iterator<Clipper2Lib::Point<double>*,
   std::vector<Clipper2Lib::Point<double>, std::allocator<Clipper2Lib::Point<double> > > >,
   Clipper2Lib::Point<double> const&) */

void __thiscall
std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>::
_M_realloc_insert<Clipper2Lib::Point<double>const&>
          (vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>> *this,
          undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long lVar11;
  
  puVar1 = *(undefined8 **)(this + 8);
  puVar2 = *(undefined8 **)this;
  uVar5 = (long)puVar1 - (long)puVar2 >> 4;
  if (uVar5 == 0x7ffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    std::__throw_length_error("vector::_M_realloc_insert");
  }
  puVar8 = (undefined8 *)((long)param_2 - (long)puVar2);
  if (puVar2 == puVar1) {
    if (0xfffffffffffffffe < uVar5) goto LAB_00106af8;
    uVar7 = 0x7ffffffffffffff;
    if (uVar5 + 1 < 0x800000000000000) {
      uVar7 = uVar5 + 1;
    }
    uVar7 = uVar7 << 4;
LAB_00106b02:
    puVar6 = (undefined8 *)operator_new(uVar7);
    uVar3 = param_3[1];
    lVar11 = uVar7 + (long)puVar6;
    puVar10 = puVar6 + 2;
    *(undefined8 *)((long)puVar6 + (long)puVar8) = *param_3;
    ((undefined8 *)((long)puVar6 + (long)puVar8))[1] = uVar3;
    if (param_2 != puVar2) {
LAB_00106a6a:
      puVar8 = puVar6;
      puVar9 = puVar2;
      do {
        puVar10 = puVar8;
        uVar3 = *puVar9;
        uVar4 = puVar9[1];
        puVar9 = puVar9 + 2;
        *puVar10 = uVar3;
        puVar10[1] = uVar4;
        puVar8 = puVar10 + 2;
      } while (puVar10 + 2 != (undefined8 *)(((long)param_2 - (long)puVar2) + (long)puVar6));
      puVar10 = puVar10 + 4;
    }
    puVar8 = puVar10;
    if (param_2 == puVar1) goto LAB_00106abc;
  }
  else {
    uVar7 = uVar5 * 2;
    if (uVar7 < uVar5) {
LAB_00106af8:
      uVar7 = 0x7ffffffffffffff0;
      goto LAB_00106b02;
    }
    if (uVar7 != 0) {
      if (0x7ffffffffffffff < uVar7) {
        uVar7 = 0x7ffffffffffffff;
      }
      uVar7 = uVar7 << 4;
      goto LAB_00106b02;
    }
    uVar3 = param_3[1];
    lVar11 = 0;
    puVar6 = (undefined8 *)0x0;
    puVar10 = (undefined8 *)0x10;
    *puVar8 = *param_3;
    puVar8[1] = uVar3;
    if (param_2 != puVar2) goto LAB_00106a6a;
  }
  puVar8 = (undefined8 *)((long)puVar10 + ((long)puVar1 - (long)param_2));
  memcpy(puVar10,param_2,(long)puVar1 - (long)param_2);
LAB_00106abc:
  if (puVar2 != (undefined8 *)0x0) {
    operator_delete(puVar2,*(long *)(this + 0x10) - (long)puVar2);
  }
  *(undefined8 **)this = puVar6;
  *(undefined8 **)(this + 8) = puVar8;
  *(long *)(this + 0x10) = lVar11;
  return;
}



/* CowData<Vector2>::_unref() */

void __thiscall CowData<Vector2>::_unref(CowData<Vector2> *this)

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



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Error CowData<Vector2>::resize<false>(long) */

undefined8 __thiscall CowData<Vector2>::resize<false>(CowData<Vector2> *this,long param_1)

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
    lVar3 = lVar8 * 8;
    if (lVar3 != 0) {
      uVar4 = lVar3 - 1U | lVar3 - 1U >> 1;
      uVar4 = uVar4 | uVar4 >> 2;
      uVar4 = uVar4 | uVar4 >> 4;
      uVar4 = uVar4 | uVar4 >> 8;
      uVar4 = uVar4 | uVar4 >> 0x10;
      lVar3 = (uVar4 | uVar4 >> 0x20) + 1;
    }
  }
  if (param_1 * 8 == 0) {
LAB_00106f30:
    _err_print_error("resize","./core/templates/cowdata.h",0x16a,
                     "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                     ,0,0);
    return 6;
  }
  uVar4 = param_1 * 8 - 1;
  uVar4 = uVar4 >> 1 | uVar4;
  uVar4 = uVar4 | uVar4 >> 2;
  uVar4 = uVar4 | uVar4 >> 4;
  uVar4 = uVar4 | uVar4 >> 8;
  uVar4 = uVar4 | uVar4 >> 0x10;
  uVar4 = uVar4 | uVar4 >> 0x20;
  lVar7 = uVar4 + 1;
  if (lVar7 == 0) goto LAB_00106f30;
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
LAB_00106e9c:
    puVar9 = *(undefined8 **)this;
    if (puVar9 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    lVar3 = puVar9[-1];
    if (param_1 <= lVar3) goto LAB_00106e31;
  }
  else {
    if (lVar8 != 0) {
      uVar6 = _realloc(this,lVar7);
      if ((int)uVar6 != 0) {
        return uVar6;
      }
      goto LAB_00106e9c;
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
  memset(puVar9 + lVar3,0,(param_1 - lVar3) * 8);
LAB_00106e31:
  puVar9[-1] = param_1;
  return 0;
}



/* CowData<Vector<Vector2> >::_unref() */

void __thiscall CowData<Vector<Vector2>>::_unref(CowData<Vector<Vector2>> *this)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  long lVar6;
  long lVar7;
  
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
        lVar7 = 0;
        lVar6 = lVar2;
        do {
          if (*(long *)(lVar6 + 8) != 0) {
            LOCK();
            plVar1 = (long *)(*(long *)(lVar6 + 8) + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              lVar4 = *(long *)(lVar6 + 8);
              *(undefined8 *)(lVar6 + 8) = 0;
              Memory::free_static((void *)(lVar4 + -0x10),false);
            }
          }
          lVar7 = lVar7 + 1;
          lVar6 = lVar6 + 0x10;
        } while (lVar3 != lVar7);
      }
      Memory::free_static((void *)(lVar2 + -0x10),false);
      return;
    }
                    /* WARNING: Does not return */
    pcVar5 = (code *)invalidInstructionException();
    (*pcVar5)();
  }
  *(undefined8 *)this = 0;
  return;
}



/* NavigationMeshSourceGeometryData2D::~NavigationMeshSourceGeometryData2D() */

void __thiscall
NavigationMeshSourceGeometryData2D::~NavigationMeshSourceGeometryData2D
          (NavigationMeshSourceGeometryData2D *this)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  long lVar6;
  long lVar7;
  
  *(undefined ***)this = &PTR__initialize_classv_0010af30;
  NavigationMeshSourceGeometryData2D::clear();
  if (*(long *)(this + 0x2b8) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x2b8) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x2b8);
      if (lVar2 == 0) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)invalidInstructionException();
        (*pcVar5)();
      }
      lVar3 = *(long *)(lVar2 + -8);
      *(undefined8 *)(this + 0x2b8) = 0;
      if (lVar3 != 0) {
        lVar7 = 0;
        lVar6 = lVar2;
        do {
          if (*(long *)(lVar6 + 8) != 0) {
            LOCK();
            plVar1 = (long *)(*(long *)(lVar6 + 8) + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              lVar4 = *(long *)(lVar6 + 8);
              *(undefined8 *)(lVar6 + 8) = 0;
              Memory::free_static((void *)(lVar4 + -0x10),false);
            }
          }
          lVar7 = lVar7 + 1;
          lVar6 = lVar6 + 0x18;
        } while (lVar3 != lVar7);
      }
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  CowData<Vector<Vector2>>::_unref((CowData<Vector<Vector2>> *)(this + 0x290));
  CowData<Vector<Vector2>>::_unref((CowData<Vector<Vector2>> *)(this + 0x280));
  Resource::~Resource((Resource *)this);
  return;
}



/* NavigationMeshSourceGeometryData2D::~NavigationMeshSourceGeometryData2D() */

void __thiscall
NavigationMeshSourceGeometryData2D::~NavigationMeshSourceGeometryData2D
          (NavigationMeshSourceGeometryData2D *this)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  long lVar6;
  long lVar7;
  
  *(undefined ***)this = &PTR__initialize_classv_0010af30;
  NavigationMeshSourceGeometryData2D::clear();
  if (*(long *)(this + 0x2b8) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x2b8) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x2b8);
      if (lVar2 == 0) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)invalidInstructionException();
        (*pcVar5)();
      }
      lVar3 = *(long *)(lVar2 + -8);
      *(undefined8 *)(this + 0x2b8) = 0;
      if (lVar3 != 0) {
        lVar7 = 0;
        lVar6 = lVar2;
        do {
          if (*(long *)(lVar6 + 8) != 0) {
            LOCK();
            plVar1 = (long *)(*(long *)(lVar6 + 8) + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              lVar4 = *(long *)(lVar6 + 8);
              *(undefined8 *)(lVar6 + 8) = 0;
              Memory::free_static((void *)(lVar4 + -0x10),false);
            }
          }
          lVar7 = lVar7 + 1;
          lVar6 = lVar6 + 0x18;
        } while (lVar3 != lVar7);
      }
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  CowData<Vector<Vector2>>::_unref((CowData<Vector<Vector2>> *)(this + 0x290));
  CowData<Vector<Vector2>>::_unref((CowData<Vector<Vector2>> *)(this + 0x280));
  Resource::~Resource((Resource *)this);
  operator_delete(this,0x2d8);
  return;
}



/* CallableCustomStaticMethodPointer<void, Ref<NavigationPolygon> const&,
   Ref<NavigationMeshSourceGeometryData2D>, Node*>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */

void __thiscall
CallableCustomStaticMethodPointer<void,Ref<NavigationPolygon>const&,Ref<NavigationMeshSourceGeometryData2D>,Node*>
::call(CallableCustomStaticMethodPointer<void,Ref<NavigationPolygon>const&,Ref<NavigationMeshSourceGeometryData2D>,Node*>
       *this,Variant **param_1,int param_2,Variant *param_3,CallError *param_4)

{
  long *plVar1;
  code *pcVar2;
  Variant *pVVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  char cVar7;
  Object *pOVar8;
  Object *pOVar9;
  Object *pOVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long in_FS_OFFSET;
  Object *local_50;
  Object *local_48;
  long local_40;
  
  pcVar2 = *(code **)(this + 0x28);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (3 < (uint)param_2) {
    *(undefined4 *)param_4 = 3;
    *(undefined4 *)(param_4 + 8) = 3;
    goto LAB_00107277;
  }
  if (param_2 != 3) {
    *(undefined4 *)param_4 = 4;
    *(undefined4 *)(param_4 + 8) = 3;
    goto LAB_00107277;
  }
  pVVar3 = param_1[2];
  *(undefined4 *)param_4 = 0;
  cVar7 = Variant::can_convert_strict(*(undefined4 *)pVVar3,0x18);
  if (cVar7 == '\0') {
LAB_001072c2:
    uVar6 = _LC53;
    *(undefined4 *)param_4 = 2;
    *(undefined8 *)(param_4 + 4) = uVar6;
  }
  else {
    pVVar3 = param_1[2];
    pOVar8 = Variant::operator_cast_to_Object_(pVVar3);
    pOVar10 = Variant::operator_cast_to_Object_(pVVar3);
    if (((pOVar10 == (Object *)0x0) ||
        (lVar11 = __dynamic_cast(pOVar10,&Object::typeinfo,&Node::typeinfo,0), lVar11 == 0)) &&
       (pOVar8 != (Object *)0x0)) goto LAB_001072c2;
  }
  pOVar8 = Variant::operator_cast_to_Object_(param_1[2]);
  if (pOVar8 != (Object *)0x0) {
    pOVar8 = (Object *)__dynamic_cast(pOVar8,&Object::typeinfo,&Node::typeinfo,0);
  }
  cVar7 = Variant::can_convert_strict(*(undefined4 *)param_1[1]);
  uVar6 = _LC54;
  if (cVar7 == '\0') {
    *(undefined4 *)param_4 = 2;
    *(undefined8 *)(param_4 + 4) = uVar6;
  }
  local_50 = (Object *)0x0;
  pOVar9 = (Object *)Variant::get_validated_object();
  pOVar10 = local_50;
  if (pOVar9 != local_50) {
    if (pOVar9 == (Object *)0x0) {
      if (local_50 != (Object *)0x0) {
        local_50 = (Object *)0x0;
LAB_00107385:
        cVar7 = RefCounted::unreference();
        if ((cVar7 != '\0') && (cVar7 = predelete_handler(pOVar10), cVar7 != '\0')) {
          if (*(code **)(*(long *)pOVar10 + 0x140) ==
              NavigationMeshSourceGeometryData2D::~NavigationMeshSourceGeometryData2D) {
            *(undefined ***)pOVar10 = &PTR__initialize_classv_0010af30;
            NavigationMeshSourceGeometryData2D::clear();
            if (*(long *)(pOVar10 + 0x2b8) != 0) {
              LOCK();
              plVar1 = (long *)(*(long *)(pOVar10 + 0x2b8) + -0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                lVar11 = *(long *)(pOVar10 + 0x2b8);
                if (lVar11 == 0) goto LAB_001077b6;
                lVar4 = *(long *)(lVar11 + -8);
                *(undefined8 *)(pOVar10 + 0x2b8) = 0;
                if (lVar4 != 0) {
                  lVar13 = 0;
                  lVar12 = lVar11;
                  do {
                    if (*(long *)(lVar12 + 8) != 0) {
                      LOCK();
                      plVar1 = (long *)(*(long *)(lVar12 + 8) + -0x10);
                      *plVar1 = *plVar1 + -1;
                      UNLOCK();
                      if (*plVar1 == 0) {
                        lVar5 = *(long *)(lVar12 + 8);
                        *(undefined8 *)(lVar12 + 8) = 0;
                        Memory::free_static((void *)(lVar5 + -0x10),false);
                      }
                    }
                    lVar13 = lVar13 + 1;
                    lVar12 = lVar12 + 0x18;
                  } while (lVar4 != lVar13);
                }
                Memory::free_static((void *)(lVar11 + -0x10),false);
              }
            }
            CowData<Vector<Vector2>>::_unref((CowData<Vector<Vector2>> *)(pOVar10 + 0x290));
            CowData<Vector<Vector2>>::_unref((CowData<Vector<Vector2>> *)(pOVar10 + 0x280));
            Resource::~Resource((Resource *)pOVar10);
          }
          else {
            (**(code **)(*(long *)pOVar10 + 0x140))(pOVar10);
          }
          Memory::free_static(pOVar10,false);
        }
      }
    }
    else {
      pOVar9 = (Object *)
               __dynamic_cast(pOVar9,&Object::typeinfo,&NavigationMeshSourceGeometryData2D::typeinfo
                              ,0);
      if (pOVar10 != pOVar9) {
        local_50 = pOVar9;
        if ((pOVar9 != (Object *)0x0) && (cVar7 = RefCounted::reference(), cVar7 == '\0')) {
          local_50 = (Object *)0x0;
        }
        if (pOVar10 != (Object *)0x0) goto LAB_00107385;
      }
    }
  }
  cVar7 = Variant::can_convert_strict(*(undefined4 *)*param_1);
  uVar6 = _LC55;
  if (cVar7 == '\0') {
    *(undefined4 *)param_4 = 2;
    *(undefined8 *)(param_4 + 4) = uVar6;
  }
  local_48 = (Object *)0x0;
  pOVar9 = (Object *)Variant::get_validated_object();
  pOVar10 = local_48;
  if (pOVar9 != local_48) {
    if (pOVar9 == (Object *)0x0) {
      if (local_48 != (Object *)0x0) {
        local_48 = (Object *)0x0;
LAB_0010741b:
        cVar7 = RefCounted::unreference();
        if ((cVar7 != '\0') && (cVar7 = predelete_handler(pOVar10), cVar7 != '\0')) {
          (**(code **)(*(long *)pOVar10 + 0x140))(pOVar10);
          Memory::free_static(pOVar10,false);
        }
      }
    }
    else {
      pOVar9 = (Object *)__dynamic_cast(pOVar9,&Object::typeinfo,&NavigationPolygon::typeinfo,0);
      if (pOVar10 != pOVar9) {
        local_48 = pOVar9;
        if ((pOVar9 != (Object *)0x0) && (cVar7 = RefCounted::reference(), cVar7 == '\0')) {
          local_48 = (Object *)0x0;
        }
        if (pOVar10 != (Object *)0x0) goto LAB_0010741b;
      }
    }
  }
  (*pcVar2)(&local_48,&local_50,pOVar8);
  if (((local_48 != (Object *)0x0) &&
      (cVar7 = RefCounted::unreference(), pOVar8 = local_48, cVar7 != '\0')) &&
     (cVar7 = predelete_handler(local_48), cVar7 != '\0')) {
    (**(code **)(*(long *)pOVar8 + 0x140))(pOVar8);
    Memory::free_static(pOVar8,false);
  }
  if (((local_50 != (Object *)0x0) &&
      (cVar7 = RefCounted::unreference(), pOVar8 = local_50, cVar7 != '\0')) &&
     (cVar7 = predelete_handler(local_50), cVar7 != '\0')) {
    if (*(code **)(*(long *)pOVar8 + 0x140) ==
        NavigationMeshSourceGeometryData2D::~NavigationMeshSourceGeometryData2D) {
      *(undefined ***)pOVar8 = &PTR__initialize_classv_0010af30;
      NavigationMeshSourceGeometryData2D::clear();
      if (*(long *)(pOVar8 + 0x2b8) != 0) {
        LOCK();
        plVar1 = (long *)(*(long *)(pOVar8 + 0x2b8) + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          lVar11 = *(long *)(pOVar8 + 0x2b8);
          if (lVar11 == 0) {
LAB_001077b6:
                    /* WARNING: Does not return */
            pcVar2 = (code *)invalidInstructionException();
            (*pcVar2)();
          }
          lVar4 = *(long *)(lVar11 + -8);
          *(undefined8 *)(pOVar8 + 0x2b8) = 0;
          if (lVar4 != 0) {
            lVar13 = 0;
            lVar12 = lVar11;
            do {
              if (*(long *)(lVar12 + 8) != 0) {
                LOCK();
                plVar1 = (long *)(*(long *)(lVar12 + 8) + -0x10);
                *plVar1 = *plVar1 + -1;
                UNLOCK();
                if (*plVar1 == 0) {
                  lVar5 = *(long *)(lVar12 + 8);
                  *(undefined8 *)(lVar12 + 8) = 0;
                  Memory::free_static((void *)(lVar5 + -0x10),false);
                }
              }
              lVar13 = lVar13 + 1;
              lVar12 = lVar12 + 0x18;
            } while (lVar4 != lVar13);
          }
          Memory::free_static((void *)(lVar11 + -0x10),false);
        }
      }
      CowData<Vector<Vector2>>::_unref((CowData<Vector<Vector2>> *)(pOVar8 + 0x290));
      CowData<Vector<Vector2>>::_unref((CowData<Vector<Vector2>> *)(pOVar8 + 0x280));
      Resource::~Resource((Resource *)pOVar8);
    }
    else {
      (**(code **)(*(long *)pOVar8 + 0x140))(pOVar8);
    }
    Memory::free_static(pOVar8,false);
  }
LAB_00107277:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* void std::vector<Clipper2Lib::Point<long>, std::allocator<Clipper2Lib::Point<long> >
   >::_M_realloc_insert<Clipper2Lib::Point<long>
   >(__gnu_cxx::__normal_iterator<Clipper2Lib::Point<long>*, std::vector<Clipper2Lib::Point<long>,
   std::allocator<Clipper2Lib::Point<long> > > >, Clipper2Lib::Point<long>&&) */

void __thiscall
std::vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>>::
_M_realloc_insert<Clipper2Lib::Point<long>>
          (vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>> *this,
          undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long lVar11;
  
  puVar1 = *(undefined8 **)(this + 8);
  puVar2 = *(undefined8 **)this;
  uVar5 = (long)puVar1 - (long)puVar2 >> 4;
  if (uVar5 == 0x7ffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    std::__throw_length_error("vector::_M_realloc_insert");
  }
  puVar8 = (undefined8 *)((long)param_2 - (long)puVar2);
  if (puVar2 == puVar1) {
    if (0xfffffffffffffffe < uVar5) goto LAB_001078c8;
    uVar7 = 0x7ffffffffffffff;
    if (uVar5 + 1 < 0x800000000000000) {
      uVar7 = uVar5 + 1;
    }
    uVar7 = uVar7 << 4;
LAB_001078d2:
    puVar6 = (undefined8 *)operator_new(uVar7);
    uVar3 = param_3[1];
    lVar11 = uVar7 + (long)puVar6;
    puVar10 = puVar6 + 2;
    *(undefined8 *)((long)puVar6 + (long)puVar8) = *param_3;
    ((undefined8 *)((long)puVar6 + (long)puVar8))[1] = uVar3;
    if (param_2 != puVar2) {
LAB_0010783a:
      puVar8 = puVar6;
      puVar9 = puVar2;
      do {
        puVar10 = puVar8;
        uVar3 = *puVar9;
        uVar4 = puVar9[1];
        puVar9 = puVar9 + 2;
        *puVar10 = uVar3;
        puVar10[1] = uVar4;
        puVar8 = puVar10 + 2;
      } while (puVar10 + 2 != (undefined8 *)(((long)param_2 - (long)puVar2) + (long)puVar6));
      puVar10 = puVar10 + 4;
    }
    puVar8 = puVar10;
    if (param_2 == puVar1) goto LAB_0010788c;
  }
  else {
    uVar7 = uVar5 * 2;
    if (uVar7 < uVar5) {
LAB_001078c8:
      uVar7 = 0x7ffffffffffffff0;
      goto LAB_001078d2;
    }
    if (uVar7 != 0) {
      if (0x7ffffffffffffff < uVar7) {
        uVar7 = 0x7ffffffffffffff;
      }
      uVar7 = uVar7 << 4;
      goto LAB_001078d2;
    }
    uVar3 = param_3[1];
    lVar11 = 0;
    puVar6 = (undefined8 *)0x0;
    puVar10 = (undefined8 *)0x10;
    *puVar8 = *param_3;
    puVar8[1] = uVar3;
    if (param_2 != puVar2) goto LAB_0010783a;
  }
  puVar8 = (undefined8 *)((long)puVar10 + ((long)puVar1 - (long)param_2));
  memcpy(puVar10,param_2,(long)puVar1 - (long)param_2);
LAB_0010788c:
  if (puVar2 != (undefined8 *)0x0) {
    operator_delete(puVar2,*(long *)(this + 0x10) - (long)puVar2);
  }
  *(undefined8 **)this = puVar6;
  *(undefined8 **)(this + 8) = puVar8;
  *(long *)(this + 0x10) = lVar11;
  return;
}



/* std::back_insert_iterator<std::vector<std::vector<Clipper2Lib::Point<long>,
   std::allocator<Clipper2Lib::Point<long> > >, std::allocator<std::vector<Clipper2Lib::Point<long>,
   std::allocator<Clipper2Lib::Point<long> > > > > >
   std::transform<__gnu_cxx::__normal_iterator<std::vector<Clipper2Lib::Point<double>,
   std::allocator<Clipper2Lib::Point<double> > > const*,
   std::vector<std::vector<Clipper2Lib::Point<double>, std::allocator<Clipper2Lib::Point<double> >
   >, std::allocator<std::vector<Clipper2Lib::Point<double>,
   std::allocator<Clipper2Lib::Point<double> > > > > >,
   std::back_insert_iterator<std::vector<std::vector<Clipper2Lib::Point<long>,
   std::allocator<Clipper2Lib::Point<long> > >, std::allocator<std::vector<Clipper2Lib::Point<long>,
   std::allocator<Clipper2Lib::Point<long> > > > > >, Clipper2Lib::ScalePaths<long,
   double>(std::vector<std::vector<Clipper2Lib::Point<double>,
   std::allocator<Clipper2Lib::Point<double> > >,
   std::allocator<std::vector<Clipper2Lib::Point<double>, std::allocator<Clipper2Lib::Point<double>
   > > > > const&, double, double, int&)::{lambda(auto:1
   const&)#1}>(__gnu_cxx::__normal_iterator<std::vector<Clipper2Lib::Point<double>,
   std::allocator<Clipper2Lib::Point<double> > > const*,
   std::vector<std::vector<Clipper2Lib::Point<double>, std::allocator<Clipper2Lib::Point<double> >
   >, std::allocator<std::vector<Clipper2Lib::Point<double>,
   std::allocator<Clipper2Lib::Point<double> > > > > >,
   __gnu_cxx::__normal_iterator<std::vector<Clipper2Lib::Point<double>,
   std::allocator<Clipper2Lib::Point<double> > > const*,
   std::vector<std::vector<Clipper2Lib::Point<double>, std::allocator<Clipper2Lib::Point<double> >
   >, std::allocator<std::vector<Clipper2Lib::Point<double>,
   std::allocator<Clipper2Lib::Point<double> > > > > >,
   std::back_insert_iterator<std::vector<std::vector<Clipper2Lib::Point<long>,
   std::allocator<Clipper2Lib::Point<long> > >, std::allocator<std::vector<Clipper2Lib::Point<long>,
   std::allocator<Clipper2Lib::Point<long> > > > > >, Clipper2Lib::ScalePaths<long,
   double>(std::vector<std::vector<Clipper2Lib::Point<double>,
   std::allocator<Clipper2Lib::Point<double> > >,
   std::allocator<std::vector<Clipper2Lib::Point<double>, std::allocator<Clipper2Lib::Point<double>
   > > > > const&, double, double, int&)::{lambda(auto:1 const&)#1}) [clone .isra.0] */

void std::
     transform<__gnu_cxx::__normal_iterator<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>const*,std::vector<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>,std::allocator<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>>>>,std::back_insert_iterator<std::vector<std::vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>>,std::allocator<std::vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>>>>>,Clipper2Lib::ScalePaths<long,double>(std::vector<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>,std::allocator<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>>>const&,double,double,int&)::_lambda(auto:1_const&)_1_>
               (undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  ulong uVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  ulong uVar12;
  double *pdVar13;
  undefined8 *puVar14;
  double *pdVar15;
  long in_FS_OFFSET;
  double dVar16;
  double dVar17;
  uint *in_stack_00000008;
  double in_stack_00000010;
  double in_stack_00000018;
  double local_98;
  double local_90;
  long local_68;
  long lStack_60;
  undefined1 local_58 [16];
  long *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 != param_2) {
    do {
      local_48 = (long *)0x0;
      local_58 = (undefined1  [16])0x0;
      if (in_stack_00000018 == 0.0 || in_stack_00000010 == 0.0) {
        *in_stack_00000008 = *in_stack_00000008 | 2;
        if (in_stack_00000010 == 0.0) {
          if (in_stack_00000018 == 0.0) {
            local_98 = _LC56;
            local_90 = local_98;
          }
          else {
            local_98 = _LC56;
            local_90 = in_stack_00000018;
          }
        }
        else {
          local_98 = in_stack_00000010;
          local_90 = _LC56;
        }
      }
      else {
        local_90 = in_stack_00000018;
        local_98 = in_stack_00000010;
      }
      pdVar15 = (double *)param_1[1];
      pdVar13 = (double *)*param_1;
      uVar12 = (long)pdVar15 - (long)pdVar13;
      if (0x7ffffffffffffff0 < uVar12) {
                    /* WARNING: Subroutine does not return */
        std::__throw_length_error("vector::reserve");
      }
      if (uVar12 != 0) {
        local_58._8_8_ = operator_new(uVar12);
        pdVar15 = (double *)param_1[1];
        local_48 = (long *)(local_58._8_8_ + uVar12);
        pdVar13 = (double *)*param_1;
        local_58._0_8_ = local_58._8_8_;
      }
      for (; pdVar15 != pdVar13; pdVar13 = pdVar13 + 2) {
        while( true ) {
          dVar16 = round(local_98 * *pdVar13);
          dVar17 = round(local_90 * pdVar13[1]);
          local_68 = (long)dVar16;
          lStack_60 = (long)dVar17;
          if ((long *)local_58._8_8_ != local_48) break;
          pdVar13 = pdVar13 + 2;
          vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>>::
          _M_realloc_insert<Clipper2Lib::Point<long>>
                    ((vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>> *)
                     local_58,local_58._8_8_,&local_68);
          if (pdVar15 == pdVar13) goto LAB_00107b00;
        }
        *(long *)local_58._8_8_ = local_68;
        *(long *)(local_58._8_8_ + 8) = lStack_60;
        local_58._8_8_ = (long *)(local_58._8_8_ + 0x10);
      }
LAB_00107b00:
      puVar14 = (undefined8 *)param_3[1];
      puVar11 = (undefined8 *)param_3[2];
      if (puVar14 == puVar11) {
        puVar1 = (undefined8 *)*param_3;
        puVar9 = (undefined8 *)((long)puVar14 - (long)puVar1);
        uVar12 = ((long)puVar9 >> 3) * -0x5555555555555555;
        if (uVar12 == 0x555555555555555) {
                    /* WARNING: Subroutine does not return */
          std::__throw_length_error("vector::_M_realloc_insert");
        }
        if (puVar14 == puVar1) {
          uVar7 = uVar12 + 1;
          if (0xfffffffffffffffe < uVar12) goto LAB_00107ca5;
          if (0x555555555555555 < uVar7) {
            uVar7 = 0x555555555555555;
          }
          uVar7 = uVar7 * 0x18;
LAB_00107caf:
          puVar6 = (undefined8 *)operator_new(uVar7);
          plVar4 = local_48;
          uVar2 = local_58._0_8_;
          uVar3 = local_58._8_8_;
          puVar11 = (undefined8 *)param_3[2];
          local_58 = (undefined1  [16])0x0;
          puVar9 = (undefined8 *)((long)puVar9 + (long)puVar6);
          lVar8 = uVar7 + (long)puVar6;
          local_48 = (long *)0x0;
          *puVar9 = uVar2;
          puVar9[1] = uVar3;
          puVar9[2] = plVar4;
          puVar9 = puVar1;
          puVar10 = puVar6;
          if (puVar14 != puVar1) goto LAB_00107c40;
          puVar14 = puVar6 + 3;
        }
        else {
          uVar7 = ((long)puVar9 >> 3) * 0x5555555555555556;
          if (uVar7 < uVar12) {
LAB_00107ca5:
            uVar7 = 0x7ffffffffffffff8;
            goto LAB_00107caf;
          }
          if (uVar7 != 0) {
            if (0x555555555555555 < uVar7) {
              uVar7 = 0x555555555555555;
            }
            uVar7 = uVar7 * 0x18;
            goto LAB_00107caf;
          }
          lVar8 = 0;
          puVar9[2] = local_48;
          *puVar9 = local_58._0_8_;
          puVar9[1] = local_58._8_8_;
          puVar6 = (undefined8 *)0x0;
          puVar9 = puVar1;
          puVar10 = puVar6;
LAB_00107c40:
          do {
            uVar3 = puVar9[1];
            uVar2 = puVar9[2];
            puVar5 = puVar9 + 3;
            *puVar6 = *puVar9;
            puVar6[1] = uVar3;
            puVar6[2] = uVar2;
            puVar9 = puVar5;
            puVar6 = puVar6 + 3;
          } while (puVar14 != puVar5);
          puVar14 = (undefined8 *)
                    ((long)puVar10 +
                    ((long)puVar14 + (-0x18 - (long)puVar1) & 0xfffffffffffffff8U) + 0x30);
          puVar6 = puVar10;
        }
        if (puVar1 != (undefined8 *)0x0) {
          operator_delete(puVar1,(long)puVar11 - (long)puVar1);
        }
        *param_3 = puVar6;
        param_3[1] = puVar14;
        param_3[2] = lVar8;
      }
      else {
        *puVar14 = local_58._0_8_;
        puVar14[1] = local_58._8_8_;
        puVar14[2] = local_48;
        param_3[1] = puVar14 + 3;
      }
      param_1 = param_1 + 3;
    } while (param_2 != param_1);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Clipper2Lib::BooleanOp(Clipper2Lib::ClipType, Clipper2Lib::FillRule,
   std::vector<std::vector<Clipper2Lib::Point<double>, std::allocator<Clipper2Lib::Point<double> >
   >, std::allocator<std::vector<Clipper2Lib::Point<double>,
   std::allocator<Clipper2Lib::Point<double> > > > > const&,
   std::vector<std::vector<Clipper2Lib::Point<double>, std::allocator<Clipper2Lib::Point<double> >
   >, std::allocator<std::vector<Clipper2Lib::Point<double>,
   std::allocator<Clipper2Lib::Point<double> > > > > const&, int) */

Clipper2Lib * __thiscall
Clipper2Lib::BooleanOp
          (Clipper2Lib *this,undefined4 param_2,undefined4 param_3,undefined8 *param_4,
          undefined8 *param_5,int param_6)

{
  undefined8 *puVar1;
  void *pvVar2;
  double dVar3;
  double dVar4;
  double *pdVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined8 uVar9;
  char cVar10;
  int iVar11;
  double *pdVar12;
  long lVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  long in_FS_OFFSET;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  undefined1 local_1b8 [16];
  long local_1a8;
  uint *local_198;
  double dStack_190;
  double dStack_188;
  undefined1 local_178 [16];
  double local_168;
  undefined **local_158;
  undefined8 local_150;
  undefined4 local_148;
  undefined1 local_120 [16];
  undefined1 local_110 [16];
  undefined1 local_100 [16];
  undefined1 local_f0 [16];
  undefined1 local_e0 [16];
  undefined1 local_c8 [16];
  undefined1 local_b8 [16];
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  undefined1 local_80;
  uint local_7c;
  undefined1 local_77;
  undefined1 local_70 [16];
  undefined8 local_60;
  double local_58;
  double dStack_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (0x10 < param_6 + 8U) {
    *(undefined8 *)(this + 0x10) = 0;
    *(undefined1 (*) [16])this = (undefined1  [16])0x0;
    goto LAB_00107dd7;
  }
  *(undefined1 (*) [16])this = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x10) = 0;
  puVar15 = &local_150;
  for (lVar13 = 0x1c; lVar13 != 0; lVar13 = lVar13 + -1) {
    *puVar15 = 0;
    puVar15 = puVar15 + 1;
  }
  local_120 = (undefined1  [16])0x0;
  local_110 = (undefined1  [16])0x0;
  local_100 = (undefined1  [16])0x0;
  local_f0 = (undefined1  [16])0x0;
  local_e0 = (undefined1  [16])0x0;
  local_c8 = (undefined1  [16])0x0;
  local_b8 = (undefined1  [16])0x0;
  local_a8 = (undefined1  [16])0x0;
  local_98 = (undefined1  [16])0x0;
  local_70 = (undefined1  [16])0x0;
  local_158 = &PTR__ClipperD_0010b108;
  local_148 = 2;
  local_80 = 1;
  local_77 = 1;
  local_60 = 0;
  dVar16 = pow(_LC60,(double)param_6);
  iVar11 = ilogb(dVar16);
  dVar17 = pow(_LC61,(double)(iVar11 + 1));
  dVar8 = _LC62;
  dVar6 = _LC59;
  dVar7 = _LC58;
  puVar15 = (undefined8 *)*param_4;
  puVar1 = (undefined8 *)param_4[1];
  local_178 = (undefined1  [16])0x0;
  local_168 = 0.0;
  dStack_50 = _LC56 / dVar17;
  puVar14 = puVar15;
  dVar19 = _LC58;
  dVar20 = _LC58;
  dVar18 = _LC59;
  dVar16 = _LC59;
  local_58 = dVar17;
  if (puVar15 == puVar1) {
LAB_001082e1:
    std::
    vector<std::vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>>,std::allocator<std::vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>>>>
    ::reserve((vector<std::vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>>,std::allocator<std::vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>>>>
               *)local_178,((long)puVar1 - (long)puVar15 >> 3) * -0x5555555555555555);
    local_198 = &local_7c;
    dStack_190 = dVar17;
    dStack_188 = dVar17;
    std::
    transform<__gnu_cxx::__normal_iterator<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>const*,std::vector<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>,std::allocator<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>>>>,std::back_insert_iterator<std::vector<std::vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>>,std::allocator<std::vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>>>>>,Clipper2Lib::ScalePaths<long,double>(std::vector<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>,std::allocator<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>>>const&,double,double,int&)::_lambda(auto:1_const&)_1_>
              (*param_4,param_4[1],
               (vector<std::vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>>,std::allocator<std::vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>>>>
                *)local_178);
  }
  else {
    do {
      pdVar5 = (double *)*puVar14;
      while (dVar4 = dVar16, pdVar5 != (double *)puVar14[1]) {
        dVar21 = *pdVar5;
        pdVar12 = pdVar5 + 2;
        dVar3 = dVar21;
        if (dVar21 <= dVar19) {
          dVar3 = dVar19;
        }
        if (dVar18 <= dVar21) {
          dVar21 = dVar18;
        }
        dVar16 = pdVar5[1];
        dVar18 = dVar16;
        if (dVar16 <= dVar20) {
          dVar18 = dVar20;
        }
        pdVar5 = pdVar12;
        dVar19 = dVar3;
        dVar20 = dVar18;
        dVar18 = dVar21;
        if (dVar4 <= dVar16) {
          dVar16 = dVar4;
        }
      }
      puVar14 = puVar14 + 3;
      dVar16 = dVar4;
    } while (puVar1 != puVar14);
    if ((((_LC62 <= dVar18 * dVar17) && (dVar19 * dVar17 <= _LC63)) && (_LC62 <= dVar4 * dVar17)) &&
       (dVar20 * dVar17 <= _LC63)) goto LAB_001082e1;
    local_7c = 0x40;
  }
  Clipper2Lib::ClipperBase::AddPaths((ClipperBase *)&local_158,local_178,0,0);
  uVar9 = local_178._8_8_;
  puVar15 = (undefined8 *)local_178._0_8_;
  if (local_178._8_8_ != local_178._0_8_) {
    do {
      pvVar2 = (void *)*puVar15;
      if (pvVar2 != (void *)0x0) {
        operator_delete(pvVar2,puVar15[2] - (long)pvVar2);
      }
      puVar15 = puVar15 + 3;
    } while ((undefined8 *)uVar9 != puVar15);
  }
  if ((undefined8 *)local_178._0_8_ != (undefined8 *)0x0) {
    operator_delete((void *)local_178._0_8_,(long)local_168 - local_178._0_8_);
  }
  dVar20 = local_58;
  local_1a8 = 0;
  local_1b8 = (undefined1  [16])0x0;
  dVar16 = dVar7;
  dVar19 = dVar6;
  for (puVar15 = (undefined8 *)*param_5; puVar15 != (undefined8 *)param_5[1]; puVar15 = puVar15 + 3)
  {
    pdVar5 = (double *)*puVar15;
    dVar18 = dVar19;
    while (dVar19 = dVar18, pdVar5 != (double *)puVar15[1]) {
      dVar17 = *pdVar5;
      pdVar12 = pdVar5 + 2;
      dVar4 = dVar17;
      if (dVar17 <= dVar7) {
        dVar4 = dVar7;
      }
      if (dVar6 <= dVar17) {
        dVar17 = dVar6;
      }
      dVar18 = pdVar5[1];
      dVar21 = dVar18;
      if (dVar18 <= dVar16) {
        dVar21 = dVar16;
      }
      pdVar5 = pdVar12;
      dVar6 = dVar17;
      dVar7 = dVar4;
      dVar16 = dVar21;
      if (dVar19 <= dVar18) {
        dVar18 = dVar19;
      }
    }
  }
  if (((dVar6 * local_58 < dVar8) || (_LC63 < dVar7 * local_58)) ||
     ((dVar19 * local_58 < dVar8 || (_LC63 < dVar16 * local_58)))) {
    local_7c = local_7c | 0x40;
  }
  else {
    std::
    vector<std::vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>>,std::allocator<std::vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>>>>
    ::reserve((vector<std::vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>>,std::allocator<std::vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>>>>
               *)local_1b8,((long)param_5[1] - (long)*param_5 >> 3) * -0x5555555555555555);
    local_178._8_8_ = dVar20;
    local_178._0_8_ = &local_7c;
    local_168 = dVar20;
    std::
    transform<__gnu_cxx::__normal_iterator<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>const*,std::vector<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>,std::allocator<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>>>>,std::back_insert_iterator<std::vector<std::vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>>,std::allocator<std::vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>>>>>,Clipper2Lib::ScalePaths<long,double>(std::vector<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>,std::allocator<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>>>const&,double,double,int&)::_lambda(auto:1_const&)_1_>
              (*param_5,param_5[1],
               (vector<std::vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>>,std::allocator<std::vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>>>>
                *)local_1b8);
  }
  Clipper2Lib::ClipperBase::AddPaths((ClipperBase *)&local_158,local_1b8,1,0);
  uVar9 = local_1b8._8_8_;
  puVar15 = (undefined8 *)local_1b8._0_8_;
  if (local_1b8._8_8_ != local_1b8._0_8_) {
    do {
      pvVar2 = (void *)*puVar15;
      if (pvVar2 != (void *)0x0) {
        operator_delete(pvVar2,puVar15[2] - (long)pvVar2);
      }
      puVar15 = puVar15 + 3;
    } while ((undefined8 *)uVar9 != puVar15);
  }
  if ((undefined8 *)local_1b8._0_8_ != (undefined8 *)0x0) {
    operator_delete((void *)local_1b8._0_8_,local_1a8 - local_1b8._0_8_);
  }
  local_1b8 = (undefined1  [16])0x0;
  local_1a8 = 0;
  cVar10 = Clipper2Lib::ClipperBase::ExecuteInternal((ClipperBase *)&local_158,param_2,param_3,0);
  if (cVar10 != '\0') {
    Clipper2Lib::ClipperD::BuildPathsD((vector *)&local_158,(vector *)this);
  }
  Clipper2Lib::ClipperBase::CleanUp();
  uVar9 = local_1b8._8_8_;
  puVar15 = (undefined8 *)local_1b8._0_8_;
  if (local_1b8._8_8_ != local_1b8._0_8_) {
    do {
      pvVar2 = (void *)*puVar15;
      if (pvVar2 != (void *)0x0) {
        operator_delete(pvVar2,puVar15[2] - (long)pvVar2);
      }
      puVar15 = puVar15 + 3;
    } while ((undefined8 *)uVar9 != puVar15);
  }
  if ((undefined8 *)local_1b8._0_8_ != (undefined8 *)0x0) {
    operator_delete((void *)local_1b8._0_8_,local_1a8 - local_1b8._0_8_);
  }
  local_158 = &PTR__ClipperD_0010b108;
  Clipper2Lib::ClipperBase::~ClipperBase((ClipperBase *)&local_158);
LAB_00107dd7:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return this;
}



/* WARNING: Removing unreachable block (ram,0x00108558) */
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



/* MethodBindTRC<Ref<Texture2D>>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTRC<Ref<Texture2D>>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  Object *pOVar2;
  char cVar3;
  Variant *pVVar4;
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
      local_58 = (Object *)0x108708;
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error(&_LC27,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_00108900;
    }
    if ((StringName::configured != '\0') && (local_58 != (Object *)0x0)) {
      StringName::unref();
    }
  }
  pVVar4 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D == 0) {
    if ((param_2[5] == (Variant *)0x0) || (-1 < *(int *)(param_2[5] + -8))) {
      *in_R9 = 0;
      if (((ulong)pVVar4 & 1) != 0) {
        pVVar4 = *(Variant **)(pVVar4 + *(long *)((long)plVar6 + (long)pVVar1) + -1);
      }
      (*(code *)pVVar4)(&local_58);
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
LAB_00108900:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Ref<Texture2D>>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<Ref<Texture2D>>::ptrcall
          (MethodBindTRC<Ref<Texture2D>> *this,Object *param_1,void **param_2,void *param_3)

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
      local_48 = (Object *)0x108708;
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x27e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00108c16;
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
    if (pOVar5 == (Object *)0x0) goto LAB_00108c16;
    *(undefined8 *)param_3 = 0;
    goto LAB_00108c59;
  }
  pOVar3 = (Object *)__dynamic_cast(local_48,&Object::typeinfo,&RefCounted::typeinfo,0);
                    /* WARNING: Load size is inaccurate */
  pOVar5 = *param_3;
  if (pOVar5 != pOVar3) {
    *(Object **)param_3 = pOVar3;
    if (pOVar3 == (Object *)0x0) {
      if (pOVar5 != (Object *)0x0) goto LAB_00108c59;
    }
    else {
      cVar1 = RefCounted::reference();
      if (cVar1 == '\0') {
        *(undefined8 *)param_3 = 0;
      }
      if (pOVar5 != (Object *)0x0) {
LAB_00108c59:
        cVar1 = RefCounted::unreference();
        if (cVar1 != '\0') {
          cVar1 = predelete_handler(pOVar5);
          if (cVar1 != '\0') {
            (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
            Memory::free_static(pOVar5,false);
          }
        }
      }
      if (local_48 == (Object *)0x0) goto LAB_00108c16;
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
LAB_00108c16:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Ref<Texture2D> const&>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<Ref<Texture2D>const&>::validated_call
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
      local_58 = (Object *)0x108708;
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
      goto LAB_00108f18;
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
LAB_00108ed6:
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
      pOVar4 = (Object *)__dynamic_cast(pOVar4,&Object::typeinfo,&Texture2D::typeinfo,0);
      if (pOVar2 != pOVar4) {
        local_58 = pOVar4;
        if (pOVar4 != (Object *)0x0) {
          cVar3 = RefCounted::reference();
          if (cVar3 == '\0') {
            local_58 = (Object *)0x0;
          }
        }
        if (pOVar2 != (Object *)0x0) goto LAB_00108ed6;
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
LAB_00108f18:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Ref<Texture2D> const&>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<Ref<Texture2D>const&>::ptrcall(Object *param_1,void **param_2,void *param_3)

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
      local_48 = (Object *)0x108708;
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
      goto LAB_001091dc;
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
LAB_001091b8:
    local_48 = (Object *)0x0;
  }
  else {
    cVar3 = RefCounted::init_ref();
    if (cVar3 == '\0') goto LAB_001091b8;
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
LAB_001091dc:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Ref<Mesh>>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTRC<Ref<Mesh>>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  Object *pOVar2;
  char cVar3;
  Variant *pVVar4;
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
      local_58 = (Object *)0x108708;
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error(&_LC27,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_001094a0;
    }
    if ((StringName::configured != '\0') && (local_58 != (Object *)0x0)) {
      StringName::unref();
    }
  }
  pVVar4 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D == 0) {
    if ((param_2[5] == (Variant *)0x0) || (-1 < *(int *)(param_2[5] + -8))) {
      *in_R9 = 0;
      if (((ulong)pVVar4 & 1) != 0) {
        pVVar4 = *(Variant **)(pVVar4 + *(long *)((long)plVar6 + (long)pVVar1) + -1);
      }
      (*(code *)pVVar4)(&local_58);
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
LAB_001094a0:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Ref<Mesh>>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<Ref<Mesh>>::ptrcall
          (MethodBindTRC<Ref<Mesh>> *this,Object *param_1,void **param_2,void *param_3)

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
      local_48 = (Object *)0x108708;
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x27e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00109726;
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
    if (pOVar5 == (Object *)0x0) goto LAB_00109726;
    *(undefined8 *)param_3 = 0;
    goto LAB_00109769;
  }
  pOVar3 = (Object *)__dynamic_cast(local_48,&Object::typeinfo,&RefCounted::typeinfo,0);
                    /* WARNING: Load size is inaccurate */
  pOVar5 = *param_3;
  if (pOVar5 != pOVar3) {
    *(Object **)param_3 = pOVar3;
    if (pOVar3 == (Object *)0x0) {
      if (pOVar5 != (Object *)0x0) goto LAB_00109769;
    }
    else {
      cVar1 = RefCounted::reference();
      if (cVar1 == '\0') {
        *(undefined8 *)param_3 = 0;
      }
      if (pOVar5 != (Object *)0x0) {
LAB_00109769:
        cVar1 = RefCounted::unreference();
        if (cVar1 != '\0') {
          cVar1 = predelete_handler(pOVar5);
          if (cVar1 != '\0') {
            (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
            Memory::free_static(pOVar5,false);
          }
        }
      }
      if (local_48 == (Object *)0x0) goto LAB_00109726;
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
LAB_00109726:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Ref<Mesh> const&>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<Ref<Mesh>const&>::validated_call
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
      local_58 = (Object *)0x108708;
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
      goto LAB_00109a28;
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
LAB_001099e6:
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
      pOVar4 = (Object *)__dynamic_cast(pOVar4,&Object::typeinfo,&Mesh::typeinfo,0);
      if (pOVar2 != pOVar4) {
        local_58 = pOVar4;
        if (pOVar4 != (Object *)0x0) {
          cVar3 = RefCounted::reference();
          if (cVar3 == '\0') {
            local_58 = (Object *)0x0;
          }
        }
        if (pOVar2 != (Object *)0x0) goto LAB_001099e6;
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
LAB_00109a28:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Ref<Mesh> const&>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<Ref<Mesh>const&>::ptrcall(Object *param_1,void **param_2,void *param_3)

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
      local_48 = (Object *)0x108708;
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
      goto LAB_00109cec;
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
LAB_00109cc8:
    local_48 = (Object *)0x0;
  }
  else {
    cVar3 = RefCounted::init_ref();
    if (cVar3 == '\0') goto LAB_00109cc8;
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
LAB_00109cec:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Ref<Texture2D> const&>::call(Object*, Variant const**, int, Callable::CallError&)
   const */

Object * MethodBindT<Ref<Texture2D>const&>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  long lVar2;
  code *pcVar3;
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
  Variant *pVVar12;
  Variant *pVVar13;
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
      local_48 = (Object *)0x108708;
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error(&_LC27,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0010a0d0;
    }
    if ((StringName::configured != '\0') && (local_48 != (Object *)0x0)) {
      StringName::unref();
    }
  }
  pVVar13 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (1 < in_R8D) {
    uVar7 = 3;
LAB_0010a0c5:
    *in_R9 = uVar7;
    in_R9[2] = 1;
    goto LAB_0010a0d0;
  }
  pVVar12 = param_2[5];
  if (pVVar12 == (Variant *)0x0) {
    if (in_R8D != 1) goto LAB_0010a120;
LAB_0010a110:
    pVVar12 = *(Variant **)param_4;
  }
  else {
    lVar2 = *(long *)(pVVar12 + -8);
    if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_0010a120:
      uVar7 = 4;
      goto LAB_0010a0c5;
    }
    if (in_R8D == 1) goto LAB_0010a110;
    lVar10 = (long)((int)lVar2 + -1);
    if (lVar2 <= lVar10) {
      _err_print_index_error
                ("get","./core/templates/cowdata.h",0xdb,lVar10,lVar2,"p_index","size()","",false,
                 true);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    pVVar12 = pVVar12 + lVar10 * 0x18;
  }
  *in_R9 = 0;
  if (((ulong)pVVar13 & 1) != 0) {
    pVVar13 = *(Variant **)(pVVar13 + *(long *)((long)plVar11 + (long)pVVar1) + -1);
  }
  cVar6 = Variant::can_convert_strict(*(undefined4 *)pVVar12);
  uVar4 = _LC55;
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
LAB_0010a23d:
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
      pOVar8 = (Object *)__dynamic_cast(pOVar8,&Object::typeinfo,&Texture2D::typeinfo,0);
      if (pOVar5 != pOVar8) {
        local_48 = pOVar8;
        if (pOVar8 != (Object *)0x0) {
          cVar6 = RefCounted::reference();
          if (cVar6 == '\0') {
            local_48 = (Object *)0x0;
          }
        }
        if (pOVar5 != (Object *)0x0) goto LAB_0010a23d;
      }
    }
  }
  (*(code *)pVVar13)((Variant *)((long)plVar11 + (long)pVVar1));
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
LAB_0010a0d0:
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Ref<Mesh> const&>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindT<Ref<Mesh>const&>::call
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
      _err_print_error(&_LC27,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0010a4d8;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar13 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (1 < in_R8D) {
    uVar7 = 3;
LAB_0010a4cd:
    *in_R9 = uVar7;
    in_R9[2] = 1;
    goto LAB_0010a4d8;
  }
  pVVar12 = param_2[5];
  if (pVVar12 == (Variant *)0x0) {
    if (in_R8D != 1) goto LAB_0010a530;
LAB_0010a520:
    pVVar12 = *(Variant **)param_4;
  }
  else {
    lVar2 = *(long *)(pVVar12 + -8);
    if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_0010a530:
      uVar7 = 4;
      goto LAB_0010a4cd;
    }
    if (in_R8D == 1) goto LAB_0010a520;
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
  uVar5 = _LC55;
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
        goto LAB_0010a49f;
      }
    }
    else {
      pcVar8 = (char *)__dynamic_cast(pcVar8,&Object::typeinfo,&Mesh::typeinfo,0);
      if (pcVar3 != pcVar8) {
        local_48 = pcVar3;
        local_50 = pcVar8;
        if ((pcVar8 != (char *)0x0) && (cVar6 = RefCounted::reference(), cVar6 == '\0')) {
          local_50 = (char *)0x0;
        }
LAB_0010a49f:
        Ref<Mesh>::unref((Ref<Mesh> *)&local_48);
      }
    }
  }
  (*(code *)pVVar13)((Variant *)((long)plVar11 + (long)pVVar1),(Ref<Mesh> *)&local_50);
  Ref<Mesh>::unref((Ref<Mesh> *)&local_50);
LAB_0010a4d8:
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* MethodBindTRC<Ref<Mesh>>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTRC<Ref<Mesh>>::validated_call
          (MethodBindTRC<Ref<Mesh>> *this,Object *param_1,Variant **param_2,Variant *param_3)

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
      local_48 = (Variant **)0x108708;
      local_50 = (Object *)0x0;
      local_40 = (Object *)0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x273,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0010a7c6;
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
LAB_0010a7c6:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Ref<Texture2D>>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTRC<Ref<Texture2D>>::validated_call
          (MethodBindTRC<Ref<Texture2D>> *this,Object *param_1,Variant **param_2,Variant *param_3)

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
      local_48 = (Variant **)0x108708;
      local_50 = (Object *)0x0;
      local_40 = (Object *)0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x273,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0010a9f6;
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
LAB_0010a9f6:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MeshInstance2D::_navmesh_source_geometry_parsing_callback */

void MeshInstance2D::_GLOBAL__sub_I__navmesh_source_geometry_parsing_callback(void)

{
  _navmesh_source_geometry_parsing_callback._0_8_ = 0;
  _navmesh_source_geometry_parsing_callback._8_8_ = 0;
  __cxa_atexit(Callable::~Callable,_navmesh_source_geometry_parsing_callback,&__dso_handle);
  _navmesh_source_geometry_parser = 0;
  return;
}



/* WARNING: Control flow encountered bad instruction data */
/* PropertyInfo::~PropertyInfo() */

void __thiscall PropertyInfo::~PropertyInfo(PropertyInfo *this)

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
/* MeshInstance2D::~MeshInstance2D() */

void __thiscall MeshInstance2D::~MeshInstance2D(MeshInstance2D *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* Clipper2Lib::ClipperD::~ClipperD() */

void __thiscall Clipper2Lib::ClipperD::~ClipperD(ClipperD *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<Ref<Texture2D>>::~MethodBindTRC() */

void __thiscall MethodBindTRC<Ref<Texture2D>>::~MethodBindTRC(MethodBindTRC<Ref<Texture2D>> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<Ref<Texture2D> const&>::~MethodBindT() */

void __thiscall
MethodBindT<Ref<Texture2D>const&>::~MethodBindT(MethodBindT<Ref<Texture2D>const&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<Ref<Mesh>>::~MethodBindTRC() */

void __thiscall MethodBindTRC<Ref<Mesh>>::~MethodBindTRC(MethodBindTRC<Ref<Mesh>> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<Ref<Mesh> const&>::~MethodBindT() */

void __thiscall MethodBindT<Ref<Mesh>const&>::~MethodBindT(MethodBindT<Ref<Mesh>const&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<CanvasItem, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<CanvasItem,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<CanvasItem,void> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomStaticMethodPointer<void, Ref<NavigationPolygon> const&,
   Ref<NavigationMeshSourceGeometryData2D>, Node*>::~CallableCustomStaticMethodPointer() */

void __thiscall
CallableCustomStaticMethodPointer<void,Ref<NavigationPolygon>const&,Ref<NavigationMeshSourceGeometryData2D>,Node*>
::~CallableCustomStaticMethodPointer
          (CallableCustomStaticMethodPointer<void,Ref<NavigationPolygon>const&,Ref<NavigationMeshSourceGeometryData2D>,Node*>
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



/* WARNING: Control flow encountered bad instruction data */
/* NavigationMeshSourceGeometryData2D::~NavigationMeshSourceGeometryData2D() */

void __thiscall
NavigationMeshSourceGeometryData2D::~NavigationMeshSourceGeometryData2D
          (NavigationMeshSourceGeometryData2D *this)

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


